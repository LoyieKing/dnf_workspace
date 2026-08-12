# statics 第 23 轮类粒度回归 —— 子 Agent 通用手册（2026-08-12）

## 0. 角色

你是子 Agent。任务：把分配给你的 statics 函数组逐个修到
`IDENTICAL` / `IDENTICAL_AE`（等价于父 agent 的 “md 已删除”，唯一完成标准）。
独立推进，不等待其它 agent；遇到疑难先穷举合理变体，仍不行就记录证据并继续
下一个函数，最后统一上报。不得轮询等待、不得替父 agent 做集成/审批。

## 1. 背景与权威基线（2026-08-12 重新 manifest+md 全量测量）

- 工作区根：`/home/loyieking/dnf_workspace/dnf_decompile`（所有路径以此为准）。
- ORIG 二进制：`/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/statics/df_statics_r`
  （32 位、无 DWARF、纯 Ghidra 逆向）。
- 权威重建：`build/statics/df_statics_r`（c6446r 变体：c6root g++ 4.4.7 驱动 +
  4.4.6 cc1plus，`-m32 -O0 -std=gnu++0x`，链接用宿主机 g++）。
- 权威基线：statics 非 identical = **75**（DIFF 71 + NEAR 4；IDENTICAL 550 /
  IDENTICAL_AE 218）。你的组清单见 `round23_groups/<group>.txt`。
- 判定口径：`source/toolchain/compare_common.py` strict（仅归一化直接跳转/调用目标
  地址；立即数、字段/栈偏移、寄存器、寻址形态、数据地址严格保留）。

## 2. 必读资料（动手前先读完）

- `docs/identical_brief_for_agents.md`：§0.1（类粒度子分解）、§4.1（行号/偏移/
  工具链口径、禁止硬套 asm、逐文件工具链授权）、§4.2（全量回归完成标准）。
- `docs/df_statics_r_progress.md`：statics 还原背景。
- `docs/regression_progress_2026-08-11.md` §三：已验证的源码形态技巧清单。
- 你组内每个函数的 `function_reports/statics/<mangled>.md`：含 ORIG/OURS 完整
  汇编 diff（伪代码化）、Ghidra 反编译 C、我们的源码函数位置。

## 3. 闭环循环（每个函数）

1. 读该函数 md，看懂 diff 与 ORIG 语义（Ghidra C + ORIG 汇编为准）。
2. 改源码（只改你组 TU；规则见 §4）。
3. 重编 + 链接 scratch 二进制（只写你自己的 scratch 目录）：

   ```bash
   bash source/toolchain/statics_scratch.sh <scratch_dir> <TU basename>
   # 例：bash source/toolchain/statics_scratch.sh /tmp/statics_g_senddb Statistics
   ```

   - TU basename 不带 `.cpp`。
   - Statistics.cpp 组（statistics_add/write/senddb/lifecycle）：**不得直接改**
     `source/.../Statics/Statistics.cpp`，必须用私有副本：
     ```bash
     cp /tmp/statics_base/Statistics.cpp /tmp/<你的组>/Statistics.cpp
     # 编辑私有副本
     export STATICS_SCRATCH_SRC_OVERRIDE=/tmp/<你的组>/Statistics.cpp
     bash source/toolchain/statics_scratch.sh <scratch_dir> Statistics
     ```
     `/tmp/statics_base/Statistics.cpp` 已刷新为当前 HEAD 版本（与源码 md5 一致）。
4. 复检：

   ```bash
   python3 source/toolchain/statics_scratch_check.py <scratch_dir>/df_statics_r <mangled>
   # 加 --diff 查看完整伪代码 diff
   ```

   `IDENTICAL` / `IDENTICAL_AE` = 完成。其它状态继续改。
5. 完成一个就立即做下一个；不要在单个函数上无限耗。scratch 目录可复用：
   同一 scratch 目录多次跑脚本只重编指定 TU（首次会复制权威 .o 树）。

## 4. 铁律

- **禁止硬套内联 asm**（唯一例外：纯 `nop` 对齐填充）。到头函数按 §6 上报，
  不得用 asm 硬套。
- 禁止清空/删除整文件实现。
- 禁止修改 `build/statics/` 与 `function_reports/statics/`（父 agent 负责集成、
  最终重建与 md 重生成）。
- **共享头文件（`Statistics.h` / `FrameLagCollector.h` / `GMAccounts.h` /
  `HWSpecResearcher.h` / `CubeStatistics.h` / `DNFNetworkThread.h` /
  `DNFPacketTranslater.h` 及 ServerCommon/shared）不得直接修改**。确需类布局/
  成员顺序改动时：在私有副本上实验验证，然后单独上报父 agent 审批集成。
