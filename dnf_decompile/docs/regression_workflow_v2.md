# 回归攻坚工作流 v2（设计稿，2026-08-13）

## 0. 判定硬规则（用户 2026-08-13 明确）

**只要与 ORIG 有任何不同，就是 bug，必须修。** 不存在“形态差异/代码生成尾差
不算 bug”的豁免。具体包括但不限于：

- 日志字符串内容、编码、行号、换行符不同 —— bug（例：statics
  SendDBDeathTowerPlayDataJobStatistic 的英文日志 vs ORIG 韩文，已修）
- 字段偏移、宽度、符号性不同 —— bug
- 常量、立即数、调用目标、调用次数不同 —— bug
- 寻址形态（`mov off(%reg)` vs `add $off; mov (%reg)`）、
  局部变量布局、寄存器分配、代码块排放顺序 —— 同样是 bug

差异即使语义等价、输出字节相同，也是 bug。判定永远以 ORIG 二进制为准。
子代理不得自行把差异归类为“假阳性/非 bug”而跳过；修不了的（如编译器块排序
启发式）必须列为待办并上报，由根代理决定用编译器变体/ASM 等手段继续处理，
而不是就地放弃。

## 1. 为什么换掉旧工作流

旧工作流的主要问题是“高并行、低归属、弱记忆”：

- 每轮同时跑 6 个服务主 Agent + 4 个近端专项 Agent，但组是按轮次手工切出来的，同一 TU / 同一函数反复出现，Agent 之间没有统一认领状态。
- 开工前只读 md，很多函数没有预诊断。Agent 各自从 diff 重头分析，重复尝试同几种源码形态。
- `attempts` 只有 88 个文件覆盖当前剩余函数（88/649 ≈ 13.6%），而且多数只记录“我试了什么”，没有记录“该函数最可能属于哪类问题、应该交给谁”。
- 近端函数（diff ≤ 20 行）只剩 98/649，占总数的 15%。继续把重点放在“近端专项”会陷入长尾，真实大 diff 反而没有被系统清理。

当前权威状态（2026-08-13，R44）：

| 服务 | 当前 md | DIFF | NEAR | 备注 |
|---|---:|---:|---:|---|
| coserver | 1 | 1 | 0 | 单函数 |
| manager | 3 | 2 | 1 | 单函数/小文件 |
| statics | 53 | 52 | 1 | Statistics.cpp 34 个 |
| dbmw | 191 | 187 | 4 | 大量 CDBManager / PacketTranslater |
| monitor | 196 | 186 | 10 | PacketTranslater 72 个 |
| guild | 205 | 192 | 13 | PacketTranslater 92 个、CGuild 42 个 |
| **合计** | **649** | **620** | **29** | |

从当前 md 做快速特征统计：

- 明确出现“调用目标集合差异”的函数约 **67 个**：这是最高价值目标，通常代表 ours 调了 ORIG 没调的函数、或 ORIG 调了 ours 没调的函数。典型如 `CGuildManager::GuildMemLogout`：ORIG 调 `CServerInterface::GetGroupNo()`，ours 却直接读 `m_field9`。
- 约 **113 个 md** 没有在 md 内定位到源码文件，需要先补齐 `symbol -> TU -> line` 索引，否则 Agent 又会在 `rg` 和读代码上浪费时间。
- `NEAR` 只剩 29 个，大部分是纯寄存器/栈槽/求值顺序代码生成差异。
- 大 diff 函数集中在少数大 TU 里，适合按 TU 归并成“一个文件一个执行者”，而不是把一个 TU 拆给多个并行 Agent 导致互相覆盖。

## 2. 新工作流的核心原则

