/**
 ********************************************************************************
 * @file    EepromDriver.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Define la API del driver de la EEPROM (Interfaz del Driver)
 ********************************************************************************
 */

#ifndef EEPROM_DRIVER_H
#define EEPROM_DRIVER_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "Platform_Types.h"
#include "NvM.h" /* Para NvM_BlockIdType */

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

/* Función del driver para iniciar un trabajo de escritura.
   Esta es la función que NvM.c llamará. */
extern Std_ReturnType Eeprom_WriteJob(NvM_BlockIdType BlockId, const uint8* NvM_SrcPtr);


#ifdef __cplusplus
}
#endif

#endif /* EEPROM_DRIVER_H */
