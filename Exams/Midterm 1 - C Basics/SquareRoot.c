/*
 *
 *
 *  Created on: Jan 18, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


double sqroot(int num){

	int start=0;
	double root = 1;
	if(num == 0)
		return 0.00;
	while(start != (num+1)){
		start++;
		root = (num/root + root) / 2;
	}
	return root;
}

int main()
{
	int num;
	printf("Enter a positive integer number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("%.2f",sqroot(num));
	return 0;
}

