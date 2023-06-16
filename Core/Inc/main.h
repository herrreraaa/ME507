/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define M3_1_Pin GPIO_PIN_1
#define M3_1_GPIO_Port GPIOA
#define M3_PWM1_Pin GPIO_PIN_2
#define M3_PWM1_GPIO_Port GPIOA
#define M3_PWM2_Pin GPIO_PIN_3
#define M3_PWM2_GPIO_Port GPIOA
#define M3_2_Pin GPIO_PIN_5
#define M3_2_GPIO_Port GPIOA
#define M2_PWM1_Pin GPIO_PIN_6
#define M2_PWM1_GPIO_Port GPIOA
#define M2_PWM2_Pin GPIO_PIN_7
#define M2_PWM2_GPIO_Port GPIOA
#define M2_2_Pin GPIO_PIN_0
#define M2_2_GPIO_Port GPIOB
#define M2_1_Pin GPIO_PIN_1
#define M2_1_GPIO_Port GPIOB
#define LINSEN_RHS_Pin GPIO_PIN_10
#define LINSEN_RHS_GPIO_Port GPIOB
#define LINSEN_LHS_Pin GPIO_PIN_15
#define LINSEN_LHS_GPIO_Port GPIOB
#define M1_PWM2_Pin GPIO_PIN_8
#define M1_PWM2_GPIO_Port GPIOA
#define M1_PWM1_Pin GPIO_PIN_9
#define M1_PWM1_GPIO_Port GPIOA
#define MAGSEN_Pin GPIO_PIN_10
#define MAGSEN_GPIO_Port GPIOA
#define TOF_Pin GPIO_PIN_4
#define TOF_GPIO_Port GPIOB
#define XSHUT_Pin GPIO_PIN_5
#define XSHUT_GPIO_Port GPIOB
#define ULTSEN_INPUT_Pin GPIO_PIN_9
#define ULTSEN_INPUT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
