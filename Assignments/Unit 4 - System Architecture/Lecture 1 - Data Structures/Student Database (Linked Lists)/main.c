/*
 * main.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Zaki
 */


#include "studentDB.h"
extern S_Node* g_firststudent;
int main()
{
	DPRINTF("============  Please choose one of the following options ============\n");
	int option = 0 ;
	do{
		DPRINTF("\n");
		DPRINTF("1- Add a Student\n");
		DPRINTF("2- Delete a Student\n");
		DPRINTF("3- View all Students\n");
		DPRINTF("4- Delete All students\n");
		DPRINTF("5- View the number of Students\n");
		DPRINTF("6- Get the Nth Student\n");
		DPRINTF("7- Reverse traverse\n");
		DPRINTF("8- Get the NthFromEnd Student\n");
		DPRINTF("\n");
		DPRINTF("Enter Option Number : ");
		scanf("%d",&option);
		fflush(stdin);
		fflush(stdout);
		S_student s;
		uint32_t id=0;

		switch(option)
		{
		case 1:
			/*1- Add a student*/
			DPRINTF("Add a student\n");
			DPRINTF("Enter the ID :");
			scanf("%d",&(s.Id));
			DPRINTF("Enter Student Full Name :");
			gets(s.name);
			DPRINTF("Enter his/her height :");
			scanf("%f",&(s.height));

			if(List_Add_Student(&s) == List_no_error)
				{DPRINTF("Student is added");}
			else
				{DPRINTF("Student is not added");}
			DPRINTF("\n============\n");
				break;

		case 2:
			/*2- Delete a Student*/
			DPRINTF("Delete a student\n");
			DPRINTF("\nEnter the ID :");
			scanf("%d",&id);
			if(List_Delete_Student(id) == List_no_error)
				{DPRINTF("\nStudent with id = %d is deleted\n",id);}
			else
				{DPRINTF("\nStudent with id = %d is not found in the list \n",id);}
			DPRINTF("\n============\n");
			break;

		case 3:
			/*3- View all Students*/
			DPRINTF("Viewing all students ...\n");
			if(List_View_All()== List_no_error){}
			else{
				DPRINTF("======\nEmpty List\n======\n");
			}
			break;

		case 4:
			/*4- Delete all Student*/
			DPRINTF("Deleting all students ...\n");
			if(List_Delete_All()==List_no_error){
				DPRINTF("====== Deletion successful ======\n");
			}
			else{
				DPRINTF("====== No students exist =======\n");
			}
			break;

		case 5:
			/*5- View the number of Students*/{
			unsigned int len =0;
			if(List_GetLength(&len) ==List_no_error){
				DPRINTF("Number of students = %d\n",len);
			}
			else{
				DPRINTF("======\nEmpty List\n======\n");
			}
			DPRINTF("\n==================\n");}
			break;

		case 6:{
			/*6- Get the Nth Student*/
			uint32_t index;
			S_student *s;
			DPRINTF("\nEnter Index :");
			scanf("%d",&index);
			s=List_GetNth_Student(index);
			if(s==NULL){
				DPRINTF("\nWrong Index");
			}
			else{
				DPRINTF("Student at index = %d\n",index);
				List_view_Student_details(s);
			}
			DPRINTF("\n==================\n");}
			break;

		case 7:
			DPRINTF("\n============\n");
			List_Reverse_Traverse(g_firststudent);
			DPRINTF("\n============\n");

			break;
		case 8:{
			DPRINTF("\n============\n");
			uint32_t index;
			S_student *s;
			DPRINTF("\nEnter Index from the end :");
			scanf("%d",&index);
			s=List_GetNthFromEnd_Student(index);
			if(s==NULL){
				DPRINTF("\nWrong Index");
			}
			else{
				DPRINTF("Student at index from the end = %d\n",index);
				List_view_Student_details(s);
			}
			DPRINTF("\n============\n");}
			break;

		default:
			DPRINTF("\n============");
			DPRINTF("\nWrong option , please try again");
			DPRINTF("\n============\n");
			break;
		}
	}while(1);
}
