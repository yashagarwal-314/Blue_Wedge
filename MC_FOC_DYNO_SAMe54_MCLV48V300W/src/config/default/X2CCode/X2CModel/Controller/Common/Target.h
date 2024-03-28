/**
 * @file
 * @brief Common includes, macros and type definitions.
 */
/*
 * Copyright (c) 2013, Linz Center of Mechatronics GmbH (LCM) http://www.lcm.at/
 * All rights reserved.
 */
/*
 * This file is licensed according to the BSD 3-clause license as follows:
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the "Linz Center of Mechatronics GmbH" and "LCM" nor
 *       the names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL "Linz Center of Mechatronics GmbH" BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 * This file is part of X2C. http://x2c.lcm.at/
 * $LastChangedRevision: 2912 $
 * $LastChangedDate:: 2023-08-24 17:57:58 +0200#$
 */
#ifndef TARGET_H
#define TARGET_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__GENERIC_TI_C28X__)
#define __GENERIC_DEVICE_TYPE__
#define __DATA_WIDTH_16BIT__
#define __ADDRESS_WIDTH_32BIT__

#elif defined(__GENERIC_ARM_ARMV7__) || defined(__GENERIC_ARM_ARMV6__) || defined(__GENERIC_MICROCHIP_PIC32__)
#define __GENERIC_DEVICE_TYPE__
#define __DATA_WIDTH_8BIT__
#define __ADDRESS_WIDTH_32BIT__

#elif defined(__GENERIC_MICROCHIP_DSPIC__) || defined(__GENERIC_MICROCHIP_PIC24__)
#define __GENERIC_DEVICE_TYPE__
#define __DATA_WIDTH_8BIT__
#define __ADDRESS_WIDTH_16BIT__

#elif defined(__GENERIC_X86__)
#define __GENERIC_DEVICE_TYPE__
#define __DATA_WIDTH_8BIT__
#define __ADDRESS_WIDTH_32BIT__

#endif

#if defined(__GENERIC_DEVICE_TYPE__)
#if defined(__CUSTOM_DATATYPE_DEFINITIONS__)
#include "X2cDataTypes.h"
#else
#include <stdint.h>
#include <stdbool.h>    /* support for boolean datatype */
#include <string.h>     /* support for memcpy among other commands */
#if defined(__GENERIC_TI_C28X__)
typedef unsigned char uint8;
typedef signed char int8;
#else
typedef int8_t int8;
typedef uint8_t uint8;
#endif
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef int64_t int64;
typedef uint64_t uint64;
typedef float float32;
/* most compilers define long double as 64-bit float implementation */
typedef long double float64;
#endif
#endif


#if !defined(__GENERIC_DEVICE_TYPE__)

/* processor types */
/* TI processors */
#if defined(__TMS320F28069__)
#define __TMS320F2806X__
#elif defined(__TMS320F28035__) || defined(__TMS320F28034__)
#define __TMS320F2803X__
#elif defined(__TMS320F28027__)
#define __TMS320F2802X__
#elif defined(__TMS320F28335__)
#define __TMS320F2833X__
#elif defined(__TMS320F2808__)
#define __TMS320F280X__
#elif defined(__TMS320F2811__)
#define __TMS320F281X__
#elif defined(__TM4C123GH6__) || defined(__TM4C123BE6__) || defined(__TM4C1294NC__)
#define __SERIES_TM4C__
#elif defined(X2C_TMS320F28379D)
#define X2C_SERIES_TMS32F2837X
#elif defined(X2C_TMS320F280039) || defined(X2C_TMS320F280037)
#define X2C_SERIES_TMS320F28003X
#elif defined(X2C_TMS320F280049) || defined(X2C_TMS320F280041)
#define X2C_SERIES_TMS320F28004X
#elif defined(X2C_TMS320F2800137)
#define X2C_SERIES_TMS320F280013X
#elif defined(X2C_TMS320F28388D) || defined(X2C_TMS320F28386D)
#define X2C_SERIES_TMS320F2838X

/* ST processors */
#elif defined(__STM32F103ZC__) || defined(__STM32F103T6__) || defined(__STM32F103VB__) || defined(__STM32F103V8__) || \
defined(__STM32F100C6__) || defined(__STM32F103RB__) || defined(X2C_STM32F103RB)
#define __SERIES_STM32F1__
#elif defined(__STM32F407ZG__) || defined(__STM32F407ZE__) || defined(__STM32F407VG__) || defined(X2C_STM32F446VE) || defined(X2C_STM32F446RE) || \
    defined(X2C_STM32F407VE)
