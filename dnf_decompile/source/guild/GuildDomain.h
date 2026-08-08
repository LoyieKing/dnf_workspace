#ifndef GUILD_DOMAIN_H_
#define GUILD_DOMAIN_H_

#include <map>
#include <queue>
#include <deque>
#include <list>
#include <algorithm>
#include <string>
#include <vector>

#include "Thread.h"
#include "GuildTable.h"

class CApplication;
class CUser;
class CGameServer;
class CTcpGameServer;
class PacketHeader;
class CServerHandler;
class CBlackUser;
class CGuild;
struct STBlackUserDBType
{
    STBlackUserDBType();
    char m_data[0x28];
};
class TiXmlNode;

// ---- STGuildMemerDBInfo ----
struct STGuildMemerDBInfo
{
    STGuildMemerDBInfo();
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
bool CheckDailyScheduleTimeOver(int hour, long t);
int CheckDayHourScheduleTimeOver(int day, int hour, long t);
void GetScheduleTimeAsWDay(int day, int hour);
struct STGuildWarInfo
{
    unsigned int m_guildKey;  // +0
    unsigned int m_point;     // +4
    char m_data[0x8];
};
struct ST_Guild_War_Rank_Info;
bool GuildWarPairDataCompare(const std::pair<unsigned int, STGuildWarInfo*>& a,
                             const std::pair<unsigned int, STGuildWarInfo*>& b);

// ---- CBlackUser ----
class CBlackUser
{
public:
    CBlackUser();
    ~CBlackUser();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    void SetBlackUser(char* name, unsigned int time);
    char* GetName();
    unsigned int GetOccurTime();
    char m_data[0x28];
};

class CGuildCargo;
class CGuildBoard;

enum ENUM_GUILD_CARGO_BEHAVIOR {};
enum ENUM_POWER_SIDE_TYPE {};
enum ENUM_DB_LOAD_STATE {};
class DnfItemInfo;
struct RandomOptionField
{
    void reset();
    char m_data[3];
};
struct RandomOptionSeed
{
    void reset();
    char m_data[1];
};
struct RandomOption
{
    void reset();
    char m_data[0xe];
};
struct UpgradeSeparateInfo
{
    UpgradeSeparateInfo();
    void reset();
    unsigned char GetUpgradeSeparate() const;
    char m_data[1];
};
struct ReservedCapacity
{
    ReservedCapacity();
    void reset();
    char m_data[0xc];
};
struct STGuildMemberCharacData
{
    STGuildMemberCharacData();
    char m_data[0x21];
};
struct STGuildCargoDBInfo
{
    STGuildCargoDBInfo();
    char m_data[0x18dc];
};
struct STGuildCargoLog;
struct STGuildBoardDBInfo
{
    STGuildBoardDBInfo();
    char m_data[0xa5];
};
struct STPowerWarGuildInfo
{
    STPowerWarGuildInfo();
    static bool Compare(const STPowerWarGuildInfo* a, const STPowerWarGuildInfo* b);
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char m_data[0x14];
};
struct STPowerWarCharacInfo
{
    STPowerWarCharacInfo();
    static bool Compare(const STPowerWarCharacInfo* a, const STPowerWarCharacInfo* b);
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char m_data[0x10];
};
struct STGuildRank
{
    STGuildRank();
    char m_data[0x10];
};
struct STUserRank
{
    STUserRank();
    char m_data[0x10];
};
struct STDBSavePowerWarPoint
{
    STDBSavePowerWarPoint();
    char m_data[0x10];
};
struct Packet_DB_Save_Power_War_Point;
struct Packet_DB_Save_Power_War_Bonus_Point;
struct STPowerWarScheduleTime
{
    STPowerWarScheduleTime() {}
    ~STPowerWarScheduleTime() {}
    char m_data[0x10];
};

// ---- ST_PowerWarEventStartTimeConfig：0x14 ----
struct ST_PowerWarEventStartTimeConfig
{
    ST_PowerWarEventStartTimeConfig();
    ~ST_PowerWarEventStartTimeConfig();
    unsigned char m_day;    // +0
    unsigned char m_hour;   // +1
    unsigned char m_min;    // +2
    char m_pad;             // +3
    int m_field4;           // +4
    std::vector<STPowerWarScheduleTime> m_schedule;  // +8
};

namespace WongWork
{
class CGMAccounts
{
public:
    struct stGMInfo_t
    {
        bool operator==(const stGMInfo_t& other) const;
        unsigned int m_field0;
        unsigned char m_field1;
    };
    void LoadGmList(unsigned int group, int index);
    void clearGmList();
    void AppendGM_Sys(unsigned int id, char flag);
    void loadGMAccounts(const char* path);
    int isGM(unsigned int id);
    void appendGM(unsigned int id, unsigned int value);
    void removeGM(unsigned int id, unsigned int value);
    stGMInfo_t getGMInfo(unsigned int id) const;
    std::list<stGMInfo_t> m_list;
};
}
struct hyperlink_item_info
{
    char m_data[0x40];
};
class DnfItemInfo
{
public:
    DnfItemInfo();
    void reset();
    char m_data[0x35];
};
struct STTodayGuildMember
{
    char m_data[0x30];
};

struct STGuildMemberWebConnInfo
{
    char m_data[0x5dc];
};

struct STGuildCallInfo
{
    STGuildCallInfo();
    char m_data[0x1d];
};

struct STUserPoint
{
    STUserPoint();
    char m_data[8];
};

struct STPowerWarPointInfo
{
    STPowerWarPointInfo();
    char m_data[8];
};

struct ST_GuildCreateFromWeb
{
    ST_GuildCreateFromWeb();
    char m_data[0x1f];
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
    void Clear();
    void SetSpecialWeekDayHour(std::vector<STPowerWarScheduleTime> schedule);
    void SetSpecialWeekDayHour(int day, int hour);
    int IsOnTimeSpecialWeekDayHour(int day, int hour, int min);
    void GetNextScheduleTime(unsigned char& hour, unsigned char& min);
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
    void SetUserChangableInfo(short type, char value);
    void AddGuildMemberPoint(unsigned int point);
    void ResetGuildPoint();
    void SetGuildMessage(char* msg);
    void SendTcpGameserver(PacketHeader* pkt);
    void SendToGameserver(char* buf, int len);
    void QueryGuildMember(CServerHandler* handler);
    void SendGuildMemberDBInfo(STGuildMemerDBInfo& info);
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
    void GetBlackList(unsigned char& count, STBlackUserDBType* list);
    void GetBlackList(unsigned char& count, unsigned int* list);
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
    void DeleteUser_CharName(std::string name);
    int InsertUser(unsigned int dbid, CUser* user);
    int InsertUser_CharNo(unsigned int charNo, CUser* user);
    int InsertUser_CharName(char* name, CUser* user);
    CUser* FindUser(unsigned int dbid) const;
    CUser* FindUser_CharNo(unsigned int charNo) const;
    CUser* FindUser_CharName(std::string name) const;
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
    void SetGuildWarEvent(bool flag, unsigned char param);
    bool IsGuildWarEventOn();
    void InitGuildWarInfo();
    void Clear_VtGuildWarInfo();
    void AddGuildWarPoint(unsigned int guildId, int point);
    void Rank();
    void RankProcess();
    void SameRankWork();
    void printGuildWarRank();
    int GetGuildWarInfo(unsigned int* a, unsigned int* b, unsigned short* c);
    int GetGuildWarInfo(ST_Guild_War_Rank_Info* info);
    int Find_GuildWarInfo(unsigned int guildId);
    void Insert_GuildWarInfo(STGuildWarInfo* info);
    int GetGuildWarInfoDBSave(unsigned int* a, unsigned int* b);
    char m_data[0x100];
};

struct ST_Notice_Guild_Enter
{
    ST_Notice_Guild_Enter();
    char m_data[0x41];
};
struct ST_Notice_Guild_Secede
{
    ST_Notice_Guild_Secede();
    char m_data[0x43];
};
struct STGuildDBInfoOnly;
struct STTodayGuildMember;
struct STAttendanceInfo
{
    STAttendanceInfo();
    char m_data[0x1c];
};

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
    int LoadGuildOneMemberProxy(STGuildMemberProxy& proxy);
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
    void NoticeChatMsgToGuildMembers(unsigned int charNo, char* msg, int len,
                                     const char* name);
    void NoticeChatMsgToGuildMembersHyperLink(unsigned int charNo, char* msg, int len,
                                              unsigned char type, hyperlink_item_info* link,
                                              const char* name);
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
    void DBSavePowerSecedeTime(unsigned char flag, CServerHandler* handler);
    void CallGuildAllMembersProxy(CUser* user, CServerHandler* handler);
    void QueryGuildAllMembersProxy(CServerHandler* handler, unsigned int charNo);
    void LoadGuildAllMembersProxy(STGuildMemberProxy& proxy, char flag, char param);
    int ReplyGuildMembersToWeb(STGuildMemberWebConnInfo* info);
    void DBSaveGuildMemberUnChangableInfo(CServerHandler* handler, unsigned int a,
                                          unsigned int b, char* name);
    void DismissGuildMemberAndNotice(int group);
    void ReplyGuildAllMembers(CUser* user);
    int BuyGuildSkill(int skillId, int slot, short param, unsigned int charNo);
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
    void PrintCargo(ENUM_GUILD_CARGO_BEHAVIOR behavior);
    void PrintDnfItemInfo(DnfItemInfo& info);
    void AddItem(DnfItemInfo& info, int slot, int count);
    int InsertItem(DnfItemInfo& info, int& slot, int count, unsigned char a, int b);
    int DeleteItem(DnfItemInfo& info, int slot, int count, unsigned char a, int b, int c);
    void MoveItem(DnfItemInfo& info, DnfItemInfo& info2, int a, int b, int c, int d, int e);
    int CheckInsertItem(int slot, int count, int a, unsigned char b, int c);
    void SendGuildCargo(CUser* user);
    void GetHistory(STGuildCargoLog* out);
    void InsertHistory(ENUM_GUILD_CARGO_BEHAVIOR behavior, int slot, const char* name,
                       int count, int param, const RandomOption* option);
    void SendHistoryToDBMW(CServerHandler* handler, ENUM_GUILD_CARGO_BEHAVIOR behavior,
                           int slot, const char* name, int count, int param,
                           DnfItemInfo& info);
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
    void setGuildBoardDBLoadState(ENUM_DB_LOAD_STATE state);
    void sendMessageToDBMW_GuildFund(CServerHandler* handler, int fund, CUser* user);
    void sendMessageToDBMW_GuildLevelUP(CServerHandler* handler, int level, CUser* user);
    void sendMessageToDBMW_GuildAttendance(CServerHandler* handler, int a, int b,
                                           unsigned int c, unsigned int d);
    void sendMessageToDBMW_GuildMasterChanging(CServerHandler* handler, CUser* user,
                                               const char* name);
    char m_data[0x1900];
};

