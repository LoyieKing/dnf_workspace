#ifndef GUILD_THREAD_H_
#define GUILD_THREAD_H_

#include <pthread.h>
#include <queue>

class CUdpRecvBuffer;
class CTcpNetSystem;
class CTcpRecvBuffer;

class CApplication;
class CPacketDecoder;

// ---- CThreadInterface ----
class CThreadInterface
{
public:
    CThreadInterface();
    virtual ~CThreadInterface();
    virtual void stop();
    virtual void join();
    virtual void dispatch(void* param) = 0;
    int begin();
    static void* dispatch_proxy(void* temp);
    pthread_t m_thread;   // +4
    bool m_running;       // +8
};

// ---- CFrameCountHandler：0x30 ----
class CFrameCountHandler
{
public:
    CFrameCountHandler();
    ~CFrameCountHandler();
    void InitFrameCountInfo(CApplication* app, unsigned int frameCount, unsigned short tick);
    CFrameCountHandler* GetFrameCountInfo();
    void SaveProcess();
    void SaveProcess(int interval);
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

// ---- CUdpNetworkThread ----
class CUdpNetworkThread : public CThreadInterface
{
public:
    CUdpNetworkThread();
    ~CUdpNetworkThread();
    void attach(CApplication* app);
    void SetUDPQueue(std::queue<CUdpRecvBuffer*>* q);
    void dispatch(void* param);
    CApplication* m_app;   // +0xc
    void* m_queue;         // +0x10
    void* m_lock;          // +0x14
    void* m_bLock;         // +0x18
};

// ---- CTcpNetworkThread ----
class CTcpNetworkThread : public CThreadInterface
{
public:
    CTcpNetworkThread();
    ~CTcpNetworkThread();
    void attach(CTcpNetSystem* net);
    void dispatch(void* param);
    CTcpNetSystem* m_net;  // +0xc
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
    void Init();
    T* GetRecvQ();
    T* GetParseQ();
    void SwapQ();
    char m_data[0x58];
};

class IQueueBase
{
public:
    IQueueBase();
    ~IQueueBase();
    char m_data[0x30];
};

template<class T>
class IQueue
{
public:
    IQueue();
    ~IQueue();
    static IQueue<T>* Get();
    void InitQueue(T* recv, T* parse);
    void SwitchQueue();
    T* GetParseQueue();
    char m_data[0x30];
};

#endif  // GUILD_THREAD_H_
