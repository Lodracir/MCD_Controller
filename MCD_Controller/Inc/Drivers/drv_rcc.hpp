#ifndef DRIVERS_DRV_RCC_HPP_
#define DRIVERS_DRV_RCC_HPP_

/* MCU Include */
#include "stm32f3xx.h"

/* Defines AHB Peripheral Clocks*/
#define _RCC_AHB_GPIOA_CLK		17
#define _RCC_AHB_GPIOB_CLK		18

/* Defines APB2 Peripheral Clocks */
#define _RCC_APB2_SYSCFG_CLK	0

typedef enum
{

	_RCC_PERIPH_CLK_ENABLE,
	_RCC_PERIPH_CLK_DISABLE

}RCC_Periph_Clk_Set_t;


class HAL_RCC
{
public:
	void	AHB_SetPeriphClock( uint32_t periph, RCC_Periph_Clk_Set_t set );
	void	APB2_SetPeriphClock( uint32_t periph, RCC_Periph_Clk_Set_t set );

private:
	uint32_t	systemClock;
};

#endif /* DRIVERS_DRV_RCC_HPP_ */
