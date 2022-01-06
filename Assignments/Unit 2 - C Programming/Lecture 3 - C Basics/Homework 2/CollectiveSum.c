/*
 *  CollectiveSum.c
 *
 *  Write C Program to calculate the sum of all natural numbers till the given input.
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	unsigned int in1;

	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &in1);
	fflush(stdin);fflush(stdout);
	int i=0,sum=0;
	for(i=0;i<=in1;i++){
		sum+=i;
	}

	printf("Sum= %d",sum);
	fflush(stdin);fflush(stdout);

	return 0;
}
