/**
  ******************************************************************************
  * @file    main.c
  * @author  yuqlid
  * @version V1.0
  * @date    15-June-2016
  * @brief   Default main function.
  ******************************************************************************
*/

#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

int main(void)
{
    HAL_Init();

    BSP_LED_Init(LED3);

    for(;;){
      HAL_Delay(500);
      BSP_LED_Toggle(LED3);
    }
}
