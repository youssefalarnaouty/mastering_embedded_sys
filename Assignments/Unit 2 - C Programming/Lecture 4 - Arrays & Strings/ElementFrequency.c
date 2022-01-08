/*
 *  ElementFrequency.c
 *
 *  Write C Program to to find the frequency of a character in a string.
 *  Created on: Jan 8, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>



int main()
{

	char string[1000],c;
	int i =0,count=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(string);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&c);



	while(string[i] != 0){
		if(string[i]==c){
			count++;
		}
		i++;
	}

	printf("Frequency of %c = %d",c,count);

	return 0;
}
