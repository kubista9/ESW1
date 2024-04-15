#include <avr/io.h>
void uart_init(uint16_t baudrate)
{
    // look at chapters, and go to USART. (p200)

    // initialize uart0 to 9600
    uint16_t ubrr = 16000000 / ((uint32_t)16 * 9600) - 1; // p203
    UBRR0H = ubrr >> 8;
    UBRR0L = ubrr;

    UCSR0B = (1 << TXEN0) | (1 << RXEN0);   // p220
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00); // p221 222
}

void uart_send(char *str)
{
    uint16_t i = 0;
    while (str[i])
    {
        while (!(UCSR0A & (1 << UDRE0)))
            ; // p219
        /* Put data into buffer, sends the data */
        UDR0 = str[i]; // p218
        i++;
    }
}