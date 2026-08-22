// ============================================================================
// df_game_r PvP 链（G2-3）依赖实现：PvP_Room/WarRoom/BlueMarble 子对象
// 的最小桩（real 符号，后续对应批次 TU 交付后由主 agent 覆盖/移除），
// 以及三类 TU 需要的跨类符号临时桩（CUser/GameWorld/统计/脚本等）。
// 桩体为空，仅保证链接；identical 口径下它们属 DIFF，待各自批次替换。
// ============================================================================

#include <cstring>
#include <string>
#include <vector>

#include "PvP_deps.h"
#include "CDataManager.h"
#include "CDungeon.h"
#include "InterfacePacketBuf.h"
#include "TimerQueue.h"

// ============================================================================
// 一、PvP 子对象最小实现（PvP_deps.h 声明）
// ============================================================================

PvP_GuildWar_Log::PvP_GuildWar_Log() {}
PvP_GuildWar_Log::~PvP_GuildWar_Log() {}
void PvP_GuildWar_Log::Clear() {}
void PvP_GuildWar_Log::SetpvpStartTime(long long) {}
void PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**) {}

template <> cElection<int, 8, 8>::cElection() {}
template <> int cElection<int, 8, 8>::GetElected() const { return 0; }
template <> void cElection<int, 8, 8>::Vote(int, int) {}
template <> void cElection<int, 8, 8>::CancelVoter(int) {}
template <> void cElection<int, 8, 8>::CancelCandidate(int) {}

PvpUserTable::PvpUserTable() {}
PvpUserTable::~PvpUserTable() {}
void PvpUserTable::Set(int, CUser*) {}
int PvpUserTable::GetResult(int, bool, int) { return 0; }
int PvpUserTable::GetWinTeam() { return 0; }
void PvpUserTable::SetWinTeam(int) {}
bool PvpUserTable::IsValidTeam(int) { return false; }
int PvpUserTable::GetLeavePenalty(int) { return 0; }
void PvpUserTable::Clear() {}
void PvpUserTable::Calculate() {}

PvpResultRecvFlag::PvpResultRecvFlag() {}
PvpResultRecvFlag::~PvpResultRecvFlag() {}
void PvpResultRecvFlag::SetRecvFlag(int) {}
void PvpResultRecvFlag::Clear() {}
bool PvpResultRecvFlag::IsRecv(int) const { return false; }

void CRelayBattleMgr::Reset() {}
void CRelayBattleMgr::SetParent(PvP_Room*) {}
void CRelayBattleMgr::OnCreateRoom(int) {}
void CRelayBattleMgr::OnJoinRoom(int) {}
void CRelayBattleMgr::OnLeaveRoom(int) {}
void CRelayBattleMgr::OnDiePlayer(int, int, bool) {}
void CRelayBattleMgr::OnChangeTeam(int, int) {}
void CRelayBattleMgr::OnReady(int, bool) {}
void CRelayBattleMgr::OnRequestFight(int) {}
void CRelayBattleMgr::OnStart() {}
int CRelayBattleMgr::GetKillCount(int) { return 0; }
int CRelayBattleMgr::GetAllKillUserIndex(int*) { return -1; }

void CDeathMatchBattleMgr::Reset() {}
void CDeathMatchBattleMgr::SetParent(PvP_Room*) {}
void CDeathMatchBattleMgr::OnCreateRoom(int) {}
void CDeathMatchBattleMgr::OnStart() {}
void CDeathMatchBattleMgr::IncreaseKillCount(int) {}
void CDeathMatchBattleMgr::IncreaseDeathCount(int) {}
int CDeathMatchBattleMgr::getKillCount(int) { return 0; }
int CDeathMatchBattleMgr::getDeathCount(int) { return 0; }
int CDeathMatchBattleMgr::getRanking(CUser**, int*) const { return 0; }
bool CDeathMatchBattleMgr::checkGameOverForSinglePlay(int) { return false; }
bool CDeathMatchBattleMgr::checkWinnerForSinglePlay(CUser**, bool*, PvpUserTable&)
{
    return false;
}
bool CDeathMatchBattleMgr::checkGameOverForTeamPlay(CUser**, int, unsigned char*)
{
    return false;
}
bool CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*,
                                                  PvpUserTable&)
{
    return false;
}
void CDeathMatchBattleMgr::InsertTimerKilledUserForRevive(int, int) {}

