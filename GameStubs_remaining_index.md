# GameStubs_remaining.cpp 只读函数索引

> 生成方式：源码扫描 + 已构建目标对象的定义符号交叉核对；未修改任何源码。函数行号以当前文件为准。

## 范围与目标 TU
- 源文件：`dnf_decompile/source/DNFServer/GameServer/Game/GameStubs_remaining.cpp`（2995 行）
- 目标：`game`（CMake target）
- 目标对象：`dnf_decompile/build/game/CMakeFiles/game.dir/home/wangyilei/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Game/GameStubs_remaining.cpp.o`
- 归属 TU：`GameStubs_remaining.cpp` 独立编译单元；构建依赖由对应 `.o.d`/`DependInfo.cmake` 给出。

## 统计
- 类/结构声明：65 个（含嵌套/本地声明，见下表）。
- 源码函数定义候选：302 个；构造/析构、模板实例与局部辅助实现均保留。
- 显式本地头文件依赖：39 个。

## 类与结构声明
- L87: `struct AdvanceAltarSummonObject`
- L104: `struct AdvanceAltarAction`
- L117: `struct AdvanceAltarActionDefine`
- L124: `struct StageTimeLineParameterLayout`
- L370: `class CMTRand`
- L406: `class STScriptFileList`
- L420: `class DB_CreateAccountCargo`
- L437: `class DB_UpgradeAccountCargo`
- L454: `class DB_DeleteAccountCargo`
- L471: `class DB_UpdateAuraAvatarOption`
- L477: `class RestrictCategory`
- L485: `class InterfaceServicePolicy`
- L496: `class ServiceRestrictManager`
- L806: `struct STClearedQuest`
- L810: `class CQuestClear`
- L831: `class STSkillScript`
- L832: `class STDungeonScript`
- L833: `class STMonsterScript`
- L880: `class Area`
- L883: `struct CGMRecord`
- L892: `class rwLock`
- L900: `class readGuard`
- L910: `class writeGuard`
- L919: `class CGM_Manager`
- L1052: `struct CTimeGateStateView`
- L1219: `class CHandlePremium`
- L1268: `struct PremiumInfoRecord`
- L1374: `struct tm`
- L1524: `class ServiceRestrictManager`
- L1740: `class CRandomValue`
- L1756: `class CDescending`
- L1764: `struct stGenerateRefData_t`
- L1799: `struct stGenerateResult_t`
- L1811: `class Packet_DoubleCheck_UDP_Logout`
- L1816: `class Packet_Double_Check_Server_UDP_HeartBeat`
- L1830: `class CLog`
- L1892: `class CNPCScript`
- L1925: `class CSyncSlangFilter`
- L1932: `class CTimeGate`
- L1972: `struct MSG_MONSTER_DIE`
- L1977: `struct SecKillMonsterInfo`
- L1986: `class Secu_DungeonAverageCheck`
- L2096: `class stPartyTelePort`
- L2175: `class effect_data`
- L2201: `class CAssaultMgr`
- L2219: `class RETAILER`
- L2227: `class SHOPPER`
- L2237: `struct STAttackedMonster`
- L2244: `class CVillageMonsterMgr`
- L2263: `class IObject`
- L2268: `struct Zone`
- L2275: `class CVillageObjectMgr`
- L2295: `class SigStayTimeEvent`
- L2319: `struct MissionNo`
- L2327: `class HeroMissionEvent`
- L2334: `class Packet_MiniCraneSeed`
- L2347: `struct tm`
- L2363: `struct tm`
- L2540: `struct AradEventPeriodDataView`
- L2546: `struct AradEventPeriodManagerView`
- L2570: `struct StaticPool_FILE50_Node`
- L2577: `struct StaticPool_FILE50`
- L2641: `struct stMonsterDamageLog_t`
- L2672: `struct stHackLog_t`
- L2933: `class CEventTable`

