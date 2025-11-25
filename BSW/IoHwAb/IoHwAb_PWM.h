/**
 ********************************************************************************
 * @file    IoHwAb_PWM.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Definiciones y prototipos para la Abstracción de Hardware PWM
 ********************************************************************************
 */

#ifndef IOHWAB_PWM_H
#define IOHWAB_PWM_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
/* Nota: Asegúrate de incluir aquí los headers de NXP (ej. fsl_pwm.h o fsl_clock.h)
   para que funcionen macros como CLOCK_GetFreq o kCLOCK_BusClk */

/************************************
 * MACROS AND DEFINES
 ************************************/
#define PWM1_ADDRESS                PWM1
#define PWM_SRC_CLK_FREQ            CLOCK_GetFreq(kCLOCK_BusClk)
#define DEMO_PWM_FAULT_LEVEL        true
#define APP_DEFAULT_PWM_FREQUENCY   (10000UL)

/************************************
 * TYPEDEFS
 ************************************/

/************************************
 * EXPORTED VARIABLES
 ************************************/

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/

void PWM_INIT(void);


#ifdef __cplusplus
}
#endif

#endif /* IOHWAB_PWM_H */
