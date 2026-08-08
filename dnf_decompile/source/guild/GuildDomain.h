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
class CServerHandler;
class CBlackUser;
class CGuild;
struct STBlackUserDBType;

// ---- STGuildMemerDBInfo ----
struct STGuildMemerDBInfo
{
    char m_data[0x20];
};

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

// ---- CUser：0x8c ----
class CUser
{
public:
    CUser();
    ~CUser();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    unsigned int GetDBID();
    void SetDBID(unsigned int dbid);
    unsigned int GetUniqCharNo();
    void SetUniqCharNo(unsigned int charNo);
    int GetIdByChannel();
    void SetIdByChannel(int channel);
    CGameServer* GetGameServer();
    void SetGameServer(CGameServer* server);
    CTcpGameServer* GetTcpGameServer();
    void SetTcpGameServer(CTcpGameServer* server);
    void SetUserPosState(unsigned char state);
    char* GetCharName();
    void ChangeCharName(char* name);
    void ResetCharInfo();
    void SetUserInfo_CharNo(char sex, char job, short flag, unsigned int charNo, char* name);
    unsigned char GetJob();
    unsigned char GetGrowthType();
    unsigned char GetSex();
    void SetSex(unsigned char sex);
    void SetSsn(char* ssn);
    char* GetSsn();
    unsigned char GetLevel();
    unsigned int GetGuildKey();
    void ResetGuild();
    void AttachGuild(CGuild* guild);
    void DetachGuild();
    unsigned short GetGuildMemFlag();
    void SetGuildMemFlag(unsigned short flag);
    void ResetGuildMemFlag(unsigned short flag);
    bool IsSetGuildMemFlag(unsigned short flag);
    bool IsSubGuildMaster();
    void SetGuildInviteFact(unsigned int guildId, unsigned int callerId, unsigned char fact);
    unsigned int GetGuildInviteGuildId();
    unsigned int GetGuildInviteCallerId();
    void GuildInviteProcess();
    void SetGuildMemberMemo(const char* memo);
    void AddGuildMemberPoint(unsigned int point);
    void ResetGuildPoint();
    void SetUserChangableInfo(unsigned char type, char value);
    void SendTcpGameserver(PacketHeader* pkt);
    void SendToGameserver(char* buf, int len);
    void QueryGuildMember(CServerHandler* handler);
    void SendGuildMemberDBInfo(const STGuildMemerDBInfo& info);
    void LoadGuildMember(unsigned int guildKey, STGuildMemerDBInfo& info);
    void SaveGuildMember(unsigned char type, unsigned int value, CServerHandler* handler,
                         unsigned char flag);
    void ChangeGuildMemberGrade(unsigned char grade);
    void SendSetGuildKeyToUser(unsigned int guildKey, unsigned int grade);
    void MakeGameServerSendUserInfoPacket(unsigned int charNo);
    void RegisterToBlackList(unsigned int charNo, char* name);
    void RegisterToBlackList(unsigned int charNo, char* name, unsigned int param);
    void DeleteToBlackList(unsigned int charNo);
    void ResetBlackList();
    int IsBlackUser(unsigned int charNo);
    void GetBlackList(unsigned char* count, STBlackUserDBType* list);
    void GetBlackList(unsigned char* count, unsigned int* list);
    unsigned short GetBlackListSize();
    unsigned short GetBlackListDBFlag();
    void SetBlackListDBFlag(unsigned short flag);
    void* GetMapBlackList();
    void RegisterToCashBlackList(std::map<unsigned int, CBlackUser*>& map);
    unsigned int m_dbid;              // +0
    unsigned int m_charNo;            // +4
    CGameServer* m_gameServer;        // +8
    CTcpGameServer* m_tcpGameServer;  // +0xc
    unsigned char m_posState;         // +0x10
    int m_channel;                    // +0x14
    char m_charInfo[0x1e];            // +0x18（name@0x18, level/job/sex 等）
    unsigned char m_job;              // +0x36
    unsigned char m_growthType;       // +0x37
    unsigned short m_guildMemFlag;    // +0x38
    unsigned char m_field3a;          // +0x3a
    char m_field3b[7];                // +0x3b
    CGuild* m_guild;                  // +0x44
    unsigned short m_field48;         // +0x48
    STGuildMemerDBInfo m_guildDBInfo; // +0x4a
    std::map<unsigned int, CBlackUser*> m_blackList;  // +0x64
    unsigned short m_field7c;         // +0x7c
    char m_field7e;                   // +0x7e
    unsigned int m_field80;           // +0x80
    unsigned int m_field84;           // +0x84
};

