/*
 *
 *
 *  Created on: Jan 18, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int sum(int num){

	int s=0,temp;
	while(num>0){
		temp = num%10;
		s+=temp;
		num=num/10;
	}
	return s;

}
int main()
{
	int num;
	printf("Enter a positive integer number : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("%d",sum(num));
	return 0;
}

