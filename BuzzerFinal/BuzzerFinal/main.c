/*
 * BuzzerFinal.c
 *
 * Created: 18-10-2019 09:57:24 AM
 * Author : Ishaan Jain
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRC = 0xff;
    while (1) 
    {
		PORTC = 0xff;
		_delay_ms(1000);
		PORTC = 0x00;
		_delay_ms(1000);
		
    }
}