CMatchingSystem::CMatchingSystem() {}
CMatchingSystem::~CMatchingSystem() {}
void* CMatchingSystem::GetMatchingSystem(ENUM_PVP_MATCHING_TYPE) { return 0; }

WarField::WarField() {}
WarField::~WarField() {}

CMTRand::CMTRand() {}
void CMTRand::seed(unsigned long) {}
int CMTRand::randInt() { return 0; }
int CMTRand::randInt(const unsigned long&) { return 0; }

BuffInfo::BuffInfo() {}
void BuffInfo::reset() {}

TileIndexInfo::TileIndexInfo() {}
void TileIndexInfo::reset() {}

BlueMarbleUserInfo::BlueMarbleUserInfo() {}
BlueMarbleUserInfo::~BlueMarbleUserInfo() {}
void BlueMarbleUserInfo::setScript(BlueMarbleScriptManager*) {}
void BlueMarbleUserInfo::setUser(CUser*) {}
void BlueMarbleUserInfo::setUserState(BlueMarbleUserState::T) {}
void BlueMarbleUserInfo::setGrade(BlueMarbleUserGrade::T) {}
void BlueMarbleUserInfo::setItem(unsigned int) {}
void BlueMarbleUserInfo::setGold(int) {}
void BlueMarbleUserInfo::setExp(int) {}
void BlueMarbleUserInfo::setDrop(int) {}
void BlueMarbleUserInfo::setDungeon(int) {}
void BlueMarbleUserInfo::setBoardZone(int, int) {}
void BlueMarbleUserInfo::resetBlueMarbleUserInfo() {}
void BlueMarbleUserInfo::resetBuff() {}
void BlueMarbleUserInfo::resetIndex() {}
CUser* BlueMarbleUserInfo::getUser() const { return 0; }
int BlueMarbleUserInfo::getGrade() const { return 0; }
int BlueMarbleUserInfo::getItem() const { return 0; }
int BlueMarbleUserInfo::getGold() const { return 0; }
int BlueMarbleUserInfo::getExp() const { return 0; }
int BlueMarbleUserInfo::getDrop() const { return 0; }
int BlueMarbleUserInfo::getDungeon() const { return 0; }
int BlueMarbleUserInfo::getBoardZone() const { return 0; }
BlueMarbleUserState::T BlueMarbleUserInfo::getUserState() const
{
    return BlueMarbleUserState::T_0;
}

BlueMarbleMapScript* BlueMarbleScriptManager::getMap(int) { return 0; }
int BlueMarbleScriptManager::getMapTotalCount() { return 0; }
int BlueMarbleMapScript::getTile(unsigned int) { return 0; }
int BlueMarbleInfoScript::getBossDungeonIndex(int) { return 0; }
int BlueMarbleInfoScript::getRandomDungeonIndex(int) { return 0; }
int BlueMarbleInfoScript::getUniqueDungeonIndex(int) { return 0; }

// ============================================================================
// 二、CBattle_Field 数据对象 ctor/dtor 临时桩（世界批次细化）
//     （map_monster 0x40 / map_item 0x50，字段访问在 WarRoom.cpp 用偏移）
// ============================================================================

extern "C" void sub_map_monster_C1(void* self) asm("_ZN11map_monsterC1Ev");
extern "C" void sub_map_monster_D1(void* self) asm("_ZN11map_monsterD1Ev");
extern "C" void sub_map_item_C1(void* self) asm("_ZN8map_itemC1Ev");
extern "C" void sub_map_item_D1(void* self) asm("_ZN8map_itemD1Ev");

void sub_map_monster_C1(void*) {}
void sub_map_monster_D1(void*) {}
void sub_map_item_C1(void*) {}
void sub_map_item_D1(void*) {}

