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

#include <dev/led.h>
#include <yss/instance.h>

namespace led
{
	void initialize(void)
	{
		gpioC.setAsAltFunc(8, Gpio::PC8_PWM0);
		gpioC.setAsAltFunc(9, Gpio::PC9_PWM1);
		gpioC.setAsAltFunc(5, Gpio::PC5_PWM5);

		pwm0.enableClock();
		pwm0.initialize(5000);
		pwm0.start();

		pwm1.enableClock();
		pwm1.initialize(5000);
		pwm1.start();

		pwm5.enableClock();
		pwm5.initialize(5000);
		pwm5.start();

		set(false, false, false);
	}

	void set(bool r, bool g, bool b)
	{
		if(r)
			pwm0.setRatio(0.0);
		else
			pwm0.setRatio(1.0);

		if(g)
			pwm1.setRatio(0.0);
		else
			pwm1.setRatio(1.0);

		if(b)
			pwm5.setRatio(0.0);
		else
			pwm5.setRatio(1.0);
	}

	void set(float r, float g, float b)
	{
		pwm0.setRatio(1.f - r);
		pwm1.setRatio(1.f - g * 0.40f);
		pwm5.setRatio(1.f - b * 0.90f);
	}
}

