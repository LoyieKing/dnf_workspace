#ifndef COSERVER_THREAD_H_
#define COSERVER_THREAD_H_

#include <pthread.h>

class CApplication;
class CFrameCountHandler;
class CPacketDecoder;
class CUdpRecvBuffer;

// CThreadInterface：vptr@0 / handle@4 / running@8
class CThreadInterface
{
public:
    CThreadInterface();
    virtual ~CThreadInterface();
    virtual void stop();
    virtual void dispatch(void* param) = 0;
    bool begin();
    static void* dispatch_proxy(void* temp);
    pthread_t m_handle;   // +4
    char m_running;       // +8
};

// CFrameCountHandler：0x30B
class CFrameCountHandler
{
public:
    CFrameCountHandler();
    void InitFrameCountInfo(CApplication* app, unsigned int frameCount, unsigned short tick);
    CFrameCountHandler* GetFrameCountInfo();
    void SaveProcess(int interval);
    char m_state;                    // +0x24
    char m_data[0x28];               // +0
    CApplication* m_app;             // +0x2c
};

// CAppThread：CThreadInterface@0 + app@0xc + CFrameCountHandler@0x10 +
//             queue@0x40 + CMutex*@0x44 + @0x48 + saveInterval@0x4c（0x50）
class CAppThread : public CThreadInterface
{
public:
    CAppThread();
    virtual ~CAppThread();
    virtual void stop();
    virtual void dispatch(void* param);
    void attach(CApplication* app, int idx);
    CApplication* m_app;             // +0xc
    CFrameCountHandler m_frame;      // +0x10
    void* m_queue;                   // +0x40
    void* m_lock;                    // +0x44
    int m_reserved;                  // +0x48
    int m_saveInterval;              // +0x4c
};

// CNetworkThread：CThreadInterface@0 + app@0xc + ...（0x64）
class CNetworkThread : public CThreadInterface
{
public:
    CNetworkThread();
    virtual ~CNetworkThread();
    virtual void stop();
    virtual void dispatch(void* param);
    void attach(CApplication* app, int idx);
    CApplication* m_app;             // +0xc
    int m_reserved2;                 // +0x60
    void* m_packets[10];             // +0x10..0x38
    void* m_locks[10];               // +0x38..0x60
};

#endif // COSERVER_THREAD_H_
