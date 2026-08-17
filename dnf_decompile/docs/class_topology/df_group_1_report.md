# df_game_r G1 组「玩家/角色域」类拓扑还原报告

- 分析对象：`/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/init/df_game_r`（32 位 i386 静态二进制）
- 类范围：G1 组共 682 个类路径；其中核心类（符号数≥20）33 个，长尾类（<20）649 个
- 证据来源：`df_class_methods.txt`（方法索引）、`df_syms_demangled.txt`（含签名）、`df_text_disasm.txt`（反汇编，构造函数内嵌成员序列与 getter 偏移）、`packet_master_corpus.txt`（反编译语料）
- 置信度约定：高=方法名+签名/反汇编直接佐证；中=类名+方法名推断；低=仅有类名/命名空间线索
- 结论性质：结构/作用均为基于二进制证据的分析，未修改任何源码；部分推断项已标注

---

## 一、核心类（33 个，符号数 ≥ 20）

### 1.1 核心类总表

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---|---|---|---|---|
| CUser | 1074 | 在线用户会话聚合根（玩家域核心）。以 CUserCharacInfo 为基类（偏移 0），内嵌网络、背包/仓库/任务/选项/安全/公会等 30+ 子对象；负责登录初始化、发包、角色选择、物品/技能/任务操作入口 | AddItem、use_equipment、use_stackable、GetInventoryInfo、gain_exp_sp、init_skill_tree、quest_reward、InitOnAccept、prepareDisconnect、UpdateData、SendPacket、CheckMoney、SetMileage、GetCurCharacInventoryRef | CUserCharacInfo、CNetwork<4096,450000>、CAccountCargo、CGameOption、UserQuest、InventoryMemory、CCharacterView、cUserHistoryLog、Client_Spec、CPacketVerifier、WongWork::CUserPremium/CHackAnalyzer/CMCAPManager/CSecurityCard、Secu_AccountHacking/GoldControl/HackLogCheck、XNuclear::CHades、STGuildDBInfoOnly、CharacAdvanceAltarManager、APSystem::CActionPointManager、PISenderManager、PIReceiverManager、Mutex、std 容器（见依赖速览） | 玩家域核心/会话管理/网络收发/安全 | 高 |
| CUserCharacInfo | 498 | 当前角色资料与状态（等级/经验/疲劳/金钱/点数/公会/PvP/技能树脏标志）。内嵌 PvpResultType、map<int,GameResultType>、WongWork::CDungeonClear；持有 `_Charac_info*`（cur/tag 双指针）以访问背包/技能/仓库 | getCurCharacExp、getCurCharacFatigue、getCurCharacInvenW（返回 CInventory*）、getCurCharacSkillW（返回 SkillSlot*）、setCurCharac、addCurCharacExp、useWinPoint、enableSaveSkill/Inven/Cargo、SetCurCharacExpertJob、SetCurCharacOnlinePreliminaryTeam | _Charac_info、CInventory、SkillSlot、CCargo、PvpResultType、WongWork::CDungeonClear、GameResultType、expert_job::CExpertJob、online_preliminary::COnlinePreliminaryTeam、stAuraAvatarOption | 角色信息/状态 | 高 |
| CInventory | 181 | 角色背包容器：25 格 Inven_Item 数组（每格 0x3d 字节）+ AvatarCoin 货币区 + user_creature::CCreatureMgr + WongWork::CAvatarItemMgr + InventoryMemory 指针；处理物品增删/移动/排序/锁 | GetInvenSlot、GetInvenRef、SetInvenData、MakeItemList、MakeItemPacket、MoveItemToEmptySlotOfInventory、CheckValidSlot、get_empty_slot、AddAvatarItem、UseCoin、SetCoin、SortInvenSlot、SendItemLockList | Inven_Item、AvatarCoin、user_creature::CCreatureMgr、WongWork::CAvatarItemMgr、InventoryMemory、CUser（parent）、PacketGuard、ENUM_ITEMSPACE | 背包/物品 | 高 |
| CItem | 68 | 物品定义条目（只读脚本数据，面向 STItemScript）；查询名称/价格/等级/稀有度/堆叠性/分类/掉落约束 | GetItemName、get_grade、get_price、get_rarity、is_stackable、GetSellPrice、GetCashPrice、GetNeedLevel、hasCategory、IsEnableWorld、isPackagable、GetQuestItemDropBouns | STItemScript::ENUM_ITEM_CATEGORY、ENUM_WORLD_TYPE | 物品定义/脚本 | 高 |
| CStackableItem | 64 | 可堆叠/消耗品定义：强化与增幅、冷却/效果、制作材料、彩票/助推器/多重登录物品等（配合 StackableAction 使用） | getStackableLimit、check_able_To_use、GetReinforceRate、GetAmplifyReinforceRate、getBoosterItem、get_lotto_item、get_1st_material_count、verifyStackableAction、make_item、set_item | CItem、Inven_Item、CUser、STStackableItemScript（推断） | 物品定义/消耗品 | 高 |
| CEquipItem | 60 | 装备定义：可用职业/等级、强化/升级/增幅、成长、头像/宠物/光环选项、解放（emancipate） | check_able_To_equip、GetUsableEquipmentType、isUpgradableLevel、make_item、set_item(STEquipmentScript&)、get_aura_avatar_option_value、IsAvatarItem、IsEmancipate、verify | STEquipmentScript、ItemUpgradeType::T、EquipmentParameterInfo（推断） | 装备定义/脚本 | 高 |
| EquipmentParameterInfo | 64 | 装备参数属性：物理/魔法攻防、SASPROPERTY 技能附加属性、光环/重生追加数据、字符串追加 | getEquipmentPhysicalAttack/Defense、getEquipmentMagicalAttack/Defense、addString、clear、operator= | SASPROPERTY、EquipmentAuraAppendageData、RebirthAppendageinfo、sync_script::CSyncScript（外部使用） | 装备属性/数值 | 高 |
| StackableAction | 56 | 消耗品使用动作注册表：按动作类型分发到具体处理（加疲劳/宾果/彩票计数等） | run、check、proc_addFatigue、proc_bingo、proc_lotteryCount、init_function_type | CUser、CStackableItem、Inven_Item、StackableAction::Type | 物品使用 | 高 |
| Inven_Item | 27 | 背包槽内物品实例：物品键+属性字节+强化/再封装/交易限制次数；定义 ITEM_TYPE 枚举（背包分类） | setCopy、getKey、getPackedCode1、SetUpgrade、IncUpgrade、SetReSealCount、SetTradeLimitCount、GetItemAttr、isEquipableItemType、isEmpty、reset | SlotBoundKey（外部）、CSlotBoundChecker（外部）、ITEM_TYPE | 背包/物品实例 | 高 |
| SkillSlot | 101 | 角色技能树容器：SP/SFP 点数、技能学习/删除/移动/组合技/技能备份、按 ENUM_SKILL_TREE_KIND 区分多技能树 | insert_skill、delete_skill、master_new_skill、refund_skill、skill_move、calcUsedSP、get_remain_sp、backupSkill、setComboSkillInfo、loadComboSkill、SendSkillInfo | CUser（parent）、CSkill、_Mastered_skill、ENUM_SKILL_TREE_KIND、SIG_COMBO_SKILL、STGuildDBInfoOnly | 技能 | 高 |
| CSkill | 46 | 技能定义：SP/SFP 消耗、等级上限、职业/成长类型适配、主动/被动、技能窃取 | get_need_sp_for_level、get_need_sfp_for_level、can_learn、getMaxSkillLevel、getSkillName、set_job_type、set_level_limit、set_prelearned_skill、IsStealable、SetStealLevelPenalty | 脚本数据（SkillScript，推断）、ENUM_JOB_TYPE（推断） | 技能定义 | 高 |
| CMissionList_Charac | 46 | 角色任务列表：接取/清除/每日重置/系列任务/事件推进（击杀/胜利/复仇/进入世界等）/列表发送与存档 | addNewMission、Remove_Mission、ClearMission、ResetDaily、Send_MissionList、Update_Kill_event、Update_Win_event、Update_RecvPacket_event、getNewMission、_saveData | CUser、MissionInfo、MissionClearCondition_Parameter、PVP_BATTLE_MODE | 任务 | 高 |
| CMission | 20 | 单个任务模板：接受条件/推进/奖励/系列任务/排名奖励区间 | isAcceptCondition、canUpdate、Reward、makeMissionInfo、GetMissionGrade、GetRankRange、_isAcceptCondition_Series、operator< | CUser、MissionScript、MissionInfo、MissionClearCondition_Parameter | 任务 | 高 |
| CQuestShop | 38 | 任务商店：QP/任务碎片余额、限购状态（每日次数/等级限制）、购买流程 | buyStatus、addQp、subQp、addPiece、calUsedQp、loadData、_saveData、sendCharacQp、makePacket_BuyingStatusList、SetTagCharacQuestShopData | CUser、CHARAC_QUEST_SHOP_DATA、PacketGuard | 任务商店 | 高 |
| CTitleBook | 39 | 称号簿：称号收集/佩戴/分类展示/邮件与物品锁联动/超时删除 | putTitle、_insertTitle、_deleteTitle、sendList、sendListOtherUser、loadData、_saveData、getTitleSlot、isAbleItemLock、deleteTimeoutItem | CUser、ENUM_TITLE_BOOK_CATEGORY、ENUM_TITLE_BOOK_INFO_TYPE、Inven_Item、item_lock::stItemLockRef、ENUM_ITEMSPACE、PacketGuard | 称号 | 高 |
| CAchievement | 31 | 成就系统：触发/校验/完成/奖励/邮件/分类标签/GM 操作 | setTrigger、_verifyAchievement、_checkComplete、_sendComplete、_sendPostal、_sendCompleteReward、loadData、_gm_clearAll | Quest、stTitleSection、ENUM_TITLE_BOOK_CATEGORY、std::string | 成就 | 高 |
| CCargo | 42 | 角色仓库：槽位管理、插入/移动/删除/排序、扩容、物品锁列表、发包 | GetCargoRef、insert_item、move_item、delete_item、UpgradeCargo、MakeItemPacket、GetCapacity、SetInventoryMemory、set_parent | Inven_Item、CUser（parent）、ENUM_ITEMSPACE、InventoryMemory（推断） | 仓库 | 高 |
| CAccountCargo | 34 | 账号金库：跨角色存款/取款、物品存取/扩容、DB 数据装载 | InsertItem、DeleteItem、DepositMoney、WithdrawMoney、SetDBData、MakeItemPacket、UpgradeAccountCargo、CreateAccountCargo、SendItemList | Inven_Item、ENUM_CMDPACKET、CUser（推断）、PacketGuard（推断） | 账号仓库 | 高 |
| CTradeSpace | 40 | 交易窗口：双方玩家物品注册/移除/锁定/确认/取消，交易槽 + 互斥锁 | set_traders(CUser*,CUser*)、regist_item、remove_item、add_item、lock、unlock、proceed_trade、checkTrade、cancel_trade、check_item_exist | CUser、Inven_Item、TradeSlot、Mutex | 交易 | 高 |
| CGameOption | 22 | 客户端选项容器：热键/快速聊天/情感表达/ETC 选项 + 变更标志 | SetHotKeyOption、SetQuickChatOption、SetEtcOption、CopyQuickChatting、IsEtcOptionChanged、isEqualEmoticon、get_hotkey_option | CHotkeyOption、CQuickChattingOption、CETCOption、CChattingEmoticonConfig、ENUM_OPTION_ETC | 选项/客户端配置 | 高 |
| CBoosterGage | 23 | 成长助推器槽（booster gage）：点数累计/消耗/奖励物品插入/每日重置 | cal_booster_gage、inc_total_gage、sub_total_gage、get_booster_point、insertItemIntoInventory、AddAvatarItem、InsertCreatureItem、ResetDaily、loadData | CUser、Inven_Item、eItemAddReason、eAvatarItemAddReason、BoosterPoint（推断） | 成长/活动 | 高 |
| CItemList | 25 | 物品表管理器：加载物品/商店/掉落脚本，按类型创建物品实例 | load_item_files、Load_Goods_File、create_item、insert_item、FindGoods、getCeraShopBonusItem、GetProperBonusItem、get_lotto_item | CItem、Inven_Item、ENUM_ITEM_CREATE_TYPE、CCeraShopGoods（推断） | 物品表/掉落 | 高 |
| CPremiumLetheManager | 25 | 技能洗点（Lethe）管理器：状态机（备份→初始化→确认→回退），含静态状态常量 | BackupSkill、InitLetheSkill、ConfirmSkillReq、ResetSkillReq、UpdateBackupSkillFlag、_removeInitSkill、_update | CUser、ENUM_SKILL_TREE_KIND、_Mastered_skill、SkillSlot（推断） | 技能重置 | 高 |
| stRankSystemInfo | 25 | 排行系统数据容器（stDungeonRankSystem_t / stDungeonClearTimeData / stComboIntervalBoundary 嵌套结构），纯数据 | stDungeonRankSystem_t::clear、stDungeonClearTimeData::clear、stComboIntervalBoundary::clear、clear | 无（纯数据嵌套结构） | 排行统计 | 中 |
| CPowerManager | 35 | 势力战（PowerWar）管理器：积分/排名/幽灵时间/参战/复活/MVP | GetPowerWarPoint、ProcessJoinPowerWar、LoadPowerWarInfo、LoadRankerInfo、SetPowerWarUserRankingInfo、GetRankingByCharacNo、CheckPowerWarEnterLimit、GetPowerWarResponPenalty、IsAbleToRevival | CUser（推断）、ENUM_POWER_SIDE_TYPE | 势力战 | 高 |
| CExpandEquipslot | 26 | 扩展装备槽：第二装备槽切换、装备移动、保存与发包 | Change_Equip、EquipslotSwitch、Move_Item、Send_Expand_Equip_Info、SetExpandEquipslot、GetInvenRefR/W | CInventory、ENUM_EQUIPSLOT、INVEN_TYPE、ENUM_ITEMSPACE | 装备槽 | 高 |
| CHARAC_LOAD_MERCENARY | 36 | 「角色加载佣兵」活动脚本：竞赛判定/头像加成/掉落率/奖励发放 | Competition、Reward、GetRewardItem、GetAvatarBonus、CalcItemDropRate、GetCompetitionState、GetCompetitionPeriodSecond、SendMessageToCUser | CUser、Inven_Item、competition_reward_result、std::string | 活动/佣兵 | 高 |
| stNPCCommonData_t | 20 | NPC 通用脚本数据（插图索引 + stOneBuff_t 单一 buff 列表） | getIllustIndex、clear | stOneBuff_t | NPC 脚本数据 | 中 |
| stFavorableRelationShip_t | 40 | NPC 好感度脚本数据：等级奖励/ buff 奖励/礼物/周期奖励等嵌套结构 | stLevelRewardInfo::clear、stBuffRewardInfo::clear、stRewardItemElement_t、clear | stLevelRewardInfo、stBuffRewardInfo、stRewardItemElement_t、stPeriodRewardInfo、stGiftItemInfo_t | NPC 好感度 | 中 |
| InvalidCharData | 30 | 非法字符/角色数据校验表：stRangeElement<unsigned char/unsigned short> 范围黑名单 | stRangeElement<unsigned char/ushort> 构造/析构 | stRangeElement<T>（模板） | 角色校验/安全 | 中 |
| WideString | 83 | 宽字符字符串包装类（wchar_t，基于 WideStringData），含格式化/分词/大小写/哈希 | assign、format、vformat、concat、tokenize、compareNoCase、c_str、replaceData、getHash | WideStringData、std::basic_string<wchar_t> | 基础库/字符串 | 高 |
| CharString | 81 | 窄字符字符串包装类（char，基于 CharStringData），同 WideString 接口 | assign、format、concat、tokenize、compareNoCase、c_str、replaceData、getHash | CharStringData | 基础库/字符串 | 高 |
| PackSet | 43 | 资源打包文件（pack）：打开/写入/索引/加密/校验/脏标记 | open、close、pack_file、write、openEncryptedFile、UsingEncryptedFile、find、output_file_list、verifyEncryptedFile | 无（文件库） | 资源/文件 | 高 |

