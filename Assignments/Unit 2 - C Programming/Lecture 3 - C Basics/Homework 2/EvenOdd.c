/*
 * EvenOdd.c
 *
 *  Write C Program to if a number is even or odd
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	int input;

	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &input);
	fflush(stdin);fflush(stdout);

	if(input%2 ==0){
		printf("%d is even",input);
		fflush(stdin);fflush(stdout);
	}
	else{
		printf("%d is odd",input);
		fflush(stdin);fflush(stdout);
	}


	return 0;
}
