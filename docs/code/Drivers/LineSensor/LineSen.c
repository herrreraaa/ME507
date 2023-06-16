/*
 * LineSen.c
 *
 *  Created on: Jun 10, 2023
 *      Author: luish
 */

#include "LineSen.h"
#include "main.h"
#include "stdint.h"

/*!
 * Provides the state of the left line sensor. Can be either on a line (1) or off a line (0).
 */
uint8_t LineSenGetStatusLEFT(){
	if(HAL_GPIO_ReadPin(GPIOB,LINSEN_LHS_Pin) == GPIO_PIN_SET){
		return 1;


	}
	if(HAL_GPIO_ReadPin(GPIOB,LINSEN_LHS_Pin) == GPIO_PIN_RESET){
		return 0;
	}
}

/*!
 * Provides the state of the left line sensor. Can be either on a line (1) or off a line (0).
 */
uint8_t LineSenGetStatusRIGHT(){
	if(HAL_GPIO_ReadPin(GPIOB,LINSEN_RHS_Pin) == GPIO_PIN_SET){
		return 1;


	}
	if(HAL_GPIO_ReadPin(GPIOB,LINSEN_RHS_Pin) == GPIO_PIN_RESET){
		return 0;

	}
}
