/*
 * LIFO.h
 *
 *  Created on: Feb 11, 2022
 *      Author: Youssef Arnaouty
 */

#ifndef LIFO_H_
#define LIFO_H_


/****************************************************/
/*User Config */
/****************************************************/
#define element_type	unsigned int
#define LIFO_WIDTH		4
/****************************************************/

//LIFO Struct
typedef struct
{
	element_type  LIFO_buffer[LIFO_WIDTH];
	element_type  *LIFO_top;
	unsigned int no_of_elements;
}LIFO_buf_t;

typedef enum
{
	no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_null
}LIFO_status;


/******** APIs ********/
/*Initialize LIFO*/
void LIFO_init (LIFO_buf_t *ptr_buff);

/*Push item */
LIFO_status push (LIFO_buf_t *ptr_buff, element_type item);

/*Pop last item*/
LIFO_status pop (LIFO_buf_t *ptr_buff, element_type *pitem);

/*Remove all items in LIFO*/
void LIFO_clear (LIFO_buf_t *ptr_buff);

/*Return the last element*/
LIFO_status LIFO_top  (LIFO_buf_t *ptr_buff, element_type *ptop);

/*Return current LIFO size*/
unsigned int LIFO_size (LIFO_buf_t *ptr_buff);

/* Return 1 if LIFO is full, 0 otherwise*/
unsigned int LIFO_is_full (LIFO_buf_t *ptr_buff);

/* Return 1 if LIFO is empty, 0 otherwise*/
unsigned int LIFO_is_empty (LIFO_buf_t *ptr_buff);



#endif /* LIFO_H_ */
