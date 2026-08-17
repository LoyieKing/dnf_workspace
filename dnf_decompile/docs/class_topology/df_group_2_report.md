# df_game_r G2 组拓扑还原报告（世界 / 副本 / 战斗域）

分析对象：G2 组 154 个类路径（符号数取自 `/tmp/df_group_2_classes.txt`）。
证据来源：`/tmp/df_class_methods.txt`（方法名）、`/tmp/df_syms_demangled.txt`（签名）、
`objdump -d --demangle`（构造函数成员构造序列 = 包含关系，见各核心类 ctor 调用）以及核心类之间的函数签名交叉引用。
凡用途无法从方法名/签名/构造序列直接确认的，均标注「推断」；置信度列统一为 高 / 中高 / 中 / 低中 / 低。

约定：`village_attacked`、`stagemap`、`ExtreamDungeon`、`effect`、`Global::*`、`global::tools::*`、`FunctionGuildMember`
为命名空间/函数组而非类，已归入「假类 / 常量组 / 枚举」节，但嵌套类（如 `village_attacked::CVillageMonster`）按真实类处理。

## 1. 核心类深挖（≥20 符号，23 个）

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---|---|---|---|---|
| CParty | 388 | 组队系统核心对象，一个队伍一份：成员管理、副本进出与结算、特殊物品路由、P2P 连接、地狱/血/异次元/古代/绝望之塔等特殊副本准入与奖励、金币与快速组队、锦标赛。构造序列显示其**内嵌** `CBattle_Field`（offset 0xb24，并回调 `CBattle_Field::SetParty(this)`）。 | dungeon_start(int,char,ENUM_DUNGEON_TYPE)、move_map、ClearDungeon、dungeon_clear、clear_reward、set_play_result、join_user/leave_user/walkout_member、kill_monster、die_user、ReviveUser、CheckEnterAncientDungeon/CheckEnterDimensionDungeon/CheckEnterVillageAttackRevenge、beginBloodClearProcess、check_dungeon_start、getManager、SendPartyList | CUser、CDungeon、CBattle_Field（成员）、CGameManager（管理器/池）、CPartyTelePort（成员）、CItemRoutingData（成员）、BattleData（成员）、GameResultSet（成员）、CPartyResultRecvFlag（成员）、Secu_HackLogCheckByParty（成员）、CTraceMobDieHack（成员）、secretshop::SECRET_SHOP_DATA（成员）、cElection<int,4,4>（成员）、Mutex（成员）、std::vector<MapInfo>（成员） | 组队 / 副本战斗 / 结算 | 高 |
| CBattle_Field | 235 | 队伍副本内的"战斗场"状态机：副本/地图序列选择（SelectDungeon、ConsistMap、get_candidator_map、choose_random_bossmap_from_dummymaps）、地图切换（MoveMap、check_movemap_range、set_visited_map）、怪物生成与击杀（add_monsters_current_map、add_monster_blood/hell_party/event/APC_AI、kill_monster、kill_blood_monster、add_monster_additional_champion）、地狱组队（HellParty）、血之副本（BloodSpawnTimerManager、BloodPhaseSpawn、add_blood_monster）、锦标赛轮次（ConsistTournament、TournamentInfo）、掉落与拾取、通关判定（isClearDungeon、check_grid_clear、onClearMap）。 | SelectDungeon(int,CDungeon const*,int,ENUM_DUNGEON_TYPE,int,CWorldMap*,bool,int)、MoveMap、ConsistMap、ConsistTournament(CMap const*,...)、SetParty(CParty*)、get_candidator_map、choose_random_bossmap_from_dummymaps、kill_blood_monster(CUser*,int,unsigned short*)、add_monsters_current_map、MakePacket、drop_item、onUseItem(CUser*,Inven_Item const&)、check_random_appear_hell_dungeon | CParty（SetParty 反指）、CDungeon（SelectDungeon/get_candidator_map 形参）、CMap（ConsistTournament 形参）、CWorldMap（SelectDungeon 形参）、CRidable（成员）、CClearCondition（成员）、CBloodClearRewardData（成员）、CTowerOfDespairRewardData（成员）、CTournamentDungeonReward（成员）、TournamentInfo（map<short,vector> 成员）、STAssignBloodSystem/STAssignBloodPhaseTime（vector 成员）、Mutex、std::map<int,MapInfo>（成员） | 副本战斗 / 血之副本 / 锦标赛 | 高 |
| GameWorld | 184 | 游戏世界容器 + 频道管理：按频道组织在线用户（构造序列含 `map<uint,CUser*>`、`map<ushort,CUser*>`、`map<string,SimpleInfo>`、`map<uint,ushort>` 与 4 个 Statistics 成员）；频道类型判定（PVP/自由 PVP/学校 PVP/整编 PVP/技能树/装备校验等）、用户进出世界与频道迁移（goto_dungeon/out_from_dungeon、goto_pvp/out_from_pvp、goto_warroom、gotoBlueMarble）、群发广播（send_all、send_to_area、send_to_vill、send_chat_msg）、聊天/移动封禁、每日数据重置（ResetAllFatigue/Coins/EventData、ResetMidnight、ReselectDailyQuest）、钓鱼、PowerWar 村庄 HP。 | reach_game_world、leave_game_world、goto_dungeon、out_from_dungeon、goto_pvp、out_from_pvp、goto_warroom、send_all、send_to_user、send_to_area、send_to_vill、GetVillage(int)、getUserVillage(CUser*)、get_gate_area(int)、IsPVPChannel、ResetMidnight、fishing(CUser*) | CUser、Village（GetVillage 返回）、Area（get_gate_area/send_to_area）、CGameManager（insert_game_world 形参）、StatisticsToObserveCrash/StatisticsShusiaService/StatisticsPvP/StatisticsNatType（成员）、Mutex（成员） | 世界 / 频道 / 社交广播 | 高 |
| CGameManager | 114 | 全服对象池 + 各类房间管理器（单例，`GlobalInstance<CGameManager>`）：创建/回收用户（createUser、returnUserPool、user_disconnect、user_exit）、组队/房间池（PutParty/GetParty、PutPvp、PutWarRoom、QuickParty、BlueMarble、DeathTower、BossTower、AdvanceAltar）、UID 分配（getNextUID）、按账号/唯一 ID 查用户、房间列表广播。构造序列显示 10 个 `StaticPool<T,N>` 成员 + 9 个 `hash_map<int,T*>` 成员 + `map<uint,CUser*>`。 | createUser、getUserByUnique、GetUserByAccId、insertUserByAccID、GetParty/PutParty/GetPartyIdx、GetPvp/PutPvp、GetWarRoom/PutWarRoom、GetQuickParty/PutQuickParty、getDeathTower/getBossTower/getAdvanceAltar/getBlueMarble、checkOutDeathTower/checkOutBossTower/checkOutAdvanceAltar、CheckOutParty(CUser*,bool)、getNextUID、SendPartyList/SendPvpList/SendWarRoomList | CUser、CParty、PvP_Room、WarRoom、WongWork::CDeathTower、WongWork::CBossTower、advancealtar::StageControl、QuickParty::CQuickParty、BlueMarble、CTradeSpace、StaticPool<T,N>（成员模板）、hash_map<int,T*>（成员）、std::set<std::string>（成员） | 会话 / 房间 / 对象池管理 | 高 |
| TutorialData | 109 | 新手教程脚本数据容器（按 dungeonIndex 组织）：对话框（DialogData）、物品（ItemData）、技能（SkillData）、提示（TutorialNotice）、头像/装备/技能/被动技能索引、热键转换、当前 EP 判定。纯数据类，无业务依赖；构造序列显示 `map<int,vector<DialogData*>>`、`map<int,SkillData*>`、`map<int,vector<TutorialNotice*>>`、`vector<ItemData*>` 等成员。 | addDialogData、getDialogStr、getDialogSize、addItem/getItem、addSkillIndex/getSkillData、addPassiveSkillData、addTutorialNotice/getNoticeAniPath、addAvatarIndex/getAvatarIndex、addEquipmentIndex/getEquipmentIndex、getConvertHotKey、isCurrentEpisode、setDungeonIndex | 自身嵌套类型（DialogData/ItemData/SkillData/TutorialNotice）、std::map/vector；被 GlobalScriptTutorial 内嵌加载 | 新手引导 / 教程 | 高 |
| village_attacked | 107 | **命名空间（非类）**：村庄袭击（怪物入侵村庄）事件系统。符号主体是 `village_attacked::MAX_START_TIME_COUNT`、`MONSTER_REGEN`、`MONSTER_UPDATE_RATE`、`MONSTER_MOVE_PIXEL` 等常量（均为 `r` 段只读数据、按 TU 重复出现），嵌套真实类：CVillageMonsterMgr（管理器）、CVillageMonsterArea（区域）、CVillageMonster（怪物实体）、CRevengeDungeon（复仇副本开关）、Zone、ENUM_VILLAGE_MONSTER_STATE。 | 见嵌套类：CVillageMonsterMgr::OnCreateVillageMonster/OnKillVillageMonster/OnEndRewardVillageMonster、CVillageMonster::OnFightVillageMonster(CUser*,int&,int&)/MakeVillageMonsterListPacket、CVillageMonsterArea::SendVillageMonsterList、CRevengeDungeon::OpenRevengeDungeon/IsOpenRevengeDungeon | CUser、MapArea（怪物移动）、PacketGuard、Area::CVillageMonsterArea（区域钩子）、CParty::OnFightVillageMonster | 村庄袭击事件 / 野外战斗 | 高 |
| CDungeon | 69 | 单个副本的静态脚本定义：迷宫（MazeScript、ChooseRandomMap、VerifyMaze）、地图注册（构造序列含 `hash_map<int,CMap*>`、`multimap<int,CMap*>`）、事件/次事件怪物概率、掉落与清除物品（stDungeonAssignItem_t、getDropItems、get_clear_item）、异次元维度副本（DimensionPartyCount）、锦标赛奖励（TournamentRewardRate）、绝望之塔（getDeathTowerMapIndex/getRandomTowerMapIndexes）、血之副本类型、金币限制（UseCoinDungeonDiff）、准入等级与疲劳（get_min_level、isNoFatigueDungeon）。 | InsertMap(int,int,CMap*)、GetMaze(int)、ChooseRandomMap(int,int,int)、VerifyMaze、GetStartMap、get_clear_item、getDropItems、getEventMonsters、get_dimension_possible、getDeathTowerMaxStage、getRandomTowerMapIndexes、isTowerOfDespairDungeon、GetPartyMemberCoinLimit、set_dungeon(STDungeonScript&)、_do_after_dungeon_start(CUser*) const | CMap（hash_map/multimap 成员）、CUser（_do_after_dungeon_start 形参）、MazeScript、RandomList、STNamedMonsterMapPos、stDungeonAssignItem_t、DimensionPartyCount、TournamentRewardRate、TournamentRewardItemRate、RequiredItem、STWarRoomData、advancealtar::ClearRewardData/SurvivalRewardData（成员）、stConditionEnterBossRoom_t（成员） | 副本内容数据 / 迷宫生成 | 高 |
| stagemap | 57 | **命名空间（非类）**：城镇/地图脚本数据值类型组（StageData、DistrictData、AreaData、SlotType）。符号绝大多数是这些值类型的 ctor/dtor/operator=/clear 及 STL 拷贝模板实例；`Area::set_area(int, TownAreaScript&, STMapScript&)` 暗示其服务于区域/地图脚本表。 | 值类型方法：StageData::clear、DistrictData::clear/operator=、AreaData::clear/operator=、SlotType::clear | std::vector/move/copy 模板实例；与 TownAreaScript/STMapScript 同属地图脚本数据（推断） | 地图脚本数据（推断） | 中高（数据确凿，用途推断） |
| InstanceRentalSystem | 44 | 实例租赁系统（租赁机器/时限道具）：租借流程 Ready→Rent、可租检查 CheckRentableItem、机器注册 registerRentalMachine(IRentalMachine*)、数据类 RentalInfo/RentInput/RentOutput/DeletedRentItem；构造序列显示内嵌 RentalMachineDimension、RentalMachinePcRoom 两种机器实现及 `auto_ptr<RentalSystemImpl>`（pimpl）。CUser 构造序列中出现其 RentalInfo 的嵌套 map（按账号/机器保存用户租赁记录）。 | Ready、Rent、CheckRentableItem、registerRentalMachine、getMachine、RentalInfo、RentInput、RentOutput | IRentalMachine（接口）、RentalMachineDimension、RentalMachinePcRoom、RentalSystemImpl（auto_ptr 成员）、CUser（租赁记录） | 租赁 / 付费道具 | 高 |
| ExtreamDungeon | 44 | **命名空间（非类）**：极限地下城装备合成系统。主体为常量组（BIND_SPHERE_INDEX/GOLD/SILVER__BIND_SPHERE_INDEX、GROUP_NUM_MAX、RARITY_RATIO_MAX，均为 `r` 段常量）与枚举（ENUM_OUTPUTITEMS_RARITY、ENUM_INPUTITEMS_RARITY、eBindSphereType），核心类为 CCompound_ExtreamDun_Item（合成器）及 OUTPUT_ITEM_STR、BindCube_ScriptData/LvBonusScriptData、BindTable_Predicate、forceRule_ResultItem。 | 见 CCompound_ExtreamDun_Item：makeCompoundItem、checkCompoundable、_determine_rarity、_determine_level_bonus、_FindRandomItem、ForceResultItemRule_Setting、LoadScript | CEquipItem、Inven_Item、CMTRand、BindCube_ScriptData/LvBonusScriptData（成员） | 极限地下城 / 装备合成 | 高 |
| UserQuest | 31 | 角色任务实例（每角色一份）：接受/完成/放弃任务、四类条件检查（quest/subtype/type/cond_clear）、任务数据序列化（get_quest_info/get_quest(SIG_LOAD_QUEST*)）、救援副本任务（get_rescue_questmap）、紧急任务等待列表重置；构造序列显示内嵌 `WongWork::CQuestClear` 与 `_Quest_Authen_Data`。 | accept_quest(int,char*,int&)、finish_quest(int)、giveup_quest、check_quest_condition(int)、check_quest_subtype_condition(Quest*)、check_quest_type_condition(Quest*)、check_cond_clear(int)、get_quest_info(char*)、get_mail_quest_info、set_parent、set_authen_data、ResetUrgentQuestWaitingList | Quest、QuestList、WongWork::CQuestClear（成员）、_Quest_Authen_Data（成员）、CUser（set_parent，推断） | 任务 | 高 |
| HeroMissionEvent | 30 | 英雄任务（活动任务）事件系统，单例：StartEvent/EndEvent、加载/保存事件数据（loadEventData/loadScript/saveEventData）、任务处理与奖励（processMission、rewardMission）、下发数据（sendMissionData）、GM 重置（resetMissionForGm）；构造序列显示继承 `CEventBase` 与 `ARAD::Singleton<HeroMissionEvent>`，含 `map<MissionNo::T, BaseHeroMissionCondition*>` 与 `map<uint, vector<HeroMissionValue>>`。 | StartEvent、EndEvent、loadEventData、loadScript、saveEventData、processMission、rewardMission、sendMissionData、setMissionValue、findMissionValue、resetMissionForGm | CEventBase（继承）、ARAD::Singleton<HeroMissionEvent>（继承）、BaseHeroMissionCondition、HeroMissionCondition、HeroMissionValue | 活动任务 / 英雄任务 | 高 |
| HeroMissionCondition | 29 | 英雄任务的单个条件对象：条件数据 + 奖励列表（vector<RewardData> 成员）、清空/拷贝；与基类 BaseHeroMissionCondition 共同构成条件多态体系（HeroMissionEvent 中的 map 以 `MissionNo::T` 为键）。 | clear、operator=、RewardData | BaseHeroMissionCondition（基类，推断）、HeroMissionValue、MissionNo::T（枚举键） | 活动任务 / 英雄任务 | 高 |
| Quest | 26 | 任务静态定义（脚本数据）：前置/职业/成长类型/力量阵营检查（check_possible、checkPossibleJob、checkMatchedGrowType、check_power_side）、开放日程（IsOpenScheduleQuest）、出现地图（AppearMap）、清除条件物品/击杀目标（DungeonClearItem、MonsterKillItem、stQuestTargetCharacter_t）、奖励（RewardItemInfo、PostalReward、get_title_reward）、触发（get_init_trigger/get_init_achievement_trigger）。 | check_possible、checkPossibleJob、checkMatchedGrowType、IsOpenScheduleQuest、get_appearmap、get_clear_itemlist、get_title_reward、get_init_trigger、get_init_achievement_trigger、exposeQuest、ConvertRewardSelectIndex、CheckKillMonster | 自身嵌套数据：AppearMap、PostalReward、RewardItemInfo、DungeonClearItem、MonsterKillItem、stQuestTargetCharacter_t、dungeonEventHanaseStruct、ENUM_QUEST_EXCEPTION_TYPE | 任务数据 | 高 |
| ExtreamDungeon::CCompound_ExtreamDun_Item | 25 | 极限地下城合成算法核心：输入装备列表 → 按稀有度/等级加成（BindCube 脚本）→ 随机/选择/全部规则输出；含 ForceResultItemRule_Setting、check_N_addItem、makeCompoundItem、_FindRandomItem/_FindSelectItem、_determine_rarity、_determine_level_bonus(_index)、_convertInput/_convertOutput、_exception_Rare。 | makeCompoundItem(CEquipItem const**,char,Inven_Item&,eBindSphereType)、checkCompoundable(Inven_Item*,CEquipItem const**,char)、check_N_addItem(CEquipItem&)、ForceResultItemRule_Setting(int,bool,int)、_FindRandomItem、_FindSelectItem、_determine_rarity、_determine_level_bonus、LoadScript(char const*,char const*) | CEquipItem、Inven_Item、BindCube_ScriptData（成员）、BindCube_LvBonusScriptData（成员）、CMTRand（成员）、time() | 极限地下城 / 装备合成 | 高 |
| StageMapList | 24 | 舞台（关卡）地图列表：按地图索引维护 `map<int,_StageMapSummary>`，提供首舞台/下一舞台遍历（getFirstStageIndex、getNextStage）、存在性、唯一 ID（makeStageMapUniqueId）、脚本加载（loadList）。 | loadList、getFirstStageIndex、getNextStage、isExist、makeStageMapUniqueId、compare | _StageMapSummary（map 成员）、StageData（推断） | 关卡 / 舞台导航 | 高 |
| QuestList | 23 | 任务数据总表（全量任务定义）：load_list 加载、find_quest、可接/前置/反任务/清除检查（allowable_questlist_as_npc、check_ahead_quest、check_anti_quest、check_clear）、NPC 可接列表（getQuestNPCList(ENUM_QUEST_GRADE)、insert_NPC）、每日/训练任务（GetDailyQuestList/GetTrainingQuestList）、邮件任务选择；构造序列含 `hash_map<int,Quest*>` 与 `multimap<int,int>`。 | load_list、find_quest(int)、select_quest、select_mail_quest、check_ahead_quest(int,WongWork::CQuestClear const&)、check_anti_quest、check_clear、getQuestNPCList、GetDailyQuestList、GetTrainingQuestList | Quest（hash_map 成员）、WongWork::CQuestClear（检查形参）、stSelectQuestParam | 任务数据管理 | 高 |
| CPartyTelePort | 23 | 队伍传送：队员间互相传送/传送到同位置（process_teleport、set_teleport_data/member_state、send_teleport_status/effect、check_cur_teleport_state），离开用户处理（process_leave_user_at_teleport）；构造序列显示内嵌 `stPartyTelePort`。 | process_teleport、process_leave_user_at_teleport、set_teleport_data、set_teleport_member_state、get_teleport_member_state、send_teleport_status、send_teleport_effect_at_equal_place、reset_teleport_data | stPartyTelePort（成员）、CUser（传送对象，推断）、Teleport（村庄传送点，推断） | 组队传送 | 高 |
| CMap | 23 | 副本地图运行态对象：怪物/物品/条件怪物/箱物品列表（`list<_mapMonster>`、`list<_mapItem>`、insert_monster/insert_item/box_item_index）、AI 角色布点（getAICharacters、STAICharacterMapArrangeData）、锦标赛怪物（TournamentMonster）、血之副本怪物分配（STAssignBloodSystem/PhaseTime）、时间线脚本（构造序列含 `advancealtar::TimeLine` 成员）、入口检查（CheckEntrance）。 | insert_monster、insert_item、insert_condition_monster、get_monster_list、get_item_list、get_condition_monster_list、getAICharacters、getAPCRandomPoint、CheckEntrance、getBossCount、getDungeonLists、set_map、box_item_index | _mapMonster、_mapItem、STAICharacterMapArrangeData（vector 成员）、TournamentMonster（map 成员）、STAssignBloodSystem/STAssignBloodPhaseTime（vector 成员）、advancealtar::TimeLine（成员）、STRivalMapData（vector 成员）、CDungeon（getDungeonLists 归属） | 副本地图运行时 | 高 |
| TowerOfDespairMgr | 22 | 绝望之塔（Tower of Despair）管理器：塔层 ↔ 副本索引 ↔ APC 的三向映射（_Set_LayerByDungeonIndex、Get_CDungeonByLayer、Get_DungeonIndexByLayer、Get_APCIndexByLayer、SetAPCInfo/Reload_APC_Info/SendAPCInfo）、准入检查（CheckEnterable、GetMinLv、GetBaseLayerIndex）、脚本加载；构造序列显示内嵌 `TowerOfDespair_APC_Mgr`、`set<int>`、`vector<uint>`、`CDungeon const**`。 | CheckEnterable、GetBaseLayerIndex、GetMinLv、Get_CDungeonByLayer、Get_DungeonIndexByLayer、Get_APCIndexByLayer、Get_APCNameByLayer、SetAPCInfo、Reload_APC_Info、SendAPCInfo、SendMessageToCUser、IsTowerOfDespairDungeon_ByIndex、LoadScript、_layerInfo | CDungeon（按层持有指针）、CUser（SendMessageToCUser）、TowerOfDespair_APC_Mgr（成员）、CDungeon_TowerOfDespair（特化） | 绝望之塔 | 高 |
| CKillMonsterInfo | 22 | 角色击杀怪物记录（持久化，派生 `charac_expand::CData`）：注册/检查普通/首领/命名/APC 首领击杀（RegisterMonsterKill/BossKill/NamedKill/APCBossKill、CheckMonsterKill/BossKill/NamedKill）、难度标记（GetDungeonDifficultyFlag）、map↔struct 转换（ConvertMapToStrcut/ConvertStructToMap）、_saveData(CUser*)/loadData(CUser*,char*)。 | RegisterMonsterKill、RegisterBossKill、RegisterNamedKill、RegisterAPCBossKill、CheckMonsterKill、CheckBossKill、CheckNamedKill、CheckAPCBossKill、GetDungeonDifficultyFlag、ConvertMapToStrcut、ConvertStructToMap、_saveData、loadData、getData | charac_expand::CData（基类）、CUser（save/load 形参）、std::map<uint,uchar>（成员） | 击杀统计 / 怪物图鉴 | 高 |
| CBattle_Field::CBloodClearRewardData | 22 | 血之副本通关奖励累计数据（嵌套类）：轮次/通关时间/经验/物品奖励记录、ultimate 轮点、isBloodClear；被 CBattle_Field 内嵌（ctor 调用链）。 | onStartBloodRound、onFinishBloodRound、isBloodClear、setBloodClear、getCurrentBloodRound、setCurrentBloodRound、addPlayTime、getBloodRoundClearTime、getRewardExp、getRewardItem、getRewardItemCount、getUltimateRewardItem、incUltimateRoundClearPoint、setRewarItemCopy | CBattle_Field（宿主）、stRewardItem_t（嵌套条目）、std::vector（奖励物品） | 血之副本 / 结算 | 高 |
| Area | 22 | 地图区域（城镇街区）运行态：用户进出（insert_user/delete_user/erase_user，`map<ushort,CUser*>` 成员）、区域配置（set_area(int,TownAreaScript&,STMapScript&)）、广播（send_to_all/send_area_users/send_group）、钓鱼（take_fish）、强力战村庄 HP 包（make_power_war_hp_of_vill）；构造序列另含 `vector<MapArea>`、LotteryInfo、Mutex。 | insert_user(CUser*)、delete_user(CUser*)、get_user_id_list、get_world_map_index、hasNPC(unsigned int)、set_area(int,TownAreaScript&,STMapScript&)、send_to_all(PacketGuard&)、send_area_users(CUser*)、take_fish、make_power_war_hp_of_vill | CUser、Village（宿主，推断）、TownAreaScript、STMapScript、MapArea（vector 成员）、LotteryInfo（成员）、Mutex（成员）、CBelong（send_group 形参） | 区域 / 村庄 | 高 |