// ============================================================================
// 三、跨类临时桩（real 符号；对应批次 TU 交付后删除）
// ============================================================================

// ---- CUser 缺失方法（G1-4 CUser 批次交付后删） ----
extern "C" void sub_CUser_LogHistory(void* self, const char* fmt, ...)
    asm("_ZN5CUser10LogHistoryEPKcz");
extern "C" void sub_CUser_SetPvpIndex(void* self, short idx)
    asm("_ZN5CUser11SetPvpIndexEs");
extern "C" void sub_CUser_gain_exp_sp(void* self, int a, int& b, int& c,
                                      int reason, int d, bool e)
    asm("_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib");
extern "C" void sub_CUser_CheckFatigue(void* self) asm("_ZN5CUser12CheckFatigueEv");
extern "C" void sub_CUser_IsEquipAvatar(void* self) asm("_ZN5CUser13IsEquipAvatarEv");
extern "C" void sub_CUser_SendNotiPacket(void* self, int target, int type, int v)
    asm("_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi");
extern "C" void sub_CUser_add_pvp_result(void* self, bool a, unsigned* b)
    asm("_ZN5CUser14add_pvp_resultEbPj");
extern "C" void sub_CUser_update_pvp_rank(void* self, const void* result)
    asm("_ZN5CUser15update_pvp_rankERK13PvpResultType");
extern "C" void sub_CUser_send_MissionList(void* self)
    asm("_ZN5CUser16send_MissionListEv");
extern "C" void sub_CUser_update_pvp_point(void* self, int point)
    asm("_ZN5CUser16update_pvp_pointEi");
extern "C" void sub_CUser_CheckQuestMonster(void* self, int a, int b, int type)
    asm("_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE");
extern "C" void sub_CUser_add_pvp_play_info(void* self, unsigned a, unsigned b)
    asm("_ZN5CUser17add_pvp_play_infoEjj");
extern "C" void sub_CUser_gainGuildSkillExp(void* self, int v)
    asm("_ZN5CUser17gainGuildSkillExpEi");
extern "C" void sub_CUser_SendMoneyFullReason(void* self, int reason,
                                              unsigned a, unsigned b)
    asm("_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm");
extern "C" void sub_CUser_add_guild_point_item(void* self)
    asm("_ZN5CUser20add_guild_point_itemEv");
extern "C" void sub_CUser_add_guild_pvp_result(void* self, int v)
    asm("_ZN5CUser20add_guild_pvp_resultEi");
extern "C" void sub_CUser_gainExpAsUpperMember(void* self, int v)
    asm("_ZN5CUser20gainExpAsUpperMemberEi");
extern "C" void sub_CUser_update_old_pvp_point(void* self)
    asm("_ZN5CUser20update_old_pvp_pointEv");
extern "C" void sub_CUser_gainPowerWarRewardExp(void* self, int v)
    asm("_ZN5CUser21gainPowerWarRewardExpEi");
extern "C" void sub_CUser_sendBlueMarbleEnterCount(void* self)
    asm("_ZN5CUser24sendBlueMarbleEnterCountEv");
extern "C" void sub_CUser_saveTaxMoneyForUpperMember(void* self, int v)
    asm("_ZN5CUser26saveTaxMoneyForUpperMemberEi");
extern "C" void sub_CUser_find_pvp_masterid_walkingout_me(void* self, unsigned v)
    asm("_ZN5CUser31find_pvp_masterid_walkingout_meEj");
extern "C" void sub_CUser_insert_pvp_masterid_walkingout_me(void* self, unsigned v)
    asm("_ZN5CUser33insert_pvp_masterid_walkingout_meEj");
extern "C" void sub_CUser_isGMUser(void* self) asm("_ZN5CUser8isGMUserEv");
extern "C" void sub_CUser_FatigueUp(void* self, int v) asm("_ZN5CUser9FatigueUpEi");
extern "C" void sub_CUser_has_within_Mission(void* self)
    asm("_ZNK5CUser18has_within_MissionEv");
extern "C" void sub_CUser_IsHavePremiumAdvantage(void* self)
    asm("_ZNK5CUser22IsHavePremiumAdvantageEv");
