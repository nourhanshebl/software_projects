/* 
 * File:   main.c
 * Author: Smsm
 *
 * Created on November 27, 2021, 11:15 AM
 */


#include <avr/io.h>
#include "config.h"
#include "mlcd.h"
#include "mflex.h"


int main(void) {
    /* Replace with your application code */
    // Initialization.....
    int count = 0;
    int x[5];
    init_LCD_4bit();
     _delay_ms(200);
     
    while (1) {
        if(count == 5)
        {
           int messageNo = datacompare(&x);
           data_deaf(messageNo);
           _delay_ms(1000);
           LCD_clear_4bit();
           count = 0;
        }
        else
        {
            selectADCch(count);
            _delay_ms(1000);
            ADC_SC();
            //init_Interrupt_ADC();
            _delay_ms(100);
            x[count] = ADC_read()*4.8828125;
            //x[count] = ((x[count] * 0.0048828125) / 5)*1000;
            count++; 
        }
        //LCD_goto_4bit(_ROW0, 5 );
        //LCD_write_num_4bit(x);
        //LCD_write_str_4bit(str);
     
    }

    return 0;
}

