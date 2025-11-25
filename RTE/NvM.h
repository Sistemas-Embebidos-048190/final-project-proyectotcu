/**
 ********************************************************************************
 * @file    NvM.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Interfaz pública del Gestor de Memoria No Volátil (NvM)
 ********************************************************************************
 */

#ifndef NVM_H
#define NVM_H

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "Platform_Types.h" /* Para uint8, uint16 (y Std_ReturnType si está ahí) */

/************************************
 * MACROS AND DEFINES
 ************************************/

/************************************
 * TYPEDEFS
 ************************************/

/* Definición de un tipo específico para la ID del Bloque NvM */
typedef uint16 NvM_BlockIdType;

/************************************
 * EXPORTED VARIABLES
 ************************************/

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/

/* API principal para escribir un bloque NvM.
   Esta es la función que Rte.c llamará. */
extern Std_ReturnType NvM_WriteBlock(NvM_BlockIdType BlockId, const uint8* NvM_SrcPtr);


#ifdef __cplusplus
}
#endif

#endif /* NVM_H */
