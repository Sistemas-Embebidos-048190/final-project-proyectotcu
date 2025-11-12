/*
 * Archivo: Rte.h
 * Define la API del RTE que el SW-C de la TCM utiliza.
 * (Basado en el Rte_SWC_TCM.h de tu primer ejemplo)
 */
#ifndef RTE_H
#define RTE_H

#include "Platform_Types.h"
#include "NvM.h"            // Para NvM_BlockIdType

/* * API de Puerto-Requerido (P-Port) que el SW-C llamará.
 * El SW-C (tu lógica de TCM) llama a esta función
 * para guardar datos.
 */
Std_ReturnType Rte_Call_R_NvM_WriteBlock(NvM_BlockIdType BlockId, const uint8* Data);

/* * NOTA: Aquí también irían las funciones Rte_Read_... y Rte_Write_...
 * para las señales (g_CAN_Engine_RPM, etc.) si usaras
 * una configuración RTE completa, pero tu profe te pidió
 * Getters/Setters, así que nos saltamos eso.
 */

#endif /* RTE_H */
