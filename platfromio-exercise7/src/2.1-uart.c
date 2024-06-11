#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <ctype.h>

int main()(
    uart_init(9600);

    TCCR1A=0; //page 154
    TCCR1B=(1<<CS02) | (1<<CS00);
    char buffer[20];
    while (1){
        sprintf(buffer, "TCNT1 %u\n", TCNT1);
        uart_send (buffer);
        _delay_ms(500);
    }
}