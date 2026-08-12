# statics 第 29 轮类粒度回归 —— 子 Agent 通用手册（2026-08-12）

## 0. 角色

你是子 Agent。任务：把分配给你的 statics 函数组逐个修到
`IDENTICAL` / `IDENTICAL_AE`（等价于 "md 已删除"，唯一完成标准）。
独立推进，不等待其它 agent；遇到疑难先穷举合理源码变体，仍不行就记录证据并
继续下一个函数，最后统一上报。不得轮询等待、不得替父 agent 做集成/审批。

## 1. 背景与权威基线（2026-08-12，第 29 轮）

- 工作区根：`/home/loyieking/dnf_workspace/dnf_decompile`（所有路径以此为准）。
- ORIG 二进制：
  `/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/statics/df_statics_r`
  （32 位、无 DWARF、纯 Ghidra 逆向；`.comment` 为 4.1.2-52 / 4.4.6-3 /
  4.4.7-1 / 4.4.4-13 混合，不同 TU 可能是不同编译器）。
- 权威重建：`build/statics/df_statics_r`（统一 **c6446r** 变体：
  c6root g++ 4.4.7 驱动 + 4.4.6 cc1plus，`-m32 -O0 -std=gnu++0x`）。
- 权威基线（本轮开始前已全量重建 + manifest + md 重生成）：非 identical = **67**
  （DIFF 65 + NEAR 2；IDENTICAL 557 / IDENTICAL_AE 219）。
  你组清单见 `round29_groups/statics/<group>.list`（mangled 名，一行为一个）。
- 判定口径：`source/toolchain/compare_common.py` strict（仅归一化直接跳转/调用目标
  地址；立即数、字段/栈偏移、寄存器、寻址形态、数据地址严格保留）。

## 2. 必读资料（动手前先读完）

- `docs/identical_brief_for_agents.md`：§0.1（类粒度子分解）、§4.1（行号/偏移/
  工具链口径、**禁止硬套 asm**、逐文件工具链授权）、§4.2（全量回归完成标准）。
- `docs/df_statics_r_progress.md`：statics 还原背景。
- `docs/regression_progress_2026-08-11.md` §三：已验证的源码形态技巧清单。
- 你组内每个函数的 `function_reports/statics/<mangled>.md`：含 ORIG/OURS 完整汇编
  diff（伪代码化）、Ghidra 反编译 C、我们的源码函数位置。
- `function_reports/statics/caliber_issues.csv`：历史记录（§4.2 视为未完成，
  只作参考线索，不得当完成依据）。

## 3. TU 分组表（67 个函数，按类/所属 TU）

| 组 | TU（源文件） | 函数数 | 方式 |
|---|---|---:|---|
| stats_lifecycle | `source/DNFServer/GameServer/Statics/Statistics.cpp` | 5 | 私有副本 |
| stats_add | 同上 | 12 | 私有副本 |
| stats_write | 同上 | 10 | 私有副本 |
| stats_senddb_a | 同上 | 11 | 私有副本 |
| stats_senddb_b | 同上 | 10 | 私有副本 |
| frame_lag | `.../FrameLagCollector.cpp` | 10 | 独占 TU |
| gm_accounts | `.../GMAccounts.cpp` | 3 | 独占 TU |
| small_a | `.../CubeStatistics.cpp` + `.../HWSpecResearcher.cpp` | 4 | 独占 TU×2 |
| small_b | `.../DNFNetworkThread.cpp` + `.../DNFPacketTranslater.cpp` | 2 | 独占 TU×2 |

## 4. 闭环循环（每个函数）

1. 读该函数 md，看懂 diff 与 ORIG 语义（Ghidra C + ORIG 汇编为准）。
2. 改源码（规则见 §5）。
3. 重编 + 链接 scratch 二进制（只写你自己的 scratch 目录）：

   ```bash
   cd /home/loyieking/dnf_workspace/dnf_decompile
   source source/toolchain/statics_scratch_helper.sh
   scratch_setup <group>                 # 首次：复制权威 .o 树到 /tmp/sub_statics_<group>
   scratch_compile <group> /home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Statics/<TU>.cpp
   scratch_link <group>
   ```

   - **私有副本组**（stats_lifecycle/stats_add/stats_write/stats_senddb_a/
     stats_senddb_b，同 TU 多组并行）：改**你的私有副本**，再用 override 编译。
     **注意：`scratch_setup` 会 rm -rf 整个 scratch 目录，必须先 setup 再建
     private 目录**：
     ```bash
     scratch_setup <group>
     mkdir -p /tmp/sub_statics_<group>/private
     cp /tmp/statics_base/Statistics.cpp /tmp/sub_statics_<group>/private/Statistics.cpp
     # 编辑 /tmp/sub_statics_<group>/private/Statistics.cpp
     export STATICS_SCRATCH_SRC_OVERRIDE=/tmp/sub_statics_<group>/private/Statistics.cpp
     scratch_compile <group> /home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Statics/Statistics.cpp
     scratch_link <group>
     ```
   - 逐 TU 工具链 A/B（仅当怀疑某函数 ORIG 编译器版本与 c6446r 不符，例如
     双零扩展 `movzbl %al,%edx` + 32 位 cmp、旧惯用法分支等形态）：
     `export STATICS_SCRATCH_VARIANT=c6`（或 c6444r / c5）再 `scratch_compile`；
     对比哪个变体助记符/寄存器形态最接近 ORIG。**不得**改动权威
     `build/statics` 的变体配置——把 A/B 结论与证据报给父 agent 决策。
