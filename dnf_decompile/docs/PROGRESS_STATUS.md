# df_game_r 还原工程 —— 工作进度总览

> 最后更新：2026-08-17（Asia/Shanghai）
> 策略（用户指示）：**先语义还原**——所有 class 字段内存布局/方法签名正确、所有函数真实语义、消除 missing；identical 为最终目标但当前阶段不逐函数强制。

## 1. 目标

按拓扑关系从底层到顶层把 df_game_r 的全部汇编翻译成 C++ 源码，使所有函数编译结果与原始汇编 identical（AE 口径）。以类为粒度、并行 subagent 推进。

## 1.1 翻译工作要求（用户指示，硬性要求）

1. **首选资料**：`docs/class_func_reports/*.md`（每类一份，含逐函数汇编 + Ghidra C 反编译）是翻译工作的**首选内容**——所有 subagent 翻译时先读对应类的报告，再以 ORIG 反汇编核对；禁止跳过报告直接用猜测。
2. **还原原始内存布局**：代码必须还原原始 class 的内存布局结构（成员按 ORIG 偏移声明、类型正确、pack/对齐一致）。翻译中发现签名/getter/setter（ORIG 弱符号访问器族）时，**优先用这些结构快速还原原始字段位置与语义**。
3. **消除全局地址/偏移写法**：工程中应尽量消除 `(char*)this + 0x...`、`*(int*)(base + 0x...)`、`(void*)0x...` 这类裸偏移/裸地址写法——能通过真实成员声明表达的，一律改为具名成员访问；只有 ORIG 确为无符号的全局/数据区才允许保留地址形式并加注释。

## 2. 工作区与权威资料

- 工作区根：`<workspace>/`（本仓库顶层，含 `dnf_decompile/` 与 `dnf_installer/` 两个兄弟目录；下文以 `$WS` 代指）
- ORIG 二进制（权威参照）：`$WS/dnf_installer/build/dnf_data/home/template/init/df_game_r`（elf32-i386 静态，约 3.6 万函数）
- 类反编译报告（汇编+Ghidra C）：`docs/class_func_reports/*.md`（约 2500 个类，逐类）
- 拓扑文档：`docs/df_game_r_class_topology.md`、`docs/class_topology/df_group_1..8_report.md`
- 源码目录：`source/DNFServer/GameServer/Game/`（当前 108 个 .cpp）
- 构建：`build/game`；CMakeLists：`source/cmake/game/CMakeLists.txt`
- 工具链：`toolchains/c6root`（GCC 4.4.7）+ c6446r（4.4.6 cc1plus）逐 TU 路由：`source/toolchain/cmake/dnf_game_cxx.sh`

## 3. 验证口径与工具

- identical 口径（AE）：分支/调用目标→`<T>`；大绝对地址(数据引用)→`<A>`；去 @plt；剥离尾部 nop；C2/D2 同址别名良性
- 全量对比：`python3 source/toolchain/compare_game_full.py`（本工程新增，ORIG 直接参照）
- nsl 对比：`python3 source/toolchain/compare_game_nsl.py`（point 参照）
- 单 TU 编译+对比：`source/toolchain/check_tu_game_orig.sh source/DNFServer/GameServer/Game/<文件>.cpp`
- 逐函数 diff：`source/toolchain/diff_func_cinv.py`；语义对比：`source/toolchain/cozy_compare.py`
- 构建：`cd build/game && make -j16`；`file df_game_r` 必须显示 ELF

## 3.5 构建打通（2026-08-17 新环境复建）

新 checkout 已打通 df_game_r 构建 + 全量对比闭环：
- 依赖：`build/manager/mysqlclient/libmysqlclient.a`（`source/toolchain/build-mysqlclient.sh`）、
  `build/manager/yassl/libyassl.a`（新增 `source/toolchain/build-yassl.sh`）已构建
- **32 位链接**：宿主 g++ 11 无 multilib，新增 `source/toolchain/cmake/dnf_game_link.sh`
  （c6root g++ 驱动，`--sysroot=c6root` + `-B` 4.4.4/32 + 显式 crt 序列）；game/CMakeLists
  的 CMAKE_CXX_LINK_EXECUTABLE 改用它，移除 -no-pie（4.4.7 不支持，4.4 默认非 PIE），LINK_FLAGS 加 -lrt
- `DNF_TC_ROOT` 不必设：工具链脚本已全部相对路径化，自 `$(dirname $0)` 推导 toolchains 目录


## 3.6 首轮 identical 还原（2026-08-17，本地闭环验证）

打通构建+对比后，首批 8 个桩函数还原（全部按 ORIG 反汇编，语义字段/具名枚举，无裸偏移魔法数）：
- identical：`CItem::IsEnableWorld`（34/34）、`IsCreatureItemType`/`isEquipableItemType`、
  `my_compare_unsigned_short`（14/14）、`checkStackableLimit`（43/43）、`CheckEquipable`（44/44）、
  `finishItemChecksum`（25/25，header 返回 void→int）
