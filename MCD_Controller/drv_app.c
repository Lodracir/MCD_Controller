/* Library Include */
#include "drv_app.h"

/* Peripheral Structures */
digital_out_t   LD2;
digital_in_t    BTTN1;

/* Private Prototype Functions */
static void MX_GPIO_Init(void);
static void MX_ADC1_Init(void);
static void MX_UART2_Init(void);

/* Prototype Functions */
void SystemConfig(void)
{
    
    /* Init required peripherals */
    MX_GPIO_Init();
    MX_ADC1_Init();
    MX_UART2_Init();
    
}

/* ------------------------------------------------------------------------------------------------------- 
 *                                                Private (Local) Functions
 * ------------------------------------------------------------------------------------------------------- */

static void MX_GPIO_Init(void)
{
    
    /* Configure and Init Output pins */
    digital_in_init( &LD2, PB3 );
    
    
}

static void MX_ADC1_Init(void)
{
    
}


static void MX_UART2_Init(void)
{
    
}
