/* Main Include */
#include "main.h"

/* Drivers Classes */
extern HAL_GPIO hgpio;

 /*
  * Main Function
  */
int main(void)
{

	/* Peripheral Inits */
	SystemInit();

	/* Set PB3 State */
	hgpio.writePin( GPIOB, GPIO_PIN_3, GPIO_RESET );

	while(1)
	{

		if( hgpio.readPin(GPIOA, GPIO_PIN_11) == LOW )
		{
			hgpio.writePin( GPIOB, GPIO_PIN_3, GPIO_SET );
		}
		else
		{
			hgpio.writePin( GPIOB, GPIO_PIN_3, GPIO_RESET );
		}

	}

}

