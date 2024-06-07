#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // Set PB7 as output
    DDRB |= (1 << PB7);

    // Infinite loop to blink the LED
    while (1) {
        // Turn on the LED on PB7
        PORTB |= (1 << PB7);
        _delay_ms(500);

        // Turn off the LED on PB7
        PORTB &= ~(1 << PB7);
        _delay_ms(500);
    }

    return 0;
}
