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

#ifndef YSS_DRV_SDMMC__H_
#define YSS_DRV_SDMMC__H_

#include "mcu.h"

#if defined(STM32F7)

typedef SDMMC_TypeDef	YSS_SDMMC_Peri;

#elif defined(STM32F4)

typedef SDIO_TypeDef	YSS_SDMMC_Peri;

#else

#define YSS_DRV_SDMMC_UNSUPPORTED

#endif

#ifndef YSS_DRV_SDMMC_UNSUPPORTED

#include "Drv.h"
#include "Dma.h"
#include <sac/SdMemory.h>
#include <yss/error.h>

class Sdmmc : public Drv, public sac::SdMemory
{
public :
	struct Config
	{
		YSS_SDMMC_Peri *peri;
		Dma &txDma;
		Dma::DmaInfo txDmaInfo;
		Dma &rxDma;
		Dma::DmaInfo rxDmaInfo;
	};

	Sdmmc(const Drv::setup_t &drvConfig, const Config &config);

	error initialize(void);

	void lock(void);

	void unlock(void);

private :
	YSS_SDMMC_Peri *mPeri;
	Dma *mTxDma, *mRxDma;
	Dma::DmaInfo mTxDmaInfo, mRxDmaInfo;
	bool mAcmdFlag;
	uint8_t mBlockSize;

protected:
	virtual error sendCmd(uint8_t cmd, uint32_t arg, uint8_t responseType);

	virtual uint32_t getShortResponse(void);

	virtual void getLongResponse(void *des);

	virtual void setSdioClockBypass(bool en);

	virtual void setSdioClockEn(bool en);

	virtual void setClockFrequency(int32_t  frequency);

	virtual void enablePower(bool en = true);

	virtual void readyRead(void *des, uint16_t length);

	virtual void readyWrite(void *des, uint16_t length);

	virtual void setDataBlockSize(uint8_t blockSize);

	virtual error waitUntilReadComplete(void);

	virtual error waitUntilWriteComplete(void);

	virtual bool setBusWidth(uint8_t width);

	virtual void unlockRead(void);

	virtual void unlockWrite(void);
};

#endif

#endif

