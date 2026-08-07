#ifndef NSL_TIMERTHREAD_H_
#define NSL_TIMERTHREAD_H_

#include "../basic_source/Thread.h"

namespace nsl {

class Message;
class InternalMsg;

typedef long long __int64;

class ITimeEntity
{
public:
    ITimeEntity();
    virtual ~ITimeEntity();
    virtual int operator()();
    void setTerminated();
    bool isTerminated();
    void setArg(InternalMsg* pMsg);
    InternalMsg* getArg();

    bool bTerminated;
    int proc_id;
    unsigned int check_period;
    unsigned int proc_count;
    bool bWillDelete;
    bool bRunning;
    __int64 accumulated_tick;
    unsigned int entNo;
    InternalMsg* pmMsg;
};

class TimerThread : public Thread
{
public:
    TimerThread();
    virtual ~TimerThread();
    virtual void loop(void* temp);
    void PushTimeReqEvent(ITimeEntity* pTimeEntity);

    void* mTimeList;
};

} // namespace nsl

#endif // NSL_TIMERTHREAD_H_
