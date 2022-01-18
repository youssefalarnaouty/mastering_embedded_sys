/*
 *  Primes.c
 *
 *  Write C Program to reverse a string.
 *  Created on: Jan 13, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

int is_prime(int n){
	for(int i=2;i<(n/2);i++){
		if(n%i==0){
			return -1;
		}
	}
	return 1;
}


int main()
{

	int in1,in2;

	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d",&in1,&in2);

	printf("Prime numbers between %d and %d are: ",in1,in2);
	fflush(stdout);



	for(int i=in1;i<=in2;i++){
		if(is_prime(i)==1){
			printf("%d ",i);
		}
	}



	return 0;
}
