#ifndef GUILD_DOMAIN_H_
#define GUILD_DOMAIN_H_

#include <map>
#include <string>
#include <vector>

#include "Thread.h"

class CApplication;
class CUser;
class CGameServer;
class CTcpGameServer;
class PacketHeader;

// ---- CScheduler：0x8 ----
class CScheduler
{
public:
    CScheduler();
    ~CScheduler();
    void SetSpecialHour(int hour);
    void SetSpecialDayHour(int day, int hour);
    void SetSpecificDayScheduleHour(int day, int hour);
    int IsOnTimeSpecialHour(int hour, int min);
    int IsOnTimeSpecialDayHour(int day, int hour, int min);
    int GetSpecificDayScheduleHour(int day);
    char m_day;       // +0
    char m_min;       // +1
    char m_hour;      // +2
    char m_sec;       // +3
    unsigned short m_week;  // +4
    char m_flag1;     // +6
    char m_flag2;     // +7
};

// ---- CUser ----
class CUser
{
public:
    CUser();
    ~CUser();
    char m_data[0x200];
};

// ---- CUserManager：0x4c ----
class CUserManager
{
public:
    CUserManager();
    ~CUserManager();
    void Init(CApplication* app);
    void Process();
    char m_data[0x4c];
};

// ---- CGuildWar ----
class CGuildWar
{
public:
    CGuildWar();
    ~CGuildWar();
    void DBSaveProcess(CApplication* app);
    int IsGuildWarEnterableGuild(unsigned int guildId);
    char m_data[0x100];
};

// ---- CGuildManager：0xe0 ----
class CGuildManager
{
public:
    CGuildManager();
    ~CGuildManager();
    void Init(CApplication* app);
    void Process();
    void DBSaveProcess(CApplication* app, bool force);
    void CargoLock();
    void CargoUnlock();
    char m_data[0xe0];
};

// ---- CPowerWarGuildInfo / CPowerWarCharacInfo ----
class CPowerWarGuildInfo
{
public:
    CPowerWarGuildInfo();
    ~CPowerWarGuildInfo();
    void Initialize();
    void Clean();
    char m_data[0x34];
};

class CPowerWarCharacInfo
{
public:
    CPowerWarCharacInfo();
    ~CPowerWarCharacInfo();
    void Initialize();
    void Clean();
    char m_data[0x20];
};

// ---- CPowerWar ----
class CPowerWarConfig;
class CPowerWar
{
public:
    CPowerWar();
    ~CPowerWar();
    char m_data[0x130];
};

// ---- CPower ----
class CPower
{
public:
    CPower();
    ~CPower();
    void SetScore(int score);
    int GetScore();
    CPowerWarGuildInfo m_guildInfo;    // +8
    CPowerWarCharacInfo m_characInfo;  // +0x3c
    int m_field4;                      // +4
};

// ---- CPowerManager ----
class CPowerManager
{
public:
    CPowerManager();
    ~CPowerManager();
    void InitPowerManager(const char* path, CApplication* app);
    void Process();
    char m_data[0x1a0];
};

// ---- CMemoryCashManager ----
class CMemoryCashManager
{
public:
    CMemoryCashManager();
    ~CMemoryCashManager();
    void Init(CApplication* app);
    char m_data[0x1c];
};

// ---- CTcpNetSystem：0x160 ----
class CTcpNetSystem
{
public:
    CTcpNetSystem();
    ~CTcpNetSystem();
    void PushTcpSendPacketQ(PacketHeader* pkt);
    void* Acquire_TcpSendBuffer(unsigned int size);
    void Process();
    char m_data[0x160];
};

// ---- CTcpRecvBuffer ----
class CTcpRecvBuffer
{
public:
    char m_data[0x2000];
};

// ---- 基础结构 ----
struct STGuildMemerDBInfo
{
    char m_data[0x20];
};

#endif  // GUILD_DOMAIN_H_
