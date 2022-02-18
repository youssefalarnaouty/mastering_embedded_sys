/*
 * main.c
 *
 *  Created on: Feb 18, 2022
 *      Author: Youssef Arnaouty
 */


#include "FIFO.h"
#include <stdio.h>


int main()
{
	FIFO_buf_t myFIFO;
	uint32_t i;
	FIFO_STATUS status;
	element_type temp;
	FIFO_init(&myFIFO);

	for(i=0; i<5; i++){
		status = enqueue(&myFIFO, i);
		if(status == no_error)
			printf("Item enqueued : %lu\n", i);
	}
	printf("===========================\n");
	printf("FIFO size = %lu\n", FIFO_size(&myFIFO));
	if(dequeue(&myFIFO, &temp) == no_error)
		printf("Dequeue item = %lu\n", temp);

	printf("dequeue items : \n");

	for(i=0; i<5; i++){
		status = dequeue(&myFIFO, &temp);
		if(status == no_error)
			printf("Dequeue item = %lu\n", temp);
	}

	printf("Clear FIFO\n");
	FIFO_clear(&myFIFO);
	if(FIFO_is_empty(&myFIFO))
		printf("FIFO Is Empty\n");

	return 0;
}

