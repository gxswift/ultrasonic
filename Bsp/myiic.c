#include "myiic.h"


void delay(unsigned int z)
{
	unsigned int x,y;
	for(x=z;x>0;x--)
		for(y=110;y>0;y--);
}

/**********************************************
//IIC Start
**********************************************/
void IIC_Start()
{
   SCL_H;		
   SDA_H;
   SDA_L;
   SCL_L;
}

/**********************************************
//IIC Stop
**********************************************/
void IIC_Stop()
{
   SCL_L;
   SDA_L;
   SCL_H;
   SDA_H;
}

/**********************************************
// 通过I2C总线写一个字节
**********************************************/
void Write_IIC_Byte(unsigned char IIC_Byte)
{
	unsigned char i;
	for(i=0;i<8;i++)
	{
		if(IIC_Byte & 0x80)
			SDA_H;
		else
			SDA_L;
		SCL_H;
		SCL_L;
		IIC_Byte<<=1;
	}
	SDA_H;
	SCL_H;
	SCL_L;
}


