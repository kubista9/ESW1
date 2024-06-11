#include "prox.h"
#include "uart.h"
#include <stdio.h>

void distance_monitoring_system_init(){
    uart_init(9600);
    prox_init();
}

void distance_monitoring_system_measure_and_send(){
    char str[128];
        sprintf(str, "The distance is %u cm \n", prox_measure());
        uart_send(str);
        //_delay_ms(1000);
}