### 1.2 核心类结构证据（反汇编要点）

- **CUser::CUser() (0x864e410)**：依次构造 CUserCharacInfo（基类）、CNetwork<4096,450000>@0xe0、UserMercenaryInfoMgr@0x6ef6c、map<uint,map<uint,vector<InstanceRentalSystem::RentalInfo>>>@0x6ef78、CAccountCargo@0x6effc、CGameOption@0x6fd64、STBreakAwayRewards@0x703c4、STSkillCommandData::STCommand[49]@0x703db、Client_Spec@0x705dc、list<int>、CPacketVerifier@0x711f4、WongWork::CUserPremium@0x7121c、WongWork::CHackAnalyzer@0x71bac、Secu_AccountHacking@0x795e8、CodeHackCheckStorage@0x795fc、string[64]、CharacMoneyLog[6]、vector<_Charac_info>、CCharacterView、cUserHistoryLog、charac_expand::CDataMgr、InventoryMemory、UserQuest@0x858d4、CDungeonGainedGold、vector<LimitItemUsage>、vector<CUser::_DBLogItemInfo>、Mutex×2、set<uint>、STGuildDBInfoOnly、STGuildAgitDBInfo、WongWork::CSecurityCard、Sanicova::CPad、vector<stLookOuts>×2、vector<tyIPCounters>、CerashopAddRestrict::UserInfo、STExpReward、APSystem::CActionPointManager、advancealtar::CharacAdvanceAltarManager、Character、WongWork::CMCAPManager、XNuclear::CHades、Secu_GoldControl、Secu_HackLogCheck、map<short,int>、map<pair<char,char>,int>、PIReceiverManager、PISenderManager、GrowthWeaponEvent、GrowthCreatureEvent、BingoData、CharacLevelUpGiftAccountOnce 等。
- **CUserCharacInfo::getCurCharacInvenW/R (0x80da28e/0x80da27e)**：`*(this+0x10) + 0xda` 即 `_Charac_info*` 内的 CInventory 偏移；`getCurCharacSkillW` 为 `+0x892`（SkillSlot）；`getCurCharacCargoW` 为 `+0xdaa`（CCargo）；`getTagCharac*` 走 `this+0x14`（tag 指针）。`setCurCharac(_Charac_info*)` 写入偏移 0x10。
- **_Charac_info::C1Ev (0x8695cf8)**：内嵌 CInventory、SkillSlot、CCargo、STGrowthType、CharacterOption、_Additioal_info、seriaRoom_AniDeco、WpBonusPointResult、ExpBonusPointResult、STPowerWarCharacData、tagCharacVisibleFlag、SIG_LOAD_PREMIUM_LETHE、map<int,stBloodBestRecord>、map<int,STSkillCommandData>、vector<ContinuousItemInfo>、LimitItemUsage。
- **CInventory::C1Ev (0x822d52c)**：Inven_Item[25]（0x1c 起，每格 0x3d）、指针区@0x650、AvatarCoin@0x658、user_creature::CCreatureMgr@0x6e8、WongWork::CAvatarItemMgr@0x734。

---

## 二、长尾类（649 个，符号数 < 20）

> 说明：长尾表按符号数分段；每行一类。`st*` 小写前缀多为脚本/协议数据结构；`.*Param` 多为 CMD 报文参数结构（与 IPacketDispatcher<MSG_*, st*Param> 实例一一对应，见第四节）。

### 2.1 符号数 10–19（50 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| stResetItemInfo | 19 | 重置类物品数据（嵌套 ResetItem 结构，如每日/周重置次数） | 中 |
| stRefillItemInfo | 19 | 补充/回填类物品数据（嵌套 RefillItem，如疲劳/HP 补充） | 中 |
| stLimitItemUsageInfo | 19 | 限用物品信息（嵌套 LimitInfo，每日限购/限次） | 高 |
| CItemDictionary | 19 | 物品图鉴：已获得/已查看物品标记、发送图鉴列表 | 高 |
| CItemMakingSkill | 17 | 物品制作技能：制作经验/等级/升级 | 高 |
| CSkillList | 14 | 技能列表容器：查询/插入/后学技能/组技能索引 | 高 |
| CItemAmplifier | 14 | 物品增幅器：增幅选项生成/材料校验/净化 | 高 |
| CCharacInformNotice | 14 | 角色情报通知标志（客户端公告通知） | 高 |
| BaseHeroMissionCondition | 14 | 英雄任务条件基类（邮件标题/内容/奖励/重置/重复） | 高 |
| CMission_winning_count | 13 | 任务条件：胜利次数（系列任务） | 高 |
| CMission_combo_clear | 13 | 任务条件：连击清除 | 高 |
| stStackableBoosterElement_t | 12 | 堆叠助推器元素数据 | 中 |
| CMission_winning_streak | 12 | 任务条件：连胜 | 高 |
| CMission_kill_count | 12 | 任务条件：击杀计数 | 高 |
| CMission_join | 12 | 任务条件：参与（加入）次数 | 高 |
| CItemShop | 12 | 物品商店（每日一次商店/限购 NPC 商品） | 高 |
| stAmplifyOption_t | 11 | 增幅选项数据（能力类型/值/锁定/鉴定） | 高 |
| CSchoolMgr | 11 | 学院系统管理器（用户加入/广播/区域） | 高 |
| CPvPLiveEventData | 11 | PvP 直播/在线活动数据（游玩次数、每日午夜重置） | 中 |
| CMission_within | 11 | 任务条件：指定范围内达成 | 高 |
| CMission_remains_hp | 11 | 任务条件：剩余 HP | 高 |
| CMission_move_channel_total | 11 | 任务条件：累计换线次数 | 高 |
| CMission_move_channel | 11 | 任务条件：换线 | 高 |
| CMission_kill | 11 | 任务条件：击杀（事件内） | 高 |
| CMission_hereafter_winning_count | 11 | 任务条件：此后胜利次数 | 高 |
| CItemDropRatioEvent | 11 | 物品掉率活动（开始/结束） | 高 |
| CFatigueBatteryHandle | 11 | 疲劳电池：充电/激活/结算 | 高 |
| CCharacter | 11 | 角色成长数据（按成长类型给出技能/属性），CUser 内嵌成员 | 高 |
| StackableAction::Action | 10 | 消耗品动作实例（运行/检查/分派） | 高 |
| EquipmentParameterInfo::._119 | 10 | EquipmentParameterInfo 匿名嵌套结构（编译期命名） | 中 |
| ChattingEmoticon_byLevel | 10 | 按等级解锁的聊天表情（通用/高级索引） | 高 |
| CWaitingRoomList | 10 | 等待房间列表（匹配用增删查） | 高 |
| CSimpleLog | 10 | 简单文件日志（创建/写/关） | 高 |
| CSchoolArea | 10 | 学院区域（区域映射/增删） | 高 |
| CPremiumGoldCard | 10 | 会员金卡活动事件 | 高 |
| CPCRoomWorldDropEvent2nd | 10 | 网吧世界掉落活动（第二期） | 高 |
| CObfuscator | 10 | 报文混淆/去混淆（Obfuscate1/2、Packet 级） | 高 |
| CMission_revenge | 10 | 任务条件：复仇 | 高 |
| CMission_remain_hp | 10 | 任务条件：保持 HP 存活 | 高 |
| CMission_hereafter_kill_count | 10 | 任务条件：此后击杀数 | 高 |
| CMission_hereafter_join | 10 | 任务条件：此后参与数 | 高 |
| CLocalChinaErrorDispatcher | 10 | 中国区错误分发（防沉迷/安全模式/锁串房处理） | 高 |
| CLevelRewardTable | 10 | 等级奖励表（奖励物品/邮件/职业适配） | 高 |
| CGuildAgitArea | 10 | 公会驻地（Agit）区域分配/映射 | 高 |
| CGlobalEffectManager | 10 | 全局效果管理器（注册/检测/通知全局 buff） | 高 |
| CBitManager | 10 | 位域管理（读写 bit、移位） | 高 |
| AvatarRouletteServer | 10 | 头像轮盘服务器端（拾取/初始化技能） | 高 |
| AttackInfo | 10 | 攻击信息（攻击类型/元素/意向伤害） | 高 |
| Arad_IPGProcess | 10 | IPG 商城处理：商城模式头像/金币/宠物/物品/贩卖物品 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter | 10 | 内部协议分发器：角色跳转（Arad 内部消息） | 中 |

### 2.2 符号数 5–9（339 个）

#### 2.2.1 协议分发/服务端通信（ARAD）类（约 40 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| ARAD::DISPATCHER::Dispatcher_AvartarRoulette | 9 | 头像轮盘 CMD 分发器（read/process/dispatch_sig/checkWorkState） | 高 |
| ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange | 9 | 头像隐藏选项变更 CMD 分发器 | 高 |
| ARAD::DISPATCHER::Dispatcher_AvartarCoinCount | 9 | 头像金币数量 CMD 分发器 | 高 |
| ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge | 9 | 头像耐力充值 CMD 分发器 | 高 |
| ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter | 9 | 角色跳转 CMD 分发器 | 高 |
| ARAD::DISPATCHER::Dispatcher_AradEmblemCompound | 9 | 纹章合成 CMD 分发器 | 高 |
| ARAD::DISPATCHER::Dispatcher_AradAvatarConvert | 9 | 头像转换 CMD 分发器 | 高 |
| ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest | 9 | 创建 DNF 活动请求分发器 | 高 |
| ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward | 8 | 网吧每日奖励请求分发器 | 高 |
| ARAD::DISPATCHER::Arad_InternalDispatcher | 9 | 内部消息分发器（INTER 协议）基类/实例 | 高 |
| ARAD::DISPATCHER::Arad_DatabaseDispatcher | 9 | 数据库消息分发器（DB 协议）基类/实例 | 高 |
| ARAD::DISPATCHER::Arad_IInterDispatcher | 6 | 内部协议分发器接口 | 高 |
| ARAD::DISPATCHER::Arad_IDatabaseDispatcher | 6 | 数据库协议分发器接口 | 高 |
| ARAD::DISPATCHER | 5 | 分发器命名空间/抽象基类（Dispatcher 模板体系） | 中 |
| ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge | 7 | INTER 消息：使用头像耐力充值 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kSaveServerState | 7 | INTER 消息：保存服务器状态 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kLoadServerState | 7 | INTER 消息：加载服务器状态 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kLoadRewardEventItem | 7 | INTER 消息：加载奖励活动物品 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kEmblemCompound | 7 | INTER 消息：纹章合成 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kDeleteServerState | 7 | INTER 消息：删除服务器状态 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette | 7 | INTER 消息：头像轮盘 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange | 7 | INTER 消息：头像隐藏选项变更 | 高 |
| ARAD::DISPATCHER::Arad_INTER_kAvatarConvert | 7 | INTER 消息：头像转换 | 高 |
| ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime | 7 | DB 消息：设置角色创建时间 | 高 |
| ARAD::DISPATCHER::Arad_DB_kSaveServerState | 7 | DB 消息：保存服务器状态 | 高 |
| ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem | 7 | DB 消息：保存奖励活动物品 | 高 |
| ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid | 7 | DB 消息：重置每 MID 限建角色数 | 高 |
| ARAD::DISPATCHER::Arad_DB_kLoadServerState | 7 | DB 消息：加载服务器状态 | 高 |
| ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem | 7 | DB 消息：加载奖励活动物品 | 高 |
| ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave | 7 | DB 消息：保存头像隐藏选项 | 高 |
| ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave | 7 | DB 消息：保存头像耐力 | 高 |
| ARAD::DISPATCHER::Arad_DB_kAradEventItemLog | 7 | DB 消息：Arad 活动物品日志 | 高 |
| ARAD::ScriptManager | 9 | Arad 脚本管理器（注册/加载/销毁脚本） | 高 |
| Arad_ScriptLoader | 4 | 脚本加载器（打开/解析） | 高 |
| ARAD::PVP_CHANNEL | 6 | PvP 频道数据/常量 | 中 |
| ARAD::AradWhiteAccount | 6 | Arad 白名单账号 | 中 |
| ARAD::PRINT_ERROR | 8 | 错误打印工具（ARAD 命名空间静态函数） | 中 |
| ARAD::GMCommandProcess | 8 | GM 命令处理 | 高 |
| ARAD::PUNISH_CHECK | 5 | 惩罚检查（滥用检测） | 中 |
| ARAD::PurcahseBonus | 5 | 购买奖励处理 | 中 |
| ARAD::SSendEffect | 5 | 发送效果封装 | 中 |
| ARAD::ARAD_ITEM | 5 | ARAD 协议物品数据结构 | 中 |
| ARAD::EventRewardItemArad | 3 | 活动奖励物品（Arad 协议数据） | 中 |
| ARAD::FnRewardMomoji | 3 | 奖励函数：Momoji（表情符） | 中 |
| ARAD::FnRewardLethe | 5 | 奖励函数：Lethe 洗点 | 中 |
| ARAD::FnRewardInterface | 5 | 奖励函数接口 | 中 |
| ARAD::Singleton<HeroMissionEvent> | 5 | HeroMissionEvent 单例（模板实例，见第四节） | 中 |

