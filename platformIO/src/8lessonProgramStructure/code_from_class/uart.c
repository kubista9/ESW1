#include <avr/io.h>
#include <stdint.h>

void uart_init(uint16_t baudrate){
        //init
    uint16_t ubrr = 16000000/((uint32_t)16*baudrate)-1;
    UBRR0H = ubrr>>8;
    UBRR0L = ubrr;

    UCSR0B = (1<<RXEN0)|(1<<TXEN0);
    UCSR0C = (1<<UCSZ01) |  (1<<UCSZ00);

}
void uart_send(char * str){


    uint16_t i = 0;

    while (str[i])
    {
        /* code */
        while ( !(UCSR0A &(1<<UDRE0)));
        
        UDR0=str[i];
        i++;
    }

}