#ifndef GAME_PVP_DEPS_H_
#define GAME_PVP_DEPS_H_

// ============================================================================
// df_game_r PvP 链（PvP_Room / WarRoom / BlueMarble）依赖子对象最小声明
// （G2-3 批次，2026-08-17）。
// 尺寸依据 ORIG 三类的构造/析构推导：
//   PvP_GuildWar_Log 0x68（+0xc4）   cElection<int,8,8> 0x100（+0x12c）
//   PvpUserTable 0x34c（+0x268）     PvpResultRecvFlag 0x8（+0x5b4/+0x5bc）
//   CRelayBattleMgr 0x7c（+0x620）   CDeathMatchBattleMgr 0x44（+0x69c）
//   CMatchingSystem 0x18（+0x6e0）   WarField 0xf8（WarRoom +0x34）
//   CMTRand 0x9c8（BlueMarble new[4]）BuffInfo 0xc / TileIndexInfo 0x8
//   BlueMarbleUserInfo 0x28          BlueMarbleScriptManager（getMap 宿主）
// 方法为最小桩（PvP_deps.cpp 定义，real 符号），后续对应批次 TU 交付后覆盖。
// ============================================================================

#include <cstring>
#include <map>
#include <set>
#include <string>
#include <vector>

#include "CUser.h"
#include "CParty.h"
#include "GameTypes.h"

// ---- PvP / WarRoom 共享枚举（值以 ORIG asm 常量为准，见各报告） ----
#ifndef DNF_ENUM_WARROOM_STATE_DEFINED
#define DNF_ENUM_WARROOM_STATE_DEFINED
enum WARROOM_STATE
{
    WARROOM_STATE_NEG1 = -1,
    WARROOM_STATE_0 = 0,
    WARROOM_STATE_1 = 1,
    WARROOM_STATE_2 = 2,
    WARROOM_STATE_3 = 3,
    WARROOM_STATE_4 = 4,
    WARROOM_STATE_5 = 5
};
#endif

enum ENUM_SEAT_STATE
{
    ENUM_SEAT_STATE_0xfe = 0xfe,
    ENUM_SEAT_STATE_0 = 0,
    ENUM_SEAT_STATE_1 = 1,
    ENUM_SEAT_STATE_2 = 2,
    ENUM_SEAT_STATE_3 = 3,
    ENUM_SEAT_STATE_4 = 4
};

#ifndef GAME_MISSIONTYPES_PVP_BATTLE_MODE_DEFINED
#define GAME_MISSIONTYPES_PVP_BATTLE_MODE_DEFINED
enum PVP_BATTLE_MODE
{
    PVP_BATTLE_MODE_1 = 1,
    PVP_BATTLE_MODE_2 = 2,
    PVP_BATTLE_MODE_3 = 3,
    PVP_BATTLE_MODE_4 = 4,
    PVP_BATTLE_MODE_5 = 5
};
#endif

#ifndef DNF_ENUM_PVP_MATCHING_TYPE_DEFINED
#define DNF_ENUM_PVP_MATCHING_TYPE_DEFINED
enum ENUM_PVP_MATCHING_TYPE { ENUM_PVP_MATCHING_TYPE_0 = 0 };
#endif

// ---- BlueMarble 命名空间枚举（mangling 必须保持 N..1TE / 4TypeE 形态） ----
namespace BlueMarbleState
{
enum T
{
    T_0 = 0
};
}

namespace BlueMarbleUserState
{
enum T
{
    T_0 = 0
};
}

namespace BlueMarbleUserGrade
{
enum T
{
    T_0 = 0
};
}

namespace BlueMarbleBuffType
{
enum T
{
    T_0 = 0
};
}

class BlueMarbleTileScript
{
public:
    enum Type
    {
        Type_0 = 0
    };
private:
    char m_pad[0x20];  // +0x00 type、+0x04 char、+0x08 value
};

// ---- PVP_ROOM_INFO（get_room_info 目标结构） ----
struct PVP_ROOM_INFO
{
    std::string title;   // +0x00
    char byte4;          // +0x04
    short short6;        // +0x06
    char byte8;          // +0x08
    std::string passwd;  // +0x0c
};

// ---- 子对象前向声明 ----
class PvP_Room;
class BlueMarbleScriptManager;
class BlueMarbleMapScript;
class BlueMarbleInfoScript;

// ---- PvP_GuildWar_Log（0x68） ----
class PvP_GuildWar_Log
{
public:
    PvP_GuildWar_Log();
    ~PvP_GuildWar_Log();
    void Clear();
    void SetpvpStartTime(long t);
    void WriteGuildWarPvPLog(int roomIdx, char mode, CUser** users);
private:
    char m_pad[0x68];
};

// ---- cElection<int,8,8>（0x100） ----
template <class T, int V, int C>
class cElection
{
public:
    cElection();
    int GetElected() const;
    void Vote(int a, int b);
    void CancelVoter(int a);
    void CancelCandidate(int a);
private:
    char m_pad[0x100];
};

// ---- PvpUserTable（0x34c） ----
class PvpUserTable
{
public:
    PvpUserTable();
    ~PvpUserTable();
    void Set(int team, CUser* user);
    int GetResult(int a, bool b, int c);
    int GetWinTeam();
    void SetWinTeam(int team);
    bool IsValidTeam(int team);
    int GetLeavePenalty(int team);
    void Clear();
    void Calculate();
private:
    char m_pad[0x34c];
};

