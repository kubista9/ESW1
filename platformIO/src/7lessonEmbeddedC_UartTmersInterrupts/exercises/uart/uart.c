#include <avr/io.h>
#include <util/delay.h>

void uartInit(int baudrate) {
    unsigned int ubrr = ((F_CPU / (16UL * baudrate)) - 1);
    // https://ww1.microchip.com/downloads/en/devicedoc/atmel-2549-8-bit-avr-microcontroller-atmega640-1280-1281-2560-2561_datasheet.pdf
    // Set baud rate Page 203

    UBRR0H = (unsigned char)(ubrr >> 8);
    UBRR0L = (unsigned char)ubrr;

    // Enable receiver and transmitter. Page 220
    UCSR0B = (1 << RXEN0) | (1 << TXEN0);

    // Set frame format: 8 data bits, 1 stop bit, no parity page 22
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

void uartSend(char *data) {
    while (*data) {
        // Wait for empty transmit buffe
        while (!(UCSR0A & (1 << UDRE0)));

        // Put data into buffer, sends the data
        UDR0 = *data;
        data++;
    }
}

int main() {
    uartInit(9600);

    while (1) {
        uartSend("Hallo from Arduino!\n");
        _delay_ms(1000);
    }
}