- 语义正确（残差 4.4.7/4.4.6 寄存器序）：`getItemChecksum`（checksum=(idx+a+b+c)*(slot*10)/10 后
  高16+低16 折叠）。CInventory TU 试切 c6446r 仅 +1（155→156），不值得整 TU 路由
- 关键手法：独立派生局部（CStackableItem*）复现 ORIG 双槽栈布局；`isEquipableItemType`
  与成员版不同（1/5/6 无 8）
- 全量 identical 6406→6450，diff 4150→4143；继续按 GameStubs 桩清理推进

## 3.7 检测：CUser 成员布局 0x3c 漂移（2026-08-17）

还原 `CUser::CheckFatigue` 时发现 CUser 成员布局与 ORIG 存在 **0x3c 偏移漂移**：
- `m_field704ac`（header 注释 +0x704ac）编译落位 +0x70470；`m_premium`（注释 +0x7121c）落位 +0x711e0
- ORIG 在 7 个 CUser 方法（DisConnSig/set_acc_info/UpdateLogout/CheckFatigue/reset/log_out/
  SendCeraShopGiftStatisticLog）均以 +0x704ac 访问该字段，确认 ORIG 偏移为 0x704ac
- 漂移量恒定 0x3c，起于 +0x70470 之前某成员尺寸偏差（候选区：m_network/UserMercenaryInfoMgr/
  m_rentalInfo/m_accountCargo/m_gameOption/m_skillCommands[50]），需按 ORIG 构造 0x864e410
  逐子对象审计修正。修正是「class 数据结构全部还原」交付项的一部分，但改动会波及大量已
  identical 的 CUser 方法，需单独布局修正批处理，本回合不强行改

## 4. 当前状态（2026-08-17）

### 关键 TU 统计（identical/ae 合计 / diff）

| TU | 合计 | diff | 备注 |
|---|---|---|---|
| CGameManager | 2111 | 125 | 全局对象池/房间管理器 |
| CDungeon | 903 | 60 | 副本链 |
| CUser | 817+ | 145 | 玩家聚合根（语义批再 +102 函数） |
| CUserCharacInfo | 575+ | 36+ | 角色基类 |
| GameWorld | 425+ | 77 | 世界/频道 |
| CItem | 141 | 0 | diff=0 |
| CStackableItem | 802 | 22 | |
| CItemList | 820 | 8 | |
| BlueMarble | 261 | 27 | |
| WarRoom | 160 | 37 | |
| CBattle_Field | 183 | 21 | |
| PvP_Room | 86 | 84 | 结构性差异多，语义批补缺中 |
| CParty | 50 | 43 | 语义批 +27 函数 |
| ComboSkill | 242 | 0 | diff=0 |
| SkillSlot | 168 | 23 | |
| CInventory | 98 | 83 | 语义批 +7 |
| WarField / CRelayBattleMgr | 138 / 86 | 11 / 11 | |
| BlueMarbleInfoScript | 357 | 1 | |

## 5. 已完成批次（按拓扑）

### 第九批 + 物品族（2026-08-16 夜）
- CItem/CStackableItem/CEquipItem/CItemList/Inven_Item/CItemAmplifier 全量实现并集成
- 头统一：CItemList.h 用 I1 权威头；PacketBuf.h 去重复 stub（RandomOption 模板移入 Inven_Item.h）；GameTypes.h 的 LogManager 统一到 LogManager.h；PacketGuard 统一为 InterfacePacketBuf 子类
- c6446r 路由：CItemList/CUser/CExpandEquipslot
- 关键修复：stAmplifyOption_t pack(1)（Inven_Item 0x3f→0x3d）；ComboSkill pack(1)（map 0x15/个）；CItem vtable 26 槽（含 set/get_parent_booster_item_id 纯虚）

### G1 玩家域（2026-08-17 上午）
- CInventory 头集成（I2 产出）、SkillSlot（含 pack(1) 布局修复）、CSkill（ORIG 真实 API：reform_ui_group_no(int&,bool,int)、add_learned_skill(_pre_skill)）、CListTables 重对齐（CSkillList::init 等）
- CGameOption / CBoosterGage / CExpandEquipslot / ComboSkill
- CUserCharacInfo（基类 0xe0 修正）→ CUser（0x8ec38 聚合根，99→200+ 方法）

