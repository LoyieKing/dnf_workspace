# G8 组报告：功能模块 / 杂项域拓扑还原

范围：302 个类路径，共 13,271 个符号。核心类（≥20 符号）52 个 + 任务点名但未入核心清单的 `sync_script::CSyncScript`（75）。长尾类（<20 符号）250 个。
方法：基于 `/tmp/df_class_methods.txt` 成员构成、`/tmp/df_syms_demangled.txt` 签名、`/tmp/packet_master_corpus.txt` 反编译语料交叉判定。

## 1. 核心类总表

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---|---|---|---|---|
| advancealtar | 4738 | **命名空间（非类）**：祭坛常量（kMaxStageCount/kMaxSlotCount/kUnitSlotNoLock 等 322 份重复导出）+ 内部全部类 | 常量 + 类成员 | - | 阿尔特拉祭坛 | 高 |
| EmoticonType | 1956 | **命名空间（非类）**：聊天表情常量/枚举（kEmoticonCashCnt/kEmoticonLevelCnt/kEmoticonEventCnt/kInvalidChatEmoticon 各 489 份）+ EmoticonScript | 常量 | - | 聊天表情 | 高 |
| random_option | 1576 | **命名空间（非类）**：随机选项常量（kMaxItemLevel/MAX_RANDOM_SEED/MAX_OPTION_VALUE 等各 315 份）+ CRandomOptionItemHandle | 常量 | - | 随机选项 | 高 |
| APSystem | 1033 | **命名空间（非类）**：行动点常量（ConstOCC_DATELength/ConstClientClearAction 各 318 份）+ 全部 APSystem 类 | 常量 | - | 行动点 | 高 |
| item_lock | 628 | **命名空间（非类）**：物品锁常量（ITEM_UNLOCK_WAITING_TIME/CHECK_ITEM_LOCK_TIME 各 307 份）+ CItemLock/CItemLockTimer | 常量 | - | 物品锁 | 高 |
| user_creature::CCreatureMgr | 97 | 角色宠物/养成生物管理器（持有于 CInventory） | Hatch、Evolute、GainExp、Dismantle、EquipCreatureItem、Load/SaveCreatureItem、RecvMail、ChangeOwner、RenameCreature | CInventory、Inven_Item、CCreature、CEgg、CStomach、CCreatureItem、SIG_CREATURE_ITEM_DETAIL_INFO | 宠物养成 | 高 |
| BlueMarble | 90 | **命名空间**：大富翁式小游戏本体（每实例 300 池化）+ 子类（UserInfo/DungeonEvent/Script*） | startBlueMarble、userThrowDice、enterDungeon、clearDungeon、movePosition、resultReward、giveBonusItem | CUser、CGameManager、BlueMarbleScriptManager、BlueMarbleUserInfo | 小游戏 | 高 |
| sync_script::CSyncScript | 75 | 脚本→DB 同步工具（单例 GetInstanceSyncScript）：把各类脚本表导入/截断数据库 | LoadItemInfoMasterScript、insert_*_to_db、truncate_*、GetUserJob/GetAttachType/GetLevelUpSkill | MySQL、STEquipmentScript、STStackableScript、QuestScript、TownScript | 同步脚本 | 高 |
| user_creature::CCreature | 58 | 单只养成生物实例：经验/进化/饱食度/神器/超技能 | CalculateExp、Evolute、GainExpCreature、GetStomach、AcquireCreatureItem、FindCreatureScript | CCreatureItem、CCreatureScript、CStomach、CArtifact、COverSkillTime | 宠物养成 | 高 |
| WongWork::CClearReward | 57 | 通关奖励生成（金卡/网吧卡/高级金卡、按地图概率表） | generateRandomItem、generateSpecificItem、generateGoldCardBlankItem、setDropRatio、loadScript | CDataManager（脚本）、stGenItemProb_t | WongWork 奖励 | 高 |
| WongWork::CCeraShop | 46 | 塞拉商城购买处理（IPG 计费结果回调、特殊物品、赠礼/邮件） | ProcessBuyRequest、ProcessIPGUserData、ProcessSpecialItem、_processItem/_processCreature/_processAvatarGift | CUser、Inven_Item、WongWork::IPG::SIPGData、Stream | WongWork 商城 | 高 |
| WongWork::CDeathTower | 45 | 死亡之塔组队爬塔副本主控（CGameManager 池 600） | attachParty、checkStartGameCondition、_onStartStage/_onClear、dieMonster、generateRewardItem、checkRenewMyRecord | CParty、CUser、CDeathTower::CStage/CDungeonMgr/CPacketHandler/CPlayData、CDeathTowerRanking | WongWork 爬塔 | 高 |
| WongWork::CAvatarItemMgr | 40 | 角色头像（时装）物品管理：注册/移除/耐久/孔槽/过期 | AddAvatarItem、RegistItem、UpdateEndurance、SetAvatarColor、updateEmblemSocket、_MakeTempKey | Avatar_Item、CUser、Inven_Item | WongWork 头像 | 高 |
| WongWork | 39 | **命名空间**：WongWork 全家族自由函数（AddAvatarItem/AddNewMail/AddPremium/AllocIPGData/Arrange*EventItem/AradfromString）+ 嵌套类型 | 自由函数 | 见子模块表 | WongWork | 高 |
| WongWork::CMonsterDrop | 38 | 怪物掉落生成（随机/指定物品、首杀权重、地狱掉落子类） | generateRandomItem、generateSpecificItem、_getGenItemProbIdx、loadScript | stGenItemProb_t、CMonsterDrop_Hell | WongWork 掉落 | 高 |
| WongWork::CHackAnalyzer | 38 | 外挂行为分析器（速度/内存/怪物击杀位置/升级速率检测、惩罚上报） | analyzeSpeedHack、analyzeMemoryHack、ReqDBSaveHackInfo、ReqDBSaveHackUserPunish、ValidateFixMobDiePos | CUser、DB（保存外挂记录）、CHackAnalyzer 自身状态 | WongWork 反外挂 | 高 |
| advancealtar::CharacAdvanceAltarManager | 36 | 角色级祭坛数据（CUser+0x8df60 内嵌成员）：票/星/槽位/购买/关卡推进 | buyItem、setSlot、exchangeSlot、resetStar、clearStage、setNextStage、sendAchievementReward | CUser、CMDPacketStruct::_SetSlotData、_CharacAdvanceAltarDbData、AdvanceAltarData | 阿尔特拉祭坛 | 高 |
| WongWork::CUserPremium | 36 | 用户会员/增值服务：加成（经验/疲劳/掉率）、限免疲劳、到期检查 | CheckPremium、GetGoldBonus、GetAddExpBonus、ReCalcAdvantage、startPremium、RemovePremium | CUser、SUserPremiumInfo、CUserCharacInfo | WongWork 会员 | 高 |
| WongWork::CMonsterDrop_Hell | 36 | 地狱派对（Hell Party）专属掉落 | generateSpecificItem、hellPartySpecificItem、loadScript、setDropRatio | CMonsterDrop、stGenItemProb_t | WongWork 掉落 | 高 |
| advancealtar::ProcStage | 35 | 祭坛单关流程机：时间线/阶段/召唤物/清场奖励 | startStage、procTimeLine、rewardClearStage、sendMailRewardItem、dieMob、makeCurrentPhaseSummonObject | CharacData、TimeLine、Phase、_MapMonsterSummary、ProcSummonObjectMs、CUser | 阿尔特拉祭坛 | 高 |
| WongWork::CSpecialMonsterDrop | 35 | 特殊怪物掉落（随机生成 + 概率索引） | generateRandomItem、loadScript、setDropRatio | stGenItemProb_t | WongWork 掉落 | 高 |
| item_lock::CItemLock | 34 | 物品上锁/解锁核心（CUser 封装入口 IsAbleItemLock/DoItemLock） | DoItemLock、DoItemUnlock、DoItemUnlockCancel、VerifyItemLock、UpdateItem/UpdateAvatarItem/UpdateCreatereItem、Push/PopItemLock、SendItemLockList | CUser、Inven_Item、stItemLockInfo、CItemLockTimer | 物品锁 | 高 |
| WongWork::CMailBox | 34 | 用户邮箱（CUser::GetMailBox，600 池）：加载/删除/系统邮件/附件领取 | AddNewMail、ReqDBLoadMail、ReqDBSendNewMail(CashShop/SystemMulti)、MakePacket、FreeMailBox、RemoveMail | CUser、CMail、DB、stAddNewMailInput | WongWork 邮件 | 高 |
| WongWork::CBossTower | 34 | Boss 塔副本主控（CGameManager 池 600） | InitBossTower、handleKillMonster、handleDieUser、onClearBossTower、handleEPLPCommand、SendRewardPacket | CParty、CUser、CBossStage、CBossPlay | WongWork 爬塔 | 高 |
| ItemVendingMachine | 34 | 全局商城售货机（GlobalData::s_pItemVendingMachine）：Cera 商城商品购买、IPG/里程计费、拍卖购买、奖励物品 | BuyItem、ProcessBuyRequestEx、ProcessIPG_ResultInput/Output/Query、BuyAuctionItem、ProcessPurcahseBonusItem | CUser、CCeraShopGoods、WongWork::IPG::SIPGData、Arad_IPGProcess/Arad_MileageProcess、CInventory | 商城 | 高 |
| WongWork::CMailBoxHelper | 33 | 邮箱池辅助（g_MailBoxPool=StaticPool<CMailBox,600>）：分配/释放/DB 请求转发 | AssignMailBox、FreeMailBox、ReqDBSendNewMail、_DoGetPackage*、_makeSendMailData | CMailBox、StaticPool | WongWork 邮件 | 高 |
| WongWork::CItemUpgrade | 33 | 装备强化核心（普通/编年史/第三编年史/增幅随机） | ProcUpgrade、ProcUpgradeChronicle、ProcAmplifyRandomUpgrade、_CheckCondition、_ProcPenalty、loadUpgradeScript | CUser、Inven_Item、CItem、upgrade_table_t、CItemUpgradeTable | WongWork 强化 | 高 |
| QuickParty::CQuickParty | 33 | 快速组队房间实例（CGameManager 池 300，按地图+难度键） | regist_quick_party、find_quick_party_in_pool、get_party_object、check_timer_key、delete_party_index | CParty、CUser、STQuickPartyPoolMap_Key、CQuickPartyRewardManager | 快速组队 | 高 |
| QuickParty | 33 | **命名空间**：奖励数据结构（LevelData/LevelDataHell/BasicReward/IRewardType 等）+ 自由函数 | 结构体 | - | 快速组队 | 高 |
| advancealtar::FieldType | 29 | **枚举组**（FieldType::T，模板/引用/指针符号）：购买字段类型 | T/T&/T&&/T* | - | 阿尔特拉祭坛 | 高 |
| __dnf_script__FlexLexer | 29 | flex 生成的 dnf_script 脚本词法分析器 | LexerInput、LexerOutput、yy_create_buffer、yy_switch_to_buffer、yywrap | std::istream、yy_buffer_state | 脚本引擎 | 高 |
| QuickParty::CQuickPartySystemManager | 29 | 快速组队全局管理器（CGameManager::GetQuickPartySystemManager） | match_proper_party、regist/cancel_quick_party、direct_entrance_quick_party、init_quick_party_pool、start_game | CGameManager、CParty、CUser、CQuickParty | 快速组队 | 高 |
| random_option::CRandomOptionItemHandle | 28 | 装备随机选项生成器（品质/等级段/部位/选项量/再生版） | choose_item、give_option、change_option、reset_option、RegenVer_give_option、_get_option_type | ENUM_RARITY、RandomOption、RegenerationROI、CRandomOptionGive | 随机选项 | 高 |
| expert_job::CDisjointer | 28 | 分解师副职业（分解机耐久/等级、预测结果、分解执行） | GetPredictResult、complete_disjoint、get_disjoint_result、OnUpgradeDisjointMachine、check_disjoint_endurance | CUser、CItem、Inven_Item、DisJointResult、CCharacExpertJob | 副职业 | 高 |
| user_creature::CCreatureScript | 26 | 生物脚本（成长曲线/进化/超技能/物品关联） | LoadCreatureScriptFile、GetMaxLevel、GetEvolutionCreatureId、GetOverSkillRecoveryTime、RegisterCreatureIdAndItemId | CreatureScript、CDataManager | 宠物养成 | 高 |
| WongWork::CDeathTower::CPlayData | 26 | 死亡之塔本局玩家数据（准备/存活/奖励/回合） | checkAllMemberReady、generateRewardExp、setMemberAlive、resetMemberReady、stRewardItem_t | CUser、stRewardItem_t | WongWork 爬塔 | 高 |
| BlueMarbleUserInfo | 26 | 大富翁玩家状态（位置/骰子/道具/奖励/副本） | setBoardZone、setDungeon、setItem、setUserState、resetBuff、resetBlueMarbleUserInfo | CUser、BlueMarble、BlueMarbleScriptManager | 小游戏 | 高 |
| expert_job::CEnchanter | 25 | 附魔师副职业（材料/配方/双方确认、串珠附魔） | OnTryEnchant、_DoEnchant、_TryEnchantMine/Other、IsRecipeRight、IsRightMaterial | CUser、ExpertJobMaterial、ENUM_TRY_ENCHANT_TYPE | 副职业 | 高 |
| WongWork::CDeathTowerRanking | 25 | 死亡之塔排行榜（我的记录/Top 记录/虚拟排名） | checkRenewMyRecord、checkRenewTopRecord、registRanking、makeTopRankerRecordPacket | stBestRecord_t、DB | WongWork 爬塔 | 高 |
| WongWork::CSkillChanger | 24 | 技能点变更（消耗品/任务 SP/技能书统计、SP 重置） | SkillInitialize、_ResetSkillPoint、_CountQuestSPBook、_ApplyUserData、_GetUserItemCount | CUser、CItem | WongWork 技能 | 高 |
| WongWork::CSecurityCard | 24 | 安全卡（矩阵卡）验证：题目/答案/密钥/认证状态 | generateCardData、generateQuestion、checkAnswer、generateCertKey、isCertified | CSecurityCardCenter、CUser | WongWork 安全 | 高 |
| WongWork::CBossStage | 24 | Boss 塔单关：地图生成/掉落/拾取/杀怪/转场 | consistMap、RandomConsistMap、dropItem、killMonsterDropItem、moveNextStage | CMap、CUser | WongWork 爬塔 | 高 |
| ComboSkill | 24 | 技能连击树数据（按技能树种类存 map<short,vector<int>>） | setComboSkill、getComboSkillMap、convertComboSkillMap、loadData、resetTree | ENUM_SKILL_TREE_KIND、comoboSkillData、SIG_COMBO_SKILL | 技能系统 | 高 |
| advancealtar::StageControl | 23 | 祭坛关卡控制器（CGameManager 池 600）：选关/进图/EPLP/定时 | selectStage、gotoStage、onTimerStageTick、onClearReward、sendEplp、sendMapInfo | CUser、ProcStage、CharacData、Timer_StageControl、CGameManager | 阿尔特拉祭坛 | 高 |
| WongWork::IPG::CIPGHelper | 23 | IPG 计费对外接口（充值/消费/查询/模拟） | IPGInput、IPGOutput、IPGQuery、IPGRequest、IPGResult、getIPGStatus | CIPGMgr、SIPGData | WongWork 计费 | 高 |
| StrikerScript | 23 | 格斗家（Striker 拳师）技能脚本：连击列表/前置技能/惩罚表 | importScript、getComboIndex、getAddCommand、getPrecedeSkillIndex、checkSkillIndex | TagSkillPenalty、技能数据向量 | 技能系统 | 高 |
| user_creature::CPacketRespondent | 22 | 生物相关通知包构造/广播（按区域） | MakeNotipacket*（CreatureState/Died/Evolute/GainExp/Rename）、SendAccordingToPlace | CUser、PacketBuf | 宠物养成 | 高 |
| CEventCreateDnf | 22 | "创建 DNF 角色" 重复活动（CEventManager id 0xa0）：计时/奖励条件/发放 | StartEvent、EndEvent、RegistStartTimer、IsRewardCondition、SendReward | CEventManager、CUser::GetEventCreateDnfReward、Word_Param | 活动 | 高 |
| WongWork::CDeathTower::CStage | 21 | 死亡之塔单关状态机（地图/掉落/拾取/转场） | consistMap、killMonster、dropItem、pickupItem、moveNextStage、makeStagePacket | CMap、CUser | WongWork 爬塔 | 高 |
| CDailyScheduleManager | 21 | 每日日程/GM 开关（开放/关闭祭坛、Boss 塔、KingHorn、南谷） | AddDailSchedule、GM_Open/Close*、CheckAndSendToAllUserSchedule、GetScheduleState | _DailySchedule、CUser、GlobalData::s_DailyScheduleManager | 日程活动 | 高 |
| user_creature::CDBMsgSender | 20 | 生物 DB 消息发送（孵化/进化/改名/换主/邮件） | HatchCreature、EvoluteCreature、RenameCreatureItem、ChangeOwner、SendMail、AuctionRegist | MySQL/DB、CCreatureMgr | 宠物养成 | 高 |
| WongWork::CMCAPManager | 20 | MCA（多开）防作弊积分管理器：按外挂类型计点/暴露次数 | incPoint、incExposedCount、getPointPerHackType、decIncRate、IsSaveCleanPadPoint | CUser、pointPerHackType_ | WongWork 反外挂 | 中 |
| sync_script::CSyncScript | 75 | 见上（补充：SITEMTYPE/SARMORTYPE/SWEAPONTYPE 为内部类型映射结构） | 见上 | - | 同步脚本 | 高 |

