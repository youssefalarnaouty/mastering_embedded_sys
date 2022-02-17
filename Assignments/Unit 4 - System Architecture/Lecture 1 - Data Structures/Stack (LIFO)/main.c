#include "LIFO.h"
#include "platform.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int i;
	element_type temp = 0, top_item;
	LIFO_status LIFO_STATUS ;
	LIFO_buf_t my_LIFO;
	LIFO_init(&my_LIFO);

	for(i=0; i<5; i++){
		LIFO_STATUS = push(&my_LIFO, i);
		if(LIFO_STATUS == no_error)
			printf("Item pushed : %d\n", i);
	}


	printf("==========================\n");
	if( LIFO_is_full(&my_LIFO) )
	{
		printf("Pop an item if the LIFO is full\n");
		pop(&my_LIFO, &temp);
	}
	LIFO_top(&my_LIFO, &top_item);
	printf("myLIFO top item = %d\n", top_item);
	printf("my_LIFO size = %d\n", LIFO_size(&my_LIFO));
	printf("==========================\n");
	printf("Popped items : \n");
	for(i=0; i<5; i++){
		LIFO_STATUS = pop(&my_LIFO, &temp);
		if(LIFO_STATUS == no_error)
			printf("Item popped : %d\n", temp);
	}
	if(LIFO_is_empty(&my_LIFO))
		printf("LIFO Is Empty\n");

	return 0;
}


