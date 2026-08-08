#ifndef MONITOR_APP_H_
#define MONITOR_APP_H_

#include <deque>
#include <map>
#include <queue>
#include <set>
#include <string>

#include "MonitorTypes.h"

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
    unsigned char Get_ServerGroup();

    bool m_loaded;                      // +4
    int m_reserved8;                    // +8
    void* m_appInit;                    // +0xc
    char m_userManager[0x7c];           // +0x10
    void* m_field8c;                    // +0x8c
    void* m_field90;                    // +0x90
    void* m_field94;                    // +0x94
    void* m_field98;                    // +0x98
    void* m_serverHandler;              // +0x9c
    CServerHandler* m_fielda0;          // +0xa0
    char m_frameCount[0x30];            // +0xa4
    CInnerMsgHandler* m_innerMsgHandler;  // +0xd4
    char m_swapQueue[0x58];             // +0xd8
    CUdpHandler* m_udpHandler;          // +0x130
    CUdpNetworkThread* m_udpThread;     // +0x134
    char m_udpQLock[4];                 // +0x138
    char m_udpBLock[4];                 // +0x150
    char m_tcpNetSystem[0x160];         // +0x168
    CTaskScheduler* m_taskScheduler;    // +0x2c8
    void* m_field2cc;                   // +0x2cc
    char m_memberManager[0x30];         // +0x2d0
    char m_buddyMgr[0x18];              // +0x300
    CMemoryCashManager* m_memoryCash;   // +0x318
    void* m_field31c;                   // +0x31c
    void* m_field320;                   // +0x320
    CTowerRank* m_towerRank;            // +0x324
    CItemLimitEditionMgr* m_itemLimitMgr;  // +0x328
    CIPCounter* m_ipCounter;            // +0x32c
    void* m_field330;                   // +0x330
    void* m_field334;                   // +0x334
    char m_set338[0x18];                // +0x338
    char m_map350[0x18];                // +0x350
    char m_map368[0x18];                // +0x368
    CPeriodicMessageMgr* m_periodicMsg; // +0x380
    LimitNpcBuyItemManager* m_limitNpc; // +0x384
    void* m_field388;                   // +0x388
    int m_miniCraneSeed;                // +0x38c
    short m_timeSyncHour;               // +0x390
};

#endif  // MONITOR_APP_H_
