#include <avr/io.h>
#include <util/delay.h>

void testled_init() {
    DDRB |= (1 << PB7);  // Set PB7 as output
}

void testled_on() {
    PORTB |= (1 << PB7);  // Turn on LED at PB7
}

void testled_off() {
    PORTB &= ~(1 << PB7);  // Turn off LED at PB7
}

int main() {
    testled_init();
    while (1) {
        testled_on();
        _delay_ms(1000);  // Delay for 1 second
        testled_off();
        _delay_ms(1000);  // Delay for 1 second
    }
    return 0;
}
