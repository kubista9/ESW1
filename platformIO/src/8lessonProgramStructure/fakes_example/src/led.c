#include <avr/io.h>
void led_init(){
    DDRB|=(1<<PB7);
}
void led_on(){
    PORTB|=(1<<PB7);
}
void led_off(){
    PORTB&=~(1<<PB7);
}

void led_toggle(){
    PORTB^=(1<<PB7);
}
