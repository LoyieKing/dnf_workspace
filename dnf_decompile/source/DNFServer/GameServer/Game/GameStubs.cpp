#include <string.h>
// df_game_r Game/ 集成桩（2026-08-16）：
// 第二层类（Stream/PacketBuf/CEnvironment/队列）依赖的上层/算法类，
// 属后续批次（G7 加密 / G5 数据 / GlobalData 组）。先提供可链接实现，
// 翻译对应类时替换。
#include <cstdio>
#include <stdlib.h>
#include <bitset>
#include "Stream.h"
#include "CStreamGuard.h"
#include "StreamDeps.h"
#include "GameBase.h"
#include "CEnvironment.h"
#include "CDataManager.h"
#include "CNetwork.h"
#include "MySQL.h"
#include "PacketHeader.h"
#include "StreamPool.h"
#include "InterfacePacketBuf.h"
#include "ServerXml.h"

void _NS_PI_MakeHash_NOTI(class PacketBuf*) {}

// ---- G3 任务域辅助（真实符号，后续批次细化） ----
void StrToBitset(unsigned char* src, std::bitset<256>& out) {}  // TODO(G3)
void BitsetToStr(const std::bitset<256>& bits, unsigned char* out) {}  // TODO(G3)
int _checkTimeoutItem(const Inven_Item& item) { return 0; }  // TODO(G3)
bool DeleteInvalidItemScript::IsInvalidItem2Delete(int) { return false; }

class MySQL;
void GetIdentityFromDB(MySQL*) {}

// ---- STItemScript 嵌套结构方法（算法正确即可，G1 物品批次细化）----
#include "STItemScript.h"
DyeInfo::DyeInfo() : m_vec4() { clear(); }
DyeInfo::~DyeInfo() {}
void DyeInfo::clear()
{
    m_field0 = 1;
    m_vec4.clear();
}
DyeInfo& DyeInfo::operator=(const DyeInfo& other)
{
    m_field0 = other.m_field0;
    m_vec4 = other.m_vec4;
    return *this;
}
STItemScript::SEXPERTJOB::SEXPERTJOB() {}
STItemScript::SEXPERTJOB::~SEXPERTJOB() {}
STSpecialMonsterDrop::STSpecialMonsterDrop() {}
void STSpecialMonsterDrop::clear() {}

// ---- G1 上层类方法 stub（CInventory/SkillSlot/CBoosterGage 依赖；G1 批次细化）----
enum INVEN_TYPE
{
    INVEN_TYPE_INVEN = 0,
    INVEN_TYPE_EQUIP = 1,
    INVEN_TYPE_AVATAR = 2,
    INVEN_TYPE_CREATURE = 3,
    INVEN_TYPE_5 = 5,
    INVEN_TYPE_6 = 6
};
enum eItemAddReason { eItemAddReason_0 = 0 };
enum eMoneyAddReason { eMoneyAddReason_0 = 0 };
enum eItemDelReason { eItemDelReason_0 = 0 };
enum eMoneySubReason { eMoneySubReason_0 = 0 };
enum eCoinSubReason { eCoinSubReason_0 = 0 };
enum eAvatarItemAddReason { eAvatarItemAddReason_0 = 0 };
enum ENUM_ITEMSPACE { ENUM_ITEMSPACE_0 = 0 };
const char* GetInvenTypeFromItemSpace(ENUM_ITEMSPACE space) { return ""; }
int GetIntegratedPvPItemAttr(const Inven_Item& item) { return 0; }  // TODO(G3)
RecipeInfo::RecipeInfo() {}  // TODO(G5)
RecipeInfo::~RecipeInfo() {}  // TODO(G5)
struct RewardItemInfo
{
    char m_pad[0x10];
};
void makeRewardItemInfo(const std::vector<int>& src,
                        std::vector<RewardItemInfo>& out)
{
}  // ORIG T 0x8352203
enum ENUM_TITLE_BOOK_CATEGORY { ENUM_TITLE_BOOK_CATEGORY_0 = 0 };
enum _DailyScheduleType { _DailyScheduleType_0 = 0 };
enum ENUM_EQUIPSLOT { ENUM_EQUIPSLOT_0 = 0 };
enum ENUM_CHARAC_EXPAND_TYPE { ENUM_CHARAC_EXPAND_TYPE_0 = 0 };
enum ENUM_DBLOG_ITEM_TYPE { ENUM_DBLOG_ITEM_TYPE_0 = 0 };
enum SECURITY_PROTCTION { SECURITY_PROTCTION_0 = 0 };
enum VALUE_STATISTIC_FIELD { VALUE_STATISTIC_FIELD_0 = 0 };
enum ENUM_USERINFO { ENUM_USERINFO_0 = 0 };
enum eSkillInitReason { eSkillInitReason_0 = 0 };
enum eSkillAddReason { eSkillAddReason_0 = 0 };
enum eSkillDelReason { eSkillDelReason_0 = 0 };
enum eSPAddReason { eSPAddReason_0 = 0 };
enum eSPSubReason { eSPSubReason_0 = 0 };
enum eChangeGrowTypeReason { eChangeGrowTypeReason_0 = 0 };
enum eFPAddReason { eFPAddReason_0 = 0 };
enum eFPSubReason { eFPSubReason_0 = 0 };
enum eTradeEndReason { eTradeEndReason_0 = 0 };
enum ENUM_TRADESTATE { ENUM_TRADESTATE_0 = 0 };
enum eExpAddReason { eExpAddReason_0 = 0 };
enum ENUM_NOTIPACKET { ENUM_NOTIPACKET_0 = 0 };
enum ENUM_QUEST_ENEMY_TYPE { ENUM_QUEST_ENEMY_TYPE_0 = 0 };
enum ENUM_MONEY_FULL_REASON { ENUM_MONEY_FULL_REASON_0 = 0 };
enum ENUM_PACKETCLASS { ENUM_PACKETCLASS_0 = 0 };
enum PVP_BATTLE_MODE { PVP_BATTLE_MODE_0 = 0 };
enum DISCONN_SIG { DISCONN_SIG_0 = 0 };
class MissionClearCondition_Parameter
{
public:
    MissionClearCondition_Parameter(PVP_BATTLE_MODE mode);
};
MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
{
}  // TODO(G2)

class PacketGuard;
class CExpandEquipslot;
class TownScript;
class CBelong;
struct stBuySkillInfo;
class UserQuest
{
public:
};
struct MSG_MAILBOX_SEND;

namespace user_creature
{
class CCreatureMgr
{
public:
    void Reset();
    void SetUser(CUser* user);
    int UseItem(Inven_Item* item, int slot);
    bool InsertCreatureItem(Inven_Item* item, int a, int b, int c, int d);
    void GainExp(int exp);
    bool IsEquippedCreature() const;
    bool IsGrowCreature_Equipped_Creature() const;
    char m_pad[0x4c];
};
void CCreatureMgr::Reset() {}  // TODO(G1)
void CCreatureMgr::SetUser(CUser*) {}  // TODO(G1)
int CCreatureMgr::UseItem(Inven_Item*, int) { return -1; }  // TODO(G1)
void CCreatureMgr::GainExp(int) {}  // TODO(G2)
bool CCreatureMgr::IsEquippedCreature() const { return false; }  // TODO(G2)
bool CCreatureMgr::IsGrowCreature_Equipped_Creature() const
{
    return false;  // TODO(G2)
}
bool CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
{
    return false;  // TODO(G1)
}
}

namespace WongWork
{
enum ENUM_HACK_TYPE { ENUM_HACK_TYPE_0 = 0 };
enum ENUM_HACKTYPE { ENUM_HACKTYPE_0 = 0 };
class CGenUniqueNo
{
public:
    enum ENUM_IPGNO_TYPE
    {
        ENUM_IPGNO_TYPE_6 = 6
    };
    static void genIPGNo(ENUM_IPGNO_TYPE type, unsigned int characNo, char* out);
};
void CGenUniqueNo::genIPGNo(ENUM_IPGNO_TYPE, unsigned int, char*) {}  // TODO(G1)
class CAvatarItemMgr
{
public:
    void Reset();
    unsigned long RegistNotAssignedAvatarItem(int itemIdx, int tick,
                                              const char* ipgAgency, bool b,
                                              const stAvatarEmblemInfo_t& emblem);
    int GetExpireDate(int avatarUid) const;
    const char* GetIPGAgencyNo(int addInfo) const;
    int GetRemainDate(int nAvatarUid, int nTick) const;
};
void CAvatarItemMgr::Reset() {}  // TODO(G1)
unsigned long CAvatarItemMgr::RegistNotAssignedAvatarItem(int, int, const char*,
                                                          bool,
                                                          const stAvatarEmblemInfo_t&)
{
    return 0;  // TODO(G1)
}
int CAvatarItemMgr::GetExpireDate(int) const { return 0; }  // TODO(G1)
const char* CAvatarItemMgr::GetIPGAgencyNo(int) const { return ""; }  // TODO(G1)
int CAvatarItemMgr::GetRemainDate(int, int) const { return 0; }  // TODO(G1)
class CHackAnalyzer
{
public:
    void addServerHackCnt(CUser* user, ENUM_HACK_TYPE type, unsigned int count,
                          unsigned int a, unsigned int b);
    void addServerHackCnt(CUser* user, ENUM_HACKTYPE type, unsigned int count,
                          unsigned int a, unsigned int b);
    void reportHackInfo();
    void beginCollectHackInfo(CUser* user);
    void setLastMonsterDeadTime(long t);
};
void CHackAnalyzer::addServerHackCnt(CUser*, ENUM_HACK_TYPE, unsigned int,
                                     unsigned int, unsigned int)
{
}  // TODO(G1)
void CHackAnalyzer::addServerHackCnt(CUser*, ENUM_HACKTYPE, unsigned int,
                                     unsigned int, unsigned int)
{
}  // TODO(G1)
void CHackAnalyzer::reportHackInfo() {}  // TODO(G2)
void CHackAnalyzer::beginCollectHackInfo(CUser*) {}  // TODO(G2)
void CHackAnalyzer::setLastMonsterDeadTime(long) {}  // TODO(G2)
class CMailBoxHelper
{
public:
    void ReqDBSendNewAvatarMail(CUser* user, int a, int b, int c, char d, char e,
                                const char* f, const char* g, int h);
    void ReqDBSendNewCreatureMail(CUser* user, int a, const Inven_Item& item,
                                  const char* b, int c);
    void ReqDBSendNewSystemMail(const char* a, const Inven_Item& item,
                                unsigned int b, unsigned int c, const char* d,
                                int e, unsigned int f, char g, bool h, bool i);
    void ReqDBSendNewSystemMail(const char* a, const Inven_Item& item,
                                unsigned int b, unsigned int c, const char* d,
                                int e, unsigned int f,
                                ENUM_SERVER_GROUP group, bool h, bool i);
};
void CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char,
                                            const char*, const char*, int)
{
}  // TODO(G1)
void CMailBoxHelper::ReqDBSendNewCreatureMail(CUser*, int, const Inven_Item&,
                                              const char*, int)
{
}  // TODO(G1)
void CMailBoxHelper::ReqDBSendNewSystemMail(const char*, const Inven_Item&,
                                            unsigned int, unsigned int,
                                            const char*, int, unsigned int, char,
                                            bool, bool)
{
}  // TODO(G1)
void CMailBoxHelper::ReqDBSendNewSystemMail(const char*, const Inven_Item&,
                                            unsigned int, unsigned int,
                                            const char*, int, unsigned int,
                                            ENUM_SERVER_GROUP, bool, bool)
{
}  // TODO(G2)
class CUserPremium
{
public:
    unsigned short getOverSkillLevel() const;
    unsigned short GetAdvantageExpRate() const;
};
unsigned short CUserPremium::getOverSkillLevel() const { return 0; }  // TODO(G1)
unsigned short CUserPremium::GetAdvantageExpRate() const { return 0; }  // TODO(G2)
}

struct stAvatarEmblemInfo_t
{
    void init();
    char m_pad[0x1e];
};
void stAvatarEmblemInfo_t::init() {}  // TODO(G1)
struct stAvatarExpansionInfo_t
{
    void init();
    char m_pad[0x4];
};
void stAvatarExpansionInfo_t::init() {}  // TODO(G1)

// AvatarCoin → Game/AvatarCoin.cpp（第一阶段正式实现）
class Store
{
public:
    void GetSellItemPrice(Inven_Item& item, const CItem* pItem, short count,
                          bool flag, int& outPrice);
};
Store* G_Store() { static Store s; return &s; }  // TODO(G1)
void Store::GetSellItemPrice(Inven_Item&, const CItem*, short, bool, int&) {}

class CValueStatistic
{
public:
    void AddValueStatistic(VALUE_STATISTIC_FIELD field, CUser* user,
                           unsigned int value);
};
CValueStatistic* GetInstanceValueStatistic() { static CValueStatistic s; return &s; }
void CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
{
}  // TODO(G1)

class Secu_GoldControl
{
public:
    void AddGold(unsigned int value, eMoneyAddReason reason);
    void SubGold(unsigned int value, eMoneySubReason reason);
    void SavetoDB(bool a, bool b, bool c);
};
void Secu_GoldControl::AddGold(unsigned int, eMoneyAddReason) {}  // TODO(G1)
void Secu_GoldControl::SubGold(unsigned int, eMoneySubReason) {}  // TODO(G1)
void Secu_GoldControl::SavetoDB(bool, bool, bool) {}  // TODO(G2)

// CDungeonGainedGold → Game/CDungeonGainedGold.cpp（第一阶段正式实现）

class CSecu_ProtectionField
{
public:
    static int Check(CSecu_ProtectionField* field, CUser* user,
                     SECURITY_PROTCTION type);
    int GetOppositeErr(int err);
};
int CSecu_ProtectionField::Check(CSecu_ProtectionField*, CUser*, SECURITY_PROTCTION)
{
    return 0;  // TODO(G1)
}
class CSlotBoundChecker
{
public:
    bool get_slot_bound(Inven_Item::ITEM_TYPE type, int capacity, int& start,
                        int& end) const;
    bool get_item_type(int slot, int capacity,
                       Inven_Item::ITEM_TYPE& outType) const;
};
CSlotBoundChecker* g_slotBoundChecker;  // TODO(G1)
bool CSlotBoundChecker::get_slot_bound(Inven_Item::ITEM_TYPE, int, int&, int&) const
{
    return false;  // TODO(G1)
}
bool CSlotBoundChecker::get_item_type(int, int, Inven_Item::ITEM_TYPE&) const
{
    return false;  // TODO(G1)
}

