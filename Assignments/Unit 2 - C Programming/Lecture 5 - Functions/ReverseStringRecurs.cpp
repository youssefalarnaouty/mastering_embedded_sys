/*
 *  ReverseStringRecurs.c
 *
 *  Write C Program to reverse a sentence recursively.
 *  Created on: Jan 13, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

void reverse(void){
	char c;
	scanf("%c",&c);

	if(c != '\n'){
		reverse();
		printf("%c",c);
	}
}


int main()
{

	printf("Enter a sentence: ");
	fflush(stdout);
	reverse();




	return 0;
}
