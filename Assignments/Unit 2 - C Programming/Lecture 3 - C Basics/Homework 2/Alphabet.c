/*
 *  Alphabet.c
 *
 *  Write C Program to find if an alphabet or not.
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	char in1;

	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &in1);
	fflush(stdin);fflush(stdout);

	if((in1 >= 'a' && in1 <= 'z') || (in1 >= 'A' && in1 <= 'Z')){
		printf("%c is an alphabet",in1);
		fflush(stdin);fflush(stdout);
	}

	else{
		printf("%c is not an alphabet.",in1);
		fflush(stdin);fflush(stdout);
	}
	return 0;
}
