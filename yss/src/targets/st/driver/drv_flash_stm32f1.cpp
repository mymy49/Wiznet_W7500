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

#include <drv/mcu.h>

#if defined(GD32F1) || defined(STM32F1)

#include <drv/peripheral.h>
#include <drv/Flash.h>
#include <yss/thread.h>
#include <yss/reg.h>
#include <targets/st/bitfield.h>

#if defined(STM32F1)
void Flash::setLatency(uint32_t freq)
{
	if (freq < 24000000)
		setFieldData(FLASH->ACR, FLASH_ACR_LATENCY_Msk, 0, FLASH_ACR_LATENCY_Pos);
	else if (freq < 48000000)
		setFieldData(FLASH->ACR, FLASH_ACR_LATENCY_Msk, 1, FLASH_ACR_LATENCY_Pos);
	else
		setFieldData(FLASH->ACR, FLASH_ACR_LATENCY_Msk, 2, FLASH_ACR_LATENCY_Pos);
}

void Flash::setPrefetchEn(bool en)
{
	setBitData(FLASH->ACR, FLASH_ACR_PRFTBE_Pos, en);
}

void Flash::setHalfCycleAccessEn(bool en)
{
	setBitData(FLASH->ACR, FLASH_ACR_HLFCYA_Pos, en);
}
#endif

#define FLASHSIZE_BASE 0x1FFFF7E0UL

#if defined(STM32F1)
uint32_t Flash::getAddress(uint16_t sector)
{
	uint32_t max, size;
#if defined(STM32F10X_MD) || defined(STM32F10X_LD)
	max = *(uint16_t *)FLASHSIZE_BASE;
	size = 1024;
#elif defined(STM32F10X_HD)
	max = *(uint16_t *)FLASHSIZE_BASE;
	size = 2048;
#else
	max = *(uint16_t *)FLASHSIZE_BASE;
	size = 2048;
#endif

	if (sector > max)
		sector = max;

	return 0x08000000 + (uint32_t)sector * size;
}
#else
uint32_t Flash::getAddress(uint16_t sector)
{
	uint32_t size;
	uint32_t addr = (uint32_t)FLASH_BASE;
	
#if defined(GD32F10X_MD)
	//if(sector >= max)
	//	return 0;
	addr += sector * 1024;
#elif defined(GD32F10X_XD) || defined(GD32F10X_CL) || defined(GD32F10X_HD)
//	max = FLASH_BASE + max * 1024;
	if(sector >= 256)
	{
		addr += 256 * 2048;
		sector -= 256;
		addr += sector * 4096;
	}
	else
	{
		addr += sector * 2048;
	}
#else
	return 0;
#endif
	return addr;
}
#endif

void Flash::erase(uint16_t sector)
{
	uint32_t addr = getAddress(sector);

#if defined(GD32F10X_MD) || defined(GD32F10X_HD) || defined(STM32F10X_MD)
	while (getBitData(FLASH->SR, 0))
		thread::yield();
#elif defined(GD32F10X_XD) || defined(GD32F10X_CL)
	while (getBitData(FLASH->SR, 0) || getBitData(FLASH->SR2, 0))
		thread::yield();
#endif

	if (sector < 256)
	{
		if (getBitData(FLASH->CR, 7))	// Flash가 잠겼는지 확인
		{
			// Flash Unlock
			FLASH->KEYR = 0x45670123;
			FLASH->KEYR = 0xCDEF89AB;
		}
		
		// Unlock이 될때까지 대기
		while (getBitData(FLASH->CR, 7))
			thread::yield();
		
		// 지우기
		setBitData(FLASH->CR, true, 1);
		FLASH->AR = addr;
		setBitData(FLASH->CR, true, 6);

		__DSB();
		while (getBitData(FLASH->SR, 0))
			;

		__DSB();
		setBitData(FLASH->CR, false, 1);	// 지우기 해제
		setBitData(FLASH->CR, false, 7);	// 잠금
	}
#if defined(GD32F10X_XD) || defined(GD32F10X_CL)
	else
	{
		if (getBitData(FLASH->CR2, 7))	// Flash가 잠겼는지 확인
		{
			// Flash Unlock
			FLASH->KEYR2 = 0x45670123;
			FLASH->KEYR2 = 0xCDEF89AB;
		}

		// Unlock이 될때까지 대기
		while (getBitData(FLASH->CR2, 7))
			thread::yield();

		// 지우기
		setBitData(FLASH->CR2, true, 1);
		FLASH->AR2 = addr;
		setBitData(FLASH->CR2, true, 6);

		__DSB();
		while (getBitData(FLASH->SR2, 0))
			;

		__DSB();
		setBitData(FLASH->CR2, false, 1);	// 지우기 해제
		setBitData(FLASH->CR2, false, 7);	// 잠금
	}
#endif
}

