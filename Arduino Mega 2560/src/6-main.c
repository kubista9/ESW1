#include <util/delay.h>
#include "6-led.h"
#include <stdio.h>
#include <avr/io.h>
#include <stdbool.h>

void button_init(){
  DDRA &= ~(1 << PA1); // Set PA1 as input
  PORTA |= (1 << PA1); // Enable pull-up resistor on PA1
}

bool button_pressed(){
  return !(PINA & (1 << PA1)); // Return true if button is pressed (PA1 is low)
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