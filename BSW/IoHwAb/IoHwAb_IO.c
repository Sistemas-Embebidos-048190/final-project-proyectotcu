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
#include "fsl_port.h"
#include "fsl_gpio.h"

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
	/*GPIO_PinRead()
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
    }*/
}

void BOARD_InitPins(void)
{

    const port_pin_config_t port0_10_pinB12_config = {/* Internal pull-up/down resistor is disabled */
                                                      kPORT_PullDisable,
                                                      /* Low internal pull resistor value is selected. */
                                                      kPORT_LowPullResistor,
                                                      /* Fast slew rate is configured */
                                                      kPORT_FastSlewRate,
                                                      /* Passive input filter is disabled */
                                                      kPORT_PassiveFilterDisable,
                                                      /* Open drain output is disabled */
                                                      kPORT_OpenDrainDisable,
                                                      /* Low drive strength is configured */
                                                      kPORT_LowDriveStrength,
                                                      /* Pin is configured as PIO0_10 */
                                                      kPORT_MuxAlt0,
                                                      /* Digital input enabled */
                                                      kPORT_InputBufferEnable,
                                                      /* Digital input is not inverted */
                                                      kPORT_InputNormal,
                                                      /* Pin Control Register fields [15:0] are not locked */
                                                      kPORT_UnlockRegister};
    /* PORT5_8 BREAK PEDAL */
    PORT_SetPinConfig(PORT5, 8U, &port0_10_pinB12_config);
    /* PORT5_9 PARKING */
    PORT_SetPinConfig(PORT5, 9U, &port0_10_pinB12_config);
    /* PORT1_13 REVERSE */
    PORT_SetPinConfig(PORT1, 13U, &port0_10_pinB12_config);
    /* PORT2_0 BREAK PEDAL */
    PORT_SetPinConfig(PORT2, 0U, &port0_10_pinB12_config);
    /* PORT1_23 BREAK PEDAL */
    PORT_SetPinConfig(PORT1, 23U, &port0_10_pinB12_config);
    /* PORT1_8 BREAK PEDAL */
    PORT_SetPinConfig(PORT1, 8U, &port0_10_pinB12_config);
    /* PORT1_9 BREAK PEDAL */
    PORT_SetPinConfig(PORT1, 9U, &port0_10_pinB12_config);
    /* PORT1_14 BREAK PEDAL */
    PORT_SetPinConfig(PORT1, 14U, &port0_10_pinB12_config);
}
