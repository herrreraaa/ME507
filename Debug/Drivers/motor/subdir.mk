################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/motor/MOTOR_DRIVER.c 

OBJS += \
./Drivers/motor/MOTOR_DRIVER.o 

C_DEPS += \
./Drivers/motor/MOTOR_DRIVER.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/motor/%.o Drivers/motor/%.su Drivers/motor/%.cyclo: ../Drivers/motor/%.c Drivers/motor/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/Ultrasonic" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/LineSensor" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/tof/core/inc" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/tof/platform/inc" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/motor" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/Encoder" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/FollowLine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-motor

clean-Drivers-2f-motor:
	-$(RM) ./Drivers/motor/MOTOR_DRIVER.cyclo ./Drivers/motor/MOTOR_DRIVER.d ./Drivers/motor/MOTOR_DRIVER.o ./Drivers/motor/MOTOR_DRIVER.su

.PHONY: clean-Drivers-2f-motor

