#ifndef BUTTON_H
#define BUTTON_H

#include <stdint.h>
#include <stdbool.h>

void button_init();
bool button_pressed(uint8_t button_No);

#endif 
