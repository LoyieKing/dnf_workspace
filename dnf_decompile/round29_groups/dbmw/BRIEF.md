# dbmw 第 29 轮类粒度回归 —— 子 Agent 手册（2026-08-12）

## 0. 角色与目标

你是子 Agent。任务：把分配给你的 dbmw 函数组逐个修到 `IDENTICAL` /
`IDENTICAL_AE`（`gen_function_md.py` 单函数模式 `--check-only` 输出
`IDENTICAL` / `IDENTICAL_AE` = 完成，等价于权威“md 已删除”，唯一完成标准）。
独立推进，不等待其它 Agent；每个函数循环“改源码 → scratch build → check”，
直到完成或穷举合理纯 C++ 变体后记录证据（HEAD），最后统一上报父 Agent。

## 1. 权威基线（第 29 轮起点）

- 工作区根：`/home/loyieking/dnf_workspace/dnf_decompile`（所有路径以此为准）
- ORIG：`/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/dbmw_guild/df_dbmw_r`
  （32 位 ELF，无 DWARF）
- 权威重建：`build/dbmw/df_dbmw_r`（c6444r 驱动 + 逐文件 cc1plus 4.4.6-3，
  见 `source/cmake/dbmw/CMakeLists.txt` 的 SRC_OPTS）
- 基线：dbmw 非 identical md = **223**（权威 manifest+全量重生成；第 28 轮
  提交为 227，本轮重建后实测 223）。manifest：
  `function_reports/dbmw/manifest.tsv`；md 清单 `function_reports/dbmw/*.md`
- 判定口径：`compare_common.py` strict（仅归一化直接跳转/调用目标地址；
  立即数、字段/栈偏移、寄存器、寻址形态、数据地址严格保留）

## 2. 必读资料（动手前先读完）

- `docs/identical_brief_for_agents.md`：§0.1 类粒度子分解、§4.1（禁止硬套 asm、
  行号/偏移=真实差异、逐文件工具链授权）、§4.2（全量回归完成标准）
- `docs/regression_progress_2026-08-11.md` §三：已验证源码形态技巧清单
- `docs/df_dbmw_r_progress.md`：dbmw 还原背景
- 你组函数清单：`round29_groups/dbmw/<group>.tsv`（demangled / mangled /
  status / orig_size / tu 五列）
- 每个函数的 md：`function_reports/dbmw/<mangled>.md`（ORIG/OURS 完整 diff、
  Ghidra 反编译 C、源码定位）

## 3. 闭环循环（每个函数）

1. 读该函数 md，看懂 diff 与 ORIG 语义（Ghidra C + ORIG 汇编为准；常量/偏移以
   ORIG 二进制实测为准，不得凭 DWARF/Ghidra 猜）。
2. 改源码（规则见 §4）。
3. 重编 + 链接 scratch 二进制 + 复检：

```bash
# 一次性（tag = 你组名；私有 TU 组必须带 --tus 建立私有副本）
python3 source/toolchain/dbmw_scratch.py setup --tag <group> --tus <TU,...>
# 每轮循环（改完源码后）：
python3 source/toolchain/dbmw_scratch.py build --tag <group> --tus <TU,...>
python3 source/toolchain/dbmw_scratch.py check --tag <group> --funcs <mangled1>,<mangled2>
# check 输出 IDENTICAL / IDENTICAL_AE = 该函数完成（等价“md 已删除”）
```

需要看完整伪代码 diff 时：

```bash
python3 source/toolchain/gen_function_md.py --services dbmw \
  --function <mangled> --new-bin /tmp/sub_dbmw/<group>/df_dbmw_r --check-only
```

4. 完成一个立即做下一个；不要在单个函数无限耗（合理变体穷举后记录证据继续）。

## 4. 铁律

- **禁止硬套内联 asm**（唯一例外：纯 `nop` 对齐填充）。只能靠纯 C++ 形态技巧。
- 禁止清空/删除整文件实现。
- 禁止修改 `build/dbmw/` 与 `function_reports/dbmw/`。
- **私有 TU 组（dbm_a / dbm_b / dbm_c / dpt_a / dpt_b）**：只编辑
  `/tmp/sub_dbmw/<group>/src/` 下的私有副本（DBManager.cpp /
  DNFPacketTranslater.cpp），**不得直接改工作区源文件**；集成由父 Agent 负责。
  若修复需要头文件改动：把该头文件复制进 `/tmp/sub_dbmw/<group>/src/` 再改
  （scratch 编译 `-I scratch/src` 优先命中私有头），并在报告中注明
  （文件 + 改动点），供父 Agent 集成。
- **独占 TU 组（net / misc）**：直接编辑工作区你组 TU 的源文件（TU 见 tsv 的
  tu 列），只动你组 TU；**setup 不要带 --tus**（否则私有副本会遮蔽你的改动）。
- 禁止修改共享头/共享源码（`source/DNFServer/ServerCommon/`、
  `source/shared/`、`source/DNFServer/GameServer/Guild/` 及一切其它服务目录）。
  确需改 → 私有副本实验 + 上报父 Agent 审批。
- 禁止 `/mnt/d`。
- 行号/偏移/常量差异 = 真实差异：`__assert_fail` / 日志宏行号按 ORIG 二进制
  实测值对齐源码行号；字段偏移、魔数不得凭 Ghidra/DWARF 猜。
- 分类不变不得报 FIXED；每次改动必须 build + check 复检，禁止盲改。
- 若怀疑某 TU 编译器版本不匹配：用
  `build --tag <group> --tus <TU> --cc-extra "-B<cc1plus446bin路径>"` 做 A/B
  （路径 `ls /tmp/cc1plus446bin/`），取助记符/寄存器形态最接近者，附证据上报；
  不得擅改 `source/cmake/dbmw/CMakeLists.txt`。

## 5. 可用纯 C++ 形态技巧（跨服务已验证）

- `if (x == -1) return;`、`switch(cond){case 0:break;case 1:break;}`、switch 单 case
- `continue` / `goto LABEL` / 单 return 汇合 / 三元表达式 / 分支换向
- `register` 变量、`(int)` 显式强转、无符号常量表达式（如 `- 0xbU`）、bool 局部变量
- `__builtin_alloca`（替代 VLA 固定栈槽）、临时对象形态（构造/拷贝顺序）
- 变量/成员声明顺序调整、表达式拆分合并、真实成员/布局还原

## 6. 到头函数（禁止硬套 asm 的后果）

若某函数穷举合理纯 C++ 变体后仍无法 identical：保留**语义还原**版本（不写
asm），记录证据（md diff 摘录 + 已尝试变体清单 + 结论）到报告，标注 `HEAD`，
父 Agent 负责写入 `function_reports/dbmw/caliber_issues.csv`。

## 7. 报告（最终 answer + 写文件）

写 `/home/loyieking/dnf_workspace/dnf_decompile/round29_groups/dbmw/<group>_report.md`：

- 逐函数结论表：mangled | 改前分类 | 改后分类 | 状态(FIXED/REMAIN/HEAD) | 一句话说明
- 源码改动清单（私有组：列出每个函数改动点，供父 Agent 集成；独占组：改动了哪些函数体）
- REMAIN / HEAD 证据（diff 行 + 原因）
- 需要父 Agent 决策的共享改动

最终 answer 简要总结：FIXED 清单、REMAIN 清单 + 原因、改动要点。
