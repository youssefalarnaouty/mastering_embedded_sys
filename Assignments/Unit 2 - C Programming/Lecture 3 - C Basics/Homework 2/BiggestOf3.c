/*
 * BiggestOf3.c
 *
 *  Write C Program to find the biggest number
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	float in1,in2,in3;

	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f", &in1,&in2,&in3);
	fflush(stdin);fflush(stdout);

	if(in1>=in2 && in1>=in3){
		printf("Largest number = %.2f\n",in1);
		fflush(stdin);fflush(stdout);
	}
	else if(in2>=in3 && in2>=in1){
		printf("Largest number = %.2f\n",in2);
		fflush(stdin);fflush(stdout);
	}
	else{
		printf("Largest number = %.2f\n",in3);
				fflush(stdin);fflush(stdout);
	}
	return 0;
}
