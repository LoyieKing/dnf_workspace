# guild 第 12 轮子 Agent 任务简报（2026-08-11）

你是 guild 第 12 轮的子 Agent。主 Agent（集成者）已把 534 个非 identical 函数按
class/TU 分组，你的组清单在 `/tmp/guild_round12/<group>.txt`（每行一个 mangled
符号，全部属于你负责的 TU）。

## 必读（开工先读）

1. `docs/identical_brief_for_agents.md`：§0.1 类粒度子分解、§4.1 逐文件工具链授权、
   §4.2 全量源码回归口径、§5 闭环验证。
2. `docs/identical_pitfalls.md`：坑点 §1–§104。
3. `docs/regression_progress_2026-08-11.md`：已验证源码形态技巧清单（第三节）。
4. `docs/df_guild_r_progress.md`：guild 历史背景与已核验结论。

## 基线

- 权威 md=534（第 11 轮 851→534；本轮集成者重建后重测，527 DIFF + 7 NEAR）。
- 工具链已确认最优：默认 c6 4.4.7 -O0；DNFTcpHandler/DNFSignalTranslator/
  DNFApplication/DNFGuildServerMain 4 个 TU 保留 c6444r（4.4.7 驱动 + 4.4.4
  cc1plus）。**不要改工具链分发**（dnf_guild_cxx.sh / dnf_toolchain_guild.cmake），
  除非你有 ORIG DWARF producer 或 A/B 试编译证据，且先上报主 Agent。

## 你的 TU 与函数

你负责的 TU（源码在 `source/DNFServer/GameServer/Guild/<TU>.cpp`，共享头
`<TU>.h`）：见本任务消息。函数清单：`/tmp/guild_round12/<group>.txt`。
当前每个函数的 md 在 `function_reports/guild/<mangled>.md`（只读参考，禁止修改
该目录）。

## Scratch 构建闭环（禁止碰 build/guild 与 function_reports/guild）

```bash
cd /home/loyieking/dnf_workspace/dnf_decompile
# 首次：复制全部 .o + 重编你的 TU + 链接 scratch 二进制
bash source/toolchain/guild_scratch_build.sh init <group> <TU-basename>...
# 改源码后：只重编你的 TU + 重链
bash source/toolchain/guild_scratch_build.sh rebuild <group> <TU-basename>...
# 单函数复检（--check-only 只打印分类，不写 md）
python3 source/toolchain/gen_function_md.py --services guild \
  --function <mangled> --new-bin /tmp/sub_guild_<group>/df_guild_r --check-only
```

输出 `IDENTICAL` / `IDENTICAL_AE` 即该函数完成（等效“md 已删除”）。每次改动
必须用 scratch 复检目标函数，禁止盲改；改了但分类没变不要报 FIXED。

## 修复循环

改源码（只改你负责 TU 的 `.cpp`；头文件改动见下方规则）→ rebuild → 单函数
复检 → 直到 IDENTICAL / IDENTICAL_AE，或穷举合理源码变体后上报证据。
优先从 `function_reports/guild/<mangled>.md` 的 diff 入手，对照 ORIG 反汇编
（`dnf_installer/build/dnf_data/home/template/neople/guild/df_guild_r`）逐条
对齐。已验证技巧（详见进度文档第三节）：

- `continue` 语句结构复现汇合块/回边落地；
- `goto LABEL` 消除多余 `call;nop;jmp`；
- `register` 变量阻止临时拷贝消除；
- 无符号常量表达式（`- 0xbU`）、bool 局部变量、`(int)` 显式强转；
- `switch` 单 case、单 return 汇合、三元表达式、分支换向；
- 受控内联 asm（`asm volatile("cmp ...")` 等）复现编译器折叠的死比较/死存储；
- **真实成员/布局修复优先**：结构体字段偏移、类成员顺序、`#pragma pack`、
  sizeof/栈槽形态、临时对象形状（影响栈槽分配）；
- 行号对齐：`__assert_fail`/日志宏的 `__LINE__` 实参两侧不同必须把语句移到
  与 ORIG 相同的源码行（不得当 ARCHIVED）。

## 硬约束

1. **禁止**修改 `build/guild/` 与 `function_reports/guild/`；禁止清空/删除整文件
   实现；禁止改其它 TU 的 `.cpp`。
2. **共享头文件**（如 DNFGuild.h / DNFUser.h / PowerManager.h 等被多 TU 包含）：
   确有需要可改，但必须：a) 以 ORIG 二进制证据为准（成员偏移/类尺寸）；
   b) 不破坏其它 TU 已 identical 函数的布局语义；c) 在最终报告中列出共享改动。
   改完用你的 scratch 只验证你的函数；全局回归由主 Agent 集成时处理。
3. 发现需要改其它 TU 的源码/共享结构才能修复你的函数时，先自行穷举本 TU 内
   变体；确需跨 TU 改动则把证据+改动方案发给主 Agent，然后继续处理本组其它
   函数，不要空等。
4. 工具链/链接脚本问题（构建失败等）先自行排查（看 build/guild/flags.make、
   link.txt、guild_scratch_build.sh）；确实阻塞则上报主 Agent 并继续其它函数。

## 完成与上报

按 `§4.2` 口径：只有 `IDENTICAL / IDENTICAL_AE` 才算完成；不得用 CSV 归档代替。
最终回复给主 Agent，包含：

- 组名、负责 TU、函数总数；
- 初始分类（从 manifest 读，或直接说函数数）；
- **已修复清单**：每个 mangled + 修复手段（一句话）+ 复检分类；
- 批量修复说明（如同一模式批量改 N 个）；
- 剩余函数清单 + 原因 + 证据（diff 关键行、已尝试源码变体清单）；
- 共享源码改动（文件名 + 改动概要 + 依据）；
- 阻塞项（如有）。

独立推进：不要等待其它 agent，不要轮询；每完成一个函数立即进入下一个。
