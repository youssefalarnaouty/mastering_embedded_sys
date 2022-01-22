/*
 *	fetchStruct.c
 *	Write a C Program to store information of a student using Structures.
 *
 *  Created on: Jan 22, 2022
 *      Author: Youssef Zaki
 */


#include <stdio.h>
#include <string.h>

struct SStudent{
	char name[10];
	int roll;
	float marks;
} S1;

void printstruct(struct SStudent *s){
	printf("\n");
	printf("Display Information\n");
	printf("Name: %s\n",s->name);
	printf("Roll: %d\n",s->roll);
	printf("Marks: %.2f\n",s->marks);
}

void adddata (char n[], int r, float marks,struct SStudent *s){
	strcpy(s->name,n);
	s->roll = r;
	s->marks = marks;
}
int main(){

	char name[10];
	int roll;
	float marks;

	printf("Enter name: ");
	fflush(stdout);
	gets(name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d",&roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f",&marks);

	adddata(name,roll,marks,&S1);
	printstruct(&S1);



	return 0;
}