class PvpResultType;
class CDungeonGainedGold;  // 定义见 Game/CDungeonGainedGold.cpp
class CUser
{
public:
    enum eSendTarget
    {
        eSendTarget_0 = 0,
        eSendTarget_1 = 1
    };
    void DecreaseGuildPowerWarPoint(unsigned int);
    int get_charac_no(int);
    int get_charac_no(int) const;
    int get_state();
    int get_area(bool param);
    void set_area(int area);
    char IsPermissionPrivateStore();
    void* getHades();
    void DisConnSig(DISCONN_SIG sig, bool flag, int param);
    void SetTradeSpace(int idx);
    void OnDisconnect();
    void SetCharacLevel(int level);
    void AddDungeonClear(int dungeonIdx, int clearCount);
    void master_new_skill(stBuySkillInfo& info, bool flag);
    void ChangeGrowType_GM(int a, int b);
    UserQuest* getCurCharacQuestW();
    int AddItem(int itemIdx, int count, eItemAddReason reason,
                ENUM_ITEMSPACE& space, int slot);
    unsigned int GetUID() const;
    unsigned int get_acc_id() const;
    const char* get_acc_name() const;
    bool CheckItemLock(int a, int b) const;
    int GetAccountLastPlayTime();
    ENUM_SERVER_GROUP GetServerGroup() const;
    bool isBlackUser(int characNo) const;
    Secu_GoldControl* GetGoldControl();
    CDungeonGainedGold* getDungeonGainedGold();
    WongWork::CHackAnalyzer* getHackAnalyzer();
    CExpandEquipslot* GetCharacExpandDataR(ENUM_CHARAC_EXPAND_TYPE type) const;
    CExpandEquipslot* GetCharacExpandData(ENUM_CHARAC_EXPAND_TYPE type) const;
    void AddDBLogItem(unsigned int itemIdx, unsigned int type,
                      ENUM_DBLOG_ITEM_TYPE value);
    int addAvatarItem(unsigned long itemIdx, char param2, char param3,
                      const char* ipgAgency, eAvatarItemAddReason reason);
    void SendUpdateItemList(eSendTarget target, ENUM_ITEMSPACE space, int slot);
    bool getGmQuestFlag();
    void Send(PacketGuard& packet);
    int GetCurExpertJobLevel(int exp);
    WongWork::CUserPremium* GetPremiumInfo() const;
    UserQuest* getCurCharacQuestR() const;
    void makeGuildSkillMessage(const char* skillName, int count);
    void set_grow_type(unsigned char firstGrow, unsigned char secondGrow,
                       char* name,
                       eChangeGrowTypeReason reason);
    bool is_clear_stealingSkillMission() const;
    void givePvPSkillTree(int a, bool b, int c);
    void make_basic_info(char* buf, char type);
    int get_unique_id() const;
    void* GetParty();
    void send_equip(int slot);
    void DeleteRentalItemInfo(int idx);
    void* GetPICSMap();
    const char* GetSsnString();
    void LogoutCachedCharacter(unsigned char slot);
    void ReCalcChattingEmoticon();
    void ResetItemByScript(std::vector<std::pair<int, int> >& list);
    void SendChattingEmoticon();
    void SetGameMasterMode(bool flag);
    void SetSaveRentalInfoToExchange(bool flag);
    void UpdateData();
    void UpdateLogout(bool flag);
    bool checkLogOutCorrectly();
    void deleteDailyStackableItem(std::vector<std::pair<int, int> >& list,
                                  int a, int b);
    void deleteSpecificItem(
        const std::vector<std::pair<int, int> >& list,
        std::vector<std::pair<int, int> >& out);
    void doLinkCharacDisconnect();
    char getSex();
    void giveup_panalty();
    void log_out();
    void prepareDisconnect();
    void processReturnUserQuestAutoClear();
    void send_clear_quest_list();
    void send_itemspace(int space);
    void send_ontime_reward_start_notify();
    void send_pvp_record();
    void send_skill_info();
    void ResetDailyCharacExpandDataMidnight();
    void resetDailyData();
    void RecoverCoin(unsigned int v);
    void SendOpenflag();
    void* GetPVPRoom();
    int CheckMoney(int money);
    int getDungeonIdxAfterClear();
    void* GetSecretShopData();
    void RewardItem2DeleteInvalidItem(
        const std::string& name,
        const std::vector<std::pair<int, int> >& list);
    void RecoverFatigue(int v);
    void ResetDailyCharacExpandData();
    void SendConditionEventInfo();
    void SendProperDungeonClearCount();
    void resetNPCRelationShipDailyData();
    void sendNPCRelationShipFavor();
    void ResetCurCharacUsedGiftFatigueQuantity();
    bool CheckFatigue();
    bool CheckQuestMonster(int a, int b, ENUM_QUEST_ENEMY_TYPE type);
    void FatigueUp(int v);
    bool IsEquipAvatar();
    bool IsHavePremiumAdvantage() const;
    void LogHistory(const char* fmt, ...);
    void SendMoneyFullReason(ENUM_MONEY_FULL_REASON reason, unsigned long a,
                             unsigned long b);
    void SendNotiPacket(eSendTarget target, ENUM_NOTIPACKET cmd, int param);
    void SetPvpIndex(short idx);
    bool acceptable_within_mission() const;
    void add_guild_point_item();
    void add_guild_pvp_result(int v);
    void add_pvp_play_info(unsigned int a, unsigned int b);
    void add_pvp_result(bool flag, unsigned int* out);
    unsigned int find_pvp_masterid_walkingout_me(unsigned int idx);
    void gainExpAsUpperMember(int exp);
    void gainGuildSkillExp(int exp);
    void gainPowerWarRewardExp(int exp);
    void gain_exp_sp(int a, int& b, int& c, eExpAddReason reason, int d, bool e);
    bool has_within_Mission() const;
    void insert_pvp_masterid_walkingout_me(unsigned int idx);
    bool isCompetitionMercenary() const;
    bool isGMUser();
    int CheckMoveTown(int vill);
    unsigned int get_posX();
    unsigned int get_posY();
    char get_direction();
    void saveTaxMoneyForUpperMember(int v);
    void sendBlueMarbleEnterCount();
    void send_MissionList();
    void update_old_pvp_point();
    void update_pvp_point(int v);
    void update_pvp_rank(const PvpResultType& result);
    void AddDailyItem();
    void DimensionInoutUpdate(bool a, bool b);
    char GetEventCreateDnfReward();
    void ResetDailyQuest();
    void ResetTrainingQuest();
    void SendOneADayItemShopIndex(const std::vector<std::pair<int, int> >& list);
    void SendUpdateItem(eSendTarget target, ENUM_ITEMSPACE space, int slot);
    void SetPowerUp(bool flag);
    void UpdateAuraAvatarOption(int a, int b);
    void* getBlueMarble();
    int get_aura_avatar_option_value(int idx);
    int get_guildwar_point_per_pvpplay();
    int get_pvp_WinningRate_relateMission() const;
    bool isDuplicationMessage(const std::string& msg);
    char is_equip_aura_avatar(char slot, int& out);
    void processDelDailyItem();
    void reqHumanCertify4ClearMap(bool flag);
    void setChattingMessageCount(int count);
    void deleteSpecificItems(const std::vector<std::pair<int, int> >* list);
    bool IsGameMasterMode() const;
};
int CUser::get_area(bool) { return 0; }  // TODO(G2)
void CUser::set_area(int) {}  // TODO(G2)
char CUser::IsPermissionPrivateStore() { return 0; }  // TODO(G2)
void* CUser::getHades() { return 0; }  // TODO(G2)
void CUser::DisConnSig(DISCONN_SIG, bool, int) {}  // TODO(G2)
void CUser::givePvPSkillTree(int, bool, int) {}  // TODO(G2)
void CUser::SetTradeSpace(int) {}  // TODO(G2)
void CUser::OnDisconnect() {}  // TODO(G2)
void CUser::SetCharacLevel(int) {}  // TODO(G2)
void CUser::AddDungeonClear(int, int) {}  // TODO(G2)
void CUser::master_new_skill(stBuySkillInfo&, bool) {}  // TODO(G2)
void CUser::ChangeGrowType_GM(int, int) {}  // TODO(G2)
UserQuest* CUser::getCurCharacQuestW() { return 0; }  // TODO(G2)
int CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int) { return 0; }  // TODO(G2)
void CUser::DeleteRentalItemInfo(int) {}  // TODO(G2)
void* CUser::GetPICSMap() { return 0; }  // TODO(G2)
const char* CUser::GetSsnString() { return ""; }  // TODO(G2)
void CUser::LogoutCachedCharacter(unsigned char) {}  // TODO(G2)
void CUser::ReCalcChattingEmoticon() {}  // TODO(G2)
void CUser::ResetItemByScript(std::vector<std::pair<int, int> >&) {}  // TODO(G2)
void CUser::SendChattingEmoticon() {}  // TODO(G2)
void CUser::SetGameMasterMode(bool) {}  // TODO(G2)
void CUser::SetSaveRentalInfoToExchange(bool) {}  // TODO(G2)
void CUser::UpdateData() {}  // TODO(G2)
void CUser::UpdateLogout(bool) {}  // TODO(G2)
bool CUser::checkLogOutCorrectly() { return false; }  // TODO(G2)
void CUser::deleteDailyStackableItem(std::vector<std::pair<int, int> >&, int,
                                     int)
{
}  // TODO(G2)
void CUser::deleteSpecificItem(
    const std::vector<std::pair<int, int> >&,
    std::vector<std::pair<int, int> >&)
{
}  // TODO(G2)
void CUser::doLinkCharacDisconnect() {}  // TODO(G2)
char CUser::getSex() { return 0; }  // TODO(G2)
void CUser::giveup_panalty() {}  // TODO(G2)
void CUser::log_out() {}  // TODO(G2)
void CUser::prepareDisconnect() {}  // TODO(G2)
void CUser::processReturnUserQuestAutoClear() {}  // TODO(G2)
void CUser::send_clear_quest_list() {}  // TODO(G2)
void CUser::send_itemspace(int) {}  // TODO(G2)
void CUser::send_ontime_reward_start_notify() {}  // TODO(G2)
void CUser::send_pvp_record() {}  // TODO(G2)
void CUser::send_skill_info() {}  // TODO(G2)
bool CUser::isBlackUser(int) const { return false; }  // TODO(G2)
bool CUser::CheckFatigue() { return false; }  // TODO(G2)
bool CUser::CheckQuestMonster(int, int, ENUM_QUEST_ENEMY_TYPE)
{
    return false;  // TODO(G2)
}
void CUser::FatigueUp(int) {}  // TODO(G2)
bool CUser::IsEquipAvatar() { return false; }  // TODO(G2)
bool CUser::IsHavePremiumAdvantage() const { return false; }  // TODO(G2)
void CUser::LogHistory(const char*, ...) {}  // TODO(G2)
void CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long,
                                unsigned long)
{
}  // TODO(G2)
void CUser::SendNotiPacket(eSendTarget, ENUM_NOTIPACKET, int) {}  // TODO(G2)
void CUser::SetPvpIndex(short) {}  // TODO(G2)
bool CUser::acceptable_within_mission() const { return false; }  // TODO(G2)
void CUser::add_guild_point_item() {}  // TODO(G2)
void CUser::add_guild_pvp_result(int) {}  // TODO(G2)
void CUser::add_pvp_play_info(unsigned int, unsigned int) {}  // TODO(G2)
void CUser::add_pvp_result(bool, unsigned int*) {}  // TODO(G2)
unsigned int CUser::find_pvp_masterid_walkingout_me(unsigned int) { return 0; }
void CUser::gainExpAsUpperMember(int) {}  // TODO(G2)
void CUser::gainGuildSkillExp(int) {}  // TODO(G2)
void CUser::gainPowerWarRewardExp(int) {}  // TODO(G2)
void CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool) {}  // TODO(G2)
bool CUser::has_within_Mission() const { return false; }  // TODO(G2)
void CUser::insert_pvp_masterid_walkingout_me(unsigned int) {}  // TODO(G2)
bool CUser::isCompetitionMercenary() const { return false; }  // TODO(G2)
bool CUser::isGMUser() { return false; }  // TODO(G2)
int CUser::CheckMoveTown(int) { return 0; }  // TODO(G2)
unsigned int CUser::get_posX() { return 0; }  // TODO(G2)
unsigned int CUser::get_posY() { return 0; }  // TODO(G2)
char CUser::get_direction() { return 0; }  // TODO(G2)
void CUser::saveTaxMoneyForUpperMember(int) {}  // TODO(G2)
void CUser::sendBlueMarbleEnterCount() {}  // TODO(G2)
void CUser::send_MissionList() {}  // TODO(G2)
void CUser::update_old_pvp_point() {}  // TODO(G2)
void CUser::update_pvp_point(int) {}  // TODO(G2)
void CUser::update_pvp_rank(const PvpResultType&) {}  // TODO(G2)
void CUser::ResetDailyCharacExpandDataMidnight() {}  // TODO(G2)
void CUser::resetDailyData() {}  // TODO(G2)
void CUser::RecoverCoin(unsigned int) {}  // TODO(G2)
void CUser::SendOpenflag() {}  // TODO(G2)
void* CUser::GetPVPRoom() { return 0; }  // TODO(G3)
int CUser::CheckMoney(int) { return 0; }  // TODO(G4)
int CUser::getDungeonIdxAfterClear() { return 0; }  // TODO(G4)
void* CUser::GetSecretShopData() { return 0; }  // TODO(G4)
void CUser::RewardItem2DeleteInvalidItem(
    const std::string&, const std::vector<std::pair<int, int> >&)
{
}  // TODO(G3)
int CUser::get_charac_no(int) const { return 0; }  // TODO(G3)
void CUser::RecoverFatigue(int) {}  // TODO(G2)
void CUser::ResetDailyCharacExpandData() {}  // TODO(G2)
void CUser::SendConditionEventInfo() {}  // TODO(G2)
void CUser::SendProperDungeonClearCount() {}  // TODO(G2)
void CUser::resetNPCRelationShipDailyData() {}  // TODO(G2)
void CUser::sendNPCRelationShipFavor() {}  // TODO(G2)
void CUser::ResetCurCharacUsedGiftFatigueQuantity() {}  // TODO(G2)
class cUserHistoryLog
{
public:
    void AvatarItemAdd(int itemIdx, int avatarUid, const char* agency,
                       eAvatarItemAddReason reason);
    void ItemAdd(INVEN_TYPE invenType, int reason1, int reason2,
                 const Inven_Item& item, eItemAddReason reason);
    void ItemDel(INVEN_TYPE invenType, int count, int param2,
                 const Inven_Item& item, eItemDelReason reason);
    void MoneyAdd(int money, int add, eMoneyAddReason reason);
    void MoneySub(int money, int sub, eMoneySubReason reason);
    void CoinSub(int coin, int sub, eCoinSubReason reason);
    void EventCoinSub(int coin, int sub, eCoinSubReason reason);
    void PayCoinSub(int coin, int sub, eCoinSubReason reason);
    void CreatureItemAdd(INVEN_TYPE invenType, int itemIdx, int count,
                         int addInfo, int type, eItemAddReason reason);
    void InitSkill(int treeKind, int level, int sp, int sfp,
                   eSkillInitReason reason);
    void SkillAdd(int job, int treeKind, int skillIdx, int count,
                  eSkillAddReason reason);
    void SkillDel(int job, int treeKind, int skillIdx, int count,
                  eSkillDelReason reason);
    void SPAdd(int treeKind, int remainSP, int sp, eSPAddReason reason);
    void SPSub(int treeKind, int remainSP, int sp, eSPSubReason reason);
    void SFPAdd(int treeKind, int remainSFP, int sfp, eSPAddReason reason);
    void FPAdd(int a, int b, int c, eFPAddReason reason);
    void FPSub(int a, int b, int c, eFPSubReason reason);
    void pvpMissionAdd(int a, int b, int c, int d);
    void pvpMissionDel(int a, int b);
    void TradeEnd(eTradeEndReason reason, int a, int b, int c, int d);
    void TradeItemAddFail(int a, int b);
    void AchievementComplete(int idx);
    void ItemDelCargo(int a, int b, int c, eItemDelReason reason);
    void EnterDungeon(const char* dungeon, int a);
    void LeaveDungeon(const char* dungeon, int a);
    void SendMail(MSG_MAILBOX_SEND* mail, unsigned int a);
    void MoveArea(int a, int b, int c, int d, int e);
    void SetTrader(const char* accName, const char* characName);
    void TradeBegin();
    void pvpMissionClearReward(int expPoint, int exp, int missionKind,
                               int missionIndex);
};
void cUserHistoryLog::AvatarItemAdd(int, int, const char*, eAvatarItemAddReason) {}
void cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, const Inven_Item&,
                              eItemAddReason)
{
}
void cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, const Inven_Item&,
                              eItemDelReason)
{
}
void cUserHistoryLog::MoneyAdd(int, int, eMoneyAddReason) {}
void cUserHistoryLog::MoneySub(int, int, eMoneySubReason) {}
void cUserHistoryLog::CoinSub(int, int, eCoinSubReason) {}
void cUserHistoryLog::EventCoinSub(int, int, eCoinSubReason) {}
void cUserHistoryLog::PayCoinSub(int, int, eCoinSubReason) {}
void cUserHistoryLog::CreatureItemAdd(INVEN_TYPE, int, int, int, int,
                                      eItemAddReason)
{
}
void cUserHistoryLog::InitSkill(int, int, int, int, eSkillInitReason) {}
void cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason) {}
void cUserHistoryLog::SkillDel(int, int, int, int, eSkillDelReason) {}
void cUserHistoryLog::SPAdd(int, int, int, eSPAddReason) {}
void cUserHistoryLog::SPSub(int, int, int, eSPSubReason) {}
void cUserHistoryLog::SFPAdd(int, int, int, eSPAddReason) {}
void cUserHistoryLog::FPAdd(int, int, int, eFPAddReason) {}
void cUserHistoryLog::FPSub(int, int, int, eFPSubReason) {}
void cUserHistoryLog::pvpMissionAdd(int, int, int, int) {}  // TODO(G3)
void cUserHistoryLog::pvpMissionDel(int, int) {}  // TODO(G3)
void cUserHistoryLog::TradeEnd(eTradeEndReason, int, int, int, int) {}  // TODO(G4)
void cUserHistoryLog::TradeItemAddFail(int, int) {}  // TODO(G4)
void cUserHistoryLog::AchievementComplete(int) {}  // TODO(G4)
void cUserHistoryLog::ItemDelCargo(int, int, int, eItemDelReason) {}  // TODO(G4)
void SendChangeTradeState(PacketGuard&, CUser*, CUser*, ENUM_TRADESTATE) {}
int CSecu_ProtectionField::GetOppositeErr(int) { return 0; }  // TODO(G4)
void cUserHistoryLog::EnterDungeon(const char*, int) {}  // TODO(G2)
void cUserHistoryLog::LeaveDungeon(const char*, int) {}  // TODO(G2)
void cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int) {}  // TODO(G2)
void cUserHistoryLog::MoveArea(int, int, int, int, int) {}  // TODO(G2)
void cUserHistoryLog::SetTrader(const char*, const char*) {}  // TODO(G2)
void cUserHistoryLog::TradeBegin() {}  // TODO(G2)

// ---- CInventory 未实现方法（依赖后续批次）----
class CInventory
{
public:
    void _SaveAvatarItem(int avatarUid, int itemIdx, bool b, char c,
                         const stAvatarEmblemInfo_t& emblem, const char* agency,
                         unsigned long d, const stAvatarExpansionInfo_t& exp);
    int move_item(int a, int b, int c, int d);
    void MakeEquipList(void* out, bool flag, ENUM_USERINFO userInfo,
                       ENUM_EQUIPSLOT slot) const;
    void delete_item(INVEN_TYPE type, int slot, int count,
                     eItemDelReason reason, bool flag);
    int insert_event_items(const std::vector<std::pair<int, int> >& items,
                           std::vector<int>& outSlots, eMoneyAddReason moneyReason,
                           eItemAddReason itemReason, bool bLog, const char* a,
                           const char* b);
};
void CInventory::_SaveAvatarItem(int, int, bool, char,
                                 const stAvatarEmblemInfo_t&, const char*,
                                 unsigned long, const stAvatarExpansionInfo_t&)
{
}  // TODO(G1)
int CInventory::move_item(int, int, int, int) { return 0; }  // TODO(G1)
void CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const
{
}  // TODO(G1)
void CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
{
}  // TODO(G2)
int CInventory::insert_event_items(const std::vector<std::pair<int, int> >& items,
                                   std::vector<int>& outSlots,
                                   eMoneyAddReason, eItemAddReason, bool,
                                   const char*, const char*)
{
    outSlots.clear();
    return 0;  // TODO(G2)
}

namespace item_lock
{
class CItemLock
{
public:
    void* GetItemLockRefVec();
    void SendItemLockList(CUser* user);
    bool CheckItemLock(unsigned char b) const;
    void MakeItemLockPacket(PacketGuard& packet, unsigned char b) const;
};
void* CItemLock::GetItemLockRefVec() { return 0; }  // TODO(G1)
void CItemLock::SendItemLockList(CUser*) {}  // TODO(G2)
bool CItemLock::CheckItemLock(unsigned char) const { return false; }  // TODO(G4)
void CItemLock::MakeItemLockPacket(PacketGuard&, unsigned char) const {}  // TODO(G4)
}
namespace WongWork
{
class CItemUpgrade
{
public:
    void make3rdChroniclePacket(CUser* user, const Inven_Item& item,
                                PacketGuard* packet);
};
void CItemUpgrade::make3rdChroniclePacket(CUser*, const Inven_Item&,
                                          PacketGuard*)
{
}  // TODO(G4)
}
class CCharacterView
{
public:
    void enableSaveCharacView();
    bool isSaveCharacView();
};
void CCharacterView::enableSaveCharacView() {}  // TODO(G1)
bool CCharacterView::isSaveCharacView() { return false; }  // TODO(G2)
bool CheckEquipable(const Inven_Item& a, const Inven_Item& b) { return false; }
int IsEquipable(CUser* user, const CItem* item, int slot) { return 0; }
bool CItem::IsEnableWorld(ENUM_WORLD_TYPE type) const { return false; }

// ---- 自由函数 / 全局数据 ----
int GetInvenSlot(Inven_Item* item, CInventory* inven, int slot, int type)
{
    return 0;  // TODO(G1)
}
int IsCreatureItemType(int itemType) { return 0; }  // TODO(G1)
bool isEquipableItemType(int itemType) { return false; }  // TODO(G1)
bool checkStackableLimit(unsigned long itemIdx, int count) { return false; }
int my_compare_unsigned_short(const void* a, const void* b) { return 0; }
int getItemChecksum(int slot, int itemIdx, int a, int b, int c) { return 0; }
void finishItemChecksum(int* sum, int money, int coin, int a, int b) {}
void write_log_gain_money(int reason, int amount, unsigned int user) {}
void write_log_use_money(int reason, int amount, unsigned int user) {}
bool isGainedGoldFromDungeonReason(eMoneyAddReason reason) { return false; }
int CheckDailyScheduleTime(int a, long b, long c) { return 0; }
int _CompareSlot(const void* a, const void* b) { return 0; }
int _S_CHARAC_JOB_MASTARY[0x80] = {0};
namespace OS_API
{
int GetDateTimeTick() { return 0; }
}
namespace charac_expand
{
class CData
{
public:
    virtual void ResetDailyMidnight() {}
    virtual bool loadData(CUser* pUser, char* pData) = 0;
    virtual void getData(char* pData) const {}
    virtual void ResetDaily() {}
    virtual ~CData();
    virtual bool _saveData(CUser* pUser) = 0;
    virtual void _reset() = 0;

    void alter();
};
void CData::alter() {}  // TODO(G1)
CData::~CData() {}  // TODO(G1)
}

class Gm_List
{
public:
    static void SendGMList_To_UpperServer(int);
};
void Gm_List::SendGMList_To_UpperServer(int) {}

class CEventManager
{
public:
    static int GetRepeatEvent(int);
    void dailyresetData();
};
class Word_Param
{
public:
    char m_pad[4];
};
class CDelivery
{
public:
    char m_pad[4];
};
class DeliveryMsg
{
public:
    char m_pad[4];
};
class CEventBase
{
public:
    virtual ~CEventBase();
    virtual void StartEvent() = 0;
    virtual void EndEvent() = 0;
    virtual void StartEvent(Word_Param param);
    virtual void StartAction();
    virtual void AppendInfo(PacketGuard& packet);
    virtual int GetAddInfo();
    virtual void changeCharacName(CUser* user, int a, char* name, int b);
    virtual void dailyresetData();
    virtual void deliveryStart(CDelivery* delivery);
    virtual void deliveryEnd(CDelivery* delivery);
    virtual void delivery(DeliveryMsg& msg);
    virtual bool IsEventing(CUser* user) const;
    void SetEventFlag(bool flag);
};
CEventBase::~CEventBase() {}  // TODO(G3 事件域)
void CEventBase::StartEvent(Word_Param) {}
void CEventBase::StartAction() {}
void CEventBase::AppendInfo(PacketGuard&) {}
int CEventBase::GetAddInfo() { return 0; }
void CEventBase::changeCharacName(CUser*, int, char*, int) {}
void CEventBase::dailyresetData() {}
void CEventBase::deliveryStart(CDelivery*) {}
void CEventBase::deliveryEnd(CDelivery*) {}
void CEventBase::delivery(DeliveryMsg&) {}
bool CEventBase::IsEventing(CUser*) const { return false; }
void CEventBase::SetEventFlag(bool) {}
int CEventManager::GetRepeatEvent(int) { return 0; }
void CEventManager::dailyresetData() {}  // TODO(G2)
// ORIG 符号为截断/错拼 mangled 名（GameWorld.cpp asm 直调），无法用 C++ 声明表达：
//   _ZN13CEventManager13GetRepeatEventEi（GetRepeatEven 13 字符）
//   _ZN13CEventManager14TriggerEventEndEi / _ZN13CEventManager16TriggerEventStartEii
extern "C" int sub_CEventManager_GetRepeatEvent_typo(void* self, int idx)
    asm("_ZN13CEventManager13GetRepeatEventEi");
