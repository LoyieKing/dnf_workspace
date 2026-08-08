# 子代理硬约束（所有 Wave 代理开工前必读，逐条遵守）

## 0. 开工顺序
1. 完整读本文件。
2. 读你的工作清单 `/tmp/dwarf_validate/auction_tu_diffs_w4b/<CU>.txt`（每行：类别 / demangle / mangled）。
3. 用 `compare_auc_tu.py --sym` 看 ORIG vs NEW 逐行反汇编，确认差异形态后再改源码。
4. 只改清单里的函数，逐函数自校验。

## 1. 绝对禁止
- 禁止 `spawn_agent` / `followup_task` / 任何形式的派生子代理、并行拆分（你自己的任务就是你全部的工作量）。
- 禁止运行 `source/toolchain/build-auction.sh`、`build-point.sh`、或任何写入 `build-auction/`、`build-point/` 的命令。构建和链接由根代理统一执行。
- 禁止编辑任务清单之外的文件；禁止修改共享头（`ISession.h`、`Reactor.h`、`ObjectPoolByBoostPool.h`、`InterHandler.h`、`Method.h`、`Character.h` 等，除非你的清单明确列出）。确需改动时，写入最终报告，由根代理决策。
- 禁止触碰 `source/relay/`、`source/coserver/`、`source/ChannelOld/`、`source/guild/`、`source/statics/` 等其它服务树。
- 禁止 git 操作（add/commit/checkout/reset 等）。
- 禁止删除、移动、重命名文件。
- 禁止 `rm -rf` 等破坏性命令；自校验产物只写 `/tmp/<你的包名>/`。

## 2. 修改规范
- 只允许通过 `apply_patch` 修改源码文件。
- 语义等价是验收底线：行为必须与 ORIG 一致（调用目标、分支条件、返回值、边界处理、日志内容）。
- 助记符级一致是加分项：尽量对齐 ORIG 的 -O0 代码生成形态（调用顺序、局部变量、临时量构造、条件分支、内联/非内联、日志参数顺序），但禁止为了形态牺牲语义。
- NEAR（助记符相同）可接受，但必须确认语义等价，并在报告里说明依据。
- 命名与类布局必须与 DWARF 一致：不要为了对齐助记符而改字段名/类布局/函数签名。行号只当元信息，不追求一致。
- 已确认语义等价、纯属编译器/STL 版本形态差异（如 `uninitialized_copy`、`_M_insert_aux`、EH landing pad、`@plt`）的残留，保留并在报告注明，不要硬凑。

## 3. 自校验
- 每个改动过的 TU 都要过一遍：
  `source/toolchain/w4_compile.sh <src.cpp 绝对路径> /tmp/<你的包名>/<base>.o`
  `python3 source/toolchain/compare_auc_obj.py <CU> /tmp/<你的包名>/<base>.o`
- IDENTICAL 判定必须使用统一口径（`source/toolchain/compare_common.py` 的 `norm_identical`）：
  保留立即数常量与字段/栈偏移，仅归一化直接跳转/调用目标地址；规则详见 `docs/compare_caliber.md`。
- 对象级比对有已知噪声，人工排除：`@plt` 后缀、`G_TraceLog` vs `GlobalInstance::inst_ptr` 内联别名、`__static_initialization` 差异、跨 TU 缺失符号。真正的调用目标差异必须修。
- 禁止伪造结论：任何「已对齐 / IDENTICAL / 语义等价」的判断必须基于实际比对输出；不确定的写 `INFERENCE:` 并说明推理。

## 4. 最终报告（固定格式）
每个 CU 输出：
- 对象级自校验计数（IDENTICAL / NEAR / DIFF / DIFF+CALL / MISSING）——注明这是对象级噪声口径，不是最终二进制口径。
- 修复函数 demangle 清单。
- 未解决项及原因（语义等价但形态不同 / STL 版本 / 需要共享头改动等）。
- 共享头需求（如有）。
- 你实际改动过的文件清单（绝对路径）。
报告禁止泛泛而谈，必须有具体函数名和数据。
