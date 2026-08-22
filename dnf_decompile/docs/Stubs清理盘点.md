# df_game_r Stubs 清理与迁移盘点（2026-08-21）

> 目标：清空所有 Stubs 文件，把桩移到正确的 class TU；所有函数语义与 ORIG 完全一致（先不追求 identical）；所有类型内存布局与字段语义完全正确。
> 本文档为迁移规划基线，随进度更新。

## 一、Stubs / deps 文件清单

| 文件 | 行数 | 性质 | 在 CMake |
|---|---|---|---|
| `Game/GameStubs.cpp` | 3477 | 主桩文件：自由函数桩 + 类声明 + 方法桩 | ✅ L219 |
| `Game/GameStubs_remaining.cpp` | 0 | 空（预留） | ❌ |
| `Game/PvP_deps.cpp` | 502 | PvP 链（PvP_Room/WarRoom/BlueMarble）子对象最小桩 + 跨类符号桩 | ❌ |
| `Game/GameWorld_deps.h` | 483 | GameWorld 依赖声明（310 处 asm/extern 外部符号） | header |
| `Game/PvP_deps.h` | 361 | PvP 依赖子对象最小声明 | header |
| `Game/CBattle_Field_deps.h` | 447 | CBattle_Field 依赖声明 | header |
| `Game/RealGameFunctions.cpp` | 35 | 真实函数（IsDeathMatchMap 等），**未编译** | ❌ |

## 二、桩函数规模（权威口径）

- 检测：`scan_stubs.py`（NEW ≤12 指令 且 ORIG ≥20 且 ORIG ≥2×NEW）→ **1191 个**桩函数在二进制中。
- 分布（c++filt 按类，Top）：
  - CUser 43、CParty 12、cUserHistoryLog 12、CSyncScript 10、CPowerManager 8
  - 大量 `Dispatcher_*`（各 4 个，包处理器）
  - CCreatureMgr 6、CLog 6、CBattle_Field 5、CMailBox 5、WarAreaCounter 5
  - CInventory 4、StageControl 4、各脚本类 ctor/dtor 2 个/类（约 100 类）

## 三、迁移目标映射（桩类 → 承接 TU）

| 桩类 | 承接 TU | 状态 |
|---|---|---|
| CUser | `CUser.cpp` | 有 TU，43 桩待迁 |
| CParty | `CParty.cpp` | 有 TU，12 桩待迁 |
| cUserHistoryLog | `cUserHistoryLog.cpp` | 有 TU，12 桩待迁 |
| CPowerManager | `CPowerManager.cpp` | 有 TU，8 桩待迁 |
| CLog | `CLog.cpp` | 有 TU，log* 为 noop 需真实日志语义 |
| CInventory | `CInventory.cpp` | 有 TU，4 桩待迁 |
| CBattle_Field | `CBattle_Field.cpp` 系列 | 有 TU |
| CMailBox | `CMailBoxHelper.cpp` | 有 TU |
| CCreatureMgr | **无 TU** | 需新建或并入 CCreature |
| CSyncScript | **无 TU** | 需新建 |
| WarAreaCounter / StageControl | **无 TU** | 需新建 |
| 各 `Dispatcher_*` | 各 Dispatcher TU | 需核对 TU 是否存在 |

## 四、已知阻塞（摘要：接入被阻挡原因）

- `CAvatarItemMgr`/`CCreature`/`CUserPremium`/`CEventManager`/`CPowerManager`/`CMap`/`sync_script`：头文件布局缺失权威头、`GameStubs.cpp`/`CInventory.h`/`CUserCharacInfo.h` 重复定义、命名空间错位。
- `PvP_deps.cpp` 为过期桩（内部所有符号已有真实 TU，不应接入）。
- 迁移前必须先解决**重复符号**：GameStubs.cpp 中类声明与真实 TU 头可能冲突。

## 五、执行顺序建议

