#include "button.h"
#include <avr/io.h>

void Button_init() {
    // Set PA4, PA5, PA6, PA7 as input and enable pull-up resistors
    DDRA &= ~((1 << PA4) | (1 << PA5) | (1 << PA6) | (1 << PA7));
    PORTA |= (1 << PA4) | (1 << PA5) | (1 << PA6) | (1 << PA7);
}

bool Button_isPressed(uint8_t button_No) {
    if (button_No >= 1 && button_No <= 4) {
        return !(PINA & (1 << (button_No + 3)));  // Return true if button is pressed
    }
    return false;
}
