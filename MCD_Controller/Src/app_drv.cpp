/* App Include */
#include "app_drv.hpp"

/* Drivers Classes */
HAL_GPIO 	hgpio;
HAL_RCC		_RCC;

/* Local Functions */
//static void ClockConfiguration(void);
static void MX_GPIO_Init(void);

/*
 *
 *
 *
 */
void SystemInit(void)
{

	/* Peripheral Drivers Init */
	MX_GPIO_Init();

}

/*
 *
 *
 *
 */
static void MX_GPIO_Init(void)
{

	/* Enable GPIOB Clock */
	_RCC.AHB_SetPeriphClock(_RCC_AHB_GPIOA_CLK, _RCC_PERIPH_CLK_ENABLE);
	_RCC.AHB_SetPeriphClock(_RCC_AHB_GPIOB_CLK, _RCC_PERIPH_CLK_ENABLE);

	/* Configure PA3 as Output */
	GPIOInitStructure_t GPIO_cfg;

	GPIO_cfg.Pin 	= GPIO_PIN_3;
	GPIO_cfg.Mode	= GPIO_OUTPUT_PP_MODE;
	GPIO_cfg.Pull	= GPIO_NOPULL;
	GPIO_cfg.Speed	= GPIO_LOW_SPEED;

	hgpio.init( GPIOB, &GPIO_cfg );

	/* Configure PA11 as Input */
	GPIO_cfg.Pin	= GPIO_PIN_11;
	GPIO_cfg.Mode	= GPIO_INPUT_MODE;
	GPIO_cfg.Pull	= GPIO_NOPULL;
	GPIO_cfg.Speed	= GPIO_LOW_SPEED;

	hgpio.init( GPIOA, &GPIO_cfg );

}
