/**
 ********************************************************************************
 * @file    Inc_Platform_Types.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Definición de tipos de datos estándar de la plataforma (AUTOSAR style)
 ********************************************************************************
 */

#ifndef INC_PLATFORM_TYPES_H_
#define INC_PLATFORM_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/

/************************************
 * MACROS AND DEFINES
 ************************************/

/************************************
 * TYPEDEFS
 ************************************/

typedef unsigned char boolean;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;

typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;
typedef signed long long sint64;

/* Definición de posiciones de la palanca */
enum Positions {
    PARKING = 0,
    REVERSE,
    NEUTRAL,
    DRIVE,
    FIRST,
    SECOND,
    THIRD
};

/************************************
 * EXPORTED VARIABLES
 ************************************/

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/


#ifdef __cplusplus
}
#endif

#endif /* INC_PLATFORM_TYPES_H_ */