extern "C" void sub_CEventManager_TriggerEventEnd_typo(void* self, int idx)
    asm("_ZN13CEventManager14TriggerEventEndEi");
extern "C" void sub_CEventManager_TriggerEventStart_typo(void* self, int idx,
                                                        int param)
    asm("_ZN13CEventManager16TriggerEventStartEii");
int sub_CEventManager_GetRepeatEvent_typo(void*, int) { return 0; }  // TODO(G2)
void sub_CEventManager_TriggerEventEnd_typo(void*, int) {}  // TODO(G2)
void sub_CEventManager_TriggerEventStart_typo(void*, int, int) {}  // TODO(G2)
namespace APSystem
{
struct _SIG_LOAD_ACTION_POINT
{
    char m_pad[4];
};
class CActionPointManager
{
public:
    int GetActionPoint() const;
    void GM_Set(CUser& user, unsigned int point);
};
int CActionPointManager::GetActionPoint() const { return 0; }  // TODO(G2)
void CActionPointManager::GM_Set(CUser&, unsigned int) {}  // TODO(G2)
class _MSG_ACTION_POINT_ACTION_CLEAR
{
public:
    _MSG_ACTION_POINT_ACTION_CLEAR();
};
_MSG_ACTION_POINT_ACTION_CLEAR::_MSG_ACTION_POINT_ACTION_CLEAR() {}
class DB_UpdateActionPoint
{
public:
    void makeRequest(int a, const _SIG_LOAD_ACTION_POINT& sig, bool flag);
};
void DB_UpdateActionPoint::makeRequest(int, const _SIG_LOAD_ACTION_POINT&, bool)
{
}  // TODO(G2)
}
namespace WongWork
{
class CMCAPManager
{
public:
    void reset();
};
void CMCAPManager::reset() {}  // TODO(G2)
}
namespace Sanicova
{
class CPad
{
public:
    bool isActivate() const;
    int getFailCnt();
    void setFailCnt(int cnt);
};
bool CPad::isActivate() const { return false; }  // TODO(G2)
int CPad::getFailCnt() { return 0; }  // TODO(G2)
void CPad::setFailCnt(int) {}  // TODO(G2)
}
class DB_PassPadUpdateFailCnt
{
public:
    void makeRequest(unsigned int a, unsigned int b, char* c);
};
void DB_PassPadUpdateFailCnt::makeRequest(unsigned int, unsigned int,
                                          char*)
{
}  // TODO(G2)
class CFatigueBatteryHandle
{
public:
    void ChargingFatigueBattery(CUser* user, int v);
    void ActiveFatigueBattery(CUser* user);
};
void CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int) {}  // TODO(G2)
void CFatigueBatteryHandle::ActiveFatigueBattery(CUser*) {}  // TODO(G2)
namespace EventClassify
{
class CEventScriptMng
{
public:
    void send_event_init_data(CUser* user, bool flag);
};
void CEventScriptMng::send_event_init_data(CUser*, bool) {}  // ORIG T 0x810c40e
}
namespace ARAD
{
class Arad_DataManager
{
public:
    void* findGameScript(const std::string& name);
};
void* Arad_DataManager::findGameScript(const std::string&) { return 0; }
template <class T>
class Singleton
{
public:
    static void* Get();
};
template <class T>
void* Singleton<T>::Get()
{
    return 0;
}
template class Singleton<Arad_DataManager>;
}
class Arad_EventPeriodDataManager
{
public:
    bool isApplied(int a, int b) const;
};
bool Arad_EventPeriodDataManager::isApplied(int, int) const { return false; }
class AradServerStateMessage
{
public:
    AradServerStateMessage();
};
AradServerStateMessage::AradServerStateMessage() {}
namespace ARAD
{
void notifyOpenMessageDialog(CUser* user, int a, int b,
                             AradServerStateMessage& msg)
{
}  // TODO(G2)
}
class InterSelectPcroomDailyReward
{
public:
    void SendPacket(CUser* user);
};
void InterSelectPcroomDailyReward::SendPacket(CUser*) {}  // TODO(G2)

class STGuildProxy
{
public:
    STGuildProxy();
};

// ---- MySQL.cpp 引用的空追踪器 ----
class cMyTraceNoop
{
public:
    cMyTraceNoop();
    void operator()(const char*, ...);
};
cMyTraceNoop::cMyTraceNoop() {}
void cMyTraceNoop::operator()(const char*, ...) {}

// ---- TimerQueue 依赖（TimerEntry 定义属 TimerSig/TimerDispatcher 组，先 stub）----
#include "TimerQueue.h"
TimerEntry::TimerEntry() throw() {}
bool TimerEntry::operator<(const TimerEntry&) const throw() { return false; }
long long SECOND_TO_MILISECOND(int sec) { return (long long)sec * 1000; }

// ---- CEnvironment map 比较器（less_TCHAR，算法正确即可）----
bool less_TCHAR::operator()(const char* const& x, const char* const& y) const
{
    return strcmp(x, y) < 0;
}

// ---- SpinLock（ORIG 0x8ad3522，xchg 自旋锁；yield 为空函数）----
static void YieldProcessor() {}

Uncopyable::Uncopyable() {}
Uncopyable::~Uncopyable() {}

SpinLock::SpinLock() : Uncopyable() { m_lock = 0; }
SpinLock::~SpinLock() {}
void SpinLock::enter()
{
    while (__sync_lock_test_and_set(&m_lock, 1) == 1)
        YieldProcessor();
}
void SpinLock::leave()
{
    __sync_lock_test_and_set(&m_lock, 0);
}
bool SpinLock::isTaken() { return m_lock == 1; }
bool SpinLock::tryEnter() { return __sync_lock_test_and_set(&m_lock, 1) == 0; }

// ---- trim（CEnvironment::parse 用，工具函数，算法正确即可）----
void trim(char* s)
{
    if (!s) return;
    char* end = s + strlen(s);
    while (end > s && (end[-1] == ' ' || end[-1] == '\t' || end[-1] == '\r' || end[-1] == '\n'))
        *--end = 0;
    char* p = s;
    while (*p == ' ' || *p == '\t' || *p == '\r' || *p == '\n') ++p;
    if (p != s) memmove(s, p, strlen(p) + 1);
}

// cMyTrace（GameBase.h 声明，属 G5 日志族）
cMyTrace::cMyTrace(const char*, int, int) {}
cMyTrace::cMyTrace(const char*, int, int, bool bFieldC, bool bFieldD)
{
    m_field_c = (char)bFieldC;
    m_field_d = (char)bFieldD;
}
void cMyTrace::operator()(const char*, ...) {}

// ---- MySQL.cpp 依赖的 CDnFTimer 工厂（G7 计时族占位，算法正确即可）----
void CDnFTimer::SetLastTime() {}  // TODO(后续批次)
double CDnFTimer::GetTimeInterval() { return 0.0; }  // TODO(后续批次)
CDnFTimer* CDnFTimerFactory::CreateDnFTimer() { return new CDnFTimer; }  // TODO(后续批次)
void CDnFTimerFactory::DestroyDnFTimer(CDnFTimer* timer) { delete timer; }  // TODO(后续批次)

// ---- CNetwork 依赖：PacketHeader 构造 + 分发桩 ----
PacketHeader::PacketHeader(ushort packetId, ushort packetSize)
{
    this->packetId = packetId;
    this->packetSize = packetSize;
    reversed1 = 0;
    m_connNo = 0;
}


// ============================================================================
// CDataManager.h 依赖类 stub（G2 世界 / G6 数据批次占位；算法正确即可）
// ============================================================================

// ---- CItem 弱访问器 / 物品辅助类（I1 集成依赖；ORIG 均为真实符号，后续批次细化）----
RandomItemTable::RandomItemTable() {}  // ORIG W 0x8515468
RandomItemTable::~RandomItemTable() {}  // ORIG W 0x8514b46
void RandomItemTable::Set(std::vector<int>* source) {}  // ORIG T 0x89bba40
struct itemGloballyUniqueIdentifier_t
{
    void reset();
    char m_pad[0x11];
};
void itemGloballyUniqueIdentifier_t::reset() {}  // ORIG W 0x85139e8
class CItemGloballyUniqueIdentifierGenerator
{
public:
    void generate(itemGloballyUniqueIdentifier_t* id, int field);
};
void CItemGloballyUniqueIdentifierGenerator::generate(itemGloballyUniqueIdentifier_t*, int)
{
}  // ORIG T 0x889246c
class CodePage
{
public:
    static bool script2Database(const char* src, char* dst);
};
bool CodePage::script2Database(const char*, char*) { return false; }
namespace user_creature
{
class CCreatureScriptMgr
{
public:
    void RegisterCreatureIdAndItemId(int creatureId, int itemId);
};
CCreatureScriptMgr* GetInstanceCreatureScriptMgr() { return 0; }  // ORIG T 0x8336bd0
void CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int) {}  // ORIG T 0x833d54a
}
void CDataManager::set_AuctionRegFreeCeraItem(unsigned int idx) {}  // ORIG W 0x8513fbc
MultiBoxLotteryInfo::LotteryUnit::LotteryUnit() {}  // TODO(G1 物品批次)
MultiBoxLotteryInfo::LotteryUnit::LotteryUnit(const LotteryUnit& other) {}  // TODO(G1 物品批次)
MultiBoxLotteryInfo::LotteryUnit::~LotteryUnit() {}  // TODO(G1 物品批次)

// ---- CStackableItem 依赖桩（CStackableItem.cpp 已实现主逻辑；辅助类后续批次细化）----
int CStackableItem::getStackableLimit() const { return 0; }  // TODO(G1 物品批次)
int GetEquipmentTypeStringToEnum(std::string& type) { return 0; }  // TODO(G1 物品批次)
void createRecipeInfo(RecipeInfo* info, std::vector<int>* source,
                      std::vector<std::pair<int, int> >* extra) {}  // TODO(G1 物品批次)
void createLotteryInfo(LotteryInfo* info, std::vector<int>* source) {}  // TODO(G1 物品批次)
void createStackableLotteryInfo(LotteryInfo* info, std::vector<int>* source) {}  // TODO(G1 物品批次)
void createStackableMultiBoxLotteryInfo(
    MultiBoxLotteryInfo::MultiBoxLotteryInfoBody* info,
    std::vector<std::vector<int> >* a, std::vector<int>* b,
    std::vector<int>* c) {}  // TODO(G1 物品批次)
void createGlobalEffectInfo(std::vector<char>& out, std::vector<int>* source) {}  // TODO(G1 物品批次)
stStackableBooster_t& stStackableBooster_t::operator=(const stStackableBooster_t& other)
{
    return *this;  // TODO(G1 物品批次)
}
BoosterSelectInfo& BoosterSelectInfo::operator=(const BoosterSelectInfo& other)
{
    return *this;  // TODO(G1 物品批次)
}
MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad() {}  // TODO(G1 物品批次)
MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(unsigned int, unsigned int,
                                                            unsigned int)
{
}  // TODO(G1 物品批次)
MultiBoxLotteryInfo::LotteryDefaultArad::~LotteryDefaultArad() {}  // TODO(G1 物品批次)
int* CChattingEmoticonList::find_emoticon(int idx) { return 0; }  // TODO(G1 物品批次)
void CDataManager::set_lottery_use_cost(unsigned int cost) {}  // ORIG 真实符号，后续批次细化

// ---- G1 SkillSlot 依赖桩（真实符号，后续批次细化）----
class PacketGuard : public InterfacePacketBuf
{
public:
    PacketGuard();
    ~PacketGuard();
};
PacketGuard::PacketGuard() {}
PacketGuard::~PacketGuard() {}
struct _Mastered_skill
{
    unsigned char m_index;
    char m_level;
};
void addSkillOnCreateCharacter(_Mastered_skill* skill, int job) {}  // ORIG T 0x8604fe2
int getSkillChecksum(int slot, int skillIdx, int level) { return 0; }  // ORIG T 0x88923f1
int finishSkillChecksum(int* sum, int key) { return 0; }  // ORIG T 0x8892445
int getSkillSpendSPOnSteal(int sp, int penalty) { return 0; }  // ORIG T 0x8a9afa2
class CCharacter
{
public:
    char get_give_skill(int firstGrow, int secondGrow,
                        std::vector<std::pair<int, int> >& out,
                        unsigned int flag) const;
};
char CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int> >&,
                                unsigned int) const
{
    return 1;  // ORIG T 0x8348798
}

void* CDataManager::GetExpertJobScript(int job) { return 0; }  // ORIG W 0x822b5f2
int CEquipItem::get_sub_type() const { return 0; }  // ORIG W 0x833eecc
void CEquipItem::getAvatarSocket(int slot, stAvatarEmblemInfo_t& emblem) const
{
}  // ORIG W 0x8150f36

enum ENUM_SKILL_TREE_KIND
{
    SKILL_TREE_NONE = -1,
    SKILL_TREE_1 = 0,
    SKILL_TREE_2 = 1,
    SKILL_TREE_SFP_1 = 2,
    SKILL_TREE_SFP_2 = 3
};
namespace np_server_xml
{
CServerXml g_ServerString_;  // 定义（ORIG 全局），方法由 ServerXml.cpp 提供
}

