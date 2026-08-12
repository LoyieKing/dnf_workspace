# monitor 第 23 轮类粒度回归 —— 子 Agent 通用手册（2026-08-12）

## 0. 角色

你是子 Agent。任务：把分配给你的 monitor 函数组逐个修到
`IDENTICAL` / `IDENTICAL_AE`（等价于父 agent 的 “md 已删除”，唯一完成标准）。
独立推进，不等待其它 agent；遇到疑难先穷举合理源码变体，仍不行就记录证据并
继续下一个函数，最后统一上报。

## 1. 背景与权威基线

- 工作区根：`/home/loyieking/dnf_workspace/dnf_decompile`（所有路径以此为准）。
- ORIG 二进制：
  `/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r`
  （32 位、strict 口径逐指令比对）。
- 权威重建：`build/monitor/df_monitor_r`（c6444r 变体：c6root g++ 4.4.7 驱动 +
  Red Hat 4.4.4-13 cc1plus，`-m32 -O0 -std=gnu++0x`，链接用宿主机 g++）。
- 权威基线（2026-08-12 重新 manifest+md 全量测量）：monitor 非 identical = **388**
  （NEAR 6 + DIFF 382；IDENTICAL 978 / IDENTICAL_AE 313 / EXEMPT_SKIP 6247）。
  上一轮（第 22 轮）从 793 压到 388；本轮目标继续向 0 推进。
- 判定口径：`source/toolchain/compare_common.py` strict（仅归一化直接跳转/调用目标
  地址；立即数、字段/栈偏移、寄存器、寻址形态、数据地址严格保留）。

## 2. 必读资料（动手前先读完）

- `docs/identical_brief_for_agents.md`：§0.1（类粒度子分解）、§4.1（行号/偏移/
  工具链口径、禁止硬套 asm、逐文件工具链授权）、§4.2（全量回归完成标准）。
- `docs/regression_progress_2026-08-11.md` §三：跨服务已验证的源码形态技巧清单
  （continue/goto/register/无符号常量/bool 局部/switch 单 case/(int) 强转/
  __builtin_alloca/三元/分支换向/单 return 汇合）。
- `docs/df_monitor_r_progress.md`：monitor 还原背景与既往结论。
- 你组内每个函数的 `function_reports/monitor/<mangled>.md`：含 ORIG/OURS 完整
  汇编 diff（伪代码化）、Ghidra 反编译 C、我们的源码函数位置。

## 3. 闭环循环（每个函数）

1. 读该函数 md，看懂 diff 与 ORIG 语义（Ghidra C + ORIG 汇编为准）。
2. 改源码（只改你组函数所属的 TU；见 §4 与父 agent 给你的组专属说明）。
3. 重编 + 链接 scratch 二进制（只写你自己的 scratch 目录）：

   ```bash
   bash source/toolchain/monitor_scratch.sh <scratch_dir> <TU_basename> [<TU2> ...]
   # 例：bash source/toolchain/monitor_scratch.sh /tmp/mon_member_a_scratch DNFMemberManager
   ```

   - TU basename 不带 `.cpp`。
   - 私有副本编译（父 agent 指定时）：编辑副本后用
     `MON_SCRATCH_SRC_OVERRIDE=<副本绝对路径>` 环境变量再跑上面的命令。
   - 变体 A/B 试验：`MON_SCRATCH_VARIANT=c6|c6446r|c5|c5r52 bash ...`。
4. 复检：

   ```bash
   python3 source/toolchain/scratch_check_monitor.py <scratch_dir>/df_monitor_r <mangled>
   # 或批量：python3 source/toolchain/scratch_check_monitor.py <scratch>/df_monitor_r \
   #   --file round23_groups/monitor/<你的组>.txt
   ```

   `IDENTICAL` / `IDENTICAL_AE` = 完成（父 agent 集成后 md 会删除）。其它状态继续改。
5. 完成一个就立即做下一个；不要在单个函数上无限耗。

## 4. 铁律

- **禁止硬套内联 asm**（唯一例外：纯 `nop` 对齐填充）。
- 禁止清空/删除整文件实现。
- 禁止修改 `build/monitor/` 与 `function_reports/monitor/`（父 agent 负责集成、
  最终重建与 md 重生成）。
- **禁止修改你组 TU 之外的源码文件**（含共享头文件 ServerCommon/shared、
  其它服务目录）；确需跨组改动（类布局/共享头）时，在私有副本上实验验证并
  单独上报父 agent 审批，不得直接写入共享文件。
- 不盲改：每次改动必须重编 + 复检；分类不变不得报 FIXED。
- **行号 / 偏移 / 常量差异是真实差异**：`__assert_fail` / 日志宏行号实参两侧
  不同必须按 ORIG 二进制实测值对齐源码行号；字段偏移、魔数必须以 ORIG 二进制
  实测为准，不得凭 DWARF/Ghidra 猜测。
- 若某 TU 的代码生成疑似与 ORIG 编译器版本不符：可用 `MON_SCRATCH_VARIANT`
  做逐 TU A/B 试编译（c6444r/c6/c6446r/c5/c5r52），取助记符/寄存器形态最接近
  者；把结论与证据报给父 agent，**不得擅自改动权威 build 变体配置**。
- 禁止 `/mnt/d`；只在本工作区活动。

## 5. 可用纯 C++ 形态技巧（跨服务已验证，详见 regression_progress §三）

- `if (x == -1) return;`、`switch(cond){case 0:break;case 1:break;}`（含 switch 单 case）
- `continue` / `goto LABEL` / 单 return 汇合 / 三元表达式 / 分支换向
- `register` 局部变量（阻止 4.4 消除临时拷贝）
- 无符号常量表达式（`- 0xbU`）、bool 局部变量（`xor $1` 极性）、`(int)` 显式强转
- `__builtin_alloca` 替代 VLA 固定栈槽；变量/成员声明顺序调整；表达式拆合
- 字符串/日志按 ORIG 二进制逐字节还原（含行号实参）

## 6. 上报格式（完成/结束时发给父 agent）

- 组名、scratch 目录路径、私有副本路径（如适用）。
- **已修复清单**：每行 `<mangled>\t<改前分类>\t<改后分类>`（改后必须
  IDENTICAL/IDENTICAL_AE）。
- **剩余清单（REMAIN）**：每行 `<mangled>\t<原因>`，附 diff 证据摘要与
  已尝试的源码变体清单（按 §4.2 要求）。
- **源码改动清单**：`git diff --no-index source/.../原文件 你的副本`（或
  `git diff` 相对工作区）摘要；列明每个改动对应的函数与意图。
- 跨组/共享头改动建议（如有）：单独列出，等待父 agent 审批。