extern "C" void sub_CUser_isCompetitionMercenary(void* self)
    asm("_ZNK5CUser22isCompetitionMercenaryEv");
extern "C" void sub_CUser_acceptable_within_mission(void* self)
    asm("_ZNK5CUser25acceptable_within_missionEv");

void sub_CUser_LogHistory(void*, const char*, ...) {}
void sub_CUser_SetPvpIndex(void*, short) {}
void sub_CUser_gain_exp_sp(void*, int, int&, int&, int, int, bool) {}
void sub_CUser_CheckFatigue(void*) {}
void sub_CUser_IsEquipAvatar(void*) {}
void sub_CUser_SendNotiPacket(void*, int, int, int) {}
void sub_CUser_add_pvp_result(void*, bool, unsigned*) {}
void sub_CUser_update_pvp_rank(void*, const void*) {}
void sub_CUser_send_MissionList(void*) {}
void sub_CUser_update_pvp_point(void*, int) {}
void sub_CUser_CheckQuestMonster(void*, int, int, int) {}
void sub_CUser_add_pvp_play_info(void*, unsigned, unsigned) {}
void sub_CUser_gainGuildSkillExp(void*, int) {}
void sub_CUser_SendMoneyFullReason(void*, int, unsigned, unsigned) {}
void sub_CUser_add_guild_point_item(void*) {}
void sub_CUser_add_guild_pvp_result(void*, int) {}
void sub_CUser_gainExpAsUpperMember(void*, int) {}
void sub_CUser_update_old_pvp_point(void*) {}
void sub_CUser_gainPowerWarRewardExp(void*, int) {}
void sub_CUser_sendBlueMarbleEnterCount(void*) {}
void sub_CUser_saveTaxMoneyForUpperMember(void*, int) {}
void sub_CUser_find_pvp_masterid_walkingout_me(void*, unsigned) {}
void sub_CUser_insert_pvp_masterid_walkingout_me(void*, unsigned) {}
void sub_CUser_isGMUser(void*) {}
void sub_CUser_FatigueUp(void*, int) {}
void sub_CUser_has_within_Mission(void*) {}
void sub_CUser_IsHavePremiumAdvantage(void*) {}
void sub_CUser_isCompetitionMercenary(void*) {}
void sub_CUser_acceptable_within_mission(void*) {}

// ---- GameWorld 缺失方法（world2 批次交付后删） ----
extern "C" void sub_GameWorld_out_from_pvp(void* world, void* user)
    asm("_ZN9GameWorld12out_from_pvpEP5CUser");
extern "C" void sub_GameWorld_gotoBlueMarble(void* world, void* user)
    asm("_ZN9GameWorld14gotoBlueMarbleEP5CUser");
extern "C" void sub_GameWorld_out_from_warroom(void* world, void* user)
    asm("_ZN9GameWorld16out_from_warroomEP5CUser");
extern "C" void sub_GameWorld_outFromBlueMarble(void* world, void* user)
    asm("_ZN9GameWorld17outFromBlueMarbleEP5CUser");
extern "C" void sub_GameWorld_send_AllBasicInfo(void* world, void* user)
    asm("_ZN9GameWorld17send_AllBasicInfoEP5CUser");
extern "C" void sub_GameWorld_IsFreePvPChannel(void* world)
    asm("_ZNK9GameWorld16IsFreePvPChannelEv");
extern "C" void sub_GameWorld_IsSchoolPvPChannel(void* world)
    asm("_ZNK9GameWorld18IsSchoolPvPChannelEv");
extern "C" void sub_GameWorld_IsWinPointPvPChannel(void* world)
    asm("_ZNK9GameWorld20IsWinPointPvPChannelEv");

void sub_GameWorld_out_from_pvp(void*, void*) {}
void sub_GameWorld_gotoBlueMarble(void*, void*) {}
void sub_GameWorld_out_from_warroom(void*, void*) {}
void sub_GameWorld_outFromBlueMarble(void*, void*) {}
void sub_GameWorld_send_AllBasicInfo(void*, void*) {}
void sub_GameWorld_IsFreePvPChannel(void*) {}
void sub_GameWorld_IsSchoolPvPChannel(void*) {}
void sub_GameWorld_IsWinPointPvPChannel(void*) {}

