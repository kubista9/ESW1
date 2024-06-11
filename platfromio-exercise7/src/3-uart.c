#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <ctype.h>

// Function to initialize UART
void uartInit(int baudrate) {
    unsigned int ubrr = ((F_CPU / (16UL * baudrate)) - 1);
    UBRR0H = (unsigned char)(ubrr >> 8);
    UBRR0L = (unsigned char)ubrr;
    UCSR0B = (1 << RXEN0) | (1 << TXEN0) | (1 << RXCIE0); // Enable receive interrupt
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

// Function to send data over UART
void uartSend(char *data) {
    while (*data) {
        while (!(UCSR0A & (1 << UDRE0)));
        UDR0 = *data;
        data++;
    }
}

// Interrupt service routine for UART receive
ISR(USART0_RX_vect) {
    char received_byte = UDR0;
    if (received_byte >= 'a' && received_byte <= 'z') {
        received_byte -= 'a' - 'A';
    }
    while (!(UCSR0A & (1 << UDRE0)));
    UDR0 = received_byte;
}

int main() {
    uartInit(9600);
    sei(); // Enable global interrupts

    while (1) {
        // Main loop does nothing, all work is done in ISR
    }
}
