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


#if defined(STM32F446xx)

#include <config.h>
#include <yss/instance.h>
#include <util/runtime.h>
#include <drv/peripheral.h>
#include <targets/st/bitfield.h>

#if YSS_TIMER == RUNTIME_TIM1
#error "RUNTIME_TIM1은 사용이 불가능합니다."
#elif YSS_TIMER == RUNTIME_TIM2
#define ISR_RUNTIME		TIM2_IRQHandler
#define RUNTIME_DEV		TIM2
#define RUNTIME_IRQ		TIM2_IRQn
#define RUNTIME_CLK_APB1
#define RUNTIME_RCC_ENR	RCC->APB1ENR
#define RUNTIME_ENR_MSK	RCC_APB1ENR_TIM2EN_Msk
#define TOP				0xFFFFFFFF
#elif YSS_TIMER == RUNTIME_TIM3
#define ISR_RUNTIME		TIM3_IRQHandler
#define RUNTIME_DEV		TIM3
#define RUNTIME_IRQ		TIM3_IRQn
#define RUNTIME_CLK_APB1
#define RUNTIME_RCC_ENR	RCC->APB1ENR
#define RUNTIME_ENR_MSK	RCC_APB1ENR_TIM3EN_Msk
#define TOP				0xFFFF
#elif YSS_TIMER == RUNTIME_TIM4
#define ISR_RUNTIME		TIM4_IRQHandler
#define RUNTIME_DEV		TIM4
#define RUNTIME_IRQ		TIM4_IRQn
#define RUNTIME_CLK_APB1
#define RUNTIME_RCC_ENR	RCC->APB1ENR
#define RUNTIME_ENR_MSK	RCC_APB1ENR_TIM4EN_Msk
#define TOP				0xFFFF
#elif YSS_TIMER == RUNTIME_TIM5
#define ISR_RUNTIME		TIM5_IRQHandler
#define RUNTIME_DEV		TIM5
#define RUNTIME_IRQ		TIM5_IRQn
#define RUNTIME_CLK_APB1
#define RUNTIME_RCC_ENR	RCC->APB1ENR
#define RUNTIME_ENR_MSK	RCC_APB1ENR_TIM5EN_Msk
#define TOP				0xFFFFFFFF
#elif YSS_TIMER == RUNTIME_TIM6
#error "RUNTIME_TIM6은 사용이 불가능합니다."
#elif YSS_TIMER == RUNTIME_TIM7
#error "RUNTIME_TIM7은 사용이 불가능합니다."
#elif YSS_TIMER == RUNTIME_TIM8
#error "RUNTIME_TIM8은 사용이 불가능합니다."
#elif YSS_TIMER == RUNTIME_TIM9
#define ISR_RUNTIME		TIM1_BRK_TIM9_IRQHandler
#define RUNTIME_DEV		TIM9
#define RUNTIME_IRQ		TIM1_BRK_TIM9_IRQn
#define RUNTIME_CLK_APB2
#define RUNTIME_RCC_ENR	RCC->APB2ENR
#define RUNTIME_ENR_MSK	RCC_APB2ENR_TIM9EN_Msk
#define TOP				0xFFFF
#elif YSS_TIMER == RUNTIME_TIM10
#error "RUNTIME_TIM10은 사용이 불가능합니다."
#elif YSS_TIMER == RUNTIME_TIM11
#define ISR_RUNTIME		TIM1_TRG_COM_TIM11_IRQHandler
#define RUNTIME_DEV		TIM11
#define RUNTIME_IRQ		TIM1_TRG_COM_TIM11_IRQn
#define RUNTIME_CLK_APB2
#define RUNTIME_RCC_ENR	RCC->APB2ENR
#define RUNTIME_ENR_MSK	RCC_APB2ENR_TIM11EN_Msk
#define TOP				0xFFFF
#elif YSS_TIMER == RUNTIME_TIM12
#define ISR_RUNTIME		TIM8_BRK_TIM12_IRQHandler
#define RUNTIME_DEV		TIM12
#define RUNTIME_IRQ		TIM8_BRK_TIM12_IRQn
#define RUNTIME_CLK_APB1
#define RUNTIME_RCC_ENR	RCC->APB1ENR
#define RUNTIME_ENR_MSK	RCC_APB1ENR_TIM12EN_Msk
#define TOP				0xFFFF
#elif YSS_TIMER == RUNTIME_TIM14
#define ISR_RUNTIME		TIM8_TRG_COM_TIM14_IRQHandler
#define RUNTIME_DEV		TIM14
#define RUNTIME_IRQ		TIM8_TRG_COM_TIM14_IRQn
#define RUNTIME_CLK_APB1
#define RUNTIME_RCC_ENR	RCC->APB1ENR
#define RUNTIME_ENR_MSK	RCC_APB1ENR_TIM14EN_Msk
#define TOP				0xFFFF
#endif

