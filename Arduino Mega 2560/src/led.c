#include "led.h"
#include <avr/io.h>

#define DDR_LED DDRB
#define PORT_LED PORTB
#define LED_PIN PB7

void led_init() {
    DDR_LED |= (1 << LED_PIN);  // Set PB7 as output
}

void led_on() {
    PORT_LED |= (1 << LED_PIN);  // Turn on LED
}

void led_off() {
    PORT_LED &= ~(1 << LED_PIN);  // Turn off LED
}

void led_toggle() {
    PORT_LED ^= (1 << LED_PIN);  // Toggle LED state
}
