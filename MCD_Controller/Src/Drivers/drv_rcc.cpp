/* Driver Include */
#include "Drivers/drv_rcc.hpp"

void HAL_RCC::AHB_SetPeriphClock(uint32_t periph, RCC_Periph_Clk_Set_t set)
{
	switch(set)
	{
	case _RCC_PERIPH_CLK_ENABLE:
		RCC->AHBENR |= (1 << periph);
		break;

	case _RCC_PERIPH_CLK_DISABLE:
		RCC->AHBRSTR |= (1 << periph);
		break;
	}
}

void HAL_RCC::APB2_SetPeriphClock(uint32_t periph, RCC_Periph_Clk_Set_t set)
{
	switch(set)
	{
	case _RCC_PERIPH_CLK_ENABLE:
		RCC->APB2ENR |= (1 << periph);
		break;

	case _RCC_PERIPH_CLK_DISABLE:
		RCC->APB2RSTR |= (1 << periph);
		break;
	}
}


