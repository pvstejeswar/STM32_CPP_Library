/*
 * stm32_l4xx_rcc.cpp
 *
 *  Created on: Jun 12, 2020
 *      Author: venkatapokkuluri
 */

#include "L1_DRIVERS/stm32_l4xx_rcc.hpp"
#include "L0_UTILS/stm32_L475XX.hpp"
#include "L0_UTILS/stm32_headers.hpp"

RCC_CLOCK_TYPE RCC::clockSource 	= RCC_MSI;				/* Default Clock is MSI  */
float RCC::clockFrequency 			= 4 * 1000 * 1000;	    /* Default Freq is 4MHZ  */
RCC_Registers_def* RCC:: RCC_Reg 	= (RCC_Registers_def*)RCC_BASE;

int RCC::setClockSource(RCC_CLOCK_TYPE type){
	if(type == RCC_MSI){
		MULTIBIT_SET(RCC_Reg->RCC_CFGR,RCC_CFGR_SW_Msk,RCC_CFGR_SW_VALUE_MSI);
	}
	else if(type == RCC_HSI16){
		MULTIBIT_SET(RCC_Reg->RCC_CFGR,RCC_CFGR_SW_Msk,RCC_CFGR_SW_VALUE_HSI16);
	}
	else if(type == RCC_HSE){
		MULTIBIT_SET(RCC_Reg->RCC_CFGR,RCC_CFGR_SW_Msk,RCC_CFGR_SW_VALUE_HSE);
	}
	else if(type == RCC_PLL){
		MULTIBIT_SET(RCC_Reg->RCC_CFGR,RCC_CFGR_SW_Msk,RCC_CFGR_SW_VALUE_PLL);
	}
	else{
		return -1;
	}
	clockSource = type;
	return 0;
}

int RCC::setClockFrequency(float frequency){
	if(clockSource == RCC_MSI){

		if(!(RCC_Reg->RCC_CR & RCC_CR_MSIRDY_Msk)){
			return -1;
		}
		RCC_Reg->RCC_CR = SET_BIT(RCC_Reg->RCC_CR,RCC_CR_MSIRGSEL_Msk);


		if(frequency<= 100* 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_0);
			return 0;
		}
		if(frequency<= 200 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_1);
			return 0;
		}
		if(frequency<= 400 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_2);
			return 0;
		}
		if(frequency<= 800 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_3);
			return 0;
		}
		if(frequency<= 1000 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_4);
			return 0;
		}
		if(frequency<= 2000 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_5);
			return 0;
		}
		if(frequency<= 4000 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_6);
			return 0;
		}
		if(frequency<= 8000 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_7);
			return 0;
		}
		if(frequency<= 16000 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_8);
			return 0;
		}
		if(frequency<= 24000 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_9);
			return 0;
		}
		if(frequency<= 32000 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_10);
			return 0;
		}
		if(frequency<= 48000 * 1000){
			RCC_Reg->RCC_CR = MULTIBIT_SET(RCC_Reg->RCC_CR,RCC_CR_MSIRANGE_Msk,RCC_CR_MSIRANGE_VALUE_11);
			return 0;
		}

	}
	else{
		/*TODO: Add code for HSI16 and PLL*/
		return -1;
	}
	return 0;
}

float RCC::getClockFrequency(){
	return clockFrequency;
}

RCC_CLOCK_TYPE RCC::getClockSource(){
	return clockSource;
}
