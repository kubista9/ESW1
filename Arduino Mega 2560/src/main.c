#include "uart.h"

int main() {
    uartInit(9600);

    while (1) {
        // Main loop does nothing, all work is done in ISR
    }

    return 0;
}
