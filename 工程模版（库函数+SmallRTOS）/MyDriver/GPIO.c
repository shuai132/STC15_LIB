#include "GPIO.h"
#include "STC15xx_config.h"

/************************ IO口配置 ****************************/
void GPIO_config(void)
{
    GPIO_InitTypeDef    GPIO_InitStructure;     //结构定义
    GPIO_InitStructure.Pin  = GPIO_Pin_All;     //指定要初始化的IO, GPIO_Pin_0 ~ GPIO_Pin_7, 或操作
    GPIO_InitStructure.Mode = GPIO_OUT_PP;      //指定IO的输入或输出方式,GPIO_PullUp,GPIO_HighZ,GPIO_OUT_OD,GPIO_OUT_PP
    GPIO_Inilize(GPIO_P1,&GPIO_InitStructure);
    GPIO_Inilize(GPIO_P3,&GPIO_InitStructure);
    GPIO_Inilize(GPIO_P5,&GPIO_InitStructure);
}
