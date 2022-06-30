/* GPIO Application Include */
#include "gpio_app.h"

/* GPIO Init Function */
void MX_GPIO_Init(void)
{
	/* Enable GPIO Clock */
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	/* GPIO Init Structure */
	GPIO_InitTypeDef	hgpio;

	/* Configure PB3 according with hgpio structure */
	hgpio.Pin	= GPIO_PIN_3;
	hgpio.Mode	= GPIO_MODE_OUTPUT_PP;
	hgpio.Pull	= GPIO_NOPULL;
	hgpio.Speed	= GPIO_SPEED_FREQ_LOW;

	HAL_GPIO_Init( GPIOB, &hgpio );

	/* Configure PA11 according with hgpio structure */
	hgpio.Pin	= GPIO_PIN_11;
	hgpio.Mode	= GPIO_MODE_IT_FALLING;
	hgpio.Pull	= GPIO_NOPULL;
	hgpio.Speed	= GPIO_SPEED_FREQ_LOW;

	HAL_GPIO_Init( GPIOA, &hgpio );

	/* Configure PB5 according with hgpio structure */
	hgpio.Pin	= GPIO_PIN_5;
	hgpio.Mode	= GPIO_MODE_IT_FALLING;
	hgpio.Pull	= GPIO_NOPULL;
	hgpio.Speed	= GPIO_SPEED_FREQ_LOW;

	HAL_GPIO_Init( GPIOB, &hgpio );

	/* Configure EXTI */
	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

	HAL_NVIC_SetPriority(EXTI9_5_IRQn, 0, 0 );
	HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);
}
