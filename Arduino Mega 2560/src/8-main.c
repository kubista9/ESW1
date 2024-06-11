#include <util/delay.h>
#include "uart.h"
#include <avr/io.h>

int main() {
    uartInit(9600);

    while (1) {
        uartSend("Hallo from Arduino!\n");
        _delay_ms(1000);
    }

    return 0;
}