## 2. 功能模块体系

### 2.1 advancealtar —— 真・阿尔特拉祭坛副本

完整独立副本玩法（客户端可见"阿尔特拉"活动祭坛）。拓扑为 **命名空间 + 状态机 + 分发器 + DB 层** 四层：

- **入口/调度**：`advancealtar::Dispatcher_*` 家族（StartGame/BuyItem/SetSlot/UpgradeGage/SummonUnit/ExchangeSlot/Pause/GetAchievementReward/ResetStar），统一签名为 `dispatch_sig(CUser*, PacketBuf&)` + `check_error/read/process`，走 `CMDPacketStruct::STBaseRequest/STBaseResponse`、`MSG_BASE`、`ParamBase` 框架。反编译证实 `Dispatcher_StartGame::process` 直接调用 `CharacAdvanceAltarManager::checkAndCreateDefaultRidable`（CUser+0x8df60 内嵌成员）。
- **管理器**：`CharacAdvanceAltarManager` 持有关卡/槽位/星/票/购买数据；`AdvanceAltarData` 保存槽位与商店 map；`CharacData` 为单角色副本内数据（Gage 能量槽、召唤槽、用户指针）。
- **关卡流程**：`Manager`（选关/死亡/EPLP/放弃/暂停）→ `StageControl`（关卡控制器，`StaticPool<StageControl,600>` 池化，CGameManager 管理索引 `getAdvanceAltarIndex/returnAdvanceAltar`）→ `ProcStage`（时间线 `TimeLine`/`Phase`/`ActionDefine` 驱动的单关流程、召唤物 `ProcSummonObjectMs`、奖励结算 `rewardClearStage`、邮件发奖 `sendMailRewardItem`）。
- **DB/统计**：`DB_Load`/`DB_Update`（槽位/关卡/购买/奖励字符串序列化）、`DB_StatisticAdvanceAltar`、`HistoryLog`（killMonster/enterDungeon/starAdd/starSub）。
- **脚本参数**：`ConfigParameter`/`RewardParameter`/`AdvanceAltarShopParameter`/`StageTimeLineParameter`（CDataManager::loadAdvanceAltarTimeLineParameter 加载）、`BuyUpgradeData`/`BuyShopData`。
- 依赖：CUser（内嵌 manager）、CGameManager（StageControl 池）、CDataManager（脚本）、CMDPacketStruct/PacketBuf/MSG_BASE（分发框架）、MySQL（DB 层）。

