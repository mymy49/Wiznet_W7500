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

#ifndef YSS_SAC_SERIAL_MEMORY__H_
#define YSS_SAC_SERIAL_MEMORY__H_

#include <stdint.h>
#include <yss/error.h>

class Memory
{
public:
	error_t write(uint32_t addr, uint8_t src);
	error_t write(uint32_t addr, int8_t src);
	error_t write(uint32_t addr, uint16_t src);
	error_t write(uint32_t addr, int16_t src);
	error_t write(uint32_t addr, uint32_t src);
	error_t write(uint32_t addr, int32_t src);
	error_t write(uint32_t addr, float src);
	error_t write(uint32_t addr, double src);
	error_t write(uint32_t addr, uint64_t src);
	error_t write(uint32_t addr, int64_t src);

	error_t read(uint32_t addr, uint8_t &des);
	error_t read(uint32_t addr, int8_t &des);
	error_t read(uint32_t addr, uint16_t &des);
	error_t read(uint32_t addr, int16_t &des);
	error_t read(uint32_t addr, uint32_t &des);
	error_t read(uint32_t addr, int32_t &des);
	error_t read(uint32_t addr, float &des);
	error_t read(uint32_t addr, double &des);
	error_t read(uint32_t addr, uint64_t &des);
	error_t read(uint32_t addr, int64_t &des);

	virtual error_t writeBytes(uint32_t addr, void *src, uint32_t size) = 0;
	virtual error_t readBytes(uint32_t addr, void *des, uint32_t size) = 0;

protected:
	virtual uint32_t getSize(void) = 0;

};

#endif