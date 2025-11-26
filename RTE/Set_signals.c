/**
 ********************************************************************************
 * @file    Set_signals.c
 * @author  ${user}
 * @date    ${date}
 * @brief   Implementación de funciones "Setter" para escribir señales globales
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include "Set_signals.h"
/* Nota: Asegúrate de que este archivo (o su header) tenga visibilidad de
   "global_signals.h" para poder acceder a las variables g_... */

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

void Set_g_CAN_Engine_RPM(uint16 value)
{
    g_CAN_Engine_RPM = value;
}

void Set_g_CAN_Throttle_Position_Sensor(uint8 value)
{
    g_CAN_Throttle_Position_Sensor = value;
}

void Set_g_CAN_Engine_Torque_Actual(sint16 value)
{
    g_CAN_Engine_Torque_Actual = value;
}

void Set_g_CAN_Vehicle_Speed_Reference(uint8 value)
{
    g_CAN_Vehicle_Speed_Reference = value;
}

void Set_g_CAN_Driver_Mode_Selection(uint8 value)
{
    g_CAN_Driver_Mode_Selection = value;
}


// --- Funciones para Hardwired (Entradas) ---

void Set_g_HW_Gear_Lever_Position(uint8 value)
{
    g_HW_Gear_Lever_Position = value;
}

void Set_g_HW_Brake_Pedal_Switch(uint8 value)
{
    g_HW_Brake_Pedal_Switch = value;
}

void Set_g_HW_Turbine_Speed_Sensor(uint16 value)
{
    g_HW_Turbine_Speed_Sensor = value;
}

void Set_g_HW_Output_Speed_Sensor(uint16 value)
{
    g_HW_Output_Speed_Sensor = value;
}

void Set_g_HW_Transmission_Fluid_Temp(sint16 value)
{
    g_HW_Transmission_Fluid_Temp = value;
}


// --- Funciones para Señales de Salida (Controladas por TCU) ---

void Set_g_OUT_Shift_Solenoid(uint8 value)
{
    g_OUT_Shift_Solenoid = value;
}

void Set_g_OUT_Line_Pressure(uint8 value)
{
    g_OUT_Line_Pressure = value;
}

void Set_g_OUT_TCC_Control_Solenoid(uint8 value)
{
    g_OUT_TCC_Control_Solenoid = value;
}

void Set_g_OUT_Shift_Lock_Solenoid(uint8 value)
{
    g_OUT_Shift_Lock_Solenoid = value;
}

void Set_g_OUT_Torque_Reduction_Request(uint8 value)
{
    g_OUT_Torque_Reduction_Request = value;
}

void Set_g_OUT_Current_Gear(uint8 value)
{
    g_OUT_Current_Gear = value;
}

void Set_g_OUT_Transmission_MIL_Status(uint8 value)
{
    g_OUT_Transmission_MIL_Status = value;
}
