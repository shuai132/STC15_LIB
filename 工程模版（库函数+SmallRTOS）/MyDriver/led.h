#ifndef __LED_H__
#define __LED_H__

sbit led0=P0^0;
sbit led1=P0^1;
sbit led2=P0^2;
sbit led3=P0^3;
sbit led4=P0^4;
sbit led5=P0^5;
sbit led6=P0^6;
sbit led7=P0^7;

#define led_on(x) ledx=0
#define led_off(x) ledx=1
#endif