### 2.2 WongWork 家族

`WongWork` 是杂项运营/平台功能命名空间，含 70+ 子类，可归纳为下表：

| 子模块 | 类 | 说明 |
|---|---|---|
| 爬塔副本 | CDeathTower、CDeathTower::CStage/CDungeonMgr/CPacketHandler/CPlayData、CDeathTowerRanking、CBossTower、CBossStage、CBossPlay | 死亡之塔（组队爬塔+排行榜）与 Boss 塔（单关杀 Boss 刷奖励），均池化于 CGameManager，CUser 存指针；Global::CBossTowerFunc 作为全局事件钩子 |
| 掉落/奖励 | CMonsterDrop、CMonsterDrop_Hell、CSpecialMonsterDrop、CClearReward、CWorldDrop、CObjectDrop、CDungeonDrop、CItemGenRateTable、CSecialIMonsterDropItemGenRateTable、CGeneratorCommonData、stGenerateResult_t/stGenerateRefData_t | 按脚本概率表生成物品；金卡/网吧卡奖励；世界/物体/副本掉落 |
| 强化 | CItemUpgrade、CItemUpgrade_Separate、CItemUpgradeTable、IItemUpgrade、GenerateRandomUpgrade、STUpgradeInfo | 装备强化（含编年史/第三编年史/增幅随机强化），以 CUser/Inven_Item/CItem 为操作对象 |
| 邮件 | CMailBox、CMailBoxHelper、CMail | CUser 邮箱，DB 读写、系统邮件、附件（物品/金币/头像/宠物/硬币）领取 |
| 商城 | CCeraShop、ItemVendingMachine（并列全局）、CCeraShop::stCeraShopItemParam_t | 塞拉商城购买流程 + IPG 计费回调 + 特殊物品分发 |
| 计费/IPG | IPG::CIPGMgr、IPG::CIPGWorker、IPG::CIPGWorker::CIPGNetwork、IPG::CIPGHelper、IPG::stIPGStatus_t、IPG::IIPGHelperInterface | IPG（Arad 内部支付网关）连接/请求/同步，中国/台湾变体 |
| 会员/增值 | CUserPremium、CHandlePremium、SUserPremiumInfo | 会员加成（经验/疲劳/掉率）、过期处理、PC 房 |
| 头像 | CAvatarItemMgr、Avatar_Item、CCompoundAvatar（+tagCompoundInfo） | 时装物品注册、耐久/孔槽/颜色、头像合成（分解统计） |
| 安全/反外挂 | CHackAnalyzer、CMCAPManager、CSecurityCard、CSecurityCardCenter、CAutoPunishRuleHackTypeMgr、CAutoPunishRuleBlackIPMgr、CBlackIPMonitor、CCapchaDataManager、HackTypeInfo_t/stHackInfo_t/stHacktypeExceptionInfo_t/HackIPCounter_t | 外挂分析、多开检测、安全卡、黑 IP 自动封禁、验证码队列 |
| SSO/账号 | CSimpleSSO、CGMAccounts | 简易 SSO 登录验证（密码/过期/人机验证）、GM 账号列表 |
| 角色/技能 | CCalcCharacStat、CSkillChanger | 属性计算（四职业分派）、技能点变更 |
| 事件物品 | EventFCCombo/EventSigong/EventMuz/EventEverland/EventAlttle/EventATI/EventCommon、CEventMgr、CWebEvent | 各运营活动物品发放（FC Combo/四神功/缪斯/爱佛兰/阿尔特/ATI）+ 儿童节/网吧活动检测 + Web 事件物品 |
| 其他 | CQuestClear、CDungeonClear、CGenUniqueNo、CGenerateRandomNumber、CLogGameChannel、CDeathTower::stMapMonsterKillChecker_t | 任务/副本通关记录、唯一号（IPG 号）生成、频道日志 |

### 2.3 user_creature —— 宠物/养成生物

完整宠物子系统（韩服"宠物"功能）：`CCreatureMgr` 持有于 `CInventory`（`GetCreatureMgrW/R`），管理背包内 `Inven_Item` 形式的宠物物品。核心对象链：

- `CCreature`（实例）：经验 `GainExp/GainExpCreature/GainItemExpCreature`、进化 `Evolute/ItemEvolute/EventEvolute`、饱食度 `CStomach`（按状态增减）、神器 `CArtifact`、超技能冷却 `COverSkillTime`。
- `CEgg` + `CCreatureItemFactory`/`CCreatureItemConverter`：蛋孵化 `Hatch`、物品创建/转换（SetEggItem）。
- `CCreatureScript`/`CCreatureScriptMgr`：脚本定义（最大等级、进化路线、超技能恢复时间、成长物品），`LoadCreatureScriptFile`。
- 网络/DB：`CPacketRespondent` 广播生物状态（进化/死亡/经验/改名）；`CDBMsgSender` 发送孵化/进化/换主等 DB 消息；`CCreatureItem` 保存物品槽/剩余时间/统计。
- 依赖：CInventory、Inven_Item、CUserCharacInfo、SIG_CREATURE_ITEM_DETAIL_INFO、CreatureScript。

### 2.4 expert_job / expert_extraction —— 副职业（分解/附魔/炼金/人偶）

- 角色侧：`CCharacExpertJob`（配方/分解机耐久/等级/放弃次数，saveData/loadData），`CExpertJob` 基类（类型/成功率/经验），`CExpertJobFactory`/`CExpertJobMgr`（获取/释放/配对请求），`ExpertJobMaterial`（配方材料校验）。`CUserCharacInfo::SetCurCharacExpertJob(CExpertJob*)` 持有当前副职业。
- 分解师：`CDisjointer`（预测/执行分解、分解机 `CDisjointMachine` 等级与费用、`DisJointResult` 结果结构）；对应 `Dispatcher_CreateDisjointStore/RequestDisjointItem/RepairDisjointMachine/UpgradeDisjointMachine` 语料。
- 附魔师：`CEnchanter`（放入物品/双方确认 `_TryEnchantMine/_TryEnchantOther`、串珠附魔 `OnEnchantByBead`）；对应 `Dispatcher_EnchantByBead` 等。
- 炼金术士：`CAlchemist`（消耗品使用、复活/传送、药水、物品升级成功率、持续效果）。
- 人偶师：`CDollController`（仅有构造/析构，主体在抽取侧）。
- 抽取（extraction）层：`CExtractionMgr`（GlobalData::g_ExtractionMgr 单例，`get_extracter`）+ `CExtraction` 基类 + `CEnchanterExtraction`/`CAlchemistExtraction`/`CDollControllerExtraction` 三个按类型的抽取实现（`extraction`/`get_extraction_count`/`_check_error`），`Dispatcher_ExpertExtraction` 通过 `GetExtracterType(byte)` 分派。
- 池化：`StaticPool<CEnchanter,300>`、`StaticPool<CDisjointer,600>`。

### 2.5 EmoticonType —— 聊天表情

`EmoticonType` 是常量/枚举命名空间（kEmoticonCashCnt=现金表情数、kEmoticonLevelCnt=等级表情数、kEmoticonEventCnt=活动表情数、kInvalidChatEmoticon=无效值）。唯一"类"是 `EmoticonScript`（脚本记录结构），由 `ImportChattingEmoticon(EmoticonScript&, char const*)` 与 `initChattingEmoticonScriptList` 导入。`CUser::SendChattingEmoticon/ReCalcChattingEmoticon` 在用户侧使用，说明表情按现金/等级/活动三类解锁。

### 2.6 random_option —— 随机选项