## 2. 长尾类（<20 符号，131 个，按组清单顺序）

「★」= 符号数 <20 但属于核心链路的关键支撑类。

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| MapInfo | 19 | 地图信息结构（Add_Item/Add_Mob/Clear/掉落限制），CParty 与 CBattle_Field 均以 `std::vector<MapInfo>`/`std::map<int,MapInfo>` 保存。 | 高 |
| Condition_LevelUp | 19 | 升级条件数据，含嵌套 Reward_Item 奖励条目。 | 中 |
| village_attacked::CVillageMonsterMgr | 18 | 村庄袭击怪物管理器：生成/击杀/奖励/事件分发（OnKillVillageMonster、OnEndRewardVillageMonster、SetRewardType）。 | 高 |
| SeriaRoomAniDecoEvent | 18 | Seria 房间动画装饰事件（CEventBase 派生）：事件状态/过场动画道具发放。 | 中高 |
| CTournamentDungeonReward | 18 | 锦标赛副本奖励（选卡/奖励制作/黄金），CBattle_Field 成员。 | 高 |
| WarField | 17 | 战争房间（WarRoom）战斗场：地图构建、怪物/物品、击杀处理、网格清除、包制作，功能近似 CBattle_Field 但用于 PvP 战争房；内嵌 MapInfo。 | 高 |
| TOD_UserState | 17 | 绝望之塔角色每日状态（进入层/次数/最后清除时间，`charac_expand::CData` 派生）。 | 高 |
| GlobalScriptTutorial | 17 | 全局教程脚本加载器：加载教程各标签数据，内嵌 TutorialData。 | 高 |
| village_attacked::CVillageMonsterArea | 16 | 村庄袭击怪物的区域管理：生成/击杀/移动/位置与列表包发送。 | 高 |
| CAICharacter | 16 | APC/AI 角色静态数据：等级、稀有度、外观点、独立掉落、PvP 胜点。 | 高 |
| village_attacked::CVillageMonster | 15 | 村庄袭击怪物实体（UID、状态、战斗结果包），构造参数含 CVillageMonsterArea*。 | 高 |
| Village | 15 | 村庄容器：区域访问（getArea(int)）、用户列表、广播（send_to_area），内嵌 `map<ushort,CUser*>`。 | 高 |
| RegenerationROI | 15 | 再生随机选项物品系统（RandomOptionItem_Regenerator + CMTRand）：随机选项值/费用计算。 | 中 |
| CTimeGate | 15 | 时间之门村庄对象（`village_object::IObject` 派生）：定时开放副本，关联村庄/NPC/任务索引。 | 高 |
| CMonster | 15 | 怪物静态数据包装（STMonsterScript 成员）：掉落索引/独立物品/图鉴脚本查询，CMonsterManager 持有。核心链路支撑类。 | 高 |
| CDimensionActivationEvent | 15 | 异次元激活事件（CEventBase 派生）：记录副本游玩次数（set_dungeon_play_count）。 | 高 |
| CCharacBloodDungeon | 15 | 血之副本角色状态（周进入次数/点数/消耗金币，`charac_expand::CData` 派生，ResetDaily）。核心链路支撑类。 | 高 |
| Teleport | 14 | 村庄传送点（冷却时间管理、队伍传送联动，内嵌 stPartyTelePort）。 | 高 |
| RentalMachinePcRoom | 14 | 网吧租赁机器实现（RentalMachinePcRoomImpl）：租借/归还/日志，InstanceRentalSystem 内嵌。 | 高 |
| InstanceRentalSystem::RentInput | 14 | 租赁请求输入（含 RentInElem 条目列表）。 | 高 |
| UserMercenaryInfoMgr | 13 | 佣兵管理（增删/检查/等待状态/改名），内嵌 `vector<CHARAC_LOAD_MERCENARY>`。 | 高 |
| CSpecialItemRoutingManager | 13 | 特殊物品路由管理器：StartRouting、队员选择到达、超时/放弃/失败处理、定时器。 | 高 |
| CReduceUpgradeItemPay | 13 | 升级费用减免事件（CEventBase 派生，GetReduceRate）。 | 高 |
| CParty::CItemRoutingData | 13 | 队伍特殊物品路由的成员状态/物品索引数据（CParty 内嵌）。核心链路支撑类。 | 高 |
| CMultiMatchRoomList | 13 | 快速匹配房间池（AddRoom/DelRoom/Match/GetWaitingRoomCombination）。 | 中高 |
| CLevelRewardTableMgr | 13 | 等级奖励表管理器（GetProperLevelRewardTableR、挑战职业判定、开关状态），内嵌 CLevelRewardTable。 | 高 |
| CDungeonNode | 13 | 副本统计 DB 节点（InsertDB/InsertMonsterKey/UpdateCharacter/UpdateMonster/UpdateSkill）。 | 中高 |
| CDungeonList | 13 | 副本注册表（`hash_map<int,CDungeon*>`）：load_list/insert_dungeon/find_dungeon。 | 高 |
| CDungeonClearTracer | 13 | 副本通关过程追踪（击杀计数/终点/Boss 数，Trace 记录）。 | 高 |
| CAICharacterList | 13 | APC 列表（按 AP/等级索引，`map<int,CAICharacter*>` + `map<int,vector<CAICharacter*>>`）。 | 高 |
| BestClearTime | 13 | 角色最佳通关时间记录（`charac_expand::CData` 派生，按难度 map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY>）。核心链路支撑类。 | 高 |
| WarAreaCounter | 12 | 战争区域按时间段统计 WarRoom 数量（GetWarRoomCountAtPeekTime/First/LastIndex）。 | 高 |
| CNPCRelationEventManager | 12 | NPC 好感事件：喜好/厌恶物品、奖励物品、好感索引；内嵌 `map<ushort,stNPCRelationEventInfo*>`。 | 中高 |
| CMapList | 12 | 地图注册表 + PvP 单人可玩地图（LoadPvPSinglePlayableMap、GetPvpMapInfo）。 | 高 |
| CLuckPoint | 12 | 幸运点系统（掉落率加成）：AddUser/UseLuckPoint/GetUserGainItem/sendItemDropRate。 | 高 |
| BattleData | 12 | 队伍战斗指标（地狱组队值总量、总击杀数、事件副本房间清除点数），CParty 内嵌。核心链路支撑类。 | 高 |
| CWorldMap | 11 | 世界地图节点：副本列表、地狱副本判定、死亡塔/副本存在性、最低等级。 | 高 |
| CRidable | 11 | 可骑乘对象（数量/位置/状态/出生包），CBattle_Field 内嵌。 | 高 |
| CNPCScriptList | 11 | NPC 脚本/好感度查询（getFavorLevel/Value、initScript）。 | 中 |
| CDungeonDataManager | 11 | 副本数据统计入库管理（InsertDungeonKey/MonsterKey/SkillKey、UpdateCharacter/Statistic）。 | 中高 |
| effect | 10 | 命名空间/特效结构组（STEffect 值类型 + effect_data），用途低。 | 低 |
| Global::CBossTowerFunc | 10 | Boss 塔回调函数组（非类）：SelectDungeon(CParty*,short,ENUM_DUNGEON_TYPE)、DieCharacInDungeon(CUser*)、DieMob/GetItem/UseItem/MoveMap/FinishLoad/GiveUpGame。 | 高 |
| GenuineDamageUpgradeTable | 10 | 真实伤害升级表（getGenuineUpgradeDamage/MaterialCnt、getEffectInfo）。 | 中低 |
| CMonsterManager | 10 | 怪物注册表（`hash_map<int,CMonster*>` + `multimap<int,int>`）：load_monsters/insert/find。 | 高 |
| CDungeonJobNode | 10 | 副本职业统计 DB 节点（InsertDB/InsertSkillKey/UpdateSkill）。 | 中 |
| CBattle_Field::CBloodRound | 10 | 血之副本轮次序状态（大轮/小轮 order 读写）。 | 高 |
| QuestMovieInfo | 9 | 任务过场动画信息（字符串数据、operator==）。 | 中 |
| GameServerDemonManager | 9 | 服务器公告/维护通知管理（Get/SetNoticeMessage、IsProhibitConnectState、Notice10MinShutDownMessage、SetUserProhibitFlag）。 | 高 |
| CWorldMapList | 9 | 世界地图注册表（`map<int,CWorldMap*>`）：load_list/insert/find。 | 高 |
| CDungeonSuccessNode | 9 | 副本成功统计 DB 节点（InsertDB/UpdateCharacter）。 | 中 |
| stagemap::DistrictData | 8 | 地图区域组数据值类型。 | 高（数据）/ 中（用途） |
| stagemap::AreaData | 8 | 地图街区数据值类型。 | 高（数据）/ 中（用途） |
| effect::STEffect | 8 | 特效数据值类型（clear/operator=）。 | 中 |
| GrowthEquipmentInfo | 8 | 成长装备信息。 | 中 |
| GameResultType | 8 | 游戏结果类型（唯一键、高分更新），供 GameResultSet 使用。 | 中高 |
| EventRewardItemInfo | 8 | 事件奖励物品信息。 | 中 |
| CNPCDynamicInfoManager | 8 | NPC 动态心情管理（onTimer、心情变更包、礼物）。 | 高 |
| CNPCDynamicInfo | 8 | NPC 心情状态（changeMood/forceChangeMood/giveGiftItem/isKeyItem）。 | 高 |
| CDungeonGainedGold | 8 | 副本获得金币计数（CUser 成员，inc/reset）。 | 高 |
| CDungeonEntranceLog | 8 | 副本进入次数日志（Increment/Decrement/Insert，含按小时）。 | 高 |
| village_attacked::CRevengeDungeon | 7 | 复仇副本开放/关闭及关闭时间。 | 高 |
| effect_data | 7 | 特效数据（operator= 值类型）。 | 低 |
| Gm_List | 7 | GM 名单（从 DB 加载并上报上层服务器）。 | 高 |
| FAIR_PVP_SKILL_TREE_SKILL_PER_POINT | 7 | 公平 PVP 技能树每点数据。 | 中高 |
| ExpertJobExp | 7 | 专家职业经验数据（operator= 值类型）。 | 中 |
| EventRewardSection | 7 | 事件奖励分段数据。 | 中 |
| ErrorLog | 7 | 错误日志条目（operator= 值类型）。 | 低中 |
| Condition_LevelUp::Reward_Item | 7 | 升级条件奖励物品条目。 | 中 |
| CBattle_Field::stConditionEnterBossRoomStatus_t | 7 | 进入 Boss 房条件状态结构（CBattle_Field 内 vector 成员）。 | 高 |
| HeroMissionValue | 6 | 英雄任务值（token 字符串读写）。 | 中高 |
| ExceptionItem | 6 | 异常物品解析（find_index/parsing）。 | 中 |
| EncryptTool | 6 | 加密工具（`GlobalInstance<EncryptTool>` 单例）：createEncKey/setCryptKey/wrapEncrypt。 | 高 |
| CPartyResultRecvFlag | 6 | 队伍结算接收标志（按成员索引 IsRecv/SetRecvFlag），CParty 内嵌。核心链路支撑类。 | 高 |
| CDungeonExpStatistic | 6 | 副本经验统计入库（IncreaseDungeonExp/InsertDatabase）。 | 高 |
| CBattle_Field::TournamentInfo | 6 | 锦标赛轮信息（Clear/operator<，CBattle_Field 的 map<short,vector<>> 成员）。 | 高 |
| stagemap::StageData | 5 | 舞台地图数据值类型（clear）。 | 高（数据）/ 中（用途） |
| GlobalInstance<TimerQueue> | 5 | 单例持有器模板实例（TimerQueue）。 | 高 |
| GlobalInstance<TimerDispatcher> | 5 | 单例持有器模板实例（TimerDispatcher）。 | 高 |
| GlobalInstance<Store> | 5 | 单例持有器模板实例（Store）。 | 高 |
| GlobalInstance<PacketDispatcher> | 5 | 单例持有器模板实例（PacketDispatcher）。 | 高 |
| GlobalInstance<InterDispatcher> | 5 | 单例持有器模板实例（InterDispatcher）。 | 高 |
| GlobalInstance<GameWorld> | 5 | 单例持有器模板实例（GameWorld 世界单例）。 | 高 |
| GlobalInstance<EpollHandler> | 5 | 单例持有器模板实例（EpollHandler）。 | 高 |
| GlobalInstance<CGameManager> | 5 | 单例持有器模板实例（CGameManager 管理器单例）。 | 高 |
| GlobalInstance<CEnvironment> | 5 | 单例持有器模板实例（CEnvironment）。 | 高 |
| GlobalInstance<CDataManager> | 5 | 单例持有器模板实例（CDataManager）。 | 高 |
| GameResultSet | 5 | 游戏结果集容器（Clear/GameResultSet），CParty 内嵌。核心链路支撑类。 | 高 |
| ExtreamDungeon::OUTPUT_ITEM_STR | 5 | 合成输出物品条目（operator< 用于排序）。 | 高 |
| EffectAnimationInfo | 5 | 特效动画信息。 | 中 |
| EVENT_SERVER_MESSAGE | 5 | 服务器事件消息数据（clear/析构值类型）。 | 低 |
| CBattle_Field::CTowerOfDespairRewardData | 5 | 绝望之塔奖励数据（reset_tod），CBattle_Field 内嵌。 | 高 |
| StageMapList::_StageMapSummary | 4 | 舞台地图摘要数据。 | 高 |
| RentalMachinePcRoom::RentalMachinePcRoomImpl | 4 | 网吧租赁机 pimpl 实现。 | 高 |
| InstanceRentalSystem::RentalSystemImpl | 4 | 租赁系统 pimpl 实现。 | 高 |
| InstanceRentalSystem::RentalInfo | 4 | 租赁信息（存于 CUser 的嵌套 map）。 | 高 |
| InstanceRentalSystem::RentOutput | 4 | 租赁输出数据。 | 高 |
| InstanceRentalSystem::RentInput::RentInElem | 4 | 租赁输入条目。 | 高 |
| InstanceRentalSystem::DeletedRentItem | 4 | 已删除租赁项数据。 | 高 |
| Guard<Mutex> | 4 | 互斥锁 RAII 守卫模板实例。 | 高 |
| ExtreamDungeon::BindCube_ScriptData | 4 | 合成绑定立方脚本数据。 | 高 |
| ExtreamDungeon::BindCube_LvBonusScriptData | 4 | 合成绑定立方等级加成脚本数据。 | 高 |
| EventUpgradeJarInfo | 4 | 事件升级罐信息。 | 低 |
| EquipmentSkillDataUp | 4 | 装备技能数据升级条目。 | 低 |
| CDungeon_TowerOfDespair | 4 | 绝望之塔副本特化（覆写 _do_after_dungeon_start）。核心链路支撑类。 | 高 |
| CBattle_Field::stEventMonsterStatus_t | 4 | 事件怪物状态结构（CBattle_Field 内 vector 成员）。 | 高 |
| village_attacked::Zone | 3 | 村庄袭击区域结构（operator<）。 | 中 |
| stagemap::SlotType | 3 | 地图槽位类型枚举。 | 高 |
| GlobalInstance<EncryptTool> | 3 | 单例持有器模板实例（EncryptTool）。 | 高 |
| GlobalInstance<Cipher> | 3 | 单例持有器模板实例（Cipher）。 | 高 |
| GlobalInstance<CPrePayInfoMgr> | 3 | 单例持有器模板实例（CPrePayInfoMgr）。 | 高 |
| GlobalInstance<Arad_GiftItem_Set> | 3 | 单例持有器模板实例（Arad_GiftItem_Set）。 | 高 |
| GlobalInstance<ARAD::Arad_Dispatcher_Manager> | 3 | 单例持有器模板实例（ARAD::Arad_Dispatcher_Manager）。 | 高 |
| FunctionGuildMember | 3 | 公会成员函数组（非类）：MakePacketGuildMembersInfo/LogMakeGuildMembersInfo。 | 高 |
| FindRentalInfoByItemIndex | 3 | 租赁信息查找仿函数（operator()）。 | 高 |
| FindPrice | 3 | 价格查找仿函数（operator()(pair<uchar,int>)）。 | 高 |
| ExpBonusPointResult | 3 | 经验加成点结果。 | 中 |
| ExpBonusPointData | 3 | 经验加成点数据。 | 中 |
| CParty::cMember | 3 | 队伍成员数据（Init/cMember），CParty 内嵌 3 个。核心链路支撑类。 | 高 |
| CGameManager::FindUserByUnique | 3 | 按唯一 ID 查找用户的仿函数。 | 高 |
| CBattle_Field::CBloodClearRewardData::stRewardItem_t | 3 | 血之副本奖励物品条目（reset）。 | 高 |
| global::tools::InitializeCharacStat | 2 | 角色属性初始化函数组（非类，initCharacStat）。 | 高 |
| TutorialData::TutorialNotice | 2 | 教程提示数据条目。 | 高 |
| TutorialData::DialogData | 2 | 教程对话数据条目。 | 高 |
| QuestClearDeliveryMsg | 2 | 任务清除投递消息。 | 中 |
| HeroMissionCondition::RewardData | 2 | 英雄任务条件奖励数据。 | 高 |
| HWSpec | 2 | 硬件规格数据（反外挂/设备信息）。 | 低中 |
| GoldCardEventStatistic | 2 | 金卡事件统计。 | 中 |
| GenuineDamageUpgradeInfo | 2 | 真实伤害升级条目。 | 中低 |
| ExtreamDungeon::forceRule_ResultItem | 2 | 合成强制规则结果物品。 | 中 |
| HeroMissionCondition::MissionNo | 1 | 英雄任务编号枚举（成员 T）。 | 高 |
| Global::CGlobalFunc | 1 | 全局函数组（Get_State_Check，非类）。 | 中 |

