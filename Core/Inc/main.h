/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#define MOT_SF_Pin GPIO_PIN_13
#define MOT_SF_GPIO_Port GPIOC
#define MOT_SF_EXTI_IRQn EXTI15_10_IRQn
#define MOT_EN_Pin GPIO_PIN_14
#define MOT_EN_GPIO_Port GPIOC
#define ENC_A_ANNULAIRE_Pin GPIO_PIN_0
#define ENC_A_ANNULAIRE_GPIO_Port GPIOA
#define ENC_B_ANNULAIRE_Pin GPIO_PIN_1
#define ENC_B_ANNULAIRE_GPIO_Port GPIOA
#define UART_TX_ESP32_Pin GPIO_PIN_2
#define UART_TX_ESP32_GPIO_Port GPIOA
#define UART_RX_ESP32_Pin GPIO_PIN_3
#define UART_RX_ESP32_GPIO_Port GPIOA
#define CS_POUCE_Pin GPIO_PIN_4
#define CS_POUCE_GPIO_Port GPIOA
#define CS_INDEX_Pin GPIO_PIN_5
#define CS_INDEX_GPIO_Port GPIOA
#define CS_MAJEUR_Pin GPIO_PIN_6
#define CS_MAJEUR_GPIO_Port GPIOA
#define CS_ANNULAIRE_Pin GPIO_PIN_7
#define CS_ANNULAIRE_GPIO_Port GPIOA
#define CS_AURICULAIRE_Pin GPIO_PIN_0
#define CS_AURICULAIRE_GPIO_Port GPIOB
#define DIR_ANNULAIRE_Pin GPIO_PIN_1
#define DIR_ANNULAIRE_GPIO_Port GPIOB
#define DIR_AURICULAIRE_Pin GPIO_PIN_2
#define DIR_AURICULAIRE_GPIO_Port GPIOB
#define ENC_A_AURICULAIRE_Pin GPIO_PIN_10
#define ENC_A_AURICULAIRE_GPIO_Port GPIOB
#define ENC_A_AURICULAIRE_EXTI_IRQn EXTI15_10_IRQn
#define ENC_B_AURICULAIRE_Pin GPIO_PIN_12
#define ENC_B_AURICULAIRE_GPIO_Port GPIOB
#define ENC_B_AURICULAIRE_EXTI_IRQn EXTI15_10_IRQn
#define DIR_POUCE_Pin GPIO_PIN_13
#define DIR_POUCE_GPIO_Port GPIOB
#define DIR_INDEX_Pin GPIO_PIN_14
#define DIR_INDEX_GPIO_Port GPIOB
#define DIR_MAJEUR_Pin GPIO_PIN_15
#define DIR_MAJEUR_GPIO_Port GPIOB
#define PWM_POUCE_Pin GPIO_PIN_8
#define PWM_POUCE_GPIO_Port GPIOA
#define PWM_INDEX_Pin GPIO_PIN_9
#define PWM_INDEX_GPIO_Port GPIOA
#define PWM_MAJEUR_Pin GPIO_PIN_10
#define PWM_MAJEUR_GPIO_Port GPIOA
#define ENC_A_POUCE_Pin GPIO_PIN_15
#define ENC_A_POUCE_GPIO_Port GPIOA
#define ENC_B_POUCE_Pin GPIO_PIN_3
#define ENC_B_POUCE_GPIO_Port GPIOB
#define ENC_A_INDEX_Pin GPIO_PIN_4
#define ENC_A_INDEX_GPIO_Port GPIOB
#define ENC_B_INDEX_Pin GPIO_PIN_5
#define ENC_B_INDEX_GPIO_Port GPIOB
#define ENC_A_MAJEUR_Pin GPIO_PIN_6
#define ENC_A_MAJEUR_GPIO_Port GPIOB
#define ENC_B_MAJEUR_Pin GPIO_PIN_7
#define ENC_B_MAJEUR_GPIO_Port GPIOB
#define PWM_ANNULAIRE_Pin GPIO_PIN_8
#define PWM_ANNULAIRE_GPIO_Port GPIOB
#define PWM_AURICULAIRE_Pin GPIO_PIN_9
#define PWM_AURICULAIRE_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
