/* 
 * File:   mflex.h
 * Author: Smsm
 *
 * Created on November 12, 2021, 2:36 PM
 */

#ifndef MFLEX_H
#define	MFLEX_H


#define _CH0       PA0
#define _CH1       PA1
#define _CH2       PA2
#define _CH3       PA3
#define _CH4       PA4
#define _CH1_0     0x10

// References
#define _AREF       0   // 00
#define _AVCC       1   // 01
#define _2_56V      3   // 11


#define _PRE128     7  // 111
    
void init_ADC(int _ch, int Ref, int Prescaler);
void ADC_SC();
int ADC_read();
void init_Interrupt_ADC();
void selectADCch(int chNum);
void data_deaf(int messageNo);
int datacompare(int *x );

#endif	/* MFLEX_H */

