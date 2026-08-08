#ifndef GUILD_THREAD_H_
#define GUILD_THREAD_H_

#include <pthread.h>

class CApplication;
class CPacketDecoder;

// ---- CThreadInterface ----
class CThreadInterface
{
public:
    CThreadInterface();
    virtual ~CThreadInterface();
    int begin();
    void end();
    virtual void Run() = 0;
    pthread_t m_thread;   // +4
    bool m_running;       // +8
};

// ---- CFrameCountHandler：0x30 ----
class CFrameCountHandler
{
public:
    CFrameCountHandler();
    ~CFrameCountHandler();
    void InitFrameCountInfo(CApplication* app, unsigned int frameCount);
    CFrameCountHandler* GetFrameCountInfo();
    void SaveProcess();
    int m_field0;     // +0
    int m_field4;     // +4
    int m_field8;     // +8
    int m_fieldc;     // +0xc
    int m_field10;    // +0x10
    int m_field14;    // +0x14
    int m_field18;    // +0x18
    int m_field1c;    // +0x1c
    int m_field20;    // +0x20
    int m_field24;    // +0x24
    int m_field28;    // +0x28
    int m_field2c;    // +0x2c
};

// ---- CNetworkThread ----
class CNetworkThread : public CThreadInterface
{
public:
    CNetworkThread();
    ~CNetworkThread();
    void attach(CApplication* app);
    virtual void Run();
    void* m_queue;    // +0xc
    void* m_udp;      // +0x10
    void* m_lock;     // +0x14
    void* m_bLock;    // +0x18
};

// ---- CUdpNetworkThread ----
class CUdpNetworkThread : public CThreadInterface
{
public:
    CUdpNetworkThread();
    ~CUdpNetworkThread();
    void attach(CApplication* app);
    virtual void Run();
    CApplication* m_app;   // +0xc
};

class CSwapQueueBase
{
public:
    CSwapQueueBase();
    ~CSwapQueueBase();
    void* m_data[0x58 / 4];
};

template<class T, int N>
class CSwapQueue
{
public:
    CSwapQueue();
    ~CSwapQueue();
    void Push(T* item);
    void Pop();
    char m_data[0x58];
};

#endif  // GUILD_THREAD_H_
