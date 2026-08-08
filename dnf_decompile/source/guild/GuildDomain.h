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

// ---- STGuildSkill：5 字节 ----
struct STGuildSkill
{
    STGuildSkill();
    char m_data[5];
};

// ---- STGuildMemberProxy：0x41 ----
struct STGuildMemberProxy
{
    STGuildMemberProxy();
    char m_data[0x41];
};

// ---- STGuildDBInfoOnly：0xbd ----
struct STGuildDBInfoOnly
{
    STGuildDBInfoOnly();
    char m_data[0xbd];
};

// ---- STGuildDBInfo：0xbd + 300*0x41 ----
struct STGuildDBInfo
{
    STGuildDBInfo();
    STGuildDBInfoOnly m_info;         // +0
    STGuildMemberProxy m_members[300];  // +0xbd
};

// ---- STGuildAgitDBInfo ----
struct STGuildAgitDBInfo
{
    STGuildAgitDBInfo();
    char m_data[0x89];
};

struct STGuildMemberChangableInfo
{
    char m_data[0x20];
};

int CheckDayScheduleTimeOver(int hour, long t);

// ---- CBlackUser ----
class CBlackUser
{
public:
    CBlackUser();
    ~CBlackUser();
    void SetBlackUser(char* name, unsigned int time);
    char m_data[0x28];
};

class CGuildCargo;
class CGuildBoard;

