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

#include <yss/instance.h>

#if defined(STM32F0)

#include <targets/st/bitfield_stm32f030xx.h>

static void enableDma1Clock(bool en)
{
	clock.lock();
	clock.enableAhb1Clock(RCC_AHBENR_DMAEN_Pos, en);
	clock.unlock();
}

static void enableDma1Stream0Interrupt(bool en)
{
	nvic.lock();
	nvic.enableInterrupt(DMA1_Ch1_IRQn, en);
	nvic.unlock();
}

const Drv::setup_t gDrvDmaChannel1Setup = 
{
	enableDma1Clock,			//void (*clockFunc)(bool en);
	enableDma1Stream0Interrupt,	//void (*nvicFunc)(bool en);
	0,							//void (*resetFunc)(void);
	0,							//uint32_t (*getClockFunc)(void);
};

const Dma::setup_t gDma1Setup = 
{
	(YSS_DMA_Peri*)DMA1,					//YSS_DMA_Peri *dma;
	(YSS_DMA_Channel_Peri*)DMA1_Channel1	//YSS_DMA_Channel_Peri *peri;	
};

DmaChannel1 dmaChannel1(gDrvDmaChannel1Setup, gDma1Setup);

extern "C"
{
	void DMA1_Channel1_IRQHandler(void)
	{
		dmaChannel1.isr();
	}
}



static void enableDma1Stream1Interrupt(bool en)
{
	nvic.lock();
	nvic.enableInterrupt(DMA1_Ch2_3_DMA2_Ch1_2_IRQn, en);
	nvic.unlock();
}

const Drv::setup_t gDrvDmaChannel2Setup = 
{
	enableDma1Clock,			//void (*clockFunc)(bool en);
	enableDma1Stream1Interrupt,	//void (*nvicFunc)(bool en);
	0,							//void (*resetFunc)(void);
	0,							//uint32_t (*getClockFunc)(void);
};

const Dma::setup_t gDma2Setup = 
{
	(YSS_DMA_Peri*)DMA1,					//YSS_DMA_Peri *dma;
	(YSS_DMA_Channel_Peri*)DMA1_Channel2	//YSS_DMA_Channel_Peri *peri;	
};

DmaChannel2 dmaChannel2(gDrvDmaChannel2Setup, gDma2Setup);



static void enableDma1Stream2Interrupt(bool en)
{
	nvic.lock();
	nvic.enableInterrupt(DMA1_Ch2_3_DMA2_Ch1_2_IRQn, en);
	nvic.unlock();
}

const Drv::setup_t gDrvDmaChannel3Setup = 
{
	enableDma1Clock,			//void (*clockFunc)(bool en);
	enableDma1Stream2Interrupt,	//void (*nvicFunc)(bool en);
	0,							//void (*resetFunc)(void);
	0,							//uint32_t (*getClockFunc)(void);
};

const Dma::setup_t gDma3Setup = 
{
	(YSS_DMA_Peri*)DMA1,					//YSS_DMA_Peri *dma;
	(YSS_DMA_Channel_Peri*)DMA1_Channel3	//YSS_DMA_Channel_Peri *peri;	
};

DmaChannel3 dmaChannel3(gDrvDmaChannel3Setup, gDma3Setup);

extern "C"
{
	void DMA1_Channel2_3_IRQHandler(void)
	{
		if(DMA1->ISR & (DMA_ISR_GIF2_Msk | DMA_ISR_TCIF2_Msk | DMA_ISR_HTIF2_Msk | DMA_ISR_TEIF2_Msk))
			dmaChannel2.isr();

		if(DMA1->ISR & (DMA_ISR_GIF3_Msk | DMA_ISR_TCIF3_Msk | DMA_ISR_HTIF3_Msk | DMA_ISR_TEIF3_Msk))
			dmaChannel3.isr();
	}
}



static void enableDma1Stream3Interrupt(bool en)
{
	nvic.lock();
	nvic.enableInterrupt(DMA1_Ch4_7_DMA2_Ch3_5_IRQn, en);
	nvic.unlock();
}

const Drv::setup_t gDrvDmaChannel4Setup = 
{
	enableDma1Clock,			//void (*clockFunc)(bool en);
	enableDma1Stream3Interrupt,	//void (*nvicFunc)(bool en);
	0,							//void (*resetFunc)(void);
	0,							//uint32_t (*getClockFunc)(void);
};

const Dma::setup_t gDma4Setup = 
{
	(YSS_DMA_Peri*)DMA1,					//YSS_DMA_Peri *dma;
	(YSS_DMA_Channel_Peri*)DMA1_Channel4	//YSS_DMA_Channel_Peri *peri;	
};

DmaChannel4 dmaChannel4(gDrvDmaChannel4Setup, gDma4Setup);



static void enableDma1Stream4Interrupt(bool en)
{
	nvic.lock();
	nvic.enableInterrupt(DMA1_Ch4_7_DMA2_Ch3_5_IRQn, en);
	nvic.unlock();
}

const Drv::setup_t gDrvDmaChannel5Setup = 
{
	enableDma1Clock,			//void (*clockFunc)(bool en);
	enableDma1Stream4Interrupt,	//void (*nvicFunc)(bool en);
	0,							//void (*resetFunc)(void);
	0,							//uint32_t (*getClockFunc)(void);
};

const Dma::setup_t gDma5Setup = 
{
	(YSS_DMA_Peri*)DMA1,				//YSS_DMA_Peri *dma;
	(YSS_DMA_Channel_Peri*)DMA1_Channel5	//YSS_DMA_Channel_Peri *peri;	
};

DmaChannel5 dmaChannel5(gDrvDmaChannel5Setup, gDma5Setup);

extern "C"
{
	void DMA1_Channel4_5_IRQHandler(void)
	{
		if(DMA1->ISR & (DMA_ISR_GIF4_Msk | DMA_ISR_TCIF4_Msk | DMA_ISR_HTIF4_Msk | DMA_ISR_TEIF4_Msk))
			dmaChannel4.isr();

		if(DMA1->ISR & (DMA_ISR_GIF5_Msk | DMA_ISR_TCIF5_Msk | DMA_ISR_HTIF5_Msk | DMA_ISR_TEIF5_Msk))
			dmaChannel5.isr();
	}
}

#endif

