#ifndef DNF_GAME_GAMEWORLD_DEPS_H_
#define DNF_GAME_GAMEWORLD_DEPS_H_

// ============================================================================
// df_game_r 还原 —— GameWorld 依赖声明（G2-4 批次）。
// Village / Area / SimpleInfo / channel_script_t 尚无权威头，以 ORIG 构造体/
// 反汇编推导的最小声明 + 尺寸垫提供；其余外部符号用 extern + asm 标签
// （与 CParty.cpp/CGameManager.cpp 同模式），保证 mangled 符号与 ORIG 一致，
// 对应批次翻译后移除。
// ============================================================================

#include <map>
#include <string>
#include <utility>
#include <vector>

class CUser;
class PacketGuard;
class CBelong;
class CParty;

// ---- ENUM_NOTIPACKET（权威声明在 CUser.h；GameWorld.h 通过 include CUser.h
//      获得，此处不重复定义，避免同 TU 重定义）----

// ---- TownScript（sizeof >= 0x3c；ORIG 构造 086d1f04：+4/+8/+0xc/+0x10 四个
//      string、+0x20 map<int,TownAreaScript>、+0x38 string；GameWorld.cpp
//      只构造 + 读 m_0 + 传给 importTownScript/set_village）----
struct TownAreaScript
{
    char m_pad[0x38];
};

class TownScript
{
public:
    TownScript();
    ~TownScript();

    int m_0;                    // +0x00（townIndex_）
    std::string m_4;            // +0x04
    std::string m_8;            // +0x08
    std::string m_c;            // +0x0c
    std::string m_10;           // +0x10
    std::map<int, TownAreaScript> m_areaMap;  // +0x20
    std::string m_38;           // +0x38
};

// ---- SimpleInfo：GameWorld m_idMap（+0x8c）的 value（0x10 字节） ----
struct SimpleInfo
{
    int m_id;            // +0x00（ID 映射 / 玩家 acc id）
    char m_chatBan;      // +0x04（禁言标记）
    char m_moveBan;      // +0x05（禁移动标记）
    char m_pad6[2];      // +0x06
    int m_chatEndTick;   // +0x08（禁言结束毫秒时间）
    int m_moveEndTick;   // +0x0c（禁移动结束毫秒时间）
};

// ---- Village（sizeof 0x34；ORIG ctor 086c32e0 / set_village 086c33b8）----
class TownScript;
class Area;
class Village
{
public:
    Village();
    ~Village();
    bool set_village(TownScript& script);   // ORIG 086c33b8
    int get_gate_area();                    // ORIG 086c3b58
    Area* getArea(int area);                // ORIG 086c3ba2
    int GetUserCount(int area) const;       // ORIG 086c3d10

    char m_pad0[0x24];      // +0x00
    int m_areaCount;        // +0x24
    Area* m_pAreas;         // +0x28
    int m_requiredLevel;    // +0x2c
    int m_questIdx;         // +0x30
};

// ---- MapArea：Area 的传送区域矩形（16 字节）----
struct MapArea
{
    int m_x;     // +0x00
    int m_y;     // +0x04
    int m_w;     // +0x08
    int m_h;     // +0x0c
};

// ---- Area（sizeof 0x98；ORIG 086c21e2..086c30d4 族）----
class Area
{
public:
    void erase_user(CUser* user);                 // ORIG 086c2be4
    void delete_user(CUser* user);                // ORIG 086c2a9c
    void insert_user(CUser* user);                // ORIG 086c2c3a
    void send_to_all(PacketGuard& packet);        // ORIG 086c26d4
    void send_to_all(PacketGuard& packet,
                     std::vector<CUser*>& users); // ORIG 086c28ba
    void send_group(PacketGuard& packet, CBelong* belong); // ORIG 086c2938
    int get_area_index();                         // ORIG 086c2a12
    void get_user_id_list(std::vector<unsigned short>& out); // ORIG 086c305e
    int get_world_map_index();                    // ORIG 086c2f8a
    void make_power_war_hp_of_vill(PacketGuard& packet, int& count); // ORIG 086c2d0c
    int take_fish();                              // ORIG 086c21e2
    bool IsMovalbeArea(int vill, int area) const; // ORIG 086c3162（const）