#### 2.2.2 任务/成就/称号相关（约 20 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| CMission_rank | 8 | 任务条件：排行达标 | 高 |
| ClearDungeonMission | 8 | 通关地下城任务 | 高 |
| AttendanceMission | 8 | 签到任务 | 高 |
| DBSaveHeroMissionEventData | 7 | 英雄任务事件数据（DB 保存） | 高 |
| DBLoadHeroMissionEventData | 7 | 英雄任务事件数据（DB 加载） | 高 |
| stQuestTriggerState_t | 7 | 任务触发状态 | 中 |
| stSendClearedMission | 5 | 已清除任务发送数据 | 中 |
| stQuestTargetCharacter_t | 5 | 任务目标角色 | 中 |
| stSelectQuestParam | 2 | 选择任务参数 | 中 |
| CNRepeatQuestList | 5 | 可重复任务列表 | 高 |
| CClearCondition | 9 | 清除条件（地下城） | 高 |
| DungeonClearCondition | 5 | 地下城通关条件 | 高 |
| DungeonClearItem | 5 | 地下城通关物品 | 中 |
| stAchievement | 3 | 成就数据 | 中 |
| stAchievement_DBData | 2 | 成就 DB 数据 | 中 |
| stTitleBook | 3 | 称号簿数据 | 中 |
| stTitleSection | 7 | 称号分类段 | 中 |
| stTitleElement | 7 | 称号元素 | 中 |
| stTitleRewardBasis | 4 | 称号奖励基础 | 中 |
| stTitleBookInfo | 4 | 称号信息 | 中 |

#### 2.2.3 CMD 报文参数结构 st*Param（约 110 个，5 符号）

> 均为 `IPacketDispatcher<MSG_*, st*Param, ch_state>` 的报文参数结构（见第四节），大多只有构造/析构与打包解包函数；此处按功能分组列出。

| 类名 | 作用 | 置信度 |
|---|---|---|
| stAddFriendParam / stRemoveFriendParam / stRegisterToBlackListParam / stDeleteToBlackListParam / stRequestBlackListParam | 好友/黑名单操作参数 | 高 |
| stGetItemParam / stDropItemParam / stDeleteItemParam / stCollectItems / stMoveItemParam / stOnSortItemParam | 物品拾取/丢弃/删除/收集/移动/整理参数 | 高 |
| stBuyItemParam / stOpenCeraPackage / stSecretShopBuyItemParam / stSecretShopOpenCloseParam | 购买/点券包/秘密商店参数 | 高 |
| stUseCoinParam / stGoldTakeIncreasingAmount / stOnUseEquipParam / stRepairEquipParam / stUseDye / stUseRenameCard / stUseLimitCube / stUseSkillParam | 金币/装备使用/修理/染色/改名卡/魔盒/技能使用参数 | 高 |
| stEnchantParam / stEnchantByBeadParam / stUpgradeDisjointMachineParam / stEnterDisjointStoreParam / stCreateDisjointStoreParam / stCloseDisjointStoreParam / stRequestDisjointItemParam / stExchangeRandomItemReward | 附魔/分解机/分解商店/交换随机奖励参数 | 高 |
| stCreateCharac / stSelectCharac / stDeleteCharac / stFinishLoadParam / stSaveCharacOption / stChangeGrowType / stRightOfChangeGrowType / stSkillInit / stOnBuySkillParam / stOnChangeSkillParam / stRefundSkill / stChangeAnotherSkillTree / stSelectStriker / stRequestCharacSkillInfo / stSkillCommandParam | 角色创建/选择/删除/加载完成/选项保存/成长类型/技能初始化/购买/变更/返还/换技能树/技能命令参数 | 高 |
| stTeleportParam / stSoloTeleportParam / stMoveMapParam / stSetAreaParam / stStartGameParam | 传送/地图移动/区域/开局参数 | 高 |
| stPartyTeleport / stPartyTeleportConfirm / stSetPartyInfo / stLeavePartyParam / stQuickPartyParam / stWalkoutPartyParam / stRequestMemberEnterParam / stMemberEnterReplyParam / stMemberSecedeParam / stCallMemberListParam / stChangeHostWarRoom / stChangeLetterStatParam | 组队/快速组队/成员进出/换队长/换房主参数 | 高 |
| stMailboxOpenParam / stMailboxSendParam / stMailboxExtractParam | 邮箱打开/发送/提取参数 | 高 |
| stGuildCargoParam / stGuildCargoPushItemParam / stGuildCargoPopItemParam / stGuildCargoMoveItemParam / stGuildCargoHistoryParam / stGuildBoardParam | 公会仓库/公会看板参数 | 高 |
| stRentItemParam / stRenameCreature / stHatchCreature / stObjectBringUp / stGrowthEquipment / stGrowthCreature / stGrowthPowerParam | 租赁/宠物改名/孵化/培养/成长装备/宠物/成长力量参数 | 高 |
| stOnRecoverStaminaParam / stOnSetPvPReadyParam / stOnPvPTimeOut / stOnGetUserInfoParam / stDieCharacInDungeon / stBossDieCheckParam / stConditionEnterBossRoom_t | 体力恢复/PvP 准备/超时/用户信息/死亡/首领死亡参数 | 高 |
| stSecurityLogParam / stClientSpecStatisticParam / stRequestIngameAdvertisement / stLogIngameAdvertisement / stChangeEmotionParam / stQuickChatParam / stChangeAvatarOption / stEquipslotSwitch / stExpandEquipslotFlagUpdate | 安全日志/客户端规格统计/游戏内广告/表情/快捷聊天/头像选项/装备槽切换参数 | 高 |
| stBreakAwayParam / stBingoQuiz / stBingoReward / stBlueMarble / stBlueMarbleConfirmInfo / stSeriaRoomDecoEvent / stFatigueAttendance / stComboSkill / stComboSkillExtensionQuickSlotReset | 活动相关参数（脱离/宾果/蓝弹珠/赛利亚房间装饰/疲劳签到/组合技） | 高 |
| stCreateDisjointStoreParam（重）/ stRequestAssaultPrice / stUltimateWarMonsterInfo / stWarRoomWp / stRegenROIResult | 势力战/终极战怪物/ROI 刷新结果参数 | 中 |
| stBonusPointValues / stSpPerLevelTable / stSkillInit（重） | 加点/每级 SP 表 | 中 |
| stMailboxSendParam（重） | 邮箱发送参数（多收件人变体，推断） | 中 |
| stItemHyperLinkMessage / stItemMakingSkill / stItemDictionary / stMonstercardBind / stImageCommunicationEquipmentUse | 物品超链/制作/图鉴/怪物卡绑定/形象通信装备使用参数 | 中 |
| stClientSpecStatisticParam（重） | 客户端规格统计参数 | 中 |
| stRequestAssaultPrice（重） | 突袭价格请求参数 | 中 |
| stGuildCargoMoveItemParam（重） | 公会仓库移动参数 | 中 |

> 注：5 符号的 st*Param 共约 110 个，上文按域合并列出；`（重）` 表示同一结构出现于多个域，不重复展开。

**st\*Param 完整清单（CMD 报文参数结构，左=结构名，右=对应 IPacketDispatcher<MSG_*> 实例）：**

| 类名 | 对应报文 | 类名 | 对应报文 |
|---|---|---|---|
| stAddFriendParam | MSG_ADD_FRIEND | stOnSortItemParam | MSG_SORT_ITEM |
| stAvatarDisjointRandomReward | MSG_AVATAR_DISJOINT_RANDOM_REWARD | stOnUseEquipParam | MSG_DECREASE_DURABILITY |
| stBingoQuiz | MSG_BINGO_QUIZ | stOpenCeraPackage | MSG_OPEN_CERAPACKAGE |
| stBingoReward | MSG_BASE | stPartyTeleport | MSG_PARTY_TELEPORT |
| stBlueMarble | MSG_BLUE_MARBLE | stPartyTeleportConfirm | MSG_PARTY_TELEPORT_CONFIRM |
| stBlueMarbleConfirmInfo | MSG_BLUE_MARBLE_CONFIRM_INFO | stQuickChatParam | MSG_QUICK_CHAT |
| stBossDieCheckParam | MSG_BOSS_DIE_CHECK | stQuickPartyParam | MSG_QUICK_PARTY |
| stBreakAwayParam | MSG_BREAK_AWAY | stRefundSkill | MSG_REFUND_SKILL |
| stCallMemberListParam | MSG_BASE | stRegenROIResult | MSG_REGENERATION_RANDOM_OPTION |
| stChangeAnotherSkillTree | MSG_CHANGE_ANOTHER_SKILL_TREE | stRegisterToBlackListParam | MSG_REGISTER_TO_BLACKLIST |
| stChangeAvatarOption | MSG_CHANGE_AVATAR_OPTION | stRemoveFriendParam | MSG_REMOVE_FRIEND |
| stChangeEmotionParam | MSG_CHANGE_EMOTION | stRenameCreature | MSG_RENAME_CREATURE |
| stChangeHostWarRoom | MSG_CHANGE_HOST_WARROOM | stRentItemParam | MSG_RENT_ITEM |
| stChangeLetterStatParam | MSG_CHANGE_LETTER_STAT | stRepairDisjointMachineParam | MSG_BASE |
| stCharacSlotExtendEffect | MSG_BASE | stRepairEquipParam | MSG_REPAIR_EQUIP |
| stClientSpecStatisticParam | MSG_CLIENT_SPEC_STATISTIC | stRequestBlackListParam | MSG_BASE |
| stCloseDisjointStoreParam | MSG_BASE | stRequestCharacSkillInfo | MSG_REQUEST_CHARAC_SKILL_INFO |
| stCollectItems | MSG_COLLECT_ITEMS | stRequestDisjointItemParam | MSG_REQUEST_DISJOINT_ITEM |
| stComboSkill | MSG_COMBO_SKILL | stRequestIngameAdvertisement | MSG_REQUEST_INGAME_ADVERTISEMENT |
| stComboSkillExtensionQuickSlotReset | MSG_COMBO_SKILL_EXTENSION_QUICK_SLOT_RESET | stRequestMemberEnterParam | MSG_REQUEST_MEMBER_ENTER |
| stCreateCharac | MSG_CREATE_CHARACTER | stRightOfChangeGrowType | MSG_RIGHT_OF_CHANGE_GROW_TYPE |
| stCreateDisjointStoreParam | MSG_CREATE_DISJOINT_STORE | stSaveCharacOption | MSG_SAVE_CHARACTER_OPTION |
| stDeleteCharac | MSG_DELETE_CHARACTER | stSecretShopBuyItemParam | MSG_SECRET_SHOP_BUY_ITEM |
| stDeleteItemParam | MSG_DELETE_ITEM | stSecretShopOpenCloseParam | MSG_SECRET_SHOP_OPEN_CLOSE |
| stDeleteToBlackListParam | MSG_DELETE_TO_BLACKLIST | stSecurityLogParam | MSG_SECURITY_LOG_PACKET |
| stDieCharacInDungeon | MSG_DIE_CHARACTER | stSelectCharac | MSG_CHARAC_SELECT |
| stDropItemParam | MSG_DROP_ITEM | stSelectDungeonParam | MSG_SELECT_DUNGEON |
| stEnchantByBeadParam | MSG_ENCHANT_BY_BEAD | stSelectStriker | MSG_SELECT_STRIKER |
| stEnchantParam | MSG_ENCHANT | stSendClearedMission | MSG_PVP_MISSION_HP_PERCENT |
| stEnterDisjointStoreParam | MSG_ENTER_DISJOINT_STORE | stSeriaRoomDecoEvent | MSG_SERIAROOM_DECO_EVENT |
| stEquipslotSwitch | MSG_EQUIPSLOT_SWITCH | stSetAreaParam | MSG_SET_USER_AREA |
| stExchangeRandomItemReward | MSG_EXCHANGE_RANDOM_ITEM_REWARD | stSetPartyInfo | MSG_PARTY_SET_INFO |
| stExpandEquipslotFlagUpdate | MSG_EXPAND_EQUIPSLOT_FLAG_UPDATE | stSkillCommandParam | MSG_SKILL_COMMAND |
| stExpertExtraction | MSG_EXPERT_EXTRACTION | stSkillInit | MSG_SKILL_INIT |
| stFatigueAttendance | MSG_FATIGUE_ATTENDANCE | stSoloTeleportParam | MSG_SOLO_TELEPORT |
| stFinishLoadParam | MSG_FINISH_LOADING | stStackableActionUse | MSG_STACKABLE_ACTION_USE |
| stGetItemParam | MSG_GET_ITEM | stStartGameParam | MSG_BASE |
| stGoldTakeIncreasingAmount | MSG_GOLD_TAKE_INCREASING_AMOUNT | stTeleportParam | MSG_TELEPORT |
| stGrowthCreature | MSG_BASE | stTournamentRewardSelectState | MSG_BASE |
| stGrowthEquipment | MSG_GROWTH_EQUIPMENT | stUpdateContractOfCubeInfo | MSG_UPDATE_CONTRACT_OF_CUBE_INFO |
| stGrowthPowerParam | MSG_GROWTH_POWER | stUpgradeDisjointMachineParam | MSG_BASE |
| stGuildBoardParam | MSG_GUILD_BOARD | stUseCoinParam | MSG_USE_COIN |
| stGuildCargoHistoryParam | MSG_BASE | stUseDye | MSG_USE_DYE |
| stGuildCargoMoveItemParam | MSG_GUILD_CARGO_MOVE_ITEM | stUseLimitCube | MSG_USE_LIMIT_CUBE |
| stGuildCargoParam | MSG_BASE | stUseRenameCard | MSG_USE_RENAME_CARD |
| stGuildCargoPopItemParam | MSG_GUILD_CARGO_POP_ITEM | stUseSkillParam | MSG_USE_SKILL |
| stGuildCargoPushItemParam | MSG_GUILD_CARGO_PUSH_ITEM | stWalkoutPartyParam | MSG_WALKOUT_PARTY |
| stHatchCreature | MSG_HATCH_CREATURE | stWarRoomWp | MSG_WARROOM_WP_PER_MONSTER |
| stImageCommunicationEquipmentUse | MSG_BASE | stOnBuySkillParam | MSG_BUY_SKILL |
| stItemDictionary | MSG_ITEM_DICTIONARY | stOnChangeSkillParam | MSG_CHANGE_SKILLSLOT |
| stItemHyperLinkMessage | MSG_ITEM_HYPER_LINK_MESSAGE | stOnGetUserInfoParam | MSG_USERINFO_REQ |
| stLeavePartyParam | MSG_BASE | stOnPvPTimeOut | MSG_PVP_TIMEOUT |
| stLogIngameAdvertisement | MSG_LOG_INGAME_ADVERTISEMENT | stOnRecoverStaminaParam | MSG_USERINFO_REQ |
| stMailboxExtractParam | MSG_MAILBOX_EXTRACT_ITEM | stOnSetPvPReadyParam | MSG_SET_READY_STATE |
| stMailboxOpenParam | MSG_BASE | stObjectBringUp | MSG_OBJECT_BRING_UP |
| stMailboxSendParam | MSG_MAILBOX_SEND | stRequestAssaultPrice | MSG_REQUEST_ASSAULT_PRICE（推断） |
| stMemberEnterReplyParam | MSG_MEMBER_ENTER_REPLY | stUltimateWarMonsterInfo | MSG_ULTIMATE_WAR_MONSTER（推断） |
| stMemberSecedeParam | MSG_MEMBER_SECEDE | stBingoReward（重） | MSG_BASE |
| stMonstercardBind | MSG_MONSTERCARD_BIND | stSendClearedMission（重） | MSG_PVP_MISSION_HP_PERCENT |
| stMoveItemParam | MSG_MOVE_ITEMSPACE | stQuestTargetCharacter_t | 任务目标角色（5 符号，非 Param） |
| stMoveMapParam | MSG_MOVE_MAP | stStackableActionUse（重） | MSG_STACKABLE_ACTION_USE |