// ---- md5（用户规则：算法正确即可，不逐指令对齐；ORIG _Z10md5_*）----
struct md5_context
{
    char m_pad[224];
};
struct md5_ctx
{
    unsigned int total[2];
    unsigned int state[4];
    unsigned char buffer[64];
};
static unsigned int md5_rotl(unsigned int x, int c)
{
    return (x << c) | (x >> (32 - c));
}
void md5_starts(md5_context* ctx)
{
    md5_ctx* c = (md5_ctx*)ctx;
    c->total[0] = 0;
    c->total[1] = 0;
    c->state[0] = 0x67452301;
    c->state[1] = 0xefcdab89;
    c->state[2] = 0x98badcfe;
    c->state[3] = 0x10325476;
}
void md5_update(md5_context* ctx, unsigned char* data, int len)
{
    md5_ctx* c = (md5_ctx*)ctx;
    unsigned int used = (c->total[0] >> 3) & 0x3f;
    c->total[0] += (unsigned int)len << 3;
    if (c->total[0] < ((unsigned int)len << 3))
    {
        ++c->total[1];
    }
    c->total[1] += (unsigned int)len >> 29;
    if (used != 0)
    {
        unsigned int fill = 64 - used;
        if (len < (int)fill)
        {
            memcpy(c->buffer + used, data, len);
            return;
        }
        memcpy(c->buffer + used, data, fill);
        data += fill;
        len -= (int)fill;
        used = 0;
        md5_ctx* p = (md5_ctx*)ctx;
        unsigned int* x = (unsigned int*)p->buffer;
        unsigned int a = p->state[0], b = p->state[1];
        unsigned int cc = p->state[2], d = p->state[3];
#define MD5_F(x, y, z) (((x) & (y)) | (~(x) & (z)))
#define MD5_G(x, y, z) (((x) & (z)) | ((y) & ~(z)))
#define MD5_H(x, y, z) ((x) ^ (y) ^ (z))
#define MD5_I(x, y, z) ((y) ^ ((x) | ~(z)))
#define MD5_STEP(f, a, b, c, d, x, t, s) \
    (a) += f((b), (c), (d)) + (x) + (t); \
    (a) = md5_rotl((a), (s));             \
    (a) += (b);
        MD5_STEP(MD5_F, a, b, cc, d, x[0], 0xd76aa478, 7);
        MD5_STEP(MD5_F, d, a, b, cc, x[1], 0xe8c7b756, 12);
        MD5_STEP(MD5_F, cc, d, a, b, x[2], 0x242070db, 17);
        MD5_STEP(MD5_F, b, cc, d, a, x[3], 0xc1bdceee, 22);
        MD5_STEP(MD5_F, a, b, cc, d, x[4], 0xf57c0faf, 7);
        MD5_STEP(MD5_F, d, a, b, cc, x[5], 0x4787c62a, 12);
        MD5_STEP(MD5_F, cc, d, a, b, x[6], 0xa8304613, 17);
        MD5_STEP(MD5_F, b, cc, d, a, x[7], 0xfd469501, 22);
        MD5_STEP(MD5_F, a, b, cc, d, x[8], 0x698098d8, 7);
        MD5_STEP(MD5_F, d, a, b, cc, x[9], 0x8b44f7af, 12);
        MD5_STEP(MD5_F, cc, d, a, b, x[10], 0xffff5bb1, 17);
        MD5_STEP(MD5_F, b, cc, d, a, x[11], 0x895cd7be, 22);
        MD5_STEP(MD5_F, a, b, cc, d, x[12], 0x6b901122, 7);
        MD5_STEP(MD5_F, d, a, b, cc, x[13], 0xfd987193, 12);
        MD5_STEP(MD5_F, cc, d, a, b, x[14], 0xa679438e, 17);
        MD5_STEP(MD5_F, b, cc, d, a, x[15], 0x49b40821, 22);
        MD5_STEP(MD5_G, a, b, cc, d, x[1], 0xf61e2562, 5);
        MD5_STEP(MD5_G, d, a, b, cc, x[6], 0xc040b340, 9);
        MD5_STEP(MD5_G, cc, d, a, b, x[11], 0x265e5a51, 14);
        MD5_STEP(MD5_G, b, cc, d, a, x[0], 0xe9b6c7aa, 20);
        MD5_STEP(MD5_G, a, b, cc, d, x[5], 0xd62f105d, 5);
        MD5_STEP(MD5_G, d, a, b, cc, x[10], 0x02441453, 9);
        MD5_STEP(MD5_G, cc, d, a, b, x[15], 0xd8a1e681, 14);
        MD5_STEP(MD5_G, b, cc, d, a, x[4], 0xe7d3fbc8, 20);
        MD5_STEP(MD5_G, a, b, cc, d, x[9], 0x21e1cde6, 5);
        MD5_STEP(MD5_G, d, a, b, cc, x[14], 0xc33707d6, 9);
        MD5_STEP(MD5_G, cc, d, a, b, x[3], 0xf4d50d87, 14);
        MD5_STEP(MD5_G, b, cc, d, a, x[8], 0x455a14ed, 20);
        MD5_STEP(MD5_G, a, b, cc, d, x[13], 0xa9e3e905, 5);
        MD5_STEP(MD5_G, d, a, b, cc, x[2], 0xfcefa3f8, 9);
        MD5_STEP(MD5_G, cc, d, a, b, x[7], 0x676f02d9, 14);
        MD5_STEP(MD5_G, b, cc, d, a, x[12], 0x8d2a4c8a, 20);
        MD5_STEP(MD5_H, a, b, cc, d, x[5], 0xfffa3942, 4);
        MD5_STEP(MD5_H, d, a, b, cc, x[8], 0x8771f681, 11);
        MD5_STEP(MD5_H, cc, d, a, b, x[11], 0x6d9d6122, 16);
        MD5_STEP(MD5_H, b, cc, d, a, x[14], 0xfde5380c, 23);
        MD5_STEP(MD5_H, a, b, cc, d, x[1], 0xa4beea44, 4);
        MD5_STEP(MD5_H, d, a, b, cc, x[4], 0x4bdecfa9, 11);
        MD5_STEP(MD5_H, cc, d, a, b, x[7], 0xf6bb4b60, 16);
        MD5_STEP(MD5_H, b, cc, d, a, x[10], 0xbebfbc70, 23);
        MD5_STEP(MD5_H, a, b, cc, d, x[13], 0x289b7ec6, 4);
        MD5_STEP(MD5_H, d, a, b, cc, x[0], 0xeaa127fa, 11);
        MD5_STEP(MD5_H, cc, d, a, b, x[3], 0xd4ef3085, 16);
        MD5_STEP(MD5_H, b, cc, d, a, x[6], 0x04881d05, 23);
        MD5_STEP(MD5_H, a, b, cc, d, x[9], 0xd9d4d039, 4);
        MD5_STEP(MD5_H, d, a, b, cc, x[12], 0xe6db99e5, 11);
        MD5_STEP(MD5_H, cc, d, a, b, x[15], 0x1fa27cf8, 16);
        MD5_STEP(MD5_H, b, cc, d, a, x[2], 0xc4ac5665, 23);
        MD5_STEP(MD5_I, a, b, cc, d, x[0], 0xf4292244, 6);
        MD5_STEP(MD5_I, d, a, b, cc, x[7], 0x432aff97, 10);
        MD5_STEP(MD5_I, cc, d, a, b, x[14], 0xab9423a7, 15);
        MD5_STEP(MD5_I, b, cc, d, a, x[5], 0xfc93a039, 21);
        MD5_STEP(MD5_I, a, b, cc, d, x[12], 0x655b59c3, 6);
        MD5_STEP(MD5_I, d, a, b, cc, x[3], 0x8f0ccc92, 10);
        MD5_STEP(MD5_I, cc, d, a, b, x[10], 0xffeff47d, 15);
        MD5_STEP(MD5_I, b, cc, d, a, x[1], 0x85845dd1, 21);
        MD5_STEP(MD5_I, a, b, cc, d, x[8], 0x6fa87e4f, 6);
        MD5_STEP(MD5_I, d, a, b, cc, x[15], 0xfe2ce6e0, 10);
        MD5_STEP(MD5_I, cc, d, a, b, x[6], 0xa3014314, 15);
        MD5_STEP(MD5_I, b, cc, d, a, x[13], 0x4e0811a1, 21);
        MD5_STEP(MD5_I, a, b, cc, d, x[4], 0xf7537e82, 6);
        MD5_STEP(MD5_I, d, a, b, cc, x[11], 0xbd3af235, 10);
        MD5_STEP(MD5_I, cc, d, a, b, x[2], 0x2ad7d2bb, 15);
        MD5_STEP(MD5_I, b, cc, d, a, x[9], 0xeb86d391, 21);
#undef MD5_F
#undef MD5_G
#undef MD5_H
#undef MD5_I
#undef MD5_STEP
        p->state[0] += a;
        p->state[1] += b;
        p->state[2] += cc;
        p->state[3] += d;
    }
    while (len >= 64)
    {
        memcpy(c->buffer, data, 64);
        md5_ctx* p = (md5_ctx*)ctx;
        unsigned int* x = (unsigned int*)p->buffer;
        unsigned int a = p->state[0], b = p->state[1];
        unsigned int cc = p->state[2], d = p->state[3];
#define MD5_F(x, y, z) (((x) & (y)) | (~(x) & (z)))
#define MD5_G(x, y, z) (((x) & (z)) | ((y) & ~(z)))
#define MD5_H(x, y, z) ((x) ^ (y) ^ (z))
#define MD5_I(x, y, z) ((y) ^ ((x) | ~(z)))
#define MD5_STEP(f, a, b, c, d, x, t, s) \
    (a) += f((b), (c), (d)) + (x) + (t); \
    (a) = md5_rotl((a), (s));             \
    (a) += (b);
        MD5_STEP(MD5_F, a, b, cc, d, x[0], 0xd76aa478, 7);
        MD5_STEP(MD5_F, d, a, b, cc, x[1], 0xe8c7b756, 12);
        MD5_STEP(MD5_F, cc, d, a, b, x[2], 0x242070db, 17);
        MD5_STEP(MD5_F, b, cc, d, a, x[3], 0xc1bdceee, 22);
        MD5_STEP(MD5_F, a, b, cc, d, x[4], 0xf57c0faf, 7);
        MD5_STEP(MD5_F, d, a, b, cc, x[5], 0x4787c62a, 12);
        MD5_STEP(MD5_F, cc, d, a, b, x[6], 0xa8304613, 17);
        MD5_STEP(MD5_F, b, cc, d, a, x[7], 0xfd469501, 22);
        MD5_STEP(MD5_F, a, b, cc, d, x[8], 0x698098d8, 7);
        MD5_STEP(MD5_F, d, a, b, cc, x[9], 0x8b44f7af, 12);
        MD5_STEP(MD5_F, cc, d, a, b, x[10], 0xffff5bb1, 17);
        MD5_STEP(MD5_F, b, cc, d, a, x[11], 0x895cd7be, 22);
        MD5_STEP(MD5_F, a, b, cc, d, x[12], 0x6b901122, 7);
        MD5_STEP(MD5_F, d, a, b, cc, x[13], 0xfd987193, 12);
        MD5_STEP(MD5_F, cc, d, a, b, x[14], 0xa679438e, 17);
        MD5_STEP(MD5_F, b, cc, d, a, x[15], 0x49b40821, 22);
        MD5_STEP(MD5_G, a, b, cc, d, x[1], 0xf61e2562, 5);
        MD5_STEP(MD5_G, d, a, b, cc, x[6], 0xc040b340, 9);
        MD5_STEP(MD5_G, cc, d, a, b, x[11], 0x265e5a51, 14);
        MD5_STEP(MD5_G, b, cc, d, a, x[0], 0xe9b6c7aa, 20);
        MD5_STEP(MD5_G, a, b, cc, d, x[5], 0xd62f105d, 5);
        MD5_STEP(MD5_G, d, a, b, cc, x[10], 0x02441453, 9);
        MD5_STEP(MD5_G, cc, d, a, b, x[15], 0xd8a1e681, 14);
        MD5_STEP(MD5_G, b, cc, d, a, x[4], 0xe7d3fbc8, 20);
        MD5_STEP(MD5_G, a, b, cc, d, x[9], 0x21e1cde6, 5);
        MD5_STEP(MD5_G, d, a, b, cc, x[14], 0xc33707d6, 9);
        MD5_STEP(MD5_G, cc, d, a, b, x[3], 0xf4d50d87, 14);
        MD5_STEP(MD5_G, b, cc, d, a, x[8], 0x455a14ed, 20);
        MD5_STEP(MD5_G, a, b, cc, d, x[13], 0xa9e3e905, 5);
        MD5_STEP(MD5_G, d, a, b, cc, x[2], 0xfcefa3f8, 9);
        MD5_STEP(MD5_G, cc, d, a, b, x[7], 0x676f02d9, 14);
        MD5_STEP(MD5_G, b, cc, d, a, x[12], 0x8d2a4c8a, 20);
        MD5_STEP(MD5_H, a, b, cc, d, x[5], 0xfffa3942, 4);
        MD5_STEP(MD5_H, d, a, b, cc, x[8], 0x8771f681, 11);
        MD5_STEP(MD5_H, cc, d, a, b, x[11], 0x6d9d6122, 16);
        MD5_STEP(MD5_H, b, cc, d, a, x[14], 0xfde5380c, 23);
        MD5_STEP(MD5_H, a, b, cc, d, x[1], 0xa4beea44, 4);
        MD5_STEP(MD5_H, d, a, b, cc, x[4], 0x4bdecfa9, 11);
        MD5_STEP(MD5_H, cc, d, a, b, x[7], 0xf6bb4b60, 16);
        MD5_STEP(MD5_H, b, cc, d, a, x[10], 0xbebfbc70, 23);
        MD5_STEP(MD5_H, a, b, cc, d, x[13], 0x289b7ec6, 4);
        MD5_STEP(MD5_H, d, a, b, cc, x[0], 0xeaa127fa, 11);
        MD5_STEP(MD5_H, cc, d, a, b, x[3], 0xd4ef3085, 16);
        MD5_STEP(MD5_H, b, cc, d, a, x[6], 0x04881d05, 23);
        MD5_STEP(MD5_H, a, b, cc, d, x[9], 0xd9d4d039, 4);
        MD5_STEP(MD5_H, d, a, b, cc, x[12], 0xe6db99e5, 11);
        MD5_STEP(MD5_H, cc, d, a, b, x[15], 0x1fa27cf8, 16);
        MD5_STEP(MD5_H, b, cc, d, a, x[2], 0xc4ac5665, 23);
        MD5_STEP(MD5_I, a, b, cc, d, x[0], 0xf4292244, 6);
        MD5_STEP(MD5_I, d, a, b, cc, x[7], 0x432aff97, 10);
        MD5_STEP(MD5_I, cc, d, a, b, x[14], 0xab9423a7, 15);
        MD5_STEP(MD5_I, b, cc, d, a, x[5], 0xfc93a039, 21);
        MD5_STEP(MD5_I, a, b, cc, d, x[12], 0x655b59c3, 6);
        MD5_STEP(MD5_I, d, a, b, cc, x[3], 0x8f0ccc92, 10);
        MD5_STEP(MD5_I, cc, d, a, b, x[10], 0xffeff47d, 15);
        MD5_STEP(MD5_I, b, cc, d, a, x[1], 0x85845dd1, 21);
        MD5_STEP(MD5_I, a, b, cc, d, x[8], 0x6fa87e4f, 6);
        MD5_STEP(MD5_I, d, a, b, cc, x[15], 0xfe2ce6e0, 10);
        MD5_STEP(MD5_I, cc, d, a, b, x[6], 0xa3014314, 15);
        MD5_STEP(MD5_I, b, cc, d, a, x[13], 0x4e0811a1, 21);
        MD5_STEP(MD5_I, a, b, cc, d, x[4], 0xf7537e82, 6);
        MD5_STEP(MD5_I, d, a, b, cc, x[11], 0xbd3af235, 10);
        MD5_STEP(MD5_I, cc, d, a, b, x[2], 0x2ad7d2bb, 15);
        MD5_STEP(MD5_I, b, cc, d, a, x[9], 0xeb86d391, 21);
#undef MD5_F
#undef MD5_G
#undef MD5_H
#undef MD5_I
#undef MD5_STEP
        p->state[0] += a;
        p->state[1] += b;
        p->state[2] += cc;
        p->state[3] += d;
        data += 64;
        len -= 64;
    }
    memcpy(c->buffer, data, len);
}
void md5_finish(md5_context* ctx, unsigned char* out)
{
    md5_ctx* c = (md5_ctx*)ctx;
    unsigned int used = (c->total[0] >> 3) & 0x3f;
    unsigned char pad[64] = {0x80};
    unsigned char lenbytes[8];
    unsigned int i;
    for (i = 0; i < 4; ++i)
    {
        lenbytes[i] = (unsigned char)(c->total[0] >> (i * 8));
        lenbytes[4 + i] = (unsigned char)(c->total[1] >> (i * 8));
    }
    md5_update(ctx, pad, used < 56 ? 56 - used : 120 - used);
    md5_update(ctx, lenbytes, 8);
    for (i = 0; i < 4; ++i)
    {
        out[i * 4] = (unsigned char)(c->state[i]);
        out[i * 4 + 1] = (unsigned char)(c->state[i] >> 8);
        out[i * 4 + 2] = (unsigned char)(c->state[i] >> 16);
        out[i * 4 + 3] = (unsigned char)(c->state[i] >> 24);
    }
}

// ---- G1-2 CUserCharacInfo 依赖桩（真实符号，对应 TU 后续批次细化）----
namespace WongWork
{
class CDungeonClear
{
public:
    CDungeonClear();
    ~CDungeonClear();
    char m_pad[0x18];
};
CDungeonClear::CDungeonClear() {}  // TODO(G1)
CDungeonClear::~CDungeonClear() {}  // TODO(G1)
}
// CommonTime → Game/CommonTime.cpp（第一阶段正式实现，7 方法）
// CReliablePerson → Game/CReliablePerson.cpp（第一阶段正式实现）
class seriaRoom_AniDeco
{
public:
    seriaRoom_AniDeco();
    short m_field0;
    short m_field2;
};
seriaRoom_AniDeco::seriaRoom_AniDeco() {}  // TODO(G1)
class CPowerManager
{
public:
    bool IsPowerWarEventOn();
    float GetPowerWarResponPenalty(CUser* user);
    int GetPowerWarGhostTime(CUser* user, float f);
    void DecreasePowerUserCount(char side);
    void ProcessJoinPowerWar(CUser* user, char side);
    char GetWinnerSide();
};
bool CPowerManager::IsPowerWarEventOn() { return false; }  // TODO(G1)
float CPowerManager::GetPowerWarResponPenalty(CUser*) { return 0.0f; }
int CPowerManager::GetPowerWarGhostTime(CUser*, float) { return 0; }
void CPowerManager::DecreasePowerUserCount(char) {}  // TODO(G2)
void CPowerManager::ProcessJoinPowerWar(CUser*, char) {}  // TODO(G2)
char CPowerManager::GetWinnerSide() { return 0; }  // TODO(G2)
namespace expert_job
{
class CExpertJob
{
public:
    int GetType();
};
int CExpertJob::GetType() { return 0; }  // TODO(G1)
}
namespace online_preliminary
{
class COnlinePreliminaryTeam
{
public:
    int GetTeamId() const;
    const char* GetTeamName() const;
};
int COnlinePreliminaryTeam::GetTeamId() const { return 0; }  // TODO(G1)
const char* COnlinePreliminaryTeam::GetTeamName() const { return ""; }  // TODO(G1)
}
class CCargo
{
public:
    bool FindItemLock(unsigned char b, ENUM_ITEMSPACE& space, int& slot) const;
    int check_item_exist(int itemIdx) const;
    int delete_item(int idx, int count, eItemDelReason reason);
    int get_cargo_slot(int idx) const;
};
enum ENUM_TITLE_BOOK_INFO_TYPE
{
    ENUM_TITLE_BOOK_INFO_TYPE_0 = 0
};
int DEFAULT_MAX_FATIGUE = 0;  // ORIG 全局，后续批次细化
int GetTenThousandPercentage(int value, int percent) { return 0; }  // TODO(G1)
bool CStackableItem::IsExpAffect() { return false; }  // ORIG 真实符号，后续细化
bool CItem::isPackagable() const { return false; }  // TODO(G4)
void* CDataManager::GetChannelScript() const { return 0; }  // TODO(G2)
void* CDataManager::getBlueMarbleScript() { return 0; }  // TODO(G2)
int CDataManager::get_dimensionInout(int) { return 0; }  // TODO(G2)
int CDataManager::GetMaxGradePvPChannel() { return 0; }  // TODO(G2)
void* CDataManager::get_event_script_mng() { return 0; }  // ORIG W 0x8110b62

// ---- G2 CParty 依赖桩（真实符号，对应 TU 后续批次细化）----
enum ENUM_PARTY_INFO_TYPE { ENUM_PARTY_INFO_TYPE_0 = 0 };
class CParty
{
public:
    char _checkValidUser(int idx);
    bool checkValidUser(int idx);
    unsigned int GetMemberSlotNo(CUser const* user) const;
    void Reset_party_overlapped_drop_ratio();
    int leave_user(CUser* user, ENUM_PARTY_INFO_TYPE type);
    bool IsEventCharacParty();
    bool IsReturnUserParty();
    void send_invite_bluemarble(int idx);
    int get_member_count();
};
char CParty::_checkValidUser(int) { return 0; }  // TODO(G2)
bool CParty::checkValidUser(int) { return false; }  // TODO(G2)
unsigned int CParty::GetMemberSlotNo(CUser const*) const { return 0; }  // TODO(G2)
void CParty::Reset_party_overlapped_drop_ratio() {}  // TODO(G2)
int CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE) { return 0; }  // TODO(G2)
bool CParty::IsEventCharacParty() { return false; }  // TODO(G2)
bool CParty::IsReturnUserParty() { return false; }  // TODO(G2)
void CParty::send_invite_bluemarble(int) {}  // TODO(G2)
int CParty::get_member_count() { return 0; }  // TODO(G2)
class CDungeonEntranceLog
{
public:
    void DecrementDungeonEntrance(int a, bool b);
    void IncrementDungeonEntrance(int a, bool b);
};
CDungeonEntranceLog* GetInstanceDungeonEntranceLog() { static CDungeonEntranceLog s; return &s; }
void CDungeonEntranceLog::DecrementDungeonEntrance(int, bool) {}  // TODO(G2)
void CDungeonEntranceLog::IncrementDungeonEntrance(int, bool) {}  // TODO(G2)
struct map_item;
struct map_monster;
struct MapInfo;
extern "C" void sub_cElection_Ctor(void* p) asm("_ZN9cElectionIiLi4ELi4EEC1Ev");
extern "C" void sub_vec_mapinfo_Ctor(void* p) asm("_ZNSt6vectorI7MapInfoSaIS0_EEC1Ev");
extern "C" void sub_vec_mapinfo_Dtor(void* p) asm("_ZNSt6vectorI7MapInfoSaIS0_EED1Ev");
void sub_cElection_Ctor(void*) {}
void sub_vec_mapinfo_Ctor(void*) {}
void sub_vec_mapinfo_Dtor(void*) {}
extern "C" void sub_mapmm_clear(void* p)
    asm("_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5clearEv");
void sub_mapmm_clear(void*) {}
void UpgradeSeparateInfo::SetUpgradeSeparate(unsigned char) {}  // TODO(G2)
void* GetInstanceCommonStatisticsMgr() { return 0; }  // TODO(G2)
class Area
{
public:
    bool IsMovalbeArea(int vill, int area);
};
bool Area::IsMovalbeArea(int, int) { return false; }  // TODO(G2)

// ---- CBattle_Field 未实现方法（CBattle_Field.cpp 只实现约 30 个，其余后续批次）----
extern "C" void sub_CBattle_Field_Ctor(void* p) asm("_ZN13CBattle_FieldC1Ev");
extern "C" void sub_CBattle_Field_Dtor(void* p) asm("_ZN13CBattle_FieldD1Ev");
extern "C" void sub_CBattle_Field_pickup_item(void* p, int i) asm("_ZN13CBattle_Field11pickup_itemEi");
extern "C" void sub_CBattle_Field_reset_hell_party_value(void* p) asm("_ZN13CBattle_Field22reset_hell_party_valueEv");
extern "C" void sub_CBattle_Field_reset_field(void* p) asm("_ZN13CBattle_Field11reset_fieldEv");
void sub_CBattle_Field_Ctor(void*) {}
void sub_CBattle_Field_Dtor(void*) {}
void sub_CBattle_Field_pickup_item(void*, int) {}
void sub_CBattle_Field_reset_hell_party_value(void*) {}
void sub_CBattle_Field_reset_field(void*) {}

