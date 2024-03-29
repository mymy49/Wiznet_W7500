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
#include <util/FunctionQueue.h>
#include <std_ext/malloc.h>

FunctionQueue::FunctionQueue(uint16_t depth, int32_t  stackSize)
{
	mTaskMaxSize = depth;
	lockHmalloc();
	mTaskFunc = (error_t (**)(FunctionQueue *, void*))hmalloc(4 * depth);
	mVariable = (void **)hmalloc(depth);
	unlockHmalloc();
	mThreadId = 0;
	mTaskHead = mTaskTail = 0;
	mBusyFlag = false;
	mProcessingFlag = false;
	mStackSize = stackSize;
	mCallbackErrorHandler = 0;
}

FunctionQueue::~FunctionQueue(void)
{
	hfree(mTaskFunc);
	hfree(mVariable);
}

void FunctionQueue::add(error_t (*func)(FunctionQueue *, void *), void *var)
{
	mMutex.lock();
	mTaskFunc[mTaskHead] = (error_t (*)(FunctionQueue *, void * ))func;
	mVariable[mTaskHead] = var;
	mTaskHead++;
	if (mTaskHead >= mTaskMaxSize)
		mTaskHead = 0;
	mBusyFlag = true;
	mMutex.unlock();
}

void FunctionQueue::add(error_t (*func)(FunctionQueue *))
{
	mMutex.lock();
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-function-type"
	mTaskFunc[mTaskHead] = (error_t (*)(FunctionQueue *, void *))func;
#pragma GCC diagnostic pop
	mVariable[mTaskHead] = 0;
	mTaskHead++;
	if (mTaskHead >= mTaskMaxSize)
		mTaskHead = 0;
	mBusyFlag = true;
	mMutex.unlock();
}

bool FunctionQueue::isComplete(void)
{
	bool rt;
	mMutex.lock();
	rt = !mBusyFlag;
	mMutex.unlock();
	return rt;
}

error_t FunctionQueue::task(void)
{
	uint32_t tail;

	if (mTaskTail != mTaskHead)
	{
		mMutex.lock();
		tail = mTaskTail;
		mProcessingFlag = true;
		mMutex.unlock();
		mError = mTaskFunc[tail](this, mVariable[tail]);
		mMutex.lock();
		mProcessingFlag = false;
		mTaskTail++;
		if (mTaskTail >= mTaskMaxSize)
			mTaskTail = 0;
		mMutex.unlock();
	}
	else
	{
		mMutex.lock();
		mBusyFlag = false;
		mMutex.unlock();
	}

	return mError;
}

void thread_run(FunctionQueue *task)
{
	error_t result = error_t::ERROR_NONE;

	while (1)
	{
		if (task->isComplete())
		{
			thread::yield();
		}
		else
		{
			result = task->task();
		}

		if (result != error_t::ERROR_NONE)
		{
			task->clear();
			task->callErrorHandler(result);
			result = error_t::ERROR_NONE;
		}
	}
}

error_t FunctionQueue::start(void)
{
	error_t result = error_t::ERROR_NONE;

	mMutex.lock();
	mError = error_t::ERROR_NONE;
	if (mThreadId == 0)
		mThreadId = thread::add((void (*)(void *))thread_run, this, mStackSize);
	if(mThreadId < 0)
		result = error_t::FAILED_THREAD_ADDING;
	mMutex.unlock();

	return result;
}

void FunctionQueue::stop(void)
{
	mMutex.lock();
	if (mThreadId)
	{
		thread::remove(mThreadId);
		mThreadId = 0;
	}
	
	mTaskTail = mTaskHead = 0;

	mMutex.unlock();
}

void FunctionQueue::clear(void)
{
	mMutex.lock();

	if(mProcessingFlag)
	{
		mTaskTail = 0;
		mTaskHead = 1;
	}
	else
		mTaskTail = mTaskHead = 0;

	mMutex.unlock();
}

void FunctionQueue::setCallbackErrorHandler(void (*callback)(FunctionQueue *fq, error_t errorCode))
{
	mCallbackErrorHandler = callback;
}

void FunctionQueue::callErrorHandler(error_t errorCode)
{
	if(mCallbackErrorHandler)
		mCallbackErrorHandler(this, errorCode);
}

