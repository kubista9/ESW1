#pragma once

#include <avr/interrupt.h>

void uartInit(int baudrate);
void uartSend(char data);
ISR(USART0_RX_vect);