`random_option` 命名空间（常量：kMaxItemLevel、MAX_RANDOM_SEED、MAX_OPTION_VALUE、KItemStartLevel、KItemLevelInterval）+ `CRandomOptionItemHandle`：按品质（ENUM_RARITY）与物品等级段选择装备随机属性（部位 `_get_part_type`、选项类型/值/数量、等级限制）。支持"再生版"（RegenVer_*，配合 RegenerationROI）与 `CRandomOptionItemHandleTest` 测试套件（test_change/reset/unseal）。入口 `Dispatcher_ChangeRandomOption` / `Dispatcher_UnsealRandomOption`；`CUser::getCheckPickUpRandomOptionItem` 指示拾取时是否生成随机选项。`sync_script::CSyncScript::insert_random_option_ref` 会同步随机选项引用表。

### 2.7 item_lock —— 物品锁

`item_lock` 命名空间（常量 ITEM_UNLOCK_WAITING_TIME / CHECK_ITEM_LOCK_TIME）+ `CItemLock`：玩家可对物品（普通/头像/宠物）上锁，解锁有等待时间并可取消。分发：`Dispatcher_RequestItemLock/RequestItemUnlock/RequestItemUnlockCancel`（含 `CSecu_ProtectionField::Check` 安全校验），调用 `CUser::IsAbleItemLock/DoItemLock` 等封装 → `CItemLock::DoItemLock/DoItemUnlock/PushItemLock/PopItemLock`。`CItemLockTimer`（`NextItemLockTimer(CUser*)`）驱动等待计时；`_verifyInventory(SIG_LOAD_INVENTORY*, vector<stItemLockRef>&, CUser*)` 在背包加载时恢复锁状态。

### 2.8 QuickParty —— 快速组队

快速组队（Quick Party）：`CQuickPartySystemManager`（CGameManager 成员，`GetQuickPartySystemManager`）维护池 `STQuickPartyPoolMap`，键为（地图+难度）`STQuickPartyPoolMap_Key`，池化房间对象 `CQuickParty`（`StaticPool<CQuickParty,300>`，CGameManager::GetQuickParty/PutQuickParty）。流程：注册 `regist_quick_party` → 匹配 `match_proper_party(Key, CParty*, CUser*)`（语料 Dispatcher_Register_Quick_Party）→ 定时等待 `insert_timer_waiting_party_matching/start_game` → 取消/直接进入 `cancel_quick_party/direct_entrance_quick_party`。奖励层 `CQuickPartyRewardManager`（GetRewardTypeObject/get_random_buff_prob/getRequireQuickPartyMinCount）配套 LevelData/LevelDataHell/LevelDataRandomReward/BasicReward/IRewardType 等奖励结构；快速组队专属掉落 `WongWork::CMonsterDrop_Hell::hellPartySpecificItem` 呼应。

### 2.9 sync_script —— 同步脚本

`sync_script::CSyncScript` 单例（`GetInstanceSyncScript`）为运营侧工具：把各类脚本数据（技能/物品 master/任务分类/城镇/怪物/生物/神器/装备/随机选项引用/塞拉商城/角色描述表）`insert_*_to_db` 并先 `truncate_*` 到 MySQL，供服务器运行时使用。查询侧提供 `GetUserJob(ENUM_CHARACTERJOB)`、`GetUsableCharacter(STEquipmentScript/STStackableScript)`、`GetAttachType`、`GetLevelUpSkill`、`GetAttackElement`。内部 `SITEMTYPE/SARMORTYPE/SWEAPONTYPE` 为物品/防具/武器类型映射结构；`CStringMaker` 为 SQL 字符串构造器。

### 2.10 APSystem —— 行动点（Action Point）系统

行动点系统（每日行动点数 + 勋章奖励 + 今日奖励）：`CActionPointManager`（全局静态数据 _gmWeekday/_IsGMOn）维护用户行动点集合 `map<ushort, vector<CActionPointEx>>`，支持 `SetTodayAction`、`ClearAction(CUser&, _ActionGroupIndex, ...)`、`GetTodayRewardAndSendMail`、GM 设置/重置。`CUserProc` 为 CUser 侧入口（`ClearActionAndSendtoUser`、`GetTodayRewardAndSendPostal`、`UpdateActionPoint`、`SendActionListState`）。分发：`Dispatcher_ClearAction`/`Dispatcher_GetTodayReward`（语料确认）。DB/交换服务器层：`DB_Load/UpdateActionPoint`、`DB_Load/UpdateRewardMedal`、`CDBAndExchangeServerProc`、`Inter_LoadActionPoint/LoadRewardMedal/EmptyActionPoint`；`APSystem::CSyncScript` 同步描述表。奖励结构 `_TodayRewardItem`/`_MedalRewardItem`，信号/消息 `_SIG_LOAD_ACTION_POINT`/`_MSG_ACTION_POINT_ACTION_CLEAR`。

### 2.11 BlueMarble —— 大富翁小游戏

"BlueMarble"（蓝色弹珠，大富翁棋盘）小游戏：`BlueMarble`（命名空间+实例类，`StaticPool<BlueMarble,300>`）棋盘有地图/瓦片/区（BoardZone）/Boss 副本，玩家掷骰 `userThrowDice`、移动 `movePosition`、进副本 `enterDungeon/clearDungeon/giveupDungeon/exitDungeon`、奖励 `resultReward/giveBonusItem`；`CUser::getBlueMarble/getBlueMarbleIndex` 持有玩家实例，CGameManager::getBlueMarble 为跨玩家共享实例，`Dispatcher_BlueMarble`（0-7 动作码）与 `Dispatcher_BlueMarbleConfirmInfo` 处理客户端指令。脚本侧：`BlueMarbleScriptManager`（initMapList/initTileList）、`BlueMarbleInfoScript`（难度/随机副本）、`BlueMarbleMapScript`（每图瓦片）、`BlueMarbleTileScript`（瓦片类型/效果）、`BlueMarbleDungeonEvent`（StartEvent/EndEvent）、`BlueMarbleUserInfo`（玩家状态）。

### 2.12 charac_expand —— 角色扩展（每日数据）

`charac_expand::CDataMgr`（CUser::GetCharacExpandData/GetCharacExpandDataR 访问）按 `ENUM_CHARAC_EXPAND_TYPE` 管理一组 `CData`（每日数据项：alter/reset/saveData(CUser*)/isSave）。`ResetDaily`/`ResetDailyMidnight` 支撑跨日重置（如每日活动计数）。规模小、无网络包，属轻量角色每日扩展数据容器。

### 2.13 其他杂项子系统

- **ComboSkill / StrikerScript**：技能连击系统。`ComboSkill` 存各技能树（ENUM_SKILL_TREE_KIND）的连击序列 map，`Dispatcher_ComboSkill`/`Dispatcher_ComboSkillExtensionQuickSlotReset` 为入口；`StrikerScript` 为拳师职业的连击脚本（combo 索引、前置技能、技能攻击/冷却/等级惩罚）。
- **ItemVendingMachine**：全局 Cera 商城售货机（见核心表）。
- **RentalMachineDimension**：租赁装备服务（Rent/Ready/CheckRentableItem/CheckupAllRentalItems/GetRewardItemGiveList，含等级与成长职业校验、日志），实现类 `RentalMachineDimensionImpl`。
- **CraneMinigameManager**：抓娃娃机小游戏（CGameManager 成员）：材料消耗 `startUseMaterial`、命中判定 `isPickSuccess`、发奖 `sendItem`、物品需求同步 `SendCraneItemNeedMaterial`（Dispatcher_UseCraneStart/CranePickUp 语料）。
- **CDailyScheduleManager**：每日日程（见核心表），与 `_DailySchedule`/`importDailyScheduleEtcScript` 配套。
- **CInGameAdvertisementManager**：游戏内广告（单例 InGameADManagerInstance）：等级/条件检查、曝光信息、多开彩票失败计数、系统邮件发奖励、日志（Dispatcher_RequestIngameAdvertisement/LogIngameAdvertisement 语料）。
- **CEventCreateDnf / CreateDnfEventSciprt(+Server)**：创角活动事件（重复事件 id 0xa0）+ 其脚本数据（ItemInfo）。
- **CMTRand**：Mersenne Twister 随机数生成器（initialize/seed/twist/mixBits/randInt/hash/reload），被掉落/抽奖/商城（SecretShopScript、game_master::CRandomObjectTest）复用。
- **CNRDScriptData**：NRD 脚本数据容器（import/getInt/getFloat/getString/getCLong/getCFloat）。
- **CSourceVersionMgr**：源版本登记（InsertSourceVersion/SourceVersion），用于版本核验。
- **CShutdowManager**：服务器关机流程（EnableShutdown/SendShutdownSignal/OnAllUserLogout/WaitUntilExitThread/SendLastMsgDBQueue）。
- **CCollectArchieveEventLog**：存档事件日志收集（StartEvent/EndEvent）。
- **CRabbitBox**：兔子盒子（奖励盒）：物品索引/数量/掉率。
- **__dnf_script__FlexLexer**：dnf_script 语言的 flex 词法分析器（脚本引擎基础设施）。
- **DisJoint / DisJointResult**：头像分解（disjoint）结果结构，供 `expert_job::CDisjointer::get_disjoint_result(CItem*, Inven_Item*, DisJointResult&, CUser*)` 与统计（SendDisjointAvatarStatistic 语料）使用。

## 3. 长尾类（<20 符号，250 个）