> 其余如 stUseSkillParam/stTeleportParam 等与上表同构；`MSG_BASE` 表示该结构同时用于基础报文模板。

**补充 5–9 符号类：**

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| CCharacterView | 8 | 角色外观视图（保存/脏标志，CUser 内嵌） | 高 |
| CGuildAgitManager | 8 | 公会驻地（Agit）管理器 | 高 |
| EquipmentParameterInfo::SASPROPERTY | 7 | 装备技能附加属性结构（GetSkillPhase/GetSkillApplyCondition 操作对象） | 高 |
| stConditionEnterBossRoom_t | 5 | 条件进入 Boss 房参数（副本条件） | 中 |
| stItemMakingSkill | 5 | 物品制作技能数据（与 CItemMakingSkill 对应） | 中 |

### 2.3 符号数 2–4（235 个）

> 该段几乎全部是脚本/协议/DB 数据结构与嵌套类型（只有构造/析构/operator=，属平凡类型）。ARAD::Singleton<X> 为模板实例（见第四节），Crc32/ContentsRevision 等为常量/工具类（见第三节）。

#### 2.3.1 st\* 脚本/数据/参数结构（约 110 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| stVillageAttacked_t | 4 | 村庄被袭数据 | 中 |
| stUnlimitChallengeInfo | 4 | 无限挑战信息 | 中 |
| stTitleRewardBasis | 4 | 称号奖励基础 | 中 |
| stTitleBookInfo | 4 | 称号簿信息 | 中 |
| stStatusLevelInfo | 4 | 状态等级信息 | 中 |
| stSpPerLevelTable | 4 | 每级 SP 表 | 中 |
| stSharedServerMessageInfo | 4 | 共享服务器消息信息 | 中 |
| stSetItemBackImageInfo | 4 | 套装背景图信息 | 中 |
| stSPReturnInfo_t | 4 | SP 返还信息 | 中 |
| stQuestShop | 4 | 任务商店数据 | 中 |
| stNPCRelationEventInfo | 4 | NPC 关系事件信息 | 中 |
| stNPCFavorAndRewardInfo | 4 | NPC 好感度与奖励信息 | 中 |
| stModuleLagInfo | 4 | 模块延迟信息 | 中 |
| stMercenarySystemInfo | 4 | 佣兵系统信息 | 中 |
| stLookOuts | 4 | 关注/看守列表（CUser 内嵌 vector<stLookOuts>，推断） | 低 |
| stLimitItemUsageInfoEx | 4 | 限用物品信息扩展 | 中 |
| stLimitCubeResult | 4 | 限购魔盒结果 | 中 |
| stItemSelectRate | 4 | 物品选择率 | 中 |
| stHellParty_t | 4 | 地狱组队数据 | 中 |
| stFavorableRelationShip_t::stPeriodRewardInfo | 4 | 好感度周期奖励 | 中 |
| stFavorableRelationShip_t::stBuffRewardInfo | 4 | 好感度 buff 奖励 | 中 |
| stFavorableRelationShip_t::._140 | 4 | 好感度匿名嵌套结构 | 低 |
| stFatigueEventParam_t | 4 | 疲劳事件参数 | 中 |
| stEventIdolBringUpParam_t | 4 | 偶像培养活动参数 | 中 |
| stEquipmentGradeSample | 4 | 装备等级样本 | 中 |
| stDunGeonLagInfo | 4 | 副本延迟信息 | 中 |
| stConditionEventRewardInfo | 4 | 条件事件奖励信息 | 中 |
| stConditionEventInfo | 4 | 条件事件信息 | 中 |
| stClearTimeAverageMapKey | 4 | 通关时间均值映射键 | 中 |
| stCharacLinkSystem_t | 4 | 角色联动系统数据 | 中 |
| stCharacLinkSystemData | 4 | 角色联动数据 | 中 |
| stBurningFatigueParam_t | 4 | 燃烧疲劳参数 | 中 |
| stBloodDungeonRewardInfo | 4 | 血之地下城奖励信息 | 中 |
| stAuctionLimitItemParam_t | 4 | 拍卖限购参数 | 中 |
| stAssaultLevelGhostPanalty | 4 | 突袭等级幽灵惩罚 | 中 |
| stAssaultChaosPointWeight | 4 | 突袭混沌点权重 | 中 |
| stAssaultChaosPointGhostPanalty | 4 | 突袭混沌点幽灵惩罚 | 中 |
| stAmplifyItemScript_t | 4 | 增幅物品脚本 | 中 |
| stAdjust | 4 | 调整数据 | 低 |
| combo_script_key | 4 | 组合技脚本键 | 中 |
| cSecuUserAction | 4 | 安全用户动作（反外挂） | 中 |
| stWarPoint | 3 | 战点 | 中 |
| stUpgradeWithCompound | 3 | 合成升级数据 | 中 |
| stTitleBook | 3 | 称号簿数据 | 中 |
| stNPCEventItemInfo | 3 | NPC 事件物品信息 | 中 |
| stHackLog_t | 3 | 外挂日志 | 中 |
| stFatigueBatteryConstantTable_t | 3 | 疲劳电池常量表 | 中 |
| stClearTimeAverage | 3 | 通关时间均值 | 中 |
| stAvatarTypeSelect_t | 3 | 头像类型选择 | 中 |
| stAchievement | 3 | 成就数据 | 中 |
| stWeekendBouns | 2 | 周末奖励 | 中 |
| stVictoryPenalty | 2 | 战败惩罚 | 中 |
| stVendingMachineOutput_t | 2 | 贩卖机出货结构 | 中 |
| stUpgradeItemTicketParam_t | 2 | 升级券参数 | 中 |
| stUnusableEquipmentInfo | 2 | 不可用装备信息 | 中 |
| stUnlimitChallengeRewardInfo | 2 | 无限挑战奖励 | 中 |
| stTempRewardInfo | 2 | 临时奖励信息 | 中 |
| stSelectQuestParam | 2 | 选择任务参数 | 中 |
| stSecondEventMonster_t | 2 | 第二期活动怪物 | 中 |
| stSERVER_MESSAGE | 2 | 服务器消息 | 中 |
| stRewardPostal | 2 | 奖励邮件 | 中 |
| stRewardGiveEmotion | 2 | 奖励表情 | 中 |
| stRewardChangeStatus | 2 | 奖励状态变更 | 中 |
| stResetItemInfo::ResetItem | 2 | 重置物品项（stResetItemInfo 嵌套） | 中 |
| stRefillItemInfo::RefillItem | 2 | 补充物品项（stRefillItemInfo 嵌套） | 中 |
| stQuestShoptInitCost | 2 | 任务商店初始花费 | 中 |
| stPvPTempTable_t | 2 | PvP 临时表 | 中 |
| stNotifyIngameADInfo | 2 | 游戏内广告通知信息 | 中 |
| stNPCRelationship_t | 2 | NPC 关系数据 | 中 |
| stNPCCommonData_t::stOneBuff_t | 2 | NPC 单一 buff 项 | 中 |
| stMonsterInfo_t | 2 | 怪物信息 | 中 |
| stMonsterDamageLog_t | 2 | 怪物伤害日志 | 中 |
| stMapPlayInfo_t | 2 | 地图游玩信息 | 中 |
| stLuckPoint_t | 2 | 幸运点 | 中 |
| stLimitItemUsageInfo::LimitInfo | 2 | 限用物品项（stLimitItemUsageInfo 嵌套） | 中 |
| stLevelCond4PremiumGoldCard | 2 | 会员金卡等级条件 | 中 |
| stItemLockInfo | 2 | 物品锁信息 | 中 |
| stInvestAmplifyOption_t | 2 | 投资增幅选项 | 中 |
| stHellPartyMonsterGroupList | 2 | 地狱组队怪物组列表 | 中 |
| stGlobalEffect_t | 2 | 全局效果数据 | 中 |
| stFavorableRelationShip_t::stRewardItemElement_t | 2 | 好感度奖励物品元素 | 中 |
| stFavorableRelationShip_t::._199 | 2 | 好感度匿名嵌套结构 | 低 |
| stEventMonster_t | 2 | 活动怪物 | 中 |
| stEquipCondition | 2 | 装备条件 | 中 |
| stEnduranceRepairCost | 2 | 耐久修理费 | 中 |
| stEnamyDropAvatarElement_t | 2 | 敌人掉落头像元素 | 中 |
| stEVENTADDINFO | 2 | 活动附加信息 | 中 |
| stDeathTower_t | 2 | 死亡之塔数据 | 中 |
| stDBLogItem | 2 | DB 日志物品 | 中 |
| stCompoundRate | 2 | 合成率 | 中 |
| stClearRewardExpParameter_t | 2 | 通关奖励经验参数 | 中 |
| stClearRewardBonusExp_t | 2 | 通关奖励加成经验 | 中 |
| stAttackedMapInfo_t | 2 | 被袭地图信息 | 中 |
| stAmplifyOptionInfo_t | 2 | 增幅选项信息 | 中 |
| stAchievement_DBData | 2 | 成就 DB 数据 | 中 |
| stADDINFO | 2 | 附加信息 | 中 |
| competition_reward_result | 2 | 竞赛奖励结果 | 中 |
| comoboSkillData | 2 | 组合技数据 | 中 |
| buySkillInfo | 2 | 购买技能信息 | 中 |

#### 2.3.2 arad::Sig\* / ARAD::\* 协议数据（约 30 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| arad::SigSetCharacCreateTime | 4 | 协议：设置角色创建时间 | 高 |
| arad::SigServerState | 4 | 协议：服务器状态数据 | 高 |
| arad::SigSaveRewardEventItem | 4 | 协议：保存奖励活动物品 | 高 |
| arad::SigLoadRewardEventItem | 4 | 协议：加载奖励活动物品 | 高 |
| arad::SigAvatarRoulette | 3 | 协议：头像轮盘 | 高 |
| arad::SigAvatarHiddenOptionChange | 3 | 协议：头像隐藏选项变更 | 高 |
| arad::SigAradUseAvatarRecharge | 3 | 协议：使用头像耐力充值 | 高 |
| arad::SigAradJumpingCharacter | 3 | 协议：角色跳转 | 高 |
| arad::SigAradEventItemLog | 3 | 协议：活动物品日志 | 高 |
| arad::SigAradEmblemCompound | 3 | 协议：纹章合成 | 高 |
| arad::SigAradAvatarHiddenOptionSave | 3 | 协议：保存头像隐藏选项 | 高 |
| arad::SigAradAvatarEnduranceSave | 3 | 协议：保存头像耐力 | 高 |
| arad::SigAradAvatarConvert | 3 | 协议：头像转换 | 高 |
| arad::SigServerState::tagData | 2 | 服务器状态标签数据 | 中 |
| ARAD::SearchEventPeriod | 4 | 活动周期搜索 | 中 |
| ARAD::EventRewardItemArad | 3 | 活动奖励物品数据 | 中 |
| ARAD::FnRewardMomoji | 3 | 奖励函数：Momoji 表情 | 中 |
| ARAD_DATAS::AradMailInfo | 2 | Arad 邮件信息 | 中 |
| ARAD_DATAS::AradMailItemInfo | 3 | Arad 邮件物品信息 | 中 |
| ARAD::INTERNAL_PACKET | 2 | 内部报文结构 | 中 |
| ARAD::ARAD_CRYPT | 2 | Arad 加密（CRYPT）工具 | 中 |
| ARAD::ScriptInterface | 2 | 脚本接口 | 中 |
| ARAD::Singleton<ServiceRestrictManager> | 4 | 服务限制管理器单例（模板，见第四节） | 中 |
| ARAD::Singleton<RestrictGeolocation> | 4 | 地域限制单例（模板） | 中 |
| ARAD::Singleton<LevelupSupportEventManger> | 4 | 升级支持活动管理器单例（模板） | 中 |
| ARAD::Singleton<LevelupSupport2ndEventManger> | 4 | 升级支持第二期管理器单例（模板） | 中 |
| ARAD::Singleton<EmblemCompoundServer> | 4 | 纹章合成服务器单例（模板） | 中 |
| ARAD::Singleton<CreateDnfEventSciprtServer> | 4 | 创建 DNF 活动脚本服务器单例（模板） | 中 |
| ARAD::Singleton<CerashopAddRestrict::Manager> | 4 | 点券商城限购管理器单例（模板） | 中 |
| ARAD::Singleton<AvatarRechargeServer> | 4 | 头像充值服务器单例（模板） | 中 |
| ARAD::Singleton<AvatarFixedHiddenOptionServer> | 4 | 头像固定隐藏选项服务器单例（模板） | 中 |
| ARAD::Singleton<AvatarConvertServer> | 4 | 头像转换服务器单例（模板） | 中 |
| ARAD::Singleton<ARAD::ScriptManager> | 4 | 脚本管理器单例（模板） | 中 |
| ARAD::Singleton<ARAD::Arad_DataManager> | 4 | Arad 数据管理器单例（模板） | 中 |

