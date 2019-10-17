#include <avr/io.h>
#include <util/delay.h>

void main()
{
	DDRB = 0b00001111;

	while(1){
		PORTB = 0b00001111;
		_delay_ms(10000);
		PORTB = 0b00000000;
		_delay_ms(10000);
	}
}