template <typename T, int A, int B>
class cElection
{
public:
    cElection();
    void CancelCandidate(int idx);
    void CancelVoter(int idx);
    int GetElected() const;
    void Vote(int voter, int candidate);
};
template <typename T, int A, int B>
cElection<T, A, B>::cElection() {}
template <typename T, int A, int B>
void cElection<T, A, B>::CancelCandidate(int) {}
template <typename T, int A, int B>
void cElection<T, A, B>::CancelVoter(int) {}
template <typename T, int A, int B>
int cElection<T, A, B>::GetElected() const { return 0; }
template <typename T, int A, int B>
void cElection<T, A, B>::Vote(int, int) {}
template class cElection<int, 8, 8>;
enum ENUM_PVP_MATCHING_TYPE { ENUM_PVP_MATCHING_TYPE_0 = 0 };
class CMatchingSystem
{
public:
    CMatchingSystem();
    ~CMatchingSystem();
    void* GetMatchingSystem(ENUM_PVP_MATCHING_TYPE type);
};
CMatchingSystem::CMatchingSystem() {}
CMatchingSystem::~CMatchingSystem() {}
void* CMatchingSystem::GetMatchingSystem(ENUM_PVP_MATCHING_TYPE) { return 0; }
int GetMatchingType() { return 0; }  // TODO(G2)
bool IsDeathMatchMap(int, bool&) { return false; }  // TODO(G2)
int PVPMAP_ONLY_NORMAL_EXPOSURE = 0;  // TODO(G2)
int PVPMAP_ONLY_TOURNAMENT_RANDOM = 0;  // TODO(G2)
int PVP_DM_BATTLE_TIME = 0;  // TODO(G2)
int PVP_NORMAL_BATTLE_TIME = 0;  // TODO(G2)
class PvP_Room;
class PvpUserTable;
class PvpResultRecvFlag;
class PvP_GuildWar_Log;
class RefPvpGrade
{
public:
    int GetPvpCurrRankPoint(int idx) const;
    int GetPvpGrade(int idx) const;
    int GetPvpNextRankPoint(int idx) const;
    int GetPvpPoint(int idx) const;
};
int RefPvpGrade::GetPvpCurrRankPoint(int) const { return 0; }
int RefPvpGrade::GetPvpGrade(int) const { return 0; }
int RefPvpGrade::GetPvpNextRankPoint(int) const { return 0; }
int RefPvpGrade::GetPvpPoint(int) const { return 0; }  // TODO(G2)
class Packet_Server_Match_data
{
public:
    Packet_Server_Match_data();
};
Packet_Server_Match_data::Packet_Server_Match_data() {}
enum ENUM_DUNGEON_CLEAR_CONDITION_TYPE { ENUM_DUNGEON_CLEAR_CONDITION_TYPE_0 = 0 };
class CClearCondition
{
public:
    CClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE type, int idx);
    bool Empty() const;
    bool IsClearCondition() const;
    bool ClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE type, int idx);
};
CClearCondition::CClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE, int) {}
bool CClearCondition::Empty() const { return false; }
bool CClearCondition::IsClearCondition() const { return false; }
bool CClearCondition::ClearCondition(ENUM_DUNGEON_CLEAR_CONDITION_TYPE, int)
{
    return false;
}
class RDARScriptStringManager
{
public:
    const char* findString(int idx, const char* a, bool* out) const;
};
const char* RDARScriptStringManager::findString(int, const char*, bool*) const
{
    return "";
}
RDARScriptStringManager g_scriptStringManager_;  // ORIG 全局（CTradeSpace 使用）
class CBurningFatigueEvent
{
public:
    int getBonusExpRate(unsigned short level) const;
};
int CBurningFatigueEvent::getBonusExpRate(unsigned short) const { return 0; }
class CExpDoubleEvent
{
public:
    int GetExpFactor();
};
int CExpDoubleEvent::GetExpFactor() { return 0; }
class CServerEvent
{
public:
    int GetExpRate();
};
int CServerEvent::GetExpRate() { return 0; }
class CPvPLiveEventData
{
public:
    void IncreasePlayCount(CUser* user);
};
void CPvPLiveEventData::IncreasePlayCount(CUser*) {}
class CStatisticServerProxy
{
public:
    void SendPacket(char* packet, int size);
};
void CStatisticServerProxy::SendPacket(char*, int) {}
struct MSG_MAILBOX_SEND
{
    char m_pad[4];
};
class cUserHistoryLogDummy;
class DB_InsertRandomOptionItemInform
{
public:
    void makeRequest(int a, unsigned int b, unsigned char c);
};
void DB_InsertRandomOptionItemInform::makeRequest(int, unsigned int,
                                                  unsigned char)
{
}
void* G_TimerQueue() { return 0; }  // TODO(G2)
namespace fair_pvp
{
class CFairPvPScore
{
public:
    void* GetGiveItem() const;
    int GetLastTrainingSealBonusCount();
    int GetLastTrainingSealCount();
    int GetRemainBonusCount();
};
void* CFairPvPScore::GetGiveItem() const { return 0; }
int CFairPvPScore::GetLastTrainingSealBonusCount() { return 0; }
int CFairPvPScore::GetLastTrainingSealCount() { return 0; }
int CFairPvPScore::GetRemainBonusCount() { return 0; }
}
namespace private_store
{
class CPrivateStoreMgr
{
public:
    bool IsBusyPrivateStore(CUser* user);
    void LoadPrivateStore(CUser* user);
    int GetPrivateStoreSize();
};
bool CPrivateStoreMgr::IsBusyPrivateStore(CUser*) { return false; }
void CPrivateStoreMgr::LoadPrivateStore(CUser*) {}  // TODO(G2)
int CPrivateStoreMgr::GetPrivateStoreSize() { return 0; }  // TODO(G2)
CPrivateStoreMgr* GetInstancePrivateStoreMgr()
{
    static CPrivateStoreMgr s;
    return &s;
}
}
class BlueMarbleScriptManager
{
public:
    static BlueMarbleScriptManager* getInsance();
    void* getMap(int idx);
    int getMapTotalCount();
    void* getTile(int idx);
};
BlueMarbleScriptManager* BlueMarbleScriptManager::getInsance()
{
    static BlueMarbleScriptManager s;
    return &s;
}
void* BlueMarbleScriptManager::getMap(int) { return 0; }
int BlueMarbleScriptManager::getMapTotalCount() { return 0; }
void* BlueMarbleScriptManager::getTile(int) { return 0; }
class BlueMarbleTileScript
{
public:
    BlueMarbleTileScript();
};
BlueMarbleTileScript::BlueMarbleTileScript() {}
namespace BlueMarbleUserGrade
{
enum T { T_0 = 0 };
}
namespace BlueMarbleUserState
{
enum T { T_0 = 0 };
}
struct map_item
{
    map_item();
    ~map_item();
    map_item(const map_item& other);
    map_item& operator=(const map_item& other);
    char m_pad[0x10];
};
map_item::map_item() {}
map_item::~map_item() {}
map_item::map_item(const map_item& other) { m_pad[0] = other.m_pad[0]; }
map_item& map_item::operator=(const map_item& other)
{
    m_pad[0] = other.m_pad[0];
    return *this;
}
struct map_monster
{
    map_monster();
    ~map_monster();
    map_monster(const map_monster& other);
    map_monster& operator=(const map_monster& other);
    char m_pad[0x14];
};
map_monster::map_monster() {}
map_monster::~map_monster() {}
map_monster::map_monster(const map_monster& other)
{
    m_pad[0] = other.m_pad[0];
}
map_monster& map_monster::operator=(const map_monster& other)
{
    m_pad[0] = other.m_pad[0];
    return *this;
}
enum eRidableObjectState { eRidableObjectState_0 = 0 };
class CRidable
{
public:
    void CheckAppearRidableObject(CParty* party, int a, int b, PacketGuard* p);
    void SetRidableObjectState(int idx, eRidableObjectState state);
};
void CRidable::CheckAppearRidableObject(CParty*, int, int, PacketGuard*) {}
void CRidable::SetRidableObjectState(int, eRidableObjectState) {}

// ---- G2 CGameManager 依赖桩（真实符号，对应 TU 后续批次细化）----
enum WARROOM_STATE { WARROOM_STATE_0 = 0 };
void* WarAreaCounter::GetCurrenTimeTable() { return 0; }
int WarAreaCounter::GetWarRoomCountAtPeekTime(int) { return 0; }
int WarAreaCounter::GetWarRoomCountFirstIndex(int) { return 0; }
int WarAreaCounter::GetWarRoomCountLastIndex(int) { return 0; }
class CraneMinigameManager
{
public:
    CraneMinigameManager();
    ~CraneMinigameManager();
    void init();
    void updateCraneItemNeedMaterial(int count);
};
CraneMinigameManager::CraneMinigameManager() {}
CraneMinigameManager::~CraneMinigameManager() {}
void CraneMinigameManager::init() {}
void CraneMinigameManager::updateCraneItemNeedMaterial(int) {}  // TODO(G2)
namespace WongWork
{
class CLogGameChannel
{
public:
    void IncInUser();
    void IncOutUser();
};
void CLogGameChannel::IncInUser() {}
void CLogGameChannel::IncOutUser() {}
class CBossStage
{
public:
    void reset();
};
void CBossStage::reset() {}
class CBossTower
{
public:
    int getIdx();
    void setIdx(int idx);
};
int CBossTower::getIdx() { return 0; }
void CBossTower::setIdx(int) {}
class CDeathTower
{
public:
    int getIdx();
    void setIdx(int idx);
    void reset();
    int onLeaveUser(CUser* user);
};
int CDeathTower::getIdx() { return 0; }
void CDeathTower::setIdx(int) {}
void CDeathTower::reset() {}
int CDeathTower::onLeaveUser(CUser*) { return 0; }
}
namespace QuickParty
{
class CQuickParty
{
public:
    int get_quick_party_index() const;
    void init();
    void set_quick_party_index(int idx);
};
int CQuickParty::get_quick_party_index() const { return 0; }
void CQuickParty::init() {}
void CQuickParty::set_quick_party_index(int) {}
class CQuickPartyRewardManager
{
public:
    CQuickPartyRewardManager();
    ~CQuickPartyRewardManager();
};
CQuickPartyRewardManager::CQuickPartyRewardManager() {}
CQuickPartyRewardManager::~CQuickPartyRewardManager() {}
}
namespace advancealtar
{
class StageControl
{
public:
    int getIndex() const;
    void leaveUser();
    void onTimerStageTick();
    void reset();
    void setIndex(int idx);
};
int StageControl::getIndex() const { return 0; }
void StageControl::leaveUser() {}
void StageControl::onTimerStageTick() {}
void StageControl::reset() {}
void StageControl::setIndex(int) {}
}
namespace advancealtar
{
class TimeLine
{
public:
    TimeLine();
    ~TimeLine();
};
TimeLine::TimeLine() {}  // TODO(G5)
TimeLine::~TimeLine() {}  // TODO(G5)
}
class STAssignMonster
{
public:
    STAssignMonster();
    STAssignMonster(const STAssignMonster& other);
    ~STAssignMonster();
};
STAssignMonster::STAssignMonster() {}
STAssignMonster::STAssignMonster(const STAssignMonster&) {}
STAssignMonster::~STAssignMonster() {}
class CConditionEventManager
{
public:
    CConditionEventManager();
};
CConditionEventManager::CConditionEventManager() {}
class CSpecialItemRoutingManager
{
public:
    CSpecialItemRoutingManager();
};
CSpecialItemRoutingManager::CSpecialItemRoutingManager() {}
class CSchoolMgr;
CSchoolMgr* g_schoolMgr;
class CGuildAgitManager;
CGuildAgitManager* g_guildAgitMgr;
class CShutdowManager
{
public:
    void SendLastMsgDBQueue(CUser* user);
};
void CShutdowManager::SendLastMsgDBQueue(CUser*) {}
CShutdowManager* GetInstanceShutdowManager() { static CShutdowManager s; return &s; }
class Inter_MonitorGuildPointDel
{
public:
    int getLastDeleteTime();
};
int Inter_MonitorGuildPointDel::getLastDeleteTime() { return 0; }
class Packet_ChannelType
{
public:
    Packet_ChannelType();
};
Packet_ChannelType::Packet_ChannelType() {}
class Packet_CutOff_UDP_Reply_UserInfo
{
public:
    Packet_CutOff_UDP_Reply_UserInfo();
};
Packet_CutOff_UDP_Reply_UserInfo::Packet_CutOff_UDP_Reply_UserInfo() {}
class Packet_Monitor_Char_Info
{
public:
    Packet_Monitor_Char_Info();
};
Packet_Monitor_Char_Info::Packet_Monitor_Char_Info() {}
class Packet_Monitor_UDP_Reply_UserInfo
{
public:
    Packet_Monitor_UDP_Reply_UserInfo();
};
Packet_Monitor_UDP_Reply_UserInfo::Packet_Monitor_UDP_Reply_UserInfo() {}
void SendUserInfoToUpperServer(Packet_Monitor_UDP_Reply_UserInfo&, unsigned char,
                               CUser*, ENUM_SERVER_GROUP)
{
}
class DB_GuildExpBookDelete
{
public:
    void makeRequest(unsigned int idx, int a, ENUM_SERVER_GROUP group);
};
void DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP) {}
void* channel_script_t::getChannelInfo(unsigned char, unsigned int) const
{
    return 0;
}
void* channel_script_t::getBonusRate(unsigned char, unsigned int,
                                     unsigned int) const
{
    return 0;
}
namespace GlobalData
{
extern void* s_timerQueue_;
void* s_timerQueue_;
}
void* G_EpollHandler() { return 0; }
class CGuildServerProxy;
class CMonitorServerProxy;
template <class T>
class CServerProxyMgr
{
public:
    T* GetServerProxy(ENUM_SERVER_GROUP group);
    int GetEndIndex();
    int GetNextIndex(int& idx);
    int GetStartIndex();
};
template <class T>
T* CServerProxyMgr<T>::GetServerProxy(ENUM_SERVER_GROUP)
{
    return 0;
}
template <class T>
int CServerProxyMgr<T>::GetEndIndex()
{
    return 0;
}
template <class T>
int CServerProxyMgr<T>::GetNextIndex(int&)
{
    return 0;
}
template <class T>
int CServerProxyMgr<T>::GetStartIndex()
{
    return 0;
}
template class CServerProxyMgr<CGuildServerProxy>;
template class CServerProxyMgr<CMonitorServerProxy>;
template class CServerProxyMgr<CStatisticServerProxy>;

class NeedMaterialDataManager
{
public:
    static NeedMaterialDataManager* getInstance();
    void* getNeedMaterial(const CItem*) const;
};
NeedMaterialDataManager* NeedMaterialDataManager::getInstance() { static NeedMaterialDataManager m; return &m; }
void* NeedMaterialDataManager::getNeedMaterial(const CItem*) const { return 0; }
int getLevelLinearAbility(int, int, int, int, int) { return 0; }
BaseItemKey::BaseItemKey() {}  // TODO(G1 物品批次)
BaseItemKey::BaseItemKey(unsigned char, unsigned char, unsigned short)
{
}  // TODO(G1 物品批次)
BaseItemValue::BaseItemValue() : m_field0(0) {}  // TODO(G1 物品批次)
BaseItemValue::BaseItemValue(int value) : m_field0(value) {}  // TODO(G1 物品批次)
int get_rand_int(int range)
{
    return range > 0 ? rand() % range : 0;  // TODO(G1 物品批次)
}
void ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem(CEquipItem&)
{
}  // TODO(G1 物品批次)
void ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem() {}  // TODO(G1 物品批次)
void ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting(int, bool, int)
{
}  // TODO(G1 物品批次)
int Arad_GiftItem_Set::open(STStackableScript*) { return 0; }  // TODO(G1 物品批次)
const char* CDataManager::GetCeraShopGoodsName() { return ""; }  // TODO(后续批次)
const char* CDataManager::SuddenShopFileName1() { return ""; }  // TODO(后续批次)
const char* CDataManager::SuddenShopFileName2() { return ""; }  // TODO(后续批次)
const char* CDataManager::SuddenShopFileName3() { return ""; }  // TODO(后续批次)
// CSkillList::find_skill / QuestList::find_quest 实现在 CListTables.cpp
int CNPCScriptList::find(unsigned int) const { return 0; }  // TODO(后续批次)
CNPCScriptList::~CNPCScriptList() {}  // TODO(后续批次)
CAICharacterList::~CAICharacterList() {}  // TODO(后续批次)
CItemUpgrade::~CItemUpgrade() {}  // TODO(后续批次)
float CItemUpgrade::getUpgradeItemRepairCostRate(int, bool) { return 0.0f; }  // TODO(后续批次)
void CChattingEmoticonList::ReCalc(void*, const CUser*) {}  // TODO(后续批次)
CItemGeneratorMgr::~CItemGeneratorMgr() {}  // TODO(后续批次)
void CItemGeneratorMgr::setDropRatio(float) {}  // TODO(后续批次)

// ---- PvP 任务 ----
int PvP_MissionSystem::find_mission(int) { return 0; }  // TODO(后续批次)
void PvP_MissionSystem::get_New_DailyMission(
    std::vector<std::pair<unsigned int, unsigned int> >& out)
{
    out.clear();
}  // TODO(后续批次)
int PvP_MissionSystem::get_WithinMissionIndex(int) const { return 0; }  // TODO(后续批次)
int PvP_MissionSystem::get_kind_mission_list(unsigned int) { return 0; }  // TODO(后续批次)
int PvP_MissionSystem::get_BaseMissionExp_byRank(unsigned short) { return 0; }  // TODO(后续批次)
std::bitset<32> PvP_MissionSystem::get_daily_mission_kind() const
{
    return std::bitset<32>();
}  // TODO(后续批次)

// ---- 抽奖 ----
CLottery_NeedMoney::CLottery_NeedMoney() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
CLottery_NeedMoney::~CLottery_NeedMoney() {}  // TODO(后续批次)
bool CLottery_NeedMoney::isNeedMoney(unsigned int) const { return false; }  // TODO(后续批次)
void CLottery_NeedMoney::add_lottery_needMoney(unsigned int, unsigned int) {}  // TODO(后续批次)

