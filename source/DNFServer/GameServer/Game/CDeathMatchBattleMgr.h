#ifndef GAME_DEATHMATCH_BATTLE_MGR_H_
#define GAME_DEATHMATCH_BATTLE_MGR_H_

// ============================================================================
// df_game_r CDeathMatchBattleMgr（G2-4 PvP 链，死亡竞赛管理器，
// PvP_Room +0x69c）尺寸 0x44，布局依据 ORIG 各方法位移访问（见
// docs/class_func_reports/CDeathMatchBattleMgr.md）推导：
//   +0x000 PvP_Room* m_pRoom
//   +0x004 int m_killCount[8]（0x20）
//   +0x024 int m_deathCount[8]（0x20）
// 方法签名以 ORIG mangled 名为准。
// 注意：PvP_deps.h 当前仍含本类最小桩声明；主 agent 集成时需以本头替换，
// 避免与 PvP_Room.h 同 TU 重复定义。
// ============================================================================

class CUser;
class PvP_Room;
class PvpUserTable;

class CDeathMatchBattleMgr
{
public:
    // ---- 生命周期 / 房间钩子（ORIG 0x085dee22 起） ----
    void Reset();
    void SetParent(PvP_Room* room);
    void OnCreateRoom(int a);
    void OnJoinRoom(int a);
    void OnLeaveRoom(int a);
    void OnChangeTeam(int seat, int team);
    void OnReady(int seat, bool ready);
    void OnStart();
    void OnFight();

    // ---- 计数 ----
    void IncreaseKillCount(int seat);
    void IncreaseDeathCount(int seat);
    int getKillCount(int seat);
    int getDeathCount(int seat);
    int getMaxKillCount();
    int getRanking(CUser** users, int* out) const;

    // ---- 胜负判定 ----
    int checkGameOverForSinglePlay(int mode);
    int checkGameOverForTeamPlay(CUser** users, int mode,
                                 unsigned char* teamState);
    void checkWinnerForSinglePlay(CUser** users, bool* win,
                                  PvpUserTable& table);
    void checkWinnerForTeamPlay(CUser** users, bool* win,
                                unsigned char* teamState,
                                PvpUserTable& table);

    // ---- 定时器 ----
    void InsertTimerKilledUserForRevive(int roomIdx, int seat);

private:
    PvP_Room* m_pRoom;    // +0x000
    int m_killCount[8];   // +0x004
    int m_deathCount[8];  // +0x024
};

#endif  // GAME_DEATHMATCH_BATTLE_MGR_H_
