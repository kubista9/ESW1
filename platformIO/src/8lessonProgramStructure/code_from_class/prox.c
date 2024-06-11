#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#define P_TRIGGER PB6
#define P_ECHO PB5

void prox_init(){
    DDRB |= (1<<P_TRIGGER);
    DDRB&= ~(1<<P_ECHO);
}
uint16_t prox_measure(){

    //starts measurement
    cli();
    PORTB|=(1<<P_TRIGGER);//turn trigger on
    _delay_us(10);
    PORTB &=~(1<<P_TRIGGER); // turn trigger off
    
    //wait for the signal to be send
    while (!(PINB&(1<<P_ECHO)));
    
    //Take a measurement
    uint16_t counter=0;
    while ((PINB&(1<<P_ECHO))){
        counter++;
    }
sei();
return counter/130;
}