### G2 世界/PvP（2026-08-17 白天）
- CGameManager（2105+）、CDungeon（903）、CDungeonClearTracer（12/12 diff=0）、CParty（含 6CParty mangled 名修复）
- GameWorld（120 函数）、CMap、CBattle_Field、WarField、CRelayBattleMgr、CTradeSpace、GameResultSet/Type、BlueMarbleInfoScript、CAuctionAveragePrice、CDisconnectDetecter、CDoubleConnCheckServerProxy、CEventCharacterHandler、CGuildAgitManager、CPremiumLetheManager、CSchoolMgr
- PvP_Room/WarRoom/BlueMarble（3624/2296/1272 行）
- G2 子对象批：CDeathMatchBattleMgr、BattleData、CPartyTelePort、Secu_HackLogCheckByParty、CTraceMobDieHack、CPartyResultRecvFlag、SECRET_SHOP_DATA、CMTRand、MapInfo、MazeScript、Statistics*、TournamentMonster、UserQuest、PvpResult*、PvP_GuildWar_Log、Area、Village、CUserProc、HistoryLog、CSwitchLog、CUserGlobalInfoHandle、CSharedServerMessageManager 等（35+ 新 TU）

### 语义覆盖批（当前）
- 批 A（玩家缺函数）：CUser +102、CParty +27、CInventory +7、CUserCharacInfo +3（真实语义，按 ORIG 反汇编）
- 批 B（G3 任务域）：CMissionList_Charac（42/42）、CTitleBook、Quest（真实 API 对齐）、CAchievement（36/36）已集成
- 批 C（G2 缺函数）：CDungeon/PvP_Room/WarRoom/BlueMarble/CBattle_Field 缺函数补全中（部分并入）
- 批 D（G3 公会）：CAchievement 36/36、CMission 84/84、CMissionList_Charac 42/42、CGuildAgitManager diff=0、CGuildWarEvent 8/8、CGuildServerProxy 62/67（CEventBase 族事件域以 GameStubs 桩保链接）
- 批 E（G4 商城/交易）：CCargo 42/42、CAccountCargo 32/32、CItemShop 287、CCeraShopGoods 64、CTradeSpace 31/31、CSecretShop 146、CAuction 16、CCeraShopAddRestrict 166（private_store/CCeraShop/CQuestShop/分发域留后续）
- 批 F（G5 数据/脚本）：STSkillScript 276、STQuestScript 552、sync_script 456、RandomOptionScript 682、EquipmentParameterInfo 870、STEquipmentScript 396、STStackableScript 814、STMapScript 510、STDungeonScript 345、STMonsterScript 56、ServerParameterScript 816（合计 5773 identical+ae；大型脚本解析器为真实语义简化实现）

### 收尾集成（2026-08-17 14:30）
- 新增 20 个 TU 入构建（G3/G4/G5 全批），GameStubs 同步裁剪重复桩（CCargo/CItemShop/ServerParameterScript/ST*Script/QuestScript/CAchievement/CItemUpgrade/CEventBase 等）
- 修复若干 mangled 名：CAccountCargo 的 CheckMoney（9→10）、CSecretShop 的 getDungeonIdxAfterClear（21→23）与 GetNpcByDungeonIdx（ERii→ERiii）
- sync_script.cpp（G5）暂缓入构建：与 CItemList.cpp 的 9 批旧实现（不同类布局）冲突，留待统一类布局后合并
- 构建全绿（有效 ELF）；共同 11854 / identical 6406

## 6. 方法论与关键决策

1. **ORIG 编译器**：Red Hat GCC 4.4.6-3（c6446r）。多个 TU 的虚调用寄存器形态在 4.4.6 下逐操作数一致，4.4.7 下 NEAR——逐 TU 路由解决。
2. **nsl 符号**：df_game_r 的 nsl 被 strip，以 point ORIG 为权威参照。
3. **用户规则**：SHA/MD5 等通用算法类只保证算法正确，不需 identical（CSHA/CTEA/Cipher/CNCrypto 等豁免）。
4. **GameStubs 策略**：未翻译符号先在 GameStubs.cpp（3641 行）以本地类+asm 桩保链接；对应 TU 翻译后由主 agent 删桩（有 97 个 CUser/8 个 CParty 方法被桩占位，需清理后才能并入真实实现）。
5. **构建假绿陷阱**：链接失败会留下损坏的 df_game_r，make 视为 up-to-date → `file df_game_r` 显示 "data" 而非 ELF。验证前先 `mv df_game_r /tmp/x` 强制重链接。

## 7. 已知待办清理项

- GameStubs 桩清理：CUser（97 方法）、CParty（8 方法）、CInventory（delete_item/insert_event_items/_SaveAvatarItem/move_item）、CUserCharacInfo（getPowerWarHP）等被桩占位，真实实现并入后删桩
- GameWorld.cpp 引用 ~20 个 phantom 符号（Arad_DataManager::findGameScript、Singleton<Arad_DataManager> 等）——ORIG 无此符号，桩先保链接，后续需按 ORIG GameWorld 反汇编修正调用
- CMap.cpp 尚未交付（仅 CMap.h + GameStubs 桩）；CDungeonList.cpp 由 CListTables.cpp 提供
- CTitleBook/CAchievement/Quest 完整 TU（G3 批 B 进行中）
- CDungeon 432 个 ORIG 符号未覆盖（批 C）
- 若干 compiler 伪影型 diff（空分支 nop、跨调用寄存器形态等，已对照 4.4.4/4.4.6/4.4.7 穷尽验证，非源码可修）

