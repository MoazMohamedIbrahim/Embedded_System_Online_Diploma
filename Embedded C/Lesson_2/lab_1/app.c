#include "uart.h"
unsigned char String_buffer [100]="Learn-in-depth: <Moaaz Mohamed> ";

void main ()
{
	UART_Send_String(String_buffer);
	
}