### 3.1 APSystem 长尾

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| APSystem::CActionPointManager | 15 | 行动点全局管理器（设置/清除/今日奖励/勋章判定/GM 指令） | 高 |
| APSystem::CUserProc | 12 | 行动点 CUser 侧过程入口（ClearActionAndSendtoUser/GetTodayRewardAndSendPostal/UpdateActionPoint） | 高 |
| APSystem::DB_LoadActionPoint | 9 | DB 加载行动点 | 高 |
| APSystem::DB_LoadRewardMedal | 9 | DB 加载勋章奖励 | 高 |
| APSystem::DB_UpdateActionPoint | 9 | DB 更新行动点 | 高 |
| APSystem::DB_UpdateRewardMedal | 8 | DB 更新勋章奖励 | 高 |
| APSystem::Dispatcher_ClearAction | 8 | 清除行动请求分发 | 高 |
| APSystem::Dispatcher_GetTodayReward | 8 | 今日奖励请求分发 | 高 |
| APSystem::CActionPointEtcParameter | 8 | 行动点附加参数（常量/上限等） | 高 |
| APSystem::Inter_LoadRewardMedal | 7 | 与交换服务器交互加载勋章 | 高 |
| APSystem::CActionPointEx | 6 | 行动点扩展记录（附详情） | 高 |
| APSystem::Inter_LoadActionPoint | 6 | 与交换服务器交互加载行动点 | 高 |
| APSystem::Inter_EmptyActionPoint | 6 | 与交换服务器交互清空行动点 | 高 |
| APSystem::_TodayRewardItem | 4 | 今日奖励物品记录 | 高 |
| APSystem::_MedalRewardItem | 4 | 勋章奖励物品记录 | 高 |
| APSystem::CSyncScript | 3 | 行动点描述表 DB 同步（InsertDescTable/TruncateDescTable） | 高 |
| APSystem::CDBAndExchangeServerProc | 2 | DB 与交换服务器过程基类 | 高 |
| APSystem::_ActionPoint | 2 | 行动点记录 | 高 |
| APSystem::_MSG_ACTION_POINT_ACTION_CLEAR | 2 | 行动清除客户端消息结构 | 高 |
| APSystem::_SIG_LOAD_ACTION_POINT | 2 | 行动点加载信号结构 | 高 |

### 3.2 BlueMarble 长尾

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| BlueMarbleScriptManager | 13 | 大富翁脚本管理（地图/瓦片列表、单例 getInsance） | 高 |
| BlueMarbleDungeonEvent | 11 | 大富翁副本事件（StartEvent/EndEvent） | 高 |
| BlueMarbleInfoScript | 10 | 大富翁信息脚本（难度/Boss 副本/随机副本索引） | 高 |
| BlueMarbleMapScript | 7 | 大富翁地图脚本（每图瓦片） | 高 |
| BlueMarbleTileScript | 5 | 大富翁瓦片脚本（类型转换 toType） | 高 |
| BlueMarbleTilePos | 2 | 棋盘瓦片坐标 | 高 |
| BlueMarbleRewardInfo | 2 | 棋盘奖励信息 | 高 |
| BlueMarbleRandomItemInfo | 2 | 棋盘随机物品信息 | 高 |
| BlueMarbleRandomDungeonInfo | 2 | 棋盘随机副本信息 | 高 |
| BlueMarbleDungeonDifficulty | 2 | 副本难度枚举辅助 | 高 |

### 3.3 通用/杂项长尾

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| CMTRand | 18 | Mersenne Twister 随机数生成器（seed/twist/mixBits/randInt/hash） | 高 |
| CInGameAdvertisementManager | 16 | 游戏内广告（条件/曝光/多开彩票失败补偿/日志，单例） | 高 |
| CNRDScriptData | 15 | NRD 脚本数据容器（import/getInt/getFloat/getString/getCLong） | 高 |
| CRabbitBox | 13 | 兔子盒子奖励盒（物品索引/数量/掉率） | 高 |
| CShutdowManager | 12 | 服务器关机流程（信号/全员登出/退出等待/DB 队列） | 高 |
| CSourceVersionMgr | 12 | 源版本登记管理器 | 中 |
| CraneMinigameManager | 12 | 抓娃娃机小游戏（材料/命中/发奖，CGameManager 成员） | 高 |
| CCollectArchieveEventLog | 12 | 存档事件日志收集（StartEvent/EndEvent） | 中 |
| CreateDnfEventSciprt | 17 | 创角活动脚本数据（ItemInfo/Load/Destroy；注意符号名拼写 Sciprt） | 高 |
| DisJoint | 12 | 分解（disjoint）相关函数/数据命名空间（GetDisjointResult 等） | 高 |
| CSourceVersionMgr::SourceVersion | 7 | 版本信息结构（char*+int） | 中 |
| CreateDnfEventSciprtServer | 7 | 创角活动脚本服务端（ARAD::Singleton，Load/Destroy） | 高 |
| CraneMinigameScript | 5 | 抓娃娃机脚本（getItem） | 高 |
| CreateDnfEventSciprt::ItemInfo | 4 | 创角活动物品信息结构 | 高 |
| EmoticonType::EmoticonScript | 4 | 聊天表情脚本记录（由 ImportChattingEmoticon 填充） | 高 |
| DisJointResult | 2 | 分解结果结构（供 CDisjointer） | 高 |
| __cxa_pure_virtual | 1 | 编译器运行时符号（非类，误归类） | 高 |

### 3.4 QuickParty 长尾

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| QuickParty::CQuickPartyRewardManager | 11 | 快速组队奖励管理（随机 buff 概率/奖励类型对象/最低人数） | 高 |
| QuickParty::LevelDataRandomReward | 6 | 随机奖励等级数据 | 高 |
| QuickParty::STQuickPartyPoolMap_Data | 6 | 快速组队池条目数据 | 高 |
| QuickParty::LevelData | 4 | 普通等级奖励数据 | 高 |
| QuickParty::LevelDataHell | 4 | 地狱等级奖励数据 | 高 |
| QuickParty::BasicReward | 4 | 基础奖励结构 | 高 |
| QuickParty::QuickPartyData | 4 | 快速组队数据结构 | 高 |
| QuickParty::RewardData_Result | 3 | 奖励结果 | 高 |
| QuickParty::RewardCardGold | 3 | 奖励卡金 | 高 |
| QuickParty::ReturnAncientDungeonTicket | 3 | 远古地下城门票返还 | 高 |
| QuickParty::KillMonsterExp | 3 | 击杀经验奖励 | 高 |
| QuickParty::IRandomwReward | 3 | 随机奖励接口（抽象） | 高 |
| QuickParty::IBasicReward | 3 | 基础奖励接口（抽象） | 高 |
| QuickParty::HellPartyDifficulty | 3 | 地狱派对难度枚举辅助 | 高 |
| QuickParty::EquipItemDropRate | 3 | 装备掉率数据 | 高 |
| QuickParty::CointLimitCount | 3 | 硬币上限数据 | 高 |
| QuickParty::STQuickPartyPoolMap_Key | 3 | 快速组队池键（地图+难度） | 高 |
| QuickParty::RewardData_Param | 2 | 奖励参数 | 高 |
| QuickParty::IRewardType | 2 | 奖励类型接口 | 高 |
| QuickParty::QuestItemDropRate | 1 | 任务物品掉率数据 | 高 |
| QuickParty::DimensionInoutCount | 1 | 维度进出次数计数 | 中 |

### 3.5 RentalMachineDimension 长尾

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| RentalMachineDimension | 19 | 租赁装备服务（Rent/Ready/CheckRentableItem/奖励列表/成长职业与等级校验/日志） | 高 |
| RentalMachineDimension::RentalMachineDimensionImpl | 4 | 租赁实现类（内部实现细节） | 高 |