## 3. 假类 / 常量组 / 枚举（全局符号被误聚为"类"）

| 符号名 | 符号数 | 性质 | 证据 |
|---|---|---|---|
| village_attacked | 107 | 命名空间 + 常量组 + 嵌套类 | `village_attacked::MAX_START_TIME_COUNT`、`MONSTER_REGEN`、`MONSTER_UPDATE_RATE`、`MONSTER_MOVE_PIXEL`、`MONSTER_MOVE_RANDOM_CONST` 等为 `r` 段只读常量、多地址重复（每 TU 一份）；真实类为 CVillageMonsterMgr/CVillageMonsterArea/CVillageMonster/CRevengeDungeon/Zone |
| stagemap | 57 | 命名空间 + 值类型组 | StageData/DistrictData/AreaData/SlotType 只有 clear/operator=/ctor/dtor，其余为 STL vector/move/copy 模板实例符号；无方法逻辑 |
| ExtreamDungeon | 44 | 命名空间 + 常量组 + 枚举 + 类 | `BIND_SPHERE_INDEX`/`GOLD_BIND_SPHERE_INDEX`/`SILVER__BIND_SPHERE_INDEX`/`GROUP_NUM_MAX`/`RARITY_RATIO_MAX` 为 `r` 段常量；ENUM_OUTPUTITEMS_RARITY/ENUM_INPUTITEMS_RARITY/eBindSphereType 为枚举；真实类 CCompound_ExtreamDun_Item 等 |
| effect | 10 | 命名空间/结构组 | `effect::STEffect`、`effect_data` 仅值类型方法 |
| Global::CBossTowerFunc | 10 | 自由函数回调组 | 方法均为 Boss 塔各事件入口（SelectDungeon(CParty*,...)/DieCharacInDungeon(CUser*)），无成员/状态证据 |
| Global::CGlobalFunc | 1 | 自由函数组 | 仅 Get_State_Check |
| global::tools::InitializeCharacStat | 2 | 自由函数组 | 仅 initCharacStat |
| FunctionGuildMember | 3 | 自由函数组 | 仅 MakePacketGuildMembersInfo/LogMakeGuildMembersInfo |
| HeroMissionCondition::MissionNo | 1 | 枚举 | 唯一成员为 `T`（枚举底层类型），用作 HeroMissionEvent 的 map 键 |
| stagemap::SlotType | 3 | 枚举/槽位类型 | 仅 clear（值类型） |
| FindRentalInfoByItemIndex / FindPrice / CGameManager::FindUserByUnique | 各 3 | 仿函数（函数对象） | 均有 operator() |
| 纯数据值类型（非假类，但无业务逻辑） | — | ErrorLog、EventRewardSection、EventRewardItemInfo、ExpertJobExp、ExpBonusPointData/Result、EVENT_SERVER_MESSAGE、EffectAnimationInfo、GrowthEquipmentInfo、EventUpgradeJarInfo、EquipmentSkillDataUp、GenuineDamageUpgradeInfo、HWSpec、GoldCardEventStatistic、QuestClearDeliveryMsg、TutorialData::DialogData/TutorialNotice、CBattle_Field::stConditionEnterBossRoomStatus_t/stEventMonsterStatus_t 等 | 仅 ctor/dtor/operator=/clear；作为 STL 容器元素或消息载荷存在 |

