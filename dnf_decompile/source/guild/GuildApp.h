#ifndef GUILD_APP_H_
#define GUILD_APP_H_

#include <deque>
#include <map>
#include <queue>
#include <string>

#include "Thread.h"
#include "GuildThread.h"
#include "GuildDomain.h"

class CAppConfig;
class CServerConfig;
class CServerHandler;
class CAppInit;
class CInnerMsgHandler;
class CUdpHandler;
class CSignalTranslator;
class CPacketDecoder;
class CPacketTranslater;
class CUdpRecvBuffer;
class CGameServer;
class CTcpGameServer;
class CMemoryCashManager;

void ShowLogo();

// ---- CAppBase：vptr@0 ----
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

// ---- CApplication（guild 布局，见 ctor 反编译）----
// vptr@0 / loaded@4 / @8 / CAppInit*@0xc / CUserManager@0x10(0x4C) /
// 0x5c=CAppConfig* 0x60=CServerConfig* 0x64=@ 0x68=CServerHandler* /
// CFrameCountHandler@0x6c(0x30) / @0x9c / CSwapQueue@0xa0(0x58) /
// CUdpHandler*@0xf8 / @0xfc / CMutex@0x100 / CMutex@0x118 /
// CTcpNetSystem@0x130(0x160) / CGuildManager@0x290(0xE0) / CPowerManager@0x370 /
// CMemoryCashManager*@0x510
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
    void App_Stop();
    void SendTestPacket_1();
    void SendTestPacket_2();
    void TranslateSignal();
    void AttachAppInitor(char** argv);
    unsigned char Get_ServerGroup();
    CServerHandler* Get_ServerHandler();
    CUdpHandler* Get_UdpHandler();
    CMutex* Get_UdpQLock();
    CMutex* Get_UdpBLock();
    void* Get_UdpPacketRecvQ();
    void* Get_UdpPacketParseQ();
    void SwitchQueueTCP();
    void SwitchQueueUDP();
    CTcpNetSystem* Get_TcpNetSystem();
    CGuildManager* Get_GuildManager();
    CPowerManager* GetPowerManager();
    CUserManager* Get_UserManager();
    CMemoryCashManager* Get_MemoryCashManager();
    CGameServer* FindGameServer(int group);
    void* GetGMAccounts();
    CTcpGameServer* FindTcpGameServer(unsigned int group);
    void OnGameServerDown(CGameServer* server);
    void OnTcpGameServerDown(CTcpGameServer* server);
    void Call_DeleteGuildMember(unsigned int group, CUser* user);

    bool m_loaded;                      // +4
    int m_reserved8;                    // +8
    CAppInit* m_appInit;                // +0xc
    CUserManager m_userManager;         // +0x10
    CAppConfig* m_appConfig;            // +0x5c
    CServerConfig* m_serverConfig;      // +0x60
    int m_reserved64;                   // +0x64
    CServerHandler* m_serverHandler;    // +0x68
    CFrameCountHandler m_frameCount;    // +0x6c
    int m_reserved9c;                   // +0x9c
    char m_swapQueue[0x58];             // +0xa0
    CUdpHandler* m_udpHandler;          // +0xf8
    int m_reservedfc;                   // +0xfc
    CMutex m_udpQLock;                  // +0x100
    CMutex m_udpBLock;                  // +0x118
    CTcpNetSystem m_tcpNetSystem;       // +0x130
    CGuildManager m_guildManager;       // +0x290
    CPowerManager m_powerManager;       // +0x370
    CMemoryCashManager* m_memoryCash;   // +0x510
};

#endif  // GUILD_APP_H_
