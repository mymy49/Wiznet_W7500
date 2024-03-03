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

#include <config.h>
#include <yss/instance.h>

#include <drv/peripheral.h>

#ifndef YSS_DRV_TIMER_UNSUPPORTED
static uint64_t gYssTimeSum;
static uint32_t gOverFlowCnt;
#if !(defined(STM32F7) || defined(STM32G4))
static bool gPreUpdateFlag;
#endif

static void isr(void)
{
#if defined(STM32F7) || defined(STM32G4)
	gYssTimeSum += gOverFlowCnt;
#else
	if (!gPreUpdateFlag)
		gYssTimeSum += gOverFlowCnt;
	else
		gPreUpdateFlag = false;
#endif
}
#endif

void initializeSystemTime(void)
{
#ifndef YSS_DRV_TIMER_UNSUPPORTED
	YSS_TIMER.enableClock();
	YSS_TIMER.initializeAsSystemRuntime();
	gOverFlowCnt = YSS_TIMER.getOverFlowCount();
	YSS_TIMER.setUpdateIsr(isr);
	YSS_TIMER.start();
	YSS_TIMER.enableInterrupt();
#endif
}

namespace runtime
{
uint64_t gLastRequestTime;

uint32_t getSec(void)
{
#if defined(STM32F7) || defined(STM32G4)
	__disable_irq();
	register uint64_t sum = gYssTimeSum, time = YSS_TIMER.getCounterValue();
	__enable_irq();

	// 타이머 인터럽트 지연으로 인한 시간 오류 발생 보완용
	if(time & 0x80000000)
		return ((time & 0x7FFFFFFF) + gOverFlowCnt + sum) / 1000000;
	else
		return (time + sum) / 1000000;
#elif !defined(YSS_DRV_TIMER_UNSUPPORTED)
	__disable_irq();
	register uint64_t time = gYssTimeSum + YSS_TIMER.getCounterValue();

	// 타이머 인터럽트 지연으로 인한 시간 오류 발생 보완용
	if (time < gLastRequestTime)
	{
		gYssTimeSum += gOverFlowCnt;
		time += gOverFlowCnt;
		gPreUpdateFlag = true;
	}
	gLastRequestTime = time;
	__enable_irq();

	return time / 1000000;
#else
	return 0;
#endif
}

uint64_t getMsec(void)
{
#if defined(STM32F7) || defined(STM32G4)
	__disable_irq();
	register uint64_t sum = gYssTimeSum, time = YSS_TIMER.getCounterValue();
	__enable_irq();

	// 타이머 인터럽트 지연으로 인한 시간 오류 발생 보완용
	if(time & 0x80000000)
		return ((time & 0x7FFFFFFF) + gOverFlowCnt + sum) / 1000;
	else
		return (time + sum) / 1000;
#elif !defined(YSS_DRV_TIMER_UNSUPPORTED)
	__disable_irq();
	register uint64_t time = gYssTimeSum + YSS_TIMER.getCounterValue();

	// 타이머 인터럽트 지연으로 인한 시간 오류 발생 보완용
	if (time < gLastRequestTime)
	{
		gYssTimeSum += gOverFlowCnt;
		time += gOverFlowCnt;
		gPreUpdateFlag = true;
	}
	gLastRequestTime = time;
	__enable_irq();

	return time / 1000;
#else
	return 0;
#endif
}

uint64_t getUsec(void)
{
#if defined(STM32F7) || defined(STM32G4)
	__disable_irq();
	register uint64_t sum = gYssTimeSum, time = YSS_TIMER.getCounterValue();
	__enable_irq();

	// 타이머 인터럽트 지연으로 인한 시간 오류 발생 보완용
	if(time & 0x80000000)
		return (time & 0x7FFFFFFF) + gOverFlowCnt + sum;
	else
		return time + sum;
#elif !defined(YSS_DRV_TIMER_UNSUPPORTED)
	__disable_irq();
	register uint64_t time = gYssTimeSum + YSS_TIMER.getCounterValue();

	// 타이머 인터럽트 지연으로 인한 시간 오류 발생 보완용
	if (time < gLastRequestTime)
	{
		gYssTimeSum += gOverFlowCnt;
		time += gOverFlowCnt;
		gPreUpdateFlag = true;
	}
	gLastRequestTime = time;
	__enable_irq();

	return time;
#else
	return 0;
#endif
}

}