## 4. 模板实例

| 模板 | 实例 | 用途 |
|---|---|---|
| GlobalInstance<T> | TimerQueue、TimerDispatcher、Store、PacketDispatcher、InterDispatcher、GameWorld、EpollHandler、CGameManager、CEnvironment、CDataManager、EncryptTool、Cipher、CPrePayInfoMgr、Arad_GiftItem_Set、ARAD::Arad_Dispatcher_Manager | 静态单例持有器（create/inst/inst_ptr/destroy），游戏循环与子系统访问入口 |
| StaticPool<T,N> | StaticPool<CUser,600>、<CTradeSpace,300>、<CParty,600>、<PvP_Room,600>、<WarRoom,40>、<WongWork::CDeathTower,600>、<WongWork::CBossTower,600>、<advancealtar::StageControl,600>、<QuickParty::CQuickParty,300>、<BlueMarble,300> | CGameManager 的对象池成员：预分配 + 复用核心对象 |
| Guard<Mutex> | Guard<Mutex> | 互斥锁 RAII 守卫 |
| cElection<int,4,4> | CParty 内嵌成员（offset 0xd8） | 队伍内投票/选择机制（如特殊物品路由或卡牌选择） |
| ARAD::Singleton<T> | ARAD::Singleton<HeroMissionEvent> | CRTP 单例基类（HeroMissionEvent 继承） |
| std::auto_ptr<T> | auto_ptr<InstanceRentalSystem::RentalSystemImpl> | 租赁系统 pimpl 生命周期管理 |
| charac_expand::CData（基类） | CKillMonsterInfo、BestClearTime、TOD_UserState、CCharacBloodDungeon | 角色扩展数据持久化基类（_saveData(CUser*)/loadData(CUser*,char*)/getData 模式） |
| CEventBase（基类） | HeroMissionEvent、SeriaRoomAniDecoEvent、CReduceUpgradeItemPay、CDimensionActivationEvent | 事件系统基类（StartEvent/EndEvent） |
| 大量 STL 实例 | hash_map<int,T*>、multimap、map、vector、list、set、basic_string 等 | 容器承载上述数据结构；`std::forward`/`__copy_move` 等实例符号解释了 stagemap 等"符号数"虚高现象 |

