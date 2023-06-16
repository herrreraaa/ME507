################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/tof/platform/src/vl53l0x_platform.c \
../Drivers/tof/platform/src/vl53l0x_platform_log.c 

OBJS += \
./Drivers/tof/platform/src/vl53l0x_platform.o \
./Drivers/tof/platform/src/vl53l0x_platform_log.o 

C_DEPS += \
./Drivers/tof/platform/src/vl53l0x_platform.d \
./Drivers/tof/platform/src/vl53l0x_platform_log.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/tof/platform/src/%.o Drivers/tof/platform/src/%.su Drivers/tof/platform/src/%.cyclo: ../Drivers/tof/platform/src/%.c Drivers/tof/platform/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/Ultrasonic" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/LineSensor" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/tof/core/inc" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/tof/platform/inc" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/motor" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/Encoder" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/FollowLine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-tof-2f-platform-2f-src

clean-Drivers-2f-tof-2f-platform-2f-src:
	-$(RM) ./Drivers/tof/platform/src/vl53l0x_platform.cyclo ./Drivers/tof/platform/src/vl53l0x_platform.d ./Drivers/tof/platform/src/vl53l0x_platform.o ./Drivers/tof/platform/src/vl53l0x_platform.su ./Drivers/tof/platform/src/vl53l0x_platform_log.cyclo ./Drivers/tof/platform/src/vl53l0x_platform_log.d ./Drivers/tof/platform/src/vl53l0x_platform_log.o ./Drivers/tof/platform/src/vl53l0x_platform_log.su

.PHONY: clean-Drivers-2f-tof-2f-platform-2f-src

