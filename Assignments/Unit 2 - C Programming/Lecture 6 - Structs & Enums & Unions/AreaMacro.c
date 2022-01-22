/*
 *	AreaMacro.c
 *	Write a C Program to compute a circle's area using Macros.
 *
 *  Created on: Jan 22, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


#define PI (22/7.0)

#define AREA(r) ((PI)*(r)*(r))


int main(){

	float r;

	printf("Enter radius: ");
	fflush(stdout);
	scanf("%f",&r);

	printf("%.2f",AREA(r));

	return 0;
}
