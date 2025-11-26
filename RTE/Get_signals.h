/**
 ********************************************************************************
 * @file    Get_signals.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Prototipos de funciones para obtener valores de las señales globales
 ********************************************************************************
 */

#ifndef GET_SIGNALS_H
#define GET_SIGNALS_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "Inc_Platform_Types.h"
#include "global_signals.h"

/************************************
 * MACROS AND DEFINES
 ************************************/

/************************************
 * TYPEDEFS
 ************************************/

/************************************
 * EXPORTED VARIABLES
 ************************************/

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/

/* --- Señales CAN (Entradas) --- */
uint16 Get_g_CAN_Engine_RPM(void);
uint8  Get_g_CAN_Throttle_Position_Sensor(void);
sint16 Get_g_CAN_Engine_Torque_Actual(void);
uint8  Get_g_CAN_Vehicle_Speed_Reference(void);
uint8  Get_g_CAN_Driver_Mode_Selection(void);

/* --- Señales Hardwired (Entradas) --- */
uint8  Get_g_HW_Gear_Lever_Position(void);
uint8  Get_g_HW_Brake_Pedal_Switch(void);
uint16 Get_g_HW_Turbine_Speed_Sensor(void);
uint16 Get_g_HW_Output_Speed_Sensor(void);
sint16 Get_g_HW_Transmission_Fluid_Temp(void);

/* --- Señales de Salida (Controladas por TCU) --- */
uint8  Get_g_OUT_Shift_Solenoid(void);
uint8  Get_g_OUT_Line_Pressure(void);
uint8  Get_g_OUT_TCC_Control_Solenoid(void);
uint8  Get_g_OUT_Shift_Lock_Solenoid(void);
uint8  Get_g_OUT_Torque_Reduction_Request(void);
uint8  Get_g_OUT_Current_Gear(void);
uint8  Get_g_OUT_Transmission_MIL_Status(void);


#ifdef __cplusplus
}
#endif

#endif /* GET_SIGNALS_H */