#define __SERIES_STM32F4__
#define X2C_SERIES_STM32F4
#elif defined(__STM32F051R8__) || defined(__STM32F051C8__) || defined(X2C_STM32F072RB)
#define __SERIES_STM32F0__
#elif defined(__STM32F303RE__) || defined(__STM32F303RB__) || defined(__STM32F302RD__) || defined(X2C_STM32F302R8)
#define __SERIES_STM32F3__
#elif defined(X2C_STM32G0B1RE) || defined(X2C_STM32G0B1RB)
#define X2C_SERIES_STM32G0
#elif defined(X2C_STM32G474RE) || defined(X2C_STM32G474RB) || defined(X2C_STM32G474ME)
#define X2C_SERIES_STM32G4

/* Renesas processors */
#elif defined(__RX62T__) || defined(__R5F562TA__)
#include <iorx62t.h>
#define __RX6XX__
#elif defined(__RX62G__) || defined(__R5F562GA__)
#include <iorx62g.h>
#define __RX6XX__

/* Freescale processors */
#elif defined(__MPC5643L__)
#include <MPC5643L.h>
#define __SERIES_MPC5__

#elif defined(__KECONTROL__)
#define __SERIES_KECONTROL__

#elif defined(X2C_DSPIC33CK256MP505)
#define X2C_SERIES_DSPIC33C
#elif defined(__DSPIC33EP256MC506__) || defined(__DSPIC33EP128GP502__) || defined(__DSPIC33EP32GP502__) || \
defined(__DSPIC33EP256GP502__) || defined(__DSPIC33EP256MC502__) || defined(__DSPIC33EP128MC202__) || \
defined(__DSPIC33EP128GM604__) || defined(X2C_DSPIC33EP512GM604)
#define __SERIES_DSPIC33E__
#elif defined(__DSPIC33FJ12GP202__) || defined(__DSPIC33FJ128MC802__)
#define __SERIES_DSPIC33F__
#elif defined(__PIC32MZ2048EC__)
#define __SERIES_PIC32MZ__
#elif defined(__PIC32MX170F256__)
#define __SERIES_PIC32MX__

#elif defined(__XMC4800F144K2048__) || defined(__XMC4800F100K2048__) || defined(X2C_XMC4800F144K2048) || defined(X2C_XMC4800F100K2048)
#define X2C_SERIES_XMC4800

#elif defined(__XMC4700F144K2048__) || defined(__XMC4700F100K2048__) || defined(X2C_XMC4700F144K2048)
#define X2C_SERIES_XMC4700

#elif defined(__XMC4400F100K512__) || defined(X2C_XMC4400F100K512)
#define X2C_SERIES_XMC4400

#elif defined(__XMC4500F100K1024__) || defined(X2C_XMC4500F100K1024)
#define X2C_SERIES_XMC4500

#elif defined(X2C_TC387QP)
#define X2C_SERIES_TC3XX

#elif defined(MATLAB_MEX_FILE)
#define __MATLAB__

#elif defined(SCILAB_SIM_FILE)
#define __SCILAB__

#else
#error PROCESSOR TYPE NOT DEFINED
#endif

/* TI processor family */
#if defined(__TMS320F2806X__) || defined(__TMS320F2803X__) || defined(__TMS320F2833X__) || defined(__TMS320F280X__) || \
	defined(__TMS320F281X__) || defined(__TMS320F2802X__) || defined(X2C_SERIES_TMS32F2837X) || defined(X2C_SERIES_TMS320F28004X) || \
	defined(X2C_SERIES_TMS320F2838X) || defined(X2C_SERIES_TMS320F28003X) || defined(X2C_SERIES_TMS320F280013X)
#define __C2000__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_16BIT__

#elif defined(__SERIES_TM4C__)
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(__STM32F100XX__) || defined(__STM32F103XX__)
#define __STM32F10XXX__
#define __SERIES_STM32F1__
#define __VENDOR_ST__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(X2C_SERIES_STM32F4) || defined(__SERIES_STM32F0__) || defined(__SERIES_STM32F1__) || defined(__SERIES_STM32F3__) || \
    defined(X2C_SERIES_STM32G0) || defined(X2C_SERIES_STM32G4)