// ---- CGuildManager：0xe0 ----
struct ST_Guild_War_Rank_Info;
class CGuildManager
{
public:
    CGuildManager();
    ~CGuildManager();
    void Init(CApplication* app);
    void Process();
    void ProcessByMinute();
    void ProcessBySecond();
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
    void RewardAttendance(unsigned int guildKey, unsigned int charNo, int flag);
    int GetAttendancePhase(unsigned int guildKey);
    void GetAttendanceInfo(unsigned int guildKey, STAttendanceInfo& info);
    int GetAttendanceExp(unsigned int guildKey, int phase);
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
    virtual ~CPowerWarGuildInfo();
    void Initialize();
    void Clean();
    STPowerWarGuildInfo* CreatePowerwarGuild();
    void DeletePowerWarGuild(STPowerWarGuildInfo* info);
    STPowerWarGuildInfo* FindPowerwarGuild(unsigned int guildKey);
    int InsertPowerwarGuild(unsigned int guildKey, STPowerWarGuildInfo* info);
    STPowerWarGuildInfo* GetSpecificGuildInfo(unsigned int guildKey);
    unsigned int GetGuildRanking(unsigned int guildKey);
    void CalcAllGuildRanking();
    void PrintDebugInfo();
    void UpdateGuildPowerwarInfo(unsigned int guildKey, unsigned short point);
    void RewardGuildPowerWarPoint(CGuildManager& gm, bool a, int b, int c, int d, int e);
    STDBSavePowerWarPoint* CreateDBSavePowerWarPoint();
    void DeleteDBSavePowerWarPoint(STDBSavePowerWarPoint* p);
    void MakePacketDBPowerWarPoint(Packet_DB_Save_Power_War_Point& pkt);
    int GetPowerWarPointDBSaveCount();
    void GetAllGuildRankingInfo(int& count, STGuildRank* rank);
    char m_data[0x34];
};