// ---- CUserManager：0x4c ----
class CUserManager
{
public:
    CUserManager();
    ~CUserManager();
    void Init(CApplication* app);
    void Process();
    void ProcessByMinute();
    int Size();
    CUser* CreateUser(unsigned int dbid, unsigned int charNo, char* charName, int channel,
                      CGameServer* server);
    void DeleteUser(unsigned int dbid);
    void DeleteUser(CUser* user);
    void DeleteUser_CharNo(unsigned int charNo);
    void DeleteUser_CharName(const std::string& name);
    int InsertUser(unsigned int dbid, CUser* user);
    int InsertUser_CharNo(unsigned int charNo, CUser* user);
    int InsertUser_CharName(char* name, CUser* user);
    CUser* FindUser(unsigned int dbid);
    CUser* FindUser_CharNo(unsigned int charNo);
    CUser* FindUser_CharName(const char* name);
    void DeleteUsersOnGameServerDown(CGameServer* server);
    void DeleteUsersOnTcpGameServerDown(CTcpGameServer* server);
    void DeleteBlackUserOnCharacDelete(unsigned int charNo);
    void RefreshGuildAttendanceInfo();
    std::map<unsigned int, CUser*> m_users;         // +0
    std::map<unsigned int, CUser*> m_charNoUsers;   // +0x18
    std::map<std::string, CUser*> m_charNameUsers;  // +0x30
    CApplication* m_app;                            // +0x48
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

struct ST_Notice_Guild_Enter;
struct ST_Notice_Guild_Secede;
struct STGuildDBInfoOnly;
struct STTodayGuildMember;
struct STAttendanceInfo;

// ---- CGuild ----
class CGuild
{
public:
    CGuild(unsigned int guildKey);
    ~CGuild();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    unsigned int GetGuildKey();
    bool IsSubGuildMaster(unsigned int dbid);
    bool IsGuildMaster(unsigned int dbid);
    char* GetGuildName();
    unsigned short GetGuildDBFlag();
    char m_data[0x600];
};

// ---- CGuildManager：0xe0 ----
class CGuildManager
{
public:
    CGuildManager();
    ~CGuildManager();
    void Init(CApplication* app);
    void Process();
    void ProcessByMinute();
    void DBSaveProcess(CApplication* app, bool force);
    void AttendGuild(unsigned int guildKey, unsigned int charNo);
    void GuildMemLogin(unsigned int guildKey, CUser* user);
    void GuildMemLogout(unsigned int guildKey, CUser* user);
    void GuildEnter(unsigned int guildKey, ST_Notice_Guild_Enter& info);
    void GuildSecede(unsigned int guildKey, ST_Notice_Guild_Secede& info);
    void CreateGuild(unsigned int guildKey, CServerHandler* handler, unsigned int masterId);
    void DeleteGuild(unsigned int guildKey);
    void DeleteGuild(CGuild* guild);
    void GuildDismiss(CGuild* guild);
    int InsertGuild(unsigned int guildKey, CGuild* guild);
    CGuild* FindGuild(unsigned int guildKey);
    bool IsEmptyGuild(unsigned int guildKey);
    void LoadGuild(unsigned int guildKey, STGuildDBInfoOnly& info, char* name);
    void DBGuildProcess(CServerHandler* handler, bool flag);
    void DBGuildAndGuildMemberSave(CServerHandler* handler);
    void DBLoadAllLoginGuild(CServerHandler* handler);
    void SendGuildInfoToMembers(unsigned int guildKey, bool flag);
    int GetTodayMember(unsigned int guildKey);
    void InsertTodayMember(unsigned int guildKey, STTodayGuildMember& member);
    void RefreshTodayMember(bool flag);
    void RefreshAttendanceInfo(bool flag);
    void CheckAchieveAttendance(unsigned int guildKey);
    void RewardAttendance(unsigned int guildKey, unsigned int charNo, unsigned int flag);
    int GetAttendancePhase(unsigned int guildKey);
    void GetAttendanceInfo(unsigned int guildKey, STAttendanceInfo& info);
    int GetAttendanceExp(unsigned int guildKey, unsigned int phase);
    unsigned int GetGuildExpWithLevel(unsigned char level);
    int GetGuildLevelWithExp(unsigned int exp);
    unsigned int GetMaxGuildExp1();
    unsigned int GetMaxGuildExp2();
    void SetGuildExpTable(unsigned int* table);
    bool IsGuildWarEventOn(unsigned char group);
    bool IsGuildWarEnterableChar(unsigned char group, unsigned int charNo);
    CGuildWar* GetGuildWar();
    void CargoLock();
    void CargoUnlock();
    bool IsCargoLock();
    CApplication* m_app;          // +0
    std::map<unsigned int, CGuild*> m_guilds;  // +4
    CScheduler m_scheduler;       // +0x1c
    unsigned char m_field40;      // +0x40
    CGuildWar m_guildWar;         // +0x44
    int m_field70[0x2c / 4];      // +0x70
    char m_rest[0x8c];            // +0x9c-0xe0
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
#endif  // GUILD_DOMAIN_H_