## 全函数清单（源码定义位置）
| 行 | 函数定义签名 | 已有定义/实现状态 | 直接依赖线索 |
|---:|---|---|---|
| 56 | `bool APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(int index)` | 已有定义；空体/TODO占位 | — |
| 60 | `stCharacLinkSystem_t::stCharacLinkSystem_t()` | 已有定义；空体/TODO占位 | — |
| 64 | `stCharacLinkSystem_t::~stCharacLinkSystem_t()` | 已有定义；空体/TODO占位 | — |
| 65 | `advancealtar::StageTimeLineParameter::StageTimeLineParameter()` | 已有定义；空体/TODO占位 | — |
| 69 | `advancealtar::StageTimeLineParameter::~StageTimeLineParameter()` | 已有定义；空体/TODO占位 | CDataManager, loadRDARScriptFile |
| 100 | `AdvanceAltarSummonObject()` | 已有定义；有函数体 | — |
| 111 | `AdvanceAltarAction() : summonId(0), firstDelayMs(0), nextDelayMs(0), isRepeat(0), repeatCount(0)` | 已有定义；空体/TODO占位 | — |
| 121 | `AdvanceAltarActionDefine() : type(0)` | 已有定义；空体/TODO占位 | — |
| 132 | `void advancealtar::StageTimeLineParameter::reset()` | 已有定义；有函数体 | — |
| 141 | `int advancealtar::StageTimeLineParameter::importStageTimeLineParameter(const char* path)` | 已有定义；有函数体 | loadRDARScriptFile |
| 169 | `int advancealtar::StageTimeLineParameter::importSummonObject()` | 已有定义；有函数体 | — |
| 218 | `int advancealtar::StageTimeLineParameter::importActionDefine()` | 已有定义；有函数体 | — |
| 284 | `void advancealtar::StageTimeLineParameter::debugLog()` | 已有定义；空体/TODO占位 | — |
| 286 | `advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()` | 已有定义；空体/TODO占位 | — |
| 290 | `advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter()` | 已有定义；空体/TODO占位 | — |
| 292 | `std::vector<advancealtar::BuyUpgradeData>* advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int itemId, int type)` | 已有定义；有函数体 | — |
| 301 | `advancealtar::RewardParameter::RewardParameter()` | 已有定义；空体/TODO占位 | — |
| 305 | `advancealtar::RewardParameter::~RewardParameter()` | 已有定义；空体/TODO占位 | — |
| 306 | `advancealtar::ConfigParameter::ConfigParameter()` | 已有定义；空体/TODO占位 | — |
| 310 | `advancealtar::ConfigParameter::~ConfigParameter()` | 已有定义；空体/TODO占位 | — |
| 311 | `stQuestShop::stQuestShop()` | 已有定义；空体/TODO占位 | — |
| 312 | `stQuestShop::~stQuestShop()` | 已有定义；空体/TODO占位 | — |
| 313 | `WorldDropInfo::WorldDropInfo()` | 已有定义；空体/TODO占位 | — |
| 314 | `WorldDropInfo::~WorldDropInfo()` | 已有定义；空体/TODO占位 | — |
| 315 | `SlangNameData::SlangNameData()` | 已有定义；空体/TODO占位 | — |
| 316 | `SlangNameData::~SlangNameData()` | 已有定义；空体/TODO占位 | — |
| 317 | `InvalidCharData::InvalidCharData()` | 已有定义；空体/TODO占位 | — |
| 318 | `InvalidCharData::~InvalidCharData()` | 已有定义；空体/TODO占位 | — |
| 319 | `STGrowthPowerData::STGrowthPowerData()` | 已有定义；空体/TODO占位 | — |
| 320 | `STGrowthPowerData::~STGrowthPowerData()` | 已有定义；空体/TODO占位 | — |
| 321 | `AvatarVariation::AvatarColorInfo::AvatarColorInfo()` | 已有定义；空体/TODO占位 | — |
| 325 | `AvatarVariation::AvatarColorInfo::~AvatarColorInfo()` | 已有定义；空体/TODO占位 | — |
| 326 | `BoosterGageData::BoosterGageData()` | 已有定义；空体/TODO占位 | — |
| 327 | `BoosterGageData::~BoosterGageData()` | 已有定义；空体/TODO占位 | — |
| 331 | `stTitleBookInfo::stTitleBookInfo()` | 已有定义；空体/TODO占位 | — |
| 332 | `stTitleBookInfo::~stTitleBookInfo()` | 已有定义；空体/TODO占位 | — |
| 334 | `void* AccountCargoScript::GetCreateInfo()` | 已有定义；有函数体 | — |
| 342 | `void* AccountCargoScript::GetCurrUpgradeInfo(int idx)` | 已有定义；有函数体 | — |
| 350 | `void* AccountCargoScript::GetNextUpgradeInfo(int idx)` | 已有定义；有函数体 | — |
| 362 | `int ScanType(std::string& s, bool& flag)` | 已有定义；空体/TODO占位 | CUser, ScanInt, ScanType |
| 363 | `int ScanInt(bool& flag)` | 已有定义；空体/TODO占位 | CUser, ScanInt |
| 364 | `void DB_LoadCerashopAddRestrictType_makeRequest(CUser*)` | 已有定义；空体/TODO占位 | CUser |
| 365 | `void DB_SaveCerashopAddRestrictType_makeRequest(CUser*, DBInputData*)` | 已有定义；空体/TODO占位 | CUser |
| 377 | `CMTRand::CMTRand(const unsigned long& seed)` | 已有定义；空体/TODO占位 | — |
| 379 | `int CMTRand::randInt(const unsigned long& range)` | 已有定义；有函数体 | — |
| 411 | `int STScriptFileList::FindIndexByFullScan(const char*) const` | 已有定义；空体/TODO占位 | — |
| 412 | `void importItemShopScript(ItemShopScript* script, const char* path)` | 已有定义；空体/TODO占位 | — |
| 413 | `void loadRDARScriptListFile(STScriptFileList* list, const char* a, const char* b, std::map<int, int>* map)` | 已有定义；空体/TODO占位 | — |
| 418 | `void SetLightServerFlag(bool flag)` | 已有定义；有函数体 | — |
| 425 | `void DB_CreateAccountCargo::makeRequest(int a, unsigned int b, unsigned int c)` | 已有定义；有函数体 | CStreamGuard, StreamPool, MsgQueueMgr |
| 442 | `void DB_UpgradeAccountCargo::makeRequest(int a, unsigned int b, unsigned int c)` | 已有定义；有函数体 | CStreamGuard, StreamPool, MsgQueueMgr |
| 459 | `void DB_DeleteAccountCargo::makeRequest(int a, unsigned int b)` | 已有定义；有函数体 | CStreamGuard, StreamPool, MsgQueueMgr |
| 488 | `virtual ~InterfaceServicePolicy()` | 已有定义；空体/TODO占位 | — |
| 489 | `virtual void vfunc1()` | 已有定义；空体/TODO占位 | — |
| 490 | `virtual void beginPolicy(const std::string&)` | 已有定义；空体/TODO占位 | — |
| 491 | `virtual void vfunc3()` | 已有定义；空体/TODO占位 | — |
| 492 | `virtual void vfunc4()` | 已有定义；空体/TODO占位 | — |
| 493 | `virtual bool isRestricted(int v, RestrictCategory::Enum category)` | 已有定义；有函数体 | — |
| 506 | `bool ServiceRestrictManager::isRestricted(RestrictCategory::Enum category, int v)` | 已有定义；有函数体 | CUser |
| 513 | `bool ServiceRestrictManager::isRestricted(CUser* user, RestrictCategory::Enum category, int v)` | 已有定义；有函数体 | CUser |
| 525 | `int PvPSkillTreeParameterScript::getPvPSkillPoint( int job, int firstGrow, int secondGrow, int grade, bool flag) const` | 已有定义；有函数体 | — |
| 558 | `bool PvPSkillTreeParameterScript::getPvPSkillTree( int job, int firstGrow, int secondGrow, int grade, bool flag, std::vector<std::pair<int, int> >& out) const` | 已有定义；有函数体 | — |
| 573 | `void PvPSkillTreeParameterScript::getGiveSkill( int job, int firstGrow, int, std::vector<std::pair<int, int> >& out) const` | 已有定义；有函数体 | — |
| 581 | `int PvPSkillTreeParameterScript::importPairPvPSkillPointScript(const char* path)` | 已有定义；有函数体 | loadRDARScriptFile |
| 628 | `int PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript(const char* path)` | 已有定义；有函数体 | loadRDARScriptFile, ScanType |
| 676 | `int PvPSkillTreeParameterScript::load_pvp_skill_tree_list()` | 已有定义；有函数体 | — |
| 688 | `stMercenarySystemInfo::stMercenarySystemInfo()` | 已有定义；空体/TODO占位 | — |
| 692 | `stMercenarySystemInfo::~stMercenarySystemInfo()` | 已有定义；空体/TODO占位 | — |
| 694 | `pvp_channel_info_t::pvp_channel_info_t()` | 已有定义；空体/TODO占位 | — |
| 701 | `stItemMakingSkill::stItemMakingSkill()` | 已有定义；空体/TODO占位 | — |
| 702 | `stItemMakingSkill::~stItemMakingSkill()` | 已有定义；空体/TODO占位 | — |
| 703 | `ChoiceItemInfo::ChoiceItemInfo()` | 已有定义；空体/TODO占位 | — |
| 707 | `ImageCommunicationData::ImageCommunicationData()` | 已有定义；空体/TODO占位 | — |
| 711 | `ARAD::SCRIPT::AradJumping_Script::AradJumping_Script()` | 已有定义；空体/TODO占位 | — |
| 715 | `ARAD::SCRIPT::AradJumping_Script::~AradJumping_Script()` | 已有定义；空体/TODO占位 | — |
| 716 | `live_server_info_t::live_server_info_t()` | 已有定义；空体/TODO占位 | — |
| 717 | `live_server_info_t::~live_server_info_t()` | 已有定义；空体/TODO占位 | — |
| 718 | `EventEtcScript::EventEtcScript()` | 已有定义；空体/TODO占位 | — |
| 719 | `EventEtcScript::~EventEtcScript()` | 已有定义；空体/TODO占位 | — |
| 720 | `stReturnUserRewardScript::stReturnUserRewardScript()` | 已有定义；空体/TODO占位 | — |
| 721 | `stReturnUserRewardScript::~stReturnUserRewardScript()` | 已有定义；空体/TODO占位 | — |
| 722 | `DeleteInvalidItemScript::DeleteInvalidItemScript()` | 已有定义；有函数体 | — |
| 727 | `DeleteInvalidItemScript::~DeleteInvalidItemScript()` | 已有定义；有函数体 | — |
| 732 | `void DeleteInvalidItemScript::clearScript()` | 已有定义；空体/TODO占位 | — |
| 739 | `DeleteInvalidItemScript::DeleteInvalidItemData::DeleteInvalidItemData() : m_itemId(0), m_rewardItemId(0), m_count(0)` | 已有定义；空体/TODO占位 | — |
| 742 | `void DeleteInvalidItemScript::DeleteInvalidItemData::init()` | 已有定义；有函数体 | loadRDARScriptFile, ScanInt, ScanType |
| 754 | `int DeleteInvalidItemScript::loadScript()` | 已有定义；有函数体 | loadRDARScriptFile, ScanType |
| 789 | `stBingoScript::stBingoScript()` | 已有定义；空体/TODO占位 | — |
| 790 | `stBingoScript::~stBingoScript()` | 已有定义；空体/TODO占位 | — |
| 792 | `stNewAccountLevelUpToJobScript::stNewAccountLevelUpToJobScript()` | 已有定义；空体/TODO占位 | CUser |
| 796 | `stNewAccountLevelUpToJobScript::~stNewAccountLevelUpToJobScript()` | 已有定义；空体/TODO占位 | CUser |
| 800 | `stSelectQuestParam::stSelectQuestParam(CUser* user)` | 已有定义；空体/TODO占位 | CUser |
| 839 | `bool WongWork::CQuestClear::isClearedQuest(unsigned int questIdx) const` | 已有定义；空体/TODO占位 | — |
| 844 | `WongWork::CQuestClear::CQuestClear()` | 已有定义；空体/TODO占位 | — |
| 845 | `WongWork::CQuestClear::~CQuestClear()` | 已有定义；空体/TODO占位 | — |
| 846 | `void WongWork::CQuestClear::clear()` | 已有定义；有函数体 | — |
| 847 | `void* WongWork::CQuestClear::getClearedQuest() const` | 已有定义；有函数体 | — |
| 851 | `void WongWork::CQuestClear::resetClearedQuests(unsigned int questIdx)` | 已有定义；有函数体 | — |
| 857 | `void WongWork::CQuestClear::setClearedQuest(const STClearedQuest* quest)` | 已有定义；有函数体 | — |
| 861 | `bool WongWork::CQuestClear::syncScript()` | 已有定义；空体/TODO占位 | — |
| 862 | `bool WongWork::CQuestClear::checkSaveFlag() const` | 已有定义；空体/TODO占位 | — |
| 863 | `void WongWork::CQuestClear::setClearedQuest(unsigned int questIdx)` | 已有定义；空体/TODO占位 | — |
| 869 | `void CDailyScheduleManager::AddDailSchedule(const std::vector<int>&)` | 已有定义；空体/TODO占位 | CUser, CParty, CDungeon |
| 870 | `int CDailyScheduleManager::GetScheduleState(_DailyScheduleType, unsigned int) const` | 已有定义；空体/TODO占位 | CUser, CParty, CDungeon, GameWorld |
| 871 | `QuickParty::CQuickPartySystemManager::CQuickPartySystemManager()` | 已有定义；空体/TODO占位 | CUser, CParty, CDungeon, GameWorld |
| 872 | `QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager()` | 已有定义；空体/TODO占位 | CUser, CParty, CDungeon, GameWorld |
| 873 | `void QuickParty::CQuickPartySystemManager::init_quick_party_pool(const CDungeon*)` | 已有定义；空体/TODO占位 | CUser, CParty, CDungeon, GameWorld |
| 874 | `void QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)` | 已有定义；空体/TODO占位 | CUser, CParty, GameWorld |
| 888 | `CGMRecord() : m_mode(0), m_level(0)` | 已有定义；空体/TODO占位 | — |
| 895 | `rwLock()` | 已有定义；空体/TODO占位 | — |
| 896 | `~rwLock()` | 已有定义；空体/TODO占位 | — |
| 903 | `readGuard(T* lock) : m_lock(lock)` | 已有定义；空体/TODO占位 | — |
| 904 | `~readGuard()` | 已有定义；空体/TODO占位 | — |
| 913 | `writeGuard(T* lock) : m_lock(lock)` | 已有定义；空体/TODO占位 | — |
| 914 | `~writeGuard()` | 已有定义；空体/TODO占位 | — |
| 941 | `char CGM_Manager::GetCurrentGmMode(unsigned int accId)` | 已有定义；有函数体 | — |
| 950 | `int CGM_Manager::GetGmLevel(unsigned int accId)` | 已有定义；有函数体 | — |
| 959 | `bool CGM_Manager::IsGm(unsigned int accId)` | 已有定义；有函数体 | — |
| 965 | `void CGM_Manager::SetGmLevel(unsigned int accId, int level)` | 已有定义；有函数体 | — |
| 975 | `char CGM_Manager::TurnGmMode(unsigned int accId)` | 已有定义；有函数体 | — |
| 988 | `char CGM_Manager::LoadGmListFromDb()` | 已有定义；有函数体 | — |
| 1018 | `unsigned int CGM_Manager::LoadGmDataFromDb(unsigned int accId)` | 已有定义；有函数体 | — |
| 1059 | `char sub_CTimeGate_isOpen(void* self)` | 已有定义；空体/TODO占位 | — |
| 1065 | `unsigned int sub_CHackLog_InvalidAreaMove_GetHackType()` | 已有定义；空体/TODO占位 | — |
| 1066 | `char sub_CHackLog_InvalidAreaMove_IsInvalidMovableArea(int, int, int, int)` | 已有定义；空体/TODO占位 | — |
| 1067 | `char sub_CHackLog_InvalidAreaMove_isMovableRoute(int a1, int a2, int a3, int a4, int a5, int a6)` | 已有定义；有函数体 | — |
| 1090 | `void sub_WongWork_CHackAnalyzer_addServerHackCnt(void*, void*, unsigned int, int, int, int)` | 已有定义；空体/TODO占位 | — |
| 1091 | `void sub_XNuclear_CHades_Send_ReturnToVillage(void*)` | 已有定义；空体/TODO占位 | — |
| 1092 | `bool sub_Is_restrictive_commercial_transaction_zone(int x1, int y1, int x2, int y2)` | 已有定义；有函数体 | — |
| 1104 | `void CDataManager::GetPvPChannelGrade()` | 已有定义；有函数体 | CDataManager, GameWorld |
| 1126 | `int CDataManager::GetPvPChannelType()` | 已有定义；有函数体 | CDataManager |
| 1127 | `const std::vector<stResetItemInfo::ResetItem>* CDataManager::GetResetItemInfo() const` | 已有定义；有函数体 | CDataManager |
| 1172 | `void sub_DB_AvatarChangeOwner_makeRequest(unsigned int a, unsigned int b, unsigned int c, unsigned char d)` | 已有定义；有函数体 | CStreamGuard, StreamPool, MsgQueueMgr |
| 1188 | `void sub_TimerDetectDisconnect_registNextTimer()` | 已有定义；有函数体 | CDataManager, CItem |
| 1192 | `void* sub_CDataManager_getItemGenerator(void* self)` | 已有定义；有函数体 | CDataManager, CItem |
| 1196 | `void* sub_CItemGeneratorMgr_getGenerator(void* self, int type)` | 已有定义；有函数体 | CItem |
| 1200 | `int sub_CEquipItem_getAvatarPeriod(const void* self, unsigned char a)` | 已有定义；有函数体 | — |
| 1212 | `void* sub_CDungeon_getDropItems(const void* self)` | 已有定义；有函数体 | CDungeon |
| 1231 | `void CHandlePremium::handleSetUserPremium(CUser* user, ENUM_PREMIUM_TYPE type, long start, long end, int flag, bool bFlag)` | 已有定义；有函数体 | CUser |
| 1257 | `void CHandlePremium::handleNotifyPremiumInfo(CUser* user, int type, int time)` | 已有定义；有函数体 | CUser, PacketGuard |
| 1279 | `static const PremiumInfoRecord* GetPremiumInfoRecord(int type)` | 已有定义；有函数体 | CUser |
| 1284 | `void CHandlePremium::handlePremiumEffect(CUser* user, ENUM_PREMIUM_TYPE type)` | 已有定义；有函数体 | CUser |
| 1400 | `void CHandlePremium::handlePremiumTimeout(CUser* user)` | 已有定义；有函数体 | CUser |
| 1440 | `void CHandlePremium::handleRemoveOneDayLethePremium(CUser* user)` | 已有定义；有函数体 | CUser |
| 1451 | `void CHandlePremium::handleReturn2CharacView(CUser* user)` | 已有定义；有函数体 | CUser |
| 1465 | `void sub_CHandlePremium_handleSetUserPCRoom(void* self, void* userPtr, long start, long end)` | 已有定义；有函数体 | CUser |
| 1525 | `void* sub_ARAD_Singleton_ServiceRestrictManager_Get()` | 已有定义；有函数体 | CUser |
| 1529 | `bool sub_CUser_master_new_skills(void* self, void* skills, int kind)` | 已有定义；有函数体 | CUser |
| 1652 | `CSkillChanger::CSkillChanger()` | 已有定义；空体/TODO占位 | CUser |
| 1653 | `CSkillChanger::~CSkillChanger()` | 已有定义；空体/TODO占位 | CUser |
| 1654 | `void CSkillChanger::_ResetSkillPoint(CUser* user, int kind)` | 已有定义；有函数体 | CUser |
| 1670 | `void CSkillChanger::_ResetSFPoint(CUser* user, int kind)` | 已有定义；有函数体 | CUser |
| 1679 | `int CSkillChanger::_GetUserItemCount(const CUser* user)` | 已有定义；有函数体 | CUser, CInventory |
| 1697 | `void CSkillChanger::_ApplyUserData(CUser* user, int kind)` | 已有定义；空体/TODO占位 | CUser |
| 1701 | `void CSkillChanger::_CountSkillBook(const Inven_Item& item)` | 已有定义；有函数体 | — |
| 1716 | `void CSkillChanger::SkillInitialize(CUser* user, int kind, bool flag)` | 已有定义；有函数体 | CUser |
| 1749 | `CRandomValue::CRandomValue(std::vector<int>& list, int a, int b, int) : m_list(&list), m_min(a), m_max(b)` | 已有定义；空体/TODO占位 | — |
| 1788 | `stGenerateRefData_t::stGenerateRefData_t() : m_dropRate(100), m_field04(0), m_field1c(1.0f), m_premiumDropRate(0), m_field24(0), m_field25(0), m_field28(11), m_field2c(0), m_field30(0), m_field34(0), m_field35(0), m_field36(0), m_field37(0), m_field38(0), m_field3c(0), m_flag40(0), m_field41(0)` | 已有定义；有函数体 | — |
| 1798 | `stGenerateRefData_t::~stGenerateRefData_t()` | 已有定义；空体/TODO占位 | — |
| 1806 | `stGenerateResult_t::stGenerateResult_t()` | 已有定义；空体/TODO占位 | — |
| 1810 | `stGenerateResult_t::~stGenerateResult_t()` | 已有定义；空体/TODO占位 | — |
| 1841 | `CLog* CLog::instance()` | 已有定义；有函数体 | CLog |
| 1846 | `void CLog::logConsole(const char* fmt, ...)` | 已有定义；有函数体 | CLog |
| 1853 | `void CLog::logCritical(const char* fmt, ...)` | 已有定义；有函数体 | CLog |
| 1860 | `int CLog::logDebug(const char* fmt, ...)` | 已有定义；有函数体 | CLog |
| 1865 | `void CLog::logError(const char* fmt, ...)` | 已有定义；有函数体 | CLog |
| 1872 | `void CLog::logMoney(const char* fmt, ...)` | 已有定义；有函数体 | CLog |
| 1878 | `void CLog::logNotice(const char* fmt, ...)` | 已有定义；有函数体 | CLog |
| 1899 | `bool CNPCScript::isExistRole(ENUM_NPC_ROLE role) const` | 已有定义；有函数体 | — |
| 1903 | `void CStatisticContainer::IncreaseQuantity(int quantity)` | 已有定义；有函数体 | — |
| 1908 | `void CHelpedPartyCount::InsertDatabase()` | 已有定义；有函数体 | CStreamGuard |
| 1930 | `void CSyncSlangFilter::Filter(const std::string&)` | 已有定义；空体/TODO占位 | — |
| 1937 | `void SetLevel(int level)` | 已有定义；有函数体 | — |
| 1938 | `char isOpen() const` | 已有定义；有函数体 | — |
| 1939 | `int getNpcIndex() const` | 已有定义；有函数体 | — |
| 1940 | `int getQuestIndex() const` | 已有定义；有函数体 | — |
| 1941 | `int getOpenedQuestIndex() const` | 已有定义；有函数体 | — |
| 1950 | `void CTimeGate::SetTimeGate(int a, int b, int c, int d, int e)` | 已有定义；有函数体 | — |
| 1958 | `bool CTimeGate::setBlindTimeGateStateQuest(int questIdx)` | 已有定义；有函数体 | — |
| 2001 | `Secu_DungeonAverageCheck::Secu_DungeonAverageCheck()` | 已有定义；空体/TODO占位 | CParty |
| 2002 | `Secu_DungeonAverageCheck::~Secu_DungeonAverageCheck()` | 已有定义；空体/TODO占位 | CParty |
| 2003 | `void Secu_DungeonAverageCheck::reset()` | 已有定义；有函数体 | CParty |
| 2004 | `void Secu_DungeonAverageCheck::SetPartyPtr(CParty* party)` | 已有定义；有函数体 | CParty |
| 2009 | `void Secu_DungeonAverageCheck::CheckHackTypeEndDungeon()` | 已有定义；有函数体 | — |
| 2060 | `void Secu_DungeonAverageCheck::dungeonClear()` | 已有定义；有函数体 | — |
| 2065 | `void Secu_DungeonAverageCheck::dungeonFail()` | 已有定义；有函数体 | — |
| 2070 | `void Secu_DungeonAverageCheck::startDungeon()` | 已有定义；有函数体 | — |
| 2071 | `void Secu_DungeonAverageCheck::setKillMonsterInfo(const MSG_MONSTER_DIE* info, map_monster* monster)` | 已有定义；有函数体 | — |
| 2109 | `void stPartyTelePort::reset()` | 已有定义；有函数体 | — |
| 2117 | `template <> cElection<int, 8, 8>::cElection()` | 已有定义；有函数体 | — |
| 2122 | `template <> int cElection<int, 8, 8>::GetElected() const` | 已有定义；有函数体 | — |
| 2129 | `template <> void cElection<int, 8, 8>::Vote(int voter, int candidate)` | 已有定义；有函数体 | — |
| 2134 | `template <> void cElection<int, 8, 8>::CancelVoter(int voter)` | 已有定义；有函数体 | — |
| 2138 | `template <> void cElection<int, 8, 8>::CancelCandidate(int candidate)` | 已有定义；有函数体 | — |
| 2148 | `CMatchingSystem::CMatchingSystem()` | 已有定义；空体/TODO占位 | — |
| 2149 | `CMatchingSystem::~CMatchingSystem()` | 已有定义；空体/TODO占位 | — |
| 2150 | `void* CMatchingSystem::GetMatchingSystem(ENUM_PVP_MATCHING_TYPE)` | 已有定义；空体/TODO占位 | — |
| 2153 | `map_monster::map_monster()` | 已有定义；空体/TODO占位 | — |
| 2154 | `map_monster::~map_monster()` | 已有定义；空体/TODO占位 | — |
| 2155 | `map_monster::map_monster(const map_monster& other)` | 已有定义；空体/TODO占位 | — |
| 2157 | `map_item::map_item()` | 已有定义；空体/TODO占位 | — |
| 2158 | `map_item::map_item(const map_item& other)` | 已有定义；空体/TODO占位 | — |
| 2159 | `map_item::~map_item()` | 已有定义；空体/TODO占位 | — |
| 2162 | `BlueMarbleTileScript::BlueMarbleTileScript()` | 已有定义；空体/TODO占位 | — |
| 2165 | `BlueMarbleScriptManager* BlueMarbleScriptManager::getInsance()` | 已有定义；有函数体 | — |
| 2170 | `BlueMarbleMapScript* BlueMarbleScriptManager::getMap(int)` | 已有定义；有函数体 | — |
| 2171 | `int BlueMarbleScriptManager::getMapTotalCount()` | 已有定义；有函数体 | — |
| 2172 | `BlueMarbleTileScript* BlueMarbleScriptManager::getTile(int)` | 已有定义；有函数体 | — |
| 2182 | `effect_data::effect_data()` | 已有定义；空体/TODO占位 | — |
| 2183 | `effect_data::~effect_data()` | 已有定义；空体/TODO占位 | — |
| 2187 | `stQuestTriggerState_t::stQuestTriggerState_t() : m_a(0), m_b(0), m_c(0)` | 已有定义；空体/TODO占位 | — |
| 2193 | `void stQuestTriggerState_t::incTirggerState(char v)` | 已有定义；有函数体 | — |
| 2194 | `void stQuestTriggerState_t::subTriggerState(char v)` | 已有定义；有函数体 | — |
| 2195 | `int stQuestTriggerState_t::getTrigger()` | 已有定义；有函数体 | — |
| 2207 | `void CAssaultMgr::OnMoveArea(CUser*)` | 已有定义；空体/TODO占位 | CUser, PacketGuard |
| 2208 | `void CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*)` | 已有定义；空体/TODO占位 | CUser, PacketGuard |
| 2209 | `CAssaultMgr* GetInstanceAssaultMgr()` | 已有定义；有函数体 | — |
| 2253 | `void CVillageMonsterMgr::OnMoveArea(CUser*)` | 已有定义；空体/TODO占位 | CUser |
| 2254 | `void CVillageMonsterMgr::OnEvent()` | 已有定义；空体/TODO占位 | — |
| 2255 | `void CVillageMonsterMgr::InsertVillageMonster(int, int, int, int, std::vector<STAttackedMonster>*, std::vector<MapArea>*)` | 已有定义；空体/TODO占位 | — |
| 2266 | `virtual ~IObject()` | 已有定义；空体/TODO占位 | — |
| 2274 | `Zone::Zone(unsigned char a, unsigned char b) : m_a(a), m_b(b)` | 已有定义；空体/TODO占位 | CUser |
| 2281 | `void CVillageObjectMgr::on_move_area(CUser*)` | 已有定义；空体/TODO占位 | CUser, CStreamGuard |
| 2282 | `void CVillageObjectMgr::register_object(Zone, IObject*)` | 已有定义；空体/TODO占位 | CStreamGuard |
| 2303 | `void SigStayTimeEvent::init()` | 已有定义；有函数体 | CStreamGuard |
| 2304 | `void SigStayTimeEvent::set(unsigned int accId)` | 已有定义；有函数体 | CStreamGuard |
| 2305 | `void internal_stream(CStreamGuard& guard, TaiwanInternalPack::T t, int uid)` | 已有定义；有函数体 | CStreamGuard |
| 2311 | `void* force_TaiwanSigStayTimeEvent_GetInBuffer(CStreamGuard* guard)` | 已有定义；有函数体 | CStreamGuard |
| 2339 | `Packet_MiniCraneSeed::Packet_MiniCraneSeed()` | 已有定义；空体/TODO占位 | — |
| 2344 | `void get_str_date(char* buf, int a, char b)` | 已有定义；有函数体 | — |
| 2360 | `void get_str_datetime(char* buf, int a)` | 已有定义；有函数体 | — |
| 2369 | `bool is_Victory_in_a_row(std::bitset<32> bits, short victory)` | 已有定义；有函数体 | — |
| 2389 | `bool checkAcceptableQuest(const Quest* quest, const WongWork::CQuestClear& cleared, const stSelectQuestParam& param)` | 已有定义；空体/TODO占位 | CUser |
| 2398 | `void CUser::AddDailyItem()` | 已有定义；有函数体 | CUser, CDataManager, CItem |
| 2447 | `void CUser::UpdateAuraAvatarOption(int idx, int value)` | 已有定义；有函数体 | CUser |
| 2466 | `void CUser::SendOneADayItemShopIndex(const std::vector<std::pair<int, int> >& list)` | 已有定义；有函数体 | CUser, PacketGuard |
| 2489 | `void CUser::deleteSpecificItems(const std::vector<std::pair<int, int> >* list)` | 已有定义；有函数体 | CUser |
| 2501 | `bool GameWorld::IsCharacterPvPExpRevisionChannel() const` | 已有定义；有函数体 | CDataManager, GameWorld |
| 2508 | `void* CDataManager::get_dungeon(int idx)` | 已有定义；有函数体 | CDataManager |
| 2516 | `void sub_LogManager_logFormat_special(int, const char*, int, const char*, ...)` | 已有定义；空体/TODO占位 | CUser |
| 2522 | `int sub_CUser_GetServerGroup_nonconst(void* self)` | 已有定义；有函数体 | CUser |
| 2526 | `void* sub_CUser_getCurCharacQuestR_nonconst(void* self)` | 已有定义；有函数体 | CUser, PacketGuard |
| 2529 | `void sub_InterSelectPcroomDailyRewar_SendPacket(void* self, void* user)` | 已有定义；有函数体 | CUser, PacketGuard |
| 2551 | `char sub_AradEventPeriod_isApplied_30(void* self, int idx, int time)` | 已有定义；有函数体 | — |
| 2584 | `void* sub_StaticPool_FILE50_Acquire(void* self)` | 已有定义；有函数体 | — |
| 2594 | `void sub_StaticPool_FILE50_Free(void* self, void* p)` | 已有定义；有函数体 | — |
| 2602 | `void sub_StaticPool_FILE50_C1(void* self)` | 已有定义；有函数体 | — |
| 2614 | `void sub_StaticPool_FILE50_D1(void* self)` | 已有定义；有函数体 | — |
| 2643 | `stMonsterDamageLog_t() : m_monsterId(0), m_damage(0), m_count(0), m_monsterIndex(0)` | 已有定义；空体/TODO占位 | — |
| 2644 | `~stMonsterDamageLog_t()` | 已有定义；空体/TODO占位 | — |
| 2665 | `static void __map_us_monster_dmg_dtor_dummy()` | 已有定义；有函数体 | — |
| 2701 | `static void __vec_hacklog_dtor_dummy()` | 已有定义；有函数体 | — |
| 2716 | `static void __hacklog_iter_dummy()` | 已有定义；有函数体 | — |
| 2764 | `void* sub_ARAD_Singleton_HeroMissionEvent_Get_typo()` | 已有定义；有函数体 | CUser |
| 2769 | `void sub_HeroMissionEvent_processMission_typo(void* self, void* user, int mission, int param)` | 已有定义；有函数体 | CUser |
| 2773 | `void sub_CTitleBook_sendListOtherUser_typo(void* self, void* user, int type)` | 已有定义；有函数体 | CUser |
| 2784 | `char sub_CGM_Manager_IsGm_typo(void* self, unsigned int accId)` | 已有定义；有函数体 | — |
| 2788 | `void sub_CMonitorServerProxy_SendTcpPacket_typo(void* self, char* buf, int len)` | 已有定义；有函数体 | — |
| 2789 | `void sub_Packet_MiniCraneSeed_C1_typo(void* self)` | 已有定义；有函数体 | CItem |
| 2790 | `int sub_ServerParameterScript_GetPaneltyDupMessage_typo(void* self)` | 已有定义；有函数体 | CItem |
| 2791 | `int sub_ServerParameterScript_GetCleanChattingCount_typo(void* self, int level)` | 已有定义；有函数体 | CUser, CItem |
| 2792 | `int sub_ServerParameterScript_GetMaxCleanChattingCount_typo(void* self)` | 已有定义；有函数体 | CUser, CItem |
| 2793 | `char sub_WongWork_CGMAccounts_isGM_typo(void* self, unsigned int no)` | 已有定义；有函数体 | CUser, CItem |
| 2797 | `void sub_CItemShop_updateOneADayItemList_typo(void* self)` | 已有定义；空体/TODO占位 | CUser, CItem |
| 2798 | `void* sub_CItemShop_GetOneADayItemList_typo(void* self)` | 已有定义；空体/TODO占位 | CUser, CItem |
| 2799 | `void sub_CUser_deleteSpecificItems_typo(void* self, void* list)` | 已有定义；空体/TODO占位 | CUser |
| 2800 | `void sub_UserQuest_get_quest_info_typo(void* self, char* buf)` | 已有定义；空体/TODO占位 | — |
| 2802 | `void Gm_List::SendGMList_To_UpperServer(int)` | 已有定义；空体/TODO占位 | — |
| 2805 | `seriaRoom_AniDeco::seriaRoom_AniDeco() : m_field0(0), m_field2(0)` | 已有定义；空体/TODO占位 | — |
| 2806 | `int expert_job::CExpertJob::GetType()` | 已有定义；空体/TODO占位 | — |
| 2808 | `int online_preliminary::COnlinePreliminaryTeam::GetTeamId() const` | 已有定义；空体/TODO占位 | — |
| 2809 | `const char* online_preliminary::COnlinePreliminaryTeam::GetTeamName() const` | 已有定义；空体/TODO占位 | — |
| 2811 | `WpBonusPointResult::WpBonusPointResult() : m_base(0), m_add(0)` | 已有定义；空体/TODO占位 | — |
| 2812 | `void stAvatarEmblemInfo_t::init()` | 已有定义；有函数体 | — |
| 2817 | `void stAvatarExpansionInfo_t::init()` | 已有定义；空体/TODO占位 | — |
| 2825 | `void WongWork::CMCAPManager::reset()` | 已有定义；空体/TODO占位 | CUser, GameWorld, PacketGuard |
| 2828 | `bool GameWorld_IsCharacterLevelRevisionChannel(void* world)` | 已有定义；有函数体 | CUser, GameWorld, PacketGuard |
| 2833 | `void CUser_make_charac_stat(CUser* self, PacketGuard* pkt)` | 已有定义；有函数体 | CUser, GameWorld, PacketGuard |
| 2923 | `bool GameWorld_IsCharacterStatRevisionChannel(void* world)` | 已有定义；有函数体 | CUser, GameWorld |
| 2924 | `bool CUser_IsHavePremiumAdvantage(CUser* self)` | 已有定义；有函数体 | CUser |
| 2925 | `void WongWork_CUserPremium_GetAdditionalInfo(void* out)` | 已有定义；有函数体 | CUser |
| 2926 | `void* FairPvPStatScript_FindCharacStat(void* script, int job, int growType)` | 已有定义；有函数体 | — |
| 2927 | `bool village_attacked_CRevengeDungeon_IsOpenRevengeDungeon(void* mgr)` | 已有定义；有函数体 | — |
| 2928 | `int TOD_UserState_getEnterCount(void* self)` | 已有定义；有函数体 | — |
| 2929 | `int CCharacBloodDungeon_GetEnterCount(void* self)` | 已有定义；有函数体 | — |
| 2930 | `bool CCreatureMgr_IsDieCreature(const user_creature::CCreatureMgr* mgr)` | 已有定义；有函数体 | — |
| 2931 | `int CLeagueMatch_GetPlayCountPerOneTeam()` | 已有定义；有函数体 | — |
| 2932 | `int online_preliminary_COnlinePreliminary_GetPlayCountPerOneTeam()` | 已有定义；有函数体 | — |
| 2939 | `int CEventTable::GetEventTableCount()` | 已有定义；有函数体 | CUser |
| 2944 | `int CUser_getCharacSlotLimit(CUser* self)` | 已有定义；空体/TODO占位 | CUser |
| 2945 | `int CUser_getSlotEffectCount(CUser* self)` | 已有定义；空体/TODO占位 | CUser |
| 2948 | `void* EventClassify_CEventScriptMng_get_event_entity(void* mgr)` | 已有定义；空体/TODO占位 | CUser |
| 2949 | `int EventClassify_CPcRoomPlayTime_verifyUserPcRoomPlayEvent(void* self, CUser* user)` | 已有定义；空体/TODO占位 | CUser |
| 2950 | `void DB_SavePcRoomPlayTimeEvent_makeRequest(unsigned int accId, unsigned int totalTime, unsigned char rewardCnt)` | 已有定义；空体/TODO占位 | — |
| 2953 | `void CPCRoomServerProxy_SendLogoutPacket(void* proxy, const char* accName, unsigned char accNameLen, const char* charName, unsigned char charNameLen, int localIp)` | 已有定义；空体/TODO占位 | CUser |
| 2957 | `bool checkSpecialChar(const char* str)` | 已有定义；有函数体 | CUser |
| 2960 | `bool CUser::IsPremiumUser() const` | 已有定义；有函数体 | CUser |
| 2961 | `void CUser::ProcPremiumFatigue()` | 已有定义；有函数体 | CUser |
| 2986 | `void WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser* user, const Inven_Item& item, int a, unsigned int characNo, bool b, const char* title, int len)` | 已有定义；空体/TODO占位 | CUser, CInventory |
| 2989 | `void cUserHistoryLog::CoinAdd(int coin, int add, eCoinAddReason reason)` | 已有定义；空体/TODO占位 | CUser, CInventory |
| 2992 | `bool checkSpecialCharName(const char* str)` | 已有定义；空体/TODO占位 | CUser |
| 2995 | `void CUser::SetNeedCheckOverEquipItem()` | 已有定义；空体/TODO占位 | CUser |

