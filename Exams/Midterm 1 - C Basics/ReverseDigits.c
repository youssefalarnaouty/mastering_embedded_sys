/*
 *	Assumption : Zeros infront are terminated as
 *				 return value is a number not a string.
 *  Created on: Jan 18, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

int reversedigits(int n){
	int newnum, remainder = 0;
	while (n != 0){
		remainder = n % 10;
		newnum = newnum * 10 + remainder;
		n /= 10;
	}
	return newnum;
}


int main()
{

	int num;

	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&num);

	printf("%d",reversedigits(num));

	return 0;
}