enum ENUM_GUILD_CARGO_BEHAVIOR {};
class DnfItemInfo;
struct RandomOption;
struct STGuildCargoDBInfo;
struct STGuildCargoLog;
struct STGuildBoardDBInfo;
struct STTodayGuildMember
{
    char m_data[0x30];
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
    void SetUserInfo(unsigned int dbid, unsigned int charNo, char* name, int channel,
                     CGameServer* server);
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
    void SetGuildMessage(char* msg);
    void SetUserChangableInfo(unsigned char type, char value);
    void SendTcpGameserver(PacketHeader* pkt);
    void SendToGameserver(char* buf, int len);
    void QueryGuildMember(CServerHandler* handler);
    void SendGuildMemberDBInfo(const STGuildMemerDBInfo& info);
    void LoadGuildMember(unsigned int guildKey, STGuildMemerDBInfo& info);
    STGuildMemerDBInfo* GetGuildMemDBInfo();
    void SaveGuildMember(unsigned char type, unsigned int value, CServerHandler* handler,
                         unsigned char flag);
    void ChangeGuildMemberGrade(unsigned char grade);
    void SendSetGuildKeyToUser(unsigned int guildKey, unsigned int grade);
    void MakeGameServerSendUserInfoPacket(unsigned int charNo);
    int RegisterToBlackList(unsigned int charNo, char* name);
    int RegisterToBlackList(unsigned int charNo, char* name, unsigned int param);
    int DeleteToBlackList(unsigned int charNo);
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
    void SetGuildDBFlag(unsigned short flag);
    bool IsSetGuildDBFlag(unsigned short flag);
    void EnableDBSaveFlag();
    bool GetDBSaveFlag();
    unsigned int GetGuildExp();
    void AddGuildExp(unsigned int exp);
    unsigned short GetGuildLevel();
    unsigned short GetGuildRank();
    unsigned int GetMasterId();
    unsigned int GetGuildFund();
    void AddGuildFund(unsigned int fund);
    void SubGuildFund(unsigned int fund);
    bool IsAddableGuildFund(unsigned int fund);
    bool IsCompleteGuildFund();
    int InsertGuildMember(unsigned int charNo, CUser* user);
    int DeleteGuildMember(unsigned int charNo, CUser* user);
    CUser* FindGuildMember(unsigned int charNo);
    void AddGuildMemberPoint(unsigned int charNo, unsigned int point);
    void AddGuildExpUntilLimit(unsigned int exp, unsigned int limit);
    void GuildSkillPointUp(unsigned short point);
    void CheckGuildSkill();
    void ResetGuildPointRank();
    void IncPowerJoinCount();
    void LoadGuild(STGuildDBInfoOnly& info, char* name);
    void SaveGuild(unsigned char flag, CServerHandler* handler, unsigned int param);
    void DBGuildSave(unsigned char flag, CServerHandler* handler, unsigned int param);
    void SetGuildMessage(char* msg);
    void QueryGuild(CServerHandler* handler, unsigned int charNo);
    void SendGuildInfoToMemberOnly(CUser* user);
    void QueryTodayGuildMember(CServerHandler* handler);
    void SetTodayGuildMember(STTodayGuildMember& member);
    void NotifyTodayGuildMember(CUser* user);
    void LoadGuildAgit(CServerHandler* handler, unsigned int charNo);
    void NoticeGuildMemberLogin_Out(CUser* user, char flag);
    void QueryUnconnGuildMemberProxy(CServerHandler* handler, unsigned int charNo);
    int LoadGuildOneMemberProxy(CUser* user);
    void IncTotalCnt_Of_GuildDBInfo();
    void SendGuildInfoToMembers(bool flag);
    void MakeGameServerSendUserInfoPacket(CUser* user, unsigned int guildKey);
    void DBGuildMemberSave(CUser* user, unsigned char flag, CServerHandler* handler,
                           unsigned char param);
    void InsertGuildMemberChanglableInfo(unsigned int charNo);
    void SendToGuild(PacketHeader* pkt);
    void SendToGuildForMail();
    void NotifyMessageToGuildMember();
    void SendGuildInfoToManagers();
    void SendGuildNameChangeToMembers();
    void SendGuildAgitInfoToMembers();
    void NoticeChatMsgToGuildMembers(unsigned int charNo, char* msg, int len, char* name);
    void NoticeChatMsgToGuildMembersHyperLink(unsigned int charNo, int len, char* msg,
                                              unsigned char type, const void* link);
    void UpdateChangableInfoProcess();
    void NoticeEnterToGuildMember(char* info);
    void NoticeSecedeToGuildMember(char* info);
    void DismissGuildMemberAndNotice(unsigned char group);
    bool IsEmpty();
    STGuildDBInfo* GetGuildDBInfo();
    bool IsExistGuildAgit();
    void SetGuildAgitFlag(bool flag);
    unsigned char GetCurSubGuildMasterCnt();
    unsigned short GetTotalCnt_Of_GuildDBInfo();
    void DecTotalCnt_Of_GuildDBInfo();
    int CheckPowerSecedeTime();
    void ChangeGuildMemberCharName(unsigned int charNo, char* name);
    void AddGuildPoint(unsigned short point);
    void SetGuildAgitInfo(STGuildAgitDBInfo& info);
    void SetGuildAgitLevelUp();
    void CreateGuildAgit(CServerHandler* handler, unsigned int a, unsigned int b,
                         unsigned int c, unsigned int d);
    void DeleteGuildAgit(CServerHandler* handler, unsigned int a, unsigned int b);
    void UpgradeGuildAgit(CServerHandler* handler, unsigned int a, unsigned int b,
                          unsigned int c, unsigned int d);
    void AddGuildMember(ST_Notice_Guild_Enter& info, CUser* user);
    void SetSubGuildMaster(unsigned int charNo, bool flag);
    void SecedeProxyMember(ST_Notice_Guild_Secede& info);
    int ChangeGuildMaster(CServerHandler* handler, CUser* user, unsigned int charNo);
    bool ChangeGuildName(char* name, int flag);
    void ChangeUnconnectedGuildMemberGrade(unsigned int charNo, int grade);
    char* getUnconnectedGuildMemberName(unsigned int charNo);
    void WriteGuildMemberMemo(CUser* user, const char* memo);
    void ReplyGuildMembers(CUser* user);
    int GuildLevelUp(CServerHandler* handler, CUser* user);
    void NotifyMemoToGuildMember(CUser* user, const char* memo);
    void NotifyAllTodayGuildMember();
    void NotifyAllAchieveAttendance(unsigned int charNo, unsigned int phase);
    void NoticeMarkChangeToGuildMember(unsigned int charNo);
    void NoticeGuildMasterDelegateToMembers(char* name);
    void NotifyCreateGuildAgitToGuildMember(unsigned int charNo);
    void NotifyDeleteGuildAgitToGuildMember(unsigned int charNo);
    void DBSaveGuildMembers(unsigned char flag, CServerHandler* handler, unsigned char param);
    void DBGuildSaveProcess(CServerHandler* handler);
    unsigned char GetPowerSide();
    void SetPowerSide(unsigned char side);
    unsigned int GetPowerWarPoint();
    void AddPowerWarPoint(unsigned int point);
    void SubPowerWarPoint(unsigned int point);
    void SetPowerSecedeTime(unsigned int time);
    CGuildCargo* GetGuildCargo();
    CGuildBoard* GetGuildBoard();
    std::map<unsigned int, CUser*> m_members;  // +0
    unsigned int m_guildKey;                    // +0x18
    unsigned short m_field1c;                   // +0x1c
    unsigned short m_field1e;                   // +0x1e
    STGuildDBInfo m_dbInfo;                     // +0x20
    STGuildAgitDBInfo m_agitInfo;               // +0x4d09
    char m_field4d0a[100];                      // +0x4d0a
    unsigned short m_field4d70;                 // +0x4d70
    unsigned short m_field4d72;                 // +0x4d72
    unsigned short m_field4d74;                 // +0x4d74
    unsigned short m_field4d92;                 // +0x4d92
    unsigned short m_field4d94;                 // +0x4d94
    unsigned char m_field4d96;                  // +0x4d96
    std::map<unsigned int, STGuildMemberChangableInfo> m_changable;  // +0x4d98
    unsigned char m_field4db0;                  // +0x4db0
    CGuildCargo* m_cargo;                       // +0x4db4（对象在 0x4db4）
    CGuildBoard* m_board;                       // +0x66c4（对象在 0x66c4）
};

