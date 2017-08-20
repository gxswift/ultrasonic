#ifndef __MYIIC_H
#define __MYIIC_H


#include "stm32f4xx_hal.h"



#define SCL_L HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET)
#define SCL_H HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET)
#define SDA_L HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET)
#define SDA_H HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET)


void delay(unsigned int z);
//IIC���в�������
void IIC_Init(void);                //��ʼ��IIC��IO��				 
void IIC_Start(void);				//����IIC��ʼ�ź�
void IIC_Stop(void);	  			//����IICֹͣ�ź�
void IIC_Send_Byte(uint8_t txd);			//IIC����һ���ֽ�
uint8_t IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
uint8_t IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC_Ack(void);					//IIC����ACK�ź�
void IIC_NAck(void);				//IIC������ACK�ź�
void Write_IIC_Byte(unsigned char IIC_Byte);
#endif
















