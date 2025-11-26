/**
 ********************************************************************************
 * @file    FreeRTOSConfig_Gen.h
 * @author  ${user}
 * @date    ${date}
 * @brief   Configuración general del Kernel FreeRTOS para NXP
 ********************************************************************************
 */

#ifndef _FREERTOSCONFIG_GEN_H_
#define _FREERTOSCONFIG_GEN_H_

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
/* Nota: Se requiere la definición de SystemCoreClock (usualmente en system_xxx.h) */

/************************************
 * MACROS AND DEFINES
 ************************************/

/* --------------------------------------------------------------------------
 * Configuración Básica del Sistema
 * -------------------------------------------------------------------------- */
#define configCPU_CLOCK_HZ                        (SystemCoreClock)
#define configTICK_RATE_HZ                        200U
#define configMAX_PRIORITIES                      5
#define configMINIMAL_STACK_SIZE                  90
#define configMAX_TASK_NAME_LEN                   20
#define configUSE_PREEMPTION                      1
#define configUSE_TICKLESS_IDLE                   0
#define configIDLE_SHOULD_YIELD                   1
#define configUSE_TASK_NOTIFICATIONS              1
#define configUSE_MUTEXES                         1
#define configUSE_RECURSIVE_MUTEXES               1
#define configUSE_COUNTING_SEMAPHORES             1
#define configQUEUE_REGISTRY_SIZE                 8
#define configUSE_QUEUE_SETS                      0
#define configUSE_TIME_SLICING                    0 /* Estaba comentado en original */
#define configUSE_PORT_OPTIMISED_TASK_SELECTION   0 /* Estaba comentado en original */
#define configUSE_16_BIT_TICKS                    0 /* Estaba comentado en original */
#define configENABLE_BACKWARD_COMPATIBILITY       1
#define configNUM_THREAD_LOCAL_STORAGE_POINTERS   5
#define configUSE_MINI_LIST_ITEM                  1
#define configSTACK_DEPTH_TYPE                    size_t
#define configMESSAGE_BUFFER_LENGTH_TYPE          size_t
#define configUSE_EVENT_GROUPS                    1
#define configUSE_STREAM_BUFFERS                  1
#define configPROTECTED_KERNEL_OBJECT_POOL_SIZE   10
#define configTASK_RETURN_ADDRESS                 (prvTaskExitError)
#define configCHECK_HANDLER_INSTALLATION          1

/* --------------------------------------------------------------------------
 * Configuración de Memoria (Heap y Stack)
 * -------------------------------------------------------------------------- */
#define configSUPPORT_DYNAMIC_ALLOCATION          1
#define configTOTAL_HEAP_SIZE                     10240
#define configFRTOS_MEMORY_SCHEME                 4 /* Heap_4.c */
#define configSUPPORT_STATIC_ALLOCATION           0 /* Estaba comentado en original */
#define configAPPLICATION_ALLOCATED_HEAP          0 /* Estaba comentado en original */
#define configSTACK_ALLOCATION_FROM_SEPARATE_HEAP 0 /* Estaba comentado en original */
#define configENABLE_HEAP_PROTECTOR               0 /* Estaba comentado en original */
#define configHEAP_CLEAR_MEMORY_ON_FREE           0 /* Estaba comentado en original */
#define configUSE_NEWLIB_REENTRANT                0 /* Estaba comentado en original */
#define configUSE_PICOLIBC_TLS                    0 /* Estaba comentado en original */
#define configRECORD_STACK_HIGH_ADDRESS           0 /* Estaba comentado en original */

/* --------------------------------------------------------------------------
 * Configuración de Software Timers
 * -------------------------------------------------------------------------- */
#define configUSE_TIMERS                          1
#define configTIMER_TASK_PRIORITY                 (configMAX_PRIORITIES - 1)
#define configTIMER_TASK_STACK_DEPTH              (configMINIMAL_STACK_SIZE * 2)
#define configTIMER_QUEUE_LENGTH                  2
#define configTIMER_SERVICE_TASK_CORE_AFFINITY    (tskNO_AFFINITY)

/* --------------------------------------------------------------------------
 * Hooks y Tracing
 * -------------------------------------------------------------------------- */
#define configUSE_TRACE_FACILITY                  1
#define configUSE_IDLE_HOOK                       0 /* Estaba comentado en original */
#define configUSE_TICK_HOOK                       0 /* Estaba comentado en original */
#define configCHECK_FOR_STACK_OVERFLOW            0 /* Estaba comentado en original */
#define configUSE_MALLOC_FAILED_HOOK              0 /* Estaba comentado en original */
#define configUSE_DAEMON_TASK_STARTUP_HOOK        0 /* Estaba comentado en original */
#define configUSE_SB_COMPLETED_CALLBACK           0 /* Estaba comentado en original */
#define configGENERATE_RUN_TIME_STATS             0 /* Estaba comentado en original */
#define configUSE_STATS_FORMATTING_FUNCTIONS      0 /* Estaba comentado en original */
#define configUSE_PASSIVE_IDLE_HOOK               0 /* Estaba comentado en original */