// ---- PvpResultRecvFlag（0x8） ----
class PvpResultRecvFlag
{
public:
    PvpResultRecvFlag();
    ~PvpResultRecvFlag();
    void SetRecvFlag(int flag);
    void Clear();
    bool IsRecv(int flag) const;
private:
    char m_pad[0x8];
};

// ---- CRelayBattleMgr（0x7c，PvP_Room +0x620） ----
class CRelayBattleMgr
{
public:
    void Reset();
    void SetParent(PvP_Room* room);
    void OnCreateRoom(int a);
    void OnJoinRoom(int a);
    void OnLeaveRoom(int a);
    void OnDiePlayer(int a, int b, bool c);
    void OnChangeTeam(int a, int b);
    void OnReady(int a, bool b);
    void OnRequestFight(int a);
    void OnStart();
    int GetKillCount(int a);
    int GetAllKillUserIndex(int* out);
private:
    char m_pad[0x7c];
};

// ---- CDeathMatchBattleMgr（0x44，PvP_Room +0x69c） ----
class CDeathMatchBattleMgr
{
public:
    void Reset();
    void SetParent(PvP_Room* room);
    void OnCreateRoom(int a);
    void OnStart();
    void IncreaseKillCount(int a);
    void IncreaseDeathCount(int a);
    int getKillCount(int a);
    int getDeathCount(int a);
    int getRanking(CUser** users, int* out) const;
    bool checkGameOverForSinglePlay(int a);
    bool checkWinnerForSinglePlay(CUser** users, bool* win, PvpUserTable& table);
    bool checkGameOverForTeamPlay(CUser** users, int teamCnt, unsigned char* teamWin);
    bool checkWinnerForTeamPlay(CUser** users, bool* win, unsigned char* teamWin,
                                PvpUserTable& table);
    void InsertTimerKilledUserForRevive(int roomIdx, int a);
private:
    char m_pad[0x44];
};

// ---- CMatchingSystem（0x18） ----
class CMatchingSystem
{
public:
    CMatchingSystem();
    ~CMatchingSystem();
    void* GetMatchingSystem(ENUM_PVP_MATCHING_TYPE type);
private:
    char m_pad[0x18];
};

// ---- WarField（0xf8，WarRoom +0x34；复杂方法经 asm-label extern 调用） ----
class WarField
{
public:
    WarField();
    ~WarField();
private:
    char m_pad[0xf8];
};

// ---- CMTRand（0x9c8） ----
class CMTRand
{
public:
    CMTRand();
    void seed(unsigned long s);
    int randInt();
    int randInt(const unsigned long& range);
private:
    char m_pad[0x9c8];
};

// ---- BuffInfo（0xc）/ TileIndexInfo（0x8，BlueMarbleUserInfo 内嵌） ----
class BuffInfo
{
public:
    BuffInfo();
    void reset();
private:
    char m_pad[0xc];
};

class TileIndexInfo
{
public:
    TileIndexInfo();
    void reset();
private:
    char m_pad[0x8];
};

// ---- BlueMarbleUserInfo（0x28） ----
class BlueMarbleUserInfo
{
public:
    BlueMarbleUserInfo();
    ~BlueMarbleUserInfo();
    void setScript(BlueMarbleScriptManager* script);
    void setUser(CUser* user);
    void setUserState(BlueMarbleUserState::T state);
    void setGrade(BlueMarbleUserGrade::T grade);
    void setItem(unsigned int itemIdx);
    void setGold(int gold);
    void setExp(int exp);
    void setDrop(int drop);
    void setDungeon(int dungeon);
    void setBoardZone(int zone, int pos);
    void resetBlueMarbleUserInfo();
    void resetBuff();
    void resetIndex();
    CUser* getUser() const;
    int getGrade() const;
    int getItem() const;
    int getGold() const;
    int getExp() const;
    int getDrop() const;
    int getDungeon() const;
    int getBoardZone() const;
    BlueMarbleUserState::T getUserState() const;
private:
    char m_pad[0x28];
};

// ---- BlueMarble 数据对象（尺寸来自报告字段访问；脚本批次细化） ----
struct BlueMarbleRandomItemInfo
{
    int m_itemIndex;  // +0x00
    int m_weight;     // +0x04
};

struct BlueMarbleRewardInfo
{
    int m_a;  // +0x00
    int m_b;  // +0x04
};

struct BlueMarbleRandomDungeonInfo
{
    int m_minLevel;     // +0x00
    int m_maxLevel;     // +0x04
    int m_dungeonIndex; // +0x08
};

class BlueMarbleMapScript
{
public:
    int getTile(unsigned int zone);
private:
    char m_pad[0x20];
};

class BlueMarbleInfoScript
{
public:
    int getBossDungeonIndex(int a);
    int getRandomDungeonIndex(int a);
    int getUniqueDungeonIndex(int a);
private:
    char m_pad[0x80];
};

class BlueMarbleScriptManager
{
public:
    BlueMarbleMapScript* getMap(int idx);
    int getMapTotalCount();
private:
    char m_pad[0x100];
};

#endif  // GAME_PVP_DEPS_H_