#define __VENDOR_ST__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(__RX6XX__)
#define __RENESAS_RX__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(__SERIES_DSPIC33E__) || defined(__SERIES_DSPIC33F__) || defined(X2C_SERIES_DSPIC33C)
#define __VENDOR_MICROCHIP__
#define __ADDRESS_WIDTH_16BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(__SERIES_PIC32MZ__) || defined(__SERIES_PIC32MX__)
#define __VENDOR_MICROCHIP__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(__SERIES_MPC5__)
#define __VENDOR_FREESCALE__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(__SERIES_KECONTROL__)
#define __VENDOR_KEBA__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(X2C_SERIES_XMC4800) || defined(X2C_SERIES_XMC4700) || defined(X2C_SERIES_XMC4400) || defined(X2C_SERIES_XMC4500)
#define __VENDOR_INFINEON__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(X2C_SERIES_TC3XX)
#define __VENDOR_INFINEON__
#define __ADDRESS_WIDTH_32BIT__
#define __DATA_WIDTH_8BIT__

#elif defined(__MATLAB__) || defined(__SCILAB__)
/* do nothing, just prevent compiler errors in Matlab/Scilab */
#else
#error PROCESSOR TYPE NOT DEFINED
#endif

/* compiler information */
#if defined(__C2000__) || defined(__SERIES_TM4C__)
#define __COMPILER_TI__

#elif defined(__VENDOR_ST__)
#define __COMPILER_ST__

#elif defined(__RENESAS_RX__)
#define __COMPILER_IAR_EW__

#elif defined(__MATLAB__)
#define __COMPILER_MATLAB__

#elif defined(__SCILAB__)
#define __COMPILER_SCILAB__

#elif defined(__VENDOR_MICROCHIP__)
#define __COMPILER_MICROCHIP__

#elif defined(__VENDOR_FREESCALE__) || defined(__VENDOR_KEBA__) || defined(__VENDOR_INFINEON__)
/* just avoid compiler error */

#else
#error PROCESSOR TYPE NOT DEFINED
#endif


/* includes, system information etc. */
#if defined(__TMS320F2806X__)
#include "F2806x_Device.h"
#define KICK_DOG \
	do { \
		EALLOW; \
		SysCtrlRegs.WDKEY = (uint16)0x0055; \
		SysCtrlRegs.WDKEY = (uint16)0x00AA; \
		EDIS; \
	} while (0)
#elif defined(__TMS320F2803X__)
#include "DSP2803x_Device.h"
#define KICK_DOG \
	do { \
		EALLOW; \
		SysCtrlRegs.WDKEY = (uint16)0x0055; \
		SysCtrlRegs.WDKEY = (uint16)0x00AA; \
		EDIS; \
	} while (0)
#elif defined(__TMS320F2802X__)
#include "F2802x_Device.h"
#define KICK_DOG \
	do { \
		EALLOW; \
		SysCtrlRegs.WDKEY = (uint16)0x0055; \
		SysCtrlRegs.WDKEY = (uint16)0x00AA; \
		EDIS; \
	} while (0)
#elif defined(__TMS320F2833X__)
#include "DSP2833x_Device.h"
#define KICK_DOG \
	do { \
		EALLOW; \
		SysCtrlRegs.WDKEY = (uint16)0x0055; \
		SysCtrlRegs.WDKEY = (uint16)0x00AA; \
		EDIS; \
	} while (0)
#elif defined(__TMS320F280X__)
#include "DSP280x_Device.h"
#define KICK_DOG \
	do { \
		EALLOW; \
		SysCtrlRegs.WDKEY = (uint16)0x0055; \
		SysCtrlRegs.WDKEY = (uint16)0x00AA; \
		EDIS; \
	} while (0)
#elif defined(__TMS320F281X__)
#include "DSP281x_Device.h"
#define KICK_DOG \
	do { \
		EALLOW; \
		SysCtrlRegs.WDKEY = (uint16)0x0055; \
		SysCtrlRegs.WDKEY = (uint16)0x00AA; \
		EDIS; \
	} while (0)
#elif defined(__STM32F10XXX__)
	#include "stm32f10x_lib.h"
	#define KICK_DOG \
		do { \
			IWDG_ReloadCounter(); \
		} while (0)
#elif defined(__SERIES_STM32F1__)
	#include "stm32f10x.h"
	#define KICK_DOG \
		do { \
			IWDG_ReloadCounter(); \
		} while (0)