1. **先诊断，后开工**：根 Agent 必须先为每个剩余函数生成一份预诊断（类别、根因假设、禁止尝试方向、推荐入口），不能只把 md 列表丢给子 Agent。
2. **按 TU 归属分配，不按服务/随机分组**：一个编译单元只允许一个写者；多个 TU 可以并行，但共享头改动统一由根 Agent 审批集成。
3. **队列 + 认领 + 合并**：根 Agent 维护唯一工作队列；子 Agent 只在自己的 scratch 目录工作，提交补丁给根 Agent；根 Agent 统一集成、重建、重生成 md。
4. **高价值目标优先**：先清 `callset` 差异和行号/常量/字段偏移等真实源码差异，再处理纯代码生成尾音；不再以“近端函数”作为默认优先级。
5. **闭环以 authoritative md 为准**：每轮先 `gen_report_manifest.py` 再 `gen_function_md.py` 全量重生成，避免陈旧 manifest 造成假 md。
6. **尝试库升级为“诊断库”**：不只记源码变体，还记该函数的 diff signature、根因类别、已试编译器/flag、是否需共享头改动、是否已判到头。

## 3. 建议的轮次结构

一轮回归分成五个阶段：`Preflight → Triage → Dispatch/Execute → Integrate → Postmortem`。

### 阶段 A：Preflight（根 Agent，串行）

目标：得到一个干净的、可信的剩余函数全集。

```bash
cd /home/loyieking/dnf_workspace/dnf_decompile
bash source/toolchain/cmake_build_all.sh
python3 source/toolchain/gen_report_manifest.py
python3 source/toolchain/gen_function_md.py --services <svc>
```

产出：

- `function_reports/<svc>/manifest.tsv`
- 实际 `.md` 文件集合（以文件系统为准，manifest 只作输入）
- `_triage/preflight.tsv`：本轮权威 md 清单 + status + size + md 路径。

规则：

- 不信任上一轮遗留 md；必须重新生成。
- 对已经 identical 但仍有旧 md 的函数，直接删除旧 md。
- 对 `MISSING` 只保留第三方符号豁免记录，不进入可操作队列。

### 阶段 B：Triage（根 Agent，串行，可脚本化）

为每个 md 生成一行诊断。建议新增脚本：

```text
source/toolchain/regression_triage.py \
  --services dbmw guild monitor statics coserver manager \
  --out function_reports/_triage/v2_triage.tsv
```

每行至少包含：

```text
service  name  status  diff_plus_minus  same_mnemonic
call_diff_orig  call_diff_new  has_eh  src_file  src_ok
attempts  bucket  reason  assignee
```

其中 `bucket` 采用下面五类。

#### B1 `CALL_DIFF`：调用目标集合差异（最高优先）

判定：过滤 STL、`_Unwind_*`、`__cxa_*`、`terminate`、`operator new/delete`、`printf/puts/memcpy/memset` 等噪声后，ORIG 与 OURS 的调用符号集合不同。

处理：

- 优先由根 Agent 或指定“真实语义修复 Agent”处理。
- 直接对照 Ghidra C 和 ours 源码，找出 ours 多调/少调/调错的方法。
- 典型真实差异：
  - ORIG 调 `GetGroupNo()`，ours 读成员；
  - ORIG 有 `CMyFileLog` 日志路径，ours 缺失；
  - ORIG 调 `X::A()`，ours 调 `X::B()`；
  - 构造/析构配对差异。

#### B2 `CONST_OR_OFFSET`：立即数、字段偏移、栈布局类

判定：无 `CALL_DIFF`，但 diff 中出现 `cmp $X`、`mov $X`、`0x..(%reg)`、`__assert_fail` 行号实参等差异。

处理：

- 真实差异，禁止归档。
- 常量以 ORIG objdump/字符串表实测为准。
- 字段偏移优先怀疑类成员顺序 / `#pragma pack` / 继承布局。
- 行号按 ORIG 二进制实测对齐源码行号。
- 栈槽/寄存器类先按 §4.1 尝试源码变体，再用工具链 A/B，最后才允许归档候选。

#### B3 `EH_OR_CLEANUP`：异常、清理块、EH landing pad

