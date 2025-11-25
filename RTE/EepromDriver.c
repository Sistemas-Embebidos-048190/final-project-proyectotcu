/**
 ********************************************************************************
 * @file    EepromDriver.c
 * @author  ${user}
 * @date    ${date}
 * @brief   Implementación del Driver de bajo nivel para EEPROM
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include "EepromDriver.h"

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

// Esta es la implementación *real* del driver de bajo nivel (simulada)
Std_ReturnType Eeprom_WriteJob(NvM_BlockIdType BlockId, const uint8* NvM_SrcPtr)
{
    // 1. Validar parámetros (BlockId, NvM_SrcPtr)
    // 2. Configurar el hardware de la EEPROM/Flash (Direcciones, etc.)
    // 3. Iniciar la secuencia de escritura de hardware

    // (Aquí podrías poner un printf si estás en un simulador)
    // printf("DRIVER: Escribiendo en HW... BlockID: %d\n", BlockId);

    // 4. Retornar E_OK (el trabajo se inició correctamente)
    return E_OK;
}
