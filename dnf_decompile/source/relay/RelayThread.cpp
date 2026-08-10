// df_relay_r — Thread/LinuxSystem（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <pthread.h>
#include <sys/select.h>

#include "RelayThread.h"

ThreadLock_linux::ThreadLock_linux()
{
    pthread_mutex_init(&handle_, 0);
}

ThreadLock_linux::~ThreadLock_linux()
{
    pthread_mutex_destroy(&handle_);
}

void LinuxSystem::sleep(int milisecond)
{
    timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = milisecond * 1000;
    select(0, 0, 0, 0, &tv);
}

void LinuxSystem::usleep(int microsecond)
{
    timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = microsecond;
    select(0, 0, 0, 0, &tv);
}

Thread::Thread()
{
    handle_ = 0;
    id_ = 0;
}

Thread::~Thread()
{
    if (states_.isStarted() && !isTerminated())
    {
        throw Exception(
            "[Thread::~Thread] abnormal destruction. you should terminate the thread,first.");
    }
}

bool Thread::begin()
{
    states_.setStarted();
    id_ = pthread_create(&handle_, 0, proxyLoop, this);
    if (id_ < 0)
    {
        throw Exception("[Thread::begin] can't begin thread");
    }
    return true;
}

void Thread::setTerminate()
{
    states_.setTerminate();
}

bool Thread::isTerminated()
{
    return states_.isTerminated();
}

void Thread::waitForTerminated(int nTimeSleep)
{
    setTerminate();
    while (!isTerminated())
    {
        TSystem<LinuxSystem>::sleep(nTimeSleep);
    }
}

void* Thread::proxyLoop(void* temp)
{
    Thread* inst = (Thread*)temp;
    inst->loop(temp);
    return 0;
}
