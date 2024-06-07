#include <avr/io.h>
#include <util/delay.h>
#include "led.h"

int main(void) {
    led_init();
    
    while (1) {
        led_on();
        _delay_ms(500);
        led_off();
        _delay_ms(500);
    }

    return 0;
}