判定：无 `CALL_DIFF`，但 ORIG/OURS 的 `_Unwind_Resume`、`__cxa_*`、`_ZSt9terminatev`、`CGuard` 析构/清理块数量或顺序不同。

处理：

- 交给“异常形态专项 Agent”，只处理同一服务中 EH 差异。
- 常用手段：检查 `-fno-exceptions`、try/scope 边界、临时对象生命周期、`CGuard` 的构造/析构位置、`throw` 表达式是否引入临时 string。
- 一个 TU 的 EH 配置通常影响多个函数，务必批处理并做整 TU 回归。

#### B4 `CODEGEN_TAIL`：纯代码生成尾音

判定：`same_mnemonic == true` 或仅剩寄存器分配/栈槽/求值顺序/寻址折叠/分支落地，无调用集、常量、字段偏移差异。

处理：

- 这是最后优先级。
- 每个函数只允许 2~3 个新源码变体 + 一次工具链 A/B。
- 仍不中立刻写 `attempts` 并标记 `ARCHIVE_CANDIDATE`，不再恋战。
- 归档候选仍需证据（diff 行 + 坑点号 + 语义等价理由），由根 Agent 统一审批。

#### B5 `NEEDS_REVERSE`：大 diff 且无源码定位或调用集/结构差异混杂

判定：`src_ok=false`、diff 很大、多种差异叠加，或 `CALL_DIFF` 背后是缺失控制流。

处理：

- 由专门 `decompiler` Agent 做单函数逆向后给出补丁建议。
- 每函数一个任务，产出“目标源码形态 + 修改前/后片段”，由根 Agent 或文件 owner 审核落地。
- 禁止多个 Agent 直接改同一个 TU。

### 阶段 C：Dispatch / Execute（并行）

#### C1 生成工作包

以 `source file` 为基本边界，为每个 TU 生成一个工作包。建议格式：

```text
function_reports/_triage/packages/<svc>/<package>.tsv
```

每行一个函数；第一列为包内函数名，后续为 bucket、src_file、attempts、建议。

分配规则：

- 一个 TU 只给一个执行 Agent；Agent 可以在自己 TU 内顺序处理多个函数。
- 同一 TU 若函数过多（如 `DNFPacketTranslater.cpp` 72/92 个），可以把“分析/逆向”拆给只读 subagent，但源码写入仍由该 TU owner 统一完成；或者根 Agent 先做 batch 分析，再由 owner 批量落补丁。
- 小 TU 按服务合并成一个“混合 TU”包，避免碎片。
- 共享头改动不直接放行：子 Agent 在 scratch 中试验并提交 patch，根 Agent 集成时逐个审批。

建议优先分波：

1. 第一波：`coserver` + `manager` + `statics`，规模小，快速闭环。
2. 第二波：`dbmw`，按 `DBManager.cpp` / `DNFPacketTranslater.cpp` / 其它 TU 切包。
3. 第三波：`monitor` + `guild`，按 `DNFPacketTranslater.cpp`、`DNFGuild.cpp`、`CGuildManager.cpp`、`GuildCargo.cpp` 等 TU 切包。

不要六服务同时铺开。先处理完小服务，再集中火力到大 TU。

#### C2 执行 Agent 工作约定

每个执行 Agent：

1. 读自己包内函数的 `_triage` 行和 attempts，不重复已试方向。
2. 只在自己的 scratch 目录改源码（沿用既有 scratch helper，但工作目录改为 `/tmp/wf2/<package>/`）。
3. 对包内函数按 bucket 优先级处理：`CALL_DIFF` > `CONST_OR_OFFSET` > `EH_OR_CLEANUP` > `NEEDS_REVERSE` > `CODEGEN_TAIL`。
4. 每完成一个函数就写本地 `results.tsv`，不直接改仓库。
5. 遇到共享头/布局改动，产出 patch + 证据，交由根 Agent 集成，不自己合并。

#### C3 防止重复的关键

