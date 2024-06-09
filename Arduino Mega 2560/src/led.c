#include "led.h"
#include <avr/io.h>
#include <util/delay.h>

void Led_init() {
    // Set PB7 as output for the test LED
    DDRB |= (1 << PB7);
}

void Led_turnOn() {
    PORTB |= (1 << PB7);
}

void Led_turnOff() {
    PORTB &= ~(1 << PB7);
}

void Led_blink(int times) {
    for (int i = 0; i < times; i++) {
        Led_turnOn();
        _delay_ms(500);
        Led_turnOff();
        _delay_ms(500);
    }
}
