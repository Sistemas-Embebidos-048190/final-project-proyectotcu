/*
 * Archivo: Rte.c
 * Implementación de la API del RTE (passthrough).
 * (Basado en el Rte_SWC_TCM.c de tu primer ejemplo)
 */
#include "Rte.h"
#include "NvM.h" // Incluye la API real del BSW

/*
 * Esta es la implementación de la API del RTE.
 * Su único trabajo es reenviar la llamada al BSW (NvM).
 */
Std_ReturnType Rte_Call_R_NvM_WriteBlock(NvM_BlockIdType BlockId, const uint8* Data)
{
    Std_ReturnType ret;

    // 1. (Opcional) Lógica de contrato del RTE (validaciones)

    // 2. Reenviar la llamada a la función del BSW
    ret = NvM_WriteBlock(BlockId, Data);

    // 3. (Opcional) Procesar el 'ret' si es necesario

    return ret;
}