    char m_pad0[0x68];        // +0x00
    int m_field68;            // +0x68（区域类型/钓鱼/竞技场判定）
    char m_field6c;           // +0x6c（限制交易区标记）
    char m_pad6d[0x7c - 0x6d];    // +0x6d
    std::vector<MapArea> m_mapAreas;  // +0x7c
    char m_pad88[0x98 - 0x88];        // +0x88
};

// ---- stOccStatisticByAge：按年龄统计（short[100]）----
struct stOccStatisticByAge
{
    short m_age[100];
};

namespace pvp_assault
{
class CDisposition
{
};
}

// ---- 全局数据（定义见 GameWorld.cpp）----
extern int MAX_VILLAGE_NUM;                    // 0948b2b0
extern std::map<int, std::string> g_townScriptFileList;  // 09500ea0

int _makeBasicInfoHeader(PacketGuard& packet);  // ORIG 086c8396

// ============================================================================
// 未翻译外部符号（asm 标签；与 ORIG mangled 名一致）
// ============================================================================

// ---- CUser 缺失方法（G1 头未覆盖；对应 TU 翻译后移除）----
extern void sub_CUser_DisConnSig(void* user, int sig, int flag, int param) asm("_ZN5CUser10DisConnSigE11DISCONN_SIGbi");
extern "C" bool sub_CUser_isGMUser(void* user) asm("_ZN5CUser8isGMUserEv");
extern unsigned int sub_CUser_get_posX(void* user) asm("_ZN5CUser8get_posXEv");
extern unsigned int sub_CUser_get_posY(void* user) asm("_ZN5CUser8get_posYEv");
extern char sub_CUser_get_direction(void* user) asm("_ZN5CUser13get_directionEv");
extern void sub_CUser_SendOneADayItemShopIndex(void* user,
    const std::vector<std::pair<int, int> >* list)
    asm("_ZN5CUser24SendOneADayItemShopIndexERKSt6vectorISt4pairIiiESaIS2_EE");
extern void* sub_CUser_GetCharacExpandData(void* user, int type)
    asm("_ZNK5CUser18GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE");
extern char sub_CUser_make_basic_info(void* user, char* buf, char type)
    asm("_ZN5CUser15make_basic_infoEPcc");
extern void sub_CUser_SetGameMasterMode(void* user, bool flag)
    asm("_ZN5CUser17SetGameMasterModeEb");
extern char sub_CUser_IsPermissionPrivateStore(void* user)
    asm("_ZN5CUser24IsPermissionPrivateStoreEv");
extern "C" void sub_CUser_SetPvpIndex(void* user, short idx) asm("_ZN5CUser11SetPvpIndexEs");
extern void sub_CUser_SetWarRoomIndex(void* user, short idx)
    asm("_ZN5CUser15SetWarRoomIndexEs");
extern void sub_CUser_setBlueMarbleIndex(void* user, short idx)
    asm("_ZN5CUser18setBlueMarbleIndexEs");
extern void sub_CUser_SetRevivalTime(void* user, int t) asm("_ZN5CUser14SetRevivalTimeEl");
extern void sub_CUser_SetUseAPCPotionTime(void* user, int t)
    asm("_ZN5CUser19SetUseAPCPotionTimeEl");
extern void sub_CUser_SendFatigue(void* user) asm("_ZN5CUser11SendFatigueEv");
extern void* sub_CUser_getHades(void* user) asm("_ZN5CUser8getHadesEv");
// sub_XNuclear_CHades_Send_ReturnToVillage（5 错拼长度 CHades）已由 CHades.cpp 真实定义
// （_ZN8XNuclear6CHades20Send_ReturnToVillageEv），此声明已删除。
extern void sub_CUser_AddDailyItem(void* user) asm("_ZN5CUser12AddDailyItemEv");
extern void sub_CUser_ResetDailyQuest(void* user) asm("_ZN5CUser15ResetDailyQuestEv");
extern void sub_CUser_ResetTrainingQuest(void* user) asm("_ZN5CUser18ResetTrainingQuestEv");
extern void sub_CUser_DimensionInoutUpdate(void* user, bool a, bool b)
    asm("_ZN5CUser20DimensionInoutUpdateEbb");
