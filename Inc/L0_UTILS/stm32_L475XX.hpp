/*
 * stm32_L$75XX.hpp
 *
 *  Created on: May 2, 2020
 *      Author: venkatapokkuluri
 */

#ifndef L0_UTILS_STM32_L475XX_HPP_
#define L0_UTILS_STM32_L475XX_HPP_

#include "stm32_headers.hpp"

#define RCC_BASE								0x40021000UL

/* ============================ START RCC Section ================================= */
#define RCC_CR_MSION_Msk                     	(0x1UL << 0)        /*!< 0x00000001 */
#define RCC_CR_MSIRDY_Msk                    	(0x1UL << 1)        /*!< 0x00000002 */
#define RCC_CR_MSIPLLEN_Msk					 	(0x1UL << 2)        /*!< 0x00000004 */
#define RCC_CR_MSIRGSEL_Msk					 	(0x1UL << 3)        /*!< 0x00000008 */
#define RCC_CR_MSIRANGE_Msk					 	(0xFUL << 4)		/*!< 0x000000F0 */
#define RCC_CR_HSION_Msk					 	(0x1UL << 8)		/*!< 0x00000100 */
#define RCC_CR_HSIKERON_Msk					 	(0x1UL << 9)		/*!< 0x00000200 */
#define RCC_CR_HSIRDY_Msk					 	(0x1UL << 10)		/*!< 0x00000400 */
#define RCC_CR_HSIASFS_Msk					 	(0x1UL << 11)		/*!< 0x00000800 */
#define RCC_CR_HSEON_Msk					 	(0x1UL << 16)		/*!< 0x00010000 */
#define RCC_CR_HSERDY_Msk					 	(0x1UL << 17)		/*!< 0x00020000 */
#define RCC_CR_HSEBYP_Msk					 	(0x1UL << 18)		/*!< 0x00040000 */
#define RCC_CR_CSSON_Msk					 	(0x1UL << 19)		/*!< 0x00080000 */
#define RCC_CR_PLLON_Msk					 	(0x1UL << 24)		/*!< 0x01000000 */
#define RCC_CR_PLLRDY_Msk					 	(0x1UL << 25)		/*!< 0x02000000 */
#define RCC_CR_PLLSAI1ON_Msk				 	(0x1UL << 26)		/*!< 0x04000000 */
#define RCC_CR_PLLSAI1RDY_Msk				 	(0x1UL << 27)		/*!< 0x08000000 */
#define RCC_CR_PLLSAI2ON_Msk				 	(0x1UL << 28)		/*!< 0x10000000 */
#define RCC_CR_PLLSAI2RDY_Msk				 	(0x1UL << 29)		/*!< 0x20000000 */

#define RCC_CR_MSIRANGE_VALUE_0					(0x0UL << 4)		/*!< 0x00000000 */
#define RCC_CR_MSIRANGE_VALUE_1					(0x1UL << 4)		/*!< 0x00000010 */
#define RCC_CR_MSIRANGE_VALUE_2					(0x2UL << 4)		/*!< 0x00000020 */
#define RCC_CR_MSIRANGE_VALUE_3					(0x3UL << 4)		/*!< 0x00000030 */
#define RCC_CR_MSIRANGE_VALUE_4					(0x4UL << 4)		/*!< 0x00000040 */
#define RCC_CR_MSIRANGE_VALUE_5					(0x5UL << 4)		/*!< 0x00000050 */
#define RCC_CR_MSIRANGE_VALUE_6					(0x6UL << 4)		/*!< 0x00000060 */
#define RCC_CR_MSIRANGE_VALUE_7					(0x7UL << 4)		/*!< 0x00000070 */
#define RCC_CR_MSIRANGE_VALUE_8					(0x8UL << 4)		/*!< 0x00000080 */
#define RCC_CR_MSIRANGE_VALUE_9					(0x9UL << 4)		/*!< 0x00000090 */
#define RCC_CR_MSIRANGE_VALUE_10				(0xAUL << 4)		/*!< 0x000000A0 */
#define RCC_CR_MSIRANGE_VALUE_11				(0xBUL << 4)		/*!< 0x000000B0 */

