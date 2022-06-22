#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/drv_app.c"
#line 2 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/drv_app.c"
#line 1 "drv_app.h"
#line 5 "drv_app.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/board/board.h"
#line 6 "drv_app.h"
#line 8 "drv_app.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_name.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_name.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_target.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_target.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_pin_names.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_pin_names.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/stm32f303k8tx/mcu_definitions.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_pin_names.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdbool.h"



typedef char _Bool;
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stddef.h"



typedef long ptrdiff_t;


typedef unsigned long size_t;

typedef unsigned long wchar_t;
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
#line 32 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;


typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 33 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
#line 60 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
const void * memchr( const void * ptr, char ch, unsigned int num );
#line 74 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
int memcmp( const void * str1, const void * str2, int num );
#line 88 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void * memcpy( void * dest_ptr, const void * src_ptr, int num );
#line 102 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void * memmove( void * dest_ptr, const void * src_ptr, int num );
#line 115 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void * memset( void * ptr, char chr, int num );
#line 130 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
char * strcat( char * dest_ptr, const char * src_ptr );
#line 143 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
const char * strchr( const char * ptr, char chr );
#line 155 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
int strcmp( const char * str1, const char * str2 );
#line 167 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
char * strcpy( char * dest_ptr, const char * src_ptr );
#line 177 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
int strlen( const char * str );
#line 191 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
char * strncat( char * dest_ptr, const char * src_ptr, int size );
#line 204 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
char * strncpy( char * dest_ptr, const char * src_ptr, int size );
#line 216 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
int strspn( const char * str1, const char * str2 );
#line 229 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
char strcspn( const char * str1, const char * str2 );
#line 242 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
int strncmp( const char * str1, const char * str2, char len );
#line 255 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
char * strpbrk( const char * str1, const char * str2 );
#line 269 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
const char * strrchr( const char * ptr, char chr );
#line 282 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
char * strstr( const char * str1, const char * str2 );
#line 293 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
char * strtok( char * str1, char * str2 );
#line 302 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void str_cut_chr( char * str, char num );
#line 312 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void str_replace_chr( char * str, char chr_old, char chr_new );
#line 320 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void str_cut_left( char * str, int num );
#line 328 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void str_cut_right( char * str, int num );
#line 338 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void str_split( char * str1, char * str2, int num );
#line 347 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/string.h"
void str_insert_chr( char * str, char chr, int num );
#line 54 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdint.h"
#line 55 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
#line 33 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdint.h"
#line 34 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
#line 45 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
typedef struct divstruct
{
    int quot;
    int rem;
} div_t;

typedef struct ldivstruct
{
    long quot;
    long rem;
} ldiv_t;

typedef struct uldivstruct
{
    unsigned long quot;
    unsigned long rem;
} uldiv_t;
#line 81 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
int abs( int num );
#line 94 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
float atof( char * str );
#line 107 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
int atoi( char * str );
#line 120 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
long atol( char * str );
#line 141 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
div_t div( int number, int denom );
#line 159 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
ldiv_t ldiv( long number, long denom );
#line 177 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
uldiv_t uldiv( unsigned long number, unsigned long denom );
#line 190 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
long labs( long num );
#line 201 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
long max( long num1, long num2 );
#line 212 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
long min( long num1, long num2 );
#line 224 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
int rand();
#line 241 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
void srand( unsigned seed );
#line 251 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdlib.h"
int xtoi( char * str );
#line 56 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"

typedef uintptr_t handle_t;
typedef uint16_t hal_ll_gpio_mask_t;
typedef uint16_t hal_ll_pin_name_t;
typedef uint8_t hal_ll_port_name_t;
typedef uint16_t hal_ll_port_size_t;
typedef uint32_t hal_ll_base_addr_t;
typedef uint8_t hal_ll_channel_t;