// ---- CGuildCargo：0x1928 ----
class CGuildCargo
{
public:
    CGuildCargo();
    ~CGuildCargo();
    void Reset();
    int GetCapacity();
    void SetCapacity(unsigned int capacity);
    int IsValidSlot(int slot);
    void SetGuildInfo(int guildKey);
    bool IsLoadComplete();
    int CalcItemCount();
    int IsEmpty();
    void* GetGuildCargoDBInfo();
    int GetSpecificItemSlot(int itemId);
    void PrintCargo(int behavior);
    void PrintDnfItemInfo(DnfItemInfo& info);
    void AddItem(DnfItemInfo& info, int slot, int count);
    void InsertItem(DnfItemInfo& info, int& slot, int count, int a, int b, int c);
    void DeleteItem(DnfItemInfo& info, int slot, int count, int a, int b, int c);
    void MoveItem(DnfItemInfo& info, DnfItemInfo& info2, int a, int b, int c, int d, int e);
    int CheckInsertItem(int slot, int count, int a, int b, int c);
    void SendGuildCargo(CUser* user);
    void GetHistory(STGuildCargoLog* out);
    void InsertHistory(int behavior, int slot, const char* name, int count,
                       const char* name2, const RandomOption* option);
    void SendHistoryToDBMW(CServerHandler* handler, int behavior, int slot,
                           const char* name, int count);
    void SendGuildCargoToDBMW(CServerHandler* handler, int slot);
    void SetGuildCargoHistory(unsigned int idx, STGuildCargoLog* log);
    void SetGuildCargoDBInfo(STGuildCargoDBInfo& info);
    char m_data[0x1928];
};

