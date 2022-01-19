/*
 *	
 *  Created on: Jan 18, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

int finduniq(int arr[],int size){
	int result =0;
	for(int i=0;i<size;i++){
		result^=arr[i];
	}
	return result;
}


int main()
{

	int arr[] = {1,2,4,5,9,2,4,1,5};
	int size = (sizeof(arr)/sizeof(arr[0]));

	printf("%d",finduniq(arr,size));

	return 0;
}