## 8. 下一步计划

1. 汇总语义批 B（G3 任务/成就）与批 C（G2 缺函数）结果，集成新 TU、删对应 GameStubs 桩、构建+对比
2. 语义覆盖批 D：GameStubs 桩清理（CUser/CParty/CInventory 真实实现替换桩）+ 剩余大类的缺失函数（CDungeon/PvP_Room/CBattle_Field 等）
3. G4-G8 各域按拓扑语义还原（G3 任务/公会、G4 商城、G5 数据/脚本、G6 安全、G7 网络、G8 运营）
4. 全量回归：所有类覆盖后统一 build + compare_game_full.py（目标：共同符号覆盖最大化、missing 清零），再逐类精修到 identical

## 9. 团队

主 agent：/root。历史 subagent：trans_i1_itemcore（I1 物品）、trans_i2_inventory（I2 背包）、task_i1_refine_citem、task_i3_stackable、task_i4_itemlist_fix、task_g1_*、task_g2_*、task_sem_*（并行批次）。**subagent 推理级别：用户要求一律 low（spawn 时 reasoning_effort=low + fork_turns=none）。**

## 10. 批4（GameStubs 迁移：18 个无专属 .cpp/.h 的小类）

> 日期：2026-08-21。从 GameStubs.cpp 拆出 18 个类至独立 .h/.cpp 并登记 CMake；构建 0 错误。

迁出类（各建独立 .h/.cpp，签名对照 ORIG，符号 T）：CServerEvent、CPvPLiveEventData、
CShutdowManager、CMyFileLog、fair_pvp::CFairPvPScore、CSyncSlangFilter、CGM_Manager、
WongWork::CLogGameChannel、WongWork::CSkillChanger、CMission_rank、CStatisticContainer、
online_preliminary::COnlinePreliminaryTeam、CSpecialItemRoutingManager、
village_object::CVillageObjectMgr、CFatigueBatteryHandle、village_attacked::CVillageMonsterMgr、
以及 CPad / CMatchingSystem（复用并行 TU Sanicova.cpp / MatchingSystem.cpp）。

新增 CMake TU（Store.cpp 之后）：上述各 .cpp 共 18 个。GameStubs.cpp 行数 2737 → 2549（-188）。

集成要点：
- CMyFileLog 的 ORIG ctor+两参 operator() 由 ServerCommon/DNFFileLog.cpp 提供；本批仅提供
  PvP_GuildWar_Log.cpp 需要的单参 operator()(const char*,...)（自造桥接 _ZN10CMyFileLogclEPKcz）。
- CGM_Manager 的 ctor/dtor、CLogGameChannel 的 ctor/StartLogTimer、CSyncSlangFilter 的
  GetInstance 等由 GlobalData.cpp 提供，新建 TU 不重复定义。
- village_object::Zone::Zone(unsigned char,unsigned char) 为 out-of-line 定义（Area.cpp 引用）。
- CUser.h 的 Sanicova::CPad 补充方法声明（isActivate/getFailCnt/setFailCnt 等）以支撑 Sanicova.cpp。

compare_game_full.py（2026-08-21）：共同 18117，strict=9659 ae=1707（identical=11366），
near=1163，diff=5588，非identical=6751，仅ORIG=28304，仅NEW=1264。已抽查 18 类代表符号均 T。

## 11. 批9（GameStubs 顶层 42 桩清零：真实符号迁移 + 发明符号 ABI 修正）

> 日期：2026-08-22。GameStubs.cpp 剩余 42 个顶层桩函数全部迁出/删除：真实 ORIG 符号
> 迁移到对应真实 TU（签名与 ORIG mangled 精确一致），发明符号（错误 ABI 本地版本）
> 按 ORIG 反汇编修正签名/命名空间/类成员形态后由正确 TU 提供。构建 0 错误。
> 明细见 `docs/GameStubs_migration_batch9_2026-08-22.md`。

迁移去向（42 符号 → 20+ TU）：
- 物品访问器：CStackableItem（getStackableLimit/IsExpAffect）、CEquipItem（get_sub_type/
  RandomItemTable::Set）、CItem（isPackagable）
- 全局工具：PacketBuf（_NS_PI_MakeHash_NOTI）、MySQL（GetIdentityFromDB）、CSystemTime
  （OS_API::GetDateTimeTick）、CUserCharacInfo（GetTenThousandPercentage）、SkillSlot
  （addSkillOnCreateCharacter）
- 世界/统计：CCommonStatisticsMgr（GetInstanceCommonStatisticsMgr 单例）、TimerQueue
  （G_TimerQueue）、EpollHandler（G_EpollHandler）、WarField（WarAreaCounter 4 方法）、
  Inven_Item（UpgradeSeparateInfo::SetUpgradeSeparate）
