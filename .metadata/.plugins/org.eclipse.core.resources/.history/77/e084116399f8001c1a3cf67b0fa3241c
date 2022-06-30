/* STM32F3xx HAL Driver Include */
#include "stm32f3xx_hal.h"

void HAL_MspInit(void)
{
	__HAL_RCC_SYSCFG_CLK_ENABLE();
	__HAL_RCC_PWR_CLK_ENABLE();
}

void HAL_UART_MspInit(UART_HandleTypeDef *huart)
{

	if(huart->Instance == USART2)
	{

		/* Enable UART2 and GPIOA Clock */
		__HAL_RCC_GPIOA_CLK_ENABLE();

		/* GPIO Configuration Structure */
		GPIO_InitTypeDef hgpio_uart2;

		hgpio_uart2.Pin			= GPIO_PIN_2 | GPIO_PIN_15;
		hgpio_uart2.Mode		= GPIO_MODE_AF_PP;
		hgpio_uart2.Pull		= GPIO_NOPULL;
		hgpio_uart2.Speed		= GPIO_SPEED_FREQ_HIGH;
		hgpio_uart2.Alternate	= GPIO_AF7_USART2;
		HAL_GPIO_Init(GPIOA, &hgpio_uart2);

	}

}

void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim)
{

	if(htim->Instance == TIM2)
	{
		/* Enable GPIOA Clock */
		__HAL_RCC_GPIOA_CLK_ENABLE();

		/* Configure PA0 and PA1 as TIM2_CHx */
		GPIO_InitTypeDef hgpio_tim2;

		hgpio_tim2.Pin			= GPIO_PIN_0 | GPIO_PIN_1;
		hgpio_tim2.Mode			= GPIO_MODE_AF_PP;
		hgpio_tim2.Pull			= GPIO_NOPULL;
		hgpio_tim2.Speed		= GPIO_SPEED_FREQ_HIGH;
		hgpio_tim2.Alternate	= GPIO_AF1_TIM2;
		HAL_GPIO_Init(GPIOA, &hgpio_tim2);

	}

}
