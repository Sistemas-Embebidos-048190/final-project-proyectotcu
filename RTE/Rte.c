/**
 ********************************************************************************
 * @file    Rte.c
 * @author  ${user}
 * @date    ${date}
 * @brief   Implementación de la API del RTE (Runtime Environment) - Passthrough
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include "Rte.h"

/* NOTA: Rte.h ya debería incluir todos los headers necesarios
   (NvM.h, Get_signals.h, Set_signals.h) para que esto compile. */

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

/* ==========================================================
 * IMPLEMENTACIÓN API DE SERVICIOS (BSW)
 * ==========================================================
 */

Std_ReturnType Rte_Call_R_NvM_WriteBlock(NvM_BlockIdType BlockId, const uint8* Data)
{
    Std_ReturnType ret;

    // Reenviar la llamada a la función del BSW
    ret = NvM_WriteBlock(BlockId, Data);

    return ret;
}


/* ==========================================================
 * IMPLEMENTACIÓN API DE LECTURA (READ)
 * (Llaman a sus funciones Get_... de Get_signals.c)
 * ==========================================================
 */

// --- Señales CAN (Entradas) ---
uint16 Rte_read_g_CAN_Engine_RPM(void)
{
    return Get_g_CAN_Engine_RPM();
}

uint8 Rte_read_g_CAN_Throttle_Position_Sensor(void)
{
    return Get_g_CAN_Throttle_Position_Sensor();
}

sint16 Rte_read_g_CAN_Engine_Torque_Actual(void)
{
    return Get_g_CAN_Engine_Torque_Actual();
}

uint8 Rte_read_g_CAN_Vehicle_Speed_Reference(void)
{
    return Get_g_CAN_Vehicle_Speed_Reference();
}

uint8 Rte_read_g_CAN_Driver_Mode_Selection(void)
{
    return Get_g_CAN_Driver_Mode_Selection();
}

// --- Señales Hardwired (Entradas) ---
uint8 Rte_read_g_HW_Gear_Lever_Position(void)
{
    return Get_g_HW_Gear_Lever_Position();
}

uint8 Rte_read_g_HW_Brake_Pedal_Switch(void)
{
    return Get_g_HW_Brake_Pedal_Switch();
}

uint16 Rte_read_g_HW_Turbine_Speed_Sensor(void)
{
    return Get_g_HW_Turbine_Speed_Sensor();
}

uint16 Rte_read_g_HW_Output_Speed_Sensor(void)
{
    return Get_g_HW_Output_Speed_Sensor();
}

sint16 Rte_read_g_HW_Transmission_Fluid_Temp(void)
{
    return Get_g_HW_Transmission_Fluid_Temp();
}

// --- Señales de Salida (Controladas por TCU) ---
uint8 Rte_read_g_OUT_Shift_Solenoid(void)
{
    return Get_g_OUT_Shift_Solenoid();
}

uint8 Rte_read_g_OUT_Line_Pressure(void)
{
    return Get_g_OUT_Line_Pressure();
}

uint8 Rte_read_g_OUT_TCC_Control_Solenoid(void)
{
    return Get_g_OUT_TCC_Control_Solenoid();
}

uint8 Rte_read_g_OUT_Shift_Lock_Solenoid(void)
{
    return Get_g_OUT_Shift_Lock_Solenoid();
}

uint8 Rte_read_g_OUT_Torque_Reduction_Request(void)
{
    return Get_g_OUT_Torque_Reduction_Request();
}

uint8 Rte_read_g_OUT_Current_Gear(void)
{
    return Get_g_OUT_Current_Gear();
}

uint8 Rte_read_g_OUT_Transmission_MIL_Status(void)
{
    return Get_g_OUT_Transmission_MIL_Status();
}


/* ==========================================================
 * IMPLEMENTACIÓN API DE ESCRITURA (WRITE)
 * (Llaman a sus funciones Set_... de Set_signals.c)
 * ==========================================================
 */

// --- Señales CAN (Entradas) ---
void Rte_write_g_CAN_Engine_RPM(uint16 value)
{
    Set_g_CAN_Engine_RPM(value);
}

void Rte_write_g_CAN_Throttle_Position_Sensor(uint8 value)
{
    Set_g_CAN_Throttle_Position_Sensor(value);
}

void Rte_write_g_CAN_Engine_Torque_Actual(sint16 value)
{
    Set_g_CAN_Engine_Torque_Actual(value);
}

void Rte_write_g_CAN_Vehicle_Speed_Reference(uint8 value)
{
    Set_g_CAN_Vehicle_Speed_Reference(value);
}

void Rte_write_g_CAN_Driver_Mode_Selection(uint8 value)
{
    Set_g_CAN_Driver_Mode_Selection(value);
}

// --- Señales Hardwired (Entradas) ---
void Rte_write_g_HW_Gear_Lever_Position(uint8 value)
{
    Set_g_HW_Gear_Lever_Position(value);
}

void Rte_write_g_HW_Brake_Pedal_Switch(uint8 value)
{
    Set_g_HW_Brake_Pedal_Switch(value);
}

void Rte_write_g_HW_Turbine_Speed_Sensor(uint16 value)
{
    Set_g_HW_Turbine_Speed_Sensor(value);
}

void Rte_write_g_HW_Output_Speed_Sensor(uint16 value)
{
    Set_g_HW_Output_Speed_Sensor(value);
}

void Rte_write_g_HW_Transmission_Fluid_Temp(sint16 value)
{
    Set_g_HW_Transmission_Fluid_Temp(value);
}

// --- Señales de Salida (Controladas por TCU) ---
void Rte_write_g_OUT_Shift_Solenoid(uint8 value)
{
    Set_g_OUT_Shift_Solenoid(value);
}

void Rte_write_g_OUT_Line_Pressure(uint8 value)
{
    Set_g_OUT_Line_Pressure(value);
}

void Rte_write_g_OUT_TCC_Control_Solenoid(uint8 value)
{
    Set_g_OUT_TCC_Control_Solenoid(value);
}

void Rte_write_g_OUT_Shift_Lock_Solenoid(uint8 value)
{
    Set_g_OUT_Shift_Lock_Solenoid(value);
}

void Rte_write_g_OUT_Torque_Reduction_Request(uint8 value)
{
    Set_g_OUT_Torque_Reduction_Request(value);
}

void Rte_write_g_OUT_Current_Gear(uint8 value)
{
    Set_g_OUT_Current_Gear(value);
}

void Rte_write_g_OUT_Transmission_MIL_Status(uint8 value)
{
    Set_g_OUT_Transmission_MIL_Status(value);
}
