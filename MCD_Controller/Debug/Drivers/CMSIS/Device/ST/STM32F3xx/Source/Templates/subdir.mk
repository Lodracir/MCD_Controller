################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/system_stm32f3xx.c 

C_DEPS += \
./Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/system_stm32f3xx.d 

OBJS += \
./Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/system_stm32f3xx.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/%.o Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/%.su: ../Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/%.c Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F303K8Tx -DNUCLEO_F303K8 -DSTM32F3 -DSTM32F303x8 -c -I../Inc -I"C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/Drivers/CMSIS/Include" -I"C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/Drivers/CMSIS/Device/ST/STM32F3xx/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-Device-2f-ST-2f-STM32F3xx-2f-Source-2f-Templates

clean-Drivers-2f-CMSIS-2f-Device-2f-ST-2f-STM32F3xx-2f-Source-2f-Templates:
	-$(RM) ./Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/system_stm32f3xx.d ./Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/system_stm32f3xx.o ./Drivers/CMSIS/Device/ST/STM32F3xx/Source/Templates/system_stm32f3xx.su

.PHONY: clean-Drivers-2f-CMSIS-2f-Device-2f-ST-2f-STM32F3xx-2f-Source-2f-Templates

