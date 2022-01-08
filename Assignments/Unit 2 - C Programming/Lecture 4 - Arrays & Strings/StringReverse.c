/*
 *  StringReverse.c
 *
 *  Write C Program to reverse a string.
 *  Created on: Jan 8, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>
#include "string.h"


int main()
{

	char s[1000],temp;
	int i =0;
	printf("Enter the string  : ");
	fflush(stdout);
	gets(s);

	int length = strlen(s);

	for(i=0;i<length/2;i++){
		temp = s[i];
		s[i] = s[length-1-i];
		s[length-1-i] = temp;
	}

	printf("Reverse string is : %s",s);

	return 0;
}
