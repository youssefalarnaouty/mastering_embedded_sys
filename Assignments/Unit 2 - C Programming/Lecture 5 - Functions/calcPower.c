/*
 *  CalcPower.c
 *
 *  Write C Program to calculate a number's power recursively.
 *  Created on: Jan 13, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

int calcPower(int base, int power){
	if(power != 0)
		return base*calcPower(base,power-1);
	else return 1;
}


int main()
{
	int base, pow;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer: ");
	fflush(stdout);
	scanf("%d",&pow);

	printf("%d ^ %d = %d",base,pow,calcPower(base,pow));


	return 0;
}
