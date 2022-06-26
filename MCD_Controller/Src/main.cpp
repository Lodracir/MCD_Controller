/* Main Include */
#include "main.h"

/* Drivers Classes */
HAL_GPIO hgpio;

/* Prototype Functions */
static void MX_GPIO_Init(void);

int main(void)
{

	/* Peripheral Inits */
	MX_GPIO_Init();

	/* Set PB3 State */
	hgpio.writePin(GPIOB, GPIO_PIN_3, GPIO_RESET);

	while(1)
	{
		hgpio.togglePin(GPIOB, GPIO_PIN_3);

		for(int itr = 0; itr < 500000; itr++);
	}

}


static void MX_GPIO_Init(void)
{

	/* Enable GPIOB Clock */
	RCC->AHBENR |= (1 << 18);

	/* Configure PA3 as Output */
	GPIOInitStructure_t GPIO_cfg;

	GPIO_cfg.Pin 	= GPIO_PIN_3;
	GPIO_cfg.Mode	= GPIO_OUTPUT_PP_MODE;
	GPIO_cfg.Pull	= GPIO_NOPULL;
	GPIO_cfg.Speed	= GPIO_LOW_SPEED;

	hgpio.init( GPIOB, &GPIO_cfg );

}