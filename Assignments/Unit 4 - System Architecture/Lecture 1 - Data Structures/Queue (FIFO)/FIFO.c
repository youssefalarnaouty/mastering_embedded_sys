/*
 * FIFO.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */


#include "FIFO.h"

void FIFO_init (FIFO_buf_t *p_queue){
	p_queue ->head = p_queue ->FIFO_buffer;
	p_queue ->tail = p_queue ->FIFO_buffer;
	p_queue ->no_of_elements = 0;
}

FIFO_STATUS enqueue (FIFO_buf_t *p_queue, element_type item){
	if(!p_queue ->head || !p_queue ->tail)
		return FIFO_NULL;

	if(p_queue ->no_of_elements == FIFO_WIDTH){
		printf("Can't enqueue more items, FIFO is full \n");
		return FIFO_full;
	}

	*(p_queue ->head) = item;
	p_queue ->no_of_elements++;

	if((p_queue ->head) == &(p_queue ->FIFO_buffer[FIFO_WIDTH - 1]))
		p_queue ->head = p_queue ->FIFO_buffer;
	else
		p_queue ->head++;


	return no_error;
}

FIFO_STATUS dequeue (FIFO_buf_t *p_queue, element_type *p_item){

	if(!p_queue ->head || !p_queue ->tail)
		return FIFO_NULL;

	if(p_queue ->no_of_elements == 0){
		printf("Can't dequeue an empty FIFO\n");
		return FIFO_empty;
	}


	*p_item =  *(p_queue ->tail);
	p_queue ->no_of_elements--;

	if((p_queue ->tail) == &(p_queue ->FIFO_buffer[FIFO_WIDTH - 1]))
		p_queue ->tail = p_queue ->FIFO_buffer;
	else
		p_queue ->tail++;

	return no_error;
}

void FIFO_clear (FIFO_buf_t *p_queue){
	p_queue ->head = p_queue ->FIFO_buffer;
	p_queue ->tail = p_queue ->FIFO_buffer;
	p_queue ->no_of_elements = 0;
}

uint32_t FIFO_is_full (FIFO_buf_t *p_queue){

	if(!p_queue ->head || !p_queue ->tail)
		return FIFO_NULL;

	if(p_queue ->no_of_elements == FIFO_WIDTH)
		return 1;
	else
		return 0;
}

uint32_t FIFO_is_empty (FIFO_buf_t *p_queue){

	if(!p_queue ->head || !p_queue ->tail)
		return FIFO_NULL;

	if(p_queue ->no_of_elements == 0)
		return 1;
	else
		return 0;
}

uint32_t FIFO_size (FIFO_buf_t *p_queue){
	if(!p_queue ->head || !p_queue ->tail)
		return FIFO_NULL;

	return (p_queue ->no_of_elements);
}
