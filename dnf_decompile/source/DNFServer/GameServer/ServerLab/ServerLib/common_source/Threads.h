#ifndef NSL_THREADS_H_
#define NSL_THREADS_H_

namespace nsl {

class TCPThread;
class UDPThread;
class TimerThread;
class WorkThread;
class NSLDBThread;
class TCPSendThread;
class LogSendThread;

class Threads
{
public:
    Threads();
    TCPThread* getTCPThread();
    TCPSendThread* getTCPSendThread(int idx);
    WorkThread* getWorkThread(int idx);
    TimerThread* getTimerThread();
    WorkThread* getLittleWorkThread();
    int getWorkThreadNum();
    NSLDBThread* getDBThread(int idx);
    void setMostLittleQueue(int workQueueSize, int sendQueueSize);
    int getScopedLittleWorkIdx();

    TCPThread* threadTCP_;
    UDPThread* threadUDP_;
    TimerThread* threadTimer_;
    WorkThread* threadWork_[5];
    NSLDBThread* threadDB_[4];
    TCPSendThread* threadTCPSend_[1];
    LogSendThread* logSendThread_;
    int mMostLittleOrderQueue;
    int mMostLittleSendQueue;
    int mWorkThreadNum;
};

} // namespace nsl

#endif // NSL_THREADS_H_