#elif defined(X2C_SERIES_STM32F4)
#if defined(USE_HAL_DRIVER)
#define KICK_DOG \
	do { \
		HAL_IWDG_Refresh(&hiwdg); \
	} while (0)
#elif defined(USE_FULL_LL_DRIVER)
#include "stm32f4xx_ll_iwdg.h"
#define KICK_DOG \
    do { \
        LL_IWDG_ReloadCounter(IWDG); \
    } while (0)
#else
	#include "stm32f4xx.h"
	#define KICK_DOG \
		do { \
			IWDG_ReloadCounter(); \
		} while (0)
#endif
#elif defined(__SERIES_STM32F0__)
#if defined(USE_HAL_DRIVER)
#define KICK_DOG \
	do { \
		HAL_IWDG_Refresh(&hiwdg); \
	} while (0)
#else
	#include "stm32f0xx.h"
	#define KICK_DOG \
		do { \
			IWDG_ReloadCounter(); \
		} while (0)
#endif
#elif defined(__SERIES_STM32F3__)
#if defined(USE_HAL_DRIVER)
#define KICK_DOG \
	do { \
		HAL_IWDG_Refresh(&hiwdg); \
	} while (0)
#else
	#include "stm32f30x.h"
	#define KICK_DOG \
		do { \
			IWDG_ReloadCounter(); \
		} while (0)
#endif
#elif defined(X2C_SERIES_STM32G0)
#if defined(USE_HAL_DRIVER)
#define KICK_DOG \
	do { \
		HAL_IWDG_Refresh(&hiwdg); \
	} while (0)
#elif defined(USE_FULL_LL_DRIVER)
#include "stm32g0xx_ll_iwdg.h"
#define KICK_DOG \
    do { \
        LL_IWDG_ReloadCounter(IWDG); \
    } while (0)
#endif
#elif defined(X2C_SERIES_STM32G4)
#if defined(USE_HAL_DRIVER)
#define KICK_DOG \
	do { \
		HAL_IWDG_Refresh(&hiwdg); \
	} while (0)
#elif defined(USE_FULL_LL_DRIVER)
#include "stm32g4xx_ll_iwdg.h"
#define KICK_DOG \
    do { \
        LL_IWDG_ReloadCounter(IWDG); \
    } while (0)
#endif
#elif defined(__RENESAS_RX__)
#define KICK_DOG \
          do { \
          } while (0)
#elif defined(__VENDOR_MICROCHIP__)
#include <xc.h>
#if defined(__XC32__)
#define KICK_DOG \
    do { \
        WDTCONSET = 0x01; \
    } while (0)
#else
#define KICK_DOG \
    do { \
        ClrWdt(); \
    } while (0)
#endif

#elif defined(__SERIES_MPC5__)
#define KICK_DOG \
	do { \
		SWT.SR.B.WSC = 0xA602; \
		SWT.SR.B.WSC = 0xB480; \
	} while (0)
#elif defined(__SERIES_TM4C__)
#include <stdint.h>
#include <stdbool.h>
#include <driverlib/pin_map.h>
#include <driverlib/uart.h>
#include <driverlib/watchdog.h>
#include <driverlib/sysctl.h>
#include <driverlib/uart.h>
#include <driverlib/gpio.h>
#include <driverlib/flash.h>
#include <driverlib/interrupt.h>
#include <driverlib/timer.h>
#include <inc/hw_memmap.h>
#ifndef WATCHDOG_RESET_VALUE
#define WATCHDOG_RESET_VALUE ((uint32)400000)
#endif
#define KICK_DOG \
	do { \
		WatchdogUnlock(WATCHDOG0_BASE); \
		WatchdogReloadSet(WATCHDOG0_BASE, WATCHDOG_RESET_VALUE); \
		WatchdogLock(WATCHDOG0_BASE); \
	} while(0)
/* disables watchdog reset */
#define DISABLE_WATCHDOG_RESET \
	do { \
		WatchdogUnlock(WATCHDOG0_BASE); \
		WatchdogResetDisable(WATCHDOG0_BASE); \
		WatchdogLock(WATCHDOG0_BASE); \
	} while(0)

/* enables watchdog reset */
#define ENABLE_WATCHDOG_RESET \
	do { \
		WatchdogUnlock(WATCHDOG0_BASE); \
		WatchdogResetEnable(WATCHDOG0_BASE); \
		WatchdogLock(WATCHDOG0_BASE); \
	} while(0)


