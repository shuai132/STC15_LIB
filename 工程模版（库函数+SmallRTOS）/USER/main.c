
#include <stdio.h>
#include "STC15xx_config.h"
#include "config.h"
#include "UART.h"
#include "GPIO.h"
#include "led.h"

void main(void)
{
    TMOD = (TMOD & 0XF0) | 0X01;
    TL0 = 0x0;
    TH0 = 0x0;
    TR0 = 1;
    ET0 = 1;
    GPIO_config();
    UART1_config();
		EA = 1;
    printf("Hello! World\r\n");
    OSStart();
}

void TaskA(void)
{
    while (1)
    {
        led0=~led0;
        OSWait(K_TMO,5);
        printf("TaskA\r\n");
    } 
}

void TaskB(void)
{
    while (1)
    {
        led1=~led1;
        OSWait(K_TMO,10);
        printf("TaskB\r\n");
    }
}

void TaskC(void)
{
    while (1)
    {
        led2=~led2;
        OSWait(K_TMO,15);
        printf("TaskC\r\n");
    }
}