### 3.6 WongWork 长尾（一）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| WongWork::Avatar_Item | 17 | 头像（时装）物品记录（过期/IPG 号/注册时间/耐久/孔槽/颜色） | 高 |
| WongWork::CAutoPunishRuleHackTypeMgr | 17 | 外挂类型自动惩罚规则（IP 计数器/交易规则/封禁判定） | 高 |
| WongWork::CBossPlay | 17 | Boss 塔玩家本局状态（存活/准备/奖励/死亡处理） | 高 |
| WongWork::CQuestClear | 15 | 任务通关记录（syncScript 同步、保存标志） | 高 |
| WongWork::CGMAccounts | 15 | GM 账号列表管理（LoadGmList/isGM/appendGM） | 高 |
| WongWork::CCompoundAvatar | 15 | 头像合成（脚本加载/条件/结果/统计/生成 IPG 号） | 高 |
| WongWork::CDungeonClear | 13 | 副本通关记录（AradfromString/toString 序列化） | 高 |
| WongWork::CItemGenerator | 12 | 物品生成器（随机/指定物品、定时事件、掉落率） | 高 |
| WongWork::CItemUpgrade_Separate | 12 | 分离（跨界）强化流程 | 高 |
| WongWork::CDeathTower::CDungeonMgr | 12 | 死亡之塔副本管理（关卡地图/结束关/标准等级/掉落物） | 高 |
| WongWork::CDeathTower::CPacketHandler | 17 | 死亡之塔包构造（掉物/奖励/排名/EPLP/拾取） | 高 |
| WongWork::CItemGenRateTable | 11 | 物品生成概率表（chooseItem/generateTable/随机选项禁掉） | 高 |
| WongWork::CItemGeneratorMgr | 10 | 物品生成器管理器 | 高 |
| WongWork::CSecurityCardCenter | 10 | 安全卡中心（卡数据/密钥/手机号校验/加密） | 高 |
| WongWork::CSecialIMonsterDropItemGenRateTable | 10 | 特殊怪物掉落概率表（注意拼写 Secial） | 高 |
| WongWork::CLogGameChannel | 10 | 游戏频道在线人数日志（定时存库） | 高 |
| WongWork::CSimpleSSO | 19 | 简易 SSO 登录验证（密码/过期/人机认证/游戏时长） | 高 |
| WongWork::CWebEvent | 9 | Web 活动物品（IPG 码/ATI 头像能力/物品发放） | 高 |
| WongWork::IPG::CIPGMgr | 14 | IPG 计费管理器（连接/同步/中国台湾变体/派发） | 高 |
| WongWork::IPG::CIPGMgr::CIPGWorker | 12 | IPG 工作对象 | 高 |
| WongWork::CHandlePremium | 8 | 会员处理钩子（到期/效果/网吧/返回角色界面） | 高 |
| WongWork::CGeneratorCommonData | 7 | 物品生成器通用数据（金币生成表/脚本） | 高 |
| WongWork::CEventMgr | 7 | 运营活动检测（儿童节/网吧/PCRoom） | 高 |
| WongWork::CCapchaDataManager | 7 | 验证码数据队列（push/peekData/isEmpty） | 高 |
| WongWork::CCalcCharacStat | 7 | 角色属性计算（剑士/格斗家/枪手/法师分派+药水效果） | 高 |
| WongWork::CBlackIPMonitor | 7 | 黑 IP 监控（插入/删除/惩罚类型/结束时间） | 高 |
| WongWork::CAutoPunishRuleBlackIPMgr | 7 | 黑 IP 自动惩罚规则管理器 | 高 |
| WongWork::GenerateRandomUpgrade | 6 | 随机强化生成（装备品级/强化值） | 高 |
| WongWork::CItemUpgradeTable | 6 | 强化脚本表（loadUpgradeScript/getUpgradeInfoTable） | 高 |
| WongWork::CGenerateRandomNumber | 6 | 随机数生成器（封装） | 高 |
| WongWork::EventFCCombo | 5 | FC Combo 活动物品发放（Arrange/CheckAlready/Update） | 高 |
| WongWork::IItemUpgrade | 5 | 强化接口基类（item_upgrade_system 入口） | 高 |
| WongWork::HackTypeInfo_t | 5 | 外挂类型信息结构（CopyStruct） | 高 |
| WongWork::CObjectDrop | 5 | 物体掉落（随机/指定物品） | 高 |
| WongWork::CWorldDrop | 5 | 世界掉落（随机物品） | 高 |
| WongWork::CGenUniqueNo | 5 | 唯一号生成（IPG 号，含时间计数） | 高 |
| WongWork::CCompoundAvatar::tagCompoundInfo | 5 | 头像合成信息结构 | 高 |
| WongWork::CDeathTower::stMapMonsterKillChecker_t | 5 | 死亡之塔怪物击杀检查（技能材料时间/死亡登记） | 高 |
| WongWork::CDeathTowerRanking::stBestRecord_t | 4 | 排行榜最佳记录结构 | 高 |
| WongWork::CCeraShop::stCeraShopItemParam_t | 4 | 塞拉商城物品参数结构 | 高 |
| WongWork::EventSigong | 4 | 四神功（Sigong）活动物品发放 | 高 |
| WongWork::EventMuz | 4 | 缪斯（Muz）活动物品发放 | 高 |
| WongWork::EventEverland | 4 | 爱佛兰（Everland）活动物品发放 | 高 |
| WongWork::EventCommon | 4 | 活动物品通用处理（事件表插入/加载） | 高 |
| WongWork::EventAlttle | 4 | 阿尔特（Alttle）活动物品发放 | 高 |
| WongWork::EventATI | 4 | ATI 活动物品发放 | 高 |
| WongWork::stGenerateResult_t | 4 | 物品生成结果结构 | 高 |
| WongWork::stGenerateRefData_t | 4 | 物品生成引用数据结构 | 高 |
| WongWork::CDungeonDrop | 3 | 副本掉落（指定物品生成） | 高 |
| WongWork::CDeathTower::CPlayData::stRewardItem_t | 3 | 死亡之塔奖励物品结构 | 高 |
| WongWork::HackFullIPCounter_t | 2 | 外挂全 IP 计数器 | 高 |
| WongWork::HackIPCounter_t | 2 | 外挂 IP 计数器 | 高 |
| WongWork::stHackInfo_t | 2 | 外挂信息结构 | 高 |
| WongWork::stHacktypeExceptionInfo_t | 2 | 外挂类型异常信息结构 | 高 |
| WongWork::stBlackIPMonitorEntry_t | 2 | 黑 IP 监控条目 | 高 |
| WongWork::SUserPremiumInfo | 2 | 用户会员信息结构 | 高 |
| WongWork::STUpgradeInfo | 2 | 强化信息结构 | 高 |
| WongWork::STClearedQuest | 2 | 已通关任务结构 | 高 |
| WongWork::IPG::stIPGStatus_t | 2 | IPG 状态结构 | 高 |
| WongWork::IPG::IIPGHelperInterface | 2 | IPG 辅助接口（抽象） | 高 |
| WongWork::CSimpleSSO::stOutputData_t | 2 | SSO 输出数据 | 高 |
| WongWork::CMailBox::CMail | 18 | 单封邮件（发件人/附件/期限/包类型/邮件包序列化） | 高 |
| WongWork::CMailBox::CMail::._398 | 2 | CMail 内部匿名方法 | 中 |
| WongWork::CMailBox::stAddNewMailInput | 2 | 新增邮件输入参数 | 高 |
| WongWork::CMonsterDrop::stFirstMobHuntingWeight_t | 2 | 首杀狩猎权重结构 | 高 |
| WongWork::CClearReward::stGoldCardBlankItemInfo_t | 2 | 金卡空白物品信息 | 高 |
| WongWork::CBossPlay::stRewardItem_t | 2 | Boss 塔奖励物品结构 | 高 |
| WongWork::CAutoPunishRuleBlackIPMgr::stIPInfo_t | 2 | 黑 IP 信息结构 | 高 |
| WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork | 1 | IPG 网络连接类（ConnectTo） | 高 |
| WongWork::DBCommon | 1 | DB 工具命名空间（GetIdentity(MySQL*) 等自由函数） | 中 |
| WongWork::CGMAccounts::stGMInfo_t | 1 | GM 信息结构 | 高 |

### 3.7 下划线前缀数据结构

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| _Charac_info | 8 | 角色信息结构（CUserCharacInfo::setCurCharac/setTagCharac，Reset/序列化） | 高 |
| _Additioal_info | 6 | 附加角色属性结构（add 合并，供 CCalcCharacStat/药水效果） | 高 |
| _mapMonster | 6 | 地图怪物结构（CBattle_Field 等用于副本怪物列表） | 高 |
| _ComboInfo | 5 | 连击信息结构（clear/构造析构） | 高 |
| _str_option_value_ratio | 4 | 字符串选项值比例结构（float,float,int 构造） | 中 |
| _Quest_Authen_Data | 3 | 任务认证数据（reset） | 中 |
| _DailySchedule | 2 | 每日日程记录（CDailyScheduleManager/importDailyScheduleEtcScript 使用） | 高 |
| _LogManagerData_creater | 2 | 日志数据创建器（全局单例实例） | 低 |
| _Mastered_skill | 2 | 已掌握技能结构（SetPvPSkillTree/addSkillOnCreateCharacter 使用） | 高 |
| _SDC | 2 | SDC（技能伤害校验）工具命名空间（isObjectType/isSyncActiveStatus） | 低 |
| _mapItem | 2 | 地图物品结构 | 中 |
| _str_cost | 2 | 成本结构 | 低 |