- 任务/物品域：CDataManagerScripts（_checkTimeoutItem/GetIntegratedPvPItemAttr/
  AccountCargoScript×3/SecretShopScript×2/createStackableLotteryInfo/createGlobalEffectInfo/
  SetLightServerFlag/DeleteInvalidItemScript）、CItemList（Arad_GiftItem_Set::open/
  after_addItem）、CDataManager（CChattingEmoticonList find_emoticon/ReCalc）、
  CTradeSpace（SendChangeTradeState）、CItemShop（importItemShopScript）、
  CItemUpgrade（getUpgradeItemRepairCostRate）
- 发明符号修正：write_log_gain/use_money + isGainedGoldFromDungeonReason（CInventory.cpp，
  ABI 改为 (enum,int,CUser*)）；CItemGeneratorMgr 全局发明符号删除、CDataManager.h 改
  WongWork 权威类型；DB_Load/SaveCerashopAddRestrictType::makeRequest 建类成员
  （新 TU DB_CerashopAddRestrict.cpp 登记 CMake L330）

验收：
- `cmake --build dnf_decompile/build/game -j16` → **0 错误**（df_game_r 生成）
- 42 个 ORIG 签名符号在链接二进制全部为 T；GameStubs.cpp.o 不再 define 其中任何符号
- 发明符号残留（全局 CItemGeneratorMgr、扁平 DB_*_makeRequest、write_log_(int,int,uint)）全部消失
- compare_tu_game_orig.py：CItem diff=0、EpollHandler diff=0；其余为算法正确翻译

## 12. 类粒度逐函数对齐批次（function_reports 复用，2026-08-22）

> 策略（用户指示）：以类为粒度、subagent 对齐所有函数到 identical（AE 口径）；
> 复用 `function_reports` 生成脚本辅助 identical/diff 判断。已将 game 接入
> `gen_report_manifest.py`/`gen_function_md.py`（ORIG 在 init/df_game_r，ORIG_STUB 特判），
> 生成权威 manifest + 5185 个逐函数 md 报告（`function_reports/game/`）。

### 批次结果（各 subagent 单 TU 编译验证，relink 由主 agent 集中执行）

| 批次 | 类/TU | 前 identical+AE | 后 identical+AE | diff | 关键修复 |
|---|---|---|---|---|---|
| 1a | CUser.cpp | 1039 | 1137（identical 415/ae 722） | 259 | CerashopAddRestrict::UserInfo pack(1)+map 预实例化（修正 80+ 函数偏移差3）；15 处访问器改具名成员 |
| 1b | CUserCharacInfo | 578 | 580 | 36 | SetIsInitSkillFlag/2ND 达 IDENTICAL；位域/精度/掩码修复 |
| 2a | GameWorld | 501 | 518 | 108 | CEnvironment.h m_serverEnvir 布局 +0x04→+0x198（影响协议组装）；9 频道判定 if-return |
| 3a | CInventory | — | 47 | 89(改善) | delete_item 完整实现；MakeItemPacket 签名 int→INVEN_TYPE |
| 3b | PvP_Room | — | 90 | 86 | calculate_pvp_point 语义修正（observer 过滤/team/Calculate） |
| 3c | CParty | 134 | 166 | 17 | 桩函数全部真实实现；bool 标志成员 char→bool |
| Layout | CDataManager/CDeathTower/CItemList/PacketCtor/CEquipItem | — | — | — | 裸偏移→具名成员（pvp_channel_info_t/m_items/m_serverEnvir.m_gcNo 等） |

### 关键结论
- **编译器伪影为多数 DIFF 主因**：剩余 DIFF/NEAR 多为 c6(4.4.7) vs ORIG(4.4.6) 的栈槽/寄存器/
  地址代数/EH 布局差异，语义已按 ORIG 报告还原，不可源码层修（需逐 TU 路由 c6446r 或有专用编译器）。
- **类布局修正收益大**：CUser::UserInfo pack(1)、GameWorld CEnvironment::m_serverEnvir 布局修复
  一次性修正数十个函数偏移。
- **已补齐 CUser::SaveInventory**（ORIG 0x0864fe52 T，CParty UseAncientDungeonItems 依赖）；
  深层序列化依赖（BigStreamPool/CStreamGuard/SIG_SAVE_INVENTORY 真实布局）未还原，按 ORIG
  保留早退守卫+成功返 1 的可观察控制流（推断）。

### 待办
- 等待并集成 CGameManager/CDungeon/WarRoom 3 个进行中批次
- relink 全量构建 + compare_game_full 复核（目标 identical 提升、missing 清零推进）
- 剩余真实 stub（CUser FatigueUp/UpdateData/AntibotSend/LogHistory 等）按报告逐函数补齐

### 批次结果补充（CGameManager）
| 2b | CGameManager | 3627 | 3652（identical 586/ae 3066） | 191 | 池分配函数 SetXxx(GetIndex())+insert；operator new+try/catch；用户索引访问器 |

