#pragma once 

#include <stdint.h>

void led_init();
void led_turnOn(uint8_t led_No);
void led_turnOff(uint8_t led_No);
void led_toggle(uint8_t led_No);