#### 2.3.3 基础/工具/资源类（约 45 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| WideStringData | 4 | WideString 底层数据 | 高 |
| CharStringData | 4 | CharString 底层数据 | 高 |
| CRandomListEx<OptionValueRatio> | 4 | 随机列表模板实例（选项值比率，见第四节） | 中 |
| CGuard<CMutex> | 4 | 互斥锁 RAII 守卫（模板，见第四节） | 高 |
| CDnFTimer | 4 | 定时器 | 高 |
| CGMRecord | 4 | GM 操作记录 | 中 |
| CItemGloballyUniqueIdentifierGenerator | 4 | 物品全局唯一 ID 生成器 | 高 |
| CMyFileLog | 3 | 文件日志 | 高 |
| CToolFileLog | 3 | 工具文件日志 | 高 |
| CSimpleLog::DateTime | 3 | 日志时间戳 | 中 |
| CRandomValue | 3 | 随机值工具 | 中 |
| CStatisticMgr | 2 | 统计管理器 | 中 |
| CStringManager | 3 | 字符串资源管理（getStr/setStringResourceLoaded） | 高 |
| CRandomOptionGive | 2 | 随机选项赋予（基类/入口） | 中 |
| ChoosePrefix | 4 | 前缀选择（随机选项前缀） | 中 |
| CNNpcName | 2 | NPC 名（单条） | 中 |
| Client_Spec | 2 | 客户端规格（CUser 内嵌，版本/规格常量） | 中 |
| CharacterOption | 2 | 角色选项（_Charac_info 内嵌） | 中 |
| CharacterRestrict | 2 | 角色限制 | 中 |
| CatchItemInfo | 2 | 捕获物品信息 | 中 |
| CatchObjectInfo | 2 | 捕获对象信息 | 中 |
| ClickMarkInfo | 2 | 点击标记信息 | 低 |
| Inven_Item_Compatible | 2 | 物品兼容性标记 | 中 |
| ContinuousItemInfo | 4 | 持续物品信息（_Charac_info 内嵌 vector） | 中 |
| CountinuousItemOption | 3 | 持续物品选项 | 中 |
| CONTINUOUS_ITEM_INFO | 2 | 持续物品信息（别名/旧结构） | 中 |
| DeliveryMsg | 3 | 投递消息 | 中 |
| BuyItemDeliveryMsg | 2 | 购买物品投递消息 | 中 |
| DnfItemInfo | 3 | DNF 物品信息 | 中 |
| AradItemInfo | 4 | Arad 物品信息 | 中 |
| CraneItemInfo | 3 | 抓取机物品信息 | 中 |
| ChoiceItemInfo | 3 | 选择物品信息 | 中 |
| BoosterPoint | 2 | 助推器点数 | 中 |
| BaseItemKey | 2 | 基础物品键 | 中 |
| DifferentWeightValue | 2 | 差异化权重值 | 中 |
| AradBonusItem::Data | 2 | Arad 奖励物品数据（嵌套） | 中 |
| AvatarRouletteServer::PickedAvatarInfo | 2 | 轮盘选中头像信息（嵌套） | 中 |
| CExpertJobStatistic::ExpertJobKey | 3 | 专家职业统计键（嵌套） | 中 |
| CUser::CharacMoneyLog | 3 | 角色金钱日志（CUser 内嵌，6 组） | 高 |
| CUser::_DBLogItemInfo | 2 | CUser DB 日志物品信息（内嵌 vector） | 高 |
| cMyTraceNoop | 3 | 空跟踪宏 | 中 |
| ActiveActionFileSet | 4 | 活动动作文件集 | 低 |
| AradServerStateMessage | 2 | 服务器状态消息 | 中 |
| DungeonUserShotCount | 3 | 副本用户射击计数 | 中 |
| AppearMap | 3 | 出现地图 | 低 |

#### 2.3.4 嵌套/内部结构与杂项（约 50 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| collision_detection::Point | 2 | 碰撞检测点 | 高 |
| collision_detection::Rectangle | 3 | 碰撞检测矩形 | 高 |
| collision_detection::CCollisionDetection<village_object::IObject*> | 3 | 碰撞检测模板实例（村庄对象，见第四节） | 中 |
| EquipmentParameterInfo::EquipmentAuraAppendageData | 2 | 装备光环追加数据（嵌套） | 中 |
| EquipmentParameterInfo::RebirthAppendageinfo | 3 | 装备重生追加信息（嵌套） | 中 |
| EquipmentParameterInfo::._159 | 2 | 装备参数匿名嵌套结构 | 低 |
| stResetItemInfo::ResetItem（重） | 2 | 重置物品项 | 中 |
| stRefillItemInfo::RefillItem（重） | 2 | 补充物品项 | 中 |
| stLimitItemUsageInfo::LimitInfo（重） | 2 | 限用物品项 | 中 |
| stFavorableRelationShip_t::stRewardItemElement_t（重） | 2 | 好感度奖励元素 | 中 |
| stFavorableRelationShip_t::._140/._199（重） | 4/2 | 好感度匿名嵌套 | 低 |
| stNPCCommonData_t::stOneBuff_t（重） | 2 | NPC 单 buff | 中 |
| stLookOuts（重） | 4 | 关注列表 | 低 |
| arad::SigServerState::tagData（重） | 2 | 服务器状态标签 | 中 |
| CLocalChinaErrorDispatcher::_PacketErrorCheck | 2 | 中国区报文错误检查（嵌套） | 高 |
| CMDPacketStruct::STBaseRequest | 2 | CMD 基础请求头 | 高 |
| CMDPacketStruct::_STReqEventDungeonDestoryObject | 2 | 事件副本：销毁对象请求 | 高 |
| CMDPacketStruct::_STReqEventDungeonClearRoom | 2 | 事件副本：清房请求 | 高 |
| CMDPacketStruct::_ReqAdvanceAltarUpgradeGage | 2 | 祭坛：升级槽请求 | 高 |
| CMDPacketStruct::_ReqAdvanceAltarSummonUnit | 2 | 祭坛：召唤单位请求 | 高 |
| CMDPacketStruct::_ReqAdvanceAltarSetSlot | 2 | 祭坛：设置槽请求 | 高 |
| CMDPacketStruct::_ReqAdvanceAltarResetStar | 2 | 祭坛：重置星请求 | 高 |
| CMDPacketStruct::_ReqAdvanceAltarPause | 2 | 祭坛：暂停请求 | 高 |
| CMDPacketStruct::_ReqAdvanceAltarGetAchievementReward | 2 | 祭坛：成就奖励请求 | 高 |
| CMDPacketStruct::_ReqAdvanceAltarExchangeSlot | 2 | 祭坛：交换槽请求 | 高 |
| CMDPacketStruct::_ReqAdvanceAltarBuyItem | 2 | 祭坛：购买物品请求 | 高 |
| CDeathTowerValueStatistic | 2 | 死亡之塔数值统计 | 中 |
| CDeathTowerPlayDataStatistic | 2 | 死亡之塔游玩数据统计 | 中 |
| CHumanCertifier | 2 | 真人认证（验证码/人机） | 中 |
| CDnFTimerFactory | 2 | 定时器工厂 | 中 |
| CBelong | 2 | 归属（公会驻地/势力归属，推断） | 低 |
| CPVPPlayerRate | 3 | PvP 玩家胜率（InsertDatabase） | 高 |
| CPVPMapCount | 3 | PvP 地图计数（InsertDatabase） | 高 |
| CHelpedPartyCount | 3 | 被帮助组队计数 | 中 |
| CSchoolMember | 3 | 学院成员 | 中 |
| CharacLevelUpGiftAccountOnce | 4 | 角色升级礼包（账号一次） | 高 |
| CUserTeen | 3 | 青少年验证 | 高 |
| CUserResetTimeGateQuest | 3 | 重置时间门任务 | 中 |
| CUserModifier | 2 | 用户属性修正器 | 低 |
| CGameMasterCharacter | 3 | GM 角色（CUser 静态缓存） | 高 |
| CGameMasterCharacterItemDropRate | 3 | GM 角色掉率 | 中 |
| CBuffGroup | 3 | buff 组 | 中 |
| BuffInfo | 3 | buff 信息 | 中 |
| BingoData | 3 | 宾果数据 | 中 |
| AvatarVariation::AvatarColorInfo | 4 | 头像颜色信息 | 中 |
| AvatarVariation::colorRGB | 3 | 头像 RGB | 中 |
| AvatarOptionChangeType | 3 | 头像选项变更类型 | 中 |
| AradAppSystem | 3 | 应用系统 | 中 |
| ARIA | 3 | ARIA 加密 | 高 |
| app | 3 | 应用命名空间/全局（见第三节） | — |
| arad | 7 | arad 命名空间（见第三节） | — |
| CQuickChattingOption | 3 | 快速聊天选项 | 高 |
| CHotkeyOption | 3 | 热键选项 | 高 |
| CChattingEmoticonConfig | 3 | 表情配置 | 高 |
| stSelectQuestParam（重） | 2 | 选择任务参数 | 中 |
| CHARAC_DATA | 3 | 角色数据装载结构（Reset） | 中 |
| CHARAC_QUEST_SHOP_DATA | 3 | 任务商店角色数据（clear，CQuestShop 数据来源） | 高 |

### 2.4 符号数 1（25 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| stUnlimitChallengeKey | 1 | 无限挑战键 | 低 |
| stLevelSection | 1 | 等级区间 | 低 |
| stAvatarExpansionInfo_t | 1 | 头像扩展信息 | 低 |
| stAvatarEmblemInfo_t | 1 | 头像纹章信息 | 低 |
| stAuraAvatarOption | 1 | 光环头像选项 | 低 |
| cHistoryTrace | 1 | 历史跟踪 | 低 |
| arad::SigAradEmblemCompound::materialInfo | 1 | 纹章合成材料信息（嵌套） | 中 |
| ChronicleRandomOptionInfo | 1 | 编年史随机选项信息 | 低 |
| CharStringHashTrait::HashKey | 1 | CharString 哈希键函数对象 | 中 |
| CharStringHashTrait::EqualKey | 1 | CharString 相等键函数对象 | 中 |
| CValueStatistic::stValueStatistic | 1 | 数值统计项（嵌套） | 中 |
| CUserEventUtil | 1 | 用户事件工具（静态函数，推断） | 低 |
| CUser::st_monstorkill | 1 | 用户怪物击杀记录（嵌套） | 中 |
| CUser::._379 | 1 | CUser 匿名嵌套结构 | 低 |
| CRelayBattle | 1 | 接力战（推断） | 低 |
| CMyRawFileLog | 1 | 原始文件日志 | 中 |
| CLocalChina_User | 1 | 中国区用户扩展（推断） | 低 |
| CInventory::AvatarVisibleData | 1 | 头像可见数据（嵌套） | 中 |
| CHellPartyItemStatistic | 1 | 地狱组队物品统计 | 中 |
| CEloRating | 1 | ELO 评分 | 中 |
| CDescending | 1 | 下降/递减结构 | 低 |
| CCirculationStatistic::stCirculationStatistic | 1 | 流通统计项（嵌套） | 中 |
| AbsoluteChangeStat | 1 | 绝对变化统计 | 低 |
| ARAD::DISPATCHER::Arad_InternalDispatcher::DeleteDispatcher | 1 | 内部分发器删除函数（静态） | 中 |
| ARAD::DISPATCHER::Arad_DatabaseDispatcher::DeleteDispatcher | 1 | 数据库分发器删除函数（静态） | 中 |

---

## 三、假类 / 常量组 / 枚举组识别

以下类路径在 demangled 符号中并非真正的可实例化类，而是全局常量、静态工具、命名空间或编译器生成命名：

