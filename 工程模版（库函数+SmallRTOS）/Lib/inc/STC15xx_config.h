
#ifndef		__STC15xx_CONFIG_H
#define		__STC15xx_CONFIG_H


/*********************************************************/

#define MAIN_Fosc		22118400L	//定义主时钟
//#define MAIN_Fosc		12000000L	//定义主时钟
//#define MAIN_Fosc		11059200L	//定义主时钟
//#define MAIN_Fosc		 5529600L	//定义主时钟
//#define MAIN_Fosc		24000000L	//定义主时钟


/*********************************************************/

#include	"STC15Fxxxx.H"
//#include "stc15xx_it.h"//中断函数

//请去掉需要使用的库函数头文件包含注释
//#include "STC15xx_ADC.h"
//#include "STC15xx_delay.h"
//#include "STC15xx_EEPROM.h"
//#include "STC15xx_EXTI.h"
#include "STC15xx_GPIO.h"
//#include "STC15xx_PCA.h"
//#include "STC15xx_soft_uart.h"
//#include "STC15xx_timer.h"
#include "STC15xx_USART1.h"


/**************************************************************************/

#define Main_Fosc_KHZ	(MAIN_Fosc / 1000)

/***********************************************************/

#endif
