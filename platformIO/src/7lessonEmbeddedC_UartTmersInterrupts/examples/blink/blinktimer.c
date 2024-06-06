#include <util/delay.h>
#include <stdbool.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#define BLINK_MS 150

int main (){
    //Put B5• in output mode
    DDRB
    |= _BV(PORTB5) ;
    while (true) {
    //Toggle the LED
    PORTB ^= _BV(PORTB5);
    _delay_ms(BLINK_MS);
    }
}