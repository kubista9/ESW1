#include <avr/io.h>
#include <util/delay.h>
#include "led.h"

void button_init() {
    DDRB &= ~(1 << PB0);  // Set PB0 as input
    PORTB |= (1 << PB0);  // Enable pull-up resistor on PB0
}

int main(void) {
    led_init();
    button_init();
    
    while (1) {
        if (!(PINB & (1 << PB0))) {
            led_on();  // Turn on LED when button is pressed
        } else {
            led_off();  // Turn off LED when button is not pressed
        }
    }

    return 0;
}
