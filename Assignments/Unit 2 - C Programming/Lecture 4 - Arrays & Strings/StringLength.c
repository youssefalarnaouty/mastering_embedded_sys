/*
 *  StringLength.c
 *
 *  Write C Program to to find a string's length.
 *  Created on: Jan 8, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>



int main()
{

	char string[1000];
	int i =0,count=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(string);



	while(string[i] != 0){
		count++;
		i++;
	}

	printf("Length of string = %d",count);

	return 0;
}