class CPowerWarCharacInfo
{
public:
    CPowerWarCharacInfo();
    virtual ~CPowerWarCharacInfo();
    void Initialize();
    void Clean();
    int IsExistCharac(unsigned int charNo);
    unsigned int GetUserRanking(unsigned int charNo);
    void PrintDebugInfo();
    void CalcAllUserRanking();
    STPowerWarCharacInfo* FindPowerwarCharac(unsigned int charNo);
    std::vector<STPowerWarCharacInfo*>* GetCharacInfoVector();
    STPowerWarCharacInfo* CreatePowerwarCharac();
    unsigned int GetUserPowerWarPoint(unsigned int charNo);
    int InsertPowerwarCharac(unsigned int charNo, STPowerWarCharacInfo* info);
    void GetAllUserRankingInfo(unsigned int& count, STUserRank* rank);
    void GetStatueRankingUsers(std::vector<STPowerWarCharacInfo*>& vec);
    void UpdatePowerwarCharacInfo(unsigned int charNo, unsigned short point);
    int GetBonus(Packet_DB_Save_Power_War_Bonus_Point& pkt);
    int GetBonus(int idx);
    void CalcBonus();
    char m_data[0x20];
};

// ---- CPowerWarConfig ----
class CTableBase;
class CPowerWarConfig : public CTableBase
{
public:
    CPowerWarConfig();
    virtual ~CPowerWarConfig();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    void Clear_Table();
    ST_PowerWarEventStartTimeConfig* GetInfo() const;
    ST_PowerWarEventStartTimeConfig m_info;  // +4
};

