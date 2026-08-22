# GameStubs 迁移 batch-8：顶层真实符号迁移 + compare 记录（2026-08-22）

## 目标
将 GameStubs.cpp 中「有真实实现或可安全迁移到已登记真实 TU」的顶层强符号迁出，
删除 GameStubs 桩，构建验证 0 错误。本批优先「真实符号且对应 TU 已登记且头文件匹配」
的最简安全子集。

## 迁移清单（32 个符号 → 10 个真实 TU）

| 符号（demangled） | 迁往 TU | CMake 状态 |
|---|---|---|
| md5_starts / md5_update / md5_finish（3） | `md5.cpp` | 新增登记（L326） |
| DyeInfo C1 / D1 / clear / operator=(7) … 见下 | `STItemScriptNested.cpp` | 新增登记（L327） |
| STItemScript::SEXPERTJOB C1 / D1（2） | `STItemScriptNested.cpp` | 同上 |
| STSpecialMonsterDrop C1 / clear（2） | `STItemScriptNested.cpp` | 同上 |
| getSkillChecksum / finishSkillChecksum / getSkillSpendSPOnSteal（3） | `SkillSlot.cpp` | 已登记 |
| getLevelLinearAbility（1） | `CEquipItem.cpp` | 已登记 |
| GetEquipmentTypeStringToEnum（1） | `CStackableItem.cpp` | 已登记 |
| _CompareSlot 自由函数（1） | `CInventory.cpp` | 已登记 |
| StrToBitset / BitsetToStr（2） | `CMissionList_Charac.cpp` | 已登记 |
| TimerEntry C1 / operator<（2） | `TimerQueue.cpp` | 已登记 |
| CDnFTimer SetLastTime / GetTimeInterval、CDnFTimerFactory CreateDnFTimer / DestroyDnFTimer（4） | `MySQL.cpp` | 已登记 |
| makeRewardItemInfo（1）| `Quest.cpp` | 已登记 |

> 注：STItemScriptNested 组含 DyeInfo{C1,C2?→C1/C2/D1/D2,clear,operator=} 等多地址别名，
> 按符号计数取强符号 8 个（DyeInfo C1/D1/clear/aS + SEXPERTJOB C1/D1 + STSpecialMonsterDrop C1/clear）。

### 同时删除的 GameStubs 本地重复类型
- `struct RewardItemInfo`（Quest.h 已有权威定义，GameStubs 本地重复版本一并删除）。

## compare / 验收
（compare_tu_game_orig.py，AE 口径；DIFF 均为「算法正确即可」的非逐指令对齐翻译）
- `md5.cpp.o`：identical=0 ae=0，diff=3，missing_in_game=1
- `STItemScriptNested.cpp.o`：identical=14 + ae=66（合计 80），near=0，diff=3，missing_in_game=27
- `SkillSlot.cpp.o`（迁移后）：identical=33 + ae=136（合计 169，含 getSkillChecksum 等 3 个 diff）
- `CInventory.cpp.o`：identical=48 + ae=110（合计 158，含 _CompareSlot diff）
- `CMissionList_Charac.cpp.o`：identical=32 + ae=105（合计 137，含 BitsetToStr diff）
- `Quest.cpp.o`：identical=134 + ae=477（合计 611，含 makeRewardItemInfo diff）
- `TimerQueue.cpp.o`：identical=32 + ae=135（合计 167，含 TimerEntry diff）
- `MySQL.cpp.o`：identical=5 + ae=19（合计 24）

- `cmake --build dnf_decompile/build/game -j16` → **0 错误**（df_game_r 生成）。
- GameStubs.cpp：**1530 → 1145 行**（删 385 行）；强符号 **405 → 373**（迁 32）。
- `nm df_game_r` 确认全部迁移符号由对应真实 TU .o 提供，GameStubs.cpp.o 不再 define
  其中任何符号（grep 残留 = 0）。

## 未迁移项（次要/受 peer 工作门控）
- 剩余 373 强符号多为 CDataManager.h 脚本 POD 生命周期（C1/C2/D1/D0 组），其真实实现
  已存在于未登记 TU（CDataManagerScripts.cpp / GameBasicsScripts.cpp / PvP_MissionSystem.cpp /
  RealGameFunctions.cpp / IsEquipable.cpp），但依赖尚未落地的头文件字段/ABI 与 peer 专有域，
  强行登记将破坏构建或与 peer 冲突。待对应 peer（Align*Fields / FixDataManager* 等）落地后登记。
- 22 个发明符号（GetInvenSlot / write_log_* / getUpgradeItemRepairCostRate / setDropRatio /
  ReCalc / CerashopAddRestrict::DB_* / BaseItemKey/BaseItemValue 等）均有调用方，
  需按 ORIG 报告做语义实现或调用方修正（分属 InventoryHelpers / ItemUpgradeCore / EventCore
  等 peer 域），本轮不删除。