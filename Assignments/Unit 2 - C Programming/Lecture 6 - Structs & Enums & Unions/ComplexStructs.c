/*
 *	ComplexStruct.c
 *	Write a C Program to to perform addition on complex numbers using  Structures.
 *
 *  Created on: Jan 22, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

struct SComplex{
	float m_real;
	float m_imag;
} c1,c2,sum;

int main(){

	struct SComplex *Sum;

	Sum = &sum;
	printf("For 1st complex number\n");
	fflush(stdout);

	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&c1.m_real, &c1.m_imag);

	printf("-------------------------\n");
	printf("For 2nd complex number\n");
	fflush(stdout);

	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&c2.m_real, &c2.m_imag);

	Sum->m_real = c1.m_real + c2.m_real;
	Sum->m_imag = c1.m_imag + c2.m_imag;

	printf("Sum = %.1f + %.1fi",Sum->m_real,Sum->m_imag);


	return 0;
}
