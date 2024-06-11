#include <util/delay.h>
#include "5-led.h"
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