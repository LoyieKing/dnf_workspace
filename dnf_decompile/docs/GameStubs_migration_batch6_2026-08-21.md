# GameStubs 迁移 batch-6：6 类专属 TU 迁移 + compare 记录（2026-08-21）

## 目标
把 GameStubs.cpp 中「方法只有 GameStubs 桩提供」的 6 个类迁移到专属 TU /
权威 TU，删除对应桩，构建验证到 0 错误。

## 每类结果

### 1. CItemGloballyUniqueIdentifierGenerator（generate @ T 0x889246c）
- **处理：建 TU（已有文件，补入 CMake）**
- `ItemGloballyUniqueIdentifierGenerator.cpp/.h` 已存在（batch-5 从 GameStubs 迁移
  的空实现），但**未登记 CMake** → 本次加入 `source/cmake/game/CMakeLists.txt`。
- `itemGloballyUniqueIdentifier_t::reset`（W 0x85139e8）同文件提供，从 GameStubs
  一并删除（避免重复符号）。
- GameStubs 删除行：555-568（struct itemGloballyUniqueIdentifier_t + reset +
  class CItemGloballyUniqueIdentifierGenerator + generate）。
- compare：2 个符号（reset/generate）均为 DIFF（保留 batch-5 空实现行为，非本次新增）。

### 2. CCargo（FindItemLock/check_item_exist/delete_item/get_cargo_slot）
- **处理：直接删 GameStubs 桩**（权威 TU = CCargo.cpp，已在 CMake 第 195 行）。
- CCargo.cpp 已实现 4 方法（nm 确认 T：0x850c836/0x850bc14/0x850b794/0x850b2b4），
  GameStubs 中仅有重复类声明，无方法体。
- GameStubs 删除行：962-969（class CCargo 声明）。
- compare：CCargo.cpp 11 个 identical/AE（4 方法中 get_cargo_slot/delete_item/
  check_item_exist/FindItemLock 均为权威实现），其余 29 DIFF 为 CCargo.cpp 既有实现。

### 3. seriaRoom_AniDeco（ctor @ W 0x822ee18）
- **处理：建新 TU**
- 新建 `SeriaRoomAniDeco.cpp`：`seriaRoom_AniDeco()` 将两个 short 成员清零
  （与 ORIG `movw $0,(eax); movw $0,0x2(eax); ret` 一致）。
- 入 CMake。
- GameStubs 删除行：954-961（class + ctor）。
- **compare：identical=1（ctor 与 ORIG 逐字节一致）**。

### 4. NeedMaterialDataManager（getInstance @ T 0x81b5ab2 / getNeedMaterial(CItem*) @ T 0x81b5b70）
- **处理：建新 TU**
- 新建 `NeedMaterialDataManager.h/.cpp`：
  - 布局：`+0x00 std::map<int,std::pair<int,int>> m_map`、`+0x18 std::pair<int,int> m_default{-1,0}`
  - ctor（成员初始化列表 `m_default(-1,0)`，map 隐式构造）
  - dtor、getInstance（函数局部静态）、getNeedMaterial(CItem*)（map.find + 默认 pair）
  - CItem.cpp 调用点符号 `_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem`
  与 `_ZN23NeedMaterialDataManager11getInstanceEv` 由本 TU 提供。
- 入 CMake。
- GameStubs 删除行：1232-1239（class + getInstance + getNeedMaterial）。
- **compare：44 函数，11 identical + 33 AE；仅 ctor 为 DIFF（2 条独立指令调度顺序
  差异，语义相同）**。

### 5. CRandomValue（ctor @ W 0x85df7fe / operator() @ W 0x85df826）
- **处理：删桩 + 补入 CMake（权威 TU = RandomValue.cpp，batch-5 已建但未登记）**
- `RandomValue.cpp/.h` 已存在（batch-5 迁移的空实现），本次加入 CMake。
- GameStubs 删除行：1969-1976（class + ctor + operator()）。
- compare：2 DIFF（保留 batch-5 空实现行为，非本次新增）。