### 全部对齐批次完成（9 个 alignment subagent + LayoutCleanup + 2 个缺失方法批次）
- CUser/CUserCharacInfo/GameWorld/CGameManager/CInventory/PvP_Room/CDungeon/WarRoom/CParty 全部对齐完成。
- 缺失方法批次已补 CUser::SaveInventory、CBattle_Field::setBloodState/get_dungeon_diff、CParty 一系列方法、
  EventNewCharacterReward::isEventCharacter、CWorldMap::IsInHellDungeon/hasDeathTower、CWorldMapList::find_world_map。
- 剩余：CParty 传递依赖（ImplementBlockers 进行中），然后全量 relink + compare_game_full 复核。

## 13. 批次5 剩余类对齐 + 缺失符号补齐（2026-08-22）

### 批次5 子代理结果（对齐 + 真实 bug 修复）
| 类/TU | identical+ae 前后 | diff 前后 | 说明 |
|---|---|---|---|
| CAchievement | 126→225 | 23→17 | setTrigger 分支反；stTitleElement 模板 |
| CMissionList_Charac | 137→137 | 30→30 | addNewMission find_mission 用 m_index；Update_RecvPacket_event 条件取反 |
| CCargo | 11→11 | 29→26 | GetCargoRef/check_slot_empty 升 NEAR；26 条伪影 |
| BlueMarble | 261→261 | 27→27 | 全部语义忠实；改 helper 返回类型会破坏 6 个 identical，刻意不改 |
| CTitleBook | 156→167 | 32→23 | 移除 pack(1)（m_user +5→+8）；loadData 补 _reset；内联 GetTitleSlotRaw |
| SkillSlot | 168→168 | 27→27 | calcUsedSP/check_skill_list find_skill 实参 bug |
| CAccountCargo | 14→14 | 22→22 | CheckInsertCondition 区间反；Deposit/Withdraw 补错误包；字段 m_amp→m_fieldd |
| CTradeSpace | 11→13 | 21→19 | add_item 偏移 +0x1b→+0x0b；checkTrade/checkCancelTrade 重写 |
| CPowerManager | 9→17 | 23→15 | SetPowerInfo/GetPowerWarPoint 等 8 个翻 AE；多处跨模块阻塞 |
| Quest | 606→613 | 34→31 | PostalReward 12→16 字节（修 -4 偏移）；get_appearmap 双地图语义 |
| sync_script | 387→406 | 40→21 | 19 个转 AE；truncate 表系 |
| cUserHistoryLog | 0→40 clean | 40→3 | 40 个空桩→真实实现（layout +0x00 CUser* 等） |
| secretshop | 228→299 | 35→31 | IBuyRule ABI（去 virtual dtor）；missing 166→103 |
| CCubeStatistic（新增） | — | — | 8 符号全实现（singleton/findCubeStuff/send/collect×2）；SECRET_SHOP_STATISTIC_DATA ctor |

### 缺失符号补齐
- CUser::SaveInventory（ORIG 0x0864fe52）：早退守卫 + 成功返 1，序列化体待依赖补齐（推断）
- cUserHistoryLog::DungeonClearInfo 两重载（0x8684ac4/0x8684a6e）
- CBattle_Field::setBloodState/get_dungeon_diff、CWorldMap::IsInHellDungeon/hasDeathTower、
  CWorldMapList::find_world_map、EventNewCharacterReward::isEventCharacter、CParty 系列（+5 helper）
- 冲突解决：CUser.cpp 删 cUserHistoryLog::RedeemItemAdd asm 桥（cUserHistoryLog.cpp 真定义）

### 最终度量（compare_game_full）
- 起始：共同 18633 identical=11768 near=1214 diff=5651 非identical=6865
- 现在：共同 18744 identical=12168 near=1094 diff=5482 非identical=6576
- **identical +400；diff -169；共同 +111；非identical -289**
- nsl（ServerLib）：identical 726/729（99.6%），diff=1
- 全量构建 df_game_r：0 错误，有效 ELF（32 位，not stripped）

## 14. 快脚本 + 正向修复（2026-08-22）

### 新增 game_func_report.py（单函数快速验证脚本，子代理专用）
`source/toolchain/game_func_report.py`：单 TU 编译（不链接）+ 读 `docs/class_func_reports/<类>/<方法>.md`
（ORIG 汇编 + Ghidra C）+ 生成合并报告（ORIG asm / Ghidra C / 我们 asm / diff / 分类）。
- `--no-compile` 模式 <1.5s（用 build/game/df_game_r 的 load_disasm_cached 切片）。
- 报告按 c++filt demangled 自动定位（ORIG 项目函数 mangled 前缀正确）；仅第三方模板(boost)等
  c++filt 无法 demangle 时用 `--method`/`--class-override` 显式指定。
- 判定：IDENTICAL / IDENTICAL_AE / NEAR / DIFF。