void *Flash::program(uint32_t sector, void *src, uint32_t size)
{
	uint16_t *addr = (uint16_t*)getAddress(sector);

	size += 1;
	size >>= 1;

#if defined(GD32F10X_MD) || defined(GD32F10X_HD) || defined(STM32F10X_MD)
	while (getBitData(FLASH->SR, 0))
		thread::yield();
#elif defined(GD32F10X_XD) || defined(GD32F10X_CL)
	while (getBitData(FLASH->SR, 0) || getBitData(FLASH->SR2, 0))
		thread::yield();
#endif

	if (sector < 256)
	{
		if (getBitData(FLASH->CR, 7))	// Flash가 잠겼는지 확인
		{
			// Flash Unlock
			FLASH->KEYR = 0x45670123;
			FLASH->KEYR = 0xCDEF89AB;
		}

		// Unlock이 될때까지 대기
		while (getBitData(FLASH->CR, 7))
			thread::yield();

		setBitData(FLASH->CR, true, 0);	// 쓰기 설정

		__DSB();
		for (uint32_t i = 0; i < size; i++)
		{
			addr[i] = ((uint16_t *)src)[i];
			__DSB();
			while (getBitData(FLASH->SR, 0))
				;
		}

		__DSB();
		setBitData(FLASH->CR, false, 0);	// 쓰기 해제
		setBitData(FLASH->CR, false, 7);	// 잠금
	}
#if defined(GD32F10X_XD) || defined(GD32F10X_CL)
	else
	{
		if (getBitData(FLASH->CR2, 7))	// Flash가 잠겼는지 확인
		{
			// Flash Unlock
			FLASH->KEYR2 = 0x45670123;
			FLASH->KEYR2 = 0xCDEF89AB;
		}

		// Unlock이 될때까지 대기
		while (getBitData(FLASH->CR2, 7))
			thread::yield();

		setBitData(FLASH->CR2, true, 0);	// 쓰기 설정

		__DSB();
		for (uint32_t i = 0; i < size; i++)
		{
			addr[i] = ((uint16_t *)src)[i];
			__DSB();
			while (getBitData(FLASH->SR2, 0))
				;
		}

		__DSB();
		setBitData(FLASH->CR2, false, 0);	// 쓰기 해제
		setBitData(FLASH->CR2, false, 7);	// 잠금
	}
#endif
	return &addr[size];
}

void *Flash::program(void *des, void *src, uint32_t size)
{
	uint16_t *addr = (uint16_t *)des;

	size += 1;
	size >>= 1;

#if defined(GD32F10X_MD) || defined(GD32F10X_HD) || defined(STM32F10X_MD)
	while (getBitData(FLASH->SR, 0))
		thread::yield();
#elif defined(GD32F10X_XD) || defined(GD32F10X_CL)
	while (getBitData(FLASH->SR, 0) || getBitData(FLASH->SR2, 0))
		thread::yield();
#endif

	if ((int32_t )des < 0x08080000)
	{
		if (getBitData(FLASH->CR, 7))	// Flash가 잠겼는지 확인
		{
			// Flash Unlock
			FLASH->KEYR = 0x45670123;
			FLASH->KEYR = 0xCDEF89AB;
		}

		// Unlock이 될때까지 대기
		while (getBitData(FLASH->CR, 7))
			thread::yield();

		setBitData(FLASH->CR, true, 0);	// 쓰기 설정

		__DSB();
		for (uint32_t i = 0; i < size; i++)
		{
			addr[i] = ((uint16_t *)src)[i];
			__DSB();
			while (getBitData(FLASH->SR, 0))
				;
		}

		__DSB();
		setBitData(FLASH->CR, false, 0);	// 쓰기 해제
		setBitData(FLASH->CR, false, 7);	// 잠금
	}
#if defined(GD32F10X_XD) || defined(GD32F10X_CL)
	else
	{
		if (getBitData(FLASH->CR2, 7))	// Flash가 잠겼는지 확인
		{
			// Flash Unlock
			FLASH->KEYR2 = 0x45670123;
			FLASH->KEYR2 = 0xCDEF89AB;
		}

		// Unlock이 될때까지 대기
		while (getBitData(FLASH->CR2, 7))
			thread::yield();

		setBitData(FLASH->CR2, true, 0);	// 쓰기 설정

		__DSB();
		for (uint32_t i = 0; i < size; i++)
		{
			addr[i] = ((uint16_t *)src)[i];
			__DSB();
			while (getBitData(FLASH->SR2, 0))
				;
		}

		__DSB();
		setBitData(FLASH->CR2, false, 0);	// 쓰기 해제
		setBitData(FLASH->CR2, false, 7);	// 잠금
	}
#endif
	return &addr[size];
}
#endif