// ---- CPowerWar ----
class CPowerWar
{
public:
    CPowerWar();
    virtual ~CPowerWar();
    int IsPowerWarOn();
    int IsPowerWarOn() const;
    unsigned short getPowerWarEndKillPoint();
    unsigned short getPowerWarEndKillPoint() const;
    void setPowerWarEndKillPoint(unsigned short point);
    void resetEvent();
    void setEvent();
    void setProlongTime();
    void GetPowerWarConfigTbl(unsigned char& a, unsigned char& b, unsigned char& c,
                              unsigned char& d);
    void LoadPowerWarTableFile(char* path);
    void ProcessByMinuteEndEvent();
    void ProcessByMinuteStartEvent();
    int GetPowerWarRankingUpdateTime();
    char m_data[0x130];
};

// ---- CPower ----
class CPower
{
public:
    CPower();
    virtual ~CPower();
    void SetScore(int score);
    int GetScore();
    int IncScore(int score);
    void InitPower();
    void CleanPower();
    void CalcPowerWarRank();
    void UpdatePowerWarInfo(int a, unsigned int b, unsigned int c);
    void RewardGuildPowerWarPoint(CGuildManager& gm, bool a, int b, int c, int d, int e);
    CPowerWarGuildInfo* GetPowerWarGuildInfo();
    CPowerWarCharacInfo* GetPowerWarCharacInfo();
    CPowerWarGuildInfo m_guildInfo;    // +8
    CPowerWarCharacInfo m_characInfo;  // +0x3c
    int m_field4;                      // +4
};