extern void sub_CUser_processDelDailyItem(void* user) asm("_ZN5CUser19processDelDailyItemEv");
extern void sub_CUser_RecoverCoin(void* user, int count) asm("_ZN5CUser11RecoverCoinEj");
extern void sub_CUser_SendOpenflag(void* user) asm("_ZN5CUser12SendOpenflagEv");
extern void sub_CUser_ResetDailyCharacExpandDataMidnight(void* user)
    asm("_ZN5CUser34ResetDailyCharacExpandDataMidnightEv");
extern void sub_CUser_ResetDailyCharacExpandData(void* user)
    asm("_ZN5CUser26ResetDailyCharacExpandDataEv");
extern void sub_CUser_SetValidLastLoginCharac(void* user, bool flag)
    asm("_ZN5CUser23SetValidLastLoginCharacEb");
extern void sub_CUser_SetLastLoginCharacNo(void* user, int no)
    asm("_ZN5CUser20SetLastLoginCharacNoEi");
extern void sub_CUser_SetLastLoginChannelNo(void* user, int no)
    asm("_ZN5CUser21SetLastLoginChannelNoEi");
extern void sub_CUser_resetAccountMemberBonusFatigue(void* user)
    asm("_ZN5CUser30resetAccountMemberBonusFatigueEv");
extern void sub_CUser_resetAccountUsedFatigue(void* user)
    asm("_ZN5CUser23resetAccountUsedFatigueEv");
extern void sub_CUser_SetDailyBadge(void* user, short* badge)
    asm("_ZN5CUser13SetDailyBadgeEPs");
extern void sub_CUser_send_MissionList(void* user) asm("_ZN5CUser16send_MissionListEv");
extern void sub_CUser_SendConditionEventInfo(void* user)
    asm("_ZN5CUser22SendConditionEventInfoEv");
extern char sub_CUser_getSex(void* user) asm("_ZN5CUser6getSexEv");
extern void sub_CUser_SendProperDungeonClearCount(void* user)
    asm("_ZN5CUser27SendProperDungeonClearCountEv");
extern void sub_CUser_resetNPCRelationShipDailyData(void* user)
    asm("_ZN5CUser29resetNPCRelationShipDailyDataEv");
extern void sub_CUser_sendNPCRelationShipFavor(void* user)
    asm("_ZN5CUser24sendNPCRelationShipFavorEv");
extern void sub_CUser_sendBlueMarbleEnterCount(void* user)
    asm("_ZN5CUser24sendBlueMarbleEnterCountEv");
extern void sub_CUser_ResetCurCharacUsedGiftFatigueQuantity(void* user)
    asm("_ZN5CUser37ResetCurCharacUsedGiftFatigueQuantityEv");
extern void sub_CUser_DBUpdateDBLogItem(void* user) asm("_ZN5CUser17DBUpdateDBLogItemEv");
extern void sub_CUser_ResetDBLogItem(void* user) asm("_ZN5CUser14ResetDBLogItemEv");
extern void sub_CUser_RecoverFatigue(void* user, int count) asm("_ZN5CUser14RecoverFatigueEi");
extern int sub_CUser_GetUID(void* user) asm("_ZN5CUser6GetUIDEv");
extern void* sub_CUser_getDungeonGainedGold(void* user)
    asm("_ZN5CUser20getDungeonGainedGoldEv");
extern void* sub_CUser_GetGoldControl(void* user) asm("_ZN5CUser14GetGoldControlEv");
extern void* sub_CUser_getCurCharacQuestR(void* user)
    asm("_ZNK5CUser18getCurCharacQuestREv");
extern void sub_CDungeonGainedGold_reset(void* self) asm("_ZN18CDungeonGainedGold5resetEv");
extern void sub_Secu_GoldControl_SavetoDB(void* self, bool a, bool b, bool c)
    asm("_ZN16Secu_GoldControl8SavetoDBEbbb");