## 5. 核心类依赖关系速览

```
CGameManager（对象池/房间单例）
 ├─ StaticPool<CParty,600> ──> CParty ──含──> CBattle_Field ──> CMap* / CDungeon* / CWorldMap*
 ├─ StaticPool<CUser,600> ──> CUser（G1）        └─含─> CPartyTelePort、BattleData、GameResultSet、CItemRoutingData
 ├─ hash_map<int,CParty*> / PvP_Room* / WarRoom* / BlueMarble* / QuickParty* / DeathTower* / BossTower* / StageControl*
 └─ GlobalInstance<CGameManager> 全局访问

GameWorld（世界/频道容器，GlobalInstance<GameWorld>）
 ├─ map<uint/ushort, CUser*>（在线用户）、4 个 Statistics*
 ├─ Village（getVillage/getUserVillage）─含─> Area（map<ushort,CUser*>）─含─> MapArea/LotteryInfo
 └─ goto_dungeon/out_from_dungeon、goto_pvp、goto_warroom（用户跨域迁移）

CDungeon（副本静态定义，CDungeonList 注册）
 ├─ hash_map<int,CMap*> + multimap<int,CMap*>（InsertMap）
 ├─ MazeScript / DimensionPartyCount / TournamentRewardRate / UseCoinDungeonDiff / stEventMonster_t
 └─ 被 CParty（dungeon_start/check_dungeon_start/clear_reward）与 CBattle_Field（SelectDungeon/get_candidator_map）消费

CBattle_Field（CParty 内嵌战斗场）
 ├─ SetParty(CParty*) 反指宿主；SelectDungeon(...CDungeon*,CWorldMap*...)、ConsistTournament(CMap const*)
 ├─ 含 CRidable、CClearCondition、CBloodClearRewardData、CTowerOfDespairRewardData、CTournamentDungeonReward
 └─ 血之副本/地狱组队/锦标赛/TOD 逻辑入口

任务链：QuestList（hash_map<int,Quest*>）→ Quest（静态定义）→ UserQuest（角色实例，含 WongWork::CQuestClear）
        HeroMissionEvent（ARAD::Singleton + CEventBase）→ BaseHeroMissionCondition/HeroMissionCondition（MissionNo 枚举键）
        TutorialData ← GlobalScriptTutorial（加载器）
        TowerOfDespairMgr（层↔CDungeon↔APC 映射）→ CDungeon_TowerOfDespair / CBattle_Field::CTowerOfDespairRewardData / TOD_UserState
```

