#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>

void uartInit(int baudrate) {
    unsigned int ubrr = ((F_CPU / (16UL * baudrate)) - 1);
    UBRR0H = (unsigned char)(ubrr >> 8);
    UBRR0L = (unsigned char)ubrr;
    UCSR0B = (1 << RXEN0) | (1 << TXEN0);
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

void uartSend(char *data) {
    while (*data) {
        while (!(UCSR0A & (1 << UDRE0)));
        UDR0 = *data;
        data++;
    }
}

ISR(TIMER3_COMPA_vect) {
    static int count = 0;
    char buffer[50];
    PORTB ^= (1 << PB7); // Toggle LED
    sprintf(buffer, "Message from timer interrupt: %d\n", count++);
    uartSend(buffer);
}

int main() {
    uartInit(9600);
    DDRB |= (1 << PB7); // Set PB7 as output for LED

    // Configure Timer1 for normal mode counting
    TCCR1A = 0; // Normal mode
    TCCR1B = (1 << CS02) | (1 << CS00); // Prescaler 1024

    // Configure Timer3 for CTC mode to trigger interrupt every second
    TCCR3A = 0;
    TCCR3B = (1 << WGM12) | (1 << CS12) | (1 << CS10); // CTC mode, prescaler 1024
    OCR3A = 15624; // Set OCR3A for 1 second interrupt (16MHz/1024/1Hz - 1)
    TIMSK3 = (1 << OCIE3A); // Enable Timer3 compare interrupt

    sei(); // Enable global interrupts

    char buffer[20];
    while (1) {
        sprintf(buffer, "TCNT1 %u\n", TCNT1);
        uartSend(buffer);
        _delay_ms(500);
    }
}