// ---- CPowerManager ----
class CPowerManager
{
public:
    CPowerManager();
    virtual ~CPowerManager();
    void InitPowerManager(char* path, CApplication* app);
    void Process();
    void ProcessByMinute();
    int IsPowerWarOn();
    void SetPowerInfo(char side, int score1, int score2);
    void CleanPowerWar();
    int GetPowerScore(ENUM_POWER_SIDE_TYPE side);
    char GetWinnerSide();
    void IncPowerScore(ENUM_POWER_SIDE_TYPE side, int score);
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
    void UpdatePowerWarInfo(bool flag, ENUM_POWER_SIDE_TYPE side, int score,
                            unsigned int* p);
    void SaveDBPowerWarPoint();
    void SendPowerWarEndInfo();
    void SendPowerWarEndInfo(int time);
    void SendPowerWarEndTime(int time);
    unsigned int GetUserPowerWarPoint(ENUM_POWER_SIDE_TYPE side, unsigned int charNo);
    unsigned int GetUserRankingInPower(ENUM_POWER_SIDE_TYPE side, unsigned int charNo);
    void SetPowerWarRewardInfo(int a, int b, int c, int d);
    unsigned int GetGuildRankingInPower(ENUM_POWER_SIDE_TYPE side, unsigned int guildKey);
    unsigned short GetPowerWarEndKillPoint();
    void SendPowerWarProcessInfo(unsigned int charNo);
    void SetPowerWarEndKillPoint(unsigned short point);
    void RewardGuildPowerWarPoint();
    void SaveDBPowerWarBonusPoint();
    void SaveDBPowerWarPointReward();
    void SendPowerWarEndInfoToSpecificUser(CUser* user, unsigned int b, unsigned char c,
                                           unsigned int d, unsigned int e, unsigned int f,
                                           unsigned int g, unsigned int h);
    void SendPowerWarEndInfoInSpecificPower(char side);
    char m_data[0x1a0];
};

// ---- CMemoryCashManager ----
class CCashObject;
class CMemoryCashManager
{
public:
    CMemoryCashManager();
    ~CMemoryCashManager();
    void Init(CApplication* app);
    bool IsRightObject(CUser* user);
    int InsertCashMemorySetCharacterObject(CUser* user);
    bool SetUserObject(CUser* user);
    void ProcessLifeTimeOut();
    void DeleteCashObjecct(unsigned int dbid);
    int QueryCashMemoryBlackList(CUser* user);
    std::map<unsigned int, CCashObject*> m_cashObjects;  // +0
    CApplication* m_app;                                 // +0x18
};

// ---- CCashObject：0x24 ----
class CCashObject
{
public:
    CCashObject();
    ~CCashObject();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    bool IsLifeTimeOut();
    void SetBlackUsersObject(std::map<unsigned int, CBlackUser*>& blackUsers);
    void ClearBlackUsers();
    std::map<unsigned int, CBlackUser*>* GetBlackUsersObject();
    void SetCharacNo(unsigned int charNo);
    int m_lifeTime;      // +0
    int m_charNo;        // +4
    std::map<unsigned int, CBlackUser*> m_blackUsers;  // +8
    char m_pad[4];       // +0x20
};

// ---- CTcpRecvBuffer ----
class CTcpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char m_data[0x1804];
};

class TCPSocket
{
public:
    TCPSocket();
    ~TCPSocket();
    bool open();
    int bind(unsigned short port, bool flag);
    bool listen(int backlog);
    int send(char* buf, int len);
    int recv(char* buf, int len);
    bool pollReadEvent() const;
    bool pollWriteEvent() const;
    bool pollErrorEvent() const;
    int pollReadWriteErrEvent() const;
    int getHandle() const;
    int shutdown(int how);
    void close();
    bool setOptNonBlock();
    bool setOptReuseAdrs(bool flag);
    bool setOptLinger(bool flag);
    bool connect(const char* ip, unsigned short port);
    int accept(TCPSocket& peer);
    char* getPeerIP();
    char* getPeerAdrs();
    unsigned short getPeerPort();
    int setOptResizeSendBuf(int size);
    int setOptResizeRecvBuf(int size);
    int m_sock;      // +0
    char m_data[0x18];   // +4：sockaddr(0x10) + peerAdrs(+0x14) + peerPort(+0x18)
};

