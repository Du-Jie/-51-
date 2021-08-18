#ifndef __LCD_H_
#define __LCD_H_
/**********************************
��ʹ�õ���4λ���ݴ����ʱ���壬
ʹ��8λȡ���������
**********************************/
//#define LCD1602_4PINS

/**********************************
����ͷ�ļ�
**********************************/
//#include<reg52.h>
#include <REGX52.H>	
//---�ض���ؼ���---//
#ifndef uchar
#define uchar unsigned char
#endif

#ifndef uint 
#define uint unsigned int
#endif





extern unsigned char  table[];
extern unsigned char  table1[];

/**********************************
PIN�ڶ���
**********************************/
#define LCD1602_DATAPINS P0
sbit LCD1602_E=P2^5;
sbit LCD1602_RW=P2^6;
sbit LCD1602_RS=P2^7;

/**********************************
��������
**********************************/
/*��51��Ƭ��12MHZʱ���µ���ʱ����*/
void Lcd1602_Delay1ms(unsigned int c);   //��� 0us
/*LCD1602д��8λ�����Ӻ���*/
void LcdWriteCom(unsigned char com);
/*LCD1602д��8λ�����Ӻ���*/	
void LcdWriteData(unsigned char dat)	;
/*LCD1602��ʼ���ӳ���*/		
void LcdInit();						  

#endif
