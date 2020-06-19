/*
 * stm32_l4xx_rcc.hpp
 *
 *  Created on: Apr 12, 2020
 *      Author: venkatapokkuluri
 */

#ifndef STM32_L4XX_RCC_HPP_
#define STM32_L4XX_RCC_HPP_


#include "L0_UTILS/singleton_template.hpp"
#include "L0_UTILS/stm32_headers.hpp"


enum RCC_CLOCK_TYPE{
	 RCC_HSI16,
	 RCC_MSI,
	 RCC_HSE,
	 RCC_PLL,
 };


 class RCC : public Singleton<RCC>{
 private :
	 RCC(){};
	 friend class Singleton<RCC>;
	 static RCC_CLOCK_TYPE clockSource;
	 static float clockFrequency;
	 static struct RCC_Registers_def *RCC_Reg;


 public :
	 int setClockSource(RCC_CLOCK_TYPE type);
	 int setClockFrequency(float frequency);
	 RCC_CLOCK_TYPE getClockSource();
	 float getClockFrequency();

 };


#endif /* STM32_L4XX_RCC_HPP_ */