/* -------------------------------------------------------------------------------- */
#define RCC_CFGR_SW_Msk                   	 	(0x3UL << 0)       /*!< 0x00000003 */
#define RCC_CFGR_SWS_Msk                   	 	(0x3UL << 2)       /*!< 0x0000000C */
#define RCC_CFGR_HPRE_Msk                    	(0xFUL << 4)       /*!< 0x000000F0 */
#define RCC_CFGR_PPRE1_Msk                   	(0x7UL << 8)       /*!< 0x00000700 */
#define RCC_CFGR_PPRE2_Msk                   	(0x7UL << 11)      /*!< 0x00003800 */
#define RCC_CFGR_STOPWUCK_Msk                	(0x1UL << 15)      /*!< 0x00008000 */
#define RCC_CFGR_MCOSEL_Msk                  	(0xFUL << 24)      /*!< 0x0F000000 */
#define RCC_CFGR_MCOPRE_Msk                  	(0x7UL << 28)      /*!< 0x70000000 */

#define RCC_CFGR_SW_VALUE_MSI					(0x0UL << 0)	   /*!< 0x00000000 */
#define RCC_CFGR_SW_VALUE_HSI16					(0x1UL << 0)	   /*!< 0x00000001 */
#define RCC_CFGR_SW_VALUE_HSE					(0x2UL << 0)	   /*!< 0x00000002 */
#define RCC_CFGR_SW_VALUE_PLL					(0x3UL << 0)	   /*!< 0x00000003 */

#define RCC_CFGR_SW_STATUS_MSI					(0x0UL << 2)	   /*!< 0x00000000 */
#define RCC_CFGR_SW_STATUS_HSI16				(0x1UL << 2)	   /*!< 0x00000004 */
#define RCC_CFGR_SW_STATUS_HSE					(0x2UL << 2)	   /*!< 0x00000008 */
#define RCC_CFGR_SW_STATUS_PLL					(0x3UL << 2)	   /*!< 0x0000000C */

#define RCC_CFGR_HPRE_VALUE_0					(0x0UL << 4)	   /*!< 0x00000000 */
#define RCC_CFGR_HPRE_VALUE_1					(0x8UL << 4)	   /*!< 0x00000080 */
#define RCC_CFGR_HPRE_VALUE_2					(0x9UL << 4)	   /*!< 0x00000090 */
#define RCC_CFGR_HPRE_VALUE_3					(0xAUL << 4)	   /*!< 0x000000A0 */
#define RCC_CFGR_HPRE_VALUE_4					(0xBUL << 4)	   /*!< 0x000000B0 */
#define RCC_CFGR_HPRE_VALUE_5					(0xCUL << 4)	   /*!< 0x000000C0 */
#define RCC_CFGR_HPRE_VALUE_6					(0xDUL << 4)	   /*!< 0x000000D0 */
#define RCC_CFGR_HPRE_VALUE_7					(0xEUL << 4)	   /*!< 0x000000E0 */
#define RCC_CFGR_HPRE_VALUE_8					(0xFUL << 4)	   /*!< 0x000000F0 */

#define RCC_CFGR_PPRE1_VALUE_0                  (0x0UL << 8)       /*!< 0x00000000 */
#define RCC_CFGR_PPRE1_VALUE_1                  (0x4UL << 8)       /*!< 0x00000400 */
#define RCC_CFGR_PPRE1_VALUE_2                  (0x5UL << 8)       /*!< 0x00000500 */
#define RCC_CFGR_PPRE1_VALUE_3                  (0x6UL << 8)       /*!< 0x00000600 */
#define RCC_CFGR_PPRE1_VALUE_4                  (0x7UL << 8)       /*!< 0x00000700 */

#define RCC_CFGR_PPRE2_VALUE_0                  (0x0UL << 11)      /*!< 0x00000000 */
#define RCC_CFGR_PPRE2_VALUE_1                  (0x4UL << 11)      /*!< 0x00002000 */
#define RCC_CFGR_PPRE2_VALUE_2                  (0x5UL << 11)      /*!< 0x00002800 */
#define RCC_CFGR_PPRE2_VALUE_3                  (0x6UL << 11)      /*!< 0x00003000 */
#define RCC_CFGR_PPRE2_VALUE_4                  (0x7UL << 11)      /*!< 0x00003800 */

