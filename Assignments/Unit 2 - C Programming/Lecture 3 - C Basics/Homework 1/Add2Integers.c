/*
 * Add2Integers.c
 *
 *  Write C Program to Add Two Integers
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	int input1,input2;

    printf("Enter two integers: ");
    fflush(stdin);fflush(stdout);
    scanf("%d %d", &input1,&input2);
    fflush(stdin);fflush(stdout);
    printf("Sum: %d",input1+input2);

    return 0;
}
