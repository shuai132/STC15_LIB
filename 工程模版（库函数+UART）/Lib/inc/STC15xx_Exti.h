
#ifndef	__STC15xx_EXTI_H
#define	__STC15xx_EXTI_H

#include	"STC15xx_config.h"

#define	EXT_MODE_RiseFall	0	//上升沿/下降沿中断
#define	EXT_MODE_Fall		1	//下降沿中断

typedef struct
{
	u8	EXTI_Mode;			//中断模式,  	EXT_MODE_RiseFall, EXT_MODE_Fall
	u8	EXTI_Polity;		//优先级设置	PolityHigh,PolityLow
	u8	EXTI_Interrupt;		//中断允许		ENABLE,DISABLE
} EXTI_InitTypeDef;

u8	Ext_Inilize(u8 EXT, EXTI_InitTypeDef *INTx);

#endif
