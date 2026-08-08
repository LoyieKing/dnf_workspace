#ifndef MONITOR_APP_H_
#define MONITOR_APP_H_

#include <deque>
#include <map>
#include <queue>
#include <set>
#include <string>

#include "MonitorTable.h"
#include "MonitorTypes.h"
#include "Thread.h"

typedef std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*, std::allocator<CUdpRecvBuffer*> > > UdpRecvQueue;

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

CAppBase* CApplicationInstance();

void ShowLogo();

// ---- CApplication（monitor 布局见 ctor 反编译）----
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
    void AttachAppInitor(char** argv);
    void ProcessTimeSync();
    void UpdateCollectItems();
    void UpdateMiniCraneSeed();
    void SendMiniCraneRandomSeed();
    void SetMiniCraneRandomSeed();
    void SwitchQueueTCP();
    void SwitchQueueUDP();
    CItemLimitEditionMgr* getItemLimitEditionMgr();
    CTcpNetSystem* Get_TcpNetSystem();
    void OnGameServerDown(CGameServer* server);
    CServerHandler* Get_ServerHandler();
    CUserManager* Get_UserManager();
    CMemberManager* Get_MemberManager();
    CBuddyRegisterManager* Get_BuddyRegisterManager();
    CTaskScheduler* GetTaskScheduler();
    void* Get_UdpPacketRecvQ();
    CUdpHandler* Get_UdpHandler();
    void* Get_UdpQLock();
    void* Get_UdpBLock();
    char Send_Term_Signal(const std::string& file);
    void Send_Suspend_Signal(const std::string& file);
    void App_Stop();
    void TranslateSignal();
    int AddAccusationCharac(const std::string& a, const std::string& b, int c, char type);
    void ClearAccusationList();
    void Add_GM_id(unsigned int id);
    void Call_DeleteMember(unsigned int key, CUser* user);
    void Call_ResetBlackList(unsigned int charNo);
    void Call_ResetBuddyList(unsigned int charNo);
    void Call_ResetUserMemberInfo(unsigned int key);
    unsigned char Get_ServerGroup();
    void* GetGMAccounts();
    void* getIPCounter();
    void* getTowerRank();
    char isGM_regFromChannel(unsigned int channel);
    char isAbleUserChatWithGM(unsigned int channel, unsigned int charNo);
    void AddChattableUserWithGM(unsigned int channel, unsigned int charNo);
    void DisableChatUserWithGM(unsigned int channel, unsigned int charNo);

    bool m_loaded;                      // +4
    int m_reserved8;                    // +8
    void* m_appInit;                    // +0xc
    CUserManager m_userManager;         // +0x10
    CAppConfig* m_appConfig;            // +0x8c
    void* m_field90;                    // +0x90
    CMemberConfig* m_memberConfig;      // +0x94
    CMemberExpTbl* m_memberExpTbl;      // +0x98
    CKillUSRConfig* m_serverHandler;    // +0x9c
    CServerHandler* m_serverHandler2;   // +0xa0
    CFrameCountHandler m_frameCount;    // +0xa4
    CInnerMsgHandler* m_innerMsgHandler;  // +0xd4
    CSwapQueue<UdpRecvQueue, 2> m_udpSwapQueue;  // +0xd8
    CUdpHandler* m_udpHandler;          // +0x130
    CUdpNetworkThread* m_udpThread;     // +0x134
    CMutex m_udpQLock;                  // +0x138
    CMutex m_udpBLock;                  // +0x150
    CTcpNetSystem m_tcpNetSystem;       // +0x168
    CTaskScheduler* m_taskScheduler;    // +0x2c8
    void* m_field2cc;                   // +0x2cc
    CMemberManager m_memberManager;     // +0x2d0
    CBuddyRegisterManager m_buddyMgr;   // +0x300
    CMemoryCashManager* m_memoryCash;   // +0x318
    void* m_field31c;                   // +0x31c
    void* m_field320;                   // +0x320
    CTowerRank* m_towerRank;            // +0x324
    CItemLimitEditionMgr* m_itemLimitMgr;  // +0x328
    CIPCounter* m_ipCounter;            // +0x32c
    void* m_field330;                   // +0x330
    void* m_field334;                   // +0x334
    std::set<std::pair<std::string, int> > m_set338;  // +0x338
    std::map<const std::string, int> m_map350;        // +0x350
    std::map<unsigned int, std::list<unsigned int> > m_map368;  // +0x368
    CPeriodicMessageMgr* m_periodicMsg; // +0x380
    LimitNpcBuyItemManager* m_limitNpc; // +0x384
    void* m_field388;                   // +0x388
    int m_miniCraneSeed;                // +0x38c
    short m_timeSyncHour;               // +0x390
};

#endif  // MONITOR_APP_H_
