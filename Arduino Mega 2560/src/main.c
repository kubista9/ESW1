#include <avr/io.h>
#include <util/delay.h>
#include "uart.h"

int main() {
    uartInit(9600);

    while (1) {
        char* receivedText = uartReceive();
        
        // Append " - dirty word" to the received text
        char appendedText[128];
        snprintf(appendedText, sizeof(appendedText), "%s - dirty word\n", receivedText);
        
        uartSend(appendedText);
    }

    return 0;
}