class CPeer : public TCPSocket
{
public:
    CPeer();
    ~CPeer();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    TCPSocket* GetTcpSocket();
    int get_remain_sendlen();
    void InitPeer(std::queue<CTcpRecvBuffer*>* q, CMutex* lock1, CMutex* lock2);
    int RecvPacket();
    int recv_packet();
    int parsing(int len);
    int send_packet(char* buf, int len);
    int send_packet();
    void DisConnSig();
    void ConnSig();
    char m_data[0x97824];   // +0x1c 起，sizeof(CPeer)=0x97840（MemPool chunk）
};

class CTcpSendBuffer
{
public:
    CTcpSendBuffer();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char m_data[0x1804];
};

class EpollHandler;
class CTcpHandler
{
public:
    CTcpHandler();
    ~CTcpHandler();
    int SetPeer(void* ptr, int fd, bool flag);
    int ResetEpoll(int fd);
    int WaitForEvent();
    bool IsSetErrEvent(int idx);
    bool IsSetOutEvent(int idx);
    unsigned int IsSetInEvent(int idx);
    void* GetEventPtr(int idx);
    EpollHandler* m_epoll;  // +0
};

namespace np_server_xml
{
enum _eStringType {};

class CServerXml
{
public:
    CServerXml();
    ~CServerXml();
    void InitString();
    void StrLoading();
    void StrLoading(std::string path);
    void CharsetInit(TiXmlNode* node);
    void EventLoad(TiXmlNode* node);
    void RGBALoad(int idx, TiXmlNode* node);
    void ProcessLoad(TiXmlNode* node);
    void StrPunish(int idx, const char* str, _eStringType type);
    const char* GetServerString(int idx, bool* ok) const;
    unsigned int GetEventRGBA(int idx) const;
    std::string GetEventString(int idx, _eStringType type, bool* ok) const;
    char m_data[5];   // +0
    char m_doc[0x54]; // +8 TiXmlDocument
    int m_field50;    // +0x50
    std::string m_path;  // +0x54
    std::map<int, std::string> m_str1;  // +0x58
    std::map<int, std::string> m_str2;  // +0x70
    std::map<int, std::string> m_str3;  // +0x88
    std::map<int, int> m_rgba;          // +0xa0
};
}

extern np_server_xml::CServerXml g_ServerString_;

class CProtocol
{
public:
    CProtocol();
    virtual ~CProtocol();
    char m_data[0x18];
};

// ---- CEvent ----
class CEvent
{
public:
    CEvent();
    virtual ~CEvent();
    char m_data[8];
};

class EpollHandler : public CProtocol
{
public:
    EpollHandler();
    virtual ~EpollHandler();
    int Init();
    void Destroy();
    int SetEpoll(void* ptr, int fd, bool flag);
    int ResetEpoll(int fd);
    int WaitForEvent();
    bool IsSetErrEvent(int idx);
    bool IsSetOutEvent(int idx);
    unsigned int IsSetInEvent(int idx);
    void* GetEventPtr(int idx);
    int GetEpollFD();
    void* GetEpollEvents();
    CMutex m_mutex;   // +0x18
    int m_events;     // +0x10
    int m_epollFd;    // +0x14
    int m_field4;     // +4
    void* m_ptr;      // +8
    char m_data[0x20];
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
    int WaitForEvent();
    CPeer* CreatePeer();
    void DeletePeer(CPeer* peer);
    void InsertAcceptedPeer(CPeer* peer);
    CPeer* GetPeer(unsigned int id);
    void CleanPeers();
    void PushTcpSendPacketQ(char* buf);
    void CleanTcpSendPacketQ();
    void* Acquire_TcpSendBuffer();
    void PopDeleteTcpSendPacketQ(CTcpSendBuffer* buf);
    void SendPacket();
    bool OpenTcpService(int& sock, const char* ip, unsigned short port);
    void SetEpollAcceptedPeers();
    void SetEpollConnectedPeer(CPeer* peer);
    char m_data[0x160];
};

// ---- 基础结构 ----
#endif  // GUILD_DOMAIN_H_
