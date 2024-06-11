#include "7-button.h"
#include <avr/io.h>

#define DDR_BUTTON DDRA
#define PIN_BUTTON PINA
#define PORT_BUTTON PORTA

#define BUTTON1_PIN PA4
#define BUTTON2_PIN PA5
#define BUTTON3_PIN PA6
#define BUTTON4_PIN PA7

void button_init() {
    DDR_BUTTON &= ~((1 << BUTTON1_PIN) | (1 << BUTTON2_PIN) | (1 << BUTTON3_PIN) | (1 << BUTTON4_PIN));  // Set all button pins as input
    PORT_BUTTON |= (1 << BUTTON1_PIN) | (1 << BUTTON2_PIN) | (1 << BUTTON3_PIN) | (1 << BUTTON4_PIN);  // Enable pull-up resistors on all button pins
}

bool button_pressed(uint8_t button_No) {
    switch (button_No) {
        case 1:
            return !(PIN_BUTTON & (1 << BUTTON1_PIN));
        case 2:
            return !(PIN_BUTTON & (1 << BUTTON2_PIN));
        case 3:
            return !(PIN_BUTTON & (1 << BUTTON3_PIN));
        case 4:
            return !(PIN_BUTTON & (1 << BUTTON4_PIN));
        default:
            return false;
    }
}
