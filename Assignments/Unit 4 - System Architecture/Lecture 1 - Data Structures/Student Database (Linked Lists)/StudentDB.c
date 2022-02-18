/*
 * StudentDB.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */

#include "studentDB.h"

S_Node* g_firststudent = NULL;

/*------------------------------------------------------------------------------------------------
 [Function Name] : List_view_Student_details
 [Description]   : Print student's data on the console
 [Args] 		 : S_student* student -> Pointer to student Structure
 [Return]        : List_status -> List_no_error => Student is printed
 	 	 	 	   	   	   	   	  List_error => Student is not printed
 -----------------------------------------------------------------------------------------------*/
List_status List_view_Student_details(S_student* student){
	if(g_firststudent == NULL || student == NULL)
		return List_error;

	DPRINTF("Student id = %d \n",student->Id);
	DPRINTF("Student name = %s \n",student->name);
	DPRINTF("Student height = %f \n\n",student->height);
	return List_no_error;
}


/*------------------------------------------------------------------------------------------------
 [Function Name] : List_Add_Student
 [Description]   : Add student to the list
 [Args]          : S_student* student -> Pointer to student Structure
 [Return]        : List_status -> List_no_error => Student is added to the list
 	 	 	 	 	 	          List_error => student is not added
 -----------------------------------------------------------------------------------------------*/
List_status List_Add_Student(S_student* student){
	if(student == NULL)
		return List_error;

	S_Node * new_Student = (S_Node*) malloc(sizeof(S_Node));
	new_Student->data.Id = student->Id;
	new_Student->data.height = student->height;
	strcpy(new_Student->data.name, student->name);

	/* if the list is empty*/
	if(g_firststudent == NULL){
		g_firststudent = new_Student;
		new_Student->p_next = NULL;
	}
	else{
		S_Node* temp = g_firststudent;
		while(temp->p_next!= NULL){
			temp = temp->p_next;
		}
		temp->p_next = new_Student;
		new_Student->p_next=NULL;
	}
	return List_no_error;
}


/*------------------------------------------------------------------------------------------------
 [Function Name] : List_Delete_Student
 [Description]   : Delete the student from the list
 [Args]          : uint8_t ID -> Id of student to be removed
 [Return]        : List_status -> List_no_error => Student is deleted
 	 	 	 	 	 	          List_not_found => student is not found
 -----------------------------------------------------------------------------------------------*/
List_status List_Delete_Student(uint32_t ID){
	if(g_firststudent == NULL)
		return List_error;
	S_Node* prev = NULL;
	S_Node * current = g_firststudent;
	while(current !=NULL){
		if(current->data.Id == ID){
			/*If the node is the first node*/
			if(prev == NULL){
				g_firststudent = current->p_next;
				free(current);
			}

			/*if node is the last node*/
			else if(current -> p_next == NULL){
				prev->p_next = NULL;
				free(current);
			}

			else{
				prev->p_next = current->p_next;
				free(current);
			}
			return List_no_error;
		}
		else {
			prev = current;
			current = current->p_next;
		}
	}
	return List_not_found;
}


/*------------------------------------------------------------------------------------------------
 [Function Name] : List_View_All
 [Description]   : Prints all student in the list from the front to the end
 [Args]          : NONE
 [Return]        : List_status -> List_no_error == list is printed
 	 	 	 	 	   	          List_error == list is not printed , there is an error or list is empty
 -----------------------------------------------------------------------------------------------*/
List_status List_View_All(void){
	if(g_firststudent == NULL)
		return List_error;
	S_Node* temp = g_firststudent;
	uint32_t Record_Number = 1;
	while(temp!= NULL){
		DPRINTF("============");
		DPRINTF("\nRecord Number = %d\n\n",Record_Number++);
		List_view_Student_details(&(temp->data));
		DPRINTF("============\n");
		temp = temp->p_next;
	}
	return List_no_error;
}

/*------------------------------------------------------------------------------------------------
 [Function Name] : List_Delete_All
 [Description]   : Delete all student in the list (Clear)
 [Args]          : NONE
 [Return]        : List_status -> List_no_error => list has no nodes
 	 	 	 	 	 	          List_error => list already is empty
 -----------------------------------------------------------------------------------------------*/
List_status List_Delete_All(void){
	if(g_firststudent == NULL)
		return List_error;
	while(g_firststudent !=NULL){
		S_Node* deleted_Node = g_firststudent;
		g_firststudent = g_firststudent->p_next;
		free(deleted_Node);
	}
	return List_no_error;
}


/*------------------------------------------------------------------------------------------------
 [Function Name] : List_GetLength
 [Description]   : Returns the no. of student nodes in the list
 [Args]          : uint32_t * length -> pointer to length variable of the list to be changed
 [Return]        : List_status -> List_no_error == get the length successfully
 	 	 	 	 	 	          List_error == list is empty or not existed
 -----------------------------------------------------------------------------------------------*/
List_status List_GetLength(uint32_t * length){
	if(g_firststudent == NULL || length == NULL)
		return List_error;
	*length = 0;
	S_Node* temp = g_firststudent;
	while(temp != NULL){
		(*length)++;
		temp = temp ->p_next;
	}
	return List_no_error;
}

/*------------------------------------------------------------------------------------------------
 [Function Name] : List_GetNth_Student
 [Description]   : Returns the student with specific index from the front (starting from 0)
 [Args]          : uint32_t index -> index of student
 [Return]        : S_student *	 -> pointer to student structure of the given index
 	 	 	 	 	           	 -> NULL if index is wrong
 -----------------------------------------------------------------------------------------------*/
S_student * List_GetNth_Student(uint32_t index){
	if(g_firststudent == NULL)
		return NULL;
	unsigned int count =0;
	S_Node * temp = g_firststudent;
	while(temp != NULL){
		if(count == index)
			//return current node student;
			return &(temp->data);
		else{
			temp = temp->p_next;
			count++;
		}
	}
	return NULL;
}


/*------------------------------------------------------------------------------------------------
 [Function Name] : List_GetNthFromEnd_Student
 [Description]   : Returns the student with specific index from the end
 [Args]          : uint32_t index -> index of student
 [Return]        : S_student* -> pointer to student structure related to the index
 	 	 	 	 	 	      -> NULL if index is wrong
 -----------------------------------------------------------------------------------------------*/
S_student * List_GetNthFromEnd_Student(uint32_t index){
	if(g_firststudent == NULL)
		return NULL;
	uint32_t count =0;
	S_Node* main_ptr = g_firststudent;
	S_Node* ref_ptr = g_firststudent;
	while(count != index){
		count++;
		ref_ptr=ref_ptr->p_next;
		if(ref_ptr ==NULL) return NULL;
	}
	while(ref_ptr != NULL){
		ref_ptr = ref_ptr->p_next;
		main_ptr=main_ptr->p_next;
	}
	return &(main_ptr->data);
}


/*------------------------------------------------------------------------------------------------
 [Function Name] : List_Reverse_Traverse
 [Description]   : Prints list in reverse order
 [Args]          : S_Node* head -> pointer to first node
 [Return]        : NONE
 -----------------------------------------------------------------------------------------------*/
void List_Reverse_Traverse(S_Node* head){
	if(head == NULL)
		return;
	List_Reverse_Traverse(head->p_next);
	List_view_Student_details(&(head->data));
}
