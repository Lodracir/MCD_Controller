/* UART Application Include */
#include "uart_app.h"

/* UART2 Structure */
UART_HandleTypeDef	huart2;

void MX_UART2_Init(void)
{

	/* Enable USART2 Clk */
	__HAL_RCC_USART2_CLK_ENABLE();

	/* Configure UART2 */
	huart2.Instance				= USART2;
	huart2.Init.BaudRate		= BAUDRATE;
	huart2.Init.WordLength		= UART_WORDLENGTH_8B;
	huart2.Init.StopBits		= UART_STOPBITS_1;
	huart2.Init.Parity			= UART_PARITY_NONE;
	huart2.Init.Mode			= UART_MODE_TX_RX;
	huart2.Init.HwFlowCtl		= UART_HWCONTROL_NONE;
	huart2.Init.OverSampling	= UART_OVERSAMPLING_16;
	huart2.Init.OneBitSampling	= UART_ONE_BIT_SAMPLE_DISABLE;

	/* Init UART2 according with huart2 structure */
	HAL_UART_Init(&huart2);

}


/* printf implementation function (USE FOR DEBUGG) */
int __io_putchar(int ch)
{
	HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, HAL_MAX_DELAY);

	return ch;
}