- 根 Agent 发布 `_triage/queue.tsv`，状态包含 `todo / claimed:<agent> / patched:<agent> / integrated / verified / archive_pending`。
- 执行 Agent 只处理根 Agent 分配的包，不自行扩展范围。
- 包和队列都进 git；同一函数被认领后，其他 Agent 必须跳过。

### 阶段 D：Integrate（根 Agent，串行）

1. 收集所有执行 Agent 的 `results.tsv` 和 patch。
2. 按服务 / TU 合并到临时分支：
   - 同一 TU 只有一个执行者，合并应是线性的；
   - 共享头 patch 单独 review；
   - 任何合并后全量构建失败，立即定位并回退该 patch。
3. 全量重建该服务。
4. 重新生成 manifest 和全量 md：

   ```bash
   python3 source/toolchain/gen_report_manifest.py --services <svc>
   python3 source/toolchain/gen_function_md.py --services <svc>
   ```

5. 对每个“声明 FIXED”的函数用 `--check-only` 或全量 md 确认 md 已删除。
6. 对回归函数记录 `integrate_regression`，回退具体 patch，不是整轮回退。
7. 更新 `attempts`：
   - 新增尝试写入对应 `<mangled>.tsv`；
   - 已归零函数删除旧 attempts 文件；
   - 新产生的 `ARCHIVE_CANDIDATE` 写入 `_triage/archive_candidates.tsv`。

### 阶段 E：Postmortem（根 Agent，串行）

每轮结束写简短的 `regression_workflow_metrics_YYYY-MM-DD.md`，只保留趋势数据：

```text
本轮起始 md / 结束 md
每服务 md
首触修复数 / 需要第二轮的个数
重复尝试次数（同一 signature 被不同 agent 重复）
归档候选新增数
attempts 覆盖率
本轮最有效的 5 个源码/工具链模式
```

根因复盘重点是“哪一类 bucket 收益最高、哪一类在空转”，下一轮据此调整波次和分配，而不是只看总数。

## 4. 需要新增/改造的工具

按优先级：

| 工具 | 作用 | 状态 |
|---|---|---|
| `source/toolchain/regression_triage.py` | 从当前 md 生成 `_triage/v2_triage.tsv`，自动打 bucket | 建议新增 |
| `source/toolchain/gen_work_packages.py` | 按 TU 把 triage 输出切成 package | 建议新增 |
| `source/toolchain/attempt_db.py` | 统一读写 attempts，加入 diff signature / bucket / status | 建议新增 |
| `source/toolchain/integrate_round.py` | 按 package results 合并 patch、重建、重生成、验证 | 建议新增 |
| 现有 `scratch_*.sh` | 路径从 `/tmp/sub_*` 改为 `/tmp/wf2/<package>`，保留 check-only | 改造 |
| 现有 build 脚本 | 集成阶段统一调用，禁止子 Agent 并发跑权威 build | 保持 |

最低限度也可以先只做 `regression_triage.py`：它能立刻把 649 个函数中的 `CALL_DIFF` / `NEEDS_REVERSE` / `CODEGEN_TAIL` 分出来，避免人工肉眼分拣。

## 5. 本轮建议先落地的动作

1. 先按阶段 A/B 生成一份 `v2_triage.tsv`，把 67 个 `CALL_DIFF` 和 113 个 `src_ok=false` 标出来。
2. 手工复核 `CALL_DIFF` 中的真实语义差异，先修一批明确 bug（例如 `GetGroupNo()` 这种）。
3. 同时补齐 `src_ok=false` 的 `symbol -> TU -> line` 索引，避免执行 Agent 重复 `rg`。
4. 从 `coserver/manager/statics` 小服务开始跑一遍 v2 闭环，验证队列和集成流程；再进入 `dbmw`，最后 `monitor/guild`。
5. 每轮只允许一个 TU 一个写者；如果人手不够，宁少并一点，也不要再制造相互覆盖。