| 类路径 | 符号数 | 真实性质 | 依据 |
|---|---|---|---|
| Crc32 | 2 | 静态 CRC32 工具（getCrc32Table/crc32），无实例 | 方法全为静态计算 |
| ContentsRevision | 2 | 内容版本常量（仅析构符号） | 无实例方法 |
| ContentsOptionRevision | 2 | 内容选项版本常量（仅析构符号） | 无实例方法 |
| Client_Spec | 2 | 客户端规格常量结构（CUser 内嵌，仅 ctor） | CUser ctor 中实例化，无行为方法 |
| arad | 7 | 命名空间 arad 被当成类；实际包含全局 Sig* 对象（SigServerState*、SigAvatarRoulette* 等） | 方法列表均为 `Sig*` 指针成员 |
| app | 3 | 全局应用命名空间/单例全局对象 | 仅 AradAppSystem 相关引用 |
| ARAD::DISPATCHER::Arad_InternalDispatcher::DeleteDispatcher | 1 | 静态删除函数（内部消息分发器清理） | 仅一个静态符号 |
| ARAD::DISPATCHER::Arad_DatabaseDispatcher::DeleteDispatcher | 1 | 静态删除函数（DB 分发器清理） | 仅一个静态符号 |
| EquipmentParameterInfo::._119 / ._159 | 10/2 | 编译器生成的匿名嵌套结构（布局占位） | 无业务方法 |
| stFavorableRelationShip_t::._140 / ._199 | 4/2 | 编译器生成的匿名嵌套结构 | 无业务方法 |
| CUser::._379 | 1 | 编译器生成的匿名嵌套结构 | 无业务方法 |
| CharStringHashTrait::HashKey / EqualKey | 1/1 | 哈希函数对象（std::hash 风格仿函数） | 仅 operator() 类符号 |
| EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX | — | 枚举（出现在 sync_script::CSyncScript 签名中），非类 | demangled 签名 |
| CACHE_CHARACTER_TYPE | 5 | 边界情形：命名像枚举，实为可池化缓存角色对象（StaticPool<CACHE_CHARACTER_TYPE,1000>、GetMemberPosition、exchange_server::CCacheCharacterMgr 使用） | StaticPool 实例 + 方法 |
| Inven_Item::ITEM_TYPE | — | 枚举（背包分类），非独立类 | 大量签名引用 |
| StackableAction::Type | — | 枚举（动作类型），非独立类 | CUser::verifyStackableItemProcess 签名 |

> 结论：G1 组无 k 前缀全局常量类；纯枚举/常量组主要以上述形式出现，已归入本节，不进主表。

---

## 四、模板基类用途与实例化点

### 4.1 IPacketDispatcher<MSG, Param, ch_state>

- 用途：CMD 报文分发模板基类，方法集为 `dispatch_template/dispatch_sig/check_state/send`（例：`IPacketDispatcher<MSG_ENCHANT, stEnchantParam, (ch_state)0>`），按客户端状态（ch_state 0=初始/1=选角/2=游戏中/3=城镇等）过滤报文；`read/process/dispatch_sig` 由具体 Dispatcher 类实现。
- 实例化点：全符号中共 136 个 `IPacketDispatcher<MSG_*, Param, ch_state>` 实例；G1 组内的实例化参数即 2.2.3 的 st*Param 清单（MSG_ADD_FRIEND、MSG_GET_ITEM、MSG_USE_SKILL、MSG_BUY_ITEM、MSG_CHANGE_SKILLSLOT、MSG_MAILBOX_SEND 等）。G1 中的 `ARAD::DISPATCHER::Dispatcher_*`（头像轮盘/纹章合成/头像转换/隐藏选项/耐力充值/角色跳转/事件创建/网吧奖励等 12 个）与 `Arad_INTER_k*`/`Arad_DB_k*`（各 9 个）即该模板体系在「用户↔Arad 服务端」与「用户↔DB」两侧的具体化。

### 4.2 StaticPool<T, N> / DynamicPool<T>

- 用途：固定容量池（Acquire/Free/Remain/Size）与动态池（SetPoolSize/IsValidPtr），用于高频对象（连接/交易/队伍/邮件/消息缓冲）的内存复用。
- 实例化点（全符号统计，G1 域相关加粗）：
  - `StaticPool<CUser, 600>`、`StaticPool<CTradeSpace, 300>`、`StaticPool<CACHE_CHARACTER_TYPE, 1000>`（G1 核心对象）
  - `StaticPool<WarRoom, 40>`、`StaticPool<PvP_Room, 600>`、`StaticPool<CParty, 600>`、`StaticPool<QuickParty::CQuickParty, 300>`、`StaticPool<WongWork::CMailBox::CMail, 20>`、`StaticPool<WongWork::CDeathTower, 600>`、`StaticPool<WongWork::CBossTower, 600>`（其他组）
  - `DynamicPool<Stream>`、`DynamicPool<SmallStream>`、`DynamicPool<BigStream>`、`DynamicPool<PacketBuf>`（报文缓冲）；`DynamicPool<user_creature::CEgg>`、`DynamicPool<user_creature::CCreature>`、`DynamicPool<WongWork::Avatar_Item>`、`DynamicPool<WongWork::IPG::SIPGData>`（G1 物品/宠物域相关）

### 4.3 其他模板实例

- `ARAD::Singleton<X>`：单例模板，15 个实例（ServiceRestrictManager、RestrictGeolocation、LevelupSupportEventManger、LevelupSupport2ndEventManger、EmblemCompoundServer、CreateDnfEventSciprtServer、CerashopAddRestrict::Manager、AvatarRechargeServer、AvatarFixedHiddenOptionServer、AvatarConvertServer、ARAD::ScriptManager、ARAD::Arad_DataManager、HeroMissionEvent），见 2.3.2。
- `CRandomListEx<OptionValueRatio>`：带权重随机列表（随机选项生成）。
- `CGuard<CMutex>`：互斥锁 RAII 守卫。
- `collision_detection::CCollisionDetection<village_object::IObject*>`：村庄对象碰撞检测。
- `InvalidCharData::stRangeElement<T>`：范围元素模板，实例化 `<unsigned char>` 与 `<unsigned short>`。

---

## 五、核心类依赖关系速览

```
CUser（1074 符号，聚合根）
├─ 基类(偏移0) CUserCharacInfo ──(0x10/0x14)→ _Charac_info ──→ CInventory@0xda / SkillSlot@0x892 / CCargo@0xdaa / CharacterOption / _Additioal_info / STPowerWarCharacData / SIG_LOAD_PREMIUM_LETHE ...
├─ 内嵌（构造函数反汇编顺序）：
│   CNetwork<4096,450000>、UserMercenaryInfoMgr、map<uint,map<uint,vector<RentalInfo>>>（InstanceRentalSystem）
│   CAccountCargo、CGameOption、STBreakAwayRewards、STSkillCommandData::STCommand[49]、Client_Spec
│   CPacketVerifier、WongWork::CUserPremium、WongWork::CHackAnalyzer、Secu_AccountHacking、CodeHackCheckStorage
│   cUserHistoryLog、charac_expand::CDataMgr、InventoryMemory、UserQuest、CDungeonGainedGold、CCharacterView
│   vector<_Charac_info>（角色槽缓存）、STGuildDBInfoOnly、STGuildAgitDBInfo、CerashopAddRestrict::UserInfo
│   APSystem::CActionPointManager、advancealtar::CharacAdvanceAltarManager、Character、GrowthWeaponEvent、GrowthCreatureEvent、BingoData
│   WongWork::CMCAPManager、XNuclear::CHades、Secu_GoldControl、Secu_HackLogCheck、Sanicova::CPad、WongWork::CSecurityCard
│   PIReceiverManager、PISenderManager、Mutex×2、以及 map/set/list/vector 容器（疲劳/技能命令/公会/锁定/黑名单/广告/延迟统计等）
└─ 主要经 CUserCharacInfo 访问：CInventory / SkillSlot / CCargo / CGameOption / CAccountCargo / UserQuest / CTradeSpace

CInventory ── 内嵌：Inven_Item[25]、AvatarCoin（金币+头像币+付费币+活动币）、user_creature::CCreatureMgr、WongWork::CAvatarItemMgr、InventoryMemory*、CUser* parent
CItem/CStackableItem/CEquipItem ── 只读定义，数据源 STItemScript/STEquipmentScript/STStackableItemScript（推断），由 CItemList 工厂创建 → Inven_Item 实例
SkillSlot ── CUser(parent)、CSkill、_Mastered_skill、CSkillList、CPremiumLetheManager（洗点状态机操作它）
任务域：CMissionList_Charac ── CMission ── 条件类 CMission_kill/join/winning_count/combo_clear/within/revenge/remains_hp/move_channel 等（同一基类派生，Update/_isAcceptCondition/isClearable 模板）
称号/成就域：CTitleBook、CAchievement ── 共享 ENUM_TITLE_BOOK_CATEGORY/stTitleSection/Quest；CAchievement 发邮件奖励
交易域：CTradeSpace ── CUser* 双方（set_traders）、TradeSlot、Mutex；CInventory/CCargo 提供物品
仓库域：CAccountCargo（账号）/ CCargo（角色）── Inven_Item 槽 + InventoryMemory + CUser parent
选项域：CGameOption ── CETCOption / CHotkeyOption / CQuickChattingOption / CChattingEmoticonConfig
状态域：CUserCharacInfo ── PvpResultType、map<int,GameResultType>、WongWork::CDungeonClear；外部经 CUserCharacInfo 设置/查询角色所有数值
```

主要跨组依赖（供其他 G 组接线）：
- CUser → G2+ 的 `_Charac_info`（角色槽数据）、`CParty/PvP_Room/WarRoom/QuickParty`（池化对象）、`WongWork::CMailBox`、`GameWorld/CGameManager`（推断，经 party/房间接口）。
- CInventory → `user_creature::CCreatureMgr`、`WongWork::CAvatarItemMgr/Avatar_Item`、`InventoryMemory`。
- SkillSlot → `_Mastered_skill`（技能数据，其他组）、`SIG_COMBO_SKILL`（协议）。
- CUser 安全域 → `WongWork::CHackAnalyzer/CUserPremium/CMCAPManager/CSecurityCard`、`Secu_*`、`XNuclear::CHades`、`CodeHackCheckStorage`（安全子系统组）。
- 任务/称号/成就 → `Quest`、`stTitleSection`、`item_lock::stItemLockRef`（其他组的协议/数据类）。

---

## 六、统计摘要

- 核心类（≥20 符号）：33 个，全部给出作用/关键方法/依赖/子系统，置信度以高为主（CUser、CUserCharacInfo、CInventory、物品家族等均有反汇编结构证据）。
- 长尾类（<20）：649 个，逐类一句话说明；其中 st*Param 报文参数（约 110 个）与 CMDPacketStruct 报文结构（22 个）证据等级最高（与 IPacketDispatcher<MSG_*> 一一对应）。
- 假类/常量组：17 项（含 arad/app 命名空间、Crc32/Contents* 常量、匿名嵌套结构、静态删除函数）。
- 模板实例：IPacketDispatcher 136 个 MSG 实例化；StaticPool/DynamicPool 各 10+ 个实例；ARAD::Singleton 15 个；另有 CRandomListEx/CGuard/CCollisionDetection/stRangeElement 实例。

#### 2.2.4 统计/日志/网络/安全工具（约 55 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| CValueStatistic | 8 | 数值统计容器（嵌套 stValueStatistic） | 中 |
| CVendingMachineStatistic | 8 | 自动贩卖机统计（出货物品/使用次数/DB 更新） | 高 |
| CLevelDungeonPlayStatistic | 8 | 等级副本游玩统计 | 中 |
| CCompoundEmblemStatistic | 8 | 纹章合成统计 | 中 |
| CCirculationStatistic | 8 | 循环/流通统计（嵌套 stCirculationStatistic） | 中 |
| CExpertJobStatistic | 7 | 专家职业统计（ExpertJobKey） | 中 |
| CLocalGlobal_DB_STATICS_BOSSTOWER | 7 | 本地全局 DB 统计：首领塔（Boss Tower） | 中 |
| CUserPlayTimeStatisticMgr | 6 | 用户在线时长统计管理器 | 高 |
| CCubeStatistic | 6 | 魔盒（Cube）使用统计 | 中 |
| CCommonStatisticsMgr | 6 | 通用统计管理器 | 中 |
| CStatisticContainer | 5 | 统计容器 | 中 |
| CPowerWarPacketLog | 8 | 势力战报文日志 | 高 |
| CPacketTracer | 8 | 报文跟踪器（发包记录） | 高 |
| CPacketTimeChecker | 8 | 报文时间检查（防超速发包） | 高 |
| CFieldLengthChecker | 7 | 报文字段长度校验 | 高 |
| CSlotBoundChecker | 8 | 槽位绑定检查（绑定物品槽） | 高 |
| CAppLoadChecker | 9 | 程序加载检查 | 中 |
| CCompressedBlob | 8 | 压缩数据块（compress/uncompress） | 高 |
| COpensslRSA | 8 | OpenSSL RSA 加解密 | 高 |
| CodePage | 8 | 代码页转换（client/DB/script 多向转换） | 高 |
| DBThread | 8 | DB 写线程（日志 DB 开关） | 高 |
| DispatchThread | 7 | 分发线程 | 高 |
| AcceptThread | 7 | 接受连接线程 | 高 |
| DBDispatcher | 6 | DB 分发器 | 中 |
| CMutex | 6 | 互斥锁封装 | 高 |
| CDBEnviroment | 6 | DB 环境/连接配置 | 中 |
| CSystemTime | 9 | 系统时间工具（日期/秒/时钟） | 高 |
| CommonTime | 7 | 通用时间（创建/设置/转换） | 高 |
| CUnixTimer | 5 | Unix 计时器（间隔/最后时间） | 高 |
| BigStreamPool | 9 | 大流内存池（Acquire/Free/Remain） | 高 |
| BigStream | 5 | 大流对象（内存流） | 中 |
| CStreamBuffer | 8 | 流缓冲（追加/字符串化/<<） | 高 |
| CFileLogWriter | 7 | 文件日志写入器 | 高 |
| CFLog | 7 | 格式化日志 | 高 |
| CExceptLog | 5 | 异常日志 | 高 |
| CSwitchLog | 5 | 开关日志 | 中 |
| CheckSecurityProtection | 5 | 安全保护检查 | 高 |
| CodeHackCheckRangeEx | 5 | 代码外挂检查范围扩展 | 中 |
| Arad_DevMgr_Server_Proxy | 8 | Arad 开发管理器服务器代理 | 中 |
| CUserGlobalInfoHandle | 7 | 全局唯一信息句柄（uniqueid 查询/重置） | 高 |
| CAdvertisementExposeInfo | 6 | 广告曝光信息 | 中 |
| APCSpeech | 9 | APC 语音/台词数据 | 中 |
| cMyTrace | 5 | 跟踪宏/日志（MyTrace） | 中 |

