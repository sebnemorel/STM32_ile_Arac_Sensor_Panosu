#ifndef INC_SENSOR_H_
#define INC_SENSOR_H_

#include "stm32f1xx_hal.h"

uint16_t Get_Raw_ADC_Value(ADC_HandleTypeDef *hadc);
float Convert_To_Voltage(uint16_t raw_value);
float Convert_To_Percentage(uint16_t raw_value);

#endif