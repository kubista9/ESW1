#include <util/delay.h>
#include "7-led.h"
#include "7-button.h"
#include <avr/io.h>

int main() {
    led_init();
    button_init();

    while (1) {
        if (button_pressed(1))
            led_turnOn(1);
        else
            led_turnOff(1);

        if (button_pressed(2))
            led_turnOn(2);
        else
            led_turnOff(2);
    }

    return 0;
}
