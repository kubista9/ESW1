#include <avr/io.h>
#include <util/delay.h>
#include "led.h"
#include "button.h"

int main(void) {
    Led_init();
    Button_init();

    while (1) {
        if (Button_isPressed(1)) {
            Led_turnOn(1);  // Turn on LED1 when button1 is pressed
        } else {
            Led_turnOff(1);  // Turn off LED1 when button1 is not pressed
        }

        if (Button_isPressed(2)) {
            Led_turnOn(2);  // Turn on LED2 when button2 is pressed
        } else {
            Led_turnOff(2);  // Turn off LED2 when button2 is not pressed
        }

        if (Button_isPressed(3)) {
            Led_turnOn(3);  // Turn on LED3 when button3 is pressed
        } else {
            Led_turnOff(3);  // Turn off LED3 when button3 is not pressed
        }

        if (Button_isPressed(4)) {
            Led_turnOn(4);  // Turn on LED4 when button4 is pressed
        } else {
            Led_turnOff(4);  // Turn off LED4 when button4 is not pressed
        }
    }

    return 0;
}
