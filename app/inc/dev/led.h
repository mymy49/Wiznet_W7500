/*
	Copyright 2023. 홍윤기 all right reserved.

	Permission is hereby granted, free of charge, to any person obtaining
	a copy of this software and associated documentation files (the
	"Software"), to deal in the Software without restriction, including
	without limitation the rights to use, copy, modify, merge, publish,
	distribute, sublicense, and/or sell copies of the Software, and to
	permit persons to whom the Software is furnished to do so, subject to
	the following conditions:

	The above copyright notice and this permission notice shall be
	included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
	MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
	LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
	OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
	WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef DEV_LED__H_
#define DEV_LED__H_

namespace led
{
	// LED (D4)를 PWM 출력이 지원되도록 초기화 합니다.
	void initialize(void);
	
	// LED의 R, G, B 색상을 ON/OFF로 제어 합니다.
	//
	// bool r
	//		적색 LED의 ON/OFF를 설정합니다. (true : ON / false : OFF)
	// bool g
	//		녹색 LED의 ON/OFF를 설정합니다. (true : ON / false : OFF)
	// bool b
	//		파랑색 LED의 ON/OFF를 설정합니다. (true : ON / false : OFF)
	void set(bool r, bool g, bool b);

	// LED의 R, G, B 색상의 밝기를 비율로 제어 합니다.
	//
	// float r
	//		적색 LED의 밝기를 설정합니다. (0 : 꺼짐 / 1 : 가장 밝음)
	// float g
	//		녹색 LED의 밝기를 설정합니다. (0 : 꺼짐 / 1 : 가장 밝음)
	// float b
	//		파랑색 LED의 밝기를 설정합니다. (0 : 꺼짐 / 1 : 가장 밝음)
	void set(float r, float g, float b);
}

#endif

