/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32g0xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define FREQUENCY_CALIBRATION_Pin GPIO_PIN_0
#define FREQUENCY_CALIBRATION_GPIO_Port GPIOA
#define DP_DOT_Pin GPIO_PIN_1
#define DP_DOT_GPIO_Port GPIOA
#define DP_G_Pin GPIO_PIN_2
#define DP_G_GPIO_Port GPIOA
#define DP_F_Pin GPIO_PIN_3
#define DP_F_GPIO_Port GPIOA
#define DP_E_Pin GPIO_PIN_4
#define DP_E_GPIO_Port GPIOA
#define DP_D_Pin GPIO_PIN_5
#define DP_D_GPIO_Port GPIOA
#define DP_C_Pin GPIO_PIN_6
#define DP_C_GPIO_Port GPIOA
#define DP_B_Pin GPIO_PIN_7
#define DP_B_GPIO_Port GPIOA
#define DP_A_Pin GPIO_PIN_0
#define DP_A_GPIO_Port GPIOB
#define DP_D5_Pin GPIO_PIN_1
#define DP_D5_GPIO_Port GPIOB
#define DP_D4_Pin GPIO_PIN_2
#define DP_D4_GPIO_Port GPIOB
#define DP_D3_Pin GPIO_PIN_10
#define DP_D3_GPIO_Port GPIOB
#define DP_D2_Pin GPIO_PIN_11
#define DP_D2_GPIO_Port GPIOB
#define DP_D1_Pin GPIO_PIN_12
#define DP_D1_GPIO_Port GPIOB
#define AM_FREQUENCY_Pin GPIO_PIN_12
#define AM_FREQUENCY_GPIO_Port GPIOA
#define FM_FREQUENCY_Pin GPIO_PIN_2
#define FM_FREQUENCY_GPIO_Port GPIOD
#define AM_FM_Pin GPIO_PIN_7
#define AM_FM_GPIO_Port GPIOB
#define BUTTON_FM_CHANNEL_Pin GPIO_PIN_8
#define BUTTON_FM_CHANNEL_GPIO_Port GPIOB
#define LED_FM_CHANNEL_Pin GPIO_PIN_9
#define LED_FM_CHANNEL_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