#elif defined(X2C_SERIES_TC3XX)
#include "IfxScuWdt.h"
#define KICK_DOG \
    do { \
        IfxScuWdt_serviceSafetyWatchdog(IfxScuWdt_getSafetyWatchdogPassword()); \
    } while(0)
#elif defined(__VENDOR_INFINEON__)
#include <DAVE.h>
#define KICK_DOG \
	do { \
		WATCHDOG_ClearAlarm(); \
		WATCHDOG_Service(); \
} while(0)
#elif defined(X2C_SERIES_TMS32F2837X)
#include <stdint.h>
#include <stdbool.h>

#include "F2837xD_device.h"

#include "inc/hw_memmap.h"

#include "adc.h"
#include "asysctl.h"
#include "can.h"
#include "cla.h"
#include "clb.h"
#include "cmpss.h"
#include "cpu.h"
#include "cputimer.h"
#include "dac.h"
#include "dcsm.h"
#include "debug.h"
#include "dma.h"
#include "ecap.h"
#include "emif.h"
#include "epwm.h"
#include "eqep.h"
#include "flash.h"
#include "gpio.h"
#include "hrpwm.h"
#include "i2c.h"
#include "interrupt.h"
#include "mcbsp.h"
#include "memcfg.h"
#include "pin_map.h"
#include "sci.h"
#include "sdfm.h"
#include "spi.h"
#include "sysctl.h"
#include "upp.h"
#include "version.h"
#include "xbar.h"

/*
 * Attention: All watchdog functions issue an EALLOW and EDIS before and after the command itself.
 * Calling these functions within an EALLOW-EDIS section requires the user to add an EALLOW after each of these macros.
 */
#define KICK_DOG SysCtl_serviceWatchdog()
#define disableWatchdog SysCtl_disableWatchdog
#define enableWatchdog SysCtl_enableWatchdog
#define disableInterrupts Interrupt_disableMaster

#elif defined(X2C_SERIES_TMS320F28004X)
#include "f28004x_device.h"

#include "adc.h"
#include "asysctl.h"
#include "can.h"
#include "cla.h"
#include "clapromcrc.h"
#include "clb.h"
#include "cmpss.h"
#include "cpu.h"
#include "cputimer.h"
#include "dac.h"
#include "dcc.h"
#include "dcsm.h"
#include "debug.h"
#include "dma.h"
#include "ecap.h"
#include "epwm.h"
#include "eqep.h"
#include "flash.h"
#include "fsi.h"
#include "gpio.h"
#include "hrcap.h"
#include "hrpwm.h"
#include "i2c.h"
#include "interrupt.h"
#include "lin.h"
#include "memcfg.h"
#include "pga.h"
#include "pin_map.h"
#include "pmbus.h"
#include "sci.h"
#include "sdfm.h"
#include "spi.h"
#include "sysctl.h"
#include "version.h"
#include "xbar.h"

#define KICK_DOG SysCtl_serviceWatchdog()
#define disableWatchdog SysCtl_disableWatchdog
#define disableInterrupts Interrupt_disableMaster

#elif defined(X2C_SERIES_TMS320F2838X)

#include "inc/hw_memmap.h"

#include "adc.h"
#include "asysctl.h"
#include "bgcrc.h"
#include "can.h"
#include "cla.h"
#include "clb.h"
#include "cmpss.h"
#include "cpu.h"
#include "cputimer.h"
#include "dac.h"
#include "dcc.h"
#include "dcsm.h"
#include "debug.h"
#include "dma.h"
#include "ecap.h"
#include "emif.h"
#include "epwm.h"
#include "eqep.h"
#include "erad.h"
#include "escss.h"
#include "flash.h"
#include "fsi.h"
#include "gpio.h"
#include "hrcap.h"
#include "hrpwm.h"
#include "i2c.h"
#include "interrupt.h"
#include "ipc.h"
#include "mcan.h"
#include "mcbsp.h"
#include "memcfg.h"
#include "pin_map.h"
#include "sci.h"
#include "sdfm.h"
#include "spi.h"
#include "sysctl.h"
#include "usb.h"
#include "xbar.h"

#define KICK_DOG SysCtl_serviceWatchdog()
#define disableWatchdog SysCtl_disableWatchdog
#define disableInterrupts Interrupt_disableMaster

#elif defined(X2C_SERIES_TMS320F28003X)
#include <sysctl.h>
#define KICK_DOG \
    do { \
        SysCtl_serviceWatchdog(); \
    } while (0)

