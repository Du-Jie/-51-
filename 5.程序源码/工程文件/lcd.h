#ifndef __LCD_H_
#define __LCD_H_
/**********************************
当使用的是4位数据传输的时候定义，
使用8位取消这个定义
**********************************/
//#define LCD1602_4PINS

/**********************************
包含头文件
**********************************/
//#include<reg52.h>
#include <REGX52.H>	
//---重定义关键词---//
#ifndef uchar
#define uchar unsigned char
#endif

#ifndef uint 
#define uint unsigned int
#endif





extern unsigned char  table[];
extern unsigned char  table1[];

/**********************************
PIN口定义
**********************************/
#define LCD1602_DATAPINS P0
sbit LCD1602_E=P2^5;
sbit LCD1602_RW=P2^6;
sbit LCD1602_RS=P2^7;

/**********************************
函数声明
**********************************/
/*在51单片机12MHZ时钟下的延时函数*/
void Lcd1602_Delay1ms(unsigned int c);   //误差 0us
/*LCD1602写入8位命令子函数*/
void LcdWriteCom(unsigned char com);
/*LCD1602写入8位数据子函数*/	
void LcdWriteData(unsigned char dat)	;
/*LCD1602初始化子程序*/		
void LcdInit();						  

#endif
