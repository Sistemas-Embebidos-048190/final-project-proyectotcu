/* Archivo Set_signals.h */

#ifndef SET_SIGNALS_H
#define SET_SIGNALS_H


#include "Platform_Types.h"
#include "global_signals.h"


void Set_g_CAN_Engine_RPM(uint16 value);
void Set_g_CAN_Throttle_Position_Sensor(uint8 value);
void Set_g_CAN_Engine_Torque_Actual(sint16 value);
void Set_g_CAN_Vehicle_Speed_Reference(uint8 value);
void Set_g_CAN_Driver_Mode_Selection(uint8 value);

void Set_g_HW_Gear_Lever_Position(uint8 value);
void Set_g_HW_Brake_Pedal_Switch(uint8 value);
void Set_g_HW_Turbine_Speed_Sensor(uint16 value);
void Set_g_HW_Output_Speed_Sensor(uint16 value);
void Set_g_HW_Transmission_Fluid_Temp(sint16 value);

void Set_g_OUT_Shift_Solenoid(uint8 value);
void Set_g_OUT_Line_Pressure(uint8 value);
void Set_g_OUT_TCC_Control_Solenoid(uint8 value);
void Set_g_OUT_Shift_Lock_Solenoid(uint8 value);
void Set_g_OUT_Torque_Reduction_Request(uint8 value);
void Set_g_OUT_Current_Gear(uint8 value);
void Set_g_OUT_Transmission_MIL_Status(uint8 value);

#endif  // SET_SIGNALS_H
