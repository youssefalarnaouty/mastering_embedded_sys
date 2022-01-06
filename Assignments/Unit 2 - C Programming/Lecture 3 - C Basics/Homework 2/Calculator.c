/*
 *  Calculator.c
 *
 *  Write C Program for a simple calculator.
 *  Created on: Jan 6, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>


int main()
{
	float in1,in2;
	char op;

	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &op);
	fflush(stdin);fflush(stdout);

	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &in1);
	fflush(stdin);fflush(stdout);
	scanf("%f", &in2);
	fflush(stdin);fflush(stdout);

	switch(op){
	case '+':
		printf("%.1f + %.1f = %.1f",in1,in2,in1+in2);
		fflush(stdin);fflush(stdout);
		break;
	case '-':
			printf("%.1f - %.1f = %.1f",in1,in2,in1-in2);
			fflush(stdin);fflush(stdout);
			break;
	case '*':
			printf("%.1f * %.1f = %.1f",in1,in2,in1*in2);
			fflush(stdin);fflush(stdout);
			break;
	case '/':
		if(in2 ==0){
			printf("Invalid operation");
			fflush(stdin);fflush(stdout);
			break;

		}
		printf("%.1f / %.1f = %.1f",in1,in2,in1/in2);
					fflush(stdin);fflush(stdout);
					break;

	default:
		printf("Error! operator is not correct");
					fflush(stdin);fflush(stdout);
					break;





	}

	return 0;
}
