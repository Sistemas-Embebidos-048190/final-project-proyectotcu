/* Archivo Get_signals.h */

#ifndef GET_SIGNALS_H
#define GET_SIGNALS_H


#include "Platform_Types.h"
#include "global_signals.h"


uint16 Get_g_CAN_Engine_RPM(void);
uint8  Get_g_CAN_Throttle_Position_Sensor(void);
sint16 Get_g_CAN_Engine_Torque_Actual(void);
uint8  Get_g_CAN_Vehicle_Speed_Reference(void);
uint8  Get_g_CAN_Driver_Mode_Selection(void);

uint8  Get_g_HW_Gear_Lever_Position(void);
uint8  Get_g_HW_Brake_Pedal_Switch(void);
uint16 Get_g_HW_Turbine_Speed_Sensor(void);
uint16 Get_g_HW_Output_Speed_Sensor(void);
sint16 Get_g_HW_Transmission_Fluid_Temp(void);

uint8  Get_g_OUT_Shift_Solenoid(void);
uint8  Get_g_OUT_Line_Pressure(void);
uint8  Get_g_OUT_TCC_Control_Solenoid(void);
uint8  Get_g_OUT_Shift_Lock_Solenoid(void);
uint8  Get_g_OUT_Torque_Reduction_Request(void);
uint8  Get_g_OUT_Current_Gear(void);
uint8  Get_g_OUT_Transmission_MIL_Status(void);

#endif  // GET_SIGNALS_H
