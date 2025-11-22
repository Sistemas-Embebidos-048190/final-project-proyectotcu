/*
 * Archivo: EepromDriver.h (Interfaz del Driver)
 *
 * Define la API del driver de la EEPROM.
 */
#ifndef EEPROM_DRIVER_H
#define EEPROM_DRIVER_H

#include "Platform_Types.h"
#include "NvM.h" // Para NvM_BlockIdType

// Función del driver para iniciar un trabajo de escritura
// Esta es la función que NvM.c llamará.
extern Std_ReturnType Eeprom_WriteJob(NvM_BlockIdType BlockId, const uint8* NvM_SrcPtr);

#endif /* EEPROM_DRIVER_H */