#### 2.2.5 物品/商店/掉落/奖励（约 60 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| DispatcherResetRandomOption | 9 | 随机选项重置 CMD 分发器 | 高 |
| DIspatcher_OneDayLetheTicket | 9 | 一日 Lethe 门票 CMD 分发器 | 高 |
| stVendingMachineInfo_t | 8 | 自动贩卖机信息 | 中 |
| stVendingMachine_t | 7 | 自动贩卖机数据 | 中 |
| stStackableBooster_t | 8 | 堆叠助推器数据（booster 组） | 中 |
| stStackableBoosterItemInfo_t | 6 | 堆叠助推器物品信息 | 中 |
| stDungeonAssignItem_t | 8 | 地下城分配物品 | 中 |
| stUnlimitChallengeMessageInfo | 7 | 无限挑战消息信息 | 中 |
| stIndependentDropRateControl | 7 | 独立掉落率控制 | 中 |
| stIndependentDropInfo | 7 | 独立掉落信息 | 中 |
| stAvatarDisjointRandomReward | 7 | 头像分解随机奖励 | 中 |
| stMonsterIndependentDrop_t | 7 | 怪物独立掉落 | 中 |
| BaseItemSelectionValue | 7 | 基础物品选择值（掉落权重） | 中 |
| AradBonusItem | 7 | Arad 奖励物品 | 中 |
| stEnamyDropAvatarInfo_t | 6 | 敌人掉落头像信息 | 中 |
| stDisjointResult | 6 | 分解结果 | 中 |
| stNpcSales | 6 | NPC 贩卖列表 | 中 |
| stDungeonSales | 6 | 地下城贩卖列表 | 中 |
| stPremiumTable_t | 5 | 会员（premium）表 | 中 |
| stLimitSlowDown | 5 | 限购减速/限流数据 | 低 |
| stLimitCubeInfo | 5 | 限购魔盒信息 | 中 |
| stExpertExtraction | 5 | 专家职业提取（expert extraction） | 中 |
| stCharacSlotExtendEffect | 5 | 角色槽扩展效果 | 中 |
| stBloodPoint | 5 | 血之点数 | 中 |
| BoosterSelectInfo | 5 | 助推器选择信息 | 中 |
| BoosterGageData | 5 | 助推器槽数据 | 中 |
| BuyItemParam | 5 | 购买物品参数（非 CMD 版，内部） | 中 |
| AbnormalUseStackable | 5 | 异常使用堆叠物品记录 | 中 |
| AssignNpc | 5 | 分配 NPC | 低 |
| DisjointMachineGrade | 5 | 分解机等级 | 中 |
| DyeInfo | 7 | 染色信息（颜色索引） | 高 |
| stServerIndex | 5 | 服务器索引 | 低 |
| stUpdateContractOfCubeInfo | 5 | 更新魔盒契约信息 | 中 |
| stTournamentRewardSelectState | 5 | 锦标赛奖励选择状态 | 中 |
| stTournamentRewardSelect | 5 | 锦标赛奖励选择 | 中 |
| stSelectDungeonParam | 5 | 选择地下城参数 | 中 |
| stRepairDisjointMachineParam | 5 | 修理分解机参数 | 中 |
| CRandomOptionGiveNormal | 5 | 普通随机选项赋予 | 高 |
| CModifiedRandomOptionGive | 5 | 修改版随机选项赋予 | 高 |
| CItemGloballyUniqueIdentifierPrint | 5 | 物品全局唯一标识打印 | 中 |
| CACHE_CHARACTER_TYPE | 5 | 缓存角色数据（池化 1000 个，exchange_server::CCacheCharacterMgr 使用） | 中 |
| CAuctionAveragePrice | 7 | 拍卖行平均价格 | 中 |
| AvatarVariation | 7 | 头像变色（AvatarColorInfo/colorRGB） | 高 |
| AdditionalEffectData | 7 | 附加效果数据 | 中 |
| ActiveStaticInfo | 7 | 生效静态信息 | 低 |
| CreatureScriptSkillInfo | 7 | 宠物脚本技能信息 | 中 |
| CreatureAdditionalAnimation | 7 | 宠物附加动画 | 中 |
| Action_SendMail | 9 | 邮件发送动作（活动邮件） | 高 |
| CDelivery | 8 | 投递/邮件投递服务 | 高 |
| stPartyTelePort | 6 | 组队传送 | 中 |
| CNNpcNameVector | 5 | NPC 名向量 | 中 |
| CLottery_NeedMoney | 8 | 彩票所需金钱 | 中 |
| CLocalChina_DB_LastDay_BreakAway | 8 | 中国区 DB：昨日脱离记录 | 中 |
| CLocalChina_DB_BreakAwayReset | 8 | 中国区 DB：脱离重置 | 中 |
| Dispatcer_polic_one_to_one_chat_disable | 8 | 一对一聊天禁用策略分发器 | 高 |
| DimensionActivationRewardData | 8 | 维度激活奖励数据 | 中 |
| stBloodDungeon_t | 5 | 血之地下城数据 | 中 |
| stUpdateContractOfCubeInfo（重） | 5 | 魔盒契约更新（结构） | 中 |

#### 2.2.6 角色/技能/表情/成长（约 45 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| ChattingEmoticonBase | 9 | 聊天表情基类 | 高 |
| ChattingEmoticon_byPremium | 8 | 会员聊天表情 | 高 |
| CChattingEmoticonList | 8 | 聊天表情列表（加载/工厂/查找） | 高 |
| CChattingEmoticonConfigRow | 5 | 表情配置行 | 中 |
| CETCOption | 5 | ETC 选项（CGameOption 子结构） | 高 |
| CSuccessJobNode | 9 | 转职成功节点 | 中 |
| CRewardUserList | 9 | 奖励用户列表 | 中 |
| CSkillTreeParam | 7 | 技能树参数（发送技能点返回信息/设置技能树） | 高 |
| Character | 6 | 角色成长属性（growtype 技能/属性，CUser 内嵌） | 高 |
| CharacterKind | 5 | 角色种类（排序键） | 中 |
| CharacterEtcStats | 5 | 角色 ETC 属性 | 中 |
| ChangeStatusData | 5 | 状态变更数据 | 中 |
| CCharacList | 6 | 角色列表 | 高 |
| CReliablePerson | 6 | 可信人（实名/可靠用户） | 中 |
| CExpertJobList | 6 | 专家职业列表 | 高 |
| stQuestShopStatus | 9 | 任务商店购买状态 | 中 |
| stMapMonsterKillChecker_t | 9 | 地图怪物击杀检查器数据 | 中 |
| stOneEmotionData | 8 | 单一表情数据 | 中 |
| stEmotionTypeTagsInfo | 5 | 表情类型标签信息 | 中 |
| stLuckPointDeduction_t | 7 | 幸运点扣除数据 | 中 |
| stLightServerNotice_t | 7 | 服务器公告（light notice） | 中 |
| stCustomConditionMsg | 7 | 自定义条件消息 | 中 |
| combo_script_data | 7 | 组合技脚本数据 | 中 |
| stFavorableRelationShip_t::stLevelRewardInfo | 7 | 好感度等级奖励信息 | 中 |
| stFavorableRelationShip_t::stRewardItem_t | 5 | 好感度奖励物品 | 中 |
| stFavorableRelationShip_t::stRewardItemInfo_t | 5 | 好感度奖励物品信息 | 中 |
| stBloodWarBgmTable | 8 | 血战 BGM 表 | 中 |
| dungeonEventHanaseStruct | 8 | 副本事件「花咲」结构（推断） | 低 |
| channel_script_t | 8 | 频道脚本 | 中 |
| channel_info_t | 7 | 频道信息 | 中 |
| channel_dungeon_info_t | 7 | 频道副本信息 | 中 |
| stNeoplePCBANG | 8 | 网吧（PCBANG）数据 | 中 |
| stPartyMatchingInfo | 8 | 组队匹配信息 | 中 |
| DimensionPartyCount | 7 | 维度组队计数 | 中 |
| CBusinessImpl | 7 | 业务实现基类（推断为服务器业务接口） | 低 |
| CGlobalEffect | 8 | 全局效果（buff） | 高 |
| BackGroundEffect | 8 | 背景效果 | 中 |
| BackGroundEffectBlock | 8 | 背景效果块 | 中 |
| CBossDungeonEntranceLog | 9 | Boss 副本进入日志 | 高 |
| ConditionLevelChkDungeon | 6 | 条件等级检查副本（活动副本判定） | 高 |
| stMercenaryRewardGroup | 7 | 佣兵奖励组 | 中 |
| stMercenaryCompetitionArea | 7 | 佣兵竞赛区域 | 中 |
| CPrePayInfoMgr | 5 | 预付费信息管理器 | 中 |
| CNexonMsgTable | 5 | Nexon 消息表（按 ID 取字符串） | 高 |
| CMatchingSystem | 5 | 匹配系统（GetMatchingSystem） | 高 |
| CNormalMatch | 5 | 普通匹配 | 高 |
| CLadderMatch | 5 | 排位匹配 | 高 |
| CTournamentMatch | 5 | 锦标赛匹配 | 高 |

#### 2.2.7 公会/势力/统计表/小结构（约 40 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| stGuildAgitManager | 8 | 公会驻地管理器 | 高 |
| stFavorableRelationShip_t 嵌套（见 2.1/2.2.6） | — | — | — |
| stRankSystemInfo::stDungeonRankSystem_t | 5 | 排行系统：地下城排行结构 | 中 |
| stRankSystemInfo::stDungeonClearTimeData | 5 | 排行系统：通关时间数据 | 中 |
| stRankSystemInfo::stComboIntervalBoundary | 5 | 排行系统：连击区间边界 | 中 |
| stWarRoomWp | 5 | 战房 WP（每怪 WP） | 中 |
| stUltimateWarMonsterInfo | 5 | 终极战怪物信息 | 中 |
| stRegenROIResult | 5 | ROI 再生结果 | 低 |
| stBonusPointValues | 5 | 奖励点数值 | 中 |
| stSpPerLevelTable | 4 | 每级 SP 表（见 2.3） | 中 |
| stStatusLevelInfo | 4 | 状态等级信息（见 2.3） | 中 |
| stClearTimeAverage | 3 | 通关时间均值（见 2.3） | 中 |
| stClearTimeAverageMapKey | 4 | 通关时间均值映射键（见 2.3） | 中 |
| stFatigueBatteryConstantTable_t | 3 | 疲劳电池常量表（见 2.3） | 中 |
| stFatigueEventParam_t | 4 | 疲劳事件参数（见 2.3） | 中 |
| stBurningFatigueParam_t | 4 | 燃烧疲劳参数（见 2.3） | 中 |
| stAssaultLevelGhostPanalty | 4 | 突袭等级幽灵惩罚（见 2.3） | 中 |
| stAssaultChaosPointWeight | 4 | 突袭混沌点权重（见 2.3） | 中 |
| stAssaultChaosPointGhostPanalty | 4 | 突袭混沌点幽灵惩罚（见 2.3） | 中 |
| stWarPoint | 3 | 战点（见 2.3） | 中 |
| stLuckPoint_t | 2 | 幸运点（见 2.3） | 中 |
| stVictoryPenalty | 2 | 战败惩罚（见 2.3） | 中 |
| stDeathTower_t | 2 | 死亡之塔数据（见 2.3） | 中 |
| stBloodDungeonRewardInfo | 4 | 血之地下城奖励（见 2.3） | 中 |
| stPremiumTable_t（重） | 5 | 会员表 | 中 |
| stPvPTempTable_t | 2 | PvP 临时表（见 2.3） | 中 |
| stPVPTempTable_t（重） | 2 | PvP 临时表（见 2.3） | 中 |
| stVillageAttacked_t | 4 | 村庄被袭数据（见 2.3） | 中 |
| stUnlimitChallengeInfo | 4 | 无限挑战信息（见 2.3） | 中 |
| stUnlimitChallengeRewardInfo | 2 | 无限挑战奖励（见 2.3） | 中 |
| stLimitItemUsageInfoEx | 4 | 限用物品信息扩展（见 2.3） | 中 |
| stLimitCubeResult | 4 | 限购魔盒结果（见 2.3） | 中 |
| stItemSelectRate | 4 | 物品选择率（见 2.3） | 中 |
| stHellParty_t | 4 | 地狱组队数据（见 2.3） | 中 |
| stHellPartyMonsterGroupList | 2 | 地狱组队怪物组列表（见 2.3） | 中 |
| stMonsterInfo_t | 2 | 怪物信息（见 2.3） | 中 |
| stMonsterDamageLog_t | 2 | 怪物伤害日志（见 2.3） | 中 |
| stEventMonster_t | 2 | 活动怪物（见 2.3） | 中 |
| stSecondEventMonster_t | 2 | 第二期活动怪物（见 2.3） | 中 |
| stMapPlayInfo_t | 2 | 地图游玩信息（见 2.3） | 中 |
| stAttackedMapInfo_t | 2 | 被袭地图信息（见 2.3） | 中 |
| stConditionEventInfo | 4 | 条件事件信息（见 2.3） | 中 |
| stConditionEventRewardInfo | 4 | 条件事件奖励（见 2.3） | 中 |
| stQuestShop | 4 | 任务商店数据（见 2.3） | 中 |
| stQuestShoptInitCost | 2 | 任务商店初始花费（见 2.3） | 中 |
| stSPReturnInfo_t | 4 | SP 返还信息（见 2.3） | 中 |
| stMercenarySystemInfo | 4 | 佣兵系统信息（见 2.3） | 中 |
| stCharacLinkSystem_t | 4 | 角色联动系统（见 2.3） | 中 |
| stCharacLinkSystemData | 4 | 角色联动数据（见 2.3） | 中 |
| stEventIdolBringUpParam_t | 4 | 偶像培养活动参数（见 2.3） | 中 |
| stAuctionLimitItemParam_t | 4 | 拍卖限购参数（见 2.3） | 中 |
| stEquipmentGradeSample | 4 | 装备等级样本（见 2.3） | 中 |
| stSetItemBackImageInfo | 4 | 套装背景图信息（见 2.3） | 中 |
| stAdjust | 4 | 调整数据（见 2.3） | 低 |
| stSharedServerMessageInfo | 4 | 共享服务器消息（见 2.3） | 中 |
| stNPCRelationEventInfo | 4 | NPC 关系事件（见 2.3） | 中 |
| stNPCFavorAndRewardInfo | 4 | NPC 好感与奖励（见 2.3） | 中 |
| stNPCEventItemInfo | 3 | NPC 事件物品（见 2.3） | 中 |
| stNPCRelationship_t | 2 | NPC 关系数据（见 2.3） | 中 |
| stNPCCommonData_t::stOneBuff_t | 2 | NPC 单一 buff（见 2.3） | 中 |
| stHackLog_t | 3 | 外挂日志（见 2.3） | 中 |
| stModuleLagInfo | 4 | 模块延迟信息（见 2.3） | 中 |
| stDunGeonLagInfo | 4 | 副本延迟信息（见 2.3） | 中 |
| stSERVER_MESSAGE | 2 | 服务器消息（见 2.3） | 中 |
| stLightServerNotice_t（重） | 7 | 服务器公告 | 中 |
| stRewardPostal | 2 | 奖励邮件（见 2.3） | 中 |
| stRewardGiveEmotion | 2 | 奖励表情（见 2.3） | 中 |
| stRewardChangeStatus | 2 | 奖励状态变更（见 2.3） | 中 |
| stTempRewardInfo | 2 | 临时奖励信息（见 2.3） | 中 |
| stClearRewardExpParameter_t | 2 | 通关奖励经验参数（见 2.3） | 中 |
| stClearRewardBonusExp_t | 2 | 通关奖励加成经验（见 2.3） | 中 |
| stWeekendBouns | 2 | 周末奖励（见 2.3） | 中 |
| stEVENTADDINFO | 2 | 活动附加信息（见 2.3） | 中 |
| stADDINFO | 2 | 附加信息（见 2.3） | 中 |
| stDBLogItem | 2 | DB 日志物品（见 2.3） | 中 |
| stAmplifyItemScript_t | 4 | 增幅物品脚本（见 2.3） | 中 |
| stAmplifyOptionInfo_t | 2 | 增幅选项信息（见 2.3） | 中 |
| stInvestAmplifyOption_t | 2 | 投资增幅选项（见 2.3） | 中 |
| stUpgradeItemTicketParam_t | 2 | 升级券参数（见 2.3） | 中 |
| stUnusableEquipmentInfo | 2 | 不可用装备信息（见 2.3） | 中 |
| stEnduranceRepairCost | 2 | 耐久修理费（见 2.3） | 中 |
| stEquipCondition | 2 | 装备条件（见 2.3） | 中 |
| stCompoundRate | 2 | 合成率（见 2.3） | 中 |
| stItemLockInfo | 2 | 物品锁信息（见 2.3） | 中 |
| stEnamyDropAvatarElement_t | 2 | 敌人掉落头像元素（见 2.3） | 中 |
| stVendingMachineOutput_t | 2 | 贩卖机出货（见 2.3） | 中 |
| stLevelCond4PremiumGoldCard | 2 | 会员金卡等级条件（见 2.3） | 中 |
| stAvatarTypeSelect_t | 3 | 头像类型选择（见 2.3） | 中 |
| stClearTimeAverage（重） | 3 | 通关时间均值 | 中 |
| stNotifyIngameADInfo | 2 | 游戏内广告通知（见 2.3） | 中 |
| stLuckPoint_t（重） | 2 | 幸运点 | 中 |
| stClearRewardBonusExp_t（重） | 2 | 通关加成经验 | 中 |
| stBingoReward / stBingoQuiz / stBlueMarble / stBlueMarbleConfirmInfo | 5 | 活动：宾果奖励/问答/蓝弹珠/确认信息（见 2.2.3） | 高 |
| DungeonHoldBalance | 5 | 副本持有平衡（clear） | 中 |
| DungeonKey | 3 | 副本键（见 2.3） | 中 |
| DungeonRidableObject | 3 | 副本可骑乘对象（见 2.3） | 中 |
| AdditionalDungeonInfo | 2 | 附加副本信息（见 2.3） | 中 |
| DimensionActivationData | 4 | 维度激活数据（见 2.3） | 中 |
| DimensionCoinInfo | 2 | 维度金币信息（见 2.3） | 中 |
| DungeonPartyBalance | 2 | 副本组队平衡（见 2.3） | 中 |
| stDeathTower_t（重） | 2 | 死亡之塔数据 | 中 |

