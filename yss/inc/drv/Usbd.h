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

#ifndef YSS_DRV_USBD__H_
#define YSS_DRV_USBD__H_

#include "peripheral.h"

#if defined(STM32F7)
typedef USB_OTG_GlobalTypeDef		YSS_USB_TypeDef;
typedef USB_OTG_DeviceTypeDef		YSS_USB_Device_TypeDef;
#else
#include <stdint.h>
typedef volatile uint32_t			YSS_USB_TypeDef;
typedef volatile uint32_t			YSS_USB_Device_TypeDef;
#define YSS_DRV_USBD_UNSUPPORTED
#endif

#include "Drv.h"
#include <yss/error.h>
#include <sac/UsbClass.h>

class Usbd : public Drv
{
public :
	struct config_t
	{
		uint16_t ep0RxBuffSize;
	};

	error_t initialize(const config_t confg);

	struct setup_t
	{
		YSS_USB_TypeDef *global;
		YSS_USB_Device_TypeDef *dev;
		uint8_t endpointCount;
	};

	Usbd(const Drv::setup_t drvSetup, const setup_t setup);

	void isr(void);

private :
	//struct BufferInfo
	//{
	//	uint16_t addr;
	//	uint16_t rsvd0;
	//	uint16_t cnt;
	//	uint16_t rsvd1;
	//}__attribute__ ((__packed__));

	//struct BufferTable
	//{
	//	BufferInfo tx0;
	//	BufferInfo rx0;
	//	BufferInfo tx1;
	//	BufferInfo rx1;
	//	BufferInfo tx2;
	//	BufferInfo rx2;
	//	BufferInfo tx3;
	//	BufferInfo rx3;
	//}__attribute__ ((__packed__));

#if defined(STM32F7)
	YSS_USB_TypeDef *mGlobal;
	YSS_USB_Device_TypeDef *mDev;
	uint8_t mEndpointCount;
#endif

	//void setEpStatusTx(uint8_t ep, uint16_t status);
	//void setEpStatusRx(uint8_t ep, uint16_t status);
	//void setEpType(uint8_t ep, uint16_t type);
	//BufferTable *mBufferTable;
};

#endif

