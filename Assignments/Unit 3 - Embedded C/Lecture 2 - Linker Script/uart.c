#include "uart.h"
#define UART0_BASE 0X101F1000
#define UART0DR *((volatile unsigned int * const )((unsigned int *)UART0_BASE+0X0))


void Uart_Send_String(unsigned char* P_tx_string)
{
	while(*P_tx_string != '\n')
	{
		UART0DR = (unsigned int )(*P_tx_string);
		P_tx_string++;
	}
}