1. **去重**：先消除 GameStubs.cpp 与真实头的重复类声明/枚举定义。
2. **按类迁移**：从有 TU 的类开始（CLog → CUser → cUserHistoryLog → CPowerManager → CParty），把桩方法移到对应 .cpp，逐函数对照 ORIG 反汇编实现真实语义。
3. **无 TU 类**：新建 TU（CCreatureMgr/CSyncScript/WarAreaCounter/StageControl）。
4. **Dispatcher\***：核对各 Dispatcher TU，迁移包处理器。
5. 每迁移一批：`cmake --build build/game -j16` 验证链接无重复符号、`scan_stubs.py` 确认桩减少。
6. 清空 GameStubs.cpp 与 PvP_deps.cpp 的桩体（仅保留确需的 extern/声明）。

## 六、CMake TU 承接映射（139 个游戏 TU 已编译）

有 TU 可承接的桩类：CUser→`CUser.cpp`、CParty→`CParty.cpp`、cUserHistoryLog→`HistoryLog.cpp`、CLog→`CLog.cpp`、CInventory→`CInventory.cpp`、CBattle_Field→`CBattle_Field.cpp`、CDungeon→`CDungeon.cpp`、CDeathTower→`CDeathTower.cpp`、GameWorld→`GameWorld.cpp`、PvP_Room/WarRoom→各自 .cpp、CTitleBook→`CTitleBook.cpp`、各 Dispatcher→`Dispatchers.cpp`。
无 TU 需新建：CPowerManager、CSyncScript、CCreatureMgr、WarAreaCounter、StageControl、CMailBox（`CMailBoxHelper.cpp` 未编）。

## 七、已完成的语义修复（迁移进行中）

| 函数 | 修复 | 状态 |
|---|---|---|
| `GetInvenTypeFromItemSpace(ENUM_ITEMSPACE)` | ORIG 0x80f7845 switch 跳表（0→1,1→2,2→4,3→0,7→3,18→5,默认6），原返回 const char*("") → 改 int + 正确映射 | ✅ 已实现，CInventory.h:309 返回类型同步修正 |
| `GetIntegratedPvPItemAttr` | ORIG 0x84fc5ff 流程已重构（IsIntegratedPvPBaseChannel + GetUpgradeRevisionPvPChannel + _getIntegratedPvPItemAttr/GetItemAttr） | ⛔ 阻塞：依赖 `_getIntegratedPvPItemAttr`(0x84fc541, 67 指令) + CDataManager::find_item + Inven_Item::GetReSealCount，需先迁移依赖簇 |
| `GetMatchingType` | ORIG 0x855c8f4 switch（频道类型 9→2,10→3,14→4,15→5,默认0） | ✅ 已迁移到 PvP_Room.cpp，语义正确（diff 仅 codegen）|
| `CSecu_ProtectionField::GetOppositeErr` | ORIG 0x8288140 switch（0x72→0x73,0x7a→0xee,0x7b→0x7c,0x88→0xec,0x89→0x8a,0xe4/0xe5→0x73,默认1） | ✅ 已实现（自包含），语义正确 |

## 八、重要布局 bug 簇：st\* 包参数类 `[Verified]`

`PacketTypes.h:1320` 起的 `st*` 包参数类（stDeleteItemParam 等）均声明 `char m_pad[0x40]` 且 ctor 为空体，但：
- ORIG ctor（如 stDeleteItemParam 0x8230b38）真实初始化：field4/8/9 + 短数组@+0xa(100) + 短数组@+0xd2(100) + int 数组@+0x19c(100) → 结构至少 0x284 字节。
- 结论：**布局错误（m_pad[0x40] 过小）** 且 **ctor 空体跳过初始化**。需按 ORIG 逐类还原真实字段布局 + ctor 初始化。属目标第 3 部分（类型布局完全正确）。