// ---- ST* 脚本占位类（构造清 pad / 含 std 成员的默认构造；析构空）----
reseal_table_t::reseal_table_t() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
reseal_table_t::~reseal_table_t() {}  // TODO(后续批次)
InGameAdvertisementScript::InGameAdvertisementScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
PcBangItemRentarData::PcBangItemRentarData()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
PcBangItemRentarData::~PcBangItemRentarData() {}  // TODO(后续批次)
DimensionActivationData::DimensionActivationData()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
DimensionActivationData::~DimensionActivationData() {}  // TODO(后续批次)
seriaRoomDecoEventScript::seriaRoomDecoEventScript() {}  // TODO(后续批次)
seriaRoomDecoEventScript::~seriaRoomDecoEventScript() {}  // TODO(后续批次)
growthEquipmentScript::growthEquipmentScript() {}  // TODO(后续批次)
growthEquipmentScript::~growthEquipmentScript() {}  // TODO(后续批次)
createChracScript::createChracScript() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
createChracScript::~createChracScript() {}  // TODO(后续批次)
useCharacterJobFatigue::useCharacterJobFatigue() {}  // TODO(后续批次)
useCharacterJobFatigue::~useCharacterJobFatigue() {}  // TODO(后续批次)
CharacterCreateCreatureGiftScript::CharacterCreateCreatureGiftScript() {}  // TODO(后续批次)
CharacterCreateCreatureGiftScript::~CharacterCreateCreatureGiftScript() {}  // TODO(后续批次)
seriaRoomDecoAniEventScript::seriaRoomDecoAniEventScript() {}  // TODO(后续批次)
seriaRoomDecoAniEventScript::~seriaRoomDecoAniEventScript() {}  // TODO(后续批次)
stUnlimitChallengeInfo::stUnlimitChallengeInfo()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stUnlimitChallengeInfo::~stUnlimitChallengeInfo() {}  // TODO(后续批次)
stLimitItemUsageInfoEx::stLimitItemUsageInfoEx()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stLimitItemUsageInfoEx::~stLimitItemUsageInfoEx() {}  // TODO(后续批次)
CNPCRelationEventManager::CNPCRelationEventManager()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
CNPCRelationEventManager::~CNPCRelationEventManager() {}  // TODO(后续批次)
stEmotionTypeTagsInfo::stEmotionTypeTagsInfo()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stEmotionTypeTagsInfo::~stEmotionTypeTagsInfo() {}  // TODO(后续批次)
stEquipmentGradeSample::stEquipmentGradeSample()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stEquipmentGradeSample::~stEquipmentGradeSample() {}  // TODO(后续批次)
stConditionEventInfo::stConditionEventInfo()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stConditionEventInfo::~stConditionEventInfo() {}  // TODO(后续批次)
ConditionLevelChkDungeon::ConditionLevelChkDungeon()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
ConditionLevelChkDungeon::~ConditionLevelChkDungeon() {}  // TODO(后续批次)
FairPvPStatScript::FairPvPStatScript() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
FairPvPStatScript::~FairPvPStatScript() {}  // TODO(后续批次)
RegenerationROI::RegenerationROI() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
RegenerationROI::~RegenerationROI() {}  // TODO(后续批次)
stSeriaBlessingScript::stSeriaBlessingScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stSeriaBlessingScript::~stSeriaBlessingScript() {}  // TODO(后续批次)
stLevelUpRewardItemScript::stLevelUpRewardItemScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stLevelUpRewardItemScript::~stLevelUpRewardItemScript() {}  // TODO(后续批次)
stGrowthCapsuleScript::stGrowthCapsuleScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stRankSystemInfo::stRankSystemInfo() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
stRankSystemInfo::~stRankSystemInfo() {}  // TODO(后续批次)
stDeathTower_t::stDeathTower_t() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
stBloodDungeon_t::stBloodDungeon_t() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
stBloodDungeon_t::~stBloodDungeon_t() {}  // TODO(后续批次)
stVillageAttacked_t::stVillageAttacked_t() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
stVillageAttacked_t::~stVillageAttacked_t() {}  // TODO(后续批次)
APSystem::CActionPointEtcParameter::CActionPointEtcParameter()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
APSystem::CActionPointEtcParameter::~CActionPointEtcParameter() {}  // TODO(后续批次)
stCharacLinkSystem_t::stCharacLinkSystem_t()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stCharacLinkSystem_t::~stCharacLinkSystem_t() {}  // TODO(后续批次)
advancealtar::StageTimeLineParameter::StageTimeLineParameter()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
advancealtar::StageTimeLineParameter::~StageTimeLineParameter() {}  // TODO(后续批次)
advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter() {}  // TODO(后续批次)
advancealtar::RewardParameter::RewardParameter()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
advancealtar::RewardParameter::~RewardParameter() {}  // TODO(后续批次)
advancealtar::ConfigParameter::ConfigParameter()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
advancealtar::ConfigParameter::~ConfigParameter() {}  // TODO(后续批次)
stQuestShop::stQuestShop() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
stQuestShop::~stQuestShop() {}  // TODO(后续批次)
WorldDropInfo::WorldDropInfo() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
WorldDropInfo::~WorldDropInfo() {}  // TODO(后续批次)
SlangNameData::SlangNameData() {}  // TODO(后续批次)
SlangNameData::~SlangNameData() {}  // TODO(后续批次)
InvalidCharData::InvalidCharData() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
InvalidCharData::~InvalidCharData() {}  // TODO(后续批次)
STGrowthPowerData::STGrowthPowerData() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
STGrowthPowerData::~STGrowthPowerData() {}  // TODO(后续批次)
AvatarVariation::AvatarColorInfo::AvatarColorInfo()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
AvatarVariation::AvatarColorInfo::~AvatarColorInfo() {}  // TODO(后续批次)
BoosterGageData::BoosterGageData() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
BoosterGageData::~BoosterGageData() {}  // TODO(后续批次)
CWorldMapList::CWorldMapList() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
CWorldMapList::~CWorldMapList() {}  // TODO(后续批次)
StageMapList::StageMapList() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
StageMapList::~StageMapList() {}  // TODO(后续批次)
WarAreaCounter::WarAreaCounter() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
WarAreaCounter::~WarAreaCounter() {}  // TODO(后续批次)
QuestParameterScript::QuestParameterScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
QuestParameterScript::~QuestParameterScript() {}  // TODO(后续批次)
GuildParameterScript::GuildParameterScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
GuildParameterScript::~GuildParameterScript() {}  // TODO(后续批次)
PowerParameterScript::PowerParameterScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
PowerParameterScript::~PowerParameterScript() {}  // TODO(后续批次)
SecretShopScript::SecretShopScript() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
SecretShopScript::~SecretShopScript() {}  // TODO(后续批次)
stTitleBookInfo::stTitleBookInfo() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
stTitleBookInfo::~stTitleBookInfo() {}  // TODO(后续批次)
AccountCargoScript::AccountCargoScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
AccountCargoScript::~AccountCargoScript() {}  // TODO(后续批次)
void* AccountCargoScript::GetCurrUpgradeInfo(int) { return 0; }  // TODO(G4)
void* AccountCargoScript::GetCreateInfo() { return 0; }  // TODO(G4)
void* AccountCargoScript::GetNextUpgradeInfo(int) { return 0; }  // TODO(G4)
namespace CerashopAddRestrict
{
struct DBInputData
{
    char m_pad[4];
};
char loadRDARScriptFile(const char* a, const char* b) { return 1; }  // TODO(G4)
int ScanType(std::string& s, bool& flag) { return 0; }  // TODO(G4)
int ScanInt(bool& flag) { return 0; }  // TODO(G4)
void DB_LoadCerashopAddRestrictType_makeRequest(CUser*) {}  // TODO(G4)
void DB_SaveCerashopAddRestrictType_makeRequest(CUser*, DBInputData*) {}
}
namespace secretshop
{
class CMTRand
{
public:
    CMTRand(const unsigned long& seed);
    int randInt(const unsigned long& range);
};
CMTRand::CMTRand(const unsigned long&) {}  // TODO(G4)
int CMTRand::randInt(const unsigned long&) { return 0; }  // TODO(G4)
}
char SecretShopScript::GetNpcByDungeonIdx(int&, int, int) { return 0; }
void SecretShopScript::GetNpcByDungeonLev(int&, int, int) {}
extern "C" void sub_SecretShopScript_GetItemByDungeonIdx(void* script, void* rand,
    void* out, int a, int b, bool c)
    __asm__("_ZN16SecretShopScript21GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOSaIS4_EEEiib");
extern "C" void sub_SecretShopScript_GetItemByDungeonIdx(void* script, void* rand,
    void* out, int a, int b, bool c)
{
}  // TODO(G4 phantom)
extern "C" void sub_SecretShopScript_GetItemByDungeonLev(void* script, void* rand,
    void* out, int a, int b, bool c)
    __asm__("_ZN16SecretShopScript21GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOSaIS4_EEEiib");
extern "C" void sub_SecretShopScript_GetItemByDungeonLev(void* script, void* rand,
    void* out, int a, int b, bool c)
{
}  // TODO(G4 phantom)
extern "C" char loadRDARScriptFile(const char* a, const char* b) { return 1; }
extern "C" int ScanInt(bool* flag) { return 0; }
extern "C" void* sub_ARAD_Singleton_CerashopManager_Get(void)
    __asm__("_ZN4ARAD9SingletonI24CerashopAddRestrict7ManagerE3GetEv");
extern "C" void* sub_ARAD_Singleton_CerashopManager_Get(void) { return 0; }
int g_emptySlot = 0;  // TODO(G4)
std::map<int, std::string> g_itemShopScriptFileList;  // TODO(G4)
class STScriptFileList
{
public:
    int FindIndexByFullScan(const char* path) const;
};
int STScriptFileList::FindIndexByFullScan(const char*) const { return 0; }
void importItemShopScript(ItemShopScript* script, const char* path) {}  // TODO(G4)
void loadRDARScriptListFile(STScriptFileList* list, const char* a,
                            const char* b, std::map<int, int>* map)
{
}  // TODO(G5)
void SetLightServerFlag(bool flag) {}  // TODO(G5)
class DB_CreateAccountCargo
{
public:
    void makeRequest(int a, unsigned int b, unsigned int c);
};
void DB_CreateAccountCargo::makeRequest(int, unsigned int, unsigned int) {}
class DB_UpgradeAccountCargo
{
public:
    void makeRequest(int a, unsigned int b, unsigned int c);
};
void DB_UpgradeAccountCargo::makeRequest(int, unsigned int, unsigned int) {}
class DB_DeleteAccountCargo
{
public:
    void makeRequest(int a, unsigned int b);
};
void DB_DeleteAccountCargo::makeRequest(int, unsigned int) {}
class RestrictCategory
{
public:
    enum Enum
    {
        ENUM_0 = 0
    };
};
class ServiceRestrictManager
{
public:
    bool isRestricted(CUser* user, RestrictCategory::Enum category, int v);
};
bool ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
{
    return false;  // TODO(G4)
}
PvPSkillTreeParameterScript::PvPSkillTreeParameterScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
PvPSkillTreeParameterScript::~PvPSkillTreeParameterScript() {}  // TODO(后续批次)
int PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int,
                                                  bool) const
{
    return 0;  // TODO(G1 技能批次)
}
void PvPSkillTreeParameterScript::getGiveSkill(
    int, int, int, std::vector<std::pair<int, int> >&) const
{
}  // TODO(G1 技能批次)
EventCharacterParameterScript::EventCharacterParameterScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
EventCharacterParameterScript::~EventCharacterParameterScript() {}  // TODO(后续批次)
IndependentDropParameterScript::IndependentDropParameterScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
IndependentDropParameterScript::~IndependentDropParameterScript() {}  // TODO(后续批次)
stMercenarySystemInfo::stMercenarySystemInfo()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stMercenarySystemInfo::~stMercenarySystemInfo() {}  // TODO(后续批次)
channel_script_t::channel_script_t() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
channel_script_t::~channel_script_t() {}  // TODO(后续批次)
pvp_channel_info_t::pvp_channel_info_t()
{
    memset(m_pad, 0, sizeof(m_pad));
    m_upgradeRevision = 0;
    m_pvpMissionSystem = 0;
}  // TODO(后续批次)
stItemMakingSkill::stItemMakingSkill() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
stItemMakingSkill::~stItemMakingSkill() {}  // TODO(后续批次)
ChoiceItemInfo::ChoiceItemInfo()
{
    memset(this, 0, sizeof(*this));
}  // TODO(后续批次)
ImageCommunicationData::ImageCommunicationData()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
ARAD::SCRIPT::AradJumping_Script::AradJumping_Script()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
ARAD::SCRIPT::AradJumping_Script::~AradJumping_Script() {}  // TODO(后续批次)
live_server_info_t::live_server_info_t() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
live_server_info_t::~live_server_info_t() {}  // TODO(后续批次)
EventAvatarListScript::EventAvatarListScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
EventAvatarListScript::~EventAvatarListScript() {}  // TODO(后续批次)
EventEtcScript::EventEtcScript() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
EventEtcScript::~EventEtcScript() {}  // TODO(后续批次)
stReturnUserRewardScript::stReturnUserRewardScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stReturnUserRewardScript::~stReturnUserRewardScript() {}  // TODO(后续批次)
stBingoScript::stBingoScript() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
stBingoScript::~stBingoScript() {}  // TODO(后续批次)
stBroadCastItemScript::stBroadCastItemScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stBroadCastItemScript::~stBroadCastItemScript() {}  // TODO(后续批次)
stNewAccountLevelUpToJobScript::stNewAccountLevelUpToJobScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
stNewAccountLevelUpToJobScript::~stNewAccountLevelUpToJobScript() {}  // TODO(后续批次)
eventReward::eventReward() { memset(m_pad, 0, sizeof(m_pad)); }  // TODO(后续批次)
eventReward::~eventReward() {}  // TODO(后续批次)
DeleteInvalidItemScript::DeleteInvalidItemScript()
{
    memset(m_pad, 0, sizeof(m_pad));
}  // TODO(后续批次)
DeleteInvalidItemScript::~DeleteInvalidItemScript() {}  // TODO(后续批次)

// ---- Captcha GreyImage（ORIG 0x080df4e8 族；布局 +0 w / +4 h / +8 buf）。
//      实现独立于 GlobalData TU（ORIG 中 GreyImage 属独立 TU）。----
class GreyImage
{
public:
    GreyImage();
    ~GreyImage();
    void init(int width, int height, unsigned char fill);
    void reset();
    int getWidth() const;
    int getHeight() const;
    void* getImage();
    void* getImage() const;
    unsigned char getAlpha(int x, int y);
    void setAlpha(int x, int y, unsigned char alpha);
    void setAlphaAsMax(int x, int y, unsigned char alpha);
    int sampleAlpha(int x, int y);
private:
    int m_width;          // +0x00
    int m_height;         // +0x04
    unsigned char* m_image;  // +0x08
};

GreyImage::GreyImage()
{
    m_width = 0;
    m_height = 0;
    m_image = 0;
}

GreyImage::~GreyImage()
{
    reset();
}

void GreyImage::reset()
{
    if (m_image)
    {
        m_width = 0;
        m_height = 0;
        delete[] m_image;
        m_image = 0;
    }
}

void GreyImage::init(int width, int height, unsigned char fill)
{
    reset();
    m_width = width;
    m_height = height;
    m_image = new unsigned char[(size_t)width * height];
    memset(m_image, fill, (size_t)width * height);
}

int GreyImage::getWidth() const
{
    return m_width;
}

int GreyImage::getHeight() const
{
    return m_height;
}

void* GreyImage::getImage()
{
    return m_image;
}

void* GreyImage::getImage() const
{
    return m_image;
}

unsigned char GreyImage::getAlpha(int x, int y)
{
    return m_image[m_width * y + x];
}

void GreyImage::setAlpha(int x, int y, unsigned char alpha)
{
    m_image[m_width * y + x] = alpha;
}

void GreyImage::setAlphaAsMax(int x, int y, unsigned char alpha)
{
    unsigned char& p = m_image[m_width * y + x];
    if (alpha > p)
    {
        p = alpha;
    }
}

int GreyImage::sampleAlpha(int x, int y)
{
    int xi = x >> 16;
    int yi = y >> 16;
    if (xi < 0 || yi < 0 || xi >= m_width - 1 || yi >= m_height - 1)
    {
        return 0;
    }
    unsigned int fx = (unsigned int)x & 0xffff;
    unsigned int fy = (unsigned int)y & 0xffff;
    unsigned char a00 = getAlpha(xi, yi);
    unsigned char a10 = getAlpha(xi + 1, yi);
    unsigned char a01 = getAlpha(xi, yi + 1);
    unsigned char a11 = getAlpha(xi + 1, yi + 1);
    int top = (int)(((unsigned int)a00 * (0x10000 - fx) + (unsigned int)a10 * fx) >> 16);
    int bot = (int)(((unsigned int)a01 * (0x10000 - fx) + (unsigned int)a11 * fx) >> 16);
    return (int)(((unsigned int)top * (0x10000 - fy) + (unsigned int)bot * fy) >> 16);
}

// ============================================================================
// CListTables.cpp（G2 第七批）依赖的实体类/脚本类 stub（G1 物品/技能/任务批次
// 细化；算法正确、返回默认值）。签名与 CListTables.cpp 声明逐一对应。
// ============================================================================

struct stSelectQuestParam
{
    stSelectQuestParam(CUser* user);
    char m_pad[0x54];
};
stSelectQuestParam::stSelectQuestParam(CUser*) {}  // TODO(G2)

class QuestScript
{
public:
    QuestScript();
    QuestScript(const QuestScript& other);
    ~QuestScript();
    char m_pad[0x364];
};

class STSkillScript
{
public:
    STSkillScript();
    ~STSkillScript();
    char m_pad[0x281];
};

class STMonsterScript
{
public:
    STMonsterScript();
    ~STMonsterScript();
    char m_pad[0x3f0];
};

class STDungeonScript
{
public:
    STDungeonScript();
    ~STDungeonScript();
    char m_pad[0x50a];
};

class CMap
{
public:
    CMap();
    ~CMap();
    int get_index() const;
    int get_map_type() const;
    int checkFitInPathObject(int x, int y) const;
    char m_pad[0x2d8];
};

class CDungeon
{
public:
    CDungeon();
    ~CDungeon();
    int get_index() const;
    int get_min_level() const;
    int get_standard_level() const;
    void set_dungeon(STDungeonScript& script);
    bool isTowerOfDespairDungeon() const;
    bool get_dimension_possible() const;
    bool isTournamentDungeon() const;
    const char* GetDungeonName() const;
    bool IsEnterEachMap() const;
    char m_pad[0x934];
};

class CDungeon_TowerOfDespair : public CDungeon
{
public:
    CDungeon_TowerOfDespair();
    ~CDungeon_TowerOfDespair();
};

class CMonster
{
public:
    CMonster();
    ~CMonster();
    int get_index() const;
    int get_index();
    void set_monster(STMonsterScript& script);
    char m_pad[0x1d28];
};

namespace WongWork
{
struct STClearedQuest
{
    char m_pad[0x14];
};
class CQuestClear
{
public:
    CQuestClear();
    ~CQuestClear();
    void clear();
    bool isClearedQuest(unsigned int questIdx) const;
    bool getClearedQuest() const;
    void resetClearedQuests(unsigned int count);
    void setClearedQuest(const STClearedQuest* quest);
    static bool syncScript();
    void setClearedQuest(unsigned int questIdx);
};
}

class CNRDScriptData
{
public:
    CNRDScriptData();
    ~CNRDScriptData();
    void import(const char* path);
    int getInt(const char* key);
    char m_pad[0xa4];
};

class CDailyScheduleManager
{
public:
    void AddDailSchedule(const std::vector<int>& schedule);
    int GetScheduleState(_DailyScheduleType type, unsigned int idx) const;
};

class CGameManager;
CGameManager* G_CGameManager();

namespace QuickParty
{
class CQuickPartySystemManager;
}

class CGameManager
{
public:
    QuickParty::CQuickPartySystemManager* GetQuickPartySystemManager();
    void PutParty(CParty* party);
};

namespace QuickParty
{
class CQuickPartySystemManager
{
public:
    CQuickPartySystemManager();
    ~CQuickPartySystemManager();
    void init_quick_party_pool(const CDungeon* dungeon);
    void cancel_quick_party(CParty* party, bool flag, CUser* user);
};
}

int ImportSkillScript(STSkillScript* script, const char* path,
                      int job, int type, int flag);
int ImportDungeonScript(STDungeonScript* script, const char* path);
int ImportMonsterScript(STMonsterScript* script, int type,
                        const char* path, bool flag);
int importQuestScript(QuestScript* script, const char* path);

// ---- 实现 ----
CDungeon::CDungeon() {}
CDungeon::~CDungeon() {}
int CDungeon::get_index() const { return 0; }
int CDungeon::get_min_level() const { return 0; }  // TODO(G2)
int CDungeon::get_standard_level() const { return 0; }  // TODO(G2)
void CDungeon::set_dungeon(STDungeonScript&) {}
bool CDungeon::isTowerOfDespairDungeon() const { return false; }
bool CDungeon::get_dimension_possible() const { return false; }
bool CDungeon::isTournamentDungeon() const { return false; }
const char* CDungeon::GetDungeonName() const { return ""; }  // TODO(G2)
bool CDungeon::IsEnterEachMap() const { return false; }  // TODO(G2)
CDungeon_TowerOfDespair::CDungeon_TowerOfDespair() {}
CDungeon_TowerOfDespair::~CDungeon_TowerOfDespair() {}
CMap::CMap() {}
CMap::~CMap() {}
int CMap::get_index() const { return 0; }
int CMap::get_map_type() const { return 0; }
int CMap::checkFitInPathObject(int, int) const { return 0; }  // TODO(G2)
CMonster::CMonster() {}
CMonster::~CMonster() {}
int CMonster::get_index() const { return 0; }
void CMonster::set_monster(STMonsterScript&) {}
bool WongWork::CQuestClear::isClearedQuest(unsigned int) const { return false; }
WongWork::CQuestClear::CQuestClear() {}  // TODO(G2)
WongWork::CQuestClear::~CQuestClear() {}  // TODO(G2)
void WongWork::CQuestClear::clear() {}  // TODO(G2)
bool WongWork::CQuestClear::getClearedQuest() const { return false; }  // TODO(G2)
void WongWork::CQuestClear::resetClearedQuests(unsigned int) {}  // TODO(G2)
void WongWork::CQuestClear::setClearedQuest(const STClearedQuest*) {}  // TODO(G2)
bool WongWork::CQuestClear::syncScript() { return false; }
void WongWork::CQuestClear::setClearedQuest(unsigned int) {}  // TODO(G2)
CNRDScriptData::CNRDScriptData() {}
CNRDScriptData::~CNRDScriptData() {}
void CNRDScriptData::import(const char*) {}
int CNRDScriptData::getInt(const char*) { return 0; }
void CDailyScheduleManager::AddDailSchedule(const std::vector<int>&) {}
int CDailyScheduleManager::GetScheduleState(_DailyScheduleType,
                                            unsigned int) const
{
    return 0;
}
void QuickParty::CQuickPartySystemManager::init_quick_party_pool(
    const CDungeon*)
{
}
QuickParty::CQuickPartySystemManager::CQuickPartySystemManager() {}
QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager() {}
void QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool,
                                                              CUser*)
{
}  // TODO(G2)

