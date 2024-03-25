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

#include <yss.h>
#include <bsp.h>
#include <yss/debug.h>
#include <util/runtime.h>
#include <string.h>

uint32_t gTimer0Counter;

void thread_testBitLed(void)
{
	while(1)
	{
		led::set(true, false, false);
		thread::delay(100);

		led::set(false, true, false);
		thread::delay(100);

		led::set(false, false, true);
		thread::delay(100);
	}
}

void thread_testPwmLed(void)
{
	float ratio = 0;
	const uint32_t delay = 20;

	while(1)
	{
		while(ratio < 1.0)
		{
			led::set(ratio, 0, 0);
			thread::delay(delay);
			ratio += 0.05;
		}

		while(ratio >= 0)
		{
			led::set(ratio, 0, 0);
			thread::delay(delay);
			ratio -= 0.05;
		}

		while(ratio < 1.0)
		{
			led::set(0, ratio, 0);
			thread::delay(delay);
			ratio += 0.05;
		}

		while(ratio >= 0)
		{
			led::set(0, ratio, 0);
			thread::delay(delay);
			ratio -= 0.05;
		}

		while(ratio < 1.0)
		{
			led::set(0, 0, ratio);
			thread::delay(delay);
			ratio += 0.05;
		}

		while(ratio >= 0)
		{
			led::set(0, 0, ratio);
			thread::delay(delay);
			ratio -= 0.05;
		}
	}
}

void thread_testUart(void)
{
	char *str = (char*)"hello world!!\n\r";
	int32_t size = strlen(str);

	while(1)
	{
		uart1.lock();
		uart1.send(str, size);
		uart1.unlock();
	}
}

void isr_timer0(void)
{
	gTimer0Counter++;
}

int main(void)
{
	// 운영체체 초기화
	initializeYss();

	// 보드 초기화
	initializeBoard();

	// TIMER3을 1kHz 주기로 동작하도록 초기화
	timer3.enableClock();
	timer3.initialize(1000);
	timer3.setUpdateIsr(isr_timer0);
	timer3.start();
	timer3.enableInterrupt();
	
	//thread::add(thread_testBitLed, 512);
	thread::add(thread_testPwmLed, 512);
	thread::add(thread_testUart, 512);

	debug_printf("MCLK = %d\n", clock.getMclkFrequency());
	
	debug_printf("OCLK = %d\n", clock.getOclkFrequency());

	debug_printf("RCLK = %d\n", clock.getRclkFrequency());

	debug_printf("FCLK = %d\n", clock.getFclkFrequency());
	
	debug_printf("TIMER = %d\n", timer3.getClockFrequency());

	while(1)
	{
		debug_printf("%d, %d\r", (uint32_t)runtime::getMsec(), gTimer0Counter);
	}
}