// ---- 统计 / 脚本 / 其他域缺失符号（各自批次交付后删） ----
extern "C" void sub_Statistics_PVPPlay2(int a, int b, int c)
    asm("_ZN10Statistics8PVPPlay2Eiii");
extern "C" void sub_CCommonStatisticsMgr_IncreaseQuantity(void* self, int container, int v)
    asm("_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi");
extern "C" void sub_RDARScriptStringManager_findString(void* self, int idx,
                                                       const char* a, bool* b)
    asm("_ZNK23RDARScriptStringManager10findStringEiPKcPb");
extern "C" void sub_CFairPvPScore_GetRemainBonusCount(void* self)
    asm("_ZN8fair_pvp13CFairPvPScore19GetRemainBonusCountEv");
extern "C" void sub_CFairPvPScore_GetLastTrainingSealCount(void* self)
    asm("_ZN8fair_pvp13CFairPvPScore24GetLastTrainingSealCountEv");
extern "C" void sub_CFairPvPScore_GetLastTrainingSealBonusCount(void* self)
    asm("_ZN8fair_pvp13CFairPvPScore29GetLastTrainingSealBonusCountEv");
extern "C" void sub_CFairPvPScore_GetGiveItem(void* self)
    asm("_ZNK8fair_pvp13CFairPvPScore11GetGiveItemEv");
extern "C" void sub_RefPvpGrade_GetPvpGrade(void* self, int v)
    asm("_ZNK11RefPvpGrade11GetPvpGradeEi");
extern "C" void sub_RefPvpGrade_GetPvpCurrRankPoint(void* self, int v)
    asm("_ZNK11RefPvpGrade19GetPvpCurrRankPointEi");
extern "C" void sub_RefPvpGrade_GetPvpNextRankPoint(void* self, int v)
    asm("_ZNK11RefPvpGrade19GetPvpNextRankPointEi");
extern "C" void sub_ServerParameterScript_get_pvp_item_give(void* self, int v)
    asm("_ZN21ServerParameterScript17get_pvp_item_giveEi");
extern "C" void sub_CMapList_GetPVPMapCount(void* self)
    asm("_ZNK8CMapList14GetPVPMapCountEv");
extern "C" void sub_CPvPLiveEventData_IncreasePlayCount(void* self, void* user)
    asm("_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser");
extern "C" void sub_CExpDoubleEvent_GetExpFactor(void* self)
    asm("_ZN15CExpDoubleEvent12GetExpFactorEv");
extern "C" void sub_CBurningFatigueEvent_getBonusExpRate(void* self, unsigned short v)
    asm("_ZNK20CBurningFatigueEvent15getBonusExpRateEt");
extern "C" void sub_CEventManager_GetRepeatEvent(void* self, int v)
    asm("_ZN13CEventManager14GetRepeatEventEi");
extern "C" void sub_CUserProc_ClearActionAndSendtoUser(void* self, void* user,
                                                       int a, int b, int c)
    asm("_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS");
extern "C" void sub_CGenUniqueNo_genIPGNo(void* self, int type, unsigned v, char* out)
    asm("_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc");
extern "C" void sub_CMailBoxHelper_ReqDBSendNewSystemMail(void* self, const char* a,
                                                          const void* item, unsigned b,
                                                          unsigned c, const void* item2,
                                                          int d, int e, int group,
                                                          bool f, bool g)
    asm("_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb");
extern "C" void sub_CHackAnalyzer_beginCollectHackInfo(void* self, void* user)
    asm("_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser");
extern "C" void sub_CHackAnalyzer_setLastMonsterDeadTime(void* self, long long v)
    asm("_ZN8WongWork13CHackAnalyzer22setLastMonsterDeadTimeEl");
extern "C" void sub_CCreatureMgr_GainExp(void* self, int v)
    asm("_ZN13user_creature12CCreatureMgr7GainExpEi");
