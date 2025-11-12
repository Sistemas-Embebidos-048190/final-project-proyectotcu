/*
 * Archivo: tcu_types.h
 * Define los tipos enumerados específicos de la TCU.
 */
#ifndef TCU_TYPES_H
#define TCU_TYPES_H

#include "Platform_Types.h" // Para usar 'boolean'

// Enum para Driver_Mode_Selection (Eco=0, Sport=1)
typedef enum
{
    DRIVER_MODE_ECO    = 0,
    DRIVER_MODE_SPORT  = 1
} DriverMode_Enum;

// Enum para Gear_Lever_Position (P, R, N, D...)
typedef enum
{
    GEAR_POS_PARK        = 0,
    GEAR_POS_REVERSE     = 1,
    GEAR_POS_NEUTRAL     = 2,
    GEAR_POS_DRIVE       = 3,
    GEAR_POS_INVALID     = 7
} GearPos_Enum;

#endif /* TCU_TYPES_H */
