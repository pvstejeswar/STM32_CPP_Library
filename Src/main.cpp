/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include <stdio.h>
#include "L1_DRIVERS/stm32_l4xx_rcc.hpp"

int main(void)
{
	RCC& r1 = RCC::getInstance();
	r1.setClockSource(RCC_MSI);
	r1.setClockFrequency(32000 * 1000);
	printf("Hello World 1\n");
	printf("Hello World 2\n");
	printf("Hello World 3\n");
	for(;;);
}
