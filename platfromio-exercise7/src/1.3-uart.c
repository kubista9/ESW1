#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <string.h>

void uartInit(int baudrate) {
    unsigned int ubrr = ((F_CPU / (16UL * baudrate)) - 1);
    UBRR0H = (unsigned char)(ubrr >> 8);
    UBRR0L = (unsigned char)ubrr;
    UCSR0B = (1 << RXEN0) | (1 << TXEN0);
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

char* uartReceive() {
    static char buffer[64];
    char *bufPtr = buffer;
    char received;

// Clear buffer
    for (int i = 0; i < 64; i++) {
        buffer[i] = '\0';
    }

    do {
        // Wait for data to be received
        while (!(UCSR0A & (1 << RXC0)));

        // Get and return received data from buffer
        received = UDR0;
        *bufPtr++ = received;

        // Check for buffer overflow
        if (bufPtr - buffer >= 63) {
            break;
        }
    } while (received != '\n' && received != '\r');

    return buffer;
}

void uartSend(char *data) {
    while (*data) {
        while (!(UCSR0A & (1 << UDRE0)));
        UDR0 = *data;
        data++;
    }
}

int main() {
    uartInit(9600);
    char stringbuffer[128];
    while (1) {
        strcpy(stringbuffer, uartReceive());
        strcat(stringbuffer, " dirtyword\n");
        uartSend(stringbuffer);
    }
}
