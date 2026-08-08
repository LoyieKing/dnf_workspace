#ifndef STATICS_THREAD_H_
#define STATICS_THREAD_H_

#include <pthread.h>

class CApplication;
class CFrameCountHandler;
class CPacketDecoder;
class CUdpRecvBuffer;
class CUdpHandler;

// CThreadInterface：vptr@0 / handle@4 / running@8
// vtable：stop / join / dtor / dtor / dispatch
class CThreadInterface
{
public:
    CThreadInterface();
    virtual ~CThreadInterface();
    virtual void stop();
    virtual void join();
    virtual void dispatch(void* param) = 0;
    bool begin();
    static void* dispatch_proxy(void* temp);
    pthread_t m_handle;   // +4
    char m_running;       // +8
};

// CFrameCountHandler：0x30
class CFrameCountHandler
{
public:
    CFrameCountHandler();
    void InitFrameCountInfo(CApplication* app, unsigned int frameCount, unsigned short tick);
    CFrameCountHandler* GetFrameCountInfo();
    void SaveProcess();
    char m_state0;             // +0
    unsigned int m_tick;       // +4
    unsigned int m_framePerTick; // +8
    unsigned int m_startTime;  // +0xc
    unsigned int m_endTime;    // +0x10
    unsigned int m_frameCount; // +0x14
    unsigned int m_fps;        // +0x18
    char m_pad[0x8];           // +0x1c
    char m_state;              // +0x24
    char m_counter1;           // +0x25
    char m_counter2;           // +0x26
    char m_pad2;               // +0x27
    char m_writeTick;          // +0x28
    char m_pad3[3];            // +0x29
    unsigned int m_value;      // +0x2c
};

// CNetworkThread：CThreadInterface@0 + queue*@0xc + CUdpHandler*@0x10 +
//                 CMutex*@0x14 + CMutex*@0x18（0x1c）
class CNetworkThread : public CThreadInterface
{
public:
    CNetworkThread();
    virtual ~CNetworkThread();
    virtual void dispatch(void* param);
    void attach(CApplication* app);
    void* m_queue;   // +0xc
    void* m_udp;     // +0x10
    void* m_lock;    // +0x14
    void* m_bLock;   // +0x18
};

#endif // STATICS_THREAD_H_
