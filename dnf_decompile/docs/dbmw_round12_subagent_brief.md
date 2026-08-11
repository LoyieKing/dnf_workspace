# dbmw 第 12 轮 子 Agent 工作手册（2026-08-11）

你是 dbmw 严格回归的子 Agent。你只负责**你自己那一组**的函数，独立推进，
不等待其它 Agent。你的产出 = 该组函数逐一到 IDENTICAL / IDENTICAL_AE
（strict 口径，等价于 `md 已删除`），外加最终报告。

## 必读（开工前读完）

- `docs/identical_brief_for_agents.md`（§0 独立性 / §0.1 类粒度 / §1 口径 /
  §4.1 行号偏移工具链 / §4.2 全量回归强制口径 / §5 闭环）
- `docs/regression_progress_2026-08-11.md`（§三 已验证技巧）
- `docs/df_dbmw_r_progress.md`（dbmw 背景与系统性差异清单，按需查阅）
- `docs/identical_pitfalls.md`（坑点 §1–§104，按需）
- 本文件

## 你的范围

- 函数清单：`/tmp/dbmw_group_<GROUP>.txt`（每行一个 mangled 名）
- 每个函数的报告：`function_reports/dbmw/<mangled>.md`
  （ORIG vs NEW 完整 diff / Ghidra 反编译 / 源码定位。若“我们的源码函数”
  定位失败——DBManager.cpp 大函数常见——用 `rg` 在该 TU 内搜函数名定位）
- 可改源码：**仅限你组 TU 的文件**（见任务消息）。禁止：其它 TU、共享头
  （`source/shared/*`、`source/DNFServer/ServerCommon/*`、`shared/packet/*`）、
  其它服务目录、`build/dbmw/`、`function_reports/dbmw/`。
- 禁止：清空/删除整文件实现（dbmw 第 6 轮曾因此事故）；访问 `/mnt/d`；
  运行 `cmake_build_all.sh` / `cmake --build build/dbmw`（与其它 Agent 抢构建）；
  用非 `--check-only` 模式调用 `gen_function_md.py`（会写 md，属于父 Agent 职责）。

## 闭环循环（唯一完成标准 = 本地 classify 输出 IDENTICAL / IDENTICAL_AE）

1. 读 md 的 diff，定位根因（类型/有符号性、结构体布局/偏移、`__LINE__` 行号、
   控制流形态、寄存器/栈槽、求值顺序、常量错误等）。
2. 改源码（你组 TU 内）。
3. 重建你的 scratch（一次性初始化后反复 rebuild）：
   ```bash
   python3 /home/loyieking/dnf_workspace/dnf_decompile/source/toolchain/scratch_dbmw_build.py init <GROUP> <TU1.cpp> [TU2.cpp ...]
   # 每次改完：
   python3 /home/loyieking/dnf_workspace/dnf_decompile/source/toolchain/scratch_dbmw_build.py rebuild <GROUP> <TU1.cpp> [TU2.cpp ...]
   ```
   产物：`/tmp/sub_dbmw_<GROUP>/df_dbmw_r`
4. 复检（只允许 --check-only）：
   ```bash
   python3 /home/loyieking/dnf_workspace/dnf_decompile/source/toolchain/gen_function_md.py \
     --services dbmw --function <mangled> \
     --new-bin /tmp/sub_dbmw_<GROUP>/df_dbmw_r --check-only
   ```
5. `IDENTICAL` / `IDENTICAL_AE` = 完成；NEAR/DIFF 继续变体。

## 已验证技巧（跨服务复用，按需组合）

`continue` 结构复现汇合块；`goto LABEL`（ORIG DWARF 有 label 时）消除多余
break 出口；`register` 变量阻止 4.4 消除临时拷贝；无符号常量表达式
（如 `- 0xbU`）对齐求值顺序；bool 局部复现 `xor $1` 极性；`switch` 单 case
复现 `movzwl; test; jne`；`(int)` 显式强转触发有符号比较形态；受控内联 asm
（`asm volatile("cmp ...")` / `testl`）复现编译器折叠的死比较/死存储（语义
等价，需二进制证据）；单 return 汇合、三元表达式、分支换向、变量/成员声明
顺序、临时对象形态（影响栈槽分配）；`__LINE__`/断言行号按 ORIG 二进制实测
对齐；结构体成员顺序 / `#pragma pack` 对齐字段偏移。

批量优先：同一 TU 内系统性差异（xor/sete、`!= 1` 码型、栈槽 ±N、寄存器形态）
往往一个源码模式改动可一次修掉多个函数。

## 回归自检（交报告前）

若你的改动涉及类布局/头文件（DBMW 目录内），可能影响该 TU 其它已 identical
函数。交报告前对同 TU 已 identical 函数抽查（`manifest.tsv` 里
`IDENTICAL/IDENTICAL_AE` 的符号，取 5–10 个），确保仍 identical。

## 最终报告（发给父 Agent）

- 每函数结论：FIXED（改前分类 → IDENTICAL/IDENTICAL_AE + 关键改动一句话）/
  REMAIN（原因 + diff 证据 + 已尝试源码变体清单）。
- 你的源码改动清单（文件 + 函数 + 改动摘要）。
- 确需的共享头/其它 TU 改动（如无则不写；父 Agent 集成时处理）。
- 阻塞项（如有，先自行排查，实在卡住再报，并继续处理其它函数）。

## 时间与节奏

- 开工即干，一个函数接着一个函数，不要空等。
- 每完成若干函数就把状态记在自己的报告里（可写在 /tmp/sub_dbmw_<GROUP>/notes.md，
  交报告时一并引用），防止长任务中断丢失进度。
