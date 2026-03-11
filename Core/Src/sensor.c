#include "sensor.h"

float Sensor_ConvertToVoltage(uint16_t raw_val)
{
    return (raw_val / ADC_MAX_VALUE) * ADC_REF_VOLTAGE;
}

float Sensor_ConvertToPercentage(uint16_t raw_val)
{
    return (raw_val / ADC_MAX_VALUE) * BATTERY_MAX_PERCENT;
}