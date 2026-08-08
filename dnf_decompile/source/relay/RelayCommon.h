#ifndef RELAY_COMMON_H_
#define RELAY_COMMON_H_

#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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

    void clear();
    ScriptData();
    ~ScriptData();
};

ScriptData* G_ScriptData();

// 自由函数（RelayUtil.cpp / RelayService.cpp / RelaySignal.cpp）
long long get_ms_tick();
char* NumberToString(unsigned int value, int index);
char* NumberToString(unsigned long long value, int index);
void make_dir(char* path);
void WriteLog(const char* msg);
void MonitorAuthLog(unsigned int acc_id);
bool delete_pid();
int save_pid();

bool Neof_registerSignalHandlers();
void Neof_setCoreLimit();
bool Neof_sendTerminateSignal();
void Neof_sendSuspendSignal();
void Neof_dumpCoreFile();
void Neof_SignalHandler(int sig);
bool Neof_registerSignalHandler(int sig, void (*handler)(int));
void Neof_SignalLog(const char* msg);

#endif // RELAY_COMMON_H_
