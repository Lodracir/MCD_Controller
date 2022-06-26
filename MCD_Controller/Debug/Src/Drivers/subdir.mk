################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Src/Drivers/drv_gpio.cpp 

OBJS += \
./Src/Drivers/drv_gpio.o 

CPP_DEPS += \
./Src/Drivers/drv_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Drivers/%.o Src/Drivers/%.su: ../Src/Drivers/%.cpp Src/Drivers/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DSTM32 -DSTM32F303K8Tx -DNUCLEO_F303K8 -DSTM32F3 -DSTM32F303x8 -c -I../Inc -I"C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/Drivers/CMSIS/Include" -I"C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/Drivers/CMSIS/Device/ST/STM32F3xx/Include" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Drivers

clean-Src-2f-Drivers:
	-$(RM) ./Src/Drivers/drv_gpio.d ./Src/Drivers/drv_gpio.o ./Src/Drivers/drv_gpio.su

.PHONY: clean-Src-2f-Drivers