extern unsigned int sub_CUser_get_charac_no(void* user, int def)
    asm("_ZN5CUser13get_charac_noEi");
extern char sub_CUser_isBlackUser(void* user, unsigned int characNo)
    asm("_ZN5CUser11isBlackUserEj");
extern short sub_CUser_GetPvpIndex(void* user) asm("_ZN5CUser11GetPvpIndexEv");
extern void* sub_CUser_getPad(void* user) asm("_ZN5CUser6getPadEv");
extern char* sub_CUser_getWebAddress(void* user) asm("_ZN5CUser13getWebAddressEv");
extern void sub_CUser_SetPowerUp(void* user, bool flag) asm("_ZN5CUser10SetPowerUpEb");
extern char sub_CUser_IsPowerUp(void* user) asm("_ZN5CUser9IsPowerUpEv");
extern int sub_CUser_CheckMoveTown(void* user, int vill) asm("_ZN5CUser13CheckMoveTownEi");
extern void sub_CUser_GetCharacExpandDataR(void* user, int type)
    asm("_ZNK5CUser21GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE");
extern void* sub_CUser_getBlueMarble(void* user) asm("_ZN5CUser13getBlueMarbleEv");
extern char sub_CUser_isDuplicationMessage(void* user, const std::string& msg)
    asm("_ZN5CUser20isDuplicationMessageERKSs");
extern void sub_CUser_incChattingMessageCount(void* user, int count)
    asm("_ZN5CUser23incChattingMessageCountEi");
extern int sub_CUser_getChattingMessageCount(void* user)
    asm("_ZN5CUser23getChattingMessageCountEv");
extern void sub_CUser_setChattingMessageCount(void* user, int count)
    asm("_ZN5CUser23setChattingMessageCountEi");
extern void sub_CUser_reqHumanCertify4ClearMap(void* user, bool flag)
    asm("_ZN5CUser24reqHumanCertify4ClearMapEb");

// ---- CUserCharacInfo 缺失方法（G1 头未覆盖）----
extern void* sub_CUserCharacInfo_GetCurCharacExpertJob(void* user)
    asm("_ZNK15CUserCharacInfo22GetCurCharacExpertJobEv");
extern void sub_CUserCharacInfo_getCurCharacMoney(void* user)
    asm("_ZNK15CUserCharacInfo16getCurCharacMoneyEv");
extern void sub_CUserCharacInfo_getCurCharacExp(void* user)
    asm("_ZNK15CUserCharacInfo14getCurCharacExpEv");
extern void sub_CUserCharacInfo_getCurrCharacBlackCount(void* user)
    asm("_ZNK15CUserCharacInfo23getCurrCharacBlackCountEv");
extern int sub_CUserCharacInfo_get_charac_memberkey(void* user)
    asm("_ZN15CUserCharacInfo20get_charac_memberkeyEv");

// ---- CUserHistoryLog::MoveArea（CUser +0x79700）----
extern void sub_CUserHistoryLog_MoveArea(void* self, int a, int b, int c, int d)
    asm("_ZN15cUserHistoryLog8MoveAreaEiiiii");

// ---- GM / 学校 / 公会 / 力战 ----
extern char sub_CGM_Manager_GetCurrentGmMode(void* self, unsigned int accId)
    asm("_ZN11CGM_Manager16GetCurrentGmModeEj");
extern void sub_CGM_Manager_TurnGmMode(void* self, unsigned int accId)
    asm("_ZN11CGM_Manager10TurnGmModeEj");
extern void sub_CSchoolMgr_DelUser(void* self, void* user) asm("_ZN10CSchoolMgr7DelUserEP5CUser");
extern int sub_CSchoolMgr_GetSchoolArea(void* self, unsigned int accId)
    asm("_ZN10CSchoolMgr13GetSchoolAreaEj");
extern void sub_CGuildAgitManager_ReleaseGuildAgitArea(void* self, unsigned int guildKey)
    asm("_ZN17CGuildAgitManager20ReleaseGuildAgitAreaEj");
