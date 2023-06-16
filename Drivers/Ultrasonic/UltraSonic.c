/*
 * UltraSonicGetDistance.c
 *
 *  Created on: Jun 1, 2023
 *      Author: luish
 */

#include "main.h"
#include "stdio.h"
#include "stdint.h"
#include "UltraSonic.h"

//Initalize the variables used for this function

#define TIMCLOCK   16000000
#define PRESCALAR  1.6

uint32_t IC_Val1 = 0;//!<Time captured of ultrasonic echo pulse rising edge.
uint32_t IC_Val2 = 0;//!<Time captured of ultrasonic echo pulse falling edge.
uint32_t Difference = 0;//!<Time capture of ultrasonic echo pulse width
uint32_t usWidth;//!<Ultrasonic echo pulse width in microseconds.
uint32_t distInch;//!<Distance measured by ultrasonic sensor in inches.
int Is_First_Captured = 0;//!<Flag to keep track of if the rising edge has been captured.


//uint8_t MSG[30];

/*!
 * @brief Begins a timer on the provided timer handle to generate a 15 us pulse to cause the ultrasonic sensor to send an echo out.
 */
void UltraSonicStartPulse(TIM_HandleTypeDef htim){
	HAL_TIM_PWM_Start(&htim, TIM_CHANNEL_1);
	TIM10->CCR1 = 15;

}

/*!
 * @brief Sets up a timer on the provided timer handle to capture the ultrasonic's reflected echo.
 */
void UltraSonicPrepInterrupt(TIM_HandleTypeDef htim){
    HAL_TIM_Base_Start_IT(&htim);
    HAL_TIM_IC_Start_IT(&htim, TIM_CHANNEL_4);
}

/*!
 * @brief Returns the calculated distance away from the ultrasonic sensor using the echo's pulse width.
 */
uint32_t UltraSonicGetDist(){
	return distInch;
}

//THE FOLLOWING FUNCTION GOES IN SIDE THE INTERRUPT

/*!
 * @brief Calculates the distance based on the ultrasonic sensor's echo signal on the provided timer handle.
 */
void UltraSonicCalcDist(TIM_HandleTypeDef *htim){
	if (htim->Channel == HAL_TIM_ACTIVE_CHANNEL_4)  // if the interrupt source is channel1
		{
			if (Is_First_Captured==0) // if the first value is not captured
			{
				IC_Val1 = HAL_TIM_ReadCapturedValue(htim, TIM_CHANNEL_4); // read the first value
				Is_First_Captured = 1;  // set the first captured as true
			}

			else   // if the first is already captured
			{
				IC_Val2 = HAL_TIM_ReadCapturedValue(htim, TIM_CHANNEL_4);  // read second value

				if (IC_Val2 > IC_Val1)
				{
					Difference = IC_Val2-IC_Val1;
				}

				else if (IC_Val1 > IC_Val2)
				{
					Difference = (0xffffffff - IC_Val1) + IC_Val2;
				}

				float refClock = TIMCLOCK/(PRESCALAR);
				float mFactor = 1000000/refClock;

				usWidth = Difference*mFactor;

				distInch = usWidth*1000/148;

				__HAL_TIM_SET_COUNTER(htim, 0);  // reset the counter
				Is_First_Captured = 0; // set it back to false
			}
		}
	//return distInch;
}

