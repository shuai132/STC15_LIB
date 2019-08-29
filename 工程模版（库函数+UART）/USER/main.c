#include <stdio.h>
#include "STC15xx_config.h"
#include "UART.h"
#include "GPIO.h"

sbit led=P3^0;

void main()
{
    int x = 123;
    
  GPIO_config();
  UART1_config();
  EA = 1;
    
  printf("test....\n");
  for(;;)
  {
        printf("x = %d\n", x);
    led=~led;
    delay_ms(500);
  }
}
