#ifndef __24CXX_H
#define __24CXX_H
#include "myiic.h" 
#include "stm32f4xx_hal.h"

typedef uint8_t u8;
typedef uint16_t u16;

#define	Brightness	0xCF 
#define X_WIDTH 	128
#define Y_WIDTH 	64


void OLED_WrDat(unsigned char IIC_Data);
void OLED_WrCmd(unsigned char IIC_Command);
void OLED_Set_Pos(unsigned char x, unsigned char y) ;
void OLED_Fill(unsigned char bmp_dat) ;
void OLED_CLS(void);
void OLED_Init(void);
void OLED_P6x8Str(unsigned char x,unsigned char y,unsigned char ch[]);
void OLED_P8x16Str(unsigned char x,unsigned char y,unsigned char ch[]);
void OLED_P16x16Ch(unsigned char x, unsigned char y,unsigned char N);
void Draw_BMP(unsigned char x0, unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP[]);

void OLED_ShowString(u8 x,u8 y,const u8 *p);
void OLED_ShowString2(u8 x,u8 y,const u8 *p);
void OLED_Refresh_Gram(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill1(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size,u8 mode);
void OLED_Clear(void) ;


void OLED_Str(unsigned char x,unsigned char y,unsigned char* ch);
void OLED_Test(void);
#endif
