// ---- CListTables.cpp 引用的 sync_script 全局表 / CSyncScript 方法 ----
namespace sync_script
{
class CSyncScript
{
public:
    bool truncate_monster_info_table();
    bool insert_monster_info_to_db(const STMonsterScript& script);
    bool truncate_skill_index();
    bool trancate_skill_info();
    bool insert_skill_index(STSkillScript* script, int job);
    bool insert_skill_info(STSkillScript* script, int job, int type);
    bool truncate_quest_category();
    bool insert_quest_category(QuestScript* script);
    char truncate_town_info_table();
    char insert_town_info_to_db(const TownScript& script);
};

std::map<int, std::string> g_dungeonInfoTable;   // ORIG 0x94f6ea0
std::map<int, std::string> g_monsterInfoTable;   // ORIG 0x94ff260
std::map<int, std::string> g_questInfoTable;     // ORIG 0x9500480
std::map<int, std::string> g_skillInfoTable[11]; // ORIG 0x9500820

bool CSyncScript::truncate_monster_info_table() { return true; }
bool CSyncScript::insert_monster_info_to_db(const STMonsterScript&)
{
    return true;
}
bool CSyncScript::truncate_skill_index() { return true; }
bool CSyncScript::trancate_skill_info() { return true; }
bool CSyncScript::insert_skill_index(STSkillScript*, int) { return true; }
bool CSyncScript::insert_skill_info(STSkillScript*, int, int) { return true; }
bool CSyncScript::truncate_quest_category() { return true; }
bool CSyncScript::insert_quest_category(QuestScript*) { return true; }
char CSyncScript::truncate_town_info_table() { return 1; }  // TODO(G2)
char CSyncScript::insert_town_info_to_db(const TownScript&) { return 1; }  // TODO(G2)
}

// ---- CListTables.cpp 引用的 CDataManager 方法 ----
int CDataManager::VerifyMap(const CMap& map, int idx) const { return 1; }

// ============================================================================
// G2-4 GameWorld 依赖桩（真实符号；对应批次翻译后移除）
// ============================================================================
class Area;
class TownScript
{
public:
    TownScript();
    ~TownScript();
    int m_0;
};
class CGM_Manager
{
public:
    char GetCurrentGmMode(unsigned int accId);
    void TurnGmMode(unsigned int accId);
    char IsGm(unsigned int accId);
};
char CGM_Manager::GetCurrentGmMode(unsigned int) { return 0; }  // TODO(G2)
void CGM_Manager::TurnGmMode(unsigned int) {}  // TODO(G2)
char CGM_Manager::IsGm(unsigned int) { return 0; }  // TODO(G2)

extern "C" void* sub_CStreamGuard_GetInBuffer_lev(void* self)
    asm("_ZN12CStreamGuard11GetInBufferI24SIG_UPDATE_STATISTIC4LEVEEPT_v");
extern "C" void* sub_CStreamGuard_GetInBuffer_nat(void* self)
    asm("_ZN12CStreamGuard11GetInBufferI17SIG_NAT_TYPE_USEREEPT_v");
extern "C" char sub_CHackLog_InvalidAreaMove_IsInvalidMovableArea(int a, int b, int c, int d)
    asm("_ZN27CHackLog_InvalidAreaMove21IsInvalidMovableAreaEiiii");
extern "C" char sub_CHackLog_InvalidAreaMove_isMovableRoute(int a, int b, int c, int d, int e, int f)
    asm("_ZN27CHackLog_InvalidAreaMove15isMovableRouteEiiiiii");
extern "C" unsigned int sub_CHackLog_InvalidAreaMove_GetHackType(void)
    asm("_ZN27CHackLog_InvalidAreaMove11GetHackTypeEv");
extern "C" void sub_WongWork_CHackAnalyzer_addServerHackCnt(void* self, void* user,
    unsigned int type, int a, int b, int c)
    asm("_ZN8WongWork14CHackAnalyzer16addServerHackCntEP5CUserjiij");
extern "C" void sub_XNuclear_CHades_Send_ReturnToVillage(void* self)
    asm("_ZN8XNuclear5CHades20Send_ReturnToVillageEv");
extern "C" char sub_CTimeGate_isOpen(void* self) asm("_ZNK10CTimeGate6isOpenEv");
extern "C" bool sub_Is_restrictive_commercial_transaction_zone(int x1, int y1, int x2, int y2)
    asm("_Z42Is_restrictive_commercial_transaction_zoneiiii");
void* sub_CStreamGuard_GetInBuffer_lev(void*) { return 0; }  // TODO(G2)
void* sub_CStreamGuard_GetInBuffer_nat(void*) { return 0; }  // TODO(G2)
char sub_CHackLog_InvalidAreaMove_IsInvalidMovableArea(int, int, int, int) { return 0; }  // TODO(G2)
char sub_CHackLog_InvalidAreaMove_isMovableRoute(int, int, int, int, int, int) { return 0; }  // TODO(G2)
unsigned int sub_CHackLog_InvalidAreaMove_GetHackType() { return 0; }  // TODO(G2)
void sub_WongWork_CHackAnalyzer_addServerHackCnt(void*, void*, unsigned int, int, int, int) {}  // TODO(G2)
void sub_XNuclear_CHades_Send_ReturnToVillage(void*) {}  // TODO(G2)
char sub_CTimeGate_isOpen(void*) { return 0; }  // TODO(G2)
bool sub_Is_restrictive_commercial_transaction_zone(int, int, int, int) { return false; }  // TODO(G2)

// CDataManager::GetPvPChannelGrade（GameWorld TU 直调）
void CDataManager::GetPvPChannelGrade() {}  // TODO(G2)

// ============================================================================
// G2-4 各新 TU 依赖桩（真实符号；对应批次翻译后移除）
// ============================================================================
extern "C" char sub_ServerParameterScript_isDungeonOpen(void* self)
    asm("_ZN23ServerParameterScript12isDungeonOpenEv");
extern "C" int sub_CTradeSpace_cancel_trade_for_china(void* self, void* user)
    asm("_ZN11CTradeSpace20cancel_trade_for_chinaEP5CUser");
extern "C" void sub_DB_AvatarChangeOwner_makeRequest(unsigned int a,
    unsigned int b, unsigned int c, unsigned char d)
    asm("_ZN20DB_AvatarChangeOwner11makeRequestEjjjh");
extern "C" void sub_TimerDetectDisconnect_registNextTimer(void)
    asm("_ZN21TimerDetectDisconnect15registNextTimerEv");
extern "C" char sub_ServiceRestrictManager_isRestricted(void* self, int cat, int v)
    asm("_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi");
extern "C" void* sub_CDataManager_getItemGenerator(void* self)
    asm("_ZN12CDataManager16getItemGeneratorEv");
extern "C" void* sub_CItemGeneratorMgr_getGenerator(void* self, int type)
    asm("_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE");
extern "C" int sub_CEquipItem_getAvatarPeriod(const void* self, unsigned char a)
    asm("_ZNK10CEquipItem15getAvatarPeriodEh");
extern "C" void* sub_CDungeon_getDropItems(const void* self)
    asm("_ZNK8CDungeon12getDropItemsEv");
extern "C" void sub_CHandlePremium_handleSetUserPCRoom(void* self, void* user,
                                                       long start, long end)
    asm("_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll");
extern "C" void sub_STEventCharacterInfo_C1(void* self)
    asm("_ZN20STEventCharacterInfoC1Ev");
extern "C" void sub_STEventCharacterInfo_D1(void* self)
    asm("_ZN20STEventCharacterInfoD1Ev");
extern "C" void sub_EventCharacterParameterScript_GetEventCharacterInfo(
    const void* self, int a, int b, void* out)
    asm("_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo");
extern "C" void* sub_ARAD_Singleton_ServiceRestrictManager_Get(void)
    asm("_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv");
extern "C" void sub_CUser_master_new_skills(void* self, void* skills, int kind)
    asm("_ZN5CUser17master_new_skillsEP15_Mastered_skill20ENUM_SKILL_TREE_KIND");
extern "C" bool sub_CUser_isAffectedPremium(const void* self, int premiumType)
    asm("_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE");
char sub_ServerParameterScript_isDungeonOpen(void*) { return 0; }  // TODO(G2)
int sub_CTradeSpace_cancel_trade_for_china(void*, void*) { return 0; }  // TODO(G2)
void sub_DB_AvatarChangeOwner_makeRequest(unsigned int, unsigned int,
                                          unsigned int, unsigned char)
{
}  // TODO(G2)
void sub_TimerDetectDisconnect_registNextTimer() {}  // TODO(G2)
char sub_ServiceRestrictManager_isRestricted(void*, int, int) { return 0; }  // TODO(G2)
void* sub_CDataManager_getItemGenerator(void*) { return 0; }  // TODO(G2)
void* sub_CItemGeneratorMgr_getGenerator(void*, int) { return 0; }  // TODO(G2)
int sub_CEquipItem_getAvatarPeriod(const void*, unsigned char) { return 0; }  // TODO(G2)
void* sub_CDungeon_getDropItems(const void*) { return 0; }  // TODO(G2)
void sub_CHandlePremium_handleSetUserPCRoom(void*, void*, long, long)
{
}  // TODO(G2)
void sub_STEventCharacterInfo_C1(void*) {}  // TODO(G2)
void sub_STEventCharacterInfo_D1(void*) {}  // TODO(G2)
void sub_EventCharacterParameterScript_GetEventCharacterInfo(const void*, int,
                                                             int, void*)
{
}  // TODO(G2)
void* sub_ARAD_Singleton_ServiceRestrictManager_Get() { return 0; }  // TODO(G2)
void sub_CUser_master_new_skills(void*, void*, int) {}  // TODO(G2)
bool sub_CUser_isAffectedPremium(const void*, int) { return false; }  // TODO(G2)

class CTradeSpace
{
public:
    int cancel_trade_for_china(CUser* user);
};

namespace WongWork
{
class CSkillChanger
{
public:
    CSkillChanger();
    ~CSkillChanger();
    void SkillInitialize(CUser* user, int a, bool b);
};
CSkillChanger::CSkillChanger() {}  // TODO(G2)
CSkillChanger::~CSkillChanger() {}  // TODO(G2)
void CSkillChanger::SkillInitialize(CUser*, int, bool) {}  // TODO(G2)
}

class CRandomValue
{
public:
    CRandomValue(std::vector<int>& list, int a, int b, int c);
    int operator()();
};
CRandomValue::CRandomValue(std::vector<int>&, int, int, int) {}  // TODO(G2)
int CRandomValue::operator()() { return 0; }  // TODO(G2)
class CDescending
{
public:
    bool operator()(int a, int b);
};
bool CDescending::operator()(int, int) { return false; }  // TODO(G2)

class WpBonusPointResult
{
public:
    WpBonusPointResult();
};
WpBonusPointResult::WpBonusPointResult() {}  // TODO(G2)
struct stGenerateRefData_t
{
    stGenerateRefData_t();
    ~stGenerateRefData_t();
};
stGenerateRefData_t::stGenerateRefData_t() {}  // TODO(G2)
stGenerateRefData_t::~stGenerateRefData_t() {}  // TODO(G2)
struct stGenerateResult_t
{
    stGenerateResult_t();
    ~stGenerateResult_t();
};
stGenerateResult_t::stGenerateResult_t() {}  // TODO(G2)
stGenerateResult_t::~stGenerateResult_t() {}  // TODO(G2)

extern "C" bool sub_loadRDARScriptFile(const char* dir, const char* path)
    asm("_Z18loadRDARScriptFilePKcS0_");
extern "C" bool sub_ScanType(std::string& line, bool value) asm("_Z8ScanTypeRSsb");
extern "C" bool sub_ScanInt(int* out) asm("_Z7ScanIntPi");
extern "C" int sub_ScanIntBool(bool* out) asm("_Z7ScanIntPb");
extern "C" float sub_ScanFloat(float* out) asm("_Z9ScanFloatPf");
bool sub_loadRDARScriptFile(const char*, const char*) { return true; }  // TODO(G2)
bool sub_ScanType(std::string&, bool) { return false; }  // TODO(G2)
bool sub_ScanInt(int*) { return false; }  // TODO(G2)
int sub_ScanIntBool(bool*) { return 0; }  // TODO(G2)
float sub_ScanFloat(float*) { return 0.0f; }  // TODO(G2)

class Packet_DoubleCheck_UDP_Login
{
public:
    Packet_DoubleCheck_UDP_Login();
};
Packet_DoubleCheck_UDP_Login::Packet_DoubleCheck_UDP_Login() {}  // TODO(G2)
class Packet_DoubleCheck_UDP_Logout
{
public:
    Packet_DoubleCheck_UDP_Logout();
};
Packet_DoubleCheck_UDP_Logout::Packet_DoubleCheck_UDP_Logout() {}  // TODO(G2)
class Packet_Double_Check_Server_UDP_HeartBeat
{
public:
    Packet_Double_Check_Server_UDP_HeartBeat();
};
Packet_Double_Check_Server_UDP_HeartBeat::Packet_Double_Check_Server_UDP_HeartBeat()
{
}  // TODO(G2)

// CMonster::get_index()（非 const；WarField TU 引用）
int CMonster::get_index() { return 0; }  // TODO(G2)

// ============================================================================
// 全量链接桩（2026-08-17，G2/G3 生态缺符号，语义骨架，后续批次逐类替换）。
// 签名按 ORIG mangled 名逐一对齐（参数类型/const 直接决定 mangled 名）。
// 模板实例/错拼 ORIG 符号用 asm-label C 函数补（无法用 C++ 声明精确表达）。
// ============================================================================

// ---- CLog（ORIG W 0x8a9c5f0 族；真实实现后续日志域批次）----
class CLog
{
public:
    static CLog* instance();
    void logConsole(const char* fmt, ...);
    void logCritical(const char* fmt, ...);
    void logDebug(const char* fmt, ...);
    void logError(const char* fmt, ...);
    void logMoney(const char* fmt, ...);
    void logNotice(const char* fmt, ...);
};
CLog* CLog::instance()
{
    static CLog s;
    return &s;
}
void CLog::logConsole(const char*, ...) {}  // TODO(G3)
void CLog::logCritical(const char*, ...) {}  // TODO(G3)
void CLog::logDebug(const char*, ...) {}  // TODO(G3)
void CLog::logError(const char*, ...) {}  // TODO(G3)
void CLog::logMoney(const char*, ...) {}  // TODO(G3)
void CLog::logNotice(const char*, ...) {}  // TODO(G3)

class CMyFileLog
{
public:
    void operator()(const char* fmt, ...);
};
void CMyFileLog::operator()(const char*, ...) {}  // TODO(G3)

// ---- CNPCScript / NPC 角色枚举 ----
enum ENUM_NPC_ROLE
{
    ENUM_NPC_ROLE_0 = 0
};
class CNPCScript
{
public:
    bool isExistRole(ENUM_NPC_ROLE role) const;
};
bool CNPCScript::isExistRole(ENUM_NPC_ROLE) const { return false; }  // TODO(G2)

class CStatisticContainer
{
public:
    void IncreaseQuantity(int value);
};
void CStatisticContainer::IncreaseQuantity(int) {}  // TODO(G3)

class CSyncSlangFilter
{
public:
    void Filter(const std::string& str);
};
void CSyncSlangFilter::Filter(const std::string&) {}  // TODO(G3)

class CTimeGate
{
public:
    void SetTimeGate(int a, int b, int c, int d, int e);
    void setBlindTimeGateStateQuest(int questIdx);
    char m_pad[0x40];
};
void CTimeGate::SetTimeGate(int, int, int, int, int) {}  // TODO(G2)
void CTimeGate::setBlindTimeGateStateQuest(int) {}  // TODO(G2)

// ---- Secu_DungeonAverageCheck（0x8a0bb18 族，G2 安全域批次细化）----
struct MSG_MONSTER_DIE
{
    char m_pad[0x30];
};
class Secu_DungeonAverageCheck
{
public:
    Secu_DungeonAverageCheck();
    ~Secu_DungeonAverageCheck();
    void SetPartyPtr(CParty* party);
    void dungeonClear();
    void dungeonFail();
    void startDungeon();
    void setKillMonsterInfo(const MSG_MONSTER_DIE* info, map_monster* monster);
    char m_pad[0x10];
};
Secu_DungeonAverageCheck::Secu_DungeonAverageCheck() {}
Secu_DungeonAverageCheck::~Secu_DungeonAverageCheck() {}
void Secu_DungeonAverageCheck::SetPartyPtr(CParty*) {}  // TODO(G2)
void Secu_DungeonAverageCheck::dungeonClear() {}  // TODO(G2)
void Secu_DungeonAverageCheck::dungeonFail() {}  // TODO(G2)
void Secu_DungeonAverageCheck::startDungeon() {}  // TODO(G2)
void Secu_DungeonAverageCheck::setKillMonsterInfo(const MSG_MONSTER_DIE*,
                                                   map_monster*)
{
}  // TODO(G2)

// ---- 地图/传送/棋盘小结构 ----
struct stMapMonsterKillChecker_t
{
    void init();
    char m_pad[0x10];
};
void stMapMonsterKillChecker_t::init() {}  // TODO(G2)
struct stMapPlayInfo_t
{
    void init();
    char m_pad[0x10];
};
void stMapPlayInfo_t::init() {}  // TODO(G2)
class stPartyTelePort
{
public:
    void reset();
    char m_state;              // +0x00
    unsigned char m_village;   // +0x01
    unsigned char m_areaIndex; // +0x02
    char m_pad1;               // +0x03
    short m_posx;              // +0x04
    short m_posy;              // +0x06
    unsigned char m_direction; // +0x08
    char m_pad2[3];            // +0x09..0x0b
};
void stPartyTelePort::reset()
{
    m_state = 0;
    m_village = 0;
    m_areaIndex = 0;
    m_posx = 0;
    m_posy = 0;
    m_direction = 0;
}
class TileIndexInfo
{
public:
    TileIndexInfo();
    void reset();
    char m_pad[0x10];
};
TileIndexInfo::TileIndexInfo() { reset(); }
void TileIndexInfo::reset() { memset(m_pad, 0, sizeof(m_pad)); }
class BuffInfo
{
public:
    BuffInfo();
    void reset();
    char m_pad[0x10];
};
BuffInfo::BuffInfo() { reset(); }
void BuffInfo::reset() { memset(m_pad, 0, sizeof(m_pad)); }
class effect_data
{
public:
    effect_data();
    ~effect_data();
    char m_pad[0x10];
};
effect_data::effect_data() { memset(m_pad, 0, sizeof(m_pad)); }
effect_data::~effect_data() {}
class MSG_STAT_RANKRES
{
public:
    MSG_STAT_RANKRES();
    ~MSG_STAT_RANKRES();
    char m_pad[0x10];
};
MSG_STAT_RANKRES::MSG_STAT_RANKRES() { memset(m_pad, 0, sizeof(m_pad)); }
MSG_STAT_RANKRES::~MSG_STAT_RANKRES() {}
class _Quest_Authen_Data
{
public:
    _Quest_Authen_Data();
    char m_pad[0x48];
};
_Quest_Authen_Data::_Quest_Authen_Data() { memset(m_pad, 0, sizeof(m_pad)); }

// ---- stQuestTriggerState_t（UserQuest 8 字节触发状态）----
class stQuestTriggerState_t
{
public:
    stQuestTriggerState_t();
    stQuestTriggerState_t& operator=(int const& v);
    void incTirggerState(char v);
    void subTriggerState(char v);
    int getTrigger();
    short m_a;  // +0x00
    short m_b;  // +0x02
    int m_c;    // +0x04
};
stQuestTriggerState_t::stQuestTriggerState_t() : m_a(0), m_b(0), m_c(0) {}
stQuestTriggerState_t& stQuestTriggerState_t::operator=(int const& v)
{
    m_c = v;
    return *this;
}
void stQuestTriggerState_t::incTirggerState(char v) { m_c += v; }
void stQuestTriggerState_t::subTriggerState(char v) { m_c -= v; }
int stQuestTriggerState_t::getTrigger() { return m_c; }

// ---- TownAreaScript / STMapScript（Village 域，std::map 模板实例见 asm 段）----
class TownAreaScript
{
public:
    TownAreaScript();
    TownAreaScript(const TownAreaScript& other);
    TownAreaScript& operator=(const TownAreaScript& other);
    ~TownAreaScript();
    char m_pad[0x100];
};
TownAreaScript::TownAreaScript() { memset(m_pad, 0, sizeof(m_pad)); }
TownAreaScript::TownAreaScript(const TownAreaScript& other)
{
    memcpy(m_pad, other.m_pad, sizeof(m_pad));
}
TownAreaScript& TownAreaScript::operator=(const TownAreaScript& other)
{
    memcpy(m_pad, other.m_pad, sizeof(m_pad));
    return *this;
}
TownAreaScript::~TownAreaScript() {}
class STMapScript
{
public:
    STMapScript();
    ~STMapScript();
    char m_pad[0x100];
};

