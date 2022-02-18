/*
 * FIFO.h
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "platform.h"
#include "stdio.h"

/****************************************************/
/*User Config */
/****************************************************/
#define element_type	uint32_t
#define FIFO_WIDTH		4
/****************************************************/

//FIFO struct
typedef struct
{
	element_type FIFO_buffer[FIFO_WIDTH];
	element_type *head;
	element_type *tail;
	unsigned int no_of_elements;
}FIFO_buf_t;

typedef enum
{
	no_error,
	FIFO_empty,
	FIFO_full,
	FIFO_NULL
}FIFO_STATUS;

void FIFO_init (FIFO_buf_t *p_queue);
FIFO_STATUS enqueue (FIFO_buf_t *p_queue, element_type item);
FIFO_STATUS dequeue (FIFO_buf_t *p_queue, element_type *p_item);
void FIFO_clear (FIFO_buf_t *p_queue);
uint32_t FIFO_is_full (FIFO_buf_t *p_queue);
uint32_t FIFO_is_empty (FIFO_buf_t *p_queue);
uint32_t FIFO_size (FIFO_buf_t *p_queue);

#endif /* FIFO_H_ */
