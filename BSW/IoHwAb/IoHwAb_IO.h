/**
 ********************************************************************************
 * @file    IoHwAb_IO.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Declaracion de funciones para asignar la posicion de la palanca
 ********************************************************************************
 */

#ifndef IOHWAB_IO_H
#define IOHWAB_IO_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "Inc_Platform_Types.h"
#include "Get_signals.h"
#include "MCXN947_cm33_core0_COMMON.h"

/************************************
 * MACROS AND DEFINES
 ************************************/
#define BREAK_GPIO         GPIO5
#define BREAK_GPIO_PIN     8U
#define BREAK_PORT         PORT5

#define PARKING_GPIO       GPIO5
#define PARKING_GPIO_PIN   9U
#define PARKING_PORT       PORT5

#define REVERSE_GPIO       GPIO1
#define REVERSE_GPIO_PIN   13U
#define REVERSE_PORT       PORT1

#define NEUTRAL_GPIO       GPIO2
#define NEUTRAL_GPIO_PIN   0U
#define NEUTRAL_PORT       PORT2

#define DRIVE_GPIO         GPIO1
#define DRIVE_GPIO_PIN     3U
#define DRIVE_PORT         PORT1

#define PRIMERA_GPIO       GPIO1
#define PRIMERA_GPIO_PIN   8U
#define PRIMERA_PORT       PORT1

#define SEGUNDA_GPIO       GPIO1
#define SEGUNDA_GPIO_PIN   9U
#define SEGUNDA_PORT       PORT1

#define TERCERA_GPIO       GPIO1
#define TERCERA_GPIO_PIN   14U
#define TERCERA_PORT       PORT1

/************************************
 * TYPEDEFS
 ************************************/

/************************************
 * EXPORTED VARIABLES
 ************************************/

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/

uint8 Assign_Selection_Level(void);


#ifdef __cplusplus
}
#endif

#endif /* IOHWAB_IO_H */
