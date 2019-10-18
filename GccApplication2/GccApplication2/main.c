/*
 * GccApplication2.c
 *
 * Created: 18-10-2019 02:55:45 PM
 * Author : Ishaan Jain
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB = 0xff;
	DDRC = 0x00;
    while (1) 
    {
		if(PINC1 == 0b00000010){
			PORTB = 0b00000010;
		}
    }
}

