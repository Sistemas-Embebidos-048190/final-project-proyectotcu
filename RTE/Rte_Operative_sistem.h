/*
 *
 *
 * Created :25 Nov, 2025
 * Author: Emilio Diaz
 *
 */
#ifndef RTE_OPERATIVE_SISTMEN_H
#define RTE_OPERATIVE_SISTMEN_H

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "timers.h"

#include "fsl_device_registers.h"
#include "fsl_debug_console.h"


#define hello_task_PRIORITY (configMAX_PRIORITIES - 1)

void Rte_Taks_Init();
static void Rte_Comm_Rx_Task(void *pvParameters);
static void Rte_Comm_Tx_Task(void *pvParameters);
static void Rte_logic_Task(void *pvParameters);
static void Rte_task_Swc(void *pvParameters);

#endif
