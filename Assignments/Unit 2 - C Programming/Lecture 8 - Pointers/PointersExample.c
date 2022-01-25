/*
 *	PointersExample.c
 *	Write a C Program to demonstrate how to handle pointers.
 *
 *  Created on: Jan 24, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main(){

	int m = 29;
	int *ab = &m;

	printf("Address of m = 0x%x\nContent of m= %d \n",&m,m);
	fflush(stdout);
	printf("Address of pointer ab = 0x%x\nContent of pointer ab= %d \n",ab,*ab);
	fflush(stdout);

	m = 34;
	printf("Address of pointer ab = 0x%x\nContent of pointer ab= %d \n",ab,*ab);
	fflush(stdout);

	*ab = 7;
	printf("Address of m = 0x%x\nContent of m= %d \n",&m,m);
	fflush(stdout);


	return 0;
}
