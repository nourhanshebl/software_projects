#include <avr/io.h>
#include  "config.h"
#include  "mflex.h"
#include  "mlcd.h"
void init_ADC(int _ch, int Ref, int Prescaler){
    /*
       ADMUX:

        - Select Channel.
        - Select Voltage Reference.
        - Data Adjust. (neglect)

        ADCSRA:

        - Enable ADC.
        - Enable Interrupt. (neglect)
        - Select Prescaler.
     
     */
    ADMUX = 0x00;  // 00100000
    ADMUX |= _ch;  //00000001
    ADMUX |= (Ref<<REFS0);
    
    ADCSRA &= 0xF8;  // 11111000
    ADCSRA |= Prescaler;   // _PS128
    ADCSRA |= (1<<ADEN);
    
}

void ADC_SC(){
    // Start Conversion.
    ADCSRA |= (1<<ADSC);
}

int ADC_read(){
    
    // Wait HERE till Flag rises
    // while(!(ADCSRA & (1<<ADIF)));
    int data = ADCL;
    data |= (ADCH<<8);
    return data;
    
}


void init_Interrupt_ADC(){
    ADCSRA |= (1<<ADIE);
}

void selectADCch(int chNum)
{
    switch (chNum)
    {
        case 0:
            init_ADC(_CH0, _AVCC , _PRE128);
            break;
        case 1:
            init_ADC(_CH1, _AVCC , _PRE128);
            break;
        case 2:
            init_ADC(_CH2, _AVCC , _PRE128);
            break;
        case 3:
            init_ADC(_CH3, _AVCC , _PRE128);
            break;
        case 4:
            init_ADC(_CH4, _AVCC , _PRE128);
            break;
    }
}
void data_deaf(int messageNo)
{
    char str1[]= "love you";
    char str2[]= "Good Job";
    char str3[]= "You";
    char str4[]= "This is terrible";
    char str5[]= "Really love you";
    char str6[]= "I'm watching you";
    char str7[]= "I wish you a happy life";
    char str8[]= "invalid data";
    
    switch (messageNo)
    {
        case 1:
            
            for(int i = 0; str1[i]!= '\0'; i++){
            LCD_write_4bit(str1[i]);
            }
            break;
        case 2:
            
            for(int i = 0; str2[i]!= '\0'; i++){
            LCD_write_4bit(str2[i]);
            }
            break;
        case 3:
            
            for(int i = 0; str3[i]!= '\0'; i++){
            LCD_write_4bit(str3[i]);
            }
            break;
        case 4:
           
            for(int i = 0; str4[i]!= '\0'; i++){
            LCD_write_4bit(str4[i]);
            }
            break;
        case 5:
            
            for(int i = 0; str5[i]!= '\0'; i++){
            LCD_write_4bit(str5[i]);
            }
            break;
        case 6:
            
            for(int i = 0; str6[i]!= '\0'; i++){
            LCD_write_4bit(str6[i]);
            }
            break;
        case 7:
            
            for(int i = 0; str7[i]!= '\0'; i++){
            LCD_write_4bit(str7[i]);
            }
            break;
        case 8:
            
            for(int i = 0; str8[i]!= '\0'; i++){
            LCD_write_4bit(str8[i]);
            }
            break;
    }
}
int datacompare(int *x)
{
    int str4 [] ={4583 , 2499 , 4583 , 4583 , 2499  };
    int str1 [] ={2499 , 2499 , 4583 ,4583 , 2499  };
    int str6 [] ={4583 , 2499 , 4583 ,4583, 4583 };
    int str3 [] ={4583 , 2499 , 4583 ,4583 , 4583 };
    int str2 [] ={2499 , 4583 , 4583 ,4583 , 4583  };
    int tole1 [5]={0};
    int tole2 [5]={0};
    int tole3 [5]={0};
    int tole4 [5]={0};
    int tole5 [5]={0};
    
    for (int i = 0 ; i < 5 ; ++i )
    {
        tole1 [i] = x[i]- str4[i];
        tole2 [i] = x[i]- str1[i];
        tole3 [i] = x[i]- str6[i];
        tole4 [i] = x[i]- str3[i];
        tole5 [i] = x[i]- str2[i];
    }
    /////////////Tolerance
    int c1=0 ,c2=0,c3=0,c4=0,c5=0 ,c6 =0;
    for (int i = 0 ; i < 5 ; ++i )
     {
        if ( ((float)tole3[i]/x[i])*100 < 30 &&(((float)tole3[i]/x[i])*100 > -30 )) //str6
            c6++;
        if ( ((float)tole1[i]/x[i])*100 < 30 &&((float)tole1[i]/x[i])*100 > -30)
            c4++;        
        if ( ((float)tole2[i]/x[i])*100 < 30 &&(((float)tole2[i]/x[i])*100 > -30 ))
            c1++;
        if ( ((float)tole4[i]/x[i])*100 < 30 && ((float)tole4[i]/x[i])*100 > -30 )
            c3++;
        if ( ((float)tole5[i]/x[i])*100 < 30 && ((float)tole5[i]/x[i])*100 > -30 )
            c2++;
        
     }
    if (c2 == 5)
        return 2;
    else if (c1 == 5)
        return 1;
    else if (c3 == 5)
        return 3;
    else if (c4 == 5)
        return 4;
    else if (c5 == 5)
        return 5;
    else if (c6 == 5)
        return 6;
    else 
        return 8;
}