static uint64_t gYssTimeSum = (int64_t)(TOP) * -1;
static bool gUpdateFlag;

uint32_t getApb1TimerClockFrequency(void);
uint32_t getApb2TimerClockFrequency(void);


uint32_t getClockFrequency(void) __attribute__((optimize("-O1")));
uint32_t getClockFrequency(void)
{
#if defined (RUNTIME_CLK_APB1)
	return getApb1TimerClockFrequency();	
#elif defined (RUNTIME_CLK_APB2)
	return getApb2TimerClockFrequency();
#else
	return 0;
#endif
}

extern "C"
{
	void ISR_RUNTIME(void) __attribute__((optimize("-O1")));
	void ISR_RUNTIME(void)
	{
		uint32_t dier = RUNTIME_DEV->DIER, sr = RUNTIME_DEV->SR;

		if (dier & TIM_DIER_UIE_Msk && sr & TIM_SR_UIF_Msk)
		{
			RUNTIME_DEV->SR = ~TIM_SR_UIF_Msk;
			gYssTimeSum += TOP;
			gUpdateFlag = true;
		}
		else if (dier & TIM_DIER_CC1IE_Msk && sr & TIM_SR_CC1IF_Msk)
		{
			RUNTIME_DEV->SR = ~TIM_SR_CC1IF_Msk;
			gUpdateFlag = false;
		}
	}
}

void initializeSystemTime(void) __attribute__((optimize("-O1")));
void initializeSystemTime(void)
{
	RUNTIME_RCC_ENR |= RUNTIME_ENR_MSK;

	RUNTIME_DEV->PSC = (uint16_t)(getClockFrequency() / 1000000) - 1;
	RUNTIME_DEV->ARR = TOP;
	RUNTIME_DEV->CNT = TOP;
	RUNTIME_DEV->CCR1 = TOP / 2;
	RUNTIME_DEV->DIER |= TIM_DIER_UIE_Msk | TIM_DIER_CC1IE_Msk;
	RUNTIME_DEV->CR1 |= TIM_CR1_CEN_Msk | TIM_CR1_ARPE_Msk;

	NVIC_EnableIRQ(RUNTIME_IRQ);
}

namespace runtime
{
uint64_t gLastRequestTime;

uint32_t getSec(void) __attribute__((optimize("-O1")));
uint32_t getSec(void)
{
	return getUsec() / 1000000;
}

uint64_t getMsec(void) __attribute__((optimize("-O1")));
uint64_t getMsec(void)
{
	return getUsec() / 1000;
}

uint64_t getUsec(void) __attribute__((optimize("-O1")));
uint64_t getUsec(void)
{
	uint32_t cnt, flag, iflag;
	uint64_t acc;

	__disable_irq();
	cnt = RUNTIME_DEV->CNT;
	acc = gYssTimeSum;
	flag = RUNTIME_DEV->SR & TIM_SR_UIF_Msk;
	iflag = gUpdateFlag;
	__enable_irq();
	
	if(flag && !iflag && cnt < (TOP / 2))
		return (uint64_t)cnt + acc + TOP;
	else if(flag && iflag && cnt > (TOP / 2))
		return (uint64_t)cnt + acc - TOP;
	else
		return (uint64_t)cnt + acc;
}

}

#endif

