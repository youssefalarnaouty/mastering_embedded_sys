/*
 *  platform.h
 *
 *  Defines alias names to data types to be used in projects.
 *  Created on: Feb 4, 2022
 *  Author: Youssef Zaki
 *
 */

#ifndef __PLATFORM_TYPES__
#define __PLATFORM_TYPES__

/******* Boolean variables *******/
typedef unsigned char bool;
#ifndef TRUE
#define TRUE (bool) 1
#endif

#ifndef FALSE
#define FALSE (bool) 0
#endif

/******* 8-bit variables *******/
typedef unsigned char uint8_t;
typedef signed char sint8_t;
typedef volatile unsigned char vuint8_t;
typedef volatile signed char vsint8_t;

/******* 16-bit variables *******/
typedef unsigned short uint16_t;
typedef signed short sint16_t;
typedef volatile unsigned short vuint16_t;
typedef volatile signed short vsint16_t;

/******* 32-bit variables *******/
typedef unsigned long uint32_t;
typedef signed long sint32_t;
typedef volatile unsigned long vuint32_t;
typedef volatile signed long vsint32_t;

/******* 64-bit variables *******/
typedef unsigned long long uint64_t;
typedef signed long long sint64_t;
typedef volatile unsigned long long vuint64_t;
typedef volatile signed long long vsint64_t;

/******* Float variables *******/
typedef float float32_t;
typedef double float64_t;


#endif