### 6. RefPvpGrade（GetPvpCurrRankPoint @ T 0x85d4880 / GetPvpGrade @ T 0x85d47ce /
GetPvpNextRankPoint @ T 0x85d4860 / GetPvpPoint @ T 0x85d4832）
- **处理：建新 TU**
- 新建 `RefPvpGrade.h/.cpp`，按 ORIG 反汇编转写 5 个访问器：
  - `GetLastGrade()` 读 this+0
  - `GetPvpCurrRankPoint`：idx>0x25 取 m_data[0x25].curr（+0x12c），否则 m_data[idx].curr
  - `GetPvpNextRankPoint`：idx>0x25 取 m_data[0x25].next（+0x130），否则 m_data[idx].next
  - `GetPvpPoint`：idx<=0 返回 0；idx>0x25 取默认 curr；否则 m_data[idx].curr
  - `GetPvpGrade`：门控 `m_data[1].curr>idx` 返回 0；循环 grade 1..GetLastGrade-1，
    当 `m_data[i].curr < idx && m_data[i].next >= idx` 返回 i；否则 -1。
- 入 CMake。
- GameStubs 删除行：1059-1070（class + 4 方法）。
  - 注：本次删除过程中一次编辑范围误伤相邻 `Packet_Server_Match_data` 声明，
    已修复恢复（见下「修复记录」）。
- **compare：identical=1 + ae=4（合计 5，0 diff）**。GetPvpGrade 首版布尔条件写反
  （`curr>=idx && next<idx` 应为 `curr<idx && next>=idx`），已修正。

## compare 汇总

| 类 | TU | identical | ae | near | diff | 备注 |
|---|---|---|---|---|---|---|
| seriaRoom_AniDeco | SeriaRoomAniDeco.cpp（新） | 1 | 0 | 0 | 0 | ctor 逐字节一致 |
| RefPvpGrade | RefPvpGrade.cpp（新） | 1 | 4 | 0 | 0 | 5 访问器全部一致/AE |
| NeedMaterialDataManager | NeedMaterialDataManager.cpp（新） | 11 | 33 | 0 | 1 | 仅 ctor 指令调度差异 |
| RandomValue | RandomValue.cpp（补入 CMake） | 0 | 0 | 0 | 2 | 保留 batch-5 空实现 |
| CItemGloballyUniqueIdentifierGenerator | ItemGloballyUniqueIdentifierGenerator.cpp（补入 CMake） | 0 | 0 | 0 | 2 | 保留 batch-5 空实现 |
| CCargo | CCargo.cpp（权威，已在 CMake） | 7 | 4 | 0 | 29 | 既有实现；本次仅删桩 |

## 构建与符号验收
- 最终 `cmake --build dnf_decompile/build/game -j16` → **0 错误**（df_game_r 生成）。
- GameStubs.cpp：**2466 → 2408 行**（删 58 行）。
- `nm -C df_game_r` 确认 6 类符号均由对应 TU 提供（T/W），GameStubs.cpp.o 不再
  define 其中任何符号。
- 新增文件入 CMake：RandomValue.cpp、ItemGloballyUniqueIdentifierGenerator.cpp、
  RefPvpGrade.cpp、NeedMaterialDataManager.cpp、SeriaRoomAniDeco.cpp。

## 修复记录
- RefPvpGrade 删除时一次编辑用了错的行范围，误删 `Packet_Server_Match_data` 类声明
  并将 `class RefPvpGrade` 正文破坏 → 已按 ORIG 结构修复恢复。
- RefPvpGrade::GetPvpGrade 初版布尔条件写反（`curr>=idx && next<idx`），按 ORIG
  反汇编修正为 `curr < idx && next >= idx`，compare 从 DIFF 归零至 0 diff。
- NeedMaterialDataManager ctor 初版 `m_default(0,-1)` 与 ORIG 的 {-1,0} 相反，已修正。