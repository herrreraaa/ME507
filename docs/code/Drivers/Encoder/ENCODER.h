/*
 * ENCODER.h
 *
 *  Created on: May 23, 2023
 *      Author: luish
 */

#ifndef SRC_ENCODER_H_
#define SRC_ENCODER_H_

#include "stdint.h"
#include "stdio.h"
#include "stm32f4xx.h"
#include "main.h"
//#include "PMW_DRIVER.h"

typedef struct enc_struct{
	TIM_HandleTypeDef* htim;
	UART_HandleTypeDef* huart;
} enc_struct_t;

uint16_t enc_display_pulses_LHS(TIM_HandleTypeDef* htim);

uint16_t enc_display_pulses_RHS(TIM_HandleTypeDef* htim);
//void enc_move_angle(enc_struct_t str, PMWD_struct_t str2);
//void enc_check_angle(enc_struct_t str, PMWD_struct_t str2);


#endif /* SRC_ENCODER_H_ */