extern "C" void sub_CCreatureMgr_IsEquippedCreature(void* self)
    asm("_ZNK13user_creature12CCreatureMgr18IsEquippedCreatureEv");
extern "C" void sub_CCreatureMgr_IsGrowCreature_Equipped_Creature(void* self)
    asm("_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv");
extern "C" void sub_CValueStatistic_AddValueStatistic(void* self, int field,
                                                      void* user, unsigned v)
    asm("_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj");
extern "C" void sub_CDisconnectDetecter_RegisterUser(void* self, void* user)
    asm("_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser");
extern "C" void sub_CDisconnectDetecter_UnregisterUser(void* self, void* user)
    asm("_ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser");
extern "C" void sub_CDisconnectDetecter_GetInstance(void*)
    asm("_ZN19disconnect_detecter29GetInstanceDisconnectDetecterEv");
extern "C" void sub_CPrivateStoreMgr_IsBusyPrivateStore(void* self, void* user)
    asm("_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser");
extern "C" void sub_CPrivateStoreMgr_GetInstance(void*)
    asm("_ZN13private_store26GetInstancePrivateStoreMgrEv");
extern "C" void sub_MissionClearCondition_Parameter_C1(void* self, int mode)
    asm("_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE");
extern "C" void sub_CMissionList_Charac_Update_Win_event(void* self, void* user,
                                                         const void* param, bool& out)
    asm("_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb");
extern "C" void sub_CMissionList_Charac_Update_Kill_event(void* self, void* user,
                                                          const void* param)
    asm("_ZN19CMissionList_Charac17Update_Kill_eventER5CUserRK31MissionClearCondition_Parameter");
extern "C" void sub_CMissionList_Charac_Update_Revenge_event(void* self, void* user,
                                                             int mode, bool a)
    asm("_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb");
extern "C" void sub_CMissionList_Charac_MakeMissionList_forOldUser(void* self,
                                                                   const void* user)
    asm("_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser");
extern "C" void sub_CMissionList_Charac_setIssue(void* self, bool a, bool b)
    asm("_ZN19CMissionList_Charac8setIssueEbb");
extern "C" void sub_CMissionList_Charac_getIssue_mode(void* self, bool a)
    asm("_ZNK19CMissionList_Charac13getIssue_modeEb");
extern "C" void sub_DB_InsertRandomOptionItemInform_makeRequest(int a, int b, unsigned char c)
    asm("_ZN31DB_InsertRandomOptionItemInform11makeRequestEijh");
extern "C" void sub_HistoryLog_WriteUseCoin(void* self, void* file, const char* a)
    asm("_ZN10HistoryLog12WriteUseCoinEP8_IO_FILEPKc");
extern "C" void sub_CDungeonEntranceLog_IncrementDungeonEntrance(void* self, int a, bool b)
    asm("_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib");
extern "C" void sub_cUserHistoryLog_EnterDungeon(void* self, const char* a, int b)
    asm("_ZN15cUserHistoryLog12EnterDungeonEPKci");
extern "C" void sub_cUserHistoryLog_LeaveDungeon(void* self, const char* a, int b)
    asm("_ZN15cUserHistoryLog12LeaveDungeonEPKci");
extern "C" void sub_cUserHistoryLog_SendMail(void* self, void* mail, unsigned v)
    asm("_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj");
extern "C" void sub_CNetwork_get_inner_ip(void* self)
    asm("_ZN8CNetworkILi4096ELi450000EE12get_inner_ipEv");
extern "C" void sub_CNetwork_get_nat_type(void* self)
    asm("_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv");
extern "C" void sub_CNetwork_get_ip(void* self)
    asm("_ZN8CNetworkILi4096ELi450000EE6get_ipEv");
extern "C" void sub_CNetwork_get_mtu(void* self)
    asm("_ZN8CNetworkILi4096ELi450000EE7get_mtuEv");
extern "C" void sub_CNetwork_get_port(void* self)
    asm("_ZN8CNetworkILi4096ELi450000EE8get_portEv");
