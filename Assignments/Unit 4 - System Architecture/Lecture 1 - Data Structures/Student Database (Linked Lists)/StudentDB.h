/*
 * StudentDB.h
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */

#ifndef STUDENTDB_H_
#define STUDENTDB_H_

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#include "stdint.h"


/*------------------------------------------------------------------------------------------------
 [Macro Name] : DPRINTF
 [Description] : Macro for printing on the console using 'printf'
 and 'fflush' for refresh buffer in and out (avoids eclipse's bug)
 -----------------------------------------------------------------------------------------------*/
#define DPRINTF(...)   fflush(stdout);\
						fflush(stdin);\
						printf( __VA_ARGS__);\
						fflush(stdout);\
						fflush(stdin)


/*Student DataBase Attributes*/

/*------------------------------------------------------------------------------------------------
 [Macro Name]  :NAME_SIZE
 [Description] : Represents max size of a student's name
 -----------------------------------------------------------------------------------------------*/
#define NAME_SIZE 40


/*------------------------------------------------------------------------------------------------
 [Structure Name] : S_student
 [Description]    : Structure that includes the details of a student
 [Members]        : Name[Name_SIZE] -> Array of chars for the student's name
 	 	 			id -> Id of the student
 	 	 			height -> height of student
 -----------------------------------------------------------------------------------------------*/
typedef struct{
	char name[NAME_SIZE];
	unsigned int Id;
	float height;
}S_student;


/*------------------------------------------------------------------------------------------------
 [Structure Name] : S_Node
 [Description]    : Structure represents a Node in the linked list
 [Members]        : data -> the node's data
 	 	 			*p_next -> pointer to next Node in the list
 -----------------------------------------------------------------------------------------------*/
typedef struct S_Node S_Node;
struct S_Node {
	S_student data;
	S_Node * p_next;
};


/*-----------------------------------------------------------------------------------------------
[Enumeration Name]:List_status
[Enumeration Description]:representing different status for the node in the list
-------------------------------------------------------------------------------------------------*/
typedef enum {
	List_error,
	List_no_error,
	List_not_found
}List_status;



/*APIs*/
List_status List_view_Student_details(S_student* student);
List_status List_Add_Student(S_student* student);
List_status List_Delete_Student(uint32_t ID);
List_status List_View_All(void);
List_status List_Delete_All(void);
List_status List_GetLength(uint32_t * length);
S_student* List_GetNth_Student(uint32_t index);
S_student* List_GetNthFromEnd_Student(uint32_t index);
void List_Reverse_Traverse(S_Node* head);


#endif /* STUDENTDB_H_ */
