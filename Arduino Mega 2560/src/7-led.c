#include "7-led.h"
#include <avr/io.h>

#define DDR_LED DDRA
#define PORT_LED PORTA

#define LED1_PIN PA0
#define LED2_PIN PA1
#define LED3_PIN PA2
#define LED4_PIN PA3

void led_init() {
    DDR_LED |= (1 << LED1_PIN) | (1 << LED2_PIN) | (1 << LED3_PIN) | (1 << LED4_PIN);  // Set all LED pins as output
}

void led_turnOn(uint8_t led_No) {
    switch (led_No) {
        case 1:
            PORT_LED |= (1 << LED1_PIN);
            break;
        case 2:
            PORT_LED |= (1 << LED2_PIN);
            break;
        case 3:
            PORT_LED |= (1 << LED3_PIN);
            break;
        case 4:
            PORT_LED |= (1 << LED4_PIN);
            break;
    }
}

void led_turnOff(uint8_t led_No) {
    switch (led_No) {
        case 1:
            PORT_LED &= ~(1 << LED1_PIN);
            break;
        case 2:
            PORT_LED &= ~(1 << LED2_PIN);
            break;
        case 3:
            PORT_LED &= ~(1 << LED3_PIN);
            break;
        case 4:
            PORT_LED &= ~(1 << LED4_PIN);
            break;
    }
}

void led_toggle(uint8_t led_No) {
    switch (led_No) {
        case 1:
            PORT_LED ^= (1 << LED1_PIN);
            break;
        case 2:
            PORT_LED ^= (1 << LED2_PIN);
            break;
        case 3:
            PORT_LED ^= (1 << LED3_PIN);
            break;
        case 4:
            PORT_LED ^= (1 << LED4_PIN);
            break;
    }
}
