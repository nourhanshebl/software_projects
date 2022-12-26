/* 
 * File:   config.h
 * Author: Smsm
 *
 * Created on November 12, 2021, 2:28 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H


#define F_CPU 16000000UL


#define ON     1
#define OFF    0

#define OUT     1
#define IN      0


#define _PA    0
#define _PB    1
#define _PC    2
#define _PD    3

#define Led0    PC2
#define Led1    PC7
#define Led2    PD3

#define Btn0   0 //PB0
#define Btn1   6 //PD6
#define Btn2   2 //PD2


#include <util/delay.h>

#include "mIO.h"
#include <avr/interrupt.h>
#endif	/* CONFIG_H */