### 验证指南（4 条核心要求固化）
`source/toolchain/game_verify_guide.md`：
1. 验证只用 game_func_report.py（禁慢的 gen_function_md --function）。
2. 汇编/Ghidra C 只用 docs/class_func_reports/。
3. 不允许编造导出符号不存在的函数（发明符号按 ORIG 真名修正调用）。
4. 函数参数/返回值类型可改（二进制无法推导时）。
5. padding/data 等无语义字段的偏移访问 → 按语义建真实字段，getter/setter 函数名为权威。

### 正向修复（不允许回退，修复被取消子代理的半成品/破坏）
- advancealtar::ActionDefine/TimeLine 重复定义 → 删 CMap.h 重复，统一 advancealtar.h（CMap.h include advancealtar.h）。
- item_lock::stItemLockRef / CItemLock 三处重复 → 权威统一 CTitleBook.h（含 CItemLock 类）。
- stIndependentDropInfo / BuyUpgradeData / BuyShopData 重复 → 权威提升 CDataManager.h。
- CerashopAddRestrict::LoadScriptDaily/FindIpgNo/CheckBuyableProduct、ServerParameterScript::GetPvPPenaltyRevision
  签名（void/int/bool/float）按 ORIG 修正。
- cUserHistoryLog::EnterDungeon 缺 2 参声明 → CUser.h 补。
- advancealtar::TimeLine ctor/dtor/op= 定义移入构建内 advancealtar_StageControl.cpp。
- stDeathTower_t/live_server_info_t ctor 缺定义 → CDataManagerScripts.cpp 补。
- FixUndefinedSymbols：18 个真实 ORIG 符号补定义（CInventory::MakeItemList/SendItemLockListInven、
  CUser::ChangeCharacSlot/UpdateCharacView/setLinkCharacDisconnectFlag/_postCheckForceChangeGrowType、
  CDataManager::GetExpertJobEtcScript、STExpertJobScript::isBoundaryExpValue、CAssaultMgr::OnLeaveAssaultPlace、
  CGMAccounts::removeGM、CUserGlobalInfoHandle::reset_uniqueid_flag、CCreatureMgr::SendCreatureItemList、
  IsLightServer、importNpcScript、DB_* makeRequest×4）+ 3 个发明符号修正
  （CUserGlobalInfoHandleIns→Instance()、STExpertJobScri::operator->→STExpertJobScript::GetLevel、DB_* const）。
- reset_uniqueid_flag asm 桥 17→19 长度修正；CCreature.cpp 不入 CMake（类未建模），
  SendCreatureItemList 迁至 CCreatureMgr.cpp。

### 度量（compare_game_full）
共同 19274 / identical=12636 / near=1135 / diff=5503 / 非identical=6638。
构建 0 错误，df_game_r = 有效 ELF。

## 15. extern "C" asm 桥全量清理（约束12 落地，2026-08-22 进行中）

处理协议（game_verify_guide.md §9）：删 `extern "C" ... asm("_ZN...")` 桥 → include 权威头 → 调用点改真实调用 → 缺类/方法建 .h 或补声明（带 ORIG 证据）→ 正向修复编译。
范围扩展 + hub 周知（§10）：允许改指定范围外头（须权威证据），但必须 hub 广播周知其它 subagent。

批次结果：
- Village 批（CTraceMobDieHack 30/Village 27/Area 26/VillageMonster_helpers 7=90桥）：全删，5 TU OK；建 TownAreaScript.h；CVillageMonsterMgr::OnEvent void→bool。
- CleanCPartyAsm 部分：CTradeSpace 24桥 + CInventory 全删；建 CTradeSpace.h/DB_AvatarChangeOwner.h。
- CleanCParty2Asm：CParty 77桥全删（0 残留）；建 BattleData.h/SECRET_SHOP_DATA.h/Secu_HackLogCheckByParty.h；修 CBattle_Field_deps.h/CVillageMonsterMgr.h/GlobalData.h 等跨头冲突。
- CleanUserQuestAsm：UserQuest 62/WarRoom 55/WarField 21=138桥全删；修 PvP_deps.h/CInventory.h 等 5 头。
- CleanFAsm：IsEquipable 16/CAuction 15/Secu_HackLogCheckByParty 12/CAccountCargo 11/sync_script 10=64桥；建 RDARScriptStringManager.h/ServiceRestrictManager.h/SyncScriptDeps.h。
- 进行中：CleanCGameManagerAsm(144桥)、CleanPvPAsm(109+75桥)。

已知集成事项（main relink 时统一）：
- 多处本地桩（GlobalData.cpp/WarField.cpp 的 ServiceRestrictManager、sync_script.h ST 镜像、PvP_deps.cpp WarField/map_monster/map_item 等）与新建权威头 ODR 去重。
- WarAreaCounter::GetCurrenTimeTable void*→int（CDataManager.h，CleanCGameManagerAsm）。

## 16. extern "C" asm 桥 + *_deps.h 全量清零（2026-08-22，重大里程碑）