typedef int32_t hal_ll_err_t;
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_pin_names.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_bit_control.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_bit_control.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdint.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_bit_control.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdbool.h"
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_bit_control.h"
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/assembly.h"
#line 54 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/common_macros.h"
#line 55 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_target.h"






typedef hal_ll_base_addr_t hal_base_addr_t;
typedef hal_ll_channel_t hal_channel_t;
typedef hal_ll_pin_name_t hal_pin_name_t;
typedef hal_ll_port_name_t hal_port_name_t;
typedef hal_ll_port_size_t hal_port_size_t;

typedef int32_t err_t;
#line 69 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_target.h"
typedef enum
{
    ACQUIRE_SUCCESS = 0,
    ACQUIRE_INIT,

    ACQUIRE_FAIL = (-1)
} acquire_t;
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_name.h"
#line 68 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_name.h"
typedef enum
{
    GPIO_DIGITAL_INPUT = 0,
    GPIO_DIGITAL_OUTPUT = 1
} gpio_direction_t;

typedef hal_pin_name_t pin_name_t;

typedef hal_port_name_t port_name_t;

typedef hal_port_size_t port_size_t;
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_target.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
#line 47 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_constants.h"
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
#line 64 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef struct
{
  uint32_t pins[13];
  uint32_t configs[13];
  uint32_t gpio_remap;
} module_struct;
#line 76 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef struct
{
    uint32_t moder;
    uint32_t otyper;
    uint32_t ospeedr;
    uint32_t pupdr;
    uint32_t idr;
    uint32_t odr;
    uint32_t bsrr;
    uint32_t lckr;
    uint32_t afrl;
    uint32_t afrh;
} hal_ll_gpio_base_handle_t;
#line 109 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef handle_t hal_ll_gpio_base_t;
#line 114 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef enum
{
    HAL_LL_GPIO_DIGITAL_INPUT = 0,
    HAL_LL_GPIO_DIGITAL_OUTPUT = 1
} hal_ll_gpio_direction_t;
#line 123 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef struct hal_ll_gpio_t
{
    hal_ll_gpio_base_t base;
    hal_ll_gpio_mask_t mask;
};
#line 132 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef struct hal_ll_gpio_t hal_ll_gpio_pin_t;
typedef struct hal_ll_gpio_t hal_ll_gpio_port_t;
#line 140 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
uint8_t hal_ll_gpio_port_index( hal_ll_pin_name_t name );
#line 147 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
uint32_t hal_ll_gpio_pin_mask( hal_ll_pin_name_t name );
#line 154 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
uint32_t hal_ll_gpio_port_base( hal_ll_port_name_t name );
#line 162 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
void hal_ll_gpio_analog_input( uint32_t *port, uint16_t pin_mask );
#line 170 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
void hal_ll_gpio_digital_input( uint32_t *port, uint16_t pin_mask );
#line 178 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
void hal_ll_gpio_digital_output( uint32_t *port, uint16_t pin_mask );
#line 185 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
void hal_ll_gpio_module_struct_init( module_struct const *module,  _Bool  state );
#line 48 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
#line 69 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_configure_pin(hal_ll_gpio_pin_t *pin, hal_ll_pin_name_t name, hal_ll_gpio_direction_t direction);
#line 84 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
uint8_t hal_ll_gpio_read_pin_input(hal_ll_gpio_pin_t *pin);
#line 99 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
uint8_t hal_ll_gpio_read_pin_output(hal_ll_gpio_pin_t *pin);
#line 114 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_write_pin_output(hal_ll_gpio_pin_t *pin, uint8_t value);
#line 127 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_toggle_pin_output(hal_ll_gpio_pin_t *pin);
#line 139 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_set_pin_output(hal_ll_gpio_pin_t *pin);
#line 151 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_clear_pin_output(hal_ll_gpio_pin_t *pin);
#line 170 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_configure_port(hal_ll_gpio_port_t *port, hal_ll_port_name_t name, hal_ll_gpio_mask_t mask, hal_ll_gpio_direction_t direction);
#line 183 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
hal_ll_port_size_t hal_ll_gpio_read_port_input(hal_ll_gpio_port_t *port);
#line 195 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
hal_ll_port_size_t hal_ll_gpio_read_port_output(hal_ll_gpio_port_t *port);
#line 210 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_write_port_output(hal_ll_gpio_port_t *port, hal_ll_port_size_t value);
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 57 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
typedef enum
{
    HAL_GPIO_DIGITAL_INPUT = 0,
    HAL_GPIO_DIGITAL_OUTPUT = 1
} hal_gpio_direction_t;

