/* Main Application Include */
#include "main_app.h"

/* Local Prototype Functions */
static void SystemClock_Config(void);

/*
 *
 */
void AppSystemConfig(void)
{
	/* Init HAL Driver*/
	HAL_Init();

	/* System Clock Configuration */
	SystemClock_Config();

	/* MCU Peripheral Configuration */
	MX_GPIO_Init();
	MX_UART2_Init();

}

/*
 *
 */
void AppSystemDefault(void)
{

	/* Set LD2 (PB3) low */
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET);
}

/*
 * Callback Functions
 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if( GPIO_Pin == GPIO_PIN_11 )
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_SET);
	}

	if( GPIO_Pin == GPIO_PIN_5 )
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET);
	}

}

/*
 * Local Functions
 */
static void SystemClock_Config(void)
{
	/* RCC Structure Configuration */
	RCC_OscInitTypeDef 	rcc_osc;
	RCC_ClkInitTypeDef	rcc_clk;

	/* Configure Osc Type */
	rcc_osc.OscillatorType		= RCC_OSCILLATORTYPE_HSI;
	rcc_osc.HSIState			= RCC_HSI_ON;
	rcc_osc.HSICalibrationValue	= RCC_HSICALIBRATION_DEFAULT;
	rcc_osc.HSEState			= RCC_HSE_OFF;
	rcc_osc.LSEState			= RCC_LSE_OFF;
	rcc_osc.PLL.PLLState		= RCC_PLL_ON;
	rcc_osc.PLL.PLLSource		= RCC_PLLSOURCE_HSI;
	rcc_osc.PLL.PLLMUL			= RCC_PLL_MUL12;

	HAL_RCC_OscConfig(&rcc_osc);

	/* Configure System Clock */
	rcc_clk.SYSCLKSource	= RCC_SYSCLKSOURCE_PLLCLK;
	rcc_clk.ClockType		= RCC_CLOCKTYPE_SYSCLK;		// 	48 MHz
	rcc_clk.AHBCLKDivider	= RCC_SYSCLK_DIV1;			//	48 Mhz
	rcc_clk.APB1CLKDivider	= RCC_HCLK_DIV2;			// 	48 Mhz / 2 = 24Mhz
	rcc_clk.APB2CLKDivider	= RCC_HCLK_DIV1;			//	48 Mhz

	HAL_RCC_ClockConfig(&rcc_clk, FLASH_LATENCY_0);

}