extern int sub_CGuildAgitManager_GetGuildAgitAreaIndex(void* self, unsigned int guildKey,
                                                           int type)
    asm("_ZN17CGuildAgitManager21GetGuildAgitAreaIndexEji");
extern void sub_CPowerManager_DecreasePowerUserCount(void* self, char side)
    asm("_ZN13CPowerManager22DecreasePowerUserCountEc");
extern char sub_CPowerManager_IsPowerWarEventOn(void)
    asm("_ZN13CPowerManager17IsPowerWarEventOnEv");
extern void sub_CPowerManager_ProcessJoinPowerWar(void* self, void* user, char side)
    asm("_ZN13CPowerManager19ProcessJoinPowerWarEP5CUserc");
extern char sub_CPowerManager_GetWinnerSide(void* self)
    asm("_ZN13CPowerManager13GetWinnerSideEv");

// ---- 私人商店 ----
extern void sub_private_store_LoadPrivateStore(void* self, void* user)
    asm("_ZN13private_store16CPrivateStoreMgr16LoadPrivateStoreEP5CUser");
extern char sub_private_store_IsBusyPrivateStore(void* self, void* user)
    asm("_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser");
extern int sub_private_store_GetPrivateStoreSize(void* self)
    asm("_ZN13private_store16CPrivateStoreMgr19GetPrivateStoreSizeEv");
extern void* sub_private_store_GetInstancePrivateStoreMgr(void)
    asm("_ZN13private_store26GetInstancePrivateStoreMgrEv");

// ---- 事件 / 每日重置 ----
// （CEventManager::GetRepeatEvent 现由 CGuildServerProxy.h 真实实现；
//  CNetwork::get_nat_type 由 PvP_Room.cpp / WarRoom.cpp 各自本地声明，
//  签名不一致，此处不提供以避免跨 TU 冲突）
extern void sub_CEventScriptMng_send_event_init_data(void* self, void* user, bool flag)
    asm("_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb");
extern void sub_CItemShop_updateOneADayItemList(void* shop)
    asm("_ZN9CItemShop21updateOneADayItemListEv");
extern void sub_CItemShop_testupdateOneADayItemList(void* shop)
    asm("_ZN9CItemShop25testupdateOneADayItemListEv");
extern const std::vector<std::pair<int, int> >* sub_CItemShop_GetOneADayItemList(void* shop)
    asm("_ZNK9CItemShop18GetOneADayItemListEv");
extern void sub_CBoosterGage_send_data(void* gage, int user)
    asm("_ZN12CBoosterGage9send_dataEP5CUseri");
extern short sub_CFatigueBatteryHandle_ChargingFatigueBattery(void* self, void* user, int a)
    asm("_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri");
extern short sub_CFatigueBatteryHandle_ActiveFatigueBattery(void* self, void* user)
    asm("_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser");
extern char sub_CTimeGate_isOpen(void* self) asm("_ZNK9CTimeGate6isOpenEv");
extern void sub_InterSelectPcroomDailyReward_SendPacket(void* user)
    asm("_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser");
extern void* sub_ARAD_Singleton_HeroMissionEvent_Get(void)
    asm("_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv");
extern void sub_HeroMissionEvent_processMission(void* self, void* user, int mission,
                                                    int param)
    asm("_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj");
extern void sub_AradServerStateMessage_C1(void* self) asm("_ZN22AradServerStateMessageC1Ev");
extern void sub_ARAD_notifyOpenMessageDialog(void* user, int a, int eventIdx, void* msg)
    asm("_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiR22AradServerStateMessage");
// sub_ARAD_EventPeriodDataManager_isApplied（30 错拼长度前缀）已由
// Arad_EventPeriodDataManager.cpp 真实定义（ARAD::Arad_EventPeriodDataManager::
// isApplied(ENUM_REPEAT_EVENT_CODE,unsigned int)，ORIG 0x081956b0），此声明已删除。
extern void* sub_ARAD_DataManager_findGameScript(void* self, const std::string& name)
    asm("_ZN4ARAD16Arad_DataManager14findGameScriptERKSs");
