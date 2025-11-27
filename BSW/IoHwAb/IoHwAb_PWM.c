/**
 ********************************************************************************
 * @file    IoHwAb_PWM.c
 * @author  ${user}
 * @date    ${date}
 * @brief   Implementación de la Abstracción de Hardware para PWM
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include "IoHwAb_PWM.h"
#include "main.c"
#include "fsl_clock.h"

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

void PWM_INIT(void)
{
    /* Llamada directa a la función de inicialización */
    //PWM_DRV_Init3PhPwm();

}
void BOARD_InitPins(void)
{
    /* Enables the clock for PORT1: Enables clock */
    CLOCK_EnableClock(kCLOCK_Port1);
    /* Enables the clock for PORT2: Enables clock */
    CLOCK_EnableClock(kCLOCK_Port2);
    /* PORT2_2 (pin H3) is configured as PWM1_A2 */
        PORT_SetPinConfig(PORT2, 2U, &port2_2_pinH3_config);

        const port_pin_config_t port2_4_pinK3_config = {/* Internal pull-up/down resistor is disabled */
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
                                                        /* Pin is configured as PWM1_A1 */
                                                        kPORT_MuxAlt5,
                                                        /* Digital input enabled */
                                                        kPORT_InputBufferEnable,
                                                        /* Digital input is not inverted */
                                                        kPORT_InputNormal,
                                                        /* Pin Control Register fields [15:0] are not locked */
                                                        kPORT_UnlockRegister};
        /* PORT2_4 (pin K3) is configured as PWM1_A1 */
        PORT_SetPinConfig(PORT2, 4U, &port2_4_pinK3_config);

        const port_pin_config_t port2_6_pinK2_config = {/* Internal pull-up/down resistor is disabled */
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
                                                        /* Pin is configured as PWM1_A0 */
                                                        kPORT_MuxAlt5,
                                                        /* Digital input enabled */
                                                        kPORT_InputBufferEnable,
                                                        /* Digital input is not inverted */
                                                        kPORT_InputNormal,
                                                        /* Pin Control Register fields [15:0] are not locked */
                                                        kPORT_UnlockRegister};
        /* PORT2_6 (pin K2) is configured as PWM1_A0 */
        PORT_SetPinConfig(PORT2, 6U, &port2_6_pinK2_config);

        const port_pin_config_t port2_7_pinL2_config = {/* Internal pull-up/down resistor is disabled */
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
                                                        /* Pin is configured as PWM1_B0 */
                                                        kPORT_MuxAlt5,
                                                        /* Digital input enabled */
                                                        kPORT_InputBufferEnable,
                                                        /* Digital input is not inverted */
                                                        kPORT_InputNormal,
                                                        /* Pin Control Register fields [15:0] are not locked */
                                                        kPORT_UnlockRegister};
        /* PORT2_7 (pin L2) is configured as PWM1_B0 */
        PORT_SetPinConfig(PORT2, 7U, &port2_7_pinL2_config);
}
