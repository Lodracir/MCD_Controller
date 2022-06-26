/*
 * drv_gpio.cpp
 *
 *  Created on: Jun 25, 2022
 *      Author: Ricardo Escarcega
 *      Version: 0.1b
 */

/* Include Header File */
#include "Drivers/drv_gpio.hpp"

/*
 *
 *
 *
 */
void HAL_GPIO::init(GPIO_TypeDef *GPIOx, GPIOInitStructure_t *GPIOx_cfg)
{

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
	return ( GPIOx->IDR && pinNumber );
}