### 结果（已验证构建绿色 + 全量对比）
- **asm 桥清零**：源码 0 个 `asm("_ZN...")` / `extern "C" sub_*`（原 902 个全删）→ 全部改真实 include 类型定义 + 直接调用。
- **_deps.h 全删**：PvP_deps.h / CBattle_Field_deps.h / GameWorld_deps.h 3 个（原承载重复本地桩/前向）全部删除，类定义转移到正确/新建权威 .h。
- **大量新建权威头**：CTradeSpace.h/DB_AvatarChangeOwner.h/TownAreaScript.h/BattleData.h/SECRET_SHOP_DATA.h/Secu_HackLogCheckByParty.h/Statistics.h/CDisconnectDetecter.h/CUserProc.h/RDARScriptStringManager.h/ServiceRestrictManager.h/SyncScriptDeps.h/CUserGlobalInfoHandle.h/HistoryLog.h/CSchoolMgr.h/CGuildAgitManager.h/CDoubleConnCheckServerProxy.h/Inter_MonitorGuildPointDel.h/CDeathTowerRanking.h/CDeathMatchBattleMgr.h/Village.h/Area.h/CBattle_Field_shared.h/MSG_STAT_RANKRES.h/STExpertJobScript.h/Redeem_Item__CRedeemItem.h + DNFLex 族(DNFLex.h/CompiledDNFLex.h/ScriptStringManager.h/DNFLexWrapper.h)。
- **跨头冲突正向修复**：CBattle_Field_deps.h/GameWorld_deps.h/PvPTypes.h 本地桩 vs 权威头（add guard/include 权威）；WarField.h 成为 map_item/map_monster/MapInfo/stMapMonsterKillChecker_t/stMapPlayInfo_t 唯一声明点；PvPTypes.h 成为 PvP 域权威继承者；CVillageMonsterMgr.h 为 village_attacked 域唯一头。
- **签名按 ORIG 正向修正**：CVillageMonsterMgr::OnEvent void→bool、CUser::make_basic_info void→int、GameWorld 域返回值、CerashopAddRestrict 系列、ServerParameterScript::GetPvPPenaltyRevision int→float、卡内 makeRequest static 等。
- **宏约定**：CParty.cpp 显式构造/析构带模板参数(含逗号)用 typedef(MapII/MapInfoVec)避免 `~std::map<int,int>()` 逗号解析歧义。
- **Singleton 模板唯一化**：Arad_DataManager.h 提供 `ARAD::Singleton<T>::Get()` 唯一模板定义，ARAD.cpp/CCeraShopAddRestrict.cpp 只保留显式实例化。

### 验证
- `df_game_r` 链接成功（有效 ELF，0 错误）。
- compare_game_full：共同 19285 / identical 12647 / near 1134 / diff 5504 / 非identical 6638（较前 identical 12636 微升，无回归）。
- 余：RefactorDNFLex（DNFLex 族收尾 TOP 域 TODO-1..7）进行中。

## 17. DNFLex 族重构完成 + 最终验收（2026-08-22）

- RefactorDNFLex：新增 6 TU 编入 CMake（DNFLexWrapper/DNFLexWrapperStream/DNFLexWrapperLoadStream/DNFLexCore/CompiledDNFLexCore/FlexLexerEngine[替 FlexLexerCore.cpp]）；DNFLex 族真实 C++ 成员（__dnf_script__FlexLexer vtable 链）替代 sub_FlexLexer_* C 符号；头 DNFLex.h/CompiledDNFLex.h/ScriptStringManager.h 唯一声明点。
- 补 `toTString(const std::string&)` 定义（ORIG 0x8adeab0，SyncScriptDeps.cpp 与 toMbcs 同域）。
- 集成修复：CParty.cpp 显式模板 dtor typedef(MapII/MapInfoVec)、ARAD::Singleton<T>::Get() 唯一模板定义（Arad_DataManager.h；ARAD.cpp/CCeraShopAddRestrict.cpp 只保留显式实例化）、Village +0x30 语义为 m_questIdx（CheckMoveTown ORIG 无 requiredLevel）、make_basic_info void→int、CUser.cpp Secu_HackLogCheckByParty include、MapInfo typedef 顺序。

### 最终验收（全部达成）
- `_deps.h` = 0（PvP_deps/CBattle_Field_deps/GameWorld_deps 全删）
- extern "C" asm 桥 = 0（源码 0 个 `asm("_ZN...")`）
- DNFLex 族真实 C++ 成员编入（187 个 DNFLex/FlexLexer/CompiledDNFLex 符号）
- `df_game_r` 链接成功（有效 ELF 32 位，0 错误）
- compare_game_full：共同 19406 / identical 12668 / near 1134 / diff 5604（较 12636 提升）

### 结论
约束12（禁止 extern C 获取链接符号，必须 include 真实类型定义）与约束2（重复类型合并/删 _deps、因报错不回滚）已完整落地。902 个 asm 桥 + 3 个 _deps.h + 大量本地重复类型全部清理为真实 include 类型定义。