extern void* sub_ARAD_Singleton_Arad_DataManager_Get(void)
    asm("_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv");

// ---- 疲劳 / 行动点 / 金控 ----
extern void* sub_APSystem_CActionPointManager_GetActionPoint(void* self)
    asm("_ZNK8APSystem19CActionPointManager14GetActionPointEv");
extern void sub_APSystem_DB_UpdateActionPoint_makeRequest(int uid, void* ap, bool flag)
    asm("_ZN8APSystem20DB_UpdateActionPoint11makeRequestEiRKNS_22_SIG_LOAD_ACTION_POINTEb");
extern void sub_APSystem_CUserProc_SetTodayActionAndCheckMedalReward(void* user)
    asm("_ZN8APSystem9CUserProc33SetTodayActionAndCheckMedalRewardEP5CUser");
extern void sub_WongWork_CMCAPManager_reset(void* self) asm("_ZN8WongWork12CMCAPManager5resetEv");

// ---- 区域移动 / 外挂检测 ----
extern char sub_CPartyTelePort_get_teleport_state(void* self)
    asm("_ZN14CPartyTelePort18get_teleport_stateEv");
// sub_CHackLog_InvalidAreaMove_*（27 错拼长度前缀）已由 CHackLog_InvalidAreaMove.cpp
// 真实定义（_ZN24CHackLog_InvalidAreaMove*），此声明已删除；GameWorld.cpp 直接
// include CHackLog_InvalidAreaMove.h 调用静态方法。
// sub_WongWork_CHackAnalyzer_addServerHackCnt（14 错拼长度）已随 GameWorld.cpp
// 迁移到真实 CHackAnalyzer 方法，此声明已删除。

// ---- PvP / 聊天 ----
extern void sub_pvp_assault_CAssaultMgr_SendPacket(void* self, void* user, bool flag,
                                                       void* packet)
    asm("_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard");
extern void* sub_pvp_assault_GetInstanceAssaultMgr(void)
    asm("_ZN11pvp_assault21GetInstanceAssaultMgrEv");
extern void sub_CSyncSlangFilter_Filter(void* self, const std::string& msg)
    asm("_ZN16CSyncSlangFilter6FilterERKSs");
extern void* sub_CSyncSlangFilter_GetInstance(void)
    asm("_ZN16CSyncSlangFilter11GetInstanceEv");
extern char sub_WongWork_CGMAccounts_isGM(void* self, unsigned int accId)
    asm("_ZN8WongWork11CGMAccounts4isGMEj");
extern void sub_CTitleBook_sendListOtherUser(void* self, void* user, int type)
    asm("_ZN10CTitleBook17sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE");

// ---- 其他 ----
extern void* sub_CGameManager_GetCraneMinigameManager(void* self)
    asm("_ZN12CGameManager23GetCraneMinigameManagerEv");
extern void sub_CraneMinigameManager_updateCraneItemNeedMaterial(void* self, int param)
    asm("_ZN20CraneMinigameManager27updateCraneItemNeedMaterialEi");
extern void sub_CMonitorServerProxy_SendTcpPacket(void* self, char* buf, int len)
    asm("_ZN19CMonitorServerProxy13SendTcpPacketEPci");
extern void sub_Packet_MiniCraneSeed_C1(void* self) asm("_ZN20Packet_MiniCraneSeedC1Ev");
extern void sub_CGuildServerProxy_SendPowerWarProcessInfo(void* self, unsigned int no)
    asm("_ZN17CGuildServerProxy23SendPowerWarProcessInfoEj");
// sub_ServerParameterScript_isDungeonOpen（23 错拼长度）已随 GameWorld.cpp
// 迁移到真实 isDungeonOpen(int)，此声明已删除。
extern void* sub_CDataManager_find_dungeon(void* self, int idx)
    asm("_ZNK12CDataManager11find_dungeonEi");
