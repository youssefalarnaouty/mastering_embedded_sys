/*
 *	Structs&Pointers.c
 *	Write a C Program to print members of structs using pointers.
 *
 *  Created on: Jan 24, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>

struct SEmployee
{
	char *m_name;
	int m_id;
};

int main()
{

	struct SEmployee emp1={"Youssef",1};
	struct SEmployee emp2={"Zaki",2};

	struct SEmployee (*ptr2s_arr[])={&emp1,&emp2};   //Array of pointers to Employee Structs

	struct SEmployee(*(*pt)[2])=&ptr2s_arr;          //Pointer to array of pointers

	for(int i=0;i<2;i++){
		printf("Employee Name : %s \n",(*(*pt+i))->m_name);
		printf("Employee ID :  %d\n",(*(*pt+i))->m_id);
		printf("\n");
	}
	return 0;
}
