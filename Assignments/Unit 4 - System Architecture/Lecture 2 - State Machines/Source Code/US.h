/*
 * US.h
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */

#ifndef US_H_
#define US_H_


#include "state.h"

enum {
	reading
}US_state_id;


STATE(US_reading);
void US_init();


void (*US_state)();


#endif /* US_H_ */
