
#include "button.h"
#include <avr/io.h>
void button_init(){
    DDRB&=~(1<<PB4);
    PORTB|=(1<<PB4);
}

uint8_t button_pressed(){
    return !(PINB&(1<<PB4));
}