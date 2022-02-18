/*
 * US.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */


#include "US.h"

int US_distance=0;

int generate_random (int l , int h,int count);


void US_init(){
	printf("US is init \n");
}


STATE(US_reading){
	/*state action*/
	US_state_id = reading;
	/*generate random distance*/
	US_distance= generate_random(45,55,1);
	printf("US ----> CA 'US_SetDistance'\n");
	/*send distance*/
	US_SetDistance(US_distance);
	/*next state*/
	US_state=STATE_NAME(US_reading);
	printf("US in reading state , distance = %d\n",US_distance);

}

int generate_random (int l , int h, int count){
	int rand_num;
	for(int i=0 ; i< count ;i++){
		rand_num = (rand() % (h-l+1))+l;
	}
	return rand_num;
}