extern "C" void sub_CDataManager_GetMaxGradePvPChannel(void* self)
    asm("_ZN12CDataManager21GetMaxGradePvPChannelEv");
extern "C" void sub_CServerEvent_GetExpRate(void* self)
    asm("_ZN12CServerEvent10GetExpRateEv");
extern "C" void sub_CDungeon_GetDungeonName(void* self)
    asm("_ZNK8CDungeon14GetDungeonNameEv");
extern "C" void sub_PvpResultType_GetTotalScore(void* self)
    asm("_ZNK13PvpResultType13GetTotalScoreEv");
extern "C" void sub_PvpResultType_Clear(void* self) asm("_ZN13PvpResultType5ClearEv");
extern "C" void sub_PvpResultType_C1(void* self) asm("_ZN13PvpResultTypeC1Ev");
extern "C" void sub_PvpResultType_D1(void* self) asm("_ZN13PvpResultTypeD1Ev");
extern "C" void sub_ExpBonusPointResult_C1(void* self) asm("_ZN19ExpBonusPointResultC1Ev");
extern "C" void sub_CCargo_delete_item(void* self, int a, int b, int reason)
    asm("_ZN6CCargo11delete_itemEii14eItemDelReason");
extern "C" void sub_CCargo_get_cargo_slot(void* self, int v)
    asm("_ZNK6CCargo14get_cargo_slotEi");
extern "C" void sub_CParty_send_invite_bluemarble(void* self, int v)
    asm("_ZN6CParty22send_invite_bluemarbleEi");
extern "C" void sub_CInventory_delete_item(void* self, int type, int slot, int count,
                                           int reason, bool b)
    asm("_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb");
extern "C" void sub_CInventory_MakeItemPacket(void* self, int type, int idx, void* guard)
    asm("_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard");
extern "C" void sub_CInventory_RemoveKCItem(void* self)
    asm("_ZN10CInventory12RemoveKCItemEv");
extern "C" void sub_CInventory_GetInvenSlot(void* self, int a, int b)
    asm("_ZNK10CInventory12GetInvenSlotEii");
extern "C" void sub_CStatisticServerProxy_SendPacket(void* self, char* buf, int len)
    asm("_ZN21CStatisticServerProxy10SendPacketEPci");
extern "C" void sub_CServerProxyMgr_GetServerProxy(void* self, int group)
    asm("_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP");
extern "C" void sub_Packet_Server_Match_data_C1(void* self)
    asm("_ZN24Packet_Server_Match_dataC1Ev");
extern "C" void sub_UpgradeSeparateInfo_SetUpgradeSeparate(void* self, unsigned char v)
    asm("_ZN19UpgradeSeparateInfo18SetUpgradeSeparateEh");
extern "C" void sub_UpgradeSeparateInfo_GetUpgradeSeparate(void* self)
    asm("_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv");

void sub_Statistics_PVPPlay2(int, int, int) {}
void sub_CCommonStatisticsMgr_IncreaseQuantity(void*, int, int) {}
void sub_RDARScriptStringManager_findString(void*, int, const char*, bool*) {}
void sub_CFairPvPScore_GetRemainBonusCount(void*) {}
void sub_CFairPvPScore_GetLastTrainingSealCount(void*) {}
void sub_CFairPvPScore_GetLastTrainingSealBonusCount(void*) {}
void sub_CFairPvPScore_GetGiveItem(void*) {}
void sub_RefPvpGrade_GetPvpGrade(void*, int) {}
void sub_RefPvpGrade_GetPvpCurrRankPoint(void*, int) {}
void sub_RefPvpGrade_GetPvpNextRankPoint(void*, int) {}
void sub_ServerParameterScript_get_pvp_item_give(void*, int) {}
void sub_CMapList_GetPVPMapCount(void*) {}
void sub_CPvPLiveEventData_IncreasePlayCount(void*, void*) {}
void sub_CExpDoubleEvent_GetExpFactor(void*) {}
void sub_CBurningFatigueEvent_getBonusExpRate(void*, unsigned short) {}
void sub_CEventManager_GetRepeatEvent(void*, int) {}
void sub_CUserProc_ClearActionAndSendtoUser(void*, void*, int, int, int) {}
void sub_CGenUniqueNo_genIPGNo(void*, int, unsigned, char*) {}
void sub_CMailBoxHelper_ReqDBSendNewSystemMail(void*, const char*, const void*,
                                               unsigned, unsigned, const void*,
                                               int, int, int, bool, bool) {}
