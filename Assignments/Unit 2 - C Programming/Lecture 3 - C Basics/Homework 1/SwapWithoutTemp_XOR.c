/*
 * SwapWithoutTemp_XOR.c
 *
 *  Write Source Code to Swap Two numbers without temp
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	int input1,input2;

    printf("Enter value of a: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &input1);
    fflush(stdin);fflush(stdout);

    printf("Enter value of b: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&input2);
    fflush(stdin);fflush(stdout);

    input1 ^= input2;
    input2 ^= input1;
    input1 ^= input2;

    printf("after swapping, value of a: %d\n", input1);
    fflush(stdin);fflush(stdout);

    printf("after swapping, value of b: %d\n", input2);
    fflush(stdin);fflush(stdout);

    return 0;
}