#### 2.2.8 CMDPacketStruct 事件副本报文结构（约 20 个）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| CMDPacketStruct::_STResEventDungeonDestoryObject | 5 | 事件副本：销毁对象响应 | 高 |
| CMDPacketStruct::_STResEventDungeonClearRoom | 5 | 事件副本：清房响应 | 高 |
| CMDPacketStruct::_ResAdvanceAltarUpgradeGage | 5 | 前置祭坛：升级槽响应 | 高 |
| CMDPacketStruct::_ResAdvanceAltarSummonUnit | 5 | 前置祭坛：召唤单位响应 | 高 |
| CMDPacketStruct::_ResAdvanceAltarSetSlot | 5 | 前置祭坛：设置槽响应 | 高 |
| CMDPacketStruct::_ResAdvanceAltarResetStar | 5 | 前置祭坛：重置星级响应 | 高 |
| CMDPacketStruct::_ResAdvanceAltarPause | 5 | 前置祭坛：暂停响应 | 高 |
| CMDPacketStruct::_ResAdvanceAltarGetAchievementReward | 5 | 前置祭坛：领取成就奖励响应 | 高 |
| CMDPacketStruct::_ResAdvanceAltarExchangeSlot | 5 | 前置祭坛：交换槽响应 | 高 |
| CMDPacketStruct::_ResAdvanceAltarBuyItem | 5 | 前置祭坛：购买物品响应 | 高 |
| CMDPacketStruct::STBaseResponse | 5 | CMD 基础响应头 | 高 |
| CMDPacketStruct::STBaseRequest | 2 | CMD 基础请求头（见 2.3） | 高 |
| CMDPacketStruct::_STReqEventDungeonDestoryObject | 2 | 事件副本：销毁对象请求（见 2.3） | 高 |
| CMDPacketStruct::_STReqEventDungeonClearRoom | 2 | 事件副本：清房请求（见 2.3） | 高 |
| CMDPacketStruct::_ReqAdvanceAltarUpgradeGage | 2 | 祭坛：升级槽请求（见 2.3） | 高 |
| CMDPacketStruct::_ReqAdvanceAltarSummonUnit | 2 | 祭坛：召唤请求（见 2.3） | 高 |
| CMDPacketStruct::_ReqAdvanceAltarSetSlot | 2 | 祭坛：设置槽请求（见 2.3） | 高 |
| CMDPacketStruct::_ReqAdvanceAltarResetStar | 2 | 祭坛：重置星请求（见 2.3） | 高 |
| CMDPacketStruct::_ReqAdvanceAltarPause | 2 | 祭坛：暂停请求（见 2.3） | 高 |
| CMDPacketStruct::_ReqAdvanceAltarGetAchievementReward | 2 | 祭坛：成就奖励请求（见 2.3） | 高 |
| CMDPacketStruct::_ReqAdvanceAltarExchangeSlot | 2 | 祭坛：交换槽请求（见 2.3） | 高 |
| CMDPacketStruct::_ReqAdvanceAltarBuyItem | 2 | 祭坛：购买请求（见 2.3） | 高 |

#### 2.2.9 其余 5–9 符号类（补充）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| AvatarRoulette | 9 | 头像轮盘（客户端/服务端状态） | 高 |
| stQuestShopStatus（重） | 9 | 任务商店购买状态 | 中 |
| AvatarRouletteServer（重，见 2.1） | — | — | — |
| Arad_IPGProcess（重，见 2.1） | — | — | — |
| ARAD::Singleton<HeroMissionEvent>（见 2.2.1） | — | — | — |
| stStackableBoosterItemInfo_t（重） | 6 | 助推器物品信息 | 中 |
| stNpcSales / stDungeonSales（重） | 6 | NPC/副本贩卖 | 中 |
| stDisjointResult（重） | 6 | 分解结果 | 中 |
| stPartyTelePort（重） | 6 | 组队传送 | 中 |
| Character（重） | 6 | 角色成长数据 | 高 |
| CUserGlobalInfoHandle（重） | 7 | 全局信息句柄 | 高 |
| CAdvertisementExposeInfo（重） | 6 | 广告曝光 | 中 |
| stQuestTargetCharacter_t（重） | 5 | 任务目标角色 | 中 |
| stSendClearedMission（重） | 5 | 清除任务发送 | 中 |
| stSetItemBackImageInfo（重） | 4 | 套装背景图 | 中 |
| stFatigueBatteryConstantTable_t（重） | 3 | 疲劳电池常量 | 中 |
| stPvPTempTable_t / stPVPTempTable_t（重） | 2 | PvP 临时表 | 中 |
| stNPCRelationship_t（重） | 2 | NPC 关系 | 中 |
| stHellPartyMonsterGroupList（重） | 2 | 地狱组队怪物组 | 中 |
| stMonsterInfo_t（重） | 2 | 怪物信息 | 中 |
| stMapPlayInfo_t（重） | 2 | 地图游玩信息 | 中 |
| stAttackedMapInfo_t（重） | 2 | 被袭地图信息 | 中 |
| stConditionEventInfo / stConditionEventRewardInfo（重） | 4 | 条件事件 | 中 |
| stQuestShop / stQuestShoptInitCost（重） | 4/2 | 任务商店数据/初始花费 | 中 |
| stSPReturnInfo_t（重） | 4 | SP 返还信息 | 中 |
| stMercenarySystemInfo（重） | 4 | 佣兵系统信息 | 中 |
| stCharacLinkSystem_t / stCharacLinkSystemData（重） | 4 | 角色联动 | 中 |
| stEventIdolBringUpParam_t（重） | 4 | 偶像培养参数 | 中 |
| stAuctionLimitItemParam_t（重） | 4 | 拍卖限购参数 | 中 |
| stEquipmentGradeSample（重） | 4 | 装备等级样本 | 中 |
| stAdjust（重） | 4 | 调整数据 | 低 |
| stSharedServerMessageInfo（重） | 4 | 共享服务器消息 | 中 |
| stNPCRelationEventInfo / stNPCFavorAndRewardInfo（重） | 4 | NPC 关系/好感奖励 | 中 |
| stHackLog_t（重） | 3 | 外挂日志 | 中 |
| stModuleLagInfo / stDunGeonLagInfo（重） | 4 | 模块/副本延迟 | 中 |
| stSERVER_MESSAGE（重） | 2 | 服务器消息 | 中 |
| stRewardPostal / stRewardGiveEmotion / stRewardChangeStatus / stTempRewardInfo（重） | 2 | 奖励邮件/表情/状态/临时奖励 | 中 |
| stClearRewardExpParameter_t / stClearRewardBonusExp_t / stWeekendBouns（重） | 2 | 通关奖励参数/加成/周末奖励 | 中 |
| stEVENTADDINFO / stADDINFO / stDBLogItem（重） | 2 | 活动附加/附加/DB 日志物品 | 中 |
| stAmplifyItemScript_t / stAmplifyOptionInfo_t / stInvestAmplifyOption_t（重） | 4/2/2 | 增幅脚本/选项/投资选项 | 中 |
| stUpgradeItemTicketParam_t / stUnusableEquipmentInfo / stEnduranceRepairCost / stEquipCondition / stCompoundRate / stItemLockInfo（重） | 2 | 升级券/不可用装备/耐久修理/装备条件/合成率/物品锁 | 中 |
| stEnamyDropAvatarElement_t / stVendingMachineOutput_t / stLevelCond4PremiumGoldCard（重） | 2 | 掉落头像/贩卖机出货/金卡等级条件 | 中 |
| stAvatarTypeSelect_t（重） | 3 | 头像类型选择 | 中 |
| stNotifyIngameADInfo（重） | 2 | 游戏内广告通知 | 中 |
| stLuckPoint_t（重） | 2 | 幸运点 | 中 |
| DungeonKey / DungeonRidableObject / AdditionalDungeonInfo / DimensionActivationData / DimensionCoinInfo / DungeonPartyBalance（重） | 2-4 | 副本键/骑乘对象/附加副本信息/维度激活/维度金币/组队平衡 | 中 |
| CUserModifier | 2 | 用户修正器（角色属性临时修正，推断） | 低 |
| CUserResetTimeGateQuest | 3 | 重置限时任务（时间门任务） | 中 |
| CUserTeen | 3 | 青少年（防沉迷）验证（IsRight） | 高 |
| CGameMasterCharacter | 3 | GM 角色数据（CUser::InitOnAccept 静态成员） | 高 |
| CGameMasterCharacterItemDropRate | 3 | GM 角色掉率 | 中 |
| CHotkeyOption | 3 | 热键选项（CGameOption 子结构） | 高 |
| CQuickChattingOption | 3 | 快速聊天选项 | 高 |
| CChattingEmoticonConfig | 3 | 表情配置 | 高 |
| CBuffGroup | 3 | buff 组 | 中 |
| BingoData | 3 | 宾果数据（CUser 内嵌，clear） | 中 |
| BuffInfo | 3 | buff 信息 | 中 |
| AppearMap | 3 | 出现地图 | 低 |
| ARIA | 3 | ARIA 对称加密算法（密钥/加解密） | 高 |
| AradAppSystem | 3 | 应用系统（初始化/开日志/脚本加载） | 中 |
| AradServerStateMessage | 2 | 服务器状态消息（见 2.3） | 中 |
| AvatarVariation::colorRGB | 3 | 头像变色 RGB | 高 |
| AvatarOptionChangeType | 3 | 头像选项变更类型 | 中 |
| AvatarVariation::AvatarColorInfo | 4 | 头像颜色信息 | 中 |
| ARAD_DATAS::AradMailItemInfo | 3 | Arad 邮件物品信息 | 中 |
| ARAD::SearchEventPeriod | 4 | 活动周期搜索 | 中 |
| app | 3 | 应用命名空间/全局（假类，见第三节） | — |
| arad | 7 | arad 命名空间（全局 Sig* 对象，假类，见第三节） | — |
