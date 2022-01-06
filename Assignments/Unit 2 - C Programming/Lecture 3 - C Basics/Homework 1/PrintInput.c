/*
 * PrintInput.c
 *
 *  Write C Program to Print an Integer Entered by a User
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	int input;

    printf("Enter an integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&input);
    fflush(stdin);fflush(stdout);
    printf("You entered: %d",input);

    return 0;
}
