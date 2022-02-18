/*
 * DC.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */



#include "DC.h"

int DC_speed=0;


void DC_init(){
	printf("DC is initialized \n");
}

void DC_MOTOR(int speed){
	/* get speed from CA*/
	DC_speed = speed;
	printf("CA ----> DC, DC_MOTOR()\n");
	/* set next state*/
	DC_state = STATE_NAME(DC_busy);

}


STATE(DC_idle){
	/*state action*/
	DC_state_id=idle;

	printf("DC_idle state speed=%d\n",DC_speed);
	/*current state until read speed from CA*/
	DC_state=STATE_NAME(DC_idle);

}

STATE(DC_busy){
		/*CURRENT STATE*/
		DC_state_id=busy;
		printf("DC_busy state  speed=%d\n",DC_speed);
		/*next_state*/
		DC_state=STATE_NAME(DC_idle);
}

