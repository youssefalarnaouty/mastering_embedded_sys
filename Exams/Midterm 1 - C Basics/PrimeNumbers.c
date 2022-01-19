/*
 *
 *
 *  Created on: Jan 18, 2022
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

void primesbetween(int in1,int in2){
	for(int i=in1;i<=in2;i++){
			if(is_prime(i)==1){
				printf("%d ",i);
			}
		}
}

int main()
{

	int in1,in2;

	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d",&in1,&in2);

	printf("Prime numbers between %d and %d are: ",in1,in2);
	fflush(stdout);

	primesbetween(in1,in2);

	return 0;
}
