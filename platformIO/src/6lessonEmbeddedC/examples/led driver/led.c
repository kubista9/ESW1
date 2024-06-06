#include "led.h"
#include <avr/io.h>
#define DDR_LED DDRB
#define PORT_LED PORTB
void led_init(){
    DDR_LED|=(1<<PB7);
}


void led_on(){
    PORT_LED|=(1<<PB7);
}
void led_off(){
    PORT_LED&=~(1<<PB7);
}
void led_toggle(){
    PORT_LED^=(1<<PB7);
}