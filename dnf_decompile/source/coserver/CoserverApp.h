#ifndef COSERVER_APP_H_
#define COSERVER_APP_H_

#include <deque>
#include <queue>
#include <string>

// ---- CAppBase：vptr@0 ----
class CAppBase
{
public:
    CAppBase();
    virtual ~CAppBase();
    virtual void Create(int argc, char** argv);
    virtual void Clear();
    virtual void Process();
};

class CMutex
{
public:
    CMutex();
    ~CMutex();
    void lock();
    void unlock();
    pthread_mutex_t m_mutex;
};

class CFrameCountHandler;
class CUserManager;
class CAppConfig;
class CServerConfig;
class CServerHandler;
class CAppInit;
class CInnerMsgHandler;
class CAppThread;
class CUdpHandler;
class CNetworkThread;
class CSignalTranslator;

// ---- CApplication ----
// vptr@0 / 标志@4 / @8 / CAppInit*@0xc / CAppConfig*@0x10 / CServerConfig*@0x14 /
// @0x18 / CServerHandler*@0x1c / CFrameCountHandler@0x20 / CInnerMsgHandler*@0x50 /
// queue[10]@0x54 / CMutex[10]@0x1e4 / CUdpHandler*[101]@0x2d4 /
// CNetworkThread*[101]@0x468 / CAppThread*[10]@0x5f4 / CMutex@0x624 /
// CUserManager@0x63c
class CApplication : public CAppBase
{
public:
    CApplication();
    virtual ~CApplication();
    virtual void Create(int argc, char** argv);
    virtual void Clear();
    virtual void Process();
    void Init(int argc, char** argv);
    void Load(int argc, char** argv);
    void Free();
    int CheckArgv(char** argv);
    void Send_Term_Signal();
    void Send_Suspend_Signal();
    CGameServer* FindGameServer(int idx);
    void App_Stop();
    void AttachAppInitor(char** argv);

    bool m_loaded;                    // +4
    int m_reserved1;                  // +8
    CAppInit* m_appInit;              // +0xc
    CAppConfig* m_appConfig;          // +0x10
    CServerConfig* m_serverConfig;    // +0x14
    int m_reserved2;                  // +0x18
    CServerHandler* m_serverHandler;  // +0x1c
    char m_frame[0x30];               // +0x20 CFrameCountHandler
    int m_reserved3;                  // +0x50 前半
    CInnerMsgHandler* m_innerMsg;     // +0x50 后半
    char m_udpQueues[10 * 0x28];      // +0x54
    char m_udpLocks[10 * 0x18];       // +0x1e4
    CUdpHandler* m_udpHandlers[101];  // +0x2d4
    CNetworkThread* m_netThreads[101];// +0x468
    CAppThread* m_appThreads[10];     // +0x5f4
    char m_lock1[0x18];               // +0x624
    CUserManager* m_userManager;      // +0x63c（实际为内嵌对象）
};

// 全局单例
CApplication* CApplicationInstance();
void ShowLogo();
CSignalTranslator* CSignalTranslatorInstance();
CPacketDecoder* CPacketDecoderInstance();

#endif // COSERVER_APP_H_
