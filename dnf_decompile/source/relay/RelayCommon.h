#ifndef RELAY_COMMON_H_
#define RELAY_COMMON_H_

#include <pthread.h>

// ---- 基础类型（布局来自 df_relay_r 反汇编/Ghidra，无 DWARF）----

class ThreadLock_linux
{
public:
    ThreadLock_linux()
    {
        pthread_mutex_init(&m_lock, 0);
    }
    ~ThreadLock_linux()
    {
        pthread_mutex_destroy(&m_lock);
    }
    void lock()
    {
        pthread_mutex_lock(&m_lock);
    }
    void unlock()
    {
        pthread_mutex_unlock(&m_lock);
    }
    pthread_mutex_t m_lock;
};

class Mutex
{
public:
    Mutex()
    {
        pthread_mutex_init(&m, 0);
    }
    ~Mutex()
    {
        pthread_mutex_destroy(&m);
    }
    void lock()
    {
        pthread_mutex_lock(&m);
    }
    void unlock()
    {
        pthread_mutex_unlock(&m);
    }
    pthread_mutex_t m;
};

template <typename T>
struct GlobalInstance
{
    static T* inst_ptr();
    static T* create();
    static T* m_p;
    static Mutex m_lock;
};

// ScriptData：全局配置数据（Script::get_server_section 等写入）
// 布局：0:int relayNum=100; 4/6:ushort port; 8:ipA[17]; 0x1a:ushort;
//       0x1c:ushort; 0x1e:ipB[17]; 0x30/0x32:ushort; 0x34:bool
struct ScriptData
{
    int mRelayNum;              // +0  = 100
    unsigned short mPortTcp;    // +4  = 5555
    unsigned short mPortUdp;    // +6  = 5555
    char mServerIpA[17];        // +8  = "192.168.0.8"
    unsigned short mReservedA;  // +0x1a = 0
    unsigned short mReservedB;  // +0x1c = 7950
    char mServerIpB[17];        // +0x1e = "192.168.0.15"
    unsigned short mReservedC;  // +0x30 = 30300
    unsigned short mReservedD;  // +0x32 = 101
    bool mFlag;                 // +0x34 = true

    void clear()
    {
        mRelayNum = 100;
        mPortTcp = 5555;
        mPortUdp = 5555;
        strncpy(mServerIpA, "192.168.0.8", 0x11);
        mReservedA = 0;
        mReservedB = 7950;
        strncpy(mServerIpB, "192.168.0.15", 0x11);
        mReservedC = 30300;
        mReservedD = 101;
        mFlag = true;
    }
    ScriptData()
    {
        clear();
    }
    ~ScriptData()
    {
    }
};

ScriptData* G_ScriptData();

#endif // RELAY_COMMON_H_
