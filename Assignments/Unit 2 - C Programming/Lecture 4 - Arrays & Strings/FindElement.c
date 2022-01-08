/*
 *  FindElement.c
 *
 *  Write C Program to inject an element in an existing array.
 *  Created on: Jan 8, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>



int main()
{

	int arr[100],count,element,location = -1;
	printf("Enter number of elements: ");
	fflush(stdout);
	scanf("%d",&count);

	for(int i=0;i<count;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be searched: ");
	fflush(stdout);
	scanf("%d",&element);

	for(int i=0;i< count;i++){
		if(arr[i]==element){
			location = i+1;
			break;
		}
	}

	if(element != -1){
		printf("Number found at the location: %d",location);
		fflush(stdout);
	}
	else
		printf("Element not found");

	return 0;
}
