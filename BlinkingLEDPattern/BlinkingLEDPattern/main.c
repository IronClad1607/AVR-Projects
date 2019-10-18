/*
 * BlinkingLEDPattern.c
 *
 * Created: 18-10-2019 10:02:22 AM
 * Author : Ishaan Jain
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB = 0b00001111;
	DDRC = 0xff;
	int ct =0;
    while (1) 
    {
		for (int i= 0;i<=4;i++)
		{
			PORTB = (0b11110000 >> i);
			_delay_ms(2000);
			ct = ct+1;
			if(ct%2 == 0){
				PORTC = 0xff;
				_delay_ms(2000);
				PORTC = 0x00;
			}
		}
		
			
    }
}

