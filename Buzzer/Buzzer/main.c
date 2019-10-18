/*
 * GccApplication1.c
 *
 * Created: 18-10-2019 09:42:13 AM
 * Author : Ishaan Jain
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRC = 0b1111111;
    while (1) 
    {
		PORTC = 0b1111111;
		_delay_ms(1000);
		PORTC = 0b0000000;
		_delay_ms(1000);
    }
}