extern int sub_CDungeon_get_min_level(void* self) asm("_ZNK8CDungeon13get_min_levelEv");
extern void sub_CUserQuest_get_quest_info(void* self, char* buf)
    asm("_ZNK9UserQuest14get_quest_infoEPc");
extern char sub_CDataManager_reselectDailyTrainingQuest(void* self)
    asm("_ZN12CDataManager26reselectDailyTrainingQuestEv");
extern void sub_CInventory_RemoveKCItem(void* self) asm("_ZN10CInventory12RemoveKCItemEv");
extern void sub_CMyFileLog_C1(void* self, const char* file, int line)
    asm("_ZN10CMyFileLogC1EPKci");
extern void sub_CMyFileLog_cl(void* self, const char* path, const char* fmt, ...)
    asm("_ZN10CMyFileLogclEPKcS1_z");
extern char sub_Sanicova_CPad_isActivate(void* self)
    asm("_ZNK8Sanicova4CPad10isActivateEv");
extern int sub_Sanicova_CPad_getFailCnt(void* self) asm("_ZN8Sanicova4CPad10getFailCntEv");
extern void sub_Sanicova_CPad_setFailCnt(void* self, int cnt)
    asm("_ZN8Sanicova4CPad10setFailCntEi");
extern void sub_DB_PassPadUpdateFailCnt_makeRequest(unsigned int accId,
    unsigned int failCnt, const char* webAddr)
    asm("_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc");
extern int sub_expert_job_CExpertJob_GetType(void* self)
    asm("_ZN10expert_job10CExpertJob7GetTypeEv");

// ---- CParty 缺失方法（G2-1 头未覆盖）----
extern int sub_CParty_get_member_count(void* self) asm("_ZN6CParty16get_member_countEv");
extern void* sub_CParty_GetPartyIndex(void* self) asm("_ZN6CParty13GetPartyIndexEv");
extern char sub_CParty_getTitleIndex(void* self) asm("_ZN6CParty13getTitleIndexEv");
extern char* sub_CParty_getTitle(void* self) asm("_ZN6CParty8getTitleEv");
extern char sub_CParty_IsReturnUserParty(void* self) asm("_ZN6CParty17IsReturnUserPartyEv");
extern char sub_CParty_getUserMax(void* self) asm("_ZN6CParty10getUserMaxEv");
extern unsigned short sub_CParty_getDungIndex(void* self) asm("_ZNK6CParty12getDungIndexEv");
extern char sub_CParty_getDungDiffi(void* self) asm("_ZNK6CParty12getDungDiffiEv");
extern char sub_CParty_IsEventCharacParty(void* self) asm("_ZN6CParty18IsEventCharacPartyEv");
extern void* sub_CParty_get_user(void* self, int idx) asm("_ZN6CParty8get_userEi");
extern void* sub_CParty_getManager(void* self) asm("_ZN6CParty10getManagerEv");
extern char sub_CParty_is_quick_party(void* self) asm("_ZN6CParty14is_quick_partyEv");
extern void* sub_CParty_GetPartyTelePort(void* self) asm("_ZN6CParty16GetPartyTelePortEv");
extern void* sub_CUser_GetParty(void* user) asm("_ZN5CUser8GetPartyEv");

// ---- 单例 / 环境 / 数据访问（返回指针的用 void* 接收）----
extern void* sub_G_CEnvironment(void) asm("_Z14G_CEnvironmentv");
extern void* sub_G_CDataManager(void) asm("_Z14G_CDataManagerv");
extern "C" void* sub_G_CGameManager(void) asm("_Z14G_CGameManagerv");
extern unsigned int sub_CEnvironment_get_channel_no(void* self)
    asm("_ZN12CEnvironment14get_channel_noEv");
extern int sub_CEnvironment_get_gc_no_hardcode(void* self, int group)
    asm("_ZN12CEnvironment18get_gc_no_hardcodeE17ENUM_SERVER_GROUP");
extern void* sub_CDataManager_GetChannelScript(void* self)
    asm("_ZNK12CDataManager16GetChannelScriptEv");
extern void* sub_CDataManager_get_event_script_mng(void* self)
    asm("_ZN12CDataManager20get_event_script_mngEv");
