#include <avr/io.h>
#include <util/delay.h>
#include "prox.h"

#define P_ECHO PB5
#define P_TRIGGER PB6
uint16_t prox_distance()
{
    // init
    DDRB |= (1 << P_TRIGGER);
    DDRB &= ~(1 << P_ECHO);

    // starts the measuring
    PORTB |= (1 << P_TRIGGER); // trigger on
    _delay_us(10);
    PORTB &= ~(1 << P_TRIGGER); // trigger off

    while (!(PINB & (1 << P_ECHO)))
        ; // wait for measuring to begin

    // take measurement
    uint16_t measure = 0;
    while (PINB & (1 << P_ECHO))
    {
        measure++;
    }
    return measure / 120;
}