#elif defined(X2C_SERIES_TMS320F280013X)
#include <sysctl.h>
#define KICK_DOG \
    do { \
        SysCtl_serviceWatchdog(); \
    } while (0)

#elif defined(__MATLAB__) || defined(__SCILAB__) || defined(__VENDOR_KEBA__)
/* do nothing, just avoid compiler errors */
#else
#error PROCESSOR TYPE NOT DEFINED
#endif

/* datatype definitions */
#if defined(__MATLAB__) || defined(__SCILAB__)
#if defined(_WIN32) || defined(_WIN64) || defined(__linux__)
#if defined(__MATLAB__)
#include <tmwtypes.h>
#elif defined(__SCILAB__)
typedef char bool;
#define false ((char)0)
#define true  (!false)
#endif	  
typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int16;
typedef unsigned short uint16;
typedef signed long int32;
typedef unsigned long uint32;
typedef signed long long int64;
typedef unsigned long long uint64;
typedef float float32;
typedef double float64;
#else
#error UNSUPPORTED ARCHITECTURE
#endif
#elif defined(__TMS320F2806X__) || defined(__TMS320F2833X__) || \
	defined(__TMS320F280X__) || defined(__TMS320F281X__)
#include <stdbool.h>    /* support for boolean datatype */														  
/* int16, int32, int64 already defined in TI header files */
typedef signed char int8;
typedef unsigned char uint8;
typedef unsigned int uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;
#elif defined(__TMS320F2803X__) || defined(__TMS320F2802X__)
#include <stdbool.h>    /* support for boolean datatype */														  
/* int16, int32 already defined in TI header file */
typedef signed char int8;
typedef long long int64;
typedef unsigned char uint8;
typedef unsigned int uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;
#elif defined(X2C_SERIES_TMS32F2837X)
#include <stdbool.h>    /* support for boolean datatype */
#include <stdint.h>
/* int16, int32, int64, float32, float64 already defined in TI files */
typedef int8_t int8;
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
#elif defined(X2C_SERIES_TMS320F28004X)
#include <stdbool.h>
#include <stdint.h>
typedef int_least8_t int8_t;
typedef uint_least8_t uint8_t;

// ToDo: remove uintX and intX type definitions once the *_t types are fully established!
/* int16, int32, int64 already defined in TI header files */
typedef int_least8_t int8;
typedef uint_least8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

#elif defined(X2C_SERIES_TMS320F2838X)
#include <stdbool.h>
#include <stdint.h>
/* int16, int32, int64 already defined in TI header files */
typedef int_least8_t int8;
typedef uint_least8_t uint8;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int64_t int64;
typedef float float32;
typedef double float64;

#elif defined(X2C_SERIES_TMS320F28003X) || defined(X2C_SERIES_TMS320F280013X)
#include <stdbool.h>
#include <stdint.h>
typedef bool bool_t;

// ToDo: remove uintX and intX type definitions once the *_t types are fully established!
typedef int_least8_t int8;
typedef uint_least8_t uint8;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int64_t int64;
typedef float float32;
typedef double float64;

#elif defined(__RENESAS_RX__) || \
  defined(__SERIES_STM32F0__) || defined(__SERIES_STM32F1__) || defined(__SERIES_STM32F3__) || defined(X2C_SERIES_STM32F4) || \
  defined(X2C_SERIES_STM32G0) || defined(X2C_SERIES_STM32G4) || \
  defined(__SERIES_TM4C__) || \
  defined(__SERIES_KECONTROL__) ||\
  defined(X2C_SERIES_XMC4800) || defined(X2C_SERIES_XMC4700) || defined(X2C_SERIES_XMC4400) || defined(X2C_SERIES_XMC4500)
#include <stdint.h>
#include <stdbool.h>    /* support for boolean datatype */
#include <string.h>		/* support for memcpy (amongst other things) */
typedef int8_t int8;
typedef uint8_t uint8;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef int64_t int64;
typedef uint64_t uint64;
typedef float float32;
typedef double float64;
#elif defined(__SERIES_DSPIC33E__) || defined(__SERIES_DSPIC33F__) || defined(X2C_SERIES_DSPIC33C) || \
  defined(__SERIES_PIC32MZ__) || defined(__SERIES_PIC32MX__)
