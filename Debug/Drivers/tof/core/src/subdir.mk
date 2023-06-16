################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/tof/core/src/vl53l0x_api.c \
../Drivers/tof/core/src/vl53l0x_api_calibration.c \
../Drivers/tof/core/src/vl53l0x_api_core.c \
../Drivers/tof/core/src/vl53l0x_api_ranging.c \
../Drivers/tof/core/src/vl53l0x_api_strings.c 

OBJS += \
./Drivers/tof/core/src/vl53l0x_api.o \
./Drivers/tof/core/src/vl53l0x_api_calibration.o \
./Drivers/tof/core/src/vl53l0x_api_core.o \
./Drivers/tof/core/src/vl53l0x_api_ranging.o \
./Drivers/tof/core/src/vl53l0x_api_strings.o 

C_DEPS += \
./Drivers/tof/core/src/vl53l0x_api.d \
./Drivers/tof/core/src/vl53l0x_api_calibration.d \
./Drivers/tof/core/src/vl53l0x_api_core.d \
./Drivers/tof/core/src/vl53l0x_api_ranging.d \
./Drivers/tof/core/src/vl53l0x_api_strings.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/tof/core/src/%.o Drivers/tof/core/src/%.su Drivers/tof/core/src/%.cyclo: ../Drivers/tof/core/src/%.c Drivers/tof/core/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/Ultrasonic" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/LineSensor" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/tof/core/inc" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/tof/platform/inc" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/motor" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/Encoder" -I"C:/Users/luish/Desktop/ME 507/STM/TERMPROJ_1/Drivers/FollowLine" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-tof-2f-core-2f-src

clean-Drivers-2f-tof-2f-core-2f-src:
	-$(RM) ./Drivers/tof/core/src/vl53l0x_api.cyclo ./Drivers/tof/core/src/vl53l0x_api.d ./Drivers/tof/core/src/vl53l0x_api.o ./Drivers/tof/core/src/vl53l0x_api.su ./Drivers/tof/core/src/vl53l0x_api_calibration.cyclo ./Drivers/tof/core/src/vl53l0x_api_calibration.d ./Drivers/tof/core/src/vl53l0x_api_calibration.o ./Drivers/tof/core/src/vl53l0x_api_calibration.su ./Drivers/tof/core/src/vl53l0x_api_core.cyclo ./Drivers/tof/core/src/vl53l0x_api_core.d ./Drivers/tof/core/src/vl53l0x_api_core.o ./Drivers/tof/core/src/vl53l0x_api_core.su ./Drivers/tof/core/src/vl53l0x_api_ranging.cyclo ./Drivers/tof/core/src/vl53l0x_api_ranging.d ./Drivers/tof/core/src/vl53l0x_api_ranging.o ./Drivers/tof/core/src/vl53l0x_api_ranging.su ./Drivers/tof/core/src/vl53l0x_api_strings.cyclo ./Drivers/tof/core/src/vl53l0x_api_strings.d ./Drivers/tof/core/src/vl53l0x_api_strings.o ./Drivers/tof/core/src/vl53l0x_api_strings.su

.PHONY: clean-Drivers-2f-tof-2f-core-2f-src

