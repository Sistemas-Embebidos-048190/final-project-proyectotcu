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
#include "Inc_Platform_Types.h"
#include "Set_signals.c"

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

// Funcion para asignar la posicion de la palanca
uint8 Assign_Selection_Level(void)
{
    if (GPIO_PinRead(PARKING_GPIO, PARKING_GPIO_PIN) == 1) //Va a cambiar todo por los pines de NXP
    {
        Set_g_OUT_Current_Gear(PARKING); //Cambiar por RTE_Write_ Gear_level
    } else if (GPIO_PinRead(REVERSE_GPIO,REVERSE_GPIO_PIN) == 1)
    {
        Set_g_OUT_Current_Gear(REVERSE);
    } else if (GPIO_PinRead(NEUTRAL_GPIO,NEUTRAL_GPIO_PIN) == 1)
    {
        Set_g_OUT_Current_Gear(NEUTRAL);
    } else if (GPIO_PinRead(DRIVE_GPIO,DRIVE_GPIO_PIN) == 1)
    {
        Set_g_OUT_Current_Gear(DRIVE);
    } else if (GPIO_PinRead(PRIMERA_GPIO,PRIMERA_GPIO_PIN) == 1)
    {
        Set_g_OUT_Current_Gear(FIRST);
    } else if (GPIO_PinRead(SEGUNDA_GPIO,SEGUNDA_GPIO_PIN) == 1)
    {
        Set_g_OUT_Current_Gear(SECOND);
    } else if (GPIO_PinRead(TERCERA_GPIO,TERCERA_GPIO_PIN) == 1)
    {
        Set_g_OUT_Current_Gear(THIRD);
    }*/
}

void GPIO_InitPins(void)
{
	/* Define the init structure for the input switch pin */
	gpio_pin_config_t in_config = {
		kGPIO_DigitalInput,
		0,
	};

	/* Define the init structure for the output LED pin */
	gpio_pin_config_t out_config = {
		kGPIO_DigitalOutput,
		0,
	};

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
    PORT_SetPinConfig(BREAK_PORT, BREAK_GPIO_PIN, kPORT_InputNormal);
    GPIO_PinInit(BREAK_GPIO, BREAK_GPIO_PIN, &in_config);

    /* PORT5_9 PARKING */
    PORT_SetPinConfig(PARKING_PORT, PARKING_GPIO_PIN, kPORT_InputNormal);
    GPIO_PinInit(PARKING_GPIO, PARKING_GPIO_PIN, &in_config);

    /* PORT1_13 REVERSE */
    PORT_SetPinConfig(REVERSE_PORT, REVERSE_GPIO_PIN, kPORT_InputNormal);
    GPIO_PinInit(REVERSE_GPIO, REVERSE_GPIO_PIN, &in_config);

    /* PORT2_0 NEUTRAL PEDAL */
    PORT_SetPinConfig(NEUTRAL_PORT, NEUTRAL_GPIO_PIN, kPORT_InputNormal);
    GPIO_PinInit(NEUTRAL_GPIO, NEUTRAL_GPIO_PIN, &in_config);

    /* PORT1_23 DRIVE PEDAL */
    PORT_SetPinConfig(DRIVE_PORT, DRIVE_GPIO_PIN, kPORT_InputNormal);
    GPIO_PinInit(DRIVE_GPIO, DRIVE_GPIO_PIN, &in_config);

    /* PORT1_8 PRIMERA PEDAL */
    PORT_SetPinConfig(PRIMERA_PORT, PRIMERA_GPIO_PIN, kPORT_InputNormal);
    GPIO_PinInit(PRIMERA_GPIO, PRIMERA_GPIO_PIN, &in_config);

    /* PORT1_9 SEGUNDA PEDAL */
    PORT_SetPinConfig(SEGUNDA_PORT, SEGUNDA_GPIO_PIN, kPORT_InputNormal);
    GPIO_PinInit(SEGUNDA_GPIO, SEGUNDA_GPIO_PIN, &in_config);

    /* PORT1_14 TERCERA PEDAL */
    PORT_SetPinConfig(TERCERA_PORT, TERCERA_GPIO_PIN, kPORT_InputNormal);
    GPIO_PinInit(TERCERA_GPIO, TERCERA_GPIO_PIN, &in_config);
}
