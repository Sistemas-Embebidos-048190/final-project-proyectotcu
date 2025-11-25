/**
 ********************************************************************************
 * @file    IoHwAb_IO.c
 * @author  ${user}
 * @date    ${date}
 * @brief   Implementación de la Abstracción de Hardware de E/S
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include "IoHwAb_IO.h"

/************************************
 * EXTERN VARIABLES
 ************************************/

/************************************
 * PRIVATE MACROS AND DEFINES
 ************************************/
#define POS1 (1<<1)
#define POS2 (1<<2)
#define POS3 (1<<3)
#define POS4 (1<<4)
#define POS5 (1<<5)
#define POS6 (1<<6)
#define POS7 (1<<7)

/************************************
 * PRIVATE TYPEDEFS
 ************************************/

/************************************
 * STATIC VARIABLES
 ************************************/

/************************************
 * GLOBAL VARIABLES
 ************************************/

/************************************
 * STATIC FUNCTION PROTOTYPES
 ************************************/

/************************************
 * STATIC FUNCTIONS
 ************************************/

/************************************
 * GLOBAL FUNCTIONS
 ************************************/

// Funcion para asignar la posicion de la palanca
uint8 Assign_Selection_Level(void)
{
    if (pin1 == POS1) //Va a cambiar todo por los pines de NXP
    {
        Set_g_OUT_Current_Gear(PARKING); //Cambiar por RTE_Write_ Gear_level
    } else if (pin2 == POS2)
    {
        Set_g_OUT_Current_Gear(REVERSE);
    } else if (pin3 == POS3)
    {
        Set_g_OUT_Current_Gear(NEUTRAL);
    } else if (pin4 == POS4)
    {
        Set_g_OUT_Current_Gear(DRIVE);
    } else if (pin5 == POS5)
    {
        Set_g_OUT_Current_Gear(FIRST);
    } else if (pin6 == POS6)
    {
        Set_g_OUT_Current_Gear(SECOND);
    } else if (pin7 == POS7)
    {
        Set_g_OUT_Current_Gear(THIRD);
    }
}
