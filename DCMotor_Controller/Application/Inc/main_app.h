#ifndef INC_MAIN_APP_HPP_
#define INC_MAIN_APP_HPP_

/* STM32F3xx Hal Driver Include */
#include "stm32f3xx_hal.h"

/* Defines */
#define BAUDRATE	115200

/* ANSI C Libraries */
#include <stdio.h>
#include <stdint.h>

/* Application Peripheral Includes */
#include "gpio_app.h"
#include "uart_app.h"

/* Application Driver Include */


/* Prototype Functions */
void AppSystemConfig(void);
void AppSystemDefault(void);

#endif /* INC_MAIN_APP_HPP_ */
