/*
 *
 *  Created on: Jan 18, 2022
 *      Author: Youssef Zaki
 */

#include <stdio.h>
void reverseswap(int a[],int b[],int size){
	for(int i=size-1,j=0;i>=0;i--,j++){
		b[j] = a[i];
	}
}
void printarray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void scanarray(int arr[],int size){
	printf("Enter the array elements sequentially:");
	fflush(stdout);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}

int main() {
	int size,a[10],b[10];
	printf("Enter the array size: \n");
	fflush(stdout);
	scanf("%d",&size);
	scanarray(a,size);
	reverseswap(a,b,size);
	printarray(a,size);
	printarray(b,size);
	return 0;
}