void sub_CHackAnalyzer_beginCollectHackInfo(void*, void*) {}
void sub_CHackAnalyzer_setLastMonsterDeadTime(void*, long long) {}
void sub_CCreatureMgr_GainExp(void*, int) {}
void sub_CCreatureMgr_IsEquippedCreature(void*) {}
void sub_CCreatureMgr_IsGrowCreature_Equipped_Creature(void*) {}
void sub_CValueStatistic_AddValueStatistic(void*, int, void*, unsigned) {}
void sub_CDisconnectDetecter_RegisterUser(void*, void*) {}
void sub_CDisconnectDetecter_UnregisterUser(void*, void*) {}
void sub_CDisconnectDetecter_GetInstance(void*) {}
void sub_CPrivateStoreMgr_IsBusyPrivateStore(void*, void*) {}
void sub_CPrivateStoreMgr_GetInstance(void*) {}
void sub_MissionClearCondition_Parameter_C1(void*, int) {}
void sub_CMissionList_Charac_Update_Win_event(void*, void*, const void*, bool&) {}
void sub_CMissionList_Charac_Update_Kill_event(void*, void*, const void*) {}
void sub_CMissionList_Charac_Update_Revenge_event(void*, void*, int, bool) {}
void sub_CMissionList_Charac_MakeMissionList_forOldUser(void*, const void*) {}
void sub_CMissionList_Charac_setIssue(void*, bool, bool) {}
void sub_CMissionList_Charac_getIssue_mode(void*, bool) {}
void sub_DB_InsertRandomOptionItemInform_makeRequest(int, int, unsigned char) {}
void sub_HistoryLog_WriteUseCoin(void*, void*, const char*) {}
void sub_CDungeonEntranceLog_IncrementDungeonEntrance(void*, int, bool) {}
void sub_cUserHistoryLog_EnterDungeon(void*, const char*, int) {}
void sub_cUserHistoryLog_LeaveDungeon(void*, const char*, int) {}
void sub_cUserHistoryLog_SendMail(void*, void*, unsigned) {}
void sub_CNetwork_get_inner_ip(void*) {}
void sub_CNetwork_get_nat_type(void*) {}
void sub_CNetwork_get_ip(void*) {}
void sub_CNetwork_get_mtu(void*) {}
void sub_CNetwork_get_port(void*) {}
void sub_CDataManager_GetMaxGradePvPChannel(void*) {}
void sub_CServerEvent_GetExpRate(void*) {}
void sub_CDungeon_GetDungeonName(void*) {}
void sub_PvpResultType_GetTotalScore(void*) {}
void sub_PvpResultType_Clear(void*) {}
void sub_PvpResultType_C1(void*) {}
void sub_PvpResultType_D1(void*) {}
void sub_ExpBonusPointResult_C1(void*) {}
void sub_CCargo_delete_item(void*, int, int, int) {}
void sub_CCargo_get_cargo_slot(void*, int) {}
void sub_CParty_send_invite_bluemarble(void*, int) {}
void sub_CInventory_delete_item(void*, int, int, int, int, bool) {}
void sub_CInventory_MakeItemPacket(void*, int, int, void*) {}
void sub_CInventory_RemoveKCItem(void*) {}
void sub_CInventory_GetInvenSlot(void*, int, int) {}
void sub_CStatisticServerProxy_SendPacket(void*, char*, int) {}
void sub_CServerProxyMgr_GetServerProxy(void*, int) {}
void sub_Packet_Server_Match_data_C1(void*) {}
void sub_UpgradeSeparateInfo_SetUpgradeSeparate(void*, unsigned char) {}
void sub_UpgradeSeparateInfo_GetUpgradeSeparate(void*) {}