#include <stdint.h>
#include <stdbool.h>    /* support for boolean datatype */
#include <string.h>		/* support for memcpy (amongst other things) */
typedef int8_t int8;
typedef uint8_t uint8;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef int64_t int64;
typedef uint64_t uint64;
typedef float float32;
typedef long double float64;    /* the microchip compilers interpret double as 32bit float by default -> long double needed for 64bit float */
#elif defined(__SERIES_MPC5__)
#include <stdint.h>
#include <stdbool.h>
typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int16;
typedef unsigned short uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef signed long long int64;
typedef unsigned long long uint64;
typedef float float32;
typedef double float64;
#elif defined(X2C_SERIES_TC3XX)
#include <stdbool.h>
#include "Platform_Types.h"
typedef sint8 int8;
typedef sint16 int16;
typedef sint32 int32;
typedef sint64 int64;
#else
#error PROCESSOR TYPE NOT DEFINED
#endif

#endif

/* type definition used by C conversion functions */
#ifdef USE_FLOAT64_CONV_FNC
typedef float64 float_CoT;
#else
typedef float32 float_CoT;
#endif

#include "Typecast.h"

/* limits for INT8 values */
#ifndef INT8_MAX
#define INT8_MAX ((int8)127)
#endif
#ifndef INT8_MIN
#define INT8_MIN ((int8)-128)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX ((uint8)255)
#endif

/* limits for INT16 values */
#ifndef INT16_MAX
#define INT16_MAX ((int16)32767)
#endif
#ifndef INT16_MIN
#define INT16_MIN ((int16)-32768)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX ((uint16)65535)
#endif

/* limits for INT32 values */
#ifndef INT32_MAX
#define INT32_MAX ((int32)2147483647)
#endif
#ifndef INT32_MIN
#define INT32_MIN ((int32)-2147483648)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX ((uint32)4294967295)
#endif

/* limits for INT64 values */
#ifndef INT64_MAX
#define INT64_MAX ((int64)9223372036854775807)
#endif
#ifndef INT64_MIN
#define INT64_MIN ((int64)-9223372036854775808)
#endif
#ifndef UINT64_MAX
#define UINT64_MAX ((uint64)18446744073709551615)
#endif

/* limits for FLOAT32 values */
#ifndef FLOAT32_MAX
#define FLOAT32_MAX	 ((float32)3.4028234663852885981170418348452e+38)
#endif
#ifndef FLOAT32_MIN
#define FLOAT32_MIN	 ((float32)-3.4028234663852885981170418348452e+38)
#endif

/* limits for FLOAT64 values */
#if defined(__COMPILER_TI__)
#ifndef FLOAT64_MAX
#define FLOAT64_MAX	  ((float64)3.4028234663852885981170418348452e+38)
#endif
#ifndef FLOAT64_MIN
#define FLOAT64_MIN	  ((float64)-3.4028234663852885981170418348452e+38)
#endif
#else
#ifndef FLOAT64_MAX
#define FLOAT64_MAX	  ((float64)1.797693134862315708145274237317e+308)
#endif
#ifndef FLOAT64_MIN
#define FLOAT64_MIN	  ((float64)-1.797693134862315708145274237317e+308)
#endif
#endif

/* limits for INT15 values */
#define INT15_MAX ((int16)16383)
#define INT15_MIN ((int16)-16384)

/* limits for INT30 values */
#define INT30_MAX ((int32)536870911)
#define INT30_MIN ((int32)-536870912)
#define UINT30_MAX ((uint32)1073741823)

/* limits for INT31 values */
#define INT31_MAX ((int32)1073741823)
#define INT31_MIN ((int32)-1073741824)
#define UINT31_MAX ((uint32)2147483647)

/* limits for INT63 values */
#define INT63_MAX ((int64)4611686018427387903)
#define INT63_MIN ((int64)-4611686018427387904)

/* floating point constants */
#define PI_R32		((float32)3.1415926535897932384626433832795028841971693993751058209749445923078164062)
#define PI_R64		((float64)3.1415926535897932384626433832795028841971693993751058209749445923078164062)

typedef enum typeclass_t {
	TYPE_INT8,
	TYPE_UINT8,
	TYPE_INT16,
	TYPE_UINT16,
	TYPE_INT32,
	TYPE_UINT32,
	TYPE_INT64,
	TYPE_UINT64,
	TYPE_FLOAT32,
	TYPE_FLOAT64,
	TYPE_BOOL
} TypeClass;

#ifdef __cplusplus
}
#endif

#endif
