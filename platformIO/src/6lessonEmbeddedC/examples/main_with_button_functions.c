
#include <util/delay.h>
#include "led.h"
#include<stdio.h>
#include <avr/io.h>
#include <stdbool.h>

void button_init(){
  DDRA&=~(1<<PA1);
  PORTA|=(1<<PA1);
}

bool button_pressed(){
  return !(PINA & (1<<PA1));
}

int main(){
  led_init();
  button_init();

  while (1)
  {
    if (button_pressed())
      led_on();
    else
      led_off();
  }
}