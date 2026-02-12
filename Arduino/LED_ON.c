#include <stdint.h>            //include this library for the integer operations
#include <stdbool.h>            //include this library for the boolean operations
#include <avr/io.h>            //include this library for the io operations
#include <avr/interrupt.h>        //include this library for the interrupt operations


int main(void)
{

    DDRB = DDRB | (1<<PB5);

    while(1)                        //this is like the void loop of arduino framework / abstraction layer
    {
        PORTB = PORTB | (1<<PB5);    //doing the or operation here because that way the remaining bits of that port will remain unchanged
    }

    return 0;

}



