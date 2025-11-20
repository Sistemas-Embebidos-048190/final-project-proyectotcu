/*
 * Platform_Types.h
 *
 *  Created on: Nov 11, 2025
 *      Author: gabit
 */

#ifndef INC_PLATFORM_TYPES_H_
#define INC_PLATFORM_TYPES_H_

typedef unsigned char boolean;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;

typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;
typedef signed long long uint64;

extern enum Positions {
	PARKING = 0,
	REVERSE,
	NEUTRAL,
	DRIVE,
	FIRST,
	SECOND,
	THIRD
};

#endif /* INC_PLATFORM_TYPES_H_ */
