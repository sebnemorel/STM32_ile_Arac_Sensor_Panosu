#include "uart_log.h"

void UART_Print(UART_HandleTypeDef *huart, const char *msg)
{
    HAL_UART_Transmit(huart, (uint8_t*)msg, strlen(msg), 100);
}

void UART_PrintFloat(UART_HandleTypeDef *huart, const char *label, float val, uint8_t decimals)
{
    char buffer[64];
    char format[16];
    
    sprintf(format, "%%s %%.%df\r\n", decimals);
    sprintf(buffer, format, label, val);
    
    UART_Print(huart, buffer);
}