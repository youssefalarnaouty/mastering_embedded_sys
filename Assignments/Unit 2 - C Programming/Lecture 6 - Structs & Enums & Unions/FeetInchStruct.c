/*
 *	FeetInchStruct.c
 *	Write a C Program to to perform distance addition using Inch-feet system & Structures.
 *
 *  Created on: Jan 22, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

struct SDistance{
	int m_feet;
	float m_inch;
} d1,d2,sum;

int main(){

	struct SDistance* D1, *D2, *Sum;
	D1 = &d1;
	D2 = &d2;
	Sum = &sum;
	printf("Enter information for 1st distance\n");
	fflush(stdout);

	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&D1->m_feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&D1->m_inch);

	printf("-------------------------\n");
	printf("Enter information for 2nd distance\n");
	fflush(stdout);

	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&D2->m_feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&D2->m_inch);

	Sum->m_feet = D1->m_feet + D2->m_feet;
	Sum->m_inch = D1->m_inch + D2->m_inch;

	while(Sum->m_inch >12.0){
		Sum->m_inch = Sum->m_inch - 12.0;
		Sum->m_feet++;
	}

	printf("Sum of distances=%d'-%.1f\"",Sum->m_feet,Sum->m_inch);


	return 0;
}
