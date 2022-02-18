/*
 * state.h
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */

#ifndef STATE_H_
#define STATE_H_


#include "stdio.h"
#include "stdlib.h"

#define STATE(_ST_Name_) void State_##_ST_Name_()
#define STATE_NAME(_ST_Name_) State_##_ST_Name_


//connections

void DC_MOTOR(int speed);
void US_SetDistance(int d);


#endif /* STATE_H_ */
