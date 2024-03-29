////////////////////////////////////////////////////////////////////////////////////////
//
// 저작권 표기 License_ver_3.2
// 본 소스 코드의 소유권은 홍윤기에게 있습니다.
// 어떠한 형태든 기여는 기증으로 받아들입니다.
// 본 소스 코드는 아래 사항에 동의할 경우에 사용 가능합니다.
// 아래 사항에 대해 동의하지 않거나 이해하지 못했을 경우 사용을 금합니다.
// 본 소스 코드를 사용하였다면 아래 사항을 모두 동의하는 것으로 자동 간주 합니다.
// 본 소스 코드의 상업적 또는 비 상업적 이용이 가능합니다.
// 본 소스 코드의 내용을 임의로 수정하여 재배포하는 행위를 금합니다.
// 본 소스 코드의 사용으로 인해 발생하는 모든 사고에 대해서 어떠한 법적 책임을 지지 않습니다.
// 본 소스 코드의 어떤 형태의 기여든 기증으로 받아들입니다.
//
// Home Page : http://cafe.naver.com/yssoperatingsystem
// Copyright 2024. 홍윤기 all right reserved.
//
////////////////////////////////////////////////////////////////////////////////////////

#ifndef YSS_GUI_CONTAINER__H_
#define YSS_GUI_CONTAINER__H_

#include "Object.h"

class Container : public Object
{
  public:
	Container(void);

	virtual ~Container(void);

	virtual void paint(void);

	void increaseObjArr(void);

	void add(Object &obj);

	void add(Object *obj);

	void setBackgroundColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 0xFF);

	void update(Position_t pos, Size_t size);

	void update(Position_t beforePos, Size_t beforeSize, Position_t currentPos, Size_t currentSize);

	void update(void);

	Object *handlerPush(Position_t pos);

	Object *handlerDrag(Position_t pos);

	Object *handlerUp(void);

  protected:
	uint16_t mNumOfObj, mMaxObj;
	Object **mObjArr, *mLastEventObj;
	bool mValidFlag;
};

#endif

