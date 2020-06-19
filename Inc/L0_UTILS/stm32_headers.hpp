/*
 * stm32_headers.hpp
 *
 *  Created on: May 2, 2020
 *      Author: venkatapokkuluri
 */

#ifndef L0_UTILS_STM32_HEADERS_HPP_
#define L0_UTILS_STM32_HEADERS_HPP_


#include <stddef.h>
#include <stdint.h>


#ifdef __cplusplus
  #define   __I     volatile             /*!< Defines 'read only' permissions                 */
#else
  #define   __I     volatile const       /*!< Defines 'read only' permissions                 */
#endif
#define     __O     volatile             /*!< Defines 'write only' permissions                */
#define     __IO    volatile             /*!< Defines 'read / write' permissions              */


#define MULTIBIT_SET(reg, mask, value) (((reg)&((0xFFFFFFFF)^(mask)))|((value)&(mask)))
#define SET_BIT(reg, mask) (reg | mask)
#define CLEAR_BIT(reg, mask) (reg & ~(mask))

#endif /* L0_UTILS_STM32_HEADERS_HPP_ */
