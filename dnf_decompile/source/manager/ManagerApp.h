#ifndef MANAGER_APP_H_
#define MANAGER_APP_H_

#include <map>
#include <queue>
#include <string>

#include "ManagerTypes.h"
#include "Thread.h"

typedef std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*, std::allocator<CUdpRecvBuffer*> > > UdpRecvQueue;
typedef std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > > TcpRecvQueue;

// ---- CAppBase ----
class CAppBase
{
public:
    CAppBase();
    virtual ~CAppBase();
    virtual void Process();
    virtual void Init(int argc, char** argv) = 0;
    virtual void Load(int argc, char** argv) = 0;
    virtual void Free() = 0;
    void Create(int argc, char** argv);
    void Clear();
};

void ShowLogo();

// ---- CApplication（manager 布局见 ctor 反编译：0x25c）----
class CApplication : public CAppBase
{
public:
    CApplication();
    virtual ~CApplication();
    virtual void Process();
    virtual void Init(int argc, char** argv);
    virtual void Load(int argc, char** argv);
    virtual void Free();
    void CheckArgv(int argc, char** argv);
    void App_Stop();
    void SendTestPacket_1();
    void SendTestPacket_2();
    void TranslateSignal();
    void SwitchQueueTCP();
    void SwitchQueueUDP();
    int Send_Suspend_Signal(const std::string& msg);
    int Send_Term_Signal(const std::string& msg);
    void AttachAppInitor(char** argv);
    CUserManager* Get_UserManager();
    CServerHandler* Get_ServerHandler();
    void* Get_UdpHandler();
    CUserManager* GetUserManager() { return &m_userManager; }
    CTcpNetSystem* Get_TcpNetSystem();
    CMutex* Get_UdpQLock();
    CMutex* Get_UdpBLock();
    UdpRecvQueue* Get_UdpPacketRecvQ();
    UdpRecvQueue* Get_UdpPacketParseQ();
    CTcpServer* FindTcpServer(unsigned int idx);
    CMonitorServer* FindMonitorServer(int idx);

    char m_loaded;                      // +4
    char m_pad5[3];                     // +5
    int m_field8;                       // +8
    CAppInit* m_appInitor;              // +0xc
    CAppConfig* m_appConfig;            // +0x10
    CServerConfig* m_serverConfig;      // +0x14
    CServerHandler* m_serverHandler;    // +0x18
    CFrameCountHandler m_frameCount;    // +0x1c
    CUserManager m_userManager;         // +0x4c
    CKillUSRConfig* m_killUsrConfig;    // +0x68
    CSwapQueue<UdpRecvQueue, 2> m_udpSwapQueue;  // +0x6c
    void* m_udpHandler;                 // +0xc4
    CUdpNetworkThread* m_udpNetworkThread;  // +0xc8
    CTcpNetSystem m_tcpNetSystem;       // +0xcc
    CMutex m_mutex22c;                  // +0x22c
    CMutex m_mutex244;                  // +0x244
};

#endif  // MANAGER_APP_H_