### 3.8 advancealtar 长尾

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| advancealtar::BuyUpgradeData | 18 | 购买升级数据（字段类型/点数/等级区间/图标/字符串索引） | 高 |
| advancealtar::Timer_StageControl | 15 | 关卡控制计时器（清场奖励/EPLP/EPLP 回村/检查完成） | 高 |
| advancealtar::ProcStage::ProcSummonObjectMs | 15 | 召唤物毫秒级调度（插入/完成推送/死亡匹配/发包） | 高 |
| advancealtar::Manager | 15 | 祭坛全局管理器（选关/死亡/EPLP/放弃/暂停/离开/时间加速） | 高 |
| advancealtar::CharacData | 14 | 祭坛角色数据（Gage 能量槽/召唤槽/用户指针/升级） | 高 |
| advancealtar::DB_Load | 13 | 祭坛 DB 读取（槽位/关卡/奖励/购买解析，Select/SendResult） | 高 |
| advancealtar::DB_Update | 12 | 祭坛 DB 更新（make*String 序列化/update） | 高 |
| advancealtar::Dispatcher_BuyItem | 12 | 购买物品分发器 | 高 |
| advancealtar::Dispatcher_ExchangeSlot | 12 | 交换槽位分发器 | 高 |
| advancealtar::Dispatcher_GetAchievementReward | 12 | 成就奖励分发器 | 高 |
| advancealtar::Dispatcher_Pause | 12 | 暂停分发器 | 高 |
| advancealtar::Dispatcher_ResetStar | 12 | 重置星分发器 | 高 |
| advancealtar::Dispatcher_SetSlot | 12 | 设置槽位分发器 | 高 |
| advancealtar::Dispatcher_SummonUnit | 12 | 召唤单位分发器 | 高 |
| advancealtar::Dispatcher_UpgradeGage | 12 | 升级 Gage 分发器 | 高 |
| advancealtar::Dispatcher_StartGame | 9 | 开始游戏分发器（创建默认坐骑） | 高 |
| advancealtar::AdvanceAltarShopParameter | 9 | 祭坛商店参数（字段类型数据） | 高 |
| advancealtar::HistoryLog | 9 | 祭坛历史日志（杀怪/进出副本/通关/加减星） | 高 |
| advancealtar::AdvanceAltarData | 11 | 祭坛数据（槽位 map/购买 map/set/reset） | 高 |
| advancealtar::StageTimeLineParameter | 11 | 关卡时间线参数（importPhase/动作定义校验） | 高 |
| advancealtar::Phase | 8 | 时间线阶段（reset/复制） | 高 |
| advancealtar::RewardParameter | 8 | 奖励参数（成就奖励脚本导入） | 高 |
| advancealtar::TimeLine | 8 | 时间线（阶段序列容器） | 高 |
| advancealtar::TimeLineSummary | 8 | 时间线摘要 | 高 |
| advancealtar::Timer_MainTick | 8 | 主 tick 计时器（Gage 定时） | 高 |
| advancealtar::BuyShopData | 8 | 商店购买数据（升级数据向量） | 高 |
| advancealtar::AchievementRewardData | 7 | 成就奖励数据 | 高 |
| advancealtar::ActionDefine | 7 | 时间线动作定义 | 高 |
| advancealtar::DB_StatisticAdvanceAltar | 7 | 祭坛统计数据 | 高 |
| advancealtar::RoundRewardData | 7 | 轮次奖励数据 | 高 |
| advancealtar::ClearRewardData | 6 | 清场奖励数据 | 高 |
| advancealtar::FieldData | 6 | 字段数据（购买升级字段） | 高 |
| advancealtar::Inter_Load | 6 | 与交换服务器交互加载（dispatch_sig） | 高 |
| advancealtar::SurvivalRewardData | 6 | 生存模式奖励数据 | 高 |
| advancealtar::ConfigParameter | 5 | 配置参数导入（importConfigParameter） | 高 |
| advancealtar::_RewardItem | 4 | 奖励物品记录 | 高 |
| advancealtar::_PhaseSummary | 4 | 阶段摘要记录 | 高 |
| advancealtar::_BuyItem | 4 | 购买物品记录 | 高 |
| advancealtar::_ActionAssign | 4 | 动作分配记录 | 高 |
| advancealtar::_Action | 4 | 动作记录 | 高 |
| advancealtar::SyncScript | 4 | 物品描述表 DB 同步（insertItemDescTable/truncate） | 高 |
| advancealtar::_SummonObjectMs | 2 | 召唤物毫秒记录 | 高 |
| advancealtar::_SummonObject | 2 | 召唤物记录 | 高 |
| advancealtar::_StarRestFeeByGold | 2 | 金币重置星费用 | 高 |
| advancealtar::_Stage | 2 | 关卡记录 | 高 |
| advancealtar::_SlotItem | 2 | 槽位物品记录 | 高 |
| advancealtar::_Slot | 2 | 槽位记录 | 高 |
| advancealtar::_RidableBase | 2 | 可骑乘坐骑底座记录 | 中 |
| advancealtar::_Reward | 2 | 奖励记录 | 高 |
| advancealtar::_MapMonsterSummary | 2 | 地图怪物摘要 | 高 |
| advancealtar::_CharacAdvanceAltarDbData | 2 | 角色祭坛 DB 数据 | 高 |
| advancealtar::_AdvanceAltarDbData | 2 | 祭坛 DB 数据 | 高 |
| advancealtar::StageDifficulty | 2 | 关卡难度枚举辅助 | 高 |
| advancealtar::DBAndExchangeServerProc | 2 | DB 与交换服务器过程基类 | 高 |
| advancealtar::StageType | 1 | 关卡类型枚举（getStageType 字符串转换） | 高 |
| advancealtar::RewardItemType | 1 | 奖励类型枚举（getRewardItemType 字符串转换） | 高 |

### 3.9 charac_expand / expert_job / expert_extraction / item_lock / random_option / sync_script / user_creature 长尾

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| charac_expand::CData | 12 | 角色扩展每日数据项（alter/saveData(CUser*)/ResetDaily） | 高 |
| charac_expand::CDataMgr | 11 | 角色扩展数据管理器（按 ENUM_CHARAC_EXPAND_TYPE 存取） | 高 |
| expert_job::CCharacExpertJob | 19 | 角色副职业数据（配方/分解机等级耐久/放弃次数） | 高 |
| expert_job::CDisjointMachine | 15 | 分解机（等级/费用/用户/信息序列化） | 高 |
| expert_job::CAlchemist | 15 | 炼金术士（消耗品/复活/传送/药水/升级成功率） | 高 |
| expert_job::CExpertJobMgr | 14 | 副职业管理器（获取/释放/配对请求/放弃） | 高 |
| expert_job::ExpertJobMaterial | 14 | 副职业配方材料（校验/消耗/怪物卡/附魔物品） | 高 |
| expert_job::CExpertJob | 12 | 副职业基类（类型/成功率/经验/配方学习） | 高 |
| expert_job::CExpertJobFactory | 6 | 副职业工厂（Acquire/Free） | 高 |
| expert_job::CDollController | 5 | 人偶师类（仅构造/析构，逻辑在抽取侧） | 高 |
| expert_job | 8 | 副职业命名空间（自由函数 + 类型） | 高 |
| expert_extraction::CAlchemistExtraction | 11 | 炼金抽取（extraction/get_extraction_count/类型） | 高 |
| expert_extraction::CDollControllerExtraction | 11 | 人偶抽取 | 高 |
| expert_extraction::CEnchanterExtraction | 10 | 附魔抽取 | 高 |
| expert_extraction::CExtraction | 8 | 抽取基类（库存处理/错误检查/获取抽取器） | 高 |
| expert_extraction::CExtractionMgr | 5 | 抽取管理器（GlobalData::g_ExtractionMgr，get_extracter） | 高 |
| expert_extraction | 1 | 抽取命名空间（GetExtracterType 等） | 高 |
| item_lock::CItemLockTimer | 7 | 物品锁等待计时（Next/Increase/DecreaseItemLockTimer(CUser*)） | 高 |
| item_lock::stItemLockRef | 2 | 物品锁引用结构 | 高 |
| random_option::CRandomOptionItemHandleTest | 9 | 随机选项测试套件（test_change/reset/unseal/drop） | 高 |
| sync_script | 12 | 同步脚本命名空间（GetInstanceSyncScript 单例入口） | 高 |
| sync_script::CStringMaker | 15 | SQL 字符串构造器（c_str） | 高 |
| sync_script::CSyncScript::SITEMTYPE | 9 | 物品类型映射结构 | 高 |
| sync_script::CSyncScript::SARMORTYPE | 7 | 防具类型映射结构 | 高 |
| sync_script::CSyncScript::SWEAPONTYPE | 3 | 武器类型映射结构（职业+武器） | 高 |
| user_creature | 10 | 宠物/养成命名空间（类型与自由函数） | 高 |
| user_creature::CCreatureItem | 15 | 宠物物品数据（槽/UID/剩余时间/统计/蛋标记） | 高 |
| user_creature::CCreatureScriptMgr | 12 | 生物脚本管理器（加载/注册 ID 映射） | 高 |
| user_creature::CEgg | 9 | 宠物蛋（Hatch/保存/加载） | 高 |
| user_creature::CCreatureItemFactory | 9 | 宠物物品工厂（Acquire/Free） | 高 |
| user_creature::CStomach | 7 | 饱食度（按生物状态增减/恢复/保存判定） | 高 |
| user_creature::CArtifact | 6 | 宠物神器（装备/最低等级/经验量） | 高 |
| user_creature::COverSkillTime | 5 | 超技能恢复计时（checkTime） | 高 |
| user_creature::CCreatureItemConverter | 1 | 宠物物品转换器（SetEggItem） | 高 |

### 3.10 非类符号（误归类）

| 符号名 | 符号数 | 说明 |
|---|---|---|
| yaSSL_get_version / yaSSLeay_version / yaX509_verify_cert_error_string / yaEVP_md5 / yaEVP_des_ede3_cbc / yaERR_error_string | 8 | yaSSL/OpenSSL 包装的数据/函数符号（ya 前缀），不是 C++ 类，系符号分组工具误归类 |
| __cxa_pure_virtual | 1 | Itanium ABI 编译器运行时符号，非业务类 |

## 4. 假类 / 常量组 / 枚举组

以下"类"实际是命名空间（无实例、无 vtable），其"成员"由常量/枚举/自由函数/子类构成，符号量虚高（同一常量在多个编译单元重复导出）：

