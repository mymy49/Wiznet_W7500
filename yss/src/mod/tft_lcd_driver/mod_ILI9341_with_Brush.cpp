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

#if USE_GUI == true

#include <mod/tft_lcd_driver/ILI9341_with_Brush.h>

ILI9341_with_Brush::ILI9341_with_Brush(void)
{
}

void ILI9341_with_Brush::drawDot(int16_t x, int16_t y)
{
	if (y < mSize.height && x < mSize.width)
	{
		enable();
		setWindows(x, y);
		sendCmd(MEMORY_WRITE, &mBrushColorCode, 2);
		disable();
	}
}

void ILI9341_with_Brush::drawDot(int16_t x, int16_t y, uint32_t color)
{
	if (y < mSize.height && x < mSize.width)
	{
		enable();
		setWindows(x, y);
		sendCmd(MEMORY_WRITE, &color, 2);
		disable();
	}
}

void ILI9341_with_Brush::drawDot(int16_t x, int16_t y, Color color)
{
	uint16_t buf = color.getRgb565Code();

	if (y < mSize.height && x < mSize.width)
	{
		enable();
		setWindows(x, y);
		sendCmd(MEMORY_WRITE, &buf, 2);
		disable();
	}
}

void ILI9341_with_Brush::updateLcdSize(void)
{
	Size_t size;

	if(mRotateFlag)
	{
		size.width = getLcdSize().height;
		size.height = getLcdSize().width;
		setSize(size);
	}
	else
	{
		setSize(getLcdSize());
	}
}

void ILI9341_with_Brush::drawBitmapBase(Position_t pos, const Bitmap_t &bitmap)
{
	// RGB565가 아니면 리턴
	if (bitmap.type != 0)
		return;
	
	enable();
	setWindows(pos.x, pos.y, bitmap.width, bitmap.height);
	sendCmd(MEMORY_WRITE, bitmap.data, bitmap.width * bitmap.height * 2);
	disable();
}

void ILI9341_with_Brush::setBmp565Buffer(Bmp565Buffer &obj)
{
	mBmpBrush = &obj;
	mBmpBufferSize = obj.getBufferSize();
}

void ILI9341_with_Brush::fillRectBase(Position_t pos, Size_t size, uint32_t color)
{
	if(!mBmpBrush)
		return;

	uint32_t width, height, loop, remain;
	Bitmap_t *bitmap;
	Color bgColor;

	width = size.width;
	height = (mBmpBufferSize / 2) / width;
	loop = size.height / height;
	remain = size.height % height;

	mBmpBrush->setSize(width, height);

	bgColor.setColorCodeRgb565(color);
	mBmpBrush->setBackgroundColor(bgColor);
	mBmpBrush->clear();

	bitmap = mBmpBrush->getBitmap();

	for(uint32_t i=0;i<loop;i++)
	{
		drawBitmap(pos, bitmap);
		pos.y += height;
	}

	if(remain)
	{
		mBmpBrush->setSize(width, remain);
		drawBitmap(pos, bitmap);
	}
}

#endif

