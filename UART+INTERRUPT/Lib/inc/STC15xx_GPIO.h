
#ifndef	__STC15xx_GPIO_H
#define	__STC15xx_GPIO_H

#include	"STC15xx_config.h"

#define	GPIO_PullUp		0	//����׼˫���
#define	GPIO_HighZ		1	//��������
#define	GPIO_OUT_OD		2	//��©���
#define	GPIO_OUT_PP		3	//�������

#define	GPIO_Pin_0		0x01	//IO���� Px.0
#define	GPIO_Pin_1		0x02	//IO���� Px.1
#define	GPIO_Pin_2		0x04	//IO���� Px.2
#define	GPIO_Pin_3		0x08	//IO���� Px.3
#define	GPIO_Pin_4		0x10	//IO���� Px.4
#define	GPIO_Pin_5		0x20	//IO���� Px.5
#define	GPIO_Pin_6		0x40	//IO���� Px.6
#define	GPIO_Pin_7		0x80	//IO���� Px.7
#define	GPIO_Pin_All	0xFF	//IO��������
	
#define	GPIO_P0			0		//
#define	GPIO_P1			1
#define	GPIO_P2			2
#define	GPIO_P3			3
#define	GPIO_P4			4
#define	GPIO_P5			5


typedef struct
{
	u8	Mode;		//IOģʽ,  		GPIO_PullUp,GPIO_HighZ,GPIO_OUT_OD,GPIO_OUT_PP
	u8	Pin;		//Ҫ���õĶ˿�	
} GPIO_InitTypeDef;

u8	GPIO_Inilize(u8 GPIO, GPIO_InitTypeDef *GPIOx);

#endif