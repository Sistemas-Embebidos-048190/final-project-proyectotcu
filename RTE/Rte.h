/**
 ********************************************************************************
 * @file    Rte.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Define la API del RTE que el SW-C de la TCM utiliza
 ********************************************************************************
 */

#ifndef RTE_H
#define RTE_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "Inc_Platform_Types.h"
#include "global_signals.h" /* Para los nombres de las señales */
#include "Set_signals.h"    /* Para las funciones Set_... */
#include "Get_signals.h"    /* Para las funciones Get_... */
#include "tcu_types.h"      /* Para los tipos Enum */

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

/* ==========================================================
 * API DE SERVICIOS (BSW)
 * ==========================================================
 */


/* ==========================================================
 * API DE SEÑALES DE LECTURA (READ) PARA ASW
 * (El ASW llama a estas para LEER datos del BSW)
 * ==========================================================
 */

/* --- Señales CAN (Entradas) --- */
uint16 Rte_read_g_CAN_Engine_RPM(void);
uint8  Rte_read_g_CAN_Throttle_Position_Sensor(void);
sint16 Rte_read_g_CAN_Engine_Torque_Actual(void);
uint8  Rte_read_g_CAN_Vehicle_Speed_Reference(void);
uint8  Rte_read_g_CAN_Driver_Mode_Selection(void);

/* --- Señales Hardwired (Entradas) --- */
uint8  Rte_read_g_HW_Gear_Lever_Position(void);
uint8  Rte_read_g_HW_Brake_Pedal_Switch(void);
uint16 Rte_read_g_HW_Turbine_Speed_Sensor(void);
uint16 Rte_read_g_HW_Output_Speed_Sensor(void);
sint16 Rte_read_g_HW_Transmission_Fluid_Temp(void);

/* --- Señales de Salida (Controladas por TCU) --- */
/* (El ASW también puede leer sus propias salidas para verificar) */
uint8  Rte_read_g_OUT_Shift_Solenoid(void);
uint8  Rte_read_g_OUT_Line_Pressure(void);
uint8  Rte_read_g_OUT_TCC_Control_Solenoid(void);
uint8  Rte_read_g_OUT_Shift_Lock_Solenoid(void);
uint8  Rte_read_g_OUT_Torque_Reduction_Request(void);
uint8  Rte_read_g_OUT_Current_Gear(void);
uint8  Rte_read_g_OUT_Transmission_MIL_Status(void);


/* ==========================================================
 * API DE SEÑALES DE ESCRITURA (WRITE) PARA ASW/TESTING
 * (El ASW llama a estas para ESCRIBIR datos al BSW)
 * ==========================================================
 */

/* --- Señales CAN (Entradas) - Usadas por BSW o Simulación/Test --- */
void Rte_write_g_CAN_Engine_RPM(uint16 value);
void Rte_write_g_CAN_Throttle_Position_Sensor(uint8 value);
void Rte_write_g_CAN_Engine_Torque_Actual(sint16 value);
void Rte_write_g_CAN_Vehicle_Speed_Reference(uint8 value);
void Rte_write_g_CAN_Driver_Mode_Selection(uint8 value);

/* --- Señales Hardwired (Entradas) - Usadas por BSW o Simulación/Test --- */
void Rte_write_g_HW_Gear_Lever_Position(uint8 value);
void Rte_write_g_HW_Brake_Pedal_Switch(uint8 value);
void Rte_write_g_HW_Turbine_Speed_Sensor(uint16 value);
void Rte_write_g_HW_Output_Speed_Sensor(uint16 value);
void Rte_write_g_HW_Transmission_Fluid_Temp(sint16 value);

/* --- Señales de Salida (Controladas por TCU) - Usadas por ASW --- */
void Rte_write_g_OUT_Shift_Solenoid(uint8 value);
void Rte_write_g_OUT_Line_Pressure(uint8 value);
void Rte_write_g_OUT_TCC_Control_Solenoid(uint8 value);
void Rte_write_g_OUT_Shift_Lock_Solenoid(uint8 value);
void Rte_write_g_OUT_Torque_Reduction_Request(uint8 value);
void Rte_write_g_OUT_Current_Gear(uint8 value);
void Rte_write_g_OUT_Transmission_MIL_Status(uint8 value);


#ifdef __cplusplus
}
#endif

#endif /* RTE_H */
