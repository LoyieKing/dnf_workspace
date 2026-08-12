# guild 第 21 轮回归 — 子 Agent 任务手册（2026-08-12）

你是本轮的 guild 子 Agent，负责把你分组内每个**非 identical** 函数通过
**纯 C++ 源码形态修复**推进到 `IDENTICAL / IDENTICAL_AE`（`gen_function_md.py
--check-only` 报 IDENTICAL/IDENTICAL_AE 即为成功）。这是全量源码回归轮
（§4.2 口径）：`caliber_issues.csv` 记录不构成完成状态，只有 classify 变为
identical 才算完成。

## 权威基线

- 权威 md：**354**（先 manifest 后 md 全量重生成，2026-08-12）
- ORIG：`/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/guild/df_guild_r`
- 重建：`/home/loyieking/dnf_workspace/dnf_decompile/build/guild/df_guild_r`
- 报告：`/home/loyieking/dnf_workspace/dnf_decompile/function_reports/guild/`
- 工具链：c6（GCC 4.4.7）-O0 最优；DNFTcpHandler/DNFSignalTranslator/
  DNFApplication/DNFGuildServerMain/DNFPacketTranslater/DNFThreadInterface 由
  c6444r 包装器自动分发（无需你处理）。

## 你的分组

- 组名：`<你的组名>`
- 函数清单：`/home/loyieking/dnf_workspace/dnf_decompile/round21_groups/guild/<你的组名>.txt`
  （每行 `状态 <mangled>`）
- 每个函数的完整 diff / Ghidra 反编译 / 源码位置见
  `function_reports/guild/<mangled>.md`。

## 工作流（每个函数）

1. 读 `function_reports/guild/<mangled>.md`，理解 ORIG 汇编形态与差异点。
2. 只修改**你分组内**的 .cpp 源文件（TU 列表见下），改该函数源码。
3. scratch 构建：
   ```bash
   bash /home/loyieking/dnf_workspace/guild_scratch_group.sh /tmp/sub_guild_<组名> <tu1.cpp> <tu2.cpp> ...
   ```
   （脚本自动复制对象树 → 用 CMake 相同 flags 重编你的 TU → 按 link.txt 链接，
   产出 `/tmp/sub_guild_<组名>/df_guild_r`，不触碰 build/guild。）
4. 复检：
   ```bash
   cd /home/loyieking/dnf_workspace/dnf_decompile
   python3 source/toolchain/gen_function_md.py --services guild --function <mangled> \
       --new-bin /tmp/sub_guild_<组名>/df_guild_r --check-only
   ```
   输出 `-> IDENTICAL` / `-> IDENTICAL_AE` = 该函数完成。
5. 批量复检整个分组（每次 scratch 链接后可跑一次）：
   ```bash
   bash /home/loyieking/dnf_workspace/round21_check_group.sh /tmp/sub_guild_<组名> \
       round21_groups/guild/<你的组名>.txt
   ```
   输出每个函数的当前分类；identical 的函数从清单中划掉。

## 可用纯 C++ 形态技巧（第 1~20 轮验证）

`if (x == -1) return;`、`switch(cond){case 0:break;case 1:break;}`、
continue/goto/单 return/三元/分支换向/switch 单 case/`register` 变量/
`(int)` 强转/`__builtin_alloca`/临时对象形态/bool 局部变量（复现
`sete;test;je` 与 `xor $1` 极性）、局部变量声明顺序、表达式结构拆分合并、
宏展开形态、`unsigned` 常量表达式（如 `- 0xbU`）、`if/else` vs 裸 return
折叠差异。真实成员/布局修复优先（字段顺序、#pragma pack、类布局）。

## 硬规矩（违反即作废）

1. **禁止硬套内联 asm**（唯一例外：纯 `nop` 对齐）。函数只能靠纯 C++ 源码
   形态对齐；试尽合理变体仍无法 identical 的，源码保留最简语义还原版本，
   该函数记入你的 REMAIN 清单（不写 CSV、不改 md —— 父 agent 统一收尾）。
2. 禁止清空/删除整文件实现；禁止改其它服务目录。
3. **禁止修改共享源码**：`source/shared/`、`source/Library/`、
   `source/DNFServer/ServerCommon/`、`source/cmake/`、头文件目录中的公共头
   （如 shared/packet/include、DNFGuild.h 等跨 TU/服务头）。确需改共享头
   （如类布局定义在公共头里）→ 发消息上报父 agent，不要自己改。
4. 禁止修改 `build/guild/` 与 `function_reports/guild/`（含 manifest/CSV/md）。
   复检一律用 `--check-only`。
5. 你的 TU 内其它函数若被他人/你在复检时发现变差，保持原样并在报告注明。
6. 遇到阻塞：自行排查重试；仍不行则发消息给父 agent 后继续做其它函数。

## 完成的判定与上报

- 完成 = 该函数 `--check-only` 报 IDENTICAL / IDENTICAL_AE。
- 最终上报（发回父 agent）：
  - 已修复函数清单（mangled + 改前/改后分类 + 一句话改动说明）
  - REMAIN 清单（mangled + 原因 + 关键差异证据 + 已尝试变体）
  - 改动文件清单
  - 阻塞项（如需共享头修改等）

## 只读上下文（按需）

- `docs/identical_brief_for_agents.md`（判定口径 §4.1/§4.2）
- `docs/regression_progress_2026-08-11.md`（形态技巧汇总）
- `docs/df_guild_r_progress.md`（服务还原历史）