| 名称 | 符号量 | 类型判定 | 成员构成 |
|---|---|---|---|
| advancealtar | 4738 | 命名空间 | k* 常量 16 个 × 322 份（kMaxStageCount/kMaxSlotCount/kMaxRewardCount/kUnitSlotNoLock/kRewardStar/kPlayMinLevel 等）+ 全部 advancealtar::* 类 + 自由函数（getMemberNames/convertZipToString/isValidRidableId） |
| EmoticonType | 1956 | 常量/枚举命名空间 | kEmoticonCashCnt/kEmoticonLevelCnt/kEmoticonEventCnt/kInvalidChatEmoticon × 489 份 + EmoticonScript + 导入自由函数 |
| random_option | 1576 | 常量命名空间 | kMaxItemLevel/MAX_RANDOM_SEED/MAX_OPTION_VALUE/KItemStartLevel/KItemLevelInterval × 315 份 + CRandomOptionItemHandle(+Test) |
| APSystem | 1033 | 常量命名空间 | ConstOCC_DATELength/ConstDelimterCondition/ConstClientClearAction × 318 份 + 全部 APSystem::* 类 |
| item_lock | 628 | 常量命名空间 | ITEM_UNLOCK_WAITING_TIME/CHECK_ITEM_LOCK_TIME × 307 份 + CItemLock/CItemLockTimer/stItemLockRef |
| QuickParty | 33 | 命名空间 | 奖励/数据结构（LevelData*/BasicReward/IRewardType 等）+ 自由函数（getRandomBuffTypeByName/check 等）+ CQuickParty 等子类 |
| sync_script | 12 | 命名空间 | GetInstanceSyncScript 单例入口 + CSyncScript/CStringMaker 子类 |
| BlueMarble | 90 | 命名空间 | BlueMarble 实例类 + BlueMarbleUserInfo/DungeonEvent/Script* 子类 + 自由函数 |
| user_creature | 10 | 命名空间 | CCreature* 子类 + 自由函数 |
| expert_job | 8 | 命名空间 | C*ExpertJob/CDisjointer 等子类 + 自由函数 |
| expert_extraction | 1 | 命名空间 | GetExtracterType 等自由函数 + CExtraction* 子类 |
| WongWork | 39 | 命名空间 | 自由函数（AddAvatarItem/AddNewMail/AddPremium/Arrange*EventItem/AradfromString 等）+ 全部 WongWork::* 子类 |
| WongWork::IPG | 9 | 命名空间 | SIPGData 等计费数据结构 + CIPGMgr/CIPGHelper/CIPGWorker 子类 |
| DisJoint | 12 | 命名空间/函数组 | 分解相关自由函数与数据 |
| _SDC | 2 | 工具命名空间 | isObjectType/isSyncActiveStatus（技能伤害校验相关） |

枚举组（仅含 T 枚举符号 + 字符串转换函数，无类行为）：

| 名称 | 说明 |
|---|---|
| advancealtar::FieldType | 购买字段类型枚举（T/T&/T&&/T*） |
| advancealtar::StageType | 关卡类型枚举（getStageType） |
| advancealtar::RewardItemType | 奖励类型枚举（getRewardItemType） |
| advancealtar::StageDifficulty | 关卡难度枚举 |
| QuickParty::HellPartyDifficulty | 地狱派对难度枚举 |
| BlueMarbleDungeonDifficulty | 大富翁副本难度枚举 |
| BlueMarbleTileScript::Type / BlueMarbleTilePos | 瓦片类型/位置（toType 转换） |

## 5. 模板实例

`StaticPool<T, N>`（固定容量对象池，Acquire/Free/GetIndex/CNode）在本组实例化 9 处：

| 实例 | 容量 | 用途 |
|---|---|---|
| StaticPool<advancealtar::StageControl, 600> | 600 | 祭坛关卡控制器池（CGameManager 按索引取/归还） |
| StaticPool<WongWork::CDeathTower, 600> | 600 | 死亡之塔实例池 |
| StaticPool<WongWork::CBossTower, 600> | 600 | Boss 塔实例池 |
| StaticPool<WongWork::CMailBox, 600> | 600 | 用户邮箱池（g_MailBoxPool，CMailBoxHelper 分配） |
| StaticPool<WongWork::CMailBox::CMail, 20> | 20 | 单封邮件对象池 |
| StaticPool<QuickParty::CQuickParty, 300> | 300 | 快速组队房间池 |
| StaticPool<BlueMarble, 300> | 300 | 大富翁游戏实例池 |
| StaticPool<expert_job::CEnchanter, 300> | 300 | 附魔师副职业实例池 |
| StaticPool<expert_job::CDisjointer, 600> | 600 | 分解师副职业实例池 |

其他模板痕迹：`IPacketDispatcher<MSG_QUICK_PARTY, stQuickPartyParam, (ch_state)5>`（快速组队分发器模板实例）、`CStreamGuard::GetInBuffer<T>`（DB 流缓冲读取，advancealtar/charac_expand 数据）、`std::map/vector` 大量 STL 实例（slot/reward/action 数据容器）。

## 6. 核心类依赖关系速览

```
CUser（用户对象）
  ├─ 内嵌成员 @+0x8df60: advancealtar::CharacAdvanceAltarManager（选关/票/星/槽/购买）
  ├─ CUser::GetMailBox()        → WongWork::CMailBox（CMailBoxHelper 从池 600 分配）
  ├─ CUser::getDeathTower()     → WongWork::CDeathTower（CGameManager 池 600）
  ├─ CUser::getBossTower()      → WongWork::CBossTower（CGameManager 池 600）
  ├─ CUser::getBlueMarble()     → BlueMarble（CGameManager 池 300）
  ├─ CUser::GetCharacExpandData → charac_expand::CDataMgr
  ├─ CUser::IsAbleItemLock/DoItemLock → item_lock::CItemLock
  ├─ CUser::SendChattingEmoticon/ReCalcChattingEmoticon → EmoticonType 常量
  └─ CUser::getCheckPickUpRandomOptionItem → random_option 应用开关

CUserCharacInfo（角色信息）
  ├─ SetCurCharacExpertJob(CExpertJob*) → expert_job（CEnchanter/CDisjointer 池 300/600）
  └─ setCurCharac(_Charac_info*)/_Additioal_info → CCalcCharacStat

CInventory（背包）
  └─ GetCreatureMgrW/R → user_creature::CCreatureMgr（Hatch/Evolute/GainExp/Artifact）

CGameManager（全局管理器）
  ├─ GetQuickPartySystemManager / GetQuickPartyRewardManager / GetQuickParty/PutQuickParty（池 300）
  ├─ getDeathTower/returnDeathTower、getBossTower/returnBossTower（池 600）
  ├─ getAdvanceAltarIndex/returnAdvanceAltar（StageControl 池 600）
  ├─ getBlueMarble（共享大富翁实例）
  └─ GetCraneMinigameManager

CDataManager（脚本数据）
  ├─ loadAdvanceAltarTimeLineParameter（祭坛时间线参数）
  ├─ getBlueMarbleScript / get_event_script_mng（活动/大富翁脚本）
  └─ 供 CClearReward/CMonsterDrop/CItemGenerator 的 loadScript

GlobalData（全局单例）
  ├─ s_pItemVendingMachine → ItemVendingMachine（IPG/里程计费）
  ├─ s_DailyScheduleManager → CDailyScheduleManager
  ├─ g_ExtractionMgr → expert_extraction::CExtractionMgr
  └─ s_event_manager → CEventCreateDnf（重复事件 id 0xa0）

APSystem::CActionPointManager（全局静态）+ APSystem::CUserProc（CUser 侧入口）
sync_script::GetInstanceSyncScript() 单例 → CSyncScript（脚本→MySQL 同步）
WongWork::IPG::CIPGMgr（计费网关）← CCeraShop / ItemVendingMachine / CCompoundAvatar（生成 IPG 号）
```

关键跨模块耦合：
- 死亡之塔与 Boss 塔复用 `WongWork::CBossStage/CBossPlay` 与 `CDeathTower::CStage/CPlayData` 的关卡模式，`Global::CBossTowerFunc` 把全局游戏事件（DieMob/GetItem/MoveMap/FinishLoad）接入塔逻辑。
- 快速组队与地狱掉落耦合：`CMonsterDrop_Hell::hellPartySpecificItem` 为快速组队地狱派对生成掉落。
- 奖励邮件贯穿：祭坛（sendMailRewardItem）、广告（sendRewardItemSystemMail）、APSystem（GetTodayRewardAndSendPostal）都经 `WongWork::CMailBox` 系统邮件发放。
- 副职业/分解与商城/头像耦合：`CCompoundAvatar` 调用分解统计（SendDisjointAvatarStatistic），`expert_job::CDisjointer` 使用 `DisJointResult`。
- 反外挂链：`CHackAnalyzer`（行为分析）→ `CAutoPunishRuleHackTypeMgr/CAutoPunishRuleBlackIPMgr`/`CMCAPManager`（计分惩罚）→ DB 保存外挂记录。
- 强化链：`CItemUpgrade`/`CItemUpgrade_Separate` → `CItemUpgradeTable`/`IItemUpgrade`，入口 `IItemUpgrade::item_upgrade_system(CUser*, MSG_ITEM_UPGRADE*, ...)`。
- 随机选项被掉落与强化共同引用：`CItemGenRateTable::set_disable_drop_random_option_item`、`sync_script::insert_random_option_ref`。