要点：
- **CParty 与 CUser**：强耦合——CParty 大量方法直接以 `CUser*` 为参数（join_user、die_user、ReviveUser、SetPlayResult、SendDungeonStatistic*、OnKilledMonster 等），CUser 提供 getHades/SendFatigue 等成员；CGameManager 通过 StaticPool 管理两者生命周期。
- **CParty 与 CDungeon**：方法级依赖（check_dungeon_start(CDungeon const*)、CheckEnterDimensionDungeon(CDungeon const*)、UseAncientDungeonItems(CDungeon const*,...) 等），CDungeon 是"数据"，CParty/CBattle_Field 是"执行者"。
- **CParty 与 CBattle_Field**：整体-部分（CBattle_Field 是 CParty 成员），双向回指（CBattle_Field::SetParty(CParty*)）。
- **CDungeon 与 CMap**：整体-部分（CDungeon 注册 CMap 指针）。
- **GameWorld 与 CUser/Village/Area**：容器-元素（用户表、村庄/区域访问与广播）。
- **持久化数据统一基类**：CKillMonsterInfo/BestClearTime/TOD_UserState/CCharacBloodDungeon 均派生 `charac_expand::CData`。
- **事件系统统一基类**：HeroMissionEvent/SeriaRoomAniDecoEvent/CReduceUpgradeItemPay/CDimensionActivationEvent 均派生 `CEventBase`。