typedef handle_t hal_gpio_base_t;
typedef hal_ll_gpio_mask_t hal_gpio_mask_t;
#line 75 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
typedef struct hal_gpio_t
{
    hal_gpio_base_t base;
    hal_gpio_mask_t mask;
};

typedef struct hal_gpio_t hal_gpio_pin_t;
typedef struct hal_gpio_t hal_gpio_port_t;
#line 131 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_configure_pin( hal_gpio_pin_t *pin, hal_pin_name_t name, hal_gpio_direction_t direction );
#line 151 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
uint8_t hal_gpio_read_pin_input( hal_gpio_pin_t *pin );
#line 171 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
uint8_t hal_gpio_read_pin_output( hal_gpio_pin_t *pin );
#line 191 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_write_pin_output( hal_gpio_pin_t *pin, uint8_t value );
#line 210 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_toggle_pin_output( hal_gpio_pin_t *pin );
#line 229 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_set_pin_output( hal_gpio_pin_t *pin );
#line 248 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_clear_pin_output( hal_gpio_pin_t *pin );
#line 283 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_configure_port( hal_gpio_port_t *port, hal_port_name_t name, hal_gpio_mask_t mask, hal_gpio_direction_t direction );
#line 303 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
hal_port_size_t hal_gpio_read_port_input( hal_gpio_port_t *port );
#line 323 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
hal_port_size_t hal_gpio_read_port_output( hal_gpio_port_t *port );
#line 344 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_write_port_output( hal_gpio_port_t *port, hal_port_size_t value );
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 57 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_in.h"
typedef enum
{
    DIGITAL_IN_SUCCESS = 0,
    DIGITAL_IN_UNSUPPORTED_PIN = (-1)
} digital_in_err_t;
#line 72 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_in.h"
typedef struct
{
    hal_gpio_pin_t pin;
} digital_in_t;
#line 119 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_in.h"
err_t digital_in_init( digital_in_t *in, pin_name_t name );
#line 141 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_in.h"
uint8_t digital_in_read( digital_in_t *in );
#line 9 "drv_app.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_name.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
#line 57 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
typedef enum
{
    DIGITAL_OUT_SUCCESS = 0,
    DIGITAL_OUT_UNSUPPORTED_PIN = (-1)
} digital_out_err_t;
#line 72 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
typedef struct
{
    hal_gpio_pin_t pin;
} digital_out_t;
#line 119 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
err_t digital_out_init( digital_out_t *out, pin_name_t name );
#line 137 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
void digital_out_high( digital_out_t *out );
#line 155 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
void digital_out_low( digital_out_t *out );
#line 173 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
void digital_out_toggle( digital_out_t *out );
#line 193 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_digital_out.h"
void digital_out_write( digital_out_t *out, uint8_t value );
#line 10 "drv_app.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_name.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_target.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
#line 61 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef struct
{
    handle_t *hal_adc_handle;
    handle_t *drv_adc_handle;
    _Bool  init_state;
} hal_adc_handle_register_t;
#line 71 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef enum
{
    HAL_ADC_SUCCESS = 0,
    HAL_ADC_WRONG_PIN,
    HAL_ADC_MODULE_ERROR,

    HAL_ADC_UNSUPPORTED_RESOLUTION = 1100,
    HAL_ADC_UNSUPPORTED_VREF,
    HAL_ADC_WRONG_CHANNEL,
    HAL_ADC_ERROR = (-1)
} hal_adc_err_t;
#line 86 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef enum
{
    HAL_ADC_RESOLUTION_NOT_SET = 0,
    HAL_ADC_RESOLUTION_6_BIT,
    HAL_ADC_RESOLUTION_8_BIT,
    HAL_ADC_RESOLUTION_10_BIT,
    HAL_ADC_RESOLUTION_12_BIT,
    HAL_ADC_RESOLUTION_14_BIT,
    HAL_ADC_RESOLUTION_16_BIT,


    HAL_ADC_RESOLUTION_DEFAULT =  HAL_ADC_RESOLUTION_12_BIT
} hal_adc_resolution_t;
#line 103 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef enum
{
    HAL_ADC_VREF_EXTERNAL = 0,
    HAL_ADC_VREF_INTERNAL,
    HAL_ADC_VREF_DEFAULT = HAL_ADC_VREF_EXTERNAL
} hal_adc_vref_t;
#line 133 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef struct
{
    hal_pin_name_t              pin;
    hal_adc_resolution_t        resolution;
    hal_adc_vref_t              vref_input;
    float                       vref_value;
} hal_adc_config_t;
#line 151 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef struct
{
    handle_t handle;
    hal_adc_config_t config;
} hal_adc_t;
#line 212 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
void hal_adc_configure_default( hal_adc_config_t *config );
#line 241 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_open( handle_t *handle,  _Bool  hal_obj_open_state );
#line 263 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_set_resolution( handle_t *handle, hal_adc_config_t *config );
#line 285 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_set_vref_input( handle_t *handle, hal_adc_config_t *config );
#line 306 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
void hal_adc_set_vref_value( handle_t *handle, hal_adc_config_t *config );
#line 322 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_read( handle_t *handle, uint16_t *readDatabuf );
#line 338 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_read_voltage( handle_t *handle, float *readDatabuf );
#line 353 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_close( handle_t *handle );
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
#line 57 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef enum
{
    ADC_SUCCESS = 0,
    ADC_ERROR = (-1)
} analog_in_err_t;
#line 66 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef enum
{
    ANALOG_IN_VREF_EXTERNAL = 0,
    ANALOG_IN_VREF_INTERNAL
} analog_in_vref_t;
#line 75 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef enum
{
    ANALOG_IN_RESOLUTION_NOT_SET = 0,
    ANALOG_IN_RESOLUTION_6_BIT,
    ANALOG_IN_RESOLUTION_8_BIT,
    ANALOG_IN_RESOLUTION_10_BIT,
    ANALOG_IN_RESOLUTION_12_BIT,
    ANALOG_IN_RESOLUTION_14_BIT,
    ANALOG_IN_RESOLUTION_16_BIT,


    ANALOG_IN_RESOLUTION_DEFAULT =  ANALOG_IN_RESOLUTION_12_BIT
} analog_in_resolution_t;
#line 107 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef struct
{
    pin_name_t input_pin;
    analog_in_resolution_t resolution;
    analog_in_vref_t vref_input;
    float vref_value;
} analog_in_config_t;
#line 127 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef struct
{
    handle_t handle;
    analog_in_config_t config;
} analog_in_t;
#line 207 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
void analog_in_configure_default( analog_in_config_t *config );
#line 242 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_open( analog_in_t *obj, analog_in_config_t *config );
#line 274 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_set_resolution( analog_in_t *obj, analog_in_resolution_t resolution );
#line 306 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_set_vref_input( analog_in_t *obj, analog_in_vref_t vref );
#line 340 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_set_vref_value( analog_in_t *obj, float vref_value );
#line 366 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_read( analog_in_t *obj, uint16_t *readDatabuf );
#line 393 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_read_voltage( analog_in_t *obj, float *readDatabuf );
#line 410 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_analog_in.h"
void analog_in_close( analog_in_t *obj );
#line 11 "drv_app.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_name.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_target.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
#line 51 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdint.h"
#line 52 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stdbool.h"
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
#line 1 "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/include/stddef.h"
#line 54 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
#line 68 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
typedef struct
{
    uint8_t *buffer;
    size_t capacity;
    volatile size_t size;
    volatile size_t head;
    volatile size_t tail;
} ring_buf8_t;
#line 85 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
void ring_buf8_init(ring_buf8_t *ring, uint8_t *buf, size_t capacity);
#line 96 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
_Bool  ring_buf8_push(ring_buf8_t *buf, uint8_t data_);
#line 106 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
uint8_t ring_buf8_pop(ring_buf8_t *buf);
#line 112 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
_Bool  ring_buf8_is_empty(ring_buf8_t *buf);
#line 117 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
_Bool  ring_buf8_is_full(ring_buf8_t *buf);
#line 123 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
size_t ring_buf8_size(ring_buf8_t *buf);
#line 128 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
void ring_buf8_clear(ring_buf8_t *buf);
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 61 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef struct
{
    handle_t *hal_uart_handle;
    handle_t *drv_uart_handle;
    _Bool  init_state;
} hal_uart_handle_register_t;
#line 71 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_SUCCESS = 0,
    HAL_UART_WRONG_PINS,
    HAL_UART_MODULE_ERROR,

    HAL_UART_ERROR = (-1)
} hal_uart_err_t;
#line 83 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_IRQ_RX,
    HAL_UART_IRQ_TX
} hal_uart_irq_t;
#line 92 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_DATA_BITS_7 = 0,
    HAL_UART_DATA_BITS_8,
    HAL_UART_DATA_BITS_9,

    HAL_UART_DATA_BITS_DEFAULT = HAL_UART_DATA_BITS_8
} hal_uart_data_bits_t;
#line 104 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_PARITY_NONE = 0,
    HAL_UART_PARITY_EVEN,
    HAL_UART_PARITY_ODD,

    HAL_UART_PARITY_DEFAULT = HAL_UART_PARITY_NONE
} hal_uart_parity_t;
#line 116 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_STOP_BITS_HALF = 0,
    HAL_UART_STOP_BITS_ONE,
    HAL_UART_STOP_BITS_ONE_AND_A_HALF,
    HAL_UART_STOP_BITS_TWO,

    HAL_UART_STOP_BITS_DEFAULT = HAL_UART_STOP_BITS_ONE
} hal_uart_stop_bits_t;
#line 158 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef struct
{
    hal_pin_name_t tx_pin;
    hal_pin_name_t rx_pin;

    uint32_t baud;
    hal_uart_data_bits_t data_bits;
    hal_uart_parity_t parity;
    hal_uart_stop_bits_t stop_bits;

    ring_buf8_t tx_buf;
    ring_buf8_t rx_buf;

    size_t tx_ring_size;
    size_t rx_ring_size;
} hal_uart_config_t;
#line 185 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef struct
{
    handle_t handle;

    hal_uart_config_t config;

    uint8_t *tx_ring_buffer;
    uint8_t *rx_ring_buffer;

    _Bool  is_tx_irq_enabled;
    _Bool  is_rx_irq_enabled;

    _Bool  is_blocking;
} hal_uart_t;
#line 250 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
void hal_uart_configure_default( hal_uart_config_t *config );
#line 300 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_open( handle_t *handle,  _Bool  hal_obj_open_state );
#line 325 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_set_baud( handle_t *handle, hal_uart_config_t *config );
#line 344 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_set_parity( handle_t *handle, hal_uart_config_t *config );
#line 363 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_set_stop_bits( handle_t *handle, hal_uart_config_t *config );
#line 382 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_set_data_bits( handle_t *handle, hal_uart_config_t *config );
#line 398 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
void hal_uart_set_blocking( handle_t *handle,  _Bool  blocking );
#line 420 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_write( handle_t *handle, uint8_t *buffer, size_t size );
#line 441 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_print( handle_t *handle, char *text );
#line 462 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_println( handle_t *handle, char *text );
#line 484 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_read( handle_t *handle, uint8_t *buffer, size_t size );
#line 501 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_bytes_available( hal_uart_t *hal_obj );
#line 516 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
void hal_uart_clear( hal_uart_t *hal_obj );
#line 534 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_close( handle_t *handle );
#line 53 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 1 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/platform/ring.h"
#line 54 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 58 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef enum
{
    UART_SUCCESS = 0,
    UART_ERROR = (-1)
} uart_err_t;
#line 67 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef enum
{
    UART_DATA_BITS_7 = 0,
    UART_DATA_BITS_8,
    UART_DATA_BITS_9,

    UART_DATA_BITS_DEFAULT = UART_DATA_BITS_8
} uart_data_bits_t;
#line 79 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef enum
{
    UART_PARITY_NONE = 0,
    UART_PARITY_EVEN,
    UART_PARITY_ODD,

    UART_PARITY_DEFAULT = UART_PARITY_NONE
} uart_parity_t;
#line 91 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef enum
{
    UART_STOP_BITS_HALF = 0,
    UART_STOP_BITS_ONE,
    UART_STOP_BITS_ONE_AND_A_HALF,
    UART_STOP_BITS_TWO,

    UART_STOP_BITS_DEFAULT = UART_STOP_BITS_ONE
} uart_stop_bits_t;
#line 137 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef struct
{
    pin_name_t tx_pin;
    pin_name_t rx_pin;

    uint32_t baud;
    uart_data_bits_t data_bits;
    uart_parity_t parity;
    uart_stop_bits_t stop_bits;

    ring_buf8_t tx_buf;
    ring_buf8_t rx_buf;

    size_t tx_ring_size;
    size_t rx_ring_size;
} uart_config_t;
#line 164 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef struct
{
    handle_t handle;

    uart_config_t config;

    uint8_t *tx_ring_buffer;
    uint8_t *rx_ring_buffer;

    _Bool  is_tx_irq_enabled;
    _Bool  is_rx_irq_enabled;

    _Bool  is_blocking;
} uart_t;
#line 232 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
void uart_configure_default( uart_config_t *config );
#line 286 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_open( uart_t *obj, uart_config_t *config );
#line 312 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_set_baud( uart_t *obj, uint32_t baud );
#line 339 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_set_parity( uart_t *obj, uart_parity_t parity );
#line 366 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_set_stop_bits( uart_t *obj, uart_stop_bits_t stop );
#line 393 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_set_data_bits( uart_t *obj, uart_data_bits_t bits );
#line 412 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
void uart_set_blocking( uart_t *obj,  _Bool  blocking );
#line 446 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_write( uart_t *obj, uint8_t *buffer, size_t size );
#line 476 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_print( uart_t *obj, char *text );
#line 506 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_println( uart_t *obj, char *text );
#line 540 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_read( uart_t *obj, uint8_t *buffer, size_t size );
#line 560 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
size_t uart_bytes_available( uart_t *obj );
#line 578 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
void uart_clear( uart_t *obj );
#line 599 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/include/drv/drv_uart.h"
void uart_close( uart_t *obj );
#line 12 "drv_app.h"


void SystemConfig(void);
#line 3 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/drv_app.c"


digital_out_t   LD2;
digital_in_t    BTTN1;


static void MX_GPIO_Init(void);
static void MX_ADC1_Init(void);
static void MX_UART2_Init(void);


void SystemConfig(void)
{


    MX_GPIO_Init();
    MX_ADC1_Init();
    MX_UART2_Init();

}
#line 28 "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/drv_app.c"
static void MX_GPIO_Init(void)
{


    digital_in_init( &LD2,  (0x13)  );


}

static void MX_ADC1_Init(void)
{

}


static void MX_UART2_Init(void)
{

}
