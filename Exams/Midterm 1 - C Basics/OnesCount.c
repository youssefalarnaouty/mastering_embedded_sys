/*
 *
 *  Created on: Jan 18, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

int onesCount(int num){
	int count =0;
	for(int i=0;i<sizeof(num)*4;i++){
		if(num & (1<<i))
			count++;
	}
	return count;
}


int main()
{

	int num;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("%d",onesCount(num));

	return 0;
}
