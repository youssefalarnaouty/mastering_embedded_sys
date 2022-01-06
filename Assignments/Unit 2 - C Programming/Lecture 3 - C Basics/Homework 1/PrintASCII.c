/*
 * PrintASCII.c
 *
 *  Write C Program to Find ASCII Value of a Character
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	char input;

    printf("Enter a character: ");
    fflush(stdin);fflush(stdout);
    scanf("%c", &input);
    fflush(stdin);fflush(stdout);

    printf("ASCII value of %c = %d",input,input);
    fflush(stdin);fflush(stdout);



    return 0;
}
