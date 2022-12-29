/* 
 * File:   mlcd.h
 * Author: Smsm
 *
 * Created on November 12, 2021, 2:17 PM
 */

#ifndef MLCD_H
#define	MLCD_H

// HW connection Configurations

#define LCD_Half_Data   PORTC
#define LCD_Half_Dir    DDRC

#define LCD_data        _PC
#define LCD_data_Dir    _PC

#define LCD_control     _PB
#define LCD_control_Dir _PB

#define RS              PB1
#define RW              PB2
#define EN              PB3
/////////////////////////////////
// Command List
#define _4bit_mode    0x28  // _4bit_mode
#define _D_ON_C_OFF   0x0C  // _Display_ON_Cursor_OFF
#define _Entry_mode   0x06  // Entry Mode _ Increment Cursor
#define _Return_Home  0x02  // Return Home

// 
#define _ROW0    0
#define _ROW1    1
/////////////////
void init_LCD_4bit();

void LCD_write_4bit(char data);
void LCD_write_str_4bit(char* str);
void LCD_write_num_4bit(int num);
void LCD_cmd_4bit(char cmd);
void LCD_enable_4bit();
void LCD_clear_4bit();
void LCD_goto_4bit(int row, int column);


#endif	/* MLCD_H */

