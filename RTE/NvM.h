/*
 * Archivo: NvM.h (Interfaz del NvM)
 *
 * Define la API del módulo NvM (Non-Volatile Memory).
 */
#ifndef NVM_H
#define NVM_H

#include "Platform_Types.h" // Para Std_ReturnType, uint8, uint16

// Definición de un tipo específico para la ID del Bloque NvM
typedef uint16 NvM_BlockIdType;

// API principal para escribir un bloque NvM
// Esta es la función que Rte.c llamará.
extern Std_ReturnType NvM_WriteBlock(NvM_BlockIdType BlockId, const uint8* NvM_SrcPtr);

#endif /* NVM_H */
