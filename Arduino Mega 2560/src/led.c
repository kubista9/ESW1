#include "led.h"
#include <avr/io.h>

void Led_init() {
    // Set PA0, PA1, PA2, PA3 as output
    DDRA |= (1 << PA0) | (1 << PA1) | (1 << PA2) | (1 << PA3);
}

void Led_turnOn(uint8_t led_No) {
    if (led_No >= 1 && led_No <= 4) {
        PORTA |= (1 << (led_No - 1));  // Turn on corresponding LED
    }
}

void Led_turnOff(uint8_t led_No) {
    if (led_No >= 1 && led_No <= 4) {
        PORTA &= ~(1 << (led_No - 1));  // Turn off corresponding LED
    }
}

void Led_toggle(uint8_t led_No) {
    if (led_No >= 1 && led_No <= 4) {
        PORTA ^= (1 << (led_No - 1));  // Toggle corresponding LED
    }
}
