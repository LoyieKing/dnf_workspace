#ifndef COSERVER_APP_H_
#define COSERVER_APP_H_

#include <deque>
#include <queue>
#include <string>

#include "Thread.h"
#include "CoserverThread.h"
#include "CoserverUser.h"

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
class CPacketDecoder;
class CPacketTranslater;
class CKillUSRConfig;
class CGameServer;
class CUdpRecvBuffer;

// ---- CAppBase：vptr@0 ----
// vtable：dtor / dtor / Process / Init / Load / Free
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

// ---- CApplication ----
// vptr@0 / loaded@4 / @8 / CAppInit*@0xc / CAppConfig*@0x10 / CServerConfig*@0x14 /
// CKillUSRConfig*@0x18 / CServerHandler*@0x1c / CFrameCountHandler@0x20(0x30) /
// CInnerMsgHandler*@0x50 / queue[10]@0x54(0x28) / CMutex[10]@0x1e4(0x18) /
// CUdpHandler*[101]@0x2d4 / CNetworkThread*[101]@0x468 / CAppThread*[10]@0x5f4 /
// CMutex@0x624 / CUserManager@0x63c（内嵌，0xf4）
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
    int Send_Term_Signal(const std::string& name);
    void Send_Suspend_Signal(const std::string& name);
    CGameServer* FindGameServer(int group, int channel);
    void App_Stop();
    void SendTestPacket_1();
    void SendTestPacket_2();
    void TranslateSignal();
    void AttachAppInitor(char** argv);
    std::queue<CUdpRecvBuffer*>* Get_QPacket();
    CMutex* Get_QLock();
    CMutex* Get_BLock();
    CUdpHandler* Get_UdpHandler(int idx);
    CUserManager* Get_UserManager();

    bool m_loaded;                    // +4
    int m_reserved1;                  // +8
    CAppInit* m_appInit;              // +0xc
    CAppConfig* m_appConfig;          // +0x10
    CServerConfig* m_serverConfig;    // +0x14
    CKillUSRConfig* m_killUsrConfig;  // +0x18
    CServerHandler* m_serverHandler;  // +0x1c
    CFrameCountHandler m_frame;       // +0x20
    CInnerMsgHandler* m_innerMsg;     // +0x50
    std::queue<CUdpRecvBuffer*> m_udpQueues[10];  // +0x54
    CMutex m_udpLocks[10];            // +0x1e4
    CUdpHandler* m_udpHandlers[101];  // +0x2d4
    CNetworkThread* m_netThreads[101];// +0x468
    CAppThread* m_appThreads[10];     // +0x5f4
    CMutex m_lock1;                   // +0x624
    CUserManager m_userManager;       // +0x63c（内嵌）
};

// 全局单例
CApplication* CApplicationInstance();
void ShowLogo();
CSignalTranslator* CSignalTranslatorInstance();
CPacketDecoder* CPacketDecoderInstance();

#endif // COSERVER_APP_H_
