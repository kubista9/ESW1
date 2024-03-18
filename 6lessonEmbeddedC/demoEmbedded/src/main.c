#include <avr/io.h>
#include <util/delay.h>

int main(){
    DDRB| = (1<<PB7); // DDRB=DDRB | 0b10000000 = 0b1xxxxxxx
     

    while (1){
        PORTB| = (1<<PB7); //turn testLED
        _delay_ms(500);
        PORTB&=~(1<<PB7)    // turn testLED off
    }

    
}