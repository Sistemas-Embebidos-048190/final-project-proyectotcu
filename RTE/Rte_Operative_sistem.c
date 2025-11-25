
#include "Rte_Operative_sistem.h"


void Rte_Taks_Init();
static void Rte_Comm_Rx_Task(void *pvParameters);
static void Rte_Comm_Tx_Task(void *pvParameters);
static void Rte_logic_Task(void *pvParameters);
static void Rte_task_Swc(void *pvParameters);


void Rte_Task_Init()
{
	 if (xTaskCreate(Rte_Comm_Rx_Task, "Rte_Comm_Rx_Task", configMINIMAL_STACK_SIZE + 100, NULL, hello_task_PRIORITY, NULL) !=
	        pdPASS)
	    {
	        PRINTF("Task creation failed!.\r\n");
	        while (1)
	            ;
	    }
	 if (xTaskCreate( Rte_Comm_Tx_Task, " Rte_Comm_Tx_Task", configMINIMAL_STACK_SIZE + 100, NULL, hello_task_PRIORITY, NULL) !=
	        pdPASS)
	    {
	        PRINTF("Task creation failed!.\r\n");
	        while (1)
	            ;
	    }
	 if (xTaskCreate(Rte_logic_Task, "Rte_logic_Task", configMINIMAL_STACK_SIZE + 100, NULL, hello_task_PRIORITY, NULL) !=
	        pdPASS)
	    {
	        PRINTF("Task creation failed!.\r\n");
	        while (1)
	            ;
	    }
	 if (xTaskCreate(Rte_task_Swc, "Rte_task_Swc", configMINIMAL_STACK_SIZE + 100, NULL, hello_task_PRIORITY, NULL) !=
	        pdPASS)
	    {
	        PRINTF("Task creation failed!.\r\n");
	        while (1)
	            ;
	    }
	 vTaskStartScheduler();
	 for (;;)
		 ;

}
static void Rte_Comm_Rx_Task(void *pvParameters)
{
    for (;;)
    {
        
        vTaskSuspend(NULL);
    }
}
static void  Rte_Comm_Tx_Task(void *pvParameters)
{
    for (;;)
    {
        
        vTaskSuspend(NULL);
    }
}
static void Rte_logic_Task(void *pvParameters)
{
    for (;;)
    {
        
        vTaskSuspend(NULL);
    }
}
static void Rte_Task_Swc(void *pvParameters)
{
    for (;;)
    {
        
        vTaskSuspend(NULL);
    }
}


