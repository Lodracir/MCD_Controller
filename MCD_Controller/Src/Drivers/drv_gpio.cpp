/*
 * drv_gpio.cpp
 *
 *  Created on: Jun 25, 2022
 *      Author: Ricardo Escarcega
 *      Version: 0.1b
 */

/* Include Header File */
#include "Drivers/drv_gpio.hpp"

/* Defines */
#define EXTI_GPIOA	0
#define EXTI_GPIOB	1

/*
 *
 *
 *
 */
void HAL_GPIO::init(GPIO_TypeDef *GPIOx, GPIOInitStructure_t *GPIOx_cfg)
{

	/* Configure External Interruption only if was selected */
	if( (GPIOx_cfg->Mode == GPIO_IT_RISING_MODE) || (GPIOx_cfg->Mode == GPIO_IT_FALLING_MODE) )
	{
		if(GPIOx_cfg->Pin <= 3)
		{
			if(GPIOx == GPIOA) { SYSCFG->EXTICR[0] |= (EXTI_GPIOA << ( GPIOx_cfg->Pin * 4 )); }
			if(GPIOx == GPIOB) { SYSCFG->EXTICR[0] |= (EXTI_GPIOB << ( GPIOx_cfg->Pin * 4 )); }
		}
		else if( (GPIOx_cfg->Pin > 3) && (GPIOx_cfg->Pin <= 7 ) )
		{
			if(GPIOx == GPIOA) { SYSCFG->EXTICR[1] |= (EXTI_GPIOA << ( ( GPIOx_cfg->Pin - 4) * 4 )); }
			if(GPIOx == GPIOB) { SYSCFG->EXTICR[1] |= (EXTI_GPIOB << ( ( GPIOx_cfg->Pin - 4) * 4 )); }
		}
		else if( (GPIOx_cfg->Pin > 7) && (GPIOx_cfg->Pin <= 11) )
		{
			if(GPIOx == GPIOA) { SYSCFG->EXTICR[2] |= (EXTI_GPIOA << ( ( GPIOx_cfg->Pin - 8) * 4 )); }
			if(GPIOx == GPIOB) { SYSCFG->EXTICR[2] |= (EXTI_GPIOB << ( ( GPIOx_cfg->Pin - 8) * 4 )); }
		}
		else if( (GPIOx_cfg->Pin > 11) && (GPIOx_cfg->Pin <= 15) )
		{
			if(GPIOx == GPIOA) { SYSCFG->EXTICR[3] |= (EXTI_GPIOA << ( ( GPIOx_cfg->Pin - 12) * 4 )); }
			if(GPIOx == GPIOB) { SYSCFG->EXTICR[3] |= (EXTI_GPIOB << ( ( GPIOx_cfg->Pin - 12) * 4 )); }
		}
	}

	/* Set GPIOx Mode */
	switch(GPIOx_cfg->Mode)
	{
	case GPIO_INPUT_MODE:
		GPIOx->MODER &= ~(1 << GPIOx_cfg->Pin * 2 );
		GPIOx->MODER &= ~(1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		break;

	case GPIO_OUTPUT_PP_MODE:
		GPIOx->MODER |= (1 << ( GPIOx_cfg->Pin * 2) );
		GPIOx->MODER &= ~(1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		GPIOx->OTYPER &= ~(1 << GPIOx_cfg->Pin);
		break;

	case GPIO_OUTPUT_OD_MODE:
		GPIOx->MODER |= (1 << GPIOx_cfg->Pin * 2);
		GPIOx->MODER &= ~(1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		GPIOx->OTYPER |= (1 << GPIOx_cfg->Pin);
		break;

	case GPIO_ALTFCN_PP_MODE:
		GPIOx->MODER &= ~(1 << GPIOx_cfg->Pin * 2);
		GPIOx->MODER |= (1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		GPIOx->OTYPER &= ~(1 << GPIOx_cfg->Pin);
		break;

	case GPIO_ALTFCN_OD_MODE:
		GPIOx->MODER &= ~(1 << GPIOx_cfg->Pin * 2);
		GPIOx->MODER |= (1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		GPIOx->OTYPER |= (1 << GPIOx_cfg->Pin);
		break;

	case GPIO_ANALOG_MODE:
		GPIOx->MODER |= (1 << GPIOx_cfg->Pin * 2);
		GPIOx->MODER |= (1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		break;

	case GPIO_IT_RISING_MODE:
		/* Configure as Input */
		GPIOx->MODER &= ~(1 << GPIOx_cfg->Pin * 2 );
		GPIOx->MODER &= ~(1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );

		/* Configure EXTI Mask and Rising Interrupt */
		EXTI->IMR |= (1 << GPIOx_cfg->Pin);
		EXTI->RTSR |= (1 << GPIOx_cfg->Pin);
		break;

	case GPIO_IT_FALLING_MODE:
		/* Configure as Input */
		GPIOx->MODER &= ~(1 << GPIOx_cfg->Pin * 2 );
		GPIOx->MODER &= ~(1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );

		/* Configure EXTI Mask and Falling Interrupt */
		EXTI->IMR |= (1 << GPIOx_cfg->Pin);
		EXTI->FTSR |= (1 << GPIOx_cfg->Pin);
		break;

	}

	/* Set GPIOx Pin PullUp/PullDown/NoPull  */
	switch(GPIOx_cfg->Pull)
	{
	case GPIO_PULLUP:
		GPIOx->PUPDR |= (1 << ( GPIOx_cfg->Pin * 2) );
		GPIOx->PUPDR &= ~(1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		break;

	case GPIO_PULLDOWN:
		GPIOx->PUPDR &= ~(1 << ( GPIOx_cfg->Pin * 2) );
		GPIOx->PUPDR |= (1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		break;

	case GPIO_NOPULL:
		GPIOx->PUPDR &= ~(1 << ( GPIOx_cfg->Pin * 2) );
		GPIOx->PUPDR &= ~(1 << ( ( GPIOx_cfg->Pin * 2 ) + 1 ) );
		break;
	}

	/* Set GPIOx Pin Speed */
	switch(GPIOx_cfg->Speed)
	{
	case GPIO_LOW_SPEED:
		GPIOx->OSPEEDR &= ~(1 << ( GPIOx_cfg->Pin * 2) );
		GPIOx->OSPEEDR &= ~(1 << ( ( GPIOx_cfg->Pin * 2) + 1) );
		break;

	case GPIO_MEDIUM_SPEED:
		GPIOx->OSPEEDR |= (1 << ( GPIOx_cfg->Pin * 2) );
		GPIOx->OSPEEDR &= ~(1 << ( ( GPIOx_cfg->Pin * 2) + 1) );
		break;

	case GPIO_HIGH_SPEED:
		GPIOx->OSPEEDR |= (1 << ( GPIOx_cfg->Pin * 2) );
		GPIOx->OSPEEDR |= (1 << ( ( GPIOx_cfg->Pin * 2) + 1) );
		break;
	}

	/* Set GPIOx Alternate Function */
	if(GPIOx_cfg->Pin <= 7)
	{
		GPIOx->AFR[0] |= ( GPIOx_cfg->Alternate << (GPIOx_cfg->Pin * 4) );
	}
	else if(GPIOx_cfg->Pin > 7)
	{
		GPIOx->AFR[1] |= ( GPIOx_cfg->Alternate << ( (GPIOx_cfg->Pin - 8) * 4) );
	}
}

/*
 *
 *
 *
 */
void HAL_GPIO::writePin(GPIO_TypeDef *GPIOx, uint32_t pinNumber, GPIO_Set_t pinSet)
{
	switch(pinSet)
	{
	case GPIO_SET:
		GPIOx->BSRR	|= (1 << pinNumber);
		break;

	case GPIO_RESET:
		GPIOx->BRR 	|= (1 << pinNumber);
		break;
	}
}

/*
 *
 *
 *
 */
void HAL_GPIO::togglePin(GPIO_TypeDef *GPIOx, uint32_t pinNumber)
{
	GPIOx->ODR ^= ( 1 << pinNumber );
}

/*
 *
 *
 *
 */
uint32_t HAL_GPIO::readPin(GPIO_TypeDef *GPIOx, uint32_t pinNumber)
{
	return ( GPIOx->IDR & (1 << pinNumber) );
}
