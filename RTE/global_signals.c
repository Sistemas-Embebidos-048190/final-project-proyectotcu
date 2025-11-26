/**
 ********************************************************************************
 * @file    global_signals.c
 * @author  ${user}
 * @date    ${date}
 * @brief   Definición e inicialización de todas las variables globales de señales
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include "global_signals.h"

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

// --- DEFINICIONES DE SEÑALES GLOBALES ---
DriverMode_Enum g_CAN_Driver_Mode_Selection = DRIVER_MODE_NORMAL;

// Señales de CAN (entradas a la TCU)
uint16 g_CAN_Engine_RPM = 0;                  // RPM del motor
uint8  g_CAN_Throttle_Position_Sensor = 0;    // Posición del pedal del acelerador
sint16 g_CAN_Engine_Torque_Actual = 0;        // Par de motor actual (con signo)
uint8  g_CAN_Vehicle_Speed_Reference = 0;     // Velocidad de referencia del vehículo

// Señales de Hardwired (entradas a la TCU)
uint8  g_HW_Gear_Lever_Position = 0;          // Posición física de la palanca de cambios
uint8  g_HW_Brake_Pedal_Switch = 0;           // Estado del interruptor del pedal de freno
uint16 g_HW_Turbine_Speed_Sensor = 0;         // Velocidad del sensor de la turbina
uint16 g_HW_Output_Speed_Sensor = 0;          // Velocidad del sensor de salida de la transmisión
sint16 g_HW_Transmission_Fluid_Temp = 0;      // Temperatura del fluido de la transmisión

// Señales de Salida (controladas por la TCU)
uint8  g_OUT_Shift_Solenoid = 0;              // Solenoide de cambio (control de marcha)
uint8  g_OUT_Line_Pressure = 0;               // Solenoide de presión de línea (control PWM)
uint8  g_OUT_TCC_Control_Solenoid = 0;        // Solenoide de control del TCC (control PWM)
uint8  g_OUT_Shift_Lock_Solenoid = 0;         // Solenoide de bloqueo de cambio
uint8  g_OUT_Torque_Reduction_Request = 0;    // Solicitud de reducción de par (vía CAN)
uint8  g_OUT_Current_Gear = 0;                // Marcha actual de la transmisión (vía CAN)
uint8  g_OUT_Transmission_MIL_Status = 0;     // Estado de la lámpara de fallo de transmisión (vía CAN)

/************************************
 * STATIC FUNCTION PROTOTYPES
 ************************************/

/************************************
 * STATIC FUNCTIONS
 ************************************/

/************************************
 * GLOBAL FUNCTIONS
 ************************************/
