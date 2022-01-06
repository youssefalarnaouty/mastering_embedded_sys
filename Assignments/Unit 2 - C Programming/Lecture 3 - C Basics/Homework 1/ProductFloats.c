/*
 * ProductFloats.c
 *
 *  Write C Program to Multiply two Floating Point Numbers
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	float input1,input2;

    printf("Enter two numbers: ");
    fflush(stdin);fflush(stdout);
    scanf("%f %f", &input1,&input2);
    fflush(stdin);fflush(stdout);
    printf("Product: %.6f",input1*input2);

    return 0;
}
