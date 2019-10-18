#define F_CPU 16000000UL

#include<avr/io.h>
#include<util/delay.h>
#include"uart.h"
#include"adc.h"



void main()
{
	DDRC=0x00;
	//PORTB=0xff;
	unsigned char digital;
	uart_init();
	adc_init();
	_delay_ms(1000);
	uart_string("AT+CWMODE=1\r\n");
	_delay_ms(3000);

	uart_string("AT+CIOBAUD=115200\r\n");
	_delay_ms(1000);

	uart_string("AT+CWJAP=\"Maddy\",\"9717001060\"\r\n");
	_delay_ms(5000);
	_delay_ms(5000);
	_delay_ms(5000);


	while(1)
	{
		digital=getdata(0x00);  // pin no.  // digital is a variable

		uart_string("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80\r\n"); // this for connected thingspeak network
		
		_delay_ms(3000);  // delay for n/w conncted


		uart_string("AT+CIPSEND=51\r\n");  // 51 byte of maximum data send
		_delay_ms(100);  // wait

		uart_string("GET /update?api_key=ZEFV0086BW9D5PEU&field1=");  // particular address of my channel
		
		uart_num(digital);
		uart_string("\r\n");  // new line
		_delay_ms(100);   // wait
		
		uart_string("GET /channels/888271/feeds.json?api_key=YT52QHG0NTR3EGQY&results=2")
		

		uart_string("AT+CIPCLOSE\r\n");   // connection close
		_delay_ms(6000);  // wait


	}
}