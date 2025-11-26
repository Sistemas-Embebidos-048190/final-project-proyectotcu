/**
 ********************************************************************************
 * @file    Get_signals.c
 * @author  ${user}
 * @date    ${date}
 * @brief   Implementación de funciones "Getter" para leer señales del sistema
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include "Get_signals.h"

/************************************
 * EXTERN VARIABLES
 ************************************/

/************************************
 * PRIVATE MACROS AND DEFINES
 ************************************/

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

// --- Funciones para Señales CAN (Entradas) ---

uint16 Get_g_CAN_Engine_RPM(void)
{
    return g_CAN_Engine_RPM;
}

uint8 Get_g_CAN_Throttle_Position_Sensor(void)
{
    return g_CAN_Throttle_Position_Sensor;
}

sint16 Get_g_CAN_Engine_Torque_Actual(void)
{
    return g_CAN_Engine_Torque_Actual;
}

uint8 Get_g_CAN_Vehicle_Speed_Reference(void)
{
    return g_CAN_Vehicle_Speed_Reference;
}

uint8 Get_g_CAN_Driver_Mode_Selection(void)
{
    return g_CAN_Driver_Mode_Selection;
}


// --- Funciones para Hardwired (Entradas) ---

uint8 Get_g_HW_Gear_Lever_Position(void)
{
    return g_HW_Gear_Lever_Position;
}

uint8 Get_g_HW_Brake_Pedal_Switch(void)
{
    return g_HW_Brake_Pedal_Switch;
}

uint16 Get_g_HW_Turbine_Speed_Sensor(void)
{
    return g_HW_Turbine_Speed_Sensor;
}

uint16 Get_g_HW_Output_Speed_Sensor(void)
{
    return g_HW_Output_Speed_Sensor;
}

sint16 Get_g_HW_Transmission_Fluid_Temp(void)
{
    return g_HW_Transmission_Fluid_Temp;
}


// --- Funciones para Señales de Salida (Controladas por TCU) ---

uint8 Get_g_OUT_Shift_Solenoid(void)
{
    return g_OUT_Shift_Solenoid;
}

uint8 Get_g_OUT_Line_Pressure(void)
{
    return g_OUT_Line_Pressure;
}

uint8 Get_g_OUT_TCC_Control_Solenoid(void)
{
    return g_OUT_TCC_Control_Solenoid;
}

uint8 Get_g_OUT_Shift_Lock_Solenoid(void)
{
    return g_OUT_Shift_Lock_Solenoid;
}

uint8 Get_g_OUT_Torque_Reduction_Request(void)
{
    return g_OUT_Torque_Reduction_Request;
}

uint8 Get_g_OUT_Current_Gear(void)
{
    return g_OUT_Current_Gear;
}

uint8 Get_g_OUT_Transmission_MIL_Status(void)
{
    return g_OUT_Transmission_MIL_Status;
}
