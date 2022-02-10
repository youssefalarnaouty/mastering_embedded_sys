/*
 * Toggle Led Pf3  Tm4c123GH6PM
 * main.c
 *
 *  Created on: Feb 10, 2022
 *      Author: Youssef Zaki
 */


//define System control register 
#define SYSCTL_BASE 0X400FE000
#define SYSCTL_RCGC2_R *((volatile unsigned long *)(SYSCTL_BASE+0x108)) 
#define GPIO_ENABLE_M 0X00000020;

//define port f Register
#define GPIO_PORT_F_BASE 0X40025000
#define GPIO_PORT_F_DIR_R  *((volatile unsigned long *)(GPIO_PORT_F_BASE+0X400)) 
#define GPIO_PORT_F_DATA_R *((volatile unsigned long *)(GPIO_PORT_F_BASE+0X3FC)) 
#define GPIO_PORT_F_DEN_R  *((volatile unsigned long *)(GPIO_PORT_F_BASE+0X51C)) 

#define PORTF_PIN_3 (1<<3)

int main()
{
	//Volatile to prevent deletion by the compiler's optimization
	volatile unsigned long _delay; 
	
	//Enable GPIO port
	SYSCTL_RCGC2_R = GPIO_ENABLE_M;
	for(_delay=0 ; _delay < 2000 ; _delay++);

	//Set PORTF PIN3 direction as output
	GPIO_PORT_F_DIR_R |= PORTF_PIN_3;
	//Enable PORTF PIN3
	GPIO_PORT_F_DEN_R |= PORTF_PIN_3;
	
    while(1)
	{
		//Enable Led 
		GPIO_PORT_F_DATA_R |= PORTF_PIN_3;
		for(_delay=0 ; _delay < 2000 ; _delay++);

		//disable Led
		GPIO_PORT_F_DATA_R &= ~ PORTF_PIN_3;
		for(_delay=0 ; _delay < 2000 ; _delay++);

	}
	return 0;
}