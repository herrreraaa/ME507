/*
 * UltraSonicGetDistance.h
 *
 *  Created on: Jun 1, 2023
 *      Author: luish
 */

#ifndef SRC_ULTRASONIC_H_
#define SRC_ULTRASONIC_H_

uint32_t UltraSonicGetDist();

void UltraSonicCalcDist(TIM_HandleTypeDef *htim);

void UltraSonicPrepInterrupt(TIM_HandleTypeDef htim);

void UltraSonicStartPulse(TIM_HandleTypeDef htim);





#endif /* SRC_ULTRASONIC_H_ */
