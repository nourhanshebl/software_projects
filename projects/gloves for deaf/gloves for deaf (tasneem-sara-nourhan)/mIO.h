/* 
 * File:   mIO.h
 * Author: Smsm
 *
 * Created on November 12, 2021, 2:30 PM
 */

#ifndef MIO_H
#define	MIO_H




void init_Leds();
void init_Buttons();

void set_Led(int LedNumber, int state);

int isPressed_B(int pinNum);
int isPressed(int portNum, int pinNum);



// PORT LEVEL
void setPortDir(int portNum, int state);
void setPortData(int portNum, int data);


// PIN LEVEL
void setPinDir(int portNum,int pinNum, int state);
void setPinData(int portNum,int pinNum, int data);

#endif	/* MIO_H */

