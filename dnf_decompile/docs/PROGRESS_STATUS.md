# df_game_r 还原工程 —— 工作进度总览

> 最后更新：2026-08-17（Asia/Shanghai）
> 策略（用户指示）：**先语义还原**——所有 class 字段内存布局/方法签名正确、所有函数真实语义、消除 missing；identical 为最终目标但当前阶段不逐函数强制。

## 1. 目标

按拓扑关系从底层到顶层把 df_game_r 的全部汇编翻译成 C++ 源码，使所有函数编译结果与原始汇编 identical（AE 口径）。以类为粒度、并行 subagent 推进。

## 1.1 翻译工作要求（用户指示，硬性要求）

1. **首选资料**：`docs/class_func_reports/*.md`（每类一份，含逐函数汇编 + Ghidra C 反编译）是翻译工作的**首选内容**——所有 subagent 翻译时先读对应类的报告，再以 ORIG 反汇编核对；禁止跳过报告直接用猜测。
2. **还原原始内存布局**：代码必须还原原始 class 的内存布局结构（成员按 ORIG 偏移声明、类型正确、pack/对齐一致）。翻译中发现签名/getter/setter（ORIG 弱符号访问器族）时，**优先用这些结构快速还原原始字段位置与语义**。
3. **消除全局地址/偏移写法**：工程中应尽量消除 `(char*)this + 0x...`、`*(int*)(base + 0x...)`、`(void*)0x...` 这类裸偏移/裸地址写法——能通过真实成员声明表达的，一律改为具名成员访问；只有 ORIG 确为无符号的全局/数据区或错拼 mangled 符号才允许保留地址形式并加注释。

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

## 4. 当前状态（2026-08-17）

### 全量对比

| 指标 | 数值 |
|---|---|
| 共同符号 | 11854 |
| identical（strict+ae） | **6406**（strict 5921 + ae 485） |
| near | 1162 |
| diff | 4286 |
| 仅 ORIG（未翻译） | 34567 |
| nsl | 726/729 identical |

构建全绿（有效 ELF）。目标回合起点（2026-08-16 23:55）为 2854 identical，累计 +3552。源码 128 个 .cpp。

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
4. **ORIG 错拼 mangled 符号**：约 20 个 ORIG 符号的长度前缀与真实名不符（如 `_ZN13CEventManager13GetRepeatEventEi` 的 GetRepeatEvent 实为 14 字符但前缀 13；ServerParameterScript 前缀 23 而非 21；HeroMissionEvent 15 而非 16；CItemShop 方法 22/19 而非 21/18）。无法用标准 C++ 声明生成，用 **asm-label 直补**（GameStubs/各 TU 中注明）。
5. **GameStubs 策略**：未翻译符号先在 GameStubs.cpp（3641 行）以本地类+asm 桩保链接；对应 TU 翻译后由主 agent 删桩（有 97 个 CUser/8 个 CParty 方法被桩占位，需清理后才能并入真实实现）。
6. **构建假绿陷阱**：链接失败会留下损坏的 df_game_r，make 视为 up-to-date → `file df_game_r` 显示 "data" 而非 ELF。验证前先 `mv df_game_r /tmp/x` 强制重链接。

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
