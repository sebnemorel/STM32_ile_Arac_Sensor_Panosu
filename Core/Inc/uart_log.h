#ifndef __UART_LOG_H
#define __UART_LOG_H

#include "stm32f1xx_hal.h"
#include <stdio.h>
#include <string.h>

void UART_Print(UART_HandleTypeDef *huart, const char *msg);
void UART_PrintFloat(UART_HandleTypeDef *huart, const char *label, float val, uint8_t decimals);

#endif
