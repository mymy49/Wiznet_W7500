////////////////////////////////////////////////////////////////////////////////////////
//
// 저작권 표기 License V3.3
//
// 본 소스 코드는 아래 사항에 동의할 경우에 사용 가능합니다.
// 아래 사항에 대해 동의하지 않거나 이해하지 못했을 경우 사용을 금합니다.
//
// 본 소스 코드를 :
//		- 사용하였다면 아래 사항을 모두 동의하는 것으로 자동 간주 합니다.
//		- 상업적 또는 비 상업적 이용이 가능합니다.
//		- 본 저작권 표시 주석을 제외한 코드의 내용을 임의로 수정하여 사용하는 것은 허용합니다.
//		- 사용자가 수정한 코드를 사용자의 고객사에게 상호간 전달은 허용합니다.
//		- 그러나 수정하여 다수에게 재배포하는 행위를 금지합니다. 
//		- 사용으로 인해 발생하는 모든 사고에 대해서 어떠한 법적 책임을 지지 않습니다.
//		- 어떤 형태의 기여든지, 그것은 기증으로 받아들입니다.
//
// 본 소스 코드는 프리웨어로 앞으로도 유료로 전환하지 않을 것입니다.
// 사용자 또는 부품의 제조사가 요구하는 업데이트가 있을 경우 후원금을 받아 
// 요구하는 사항을 업데이트 할 예정입니다.
//
// Home Page : http://cafe.naver.com/yssoperatingsystem
// Copyright 2024. 홍윤기 all right reserved.
//
////////////////////////////////////////////////////////////////////////////////////////

#ifndef YSS_DRV_GPIO__H_
#define YSS_DRV_GPIO__H_

#include "peripheral.h"
#include <stdint.h>

#if defined(STM32L1)

#include "gpio/define_gpio_stm32l1.h"

typedef volatile uint32_t		YSS_GPIO_Peri;

#elif defined(GD32F4)

#include <targets/st_gigadevice/define_gpio_gd32f4.h>

typedef volatile uint32_t		YSS_GPIO_Peri;

#elif defined(NRF52840_XXAA)

#include <targets/nordic/define_gpio_nrf52840.h>

typedef NRF_GPIO_Type			YSS_GPIO_Peri;

#elif defined(EFM32PG22) || defined(EFR32BG22)

typedef GPIO_TypeDef			YSS_GPIO_Peri;
#define GpioTargetHeaderFile	<targets/siliconlabs/class_gpio_efm32pg22_efr32bg22.h>

#elif defined(STM32F7) || defined(STM32F1) || defined(STM32F4) || defined(STM32F0) || defined(GD32F1) || defined(STM32G4)

typedef GPIO_TypeDef			YSS_GPIO_Peri;
#define GpioTargetHeaderFile	<targets/st/class_gpio_stm32.h>

#elif defined(W7500)

typedef GPIO_TypeDef			YSS_GPIO_Peri;
#define GpioTargetHeaderFile	<targets/wiznet/class_gpio_w7500x.h>

#elif defined(CPU_MIMXRT1011DAE5A)

typedef GPIO_Type				YSS_GPIO_Peri;
#define GpioTargetHeaderFile	<targets/nxp/class_gpio_mimxrt.h>

#else

typedef volatile uint32_t		YSS_GPIO_Peri;

#define YSS_DRV_GPIO_UNSUPPORTED

#endif

#include "Drv.h"

class Gpio;

class GpioBase : public Drv
{
public :
	struct AltFunc
	{
		YSS_GPIO_Peri *port;
		uint8_t pin;
		uint8_t func;
	};

	struct Pin
	{
		Gpio *port;
		uint8_t pin;
	};

	// 아래 함수는 시스템 함수로 사용자 호출을 금한다.
	GpioBase(const Drv::setup_t drvSetup) : Drv(drvSetup) {}
};

#include GpioTargetHeaderFile

#endif

