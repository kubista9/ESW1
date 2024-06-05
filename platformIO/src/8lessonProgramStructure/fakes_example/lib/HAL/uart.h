#pragma once
#include <stdint.h>
void uart_init(uint16_t baudrate);

void uart_send(char *str);