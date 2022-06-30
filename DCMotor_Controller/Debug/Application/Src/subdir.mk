################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Src/gpio_app.c \
../Application/Src/main_app.c \
../Application/Src/tim_app.c \
../Application/Src/uart_app.c 

OBJS += \
./Application/Src/gpio_app.o \
./Application/Src/main_app.o \
./Application/Src/tim_app.o \
./Application/Src/uart_app.o 

C_DEPS += \
./Application/Src/gpio_app.d \
./Application/Src/main_app.d \
./Application/Src/tim_app.d \
./Application/Src/uart_app.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Src/%.o Application/Src/%.su: ../Application/Src/%.c Application/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F303x8 -DUSE_HAL_DRIVER -c -I../Inc -I/home/lodracir/Documentos/Proyectos/MCD_Controller/DCMotor_Controller/Drivers/CMSIS/Include -I/home/lodracir/Documentos/Proyectos/MCD_Controller/DCMotor_Controller/Drivers/STM32F3xx_HAL_Driver/Inc -I/home/lodracir/Documentos/Proyectos/MCD_Controller/DCMotor_Controller/Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I/home/lodracir/Documentos/Proyectos/MCD_Controller/DCMotor_Controller/Drivers/CMSIS/Device/ST/STM32F3xx/Include -I/home/lodracir/Documentos/Proyectos/MCD_Controller/DCMotor_Controller/Application/Inc -I/home/lodracir/Documentos/Proyectos/MCD_Controller/DCMotor_Controller/Application/Driver/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-Src

clean-Application-2f-Src:
	-$(RM) ./Application/Src/gpio_app.d ./Application/Src/gpio_app.o ./Application/Src/gpio_app.su ./Application/Src/main_app.d ./Application/Src/main_app.o ./Application/Src/main_app.su ./Application/Src/tim_app.d ./Application/Src/tim_app.o ./Application/Src/tim_app.su ./Application/Src/uart_app.d ./Application/Src/uart_app.o ./Application/Src/uart_app.su

.PHONY: clean-Application-2f-Src

