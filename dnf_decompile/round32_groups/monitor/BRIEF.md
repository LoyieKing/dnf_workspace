# monitor 第 32 轮类粒度回归 —— 子 Agent 手册（2026-08-12）

## 0. 角色与目标

你是子 Agent。任务：把分配给你的 monitor 函数组逐个修到 `IDENTICAL` /
`IDENTICAL_AE`（`gen_function_md.py` 单函数模式 `--check-only` 输出
`IDENTICAL` / `IDENTICAL_AE` = 完成，等价于权威“md 已删除”，唯一完成标准）。
独立推进，不等待其它 Agent；每个函数循环“改源码 → scratch build → check”，
直到完成或穷举合理纯 C++ 变体后记录证据（HEAD），最后统一上报父 Agent。

## 1. 权威基线（第 32 轮起点）

- 工作区根：`/home/loyieking/dnf_workspace/dnf_decompile`（所有路径以此为准）
- ORIG：`/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r`
  （32 位 ELF；`.comment` 主体为 Red Hat 4.4.4-13，重建用 c6444r 变体对齐）
- 权威重建：`build/monitor/df_monitor_r`（c6444r：c6root 4.4.7 驱动 +
  cc1plus 4.4.4-13；头文件 /tmp/lsd44 v4.4.4，见
  `source/toolchain/cmake/dnf_c6444r_gxx.sh`）
- 基线：monitor 非 identical md = **292**（父 Agent 已先 manifest 后全量
  重生成确认）。manifest：`function_reports/monitor/manifest.tsv`；md 清单
  `function_reports/monitor/*.md`（每个文件 = 一个函数的完整 diff + Ghidra C +
  源码定位）
- 判定口径：`compare_common.py` strict（仅归一化直接跳转/调用目标地址；
  立即数、字段/栈偏移、寄存器、寻址形态、数据地址严格保留）

## 2. 必读资料（动手前先读完）

- `docs/identical_brief_for_agents.md`：§0.1 类粒度子分解、§4.1（禁止硬套 asm、
  行号/偏移=真实差异、逐文件工具链授权）、§4.2（全量回归完成标准）
- `docs/regression_progress_2026-08-11.md` §三：已验证源码形态技巧清单
- `docs/df_monitor_r_progress.md`：monitor 还原背景（第十四批含 CIPCounter
  等已穷举案例）
- 你组函数清单：`round32_groups/monitor/<group>.tsv`（demangled / mangled /
  status / orig_size / tu 五列）与 `<group>.txt`（mangled 清单）
- 每个函数的 md：`function_reports/monitor/<mangled>.md`

## 3. 闭环循环（每个函数）

1. 读该函数 md，看懂 diff 与 ORIG 语义（Ghidra C + ORIG 汇编为准；常量/偏移以
   ORIG 二进制实测为准，不得凭 DWARF/Ghidra 猜）。
2. 改源码（规则见 §4；你组 TU 见 tsv 的 tu 列，只改你组 TU 的源文件）。
3. 重编 + 链接 scratch 二进制 + 复检：

```bash
cd /home/loyieking/dnf_workspace/dnf_decompile
# 每轮循环（改完源码后；<group> 用你组名，<tu.cpp...> 用你组全部 TU）：
bash /home/loyieking/dnf_workspace/monitor_scratch_build.sh \
  /tmp/sub_monitor_<group> <tu1.cpp> <tu2.cpp> ...
python3 source/toolchain/gen_function_md.py --services monitor \
  --function <mangled> --new-bin /tmp/sub_monitor_<group>/df_monitor_r --check-only
# check 输出 IDENTICAL / IDENTICAL_AE = 该函数完成（等价“md 已删除”）
```

需要看完整伪代码 diff 时（生成/更新到 /tmp 独立目录，不写 function_reports）：

```bash
python3 source/toolchain/gen_function_md.py --services monitor \
  --function <mangled> --new-bin /tmp/sub_monitor_<group>/df_monitor_r \
  --out /tmp/sub_monitor_<group>/md
```

4. 完成一个立即做下一个；不要在单个函数无限耗（合理变体穷举后记录证据继续）。

## 4. 铁律

- **禁止硬套内联 asm**（唯一例外：纯 `nop` 对齐填充）。只能靠纯 C++ 形态技巧。
- 禁止清空/删除整文件实现。
- 禁止修改 `build/monitor/` 与 `function_reports/monitor/`。
- **只编辑你组 TU 的源文件**（tsv tu 列）；不得改其它组 TU、共享源码
  （`source/DNFServer/ServerCommon/`、`source/shared/`）及一切其它服务目录。
- 确需修改 Monitor 目录下被多组共用的头文件（类布局/成员顺序/pack）：
  直接改并在报告中注明（文件 + 改动点 + 影响哪些其它 TU），父 Agent 集成时
  统一全量重建验证；若改动会改变类布局，注意你组 scratch 复检只对你组 TU
  生效，最终以父 Agent 全量重建后的权威 md 为准。
- 禁止 `/mnt/d`。
- 行号/偏移/常量差异 = 真实差异：`__assert_fail` / 日志宏行号按 ORIG 二进制
  实测值对齐源码行号；字段偏移、魔数不得凭 Ghidra/DWARF 猜。
- 分类不变不得报 FIXED；每次改动必须 build + check 复检，禁止盲改。
- 若怀疑某 TU 编译器版本不匹配：可把该 cpp 用
  `source/toolchain/cmake/dnf_c6446r_gxx.sh` / `dnf_c5r52_gxx.sh` 等做 A/B
  试编译（scratch 脚本 `MONITOR_SCRATCH_WRAPPER` 环境变量可指定 wrapper），
  取助记符/寄存器形态最接近者，附证据上报；不得擅改
  `source/cmake/monitor/CMakeLists.txt`。

## 5. 可用纯 C++ 形态技巧（跨服务已验证）

- `if (x == -1) return;`、`switch(cond){case 0:break;case 1:break;}`、switch 单 case
- `continue` / `goto LABEL` / 单 return 汇合 / 三元表达式 / 分支换向
- `register` 变量、`(int)` 显式强转、无符号常量表达式（如 `- 0xbU`）、bool 局部变量
- `__builtin_alloca`（替代 VLA 固定栈槽）、临时对象形态（构造/拷贝顺序）
- 变量/成员声明顺序调整、表达式拆分合并、真实成员/布局还原
- 字符串/日志内容按 ORIG 二进制逐字节还原（日志宏行号按 ORIG 实测）

## 6. 到头函数（禁止硬套 asm 的后果）

若某函数穷举合理纯 C++ 变体后仍无法 identical：保留**语义还原**版本（不写
asm），记录证据（md diff 摘录 + 已尝试变体清单 + 结论）到报告，标注 `HEAD`，
父 Agent 负责写 `function_reports/monitor/caliber_issues.csv` 与决策。
注意：`caliber_issues.csv` 记录不构成完成；REMAIN 必须给出可复现证据。

## 7. 报告（最终 answer + 写文件）

写 `/home/loyieking/dnf_workspace/dnf_decompile/round32_groups/monitor/<group>_report.md`：

- 逐函数结论表：mangled | 改前分类 | 改后分类 | 状态(FIXED/REMAIN/HEAD) | 一句话说明
- 源码改动清单（改了哪些函数体 / 头文件，供父 Agent 集成）
- REMAIN / HEAD 证据（diff 行 + 原因）
- 需要父 Agent 决策的共享/头文件改动

最终 answer 简要总结：FIXED 清单、REMAIN 清单 + 原因、改动要点。
