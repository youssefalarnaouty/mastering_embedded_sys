/*
 *	ReverseStringPointers.c
 *	Write a C Program to reverse a string using pointers.
 *
 *  Created on: Jan 24, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main(){

	char s[50];
	char rev[50];
	char *ptr = s;
	char *revr = rev;
	char len=0;


	printf("Enter required string: ");
	fflush(stdout);
	gets(s);

	while(*ptr){
		ptr++;
		len++;
	}
	ptr--; 			//Get last element before '\0'
	len--;		    //Remove '\0' from the count

	for(int i=0;i<len;i++){
	*revr = *ptr;
	revr++;
	ptr--;
	}
	*revr = 0;

	printf("Reversed string: %s",rev);

	return 0;
}
