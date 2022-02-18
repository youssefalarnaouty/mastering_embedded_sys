/*
 * main.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */


#include "CA.h"
#include "US.h"
#include "DC.h"

void setup()
{
	US_init();
	DC_init();
	CA_state=STATE_NAME(CA_waiting);
	DC_state=STATE_NAME(DC_idle);
	US_state= STATE_NAME(US_reading);
}

int main()
{
	setup();
	volatile int i=0;
	while(1)
	{
		US_state();
		CA_state();
		DC_state();
		//DELAY
		for(i=0 ; i<1000;i++);
	}
}
