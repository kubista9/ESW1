#include "periodic_task.h"
#include "led.h"
#include "button.h"
#include <stdint.h>

void static lamp_controller_st(){
    static uint8_t button_was_pressed = 0;

    if (!button_was_pressed &&button_pressed())
    {
        button_was_pressed=1;
        led_toggle();
    }

    if (!button_pressed())
        button_was_pressed=0;

}


void lamp_controller_init(){
    led_init();
    button_init();
    periodic_task_init_a(lamp_controller_st, 50);
}