extern void sub_CDataManager_GetPvPChannelGrade(void* self)
    asm("_ZN12CDataManager18GetPvPChannelGradeEv");
extern void* sub_channel_script_t_getChannelInfo(void* self, unsigned char type,
                                                     unsigned int gcNo)
    asm("_ZNK16channel_script_t14getChannelInfoEhj");
extern int sub_CSystemTime_getCurSec(void* self) asm("_ZN11CSystemTime9getCurSecEv");
extern "C" unsigned int sub_CSystemTime_getCurTickCount(void* self) asm("_ZN11CSystemTime15getCurTickCountEv");
extern void sub_CSystemTime_update(void* self) asm("_ZN11CSystemTime6updateEv");
extern void sub_CEnvironment_set_suspend_state(void* self, bool flag)
    asm("_ZN12CEnvironment17set_suspend_stateEb");
extern char* sub_CEnvironment_get_file_name(void* self) asm("_ZN12CEnvironment13get_file_nameEv");
extern int sub_CEnvironment_get_server_group(void* self)
    asm("_ZN12CEnvironment16get_server_groupEv");
extern int sub_CServerProxyMgr_GetStartIndex(void* self)
    asm("_ZN15CServerProxyMgrI21CStatisticServerProxyE13GetStartIndexEv");
extern int sub_CServerProxyMgr_GetEndIndex(void* self)
    asm("_ZN15CServerProxyMgrI21CStatisticServerProxyE11GetEndIndexEv");
extern int sub_CServerProxyMgr_GetNextIndex(void* self, int* idx)
    asm("_ZN15CServerProxyMgrI21CStatisticServerProxyE12GetNextIndexERi");
extern void* sub_CServerProxyMgr_GetServerProxy_monitor(void* self, int group)
    asm("_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP");
extern void* sub_CServerProxyMgr_GetServerProxy_guild(void* self, int group)
    asm("_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP");

extern char* sub_NumberToString(unsigned int value, int base)
    asm("_Z14NumberToStringji");
extern bool sub_Is_restrictive_commercial_transaction_zone(int x1, int y1, int x2, int y2)
    asm("_Z42Is_restrictive_commercial_transaction_zoneiiii");

// ---- 流 / 队列（StreamPool/CStreamGuard/MsgQueueMgr 已有权威头，仅此处依赖窄口）----
extern void* sub_StreamPool_Acquire(void* pool, const char* file, int line)
    asm("_ZN10StreamPool7AcquireEPKci");
extern void sub_CStreamGuard_C1(void* self, void* stream, bool flag)
    asm("_ZN12CStreamGuardC1EP6Streamb");
extern void sub_CStreamGuard_D1(void* self) asm("_ZN12CStreamGuardD1Ev");
extern void* sub_CStreamGuard_de(void* self) asm("_ZN12CStreamGuarddeEv");
extern void sub_CStreamGuard_ls_int(void* self, int v) asm("_ZN12CStreamGuardlsEi");
extern void* sub_CStreamGuard_pt(void* self) asm("_ZN12CStreamGuardptEv");
extern void sub_CStreamGuard_put_binary(void* self, void* data, int len)
    asm("_ZN12CStreamGuard10put_binaryEPvi");
extern void sub_MsgQueueMgr_put(void* self, int queueIdx, void* guard)
    asm("_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard");

// ---- TownScript / sync_script / CGM ----
extern int sub_initTownScript(char* dir, char* lst) asm("_Z14initTownScriptPcS_");
extern bool sub_importTownScript(void* script, const char* path)
    asm("_Z16importTownScriptP10TownScriptPKc");
extern void* sub_GetInstanceSyncScript(void) asm("_ZN11sync_script21GetInstanceSyncScriptEv");
extern char sub_CSyncScript_truncate_town_info_table(void* self)
    asm("_ZN11sync_script11CSyncScript24truncate_town_info_tableEv");
extern char sub_CSyncScript_insert_town_info_to_db(void* self, void* script)
    asm("_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript");

#endif  // DNF_GAME_GAMEWORLD_DEPS_H_
