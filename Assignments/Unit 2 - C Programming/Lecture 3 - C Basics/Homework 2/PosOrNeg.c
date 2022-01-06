/*
 * PosOrNeg.c
 *
 *  Write C Program to find if a number is positive or negative.
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	float in1;

	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &in1);
	fflush(stdin);fflush(stdout);

	if(in1 > 0){
		printf("%.2f is positive.\n",in1);
		fflush(stdin);fflush(stdout);
	}
	else if(in1<0){
		printf("%.2f is negative.\n",in1);
		fflush(stdin);fflush(stdout);
	}
	else{
		printf("You entered zero.");
		fflush(stdin);fflush(stdout);
	}
	return 0;
}
