/*
 * ENCODER.c
 *
 *  Created on: May 23, 2023
 *      Author: luish
 */

#include "ENCODER.h"
#include "stdint.h"
#include "main.h"

uint16_t ENCL = 0; //!<Variable to store the encoder value of the left hand side motor.
uint16_t ENCR = 0; //!<Variable to store the encoder value of the right hand side motor.



/*!
 * @brief Keeps track of the left hand side motor's encoder count from the provided timer handle. Resets to 0 after a full roation.
 */
uint16_t enc_display_pulses_LHS(TIM_HandleTypeDef* htim){ //this function goes inside the interrupt

	//if (htim->Instance == htim3.Instance)
	//{
		if (htim->Channel == HAL_TIM_ACTIVE_CHANNEL_3 || htim->Channel == HAL_TIM_ACTIVE_CHANNEL_4)  // if the interrupt source is channel 3 or 4
		{

				if (ENCL < 1250){	//this encoder provides a resolution of 20 pulses per rotation
					ENCL++;		//count the pulses
				}
				if (ENCL == 1250){	//once 20 pulses are reached
					ENCL = 0;	//reset the counter
				}

		}return ENCL;

}

/*!
 *@brief  Keeps track of the right hand side motor's encoder count from the provided timer handle. Resets to 0 after a full roation.
 */
uint16_t enc_display_pulses_RHS(TIM_HandleTypeDef* htim){
		if (htim->Channel == HAL_TIM_ACTIVE_CHANNEL_1 || htim->Channel == HAL_TIM_ACTIVE_CHANNEL_2)  // if the interrupt source is channel 3 or 4
		{

				if (ENCR < 1250){
					ENCR++;
				}
				if (ENCR == 1250){
					ENCR = 0;	//reset the counter
				}

		}return ENCR;

}


