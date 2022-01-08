/*
 *  ArrayAverage.c
 *
 *  Write C Program to calculate the average of numbers in an array.
 *  Created on: Jan 8, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

#define COUNT 100

int main()
{

	int n;
	float nums[COUNT],sum=0.0;



	printf("Enter the number of data(0-100): ");
	fflush(stdout);
	scanf("%d",&n);

	while(n>100 || n<0){
		printf("Please reenter a number between this range(0-100)");
		printf("Enter the number of data(0-100): ");
		fflush(stdout);
		scanf("%d",&n);

	}

	for(int i=0;i<n;i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdout);
		scanf("%f",&nums[i]);
		sum+=nums[i];
	}
	printf("Average = %.2f",(float)(sum/n));
	return 0;
}
