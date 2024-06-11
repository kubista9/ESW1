#ifndef UART_H
#define UART_H

void uartInit(int baudrate);
void uartSend(char *data);
void uartSendChar(char data);

#endif // UART_H
