/*
 * CA.h
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */



#ifndef CA_H_
#define CA_H_
#include "state.h"

enum {
	waiting,
	driving
}CA_state_id;


STATE(CA_waiting);
STATE(CA_driving);


void (*CA_state)();

#endif /* CA_H_ */