- 只动你组 TU；禁止改其它 TU / 其它服务目录；禁止 `/mnt/d`。
- **同工作区有其它服务（auction/coserver/dbmw/guild/manager/monitor/point）的
  agent 并行工作**：不要动它们的目录与共享头；如发现共享头被并发改动导致
  编译异常，先自查重试，仍不行就上报。
- 不盲改：每次改动必须重编 + 复检；分类不变不得报 FIXED。
- **行号 / 偏移 / 常量差异是真实差异**：`__assert_fail` / 日志宏行号实参两侧
  不同必须按 ORIG 实测值对齐源码行号；字段偏移、魔数必须以 ORIG 二进制实测为准，
  不得凭 DWARF/Ghidra 猜测。
- 若某 TU 的代码生成疑似与 ORIG 编译器版本不符：可用
  `STATICS_SCRATCH_VARIANT=c6|c6444r|c6446r` 做逐 TU A/B 试编译（例：
  `STATICS_SCRATCH_VARIANT=c6 bash source/toolchain/statics_scratch.sh ...`），
  取助记符/寄存器形态最接近者；但不得改动权威 `build/statics` 的变体配置——
  把结论与证据报给父 agent 决策。

## 5. 可用纯 C++ 形态技巧（跨服务已验证）

- `if (x == -1) return;`、`switch(cond){case 0:break;case 1:break;}`（含 switch 单 case）
- `continue` / `goto LABEL` / 单 return 汇合 / 三元表达式 / 分支换向
- `register` 变量（阻止 4.4 消除临时拷贝）
- `(int)` 显式强转、无符号常量表达式（如 `- 0xbU`）
- bool 局部变量（复现 `xor $1` 极性）
- `__builtin_alloca` 替代 VLA（复现固定栈槽）
- 临时对象形态、变量/成员声明顺序调整、表达式求值顺序调整、拆分/合并语句、
  `(char*)&pkt + 偏移` 指针算术显式化
- 常量以 ORIG 实测为准（objdump / 字符串表），行号用 `align_log_lines.py` 思路对齐

## 6. 证据与上报

- 每个函数最终结论二选一：
  - `FIXED`：改动一句话（什么形态技巧）。
  - `REMAIN`：`--diff` 完整证据 + 已尝试的源码变体清单 + 为什么到头的判断
    （父 agent 负责记入 caliber_issues.csv）。
- 不要写 `caliber_issues.csv`（父 agent 统一记录）。
- 最终报告（发给父 agent）包含：
  1. 逐函数结论表（mangled → FIXED/REMAIN + 一句话）。
  2. 你的源码改动 diff：
     - 独占 TU 组：`git diff -- source/DNFServer/GameServer/Statics/<TU>.cpp`
     - Statistics.cpp 组：`diff -u /tmp/statics_base/Statistics.cpp <你的副本>`
  3. 需要父 agent 决策的共享改动（头文件/布局/工具链 A/B 结论）。

## 7. 分组与 TU 归属（round23_groups/*.txt）

| 组 | 函数数 | TU（basename） | 私有副本 |
|---|---|---|---|
| statistics_add | 12 | Statistics | 是 |
| statistics_write | 10 | Statistics | 是 |
| statistics_senddb | 21 | Statistics | 是 |
| statistics_lifecycle | 6 | Statistics | 是 |
| frame_lag | 14 | FrameLagCollector | 否（独占） |
| gm_accounts_small | 6 | GMAccounts | 否（独占） |
| misc_small | 6 | CubeStatistics/DNFNetworkThread/HWSpecResearcher/DNFPacketTranslater | 否（独占） |

## 8. 已知提示（本轮基线已含）

- 剩余 75 个绝大多数是 -O0 代码生成差异（栈槽/寄存器/求值顺序/寻址形态/
  leave vs pop ebp、push 序、mov 交换），源码形态可消除。
- 典型小 diff：`mov %ebx,-0x4c(%ebp)` vs `mov %edx,-0x4c(%ebp)`（寄存器名）；
  两条 `mov` 交换（求值顺序）；`movw $0x0,0xc(%eax,%edx,2)` vs
  `add %edx,%edx; add %edx,%eax; movw $0x0,(%eax)`（寻址形态）；栈顶 `leave` vs
  `pop %ebp` 序列。
- 真实 bug 型差异（必须修源码）：ORIG 有某字段比较块而 ours 缺失（如
  ST*Key `operator<` 的字段漏比）；ORIG 调用序列与 ours 不同。
- `caliber_issues.csv` 中旧 codegen_diff 记录不构成完成状态，一律按上述闭环重做。
