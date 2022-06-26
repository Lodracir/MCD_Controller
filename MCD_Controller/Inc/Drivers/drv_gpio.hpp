#ifndef DRIVERS_DRV_GPIO_HPP_
#define DRIVERS_DRV_GPIO_HPP_

/* MCU Include */
#include "stm32f3xx.h"

/* Defines */
#define GPIO_PIN_0		0
#define GPIO_PIN_1		1
#define GPIO_PIN_2		2
#define GPIO_PIN_3		3
#define GPIO_PIN_4		4
#define GPIO_PIN_5		5
#define GPIO_PIN_6		6
#define GPIO_PIN_7		7
#define GPIO_PIN_8		8
#define GPIO_PIN_9		9
#define GPIO_PIN_10		10
#define GPIO_PIN_11		11
#define GPIO_PIN_12		12
#define GPIO_PIN_13		13
#define GPIO_PIN_14		14
#define GPIO_PIN_15		15

/* Typedef Enums */
typedef enum
{

	GPIO_INPUT_MODE,
	GPIO_OUTPUT_PP_MODE,
	GPIO_OUTPUT_OD_MODE,
	GPIO_ALTFCN_PP_MODE,
	GPIO_ALTFCN_OD_MODE,
	GPIO_ANALOG_MODE

}GPIO_MODE_t;

typedef enum
{

	GPIO_PULLUP,
	GPIO_PULLDOWN,
	GPIO_NOPULL

}GPIO_Pull_t;

typedef enum
{
	GPIO_LOW_SPEED,
	GPIO_MEDIUM_SPEED,
	GPIO_HIGH_SPEED
}GPIO_Speed_t;

typedef enum
{
	GPIO_SET,
	GPIO_RESET
}GPIO_Set_t;

/* Typedef Structure */
typedef struct
{
	uint32_t		Pin;
	GPIO_MODE_t		Mode;
	GPIO_Pull_t		Pull;
	GPIO_Speed_t 	Speed;
	uint32_t		Alternate;

}GPIOInitStructure_t;


/* GPIOx Driver Class */
class HAL_GPIO
{
public:
	void		init(GPIO_TypeDef *GPIOx, GPIOInitStructure_t *GPIOx_cfg);
	void		writePin(GPIO_TypeDef *GPIOx, uint32_t pinNumber, GPIO_Set_t pinSet);
	void		togglePin(GPIO_TypeDef *GPIOx, uint32_t pinNumber);
	uint32_t	readPin(GPIO_TypeDef *GPIOx, uint32_t pinNumber);

private:

};


#endif /* DRIVERS_DRV_GPIO_HPP_ */