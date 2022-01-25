/*
 *	PrintArrayReversedPointers.c
 *	Write a C Program to print an array in reversed order using pointers.
 *
 *  Created on: Jan 24, 2022
 *      Author: Youssef Zaki
 */

#include <stdio.h>


int main(){

	int arr[15];
	int rev[15];
	int *ptr = arr;
	int *revr = rev;
	int size;


	printf("Enter the number of elements (max 15): ");
	fflush(stdout);
	scanf("%d",&size);

	for(int i=0;i<size;i++){
		printf("Enter element number %d : ",i+1);
		fflush(stdout);
		scanf("%d",ptr+i);
	}
	ptr += (size-1);
	for(int i=0;i<size;i++){
		*(revr+i) = *ptr;
		ptr--;
	}
	printf("Reversed Array: \n");
	for(int i=0;i<size;i++){
		printf("Element number %d : %d\n",i+1, *(revr+i));
		fflush(stdout);
	}

	return 0;
}