## 显式源码头文件依赖
- `CMap.h`
- `CClearCondition.h`
- `CTournamentDungeonReward.h`
- `MissionTypes.h`
- `Stream.h`
- `CStreamGuard.h`
- `StreamDeps.h`
- `GameBase.h`
- `CEnvironment.h`
- `CDataManager.h`
- `CDungeon.h`
- `CSystemTime.h`
- `CNetwork.h`
- `MySQL.h`
- `DBMgr.h`
- `PacketHeader.h`
- `Packet_ChannelType.h`
- `CQuickPartyRewardManager.h`
- `CGameManagerDependencies.h`
- `StreamPool.h`
- `EpollHandler.h`
- `CInventory.h`
- `CMission.h`
- `MsgQueueMgr.h`
- `Quest.h`
- `SkillSlot.h`
- `CSkill.h`
- `SigTypes.h`
- `TimerQueue.h`
- `CGuildServerProxy.h`
- `CMonitorServerProxy.h`
- `PvP_deps.h`
- `GameWorld.h`
- `CUser.h`
- `GlobalData.h`
- `CNRDScriptData.h`
- `EventCharacterParameterScript.h`
- `CCommonStatisticsMgr.h`
- `CServerProxyMgr.h`

## 依赖与已有定义判读
- “已有定义”仅表示该符号在本 TU 中存在源码函数体，不表示业务实现完整。
- 空体/TODO、固定返回值、phantom/typo 包装及反编译兼容桩已在状态列标记。
- 目标对象中还会出现编译器生成的析构/拷贝/容器辅助符号；它们不单独重复为源码函数，除非源码中有对应定义。
- 完整传递依赖以构建生成的 `.o.d` 为准；该文件包含系统头和被包含头的闭包，本索引仅列源码显式 include。