/* --------------------------------------------------------------------------
 * Co-Rutinas (Rara vez usadas hoy en día)
 * -------------------------------------------------------------------------- */
#define configUSE_CO_ROUTINES                     0 /* Estaba comentado en original */
#define configMAX_CO_ROUTINE_PRIORITIES           2

/* --------------------------------------------------------------------------
 * Configuración de Interrupciones (ARM Cortex-M)
 * -------------------------------------------------------------------------- */
#define configPRIO_BITS                           3
#define configLIBRARY_LOWEST_INTERRUPT_PRIORITY   ((1U << (configPRIO_BITS)) - 1U)
#define configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY 2

#define configKERNEL_INTERRUPT_PRIORITY           (configLIBRARY_LOWEST_INTERRUPT_PRIORITY << (8 - configPRIO_BITS))
#define configMAX_SYSCALL_INTERRUPT_PRIORITY      (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY << (8 - configPRIO_BITS))
#define configMAX_API_CALL_INTERRUPT_PRIORITY     (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY << (8 - configPRIO_BITS))

#define configOVERRIDE_DEFAULT_TICK_CONFIGURATION 0
#define configLPTMR_CLOCK_HZ                      0

/* Mapeo de Handlers para el Port de FreeRTOS */
#define vPortSVCHandler                           SVC_Handler
#define xPortPendSVHandler                        PendSV_Handler
#define xPortSysTickHandler                       SysTick_Handler

/* --------------------------------------------------------------------------
 * Seguridad y MPU (Memory Protection Unit)
 * -------------------------------------------------------------------------- */
#define configENABLE_FPU                          1
#define configENABLE_MPU                          0 /* Estaba comentado en original */
#define configENABLE_MVE                          0 /* Estaba comentado en original */
#define configENABLE_TRUSTZONE                    0 /* Estaba comentado en original */
#define configRUN_FREERTOS_SECURE_ONLY            1
#define configMINIMAL_SECURE_STACK_SIZE           256
#define secureconfigMAX_SECURE_CONTEXTS           8
#define configTOTAL_MPU_REGIONS                   8
#define configTEX_S_C_B_FLASH                     0x07UL
#define configTEX_S_C_B_SRAM                      0x07UL
#define configALLOW_UNPRIVILEGED_CRITICAL_SECTIONS 1
#define configSYSTEM_CALL_STACK_SIZE              128
#define configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS 0 /* Estaba comentado */
#define configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY 0 /* Estaba comentado */
#define configENABLE_ACCESS_CONTROL_LIST          0 /* Estaba comentado */

/* --------------------------------------------------------------------------
 * Logging y Debugging
 * -------------------------------------------------------------------------- */
#define configLOGGING_MAX_MESSAGE_LENGTH          256
#define configLOGGING_INCLUDE_TIME_AND_TASK_NAME  1

/* Definición de Assert */
#define configASSERT(x) if(( x) == 0) {taskDISABLE_INTERRUPTS(); for (;;);}

/* --------------------------------------------------------------------------
 * Configuración Multi-Core (SMP)
 * -------------------------------------------------------------------------- */
#define configNUMBER_OF_CORES                     1
#define configTASK_DEFAULT_CORE_AFFINITY          (tskNO_AFFINITY)
#define configRUN_MULTIPLE_PRIORITIES             0 /* Estaba comentado en original */
#define configUSE_CORE_AFFINITY                   0 /* Estaba comentado en original */
#define configUSE_TASK_PREEMPTION_DISABLE         0 /* Estaba comentado en original */

/* --------------------------------------------------------------------------
 * API Include: Funciones opcionales
 * -------------------------------------------------------------------------- */
#define configINCLUDE_FREERTOS_TASK_C_ADDITIONS_H 1

#define INCLUDE_vTaskPrioritySet                  1
#define INCLUDE_uxTaskPriorityGet                 1
#define INCLUDE_vTaskDelete                       1
#define INCLUDE_vTaskSuspend                      1
#define INCLUDE_vTaskDelayUntil                   1
#define INCLUDE_vTaskDelay                        1
#define INCLUDE_xTaskGetSchedulerState            1
#define INCLUDE_xTaskGetCurrentTaskHandle         1
#define INCLUDE_uxTaskGetStackHighWaterMark       1
#define INCLUDE_uxTaskGetStackHighWaterMark2      1
#define INCLUDE_xTaskGetIdleTaskHandle            1
#define INCLUDE_eTaskGetState                     1
#define INCLUDE_xTimerPendFunctionCall            1
#define INCLUDE_xTaskAbortDelay                   1
#define INCLUDE_xSemaphoreGetMutexHolder          1
#define INCLUDE_xTaskGetHandle                    1
#define INCLUDE_xTaskResumeFromISR                1

/************************************
 * TYPEDEFS
 ************************************/

/************************************
 * EXPORTED VARIABLES
 ************************************/

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/


#ifdef __cplusplus
}
#endif

#endif /* _FREERTOSCONFIG_GEN_H_ */
