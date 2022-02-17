/*
 * LIFO.h
 *
 *  Created on: Feb 11, 2022
 *      Author: Youssef Arnaouty
 */

#include "LIFO.h"
#include "stdio.h"

void LIFO_init (LIFO_buf_t *p_LIFO){
	p_LIFO ->LIFO_top = p_LIFO ->LIFO_buffer;
	p_LIFO ->no_of_elements = 0;
}

LIFO_status push (LIFO_buf_t *p_LIFO, element_type item){
	/*Check if LIFO buffer exists*/
	if(!p_LIFO)
		return LIFO_null;

	/*Check if LIFO is full*/
	if(p_LIFO ->no_of_elements == LIFO_WIDTH){
		printf("Can't push items, LIFO is full \n");
		return LIFO_full;
	}

	/*Push item into LIFO buffer*/
	/*Check case when we are pushing to LIFO's Last element*/
	if(p_LIFO ->no_of_elements == LIFO_WIDTH - 1){
		*(p_LIFO ->LIFO_top) = item;
		p_LIFO ->no_of_elements++;
	}
	else{
		*(p_LIFO ->LIFO_top) = item;
		p_LIFO ->LIFO_top++;
		p_LIFO ->no_of_elements++;
	}
	return no_error;
}


LIFO_status pop (LIFO_buf_t *p_LIFO, element_type *pitem){
	/*Check if LIFO buffer exists*/
	if(!p_LIFO)
		return LIFO_null;

	/*Check if LIFO is empty*/
	if(p_LIFO ->no_of_elements == 0){
		printf("Can't pop an empty LIFO\n");
		return LIFO_empty;
	}


	/*Pop item*/
	/*Check case when we are popping to LIFO's top element*/
	if(p_LIFO ->no_of_elements == LIFO_WIDTH){
		*pitem = *(p_LIFO ->LIFO_top);
		p_LIFO ->no_of_elements--;
	}

	else{
		p_LIFO ->LIFO_top--;
		*pitem = *(p_LIFO ->LIFO_top);
		p_LIFO ->no_of_elements--;
	}
	return no_error;
}


void LIFO_clear (LIFO_buf_t *p_LIFO){
	p_LIFO ->LIFO_top = p_LIFO ->LIFO_buffer;
	p_LIFO ->no_of_elements = 0;
}


LIFO_status LIFO_top  (LIFO_buf_t *p_LIFO, element_type *ptop){
	/*Check if LIFO buffer exists*/
	if(!p_LIFO)
		return LIFO_null;

	/*Check if LIFO is empty*/
	if(p_LIFO ->no_of_elements == 0)
		return LIFO_empty;

	/*Get top element*/
	if(p_LIFO ->no_of_elements == LIFO_WIDTH){
		*ptop = *(p_LIFO ->LIFO_top);
	}

	else{
		*ptop = *(p_LIFO ->LIFO_top - 1);
	}
	return no_error;
}


unsigned int LIFO_size (LIFO_buf_t *p_LIFO){
	/*Check if LIFO buffer exists*/
	if(!p_LIFO)
		return LIFO_null;
	return (p_LIFO ->no_of_elements);
}


unsigned int LIFO_is_full (LIFO_buf_t *p_LIFO){
	/*Check if LIFO buffer exists*/
	if(!p_LIFO)
		return LIFO_null;
	//check if LIFO is full
	if(p_LIFO ->no_of_elements == LIFO_WIDTH)
		return 1;
	else
		return 0;
}


unsigned int LIFO_is_empty (LIFO_buf_t *p_LIFO){
	/*Check if LIFO buffer exists*/
	if(!p_LIFO)
		return LIFO_null;
	/*Check if LIFO is empty*/
	if(p_LIFO ->no_of_elements == 0)
		return 1;
	else
		return 0;
}
