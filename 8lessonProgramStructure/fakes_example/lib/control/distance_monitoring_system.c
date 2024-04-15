#include  <stdint.h>
#include "uart.h"
#include "prox.h"
#include <stdio.h>
void distance_monitoring_system_init(uint16_t baudrate){
    uart_init(baudrate);

}

void distance_monitoring_system_send_distance(){
    char str[128];        
    sprintf(str, "distance = %u cm\n", prox_distance());
    uart_send(str);
}
