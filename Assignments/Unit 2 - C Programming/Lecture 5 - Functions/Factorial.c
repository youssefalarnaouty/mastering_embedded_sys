/*
 *  Factorial.c
 *
 *  Write C Program to compute the factorial of a given number recursivley.
 *  Created on: Jan 13, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

int factorial(int n){
	if(n==0 || n==1){
		return 1;
	}
	else
		return n*factorial(n-1);
}


int main()
{

	int in1;

	printf("Enter a positive number: ");
	fflush(stdout);
	scanf("%d",&in1);

	printf("Factorial of %d = %d",in1,factorial(in1));



	return 0;
}
