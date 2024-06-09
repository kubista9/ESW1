#include "uart.h"
#include <avr/io.h>
#include <avr/interrupt.h>

void uartInit(int baudrate) {
    unsigned int ubrr = ((F_CPU / (16UL * baudrate)) - 1);

    // Set baud rate
    UBRR0H = (unsigned char)(ubrr >> 8);
    UBRR0L = (unsigned char)ubrr;

    // Enable receiver and transmitter
    UCSR0B = (1 << RXEN0) | (1 << TXEN0) | (1 << RXCIE0); // Enable receive interrupt

    // Set frame format: 8 data bits, 1 stop bit, no parity
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);

    // Enable global interrupts
    sei();
}

void uartSend(char data) {
    // Wait for empty transmit buffer
    while (!(UCSR0A & (1 << UDRE0)));
    
    // Put data into buffer, sends the data
    UDR0 = data;
}

ISR(USART0_RX_vect) {
    char received_byte = UDR0;
    // Convert to uppercase if it's a lowercase letter
    if (received_byte >= 'a' && received_byte <= 'z') {
        received_byte -= 32;
    }
    uartSend(received_byte);
}
