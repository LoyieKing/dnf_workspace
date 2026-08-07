#ifndef NSL_TIMERTHREAD_H_
#define NSL_TIMERTHREAD_H_

#include <pthread.h>
#include <queue>

#include "../basic_source/Thread.h"
#include "TimeManager.h"
#include "Message.h"

namespace nsl {

class Message;
class InternalMsg;

typedef long long __int64;

class ITimeEntity : public IMessageStruct
{
public:
    ITimeEntity()
    {
    }
    virtual ~ITimeEntity()
    {
    }
    virtual int operator()() = 0;
    inline void setTerminated()
    {
        bTerminated = true;
    }
    inline bool isTerminated()
    {
        return bTerminated;
    }
    inline void setArg(InternalMsg* pMsg)
    {
        pmMsg = pMsg;
    }
    inline InternalMsg* getArg()
    {
        return pmMsg;
    }

    bool bTerminated;       // tail padding of IMessageStruct @7
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
    ITimeEntity* PopTimeReqEvent();

    TimeManager super_TimeManager;
    std::queue<ITimeEntity*> timeReqQueue;
    pthread_mutex_t timerLock;
};

} // namespace nsl

#endif // NSL_TIMERTHREAD_H_
