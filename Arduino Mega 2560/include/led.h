#pragma once

#include <stdint.h>

void Led_init();
void Led_turnOn(uint8_t led_No);
void Led_turnOff(uint8_t led_No);
void Led_toggle(uint8_t led_No);
