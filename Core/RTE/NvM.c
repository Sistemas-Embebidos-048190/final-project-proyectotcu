/*
 * Archivo: NvM.c (Implementación del Servicio BSW)
 *
 * Este es el código del módulo de servicio del BSW.
 */
#include "NvM.h"
#include "EepromDriver.h" // Incluye el Driver de más bajo nivel

// Esta es la implementación *real* del servicio
Std_ReturnType NvM_WriteBlock(NvM_BlockIdType BlockId, const uint8* NvM_SrcPtr)
{
    // 1. Validar el BlockId (ejemplo de lógica)
    if (BlockId == 0)
    {
        return E_NOT_OK; // Bloque 0 es inválido
    }

    // 2. Verificar si el puntero de datos es válido
    if (NvM_SrcPtr == (const uint8*)0) // Chequeo de puntero nulo
    {
        return E_NOT_OK;
    }

    // 3. Poner la solicitud de escritura en una cola (lógica omitida)
    // ...

    // 4. Llamar al driver de Eeprom/Flash cuando sea el momento
    //    En esta simulación, lo llamamos directamente:
    Eeprom_WriteJob(BlockId, NvM_SrcPtr);

    // Devuelve "OK" (la escritura se procesará en segundo plano)
    return E_OK;
}
