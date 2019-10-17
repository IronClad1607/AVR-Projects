#include <avr/io.h>
#include <util/delay.h>

void main()
{
	DDRB = 0XFF;
	DDRC = 0X00;

	char sensor;
	while(1){
		sensor = PINC & 0b0000001;

		if(sensor == 1){
			PORTB = 0xff;
		}
		if(sensor == 0){
			PORTB = 0x00;
		}
	}
}