| `getSkillChecksum` | 0x88923f1 | skill>0x95→0；否则 (level+flag)\*skill\*10/100 | ✅ |
| `Is_restrictive_commercial_transaction_zone` | 0x86c4568 | 矩形区域判定 | ✅ **AE-identical** |
| `_CompareSlot` | 0x8504d0d | 槽位比较（int@+2 有效标志, byte@+1 类型, 空→0xb） | ✅ |

## 布局重构已修复（类型布局+ctor）`[Verified]`

| 结构 | 修复 | 结果 |
|---|---|---|
| `stOneEmotionData` | 新声明（int,int,stringx3,charx3,vector<string>），ctor 构造+clear | +10 仅ORIG 归位 |
| `stEmotionTypeTagsInfo` | m_pad[0x18]+memset → 2 vector，ctor 构造+clear | +12 strict |
| `stEquipmentGradeSample` | m_pad[0x3c]+memset → 4 vector<uint> | ctor 正确 |
| `useCharacterJobFatigue`/`createChracScript` 等单 map 结构 | 空 ctor 已正确（成员默认构造，clear 空 map 等价） | 无需改 |
| `reseal_table_t` | m_pad[0x3c] → vector<uint> + int[6] + int[6]，ctor 清零数组 | +2 strict |
| `advancealtar::ConfigParameter` | m_pad[0x2c] → int,int,char[0x10],char*,char[0x10]，ctor 初始化+指针 | ctor 正确 |

## 关键模式：asm-hack 空 ctor 桩 `[Verified]`
GameStubs.cpp 广泛用 `void sub_XXX_C1(void*) {}`（asm 标签）创建**空 ctor/dtor 符号**（数百个）。类型真实布局在权威头（常为 inline ctor），但引用 TU 常定义自己的本地重复类（如 CEventCharacterHandler.cpp 本地 STEventCharacterInfo），导致：
- asm-hack 强符号覆盖头文件的弱 inline ctor → 空体 ctor 进入二进制（语义错误）。
- 移除 asm-hack 后，本地类 TU 报未定义引用（未 include 权威头）。
- **正确修复**：统一权威头（所有 TU include 权威头 + 移除本地重复类），再让真实 ctor 生效。这会使引用 TU 级联变化（布局/序列化）。

## 重要教训：TimeLine 簇重构已回退（ODR 冲突）`[Verified]`
- advancealtar::TimeLine 真实布局（vector<Phase>+TimeLineSummary，0x28）已从 ORIG 推导，重构后 strict +39。
- 但 CMap.h 有**重复定义** `advancealtar::TimeLine`(m_pad[0x1c]) 且 STMapScript 成员 `m_timeLine330` 依赖它。真实布局(0x28) 与占位(0x1c) 冲突 → ODR 不一致，需深级联重构 STMapScript（4 处重复定义 + 后续字段偏移移位）。
- **教训**：重构类型簇前，先排查该类型在所有头的重复定义；若占位布局被大结构（STMapScript）引用，修复会级联。已回退以保持稳定基线。

## 迁移方法论（逐步验证）
1. 自包含函数（switch/位运算/无成员访问）→ GameStubs 内直接实现。
2. 需依赖（G_GameWorld/G_CDataManager 等）→ 迁移到已安全包含依赖头的 TU（如 PvP_Room.cpp）。
3. 依赖簇（虚调用/find_item/类布局）→ 记录阻塞，先迁移依赖。
4. 每批 `cmake --build` 验证链接 + `scan_stubs.py`/`compare_game_full.py` 确认无回归。

## 八、验证口径
- 语义正确性：逐个 `diff_func.py <mangled>` 对照 ORIG 反汇编（先不看 identical，看控制流/参数/返回值语义）。
- 布局正确性：`offset_probe.py` 对照字段偏移；`static_assert(sizeof)` 校验。
- 构建：`cmake --build build/game -j16`。
- 桩清空程度：`scan_stubs.py` 计数应持续下降至 0。
