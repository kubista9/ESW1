
#include <util/delay.h>
#include "led.h"
#include<stdio.h>

int main(){
  led_init();
  

  while (1)
  {
    led_on();
    _delay_ms(500);
    led_off();
    _delay_ms(500);
  }
  
}