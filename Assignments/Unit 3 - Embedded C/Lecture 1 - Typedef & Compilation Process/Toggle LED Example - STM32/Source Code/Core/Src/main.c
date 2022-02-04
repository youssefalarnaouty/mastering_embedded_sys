/*
 * main.c
 *
 *  Created on: Feb 4, 2022
 *      Author: Youssef Zaki
 */

#include "platform.h"

#define RCC_BASE 		0x40021000
#define GPIOA_BASE 		0x40010800
#define RCC_APB2ENR 	*(vuint32_t *)(RCC_BASE + 0x18)
#define GPIOA_CRH 		*(vuint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR 		*(vuint32_t *)(GPIOA_BASE + 0x0C)


#define RCC_IOPAEN 		(1<<2)
#define GPIOA13			(1UL<<13)

typedef union {
	vuint32_t all_fields;
	struct{
		vuint32_t reserved:13;
		vuint32_t Pin13:1;
	}Pin;
}R_ODR_t;


volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C) ;

int main(){
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;

	while(1){
		R_ODR->Pin.Pin13=0;
		for(int i =0; i< 1000;i++);
		R_ODR->Pin.Pin13=1;
		for(int i =0; i< 1000;i++);
	}
	return 0;
}
