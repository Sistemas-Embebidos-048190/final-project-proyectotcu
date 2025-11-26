/**
 ********************************************************************************
 * @file    tcu_types.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Definición de tipos enumerados específicos de la TCU
 ********************************************************************************
 */

#ifndef TCU_TYPES_H
#define TCU_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "Inc_Platform_Types.h" /* Para usar 'boolean' y tipos base */

/************************************
 * MACROS AND DEFINES
 ************************************/

/************************************
 * TYPEDEFS
 ************************************/

/* Enum para Driver_Mode_Selection (Eco=0, Sport=1, Normal=2) */
typedef enum
{
    DRIVER_MODE_ECO    = 0,
    DRIVER_MODE_SPORT  = 1,
    DRIVER_MODE_NORMAL = 2
} DriverMode_Enum;

/* Enum para Gear_Lever_Position (P, R, N, D...) */
typedef enum
{
    GEAR_POS_PARK        = 0,
    GEAR_POS_REVERSE     = 1,
    GEAR_POS_NEUTRAL     = 2,
    GEAR_POS_DRIVE       = 3,
    GEAR_POS_INVALID     = 7
} GearPos_Enum;

/************************************
 * EXPORTED VARIABLES
 ************************************/

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/


#ifdef __cplusplus
}
#endif

#endif /* TCU_TYPES_H */
