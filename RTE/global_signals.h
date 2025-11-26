/**
 ********************************************************************************
 * @file    global_signals.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Declaración de las variables globales para acceso externo
 ********************************************************************************
 */

#ifndef GLOBAL_SIGNALS_H
#define GLOBAL_SIGNALS_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "Inc_Platform_Types.h"
#include "tcu_types.h" /* Necesario para DriverMode_Enum */

/************************************
 * MACROS AND DEFINES
 ************************************/

/************************************
 * TYPEDEFS
 ************************************/

/************************************
 * EXPORTED VARIABLES
 ************************************/

// --- Señales de CAN (entradas a la TCU) ---
extern uint16 g_CAN_Engine_RPM;                  			/* 0 - 8000 RPM */
extern uint8  g_CAN_Throttle_Position_Sensor;    			/* 0 - 100 % */
extern sint16 g_CAN_Engine_Torque_Actual;        			/* -50 to 400 Nm */
extern uint8  g_CAN_Vehicle_Speed_Reference;     			/* 0 - 250 kph */
extern DriverMode_Enum  g_CAN_Driver_Mode_Selection;        /* Enum (0=Eco, 1=Sport, 2=Normal) */

// --- Señales de Hardwired (entradas a la TCU) ---
extern uint8  g_HW_Gear_Lever_Position;          			/* Enum (0-7) */
extern uint8  g_HW_Brake_Pedal_Switch;           			/* Binary (0/1) */
extern uint16 g_HW_Turbine_Speed_Sensor;         			/* 0 - 8000 RPM */
extern uint16 g_HW_Output_Speed_Sensor;          			/* 0 - 7000 RPM */
extern sint16 g_HW_Transmission_Fluid_Temp;      			/* -40 to 150 °C */

// --- Señales de Salida (controladas por la TCU) ---
extern uint8  g_OUT_Shift_Solenoid;              			/* On-Off */
extern uint8  g_OUT_Line_Pressure;               			/* PWM (0-100%) */
extern uint8  g_OUT_TCC_Control_Solenoid;       			/* PWM (0-100%) */
extern uint8  g_OUT_Shift_Lock_Solenoid;         			/* On-Off */
extern uint8  g_OUT_Torque_Reduction_Request;   			/* CAN */
extern uint8  g_OUT_Current_Gear;                			/* CAN */
extern uint8  g_OUT_Transmission_MIL_Status;     			/* CAN */

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/


#ifdef __cplusplus
}
#endif

#endif /* GLOBAL_SIGNALS_H */