// ---- CGuildBoard ----
class CGuildBoard
{
public:
    CGuildBoard();
    ~CGuildBoard();
    void reset();
    void printGuildBoard();
    void setGuildBoardData(unsigned int a, unsigned int b, CGuild* guild, int c,
                           STGuildBoardDBInfo* info);
    void sendGuildBoardData(unsigned int a, unsigned int b, unsigned int c, CUser* user);
    void clearGuildBoardData();
    void deleteGuildBoardData(unsigned int a, unsigned int b, unsigned int c);
    bool isGuildBoardDBAccess();
    bool isWebGuildBoardAction();
    void setGuildBoardDBAccess();
    void setWebGuildBoardAction(bool flag);
    int getGuildBoardDBLoadState();
    void setGuildBoardDBLoadState(int state);
    void sendMessageToDBMW_GuildFund(CServerHandler* handler, int fund, CUser* user);
    void sendMessageToDBMW_GuildLevelUP(CServerHandler* handler, int level, CUser* user);
    void sendMessageToDBMW_GuildAttendance(CServerHandler* handler, int a, int b,
                                           unsigned short c, unsigned short d);
    void sendMessageToDBMW_GuildMasterChanging(CServerHandler* handler, CUser* user,
                                               const char* name);
    char m_data[0x1900];
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
    CGuild* GuildMemLogin(unsigned int guildKey, CUser* user);
    void GuildMemLogout(unsigned int guildKey, CUser* user);
    CGuild* GuildEnter(unsigned int guildKey, ST_Notice_Guild_Enter& info);
    CGuild* GuildSecede(unsigned int guildKey, ST_Notice_Guild_Secede& info);
    CGuild* CreateGuild(unsigned int guildKey, CServerHandler* handler,
                        unsigned int masterId);
    void DeleteGuild(unsigned int guildKey);
    void DeleteGuild(CGuild* guild);
    void GuildDismiss(CGuild* guild);
    int InsertGuild(unsigned int guildKey, CGuild* guild);
    CGuild* FindGuild(unsigned int guildKey);
    bool IsEmptyGuild(unsigned int guildKey);
    int LoadGuild(unsigned int guildKey, STGuildDBInfoOnly& info, char* name);
    void DBGuildProcess(CServerHandler* handler, bool flag);
    void DBGuildAndGuildMemberSave(CServerHandler* handler);
    void DBLoadAllLoginGuild(CServerHandler* handler);
    void SendGuildInfoToMembers(unsigned int guildKey, bool flag);
    void LoadGuildAgit(unsigned int guildKey, CServerHandler* handler);
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
    std::map<unsigned int, STTodayGuildMember> m_todayMembers;  // +0x58
    char m_time1[0x2c];           // +0x70
    std::map<unsigned int, std::vector<unsigned int> > m_attendance;  // +0x9c
    char m_time2[0x2c];           // +0xb4
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
    int IsPowerWarOn();
    unsigned short getPowerWarEndKillPoint();
    void setPowerWarEndKillPoint(unsigned short point);
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
    void ProcessByMinute();
    int IsPowerWarOn();
    void SetPowerInfo(char side, int score);
    void CleanPowerWar();
    int GetPowerScore(int side);
    char GetWinnerSide();
    void IncPowerScore(int side, int score);
    void SetWinnerSide(char side);
    void PrintDebugInfo();
    void SetPowerDBFlag(unsigned short flag);
    void LoadPowerWarCfg(char* path);
    void CalcPowerWarRank(bool flag);
    void EndPowerWarEvent();
    void RewardBonusPoint();
    void SendPowerWarInfo();
    void ComputeWinnerSide();
    void SendPowerWarScore();
    void SaveDBPowerWarRank();
    void StartPowerWarEvent();
    void UpdatePowerWarInfo(bool flag, int side, int score, unsigned int* p);
    void SaveDBPowerWarPoint();
    void SendPowerWarEndInfo(int time);
    unsigned int GetUserPowerWarPoint(int side, unsigned int charNo);
    unsigned int GetUserRankingInPower(int side, unsigned int charNo);
    void SetPowerWarRewardInfo(int a, int b, int c, int d);
    unsigned int GetGuildRankingInPower(int side, unsigned int guildKey);
    unsigned short GetPowerWarEndKillPoint();
    void SendPowerWarProcessInfo(unsigned int charNo);
    void SetPowerWarEndKillPoint(unsigned short point);
    void RewardGuildPowerWarPoint();
    void SaveDBPowerWarBonusPoint();
    void SaveDBPowerWarPointReward();
    void SendPowerWarEndInfoToSpecificUser(CUser* user, unsigned char a, unsigned int b,
                                           unsigned int c, unsigned int d, unsigned int e,
                                           unsigned int f, unsigned int g);
    void SendPowerWarEndInfoInSpecificPower(char side);
    char m_data[0x1a0];
};

// ---- CMemoryCashManager ----
class CMemoryCashManager
{
public:
    CMemoryCashManager();
    ~CMemoryCashManager();
    void Init(CApplication* app);
    int QueryCashMemoryBlackList(CUser* user);
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
    void* Get_TcpHandler();
    void* Get_TcpSwapQPacket();
    CMutex* Get_TcpRecvQLock();
    CMutex* Get_TcpRecvBLock();
    void* Get_TcpSendQPacket();
    CMutex* Get_TcpSendQLock();
    CMutex* Get_TcpSendBLock();
    unsigned short Get_TcpServerPort();
    void Init(unsigned short port);
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