#define RCC_CFGR_MCOSEL_VALUE_0                 (0x0UL << 24)      /*!< 0x00000000 */
#define RCC_CFGR_MCOSEL_VALUE_1                 (0x1UL << 24)      /*!< 0x01000000 */
#define RCC_CFGR_MCOSEL_VALUE_2                 (0x2UL << 24)      /*!< 0x02000000 */
#define RCC_CFGR_MCOSEL_VALUE_3                 (0x3UL << 24)      /*!< 0x03000000 */
#define RCC_CFGR_MCOSEL_VALUE_4                 (0x4UL << 24)      /*!< 0x04000000 */
#define RCC_CFGR_MCOSEL_VALUE_5                 (0x5UL << 24)      /*!< 0x05000000 */
#define RCC_CFGR_MCOSEL_VALUE_6                 (0x6UL << 24)      /*!< 0x06000000 */
#define RCC_CFGR_MCOSEL_VALUE_7                 (0x7UL << 24)      /*!< 0x07000000 */
#define RCC_CFGR_MCOSEL_VALUE_8                 (0x8UL << 24)      /*!< 0x08000000 */

#define RCC_CFGR_MCOPRE_VALUE_0                 (0x0UL << 28)      /*!< 0x00000000 */
#define RCC_CFGR_MCOPRE_VALUE_1                 (0x1UL << 28)      /*!< 0x10000000 */
#define RCC_CFGR_MCOPRE_VALUE_2                 (0x2UL << 28)      /*!< 0x20000000 */
#define RCC_CFGR_MCOPRE_VALUE_3                 (0x3UL << 28)      /*!< 0x30000000 */
#define RCC_CFGR_MCOPRE_VALUE_4                 (0x4UL << 28)      /*!< 0x40000000 */
/* -------------------------------------------------------------------------------- */



/* -------------------------------------------------------------------------------- */

struct RCC_Registers_def{
	  __IO uint32_t RCC_CR;
	  __IO uint32_t RCC_ICSCR;
	  __IO uint32_t RCC_CFGR;
	  __IO uint32_t RCC_PLLCFGR;
	  __IO uint32_t RCC_PLLSAI1CFGR;
	  __IO uint32_t RCC_PLLSAI2CFGR;
	  __IO uint32_t RCC_CIER;
	  __I  uint32_t RCC_CIFR;
	  __O  uint32_t RCC_CICR;
	  __IO uint32_t RCC_AHB1RSTR;
	  __IO uint32_t RCC_AHB2RSTR;
	  __IO uint32_t RCC_AHB3RSTR;
	  __IO uint32_t RCC_APB1RSTR1;
	  __IO uint32_t RCC_APB1RSTR2;
	  __IO uint32_t RCC_APB2RSTR;
	  __IO uint32_t RCC_AHB1ENR;
	  __IO uint32_t RCC_AHB2ENR;
	  __IO uint32_t RCC_AHB3ENR;
	  __IO uint32_t RCC_APB1ENR1;
	  __IO uint32_t RCC_APB1ENR2;
	  __IO uint32_t RCC_APB2ENR;
	  __IO uint32_t RCC_AHB1SMENR;
	  __IO uint32_t RCC_AHB2SMENR;
	  __IO uint32_t RCC_AHB3SMENR;
	  __IO uint32_t RCC_APB1SMENR1;
	  __IO uint32_t RCC_APB1SMENR2;
	  __IO uint32_t RCC_APB2SMENR;
	  __IO uint32_t RCC_CCIPR;
	  __IO uint32_t RCC_BDCR;
	  __IO uint32_t RCC_CSR;
	  __IO uint32_t RCC_CRRCR;
	  __IO uint32_t RCC_CCIPR2;

 }__attribute__((packed));

/* --------------------------  END RCC Section -------------------------- */

#endif /* L0_UTILS_STM32_L475XX_HPP_ */
