/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2020 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED5_Pin GPIO_PIN_0
#define LED5_GPIO_Port GPIOH
#define LED6_Pin GPIO_PIN_1
#define LED6_GPIO_Port GPIOH
#define Sensor_FR_Pin GPIO_PIN_0
#define Sensor_FR_GPIO_Port GPIOA
#define Sensor_SR_Pin GPIO_PIN_1
#define Sensor_SR_GPIO_Port GPIOA
#define Sensor_SL_Pin GPIO_PIN_2
#define Sensor_SL_GPIO_Port GPIOA
#define Sensor_FL_Pin GPIO_PIN_3
#define Sensor_FL_GPIO_Port GPIOA
#define LED_SL_Pin GPIO_PIN_4
#define LED_SL_GPIO_Port GPIOA
#define LED_FL_Pin GPIO_PIN_5
#define LED_FL_GPIO_Port GPIOA
#define LED_SR_Pin GPIO_PIN_6
#define LED_SR_GPIO_Port GPIOA
#define LED_FR_Pin GPIO_PIN_7
#define LED_FR_GPIO_Port GPIOA
#define V_Battery_Pin GPIO_PIN_0
#define V_Battery_GPIO_Port GPIOB
#define SW_Pin GPIO_PIN_1
#define SW_GPIO_Port GPIOB
#define LED4_Pin GPIO_PIN_10
#define LED4_GPIO_Port GPIOB
#define SPI2_CS_Pin GPIO_PIN_12
#define SPI2_CS_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_12
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_13
#define LED3_GPIO_Port GPIOA
#define SPI1_CS_L_Pin GPIO_PIN_14
#define SPI1_CS_L_GPIO_Port GPIOA
#define SPI1_CS_R_Pin GPIO_PIN_15
#define SPI1_CS_R_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
