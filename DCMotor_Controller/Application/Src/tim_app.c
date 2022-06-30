/* TIM Application Driver Include */
#include "tim_app.h"

/* TIM Structures */
TIM_HandleTypeDef	htim1;
TIM_HandleTypeDef	htim2;

/*
 * 	Functions
 */

void MX_TIM1_Init(void)
{

}

void MX_TIM2_Init(void)
{

	/* Enable TIM2 Clock */
	__HAL_RCC_TIM2_CLK_ENABLE();

	/**/
	htim2.Instance	= TIM2;


}


