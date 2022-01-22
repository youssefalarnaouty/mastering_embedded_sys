/*
 *	ArrayStruct.c
 *	Write a C Program to store information of a student using Struct arrays.
 *
 *  Created on: Jan 22, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>
#include <string.h>

#define ARRAYSIZE 10

struct SStudent{
	char name[10];
	int roll;
	float marks;
} S1[ARRAYSIZE];

void printstruct(struct SStudent *s){
	printf("\n");
	printf("For roll number %d\n",s->roll);
	printf("Name: %s\n",s->name);
	printf("Marks: %.2f\n",s->marks);
	printf("\n");
}

void adddata (char n[], int r, float marks,struct SStudent *s){
	strcpy(s->name,n);
	s->roll = r;
	s->marks = marks;
}

int main(){

	char name[10];
	float marks;

	printf("Enter information of students\n\n");
	fflush(stdout);

	for(int i=1;i<ARRAYSIZE+1;i++){
		printf("For roll number %d\n",i);
		fflush(stdout);
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s",name);
		printf("Enter marks: ");
		fflush(stdout);
		scanf("%f",&marks);
		adddata(name,i,marks,&S1[i-1]);
	}

	printf("Displaying information of students\n\n");
	fflush(stdout);

	for(int i=0;i<ARRAYSIZE;i++){
		printstruct(&S1[i]);
	}

	return 0;
}
