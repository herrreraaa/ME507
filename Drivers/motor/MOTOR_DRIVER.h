/*
 * MOTOR_DRIVER.h
 *
 *  Created on: Apr 26, 2023
 *      Author: luish
 */
#include "stdint.h"
#include "stm32f4xx.h"

#ifndef SRC_MOTOR_DRIVER_H_
#define SRC_MOTOR_DRIVER_H_

typedef struct my_struct{
	uint32_t motornum;
	int8_t dutycycle;
	TIM_HandleTypeDef* htim;
} my_struct_t;

void startm(my_struct_t str);
void stopm(my_struct_t str);
void dutycyclem(my_struct_t str);

void drivefwd_RHS(int dutycycle);
void driverev_RHS(int dutycycle);
void stop_RHS();

void drivefwd_LHS(int dutycycle);
void driverev_LHS(int dutycycle);
void stop_LHS();



#endif /* SRC_MOTOR_DRIVER_H_ */
