/*
 * DC.h
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */

#ifndef DC_H_
#define DC_H_


#include "state.h"

enum {
	idle,
	busy
}DC_state_id;


STATE(DC_idle);
STATE(DC_busy);
void DC_init();


void (*DC_state)();


#endif /* DC_H_ */
