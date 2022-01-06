/*
 * SwapWithoutTemp_Arith.c
 *
 *  Write Source Code to Swap Two numbers without temp
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	float input1,input2;

    printf("Enter value of a: ");
    fflush(stdin);fflush(stdout);
    scanf("%f", &input1);
    fflush(stdin);fflush(stdout);

    printf("Enter value of b: ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&input2);
    fflush(stdin);fflush(stdout);

    input1 += input2;
    input2 = input1 - input2;
    input1 -= input2;

    printf("after swapping, value of a: %g\n", input1);
    fflush(stdin);fflush(stdout);

    printf("after swapping, value of b: %g\n", input2);
    fflush(stdin);fflush(stdout);

    return 0;
}