// ---- pvp_assault ----
namespace pvp_assault
{
class CAssaultMgr
{
public:
    void OnMoveArea(CUser* user);
    void SendPacket(CUser* user, bool flag, PacketGuard* packet);
};
void CAssaultMgr::OnMoveArea(CUser*) {}  // TODO(G3)
void CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*) {}  // TODO(G3)
CAssaultMgr* GetInstanceAssaultMgr()
{
    static CAssaultMgr s;
    return &s;
}
}

// ---- secretshop ----
namespace secretshop
{
class RETAILER
{
public:
    RETAILER();
    ~RETAILER();
    void clear();
    int GetSaleInfo(int idx);
};
class SHOPPER
{
public:
    SHOPPER();
    ~SHOPPER();
    void clear();
};
}

// ---- village_attacked / village_object ----
struct STAttackedMonster
{
    char m_pad[0x20];
};
struct MapArea
{
    char m_pad[0x10];
};
namespace village_attacked
{
class CVillageMonsterMgr
{
public:
    void OnMoveArea(CUser* user);
    void OnEvent();
    void InsertVillageMonster(int a, int b, int c, int d,
                              std::vector<STAttackedMonster>* monsters,
                              std::vector<MapArea>* areas);
};
void CVillageMonsterMgr::OnMoveArea(CUser*) {}  // TODO(G3)
void CVillageMonsterMgr::OnEvent() {}  // TODO(G3)
void CVillageMonsterMgr::InsertVillageMonster(int, int, int, int,
                                              std::vector<STAttackedMonster>*,
                                              std::vector<MapArea>*)
{
}  // TODO(G3)
}
namespace village_object
{
class IObject
{
public:
    virtual ~IObject() {}
};
struct Zone
{
    Zone(unsigned char a, unsigned char b);
    unsigned char m_a;
    unsigned char m_b;
};
Zone::Zone(unsigned char a, unsigned char b) : m_a(a), m_b(b) {}
class CVillageObjectMgr
{
public:
    void on_move_area(CUser* user);
    void register_object(Zone zone, IObject* object);
};
void CVillageObjectMgr::on_move_area(CUser*) {}  // TODO(G3)
void CVillageObjectMgr::register_object(Zone, IObject*) {}  // TODO(G3)
}

// ---- Taiwan 事件流 + CStreamGuard::GetInBuffer<Taiwan::SigStayTimeEvent> ----
namespace TaiwanInternalPack
{
struct T
{
    int m_v;
};
}
namespace Taiwan
{
class SigStayTimeEvent
{
public:
    void init();
    void set(unsigned int accId);
    char m_pad[0x20];
};
void SigStayTimeEvent::init() {}  // TODO(G3)
void SigStayTimeEvent::set(unsigned int) {}  // TODO(G3)
void internal_stream(CStreamGuard& guard, TaiwanInternalPack::T t, int uid);
}
void Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int) {}  // TODO(G3)
void* force_TaiwanSigStayTimeEvent_GetInBuffer(CStreamGuard* guard)
{
    return guard->GetInBuffer<Taiwan::SigStayTimeEvent>();
}

// ---- HeroMissionEvent / ARAD::Singleton<HeroMissionEvent> ----
namespace HeroMissionCondition
{
struct MissionNo
{
    enum T
    {
        T_0 = 0
    };
};
}
class HeroMissionEvent
{
public:
    void processMission(CUser* user, HeroMissionCondition::MissionNo::T no,
                        unsigned int param);
};
void HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T,
                                      unsigned int)
{
}  // TODO(G3)

class Packet_MiniCraneSeed
{
public:
    Packet_MiniCraneSeed();
};
Packet_MiniCraneSeed::Packet_MiniCraneSeed() {}

namespace WongWork
{
class CGMAccounts
{
public:
    static bool isGM(CGMAccounts* accounts, unsigned int characNo);
};
bool CGMAccounts::isGM(CGMAccounts*, unsigned int) { return false; }  // TODO(G3)
}

// ---- 自由函数 ----
void get_str_date(char* buf, int a, char b) {}  // TODO(G3)
void get_str_datetime(char* buf, int a) {}  // TODO(G3)
bool is_Victory_in_a_row(std::bitset<32> bits, short victory)
{
    return false;  // TODO(G3)
}
bool checkAcceptableQuest(const Quest* quest,
                          const WongWork::CQuestClear& cleared,
                          const stSelectQuestParam& param)
{
    return false;  // TODO(G3)
}

// ---- CUser 方法定义（声明在 CUser 本地类，见上；权威 CUser.h 已译，
//      本 TU 不 include 以避免重定义）----
void CUser::AddDailyItem() {}  // TODO(G1)
void CUser::DimensionInoutUpdate(bool, bool) {}  // TODO(G1)
char CUser::GetEventCreateDnfReward() { return 0; }  // TODO(G1)
void CUser::ResetDailyQuest() {}  // TODO(G1)
void CUser::ResetTrainingQuest() {}  // TODO(G1)
void CUser::SendOneADayItemShopIndex(
    const std::vector<std::pair<int, int> >&)
{
}  // TODO(G1)
void CUser::SendUpdateItem(eSendTarget, ENUM_ITEMSPACE, int) {}  // TODO(G1)
void CUser::SetPowerUp(bool) {}  // TODO(G1)
void CUser::UpdateAuraAvatarOption(int, int) {}  // TODO(G1)
void* CUser::getBlueMarble() { return 0; }  // TODO(G1)
int CUser::get_aura_avatar_option_value(int) { return 0; }  // TODO(G1)
int CUser::get_guildwar_point_per_pvpplay() { return 0; }  // TODO(G1)
int CUser::get_pvp_WinningRate_relateMission() const { return 0; }  // TODO(G1)
bool CUser::isDuplicationMessage(const std::string&) { return false; }  // TODO(G1)
char CUser::is_equip_aura_avatar(char, int&) { return 0; }  // TODO(G1)
void CUser::processDelDailyItem() {}  // TODO(G1)
void CUser::reqHumanCertify4ClearMap(bool) {}  // TODO(G1)
void CUser::setChattingMessageCount(int) {}  // TODO(G1)
void CUser::deleteSpecificItems(const std::vector<std::pair<int, int> >*)
{
}  // TODO(G1)
bool CUser::IsGameMasterMode() const { return false; }  // TODO(G1)

void cUserHistoryLog::pvpMissionClearReward(int, int, int, int) {}  // TODO(G1)

class CUserCharacInfo
{
public:
    unsigned short getPowerWarHP();
};
unsigned short CUserCharacInfo::getPowerWarHP() { return 0; }  // TODO(G1)

class GameWorld
{
public:
    bool IsCharacterPvPExpRevisionChannel() const;
};
bool GameWorld::IsCharacterPvPExpRevisionChannel() const { return false; }  // TODO(G2)

// ---- 任务域（CMission 族 / CMissionList_Charac）----
class MissionInfo
{
public:
    char m_pad[8];
};
class CMission
{
public:
    int _Reward(CUser& user) const;
};
int CMission::_Reward(CUser&) const { return 0; }  // TODO(G3)
class CMission_rank
{
public:
    bool verifyMission(const MissionInfo& info) const;
};
bool CMission_rank::verifyMission(const MissionInfo&) const { return false; }  // TODO(G3)

// ---- CDataManager / CItemShop / ServerParameterScript（CDataManager.h 权威类）----
void* CDataManager::get_dungeon(int) { return 0; }  // TODO(G2)
int CDataManager::reselectDailyTrainingQuest() { return 0; }  // TODO(G3)

// ---- asm-label 段（错拼 ORIG 符号 / 模板实例，无法用 C++ 声明精确表达）----
extern "C" void sub_LogManager_logFormat_special(int level, const char* file,
                                                 int line, const char* func, ...)
    asm("_ZN10LogManager9logFormatEiPKciS1_z");
void sub_LogManager_logFormat_special(int, const char*, int, const char*, ...)
{
}  // TODO(G3)

extern "C" int sub_CUser_GetServerGroup_nonconst(void* self)
    asm("_ZN5CUser14GetServerGroupEv");
int sub_CUser_GetServerGroup_nonconst(void*) { return 0; }  // TODO(G1)

extern "C" void* sub_CUser_getCurCharacQuestR_nonconst(void* self)
    asm("_ZN5CUser18getCurCharacQuestREv");
void* sub_CUser_getCurCharacQuestR_nonconst(void*) { return 0; }  // TODO(G1)

extern "C" char sub_AradEventPeriod_isApplied_30(void* self, int idx, int time)
    asm("_ZNK30Arad_EventPeriodDataManager9isAppliedEii");
char sub_AradEventPeriod_isApplied_30(void*, int, int) { return 0; }  // TODO(G3)

extern "C" void sub_InterSelectPcroomDailyRewar_SendPacket(void* self, void* user)
    asm("_ZN25InterSelectPcroomDailyReward10SendPacketEP5CUser");
void sub_InterSelectPcroomDailyRewar_SendPacket(void*, void*) {}  // TODO(G3)

// StaticPool<_IO_FILE, 50>（HistoryLog TU 模板实例）
extern "C" void* sub_StaticPool_FILE50_Acquire(void* self)
    asm("_ZN10StaticPoolI8_IO_FILELi50EE7AcquireEv");
extern "C" void sub_StaticPool_FILE50_Free(void* self, void* p)
    asm("_ZN10StaticPoolI8_IO_FILELi50EE4FreeEPS0_");
extern "C" void sub_StaticPool_FILE50_C1(void* self)
    asm("_ZN10StaticPoolI8_IO_FILELi50EEC1Ev");
extern "C" void sub_StaticPool_FILE50_D1(void* self)
    asm("_ZN10StaticPoolI8_IO_FILELi50EED1Ev");
void* sub_StaticPool_FILE50_Acquire(void*) { return 0; }  // TODO(G3)
void sub_StaticPool_FILE50_Free(void*, void*) {}  // TODO(G3)
void sub_StaticPool_FILE50_C1(void*) {}  // TODO(G3)
void sub_StaticPool_FILE50_D1(void*) {}  // TODO(G3)

// std::map<int, TownAreaScript>（Village TU 模板实例）
extern "C" void* sub_MapIntTownArea_begin(void* self)
    asm("_ZNSt3mapIi14TownAreaScriptSt4lessIiESaISt4pairIKiS0_EEE5beginEv");
extern "C" void* sub_MapIntTownArea_end(void* self)
    asm("_ZNSt3mapIi14TownAreaScriptSt4lessIiESaISt4pairIKiS0_EEE3endEv");
extern "C" unsigned long sub_MapIntTownArea_size(void* self)
    asm("_ZNKSt3mapIi14TownAreaScriptSt4lessIiESaISt4pairIKiS0_EEE4sizeEv");
extern "C" void* sub_RbTreeItTownArea_pp(void* self, int)
    asm("_ZNSt17_Rb_tree_iteratorISt4pairIKi14TownAreaScriptEEppEi");
extern "C" int sub_RbTreeItTownArea_ne(void* self, void* other)
    asm("_ZNKSt17_Rb_tree_iteratorISt4pairIKi14TownAreaScriptEEneERKS4_");
extern "C" void* sub_RbTreeItTownArea_arrow(void* self)
    asm("_ZNKSt17_Rb_tree_iteratorISt4pairIKi14TownAreaScriptEEptEv");
void* sub_MapIntTownArea_begin(void*) { return 0; }  // TODO(G2)
void* sub_MapIntTownArea_end(void*) { return 0; }  // TODO(G2)
unsigned long sub_MapIntTownArea_size(void*) { return 0; }  // TODO(G2)
void* sub_RbTreeItTownArea_pp(void*, int) { return 0; }  // TODO(G2)
int sub_RbTreeItTownArea_ne(void*, void*) { return 0; }  // TODO(G2)
void* sub_RbTreeItTownArea_arrow(void*) { return 0; }  // TODO(G2)

// std::map<unsigned short, stMonsterDamageLog_t>（CTraceMobDieHack TU 模板实例）
extern "C" void sub_MapUsMonsterDmg_clear(void* self)
    asm("_ZNSt3mapIt20stMonsterDamageLog_tSt4lessItESaISt4pairIKtS0_EEE5clearEv");
extern "C" void sub_MapUsMonsterDmg_insert(void* self, void* pair)
    asm("_ZNSt3mapIt20stMonsterDamageLog_tSt4lessItESaISt4pairIKtS0_EEE6insertERKS5_");
extern "C" void sub_MapUsMonsterDmg_C1(void* self)
    asm("_ZNSt3mapIt20stMonsterDamageLog_tSt4lessItESaISt4pairIKtS0_EEEC1Ev");
extern "C" void sub_MapUsMonsterDmg_D1(void* self)
    asm("_ZNSt3mapIt20stMonsterDamageLog_tSt4lessItESaISt4pairIKtS0_EEED1Ev");
extern "C" void* sub_MapUsMonsterDmg_ix(void* self, void* key)
    asm("_ZNSt3mapIt20stMonsterDamageLog_tSt4lessItESaISt4pairIKtS0_EEEixERS4_");
void sub_MapUsMonsterDmg_clear(void*) {}  // TODO(G3)
void sub_MapUsMonsterDmg_insert(void*, void*) {}  // TODO(G3)
void sub_MapUsMonsterDmg_C1(void*) {}  // TODO(G3)
void sub_MapUsMonsterDmg_D1(void*) {}  // TODO(G3)
void* sub_MapUsMonsterDmg_ix(void*, void*) { return 0; }  // TODO(G3)

// std::vector<stHackLog_t> / __gnu_cxx 迭代器 / std::find / std::min
extern "C" void* sub_VecHackLog_begin(void* self)
    asm("_ZNSt6vectorI11stHackLog_tSaIS0_EE5beginEv");
extern "C" void* sub_VecHackLog_end(void* self)
    asm("_ZNSt6vectorI11stHackLog_tSaIS0_EE3endEv");
extern "C" void sub_VecHackLog_clear(void* self)
    asm("_ZNSt6vectorI11stHackLog_tSaIS0_EE5clearEv");
extern "C" void sub_VecHackLog_push_back(void* self, void* item)
    asm("_ZNSt6vectorI11stHackLog_tSaIS0_EE9push_backERKS0_");
extern "C" void sub_VecHackLog_C1(void* self)
    asm("_ZNSt6vectorI11stHackLog_tSaIS0_EEC1Ev");
extern "C" void sub_VecHackLog_D1(void* self)
    asm("_ZNSt6vectorI11stHackLog_tSaIS0_EED1Ev");
extern "C" void* sub_NormIterHackLog_arrow(void* self)
    asm("_ZNK9__gnu_cxx17__normal_iteratorIP11stHackLog_tSt6vectorIS1_SaIS1_EEEptEv");
extern "C" int sub_gnu_eq_normiter(void* a, void* b)
    asm("_ZN9__gnu_cxxeqIP11stHackLog_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_");
extern "C" void* sub_std_find_hacklog(void* first, void* last, void* value)
    asm("_ZSt4findIN9__gnu_cxx17__normal_iteratorIP11stHackLog_tSt6vectorIS2_SaIS2_EEEES2_ET_S8_S8_RKT0_");
extern "C" void* sub_std_min_float(void* a, void* b)
    asm("_ZSt3minIfERKT_S2_S2_");
void* sub_VecHackLog_begin(void*) { return 0; }  // TODO(G3)
void* sub_VecHackLog_end(void*) { return 0; }  // TODO(G3)
void sub_VecHackLog_clear(void*) {}  // TODO(G3)
void sub_VecHackLog_push_back(void*, void*) {}  // TODO(G3)
void sub_VecHackLog_C1(void*) {}  // TODO(G3)
void sub_VecHackLog_D1(void*) {}  // TODO(G3)
void* sub_NormIterHackLog_arrow(void*) { return 0; }  // TODO(G3)
int sub_gnu_eq_normiter(void*, void*) { return 0; }  // TODO(G3)
void* sub_std_find_hacklog(void*, void*, void*) { return 0; }  // TODO(G3)
void* sub_std_min_float(void*, void*) { return 0; }  // TODO(G3)

// ---- ORIG 错拼长度前缀符号（编译器无法用 C++ 声明精确生成，asm 直补）----
extern "C" void* sub_ARAD_Singleton_HeroMissionEvent_Get_typo(void)
    asm("_ZN4ARAD9SingletonI15HeroMissionEventE3GetEv");
extern "C" void sub_HeroMissionEvent_processMission_typo(void* self, void* user,
                                                        int mission, int param)
    asm("_ZN15HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj");
extern "C" void sub_CTitleBook_sendListOtherUser_typo(void* self, void* user,
                                                     int type)
    asm("_ZN10CTitleBook18sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE");
extern "C" char sub_CGM_Manager_IsGm_typo(void* self, unsigned int accId)
    asm("_ZN11CGM_Manager5IsGmEj");
extern "C" void sub_CMonitorServerProxy_SendTcpPacket_typo(void* self, char* data,
                                                          int len)
    asm("_ZN19CMonitorServerProxy14SendTcpPacketEPci");
extern "C" void sub_Packet_MiniCraneSeed_C1_typo(void* self)
    asm("_ZN21Packet_MiniCraneSeedC1Ev");
extern "C" int sub_ServerParameterScript_GetPaneltyDupMessage_typo(void* self)
    asm("_ZN23ServerParameterScript20GetPaneltyDupMessageEv");
extern "C" int sub_ServerParameterScript_GetCleanChattingCount_typo(void* self,
                                                                   int level)
    asm("_ZN23ServerParameterScript21GetCleanChattingCountEi");
extern "C" int sub_ServerParameterScript_GetMaxCleanChattingCount_typo(void* self)
    asm("_ZN23ServerParameterScript25GetMaxCleanChattingCountEv");
extern "C" void sub_CUser_deleteSpecificItems_typo(void* self, void* list)
    asm("_ZN5CUser18deleteSpecificItemsEPKSt6vectorISt4pairIiiESaIS2_EE");
extern "C" void sub_UserQuest_get_quest_info_typo(void* self, char* buf)
    asm("_ZN8UserQuest14get_quest_infoEPc");
extern "C" char sub_WongWork_CGMAccounts_isGM_typo(void* self, unsigned int no)
    asm("_ZN8WongWork10CGMAccounts5isGMEPS0_j");
extern "C" void sub_CItemShop_updateOneADayItemList_typo(void* self)
    asm("_ZN9CItemShop22updateOneADayItemListEv");
extern "C" void* sub_CItemShop_GetOneADayItemList_typo(void* self)
    asm("_ZNK9CItemShop19GetOneADayItemListEv");
void* sub_ARAD_Singleton_HeroMissionEvent_Get_typo(void) { return 0; }  // TODO(G3)
void sub_HeroMissionEvent_processMission_typo(void*, void*, int, int) {}  // TODO(G3)
void sub_CTitleBook_sendListOtherUser_typo(void*, void*, int) {}  // TODO(G3)
char sub_CGM_Manager_IsGm_typo(void*, unsigned int) { return 0; }  // TODO(G3)
void sub_CMonitorServerProxy_SendTcpPacket_typo(void*, char*, int) {}  // TODO(G3)
void sub_Packet_MiniCraneSeed_C1_typo(void*) {}  // TODO(G3)
int sub_ServerParameterScript_GetPaneltyDupMessage_typo(void*) { return 0; }  // TODO(G3)
int sub_ServerParameterScript_GetCleanChattingCount_typo(void*, int) { return 0; }  // TODO(G3)
int sub_ServerParameterScript_GetMaxCleanChattingCount_typo(void*) { return 0; }  // TODO(G3)
void sub_CUser_deleteSpecificItems_typo(void*, void*) {}  // TODO(G1)
void sub_UserQuest_get_quest_info_typo(void*, char*) {}  // TODO(G3)
char sub_WongWork_CGMAccounts_isGM_typo(void*, unsigned int) { return 0; }  // TODO(G3)
void sub_CItemShop_updateOneADayItemList_typo(void*) {}  // TODO(G3)
void* sub_CItemShop_GetOneADayItemList_typo(void*) { return 0; }  // TODO(G3)
