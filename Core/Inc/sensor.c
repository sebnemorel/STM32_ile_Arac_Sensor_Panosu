#include "sensor.h"

uint16_t Get_Raw_ADC_Value(ADC_HandleTypeDef *hadc) {
    HAL_ADC_Start(hadc); 
    if (HAL_ADC_PollForConversion(hadc, 100) == HAL_OK) {
        return HAL_ADC_GetValue(hadc);
    }
    return 0; 
}

float Convert_To_Voltage(uint16_t raw_value) {
    return (raw_value / 4095.0f) * 3.3f;
}

float Convert_To_Percentage(uint16_t raw_value) {
    return (raw_value / 4095.0f) * 100.0f;
}