4. 复检：

   ```bash
   scratch_classify <group> <mangled>
   # 查看完整伪代码 diff：
   python3 source/toolchain/statics_scratch_check.py /tmp/sub_statics_<group>/df_statics_r --diff <mangled>
   # 批量复检整组：
   python3 source/toolchain/statics_scratch_check.py /tmp/sub_statics_<group>/df_statics_r --file round29_groups/statics/<group>.list
   ```

   `IDENTICAL` / `IDENTICAL_AE` = 完成。其它状态继续改。
5. 完成一个就立即做下一个；不要在单个函数上无限耗（单个函数连续 ≥8 次
   源码变体仍无改善就记证据、标记 REMAIN、继续下一个）。scratch 目录可复用：
   同一目录多次跑脚本只重编指定 TU（首次会复制权威 .o 树）。

## 5. 铁律

- **禁止硬套内联 asm**（唯一例外：纯 `nop` 对齐填充，且需先报父 agent）。
  到头函数按 §7 上报，不得用 asm 硬套。
- 禁止清空/删除整文件实现。
- 禁止修改 `build/statics/` 与 `function_reports/statics/`（父 agent 负责集成、
  最终重建与 md 重生成）。
- **共享头文件（`Statistics.h` / `GMAccounts.h` / `FrameLagCollector.h` /
  `DNFDBServer.h` / `DNFServerHandler.h` 等及 ServerCommon/shared 头）不得直接
  修改**。确需类布局/成员顺序改动时：在私有副本上实验验证，然后单独上报父
  agent 审批集成。
- 私有副本组只改你自己的副本；独占 TU 组只改你组 TU（§3 分组表）；禁止改其它
  TU / 其它服务目录；禁止 `/mnt/d`。
- 不盲改：每次改动必须重编 + 复检；分类不变不得报 FIXED。
- **行号 / 偏移 / 常量差异是真实差异**：`__assert_fail` / 日志宏行号实参两侧
  不同必须按 ORIG 实测值对齐源码行号；字段偏移、魔数必须以 ORIG 二进制实测为准，
  不得凭 DWARF/Ghidra 猜测。
- 基线源码说明：本轮开始前修复了 Statistics.cpp 的编译错误（枚举类型必须用
  限定名 `STPartyJobStatisticKey::STPartyJobKeyField10` /
  `STPartyCharacKey::STPartyCharacKeyFieldC`）。**不要回退这个修复**；私有副本
  以 `/tmp/statics_base/Statistics.cpp` 为基线（它已含该修复）。

## 6. 可用纯 C++ 形态技巧（跨服务已验证）

- `if (x == -1) return;`、`switch(cond){case 0:break;case 1:break;}`（含 switch 单 case）
- `continue` / `goto LABEL` / 单 return 汇合 / 三元表达式 / 分支换向
- `register` 变量（阻止 4.4 消除临时拷贝）
- `(int)` 显式强转、无符号常量表达式（如 `- 0xbU`）
- bool 局部变量（复现 `xor $1` 极性）
- `__builtin_alloca` 替代 VLA（复现固定栈槽）
- 临时对象形态、变量/成员声明顺序调整、表达式求值顺序调整、拆分/合并语句、
  `(char*)&pkt + 偏移` 指针算术显式化、把 `if (a<b) return true;` 拆成
  `if (a<b) return true; if (a>b) return false;` 的双比较形态
- 常量以 ORIG 实测为准（objdump / 字符串表），行号用 ORIG 二进制实测对齐
- 纯 nop 对齐填充（唯一允许的 asm；需报父 agent 后使用）

## 7. 证据与上报

每个函数最终结论二选一：
- `FIXED`：改动一句话（什么形态技巧 / 什么真实语义修复）。
- `REMAIN`：`--diff` 完整证据 + 已尝试的源码变体清单 + 为什么到头的判断
  （父 agent 负责记入 caliber_issues.csv）。

不要写 `caliber_issues.csv`（父 agent 统一记录）。

最终报告（发给父 agent）包含：
1. 逐函数结论表（mangled → FIXED/REMAIN + 一句话）。
2. 你的源码改动 diff：
   - 独占 TU 组：`git diff -- source/DNFServer/GameServer/Statics/<TU>.cpp`
   - 私有副本组：`diff -u /tmp/statics_base/Statistics.cpp /tmp/sub_statics_<group>/private/Statistics.cpp`
3. 需要父 agent 决策的共享改动（头文件/布局/工具链 A/B 结论）。

