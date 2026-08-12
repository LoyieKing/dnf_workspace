# guild 第 27 轮类粒度回归 —— 子 Agent 通用手册（2026-08-12）

## 0. 角色

你是子 Agent。任务：把分配给你的 guild 函数组逐个修到
`IDENTICAL` / `IDENTICAL_AE`（等价于 “md 已删除”，唯一完成标准）。
独立推进，不等待其它 agent；遇到疑难先穷举合理源码变体，仍不行就记录证据并
继续下一个函数，最后统一上报。不得轮询等待、不得替父 agent 做集成/审批。

## 1. 背景与权威基线（2026-08-12，第 27 轮）

- 工作区根：`/home/loyieking/dnf_workspace/dnf_decompile`（所有路径以此为准）。
- ORIG 二进制：`/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/guild/df_guild_r`
  （32 位、无 DWARF、纯 Ghidra 逆向；`.comment` 为 4.1.2-52×2 / 4.4.6-3 /
  4.4.7-1 / 4.4.4-13×4 混合，guild 服务级工具链结论维持 **c6 4.4.7 -O0 最优**）。
- 权威重建：`build/guild/df_guild_r`（guild 用 c6 变体：c6root g++ 4.4.7 驱动，
  `-m32 -O0 -std=gnu++0x`；`DNFTcpHandler`/`DNFSignalTranslator`/`DNFApplication`/
  `DNFPacketTranslater`/`DNFThreadInterface`/`DNFTcpAcceptThread`/
  `DNFGuildServerMain` 默认走 c6444r，见 `source/toolchain/cmake/dnf_guild_cxx.sh`）。
- 权威基线：guild 非 identical = **328**（DIFF 317 + NEAR 11；IDENTICAL 934 /
  IDENTICAL_AE 288）。你组清单见 `round27_groups/guild/<group>.list`
  （mangled 名，一行为一个）。
- 判定口径：`source/toolchain/compare_common.py` strict（仅归一化直接跳转/调用目标
  地址；立即数、字段/栈偏移、寄存器、寻址形态、数据地址严格保留）。

## 2. 必读资料（动手前先读完）

- `docs/identical_brief_for_agents.md`：§0.1（类粒度子分解）、§4.1（行号/偏移/
  工具链口径、**禁止硬套 asm**、逐文件工具链授权）、§4.2（全量回归完成标准）。
- `docs/df_guild_r_progress.md`：guild 还原背景。
- `docs/regression_progress_2026-08-11.md` §三：已验证的源码形态技巧清单。
- 你组内每个函数的 `function_reports/guild/<mangled>.md`：含 ORIG/OURS 完整汇编
  diff（伪代码化）、Ghidra 反编译 C、我们的源码函数位置（部分函数 md 里定位不到
  源码，按 class 归属 TU，见 §7 分组表）。

## 3. 闭环循环（每个函数）

1. 读该函数 md，看懂 diff 与 ORIG 语义（Ghidra C + ORIG 汇编为准）。
2. 改源码（只改你组 TU；规则见 §4）。
3. 重编 + 链接 scratch 二进制（只写你自己的 scratch 目录）：

   ```bash
   cd /home/loyieking/dnf_workspace/dnf_decompile
   source source/toolchain/guild_scratch_helper.sh
   scratch_setup <group>                 # 首次：复制权威 .o 树到 /tmp/sub_guild_<group>
   scratch_compile <group> /home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Guild/<TU>.cpp
   scratch_link <group>
   ```

   - 私有副本组（pt_a/pt_b/pt_c/guild_a/guild_b，同 TU 多组并行）：
     把基线副本复制成你自己的私有副本，编辑副本，再用 override 编译：
     ```bash
     mkdir -p /tmp/sub_guild_<group>/private
     cp /tmp/guild_base/<TU>.cpp /tmp/sub_guild_<group>/private/<TU>.cpp
     # 编辑 /tmp/sub_guild_<group>/private/<TU>.cpp
     export GUILD_SCRATCH_SRC_OVERRIDE=/tmp/sub_guild_<group>/private/<TU>.cpp
     scratch_compile <group> /home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Guild/<TU>.cpp
     scratch_link <group>
     ```
   - 逐 TU 工具链 A/B（仅当怀疑 ORIG 编译器版本与当前变体不符）：
     `export GUILD_SCRATCH_VARIANT=c6444r`（或 c6 / c6446r）再 `scratch_compile`；
     对比哪个变体助记符/寄存器形态最接近 ORIG。**不得**改动权威
     `build/guild` 的变体配置——把 A/B 结论与证据报给父 agent 决策。
4. 复检：

   ```bash
   scratch_classify <group> <mangled>
   # 查看完整伪代码 diff：
   python3 source/toolchain/gen_function_md.py --services guild --function <mangled> \
       --new-bin /tmp/sub_guild_<group>/df_guild_r
   ```

   `IDENTICAL` / `IDENTICAL_AE` = 完成。其它状态继续改。
5. 完成一个就立即做下一个；不要在单个函数上无限耗。scratch 目录可复用：
   同一目录多次跑脚本只重编指定 TU（首次会复制权威 .o 树）。

## 4. 铁律

- **禁止硬套内联 asm**（唯一例外：纯 `nop` 对齐填充）。到头函数按 §6 上报，
  不得用 asm 硬套。
- 禁止清空/删除整文件实现。
- 禁止修改 `build/guild/` 与 `function_reports/guild/`（父 agent 负责集成、
  最终重建与 md 重生成）。
- **共享头文件（`DNFGuild.h` / `DNFPacketTranslater.h` / `DNFUser.h` /
  `TcpNetSystem.h` / `Peer.h` / `GuildCargo.h` / `GuildBoard.h` 等本组 TU 对应
  头文件及 ServerCommon/shared 头）不得直接修改**。确需类布局/成员顺序改动时：
  在私有副本上实验验证，然后单独上报父 agent 审批集成。
- 只动你组 TU（§7 分组表）；禁止改其它 TU / 其它服务目录；禁止 `/mnt/d`。
- 不盲改：每次改动必须重编 + 复检；分类不变不得报 FIXED。
- **行号 / 偏移 / 常量差异是真实差异**：`__assert_fail` / 日志宏行号实参两侧
  不同必须按 ORIG 实测值对齐源码行号；字段偏移、魔数必须以 ORIG 二进制实测为准，
  不得凭 DWARF/Ghidra 猜测。

## 5. 可用纯 C++ 形态技巧（跨服务已验证）

- `if (x == -1) return;`、`switch(cond){case 0:break;case 1:break;}`（含 switch 单 case）
- `continue` / `goto LABEL` / 单 return 汇合 / 三元表达式 / 分支换向
- `register` 变量（阻止 4.4 消除临时拷贝）
- `(int)` 显式强转、无符号常量表达式（如 `- 0xbU`）
- bool 局部变量（复现 `xor $1` 极性）
- `__builtin_alloca` 替代 VLA（复现固定栈槽）
- 临时对象形态、变量/成员声明顺序调整、表达式求值顺序调整、拆分/合并语句、
  `(char*)&pkt + 偏移` 指针算术显式化
- 常量以 ORIG 实测为准（objdump / 字符串表），行号用 ORIG 二进制实测对齐

## 6. 证据与上报

每个函数最终结论二选一：
- `FIXED`：改动一句话（什么形态技巧 / 什么真实语义修复）。
- `REMAIN`：`--diff` 完整证据 + 已尝试的源码变体清单 + 为什么到头的判断
  （父 agent 负责记入 caliber_issues.csv）。

不要写 `caliber_issues.csv`（父 agent 统一记录）。

最终报告（发给父 agent）包含：
1. 逐函数结论表（mangled → FIXED/REMAIN + 一句话）。
2. 你的源码改动 diff：
   - 独占 TU 组：`git diff -- source/DNFServer/GameServer/Guild/<TU>.cpp`
   - 私有副本组：`diff -u /tmp/guild_base/<TU>.cpp /tmp/sub_guild_<group>/private/<TU>.cpp`
3. 需要父 agent 决策的共享改动（头文件/布局/工具链 A/B 结论）。

## 7. 分组与 TU 归属（round27_groups/guild/*.list，由当前权威 manifest 生成）

| 组 | 函数数 | TU（basename） | 私有副本 |
|---|---|---|---|
| pt_a / pt_b / pt_c | 33/33/33 | DNFPacketTranslater | 是（每组一份） |
| guild_a / guild_b | 30/29 | DNFGuild | 是（每组一份） |
| guildmgr_srvhdr | 25 | DNFGuildManager + DNFServerHandler | 否（独占） |
| user_peer | 23 | DNFUser + Peer | 否（独占） |
| mempool_netsys | 21 | MemPool + TcpNetSystem | 否（独占） |
| cargo_board | 23 | GuildCargo + GuildBoard | 否（独占） |
| usermgr_powermgr | 16 | DNFUserManager + PowerManager | 否（独占） |
| xml_frame_sig | 19 | ServerXml + DNFTickHandler + DNFSignalTranslator + DNFApplication | 否（独占） |
| war_family | 15 | DNFGuildWar + PowerWarGuildInfo + PowerWarCharacInfo + PowerWar | 否（独占） |
| decoder_udp | 12 | DNFPacketDecoder + DNFUdpHandler + DNFTcpHandler | 否（独占） |
| small_tu | 16 | DNFTableBase + GMAccounts + DNFAppStartInit + DNFTcpSocket + CashObject + DNFAppStopInit + DNFTcpNetworkThread + DNFNetworkThread + MemoryCashManager | 否（独占） |

注意：`ServerXml.cpp` 在 Guild 目录与 ServerCommon 目录各有一份，你只许改
Guild 目录那份（`source/DNFServer/GameServer/Guild/ServerXml.cpp`）。

## 8. 已知提示（第 26 轮基线已含）

- 剩余 328 个绝大多数是 -O0 代码生成差异（栈槽/寄存器/求值顺序/寻址形态/
  leave vs pop ebp、push 序、mov 交换），源码形态可消除。
- 典型小 diff：`mov %ebx,-0x4c(%ebp)` vs `mov %edx,-0x4c(%ebp)`（寄存器名）；
  两条 `mov` 交换（求值顺序）；`movw $0x0,0xc(%eax,%edx,2)` vs
  `add %edx,%edx; add %edx,%eax; movw $0x0,(%eax)`（寻址形态）；栈顶 `leave` vs
  `pop %ebp` 序列。
- 真实 bug 型差异（必须修源码）：ORIG 有某字段比较块而 ours 缺失；ORIG 调用
  序列与 ours 不同；字段偏移/行号常量不同。
- `caliber_issues.csv` 中旧 codegen_diff 记录不构成完成状态，一律按上述闭环重做。
- 第 26 轮只动了 monitor/dbmw/statics，guild 源码 7 个 TU 有微调
  （DNFGuild/DNFGuildWar/DNFPacketTranslater/DNFServerHandler/GuildBoard/
  GuildCargo + DNFGuildWar.h），`/tmp/guild_base/*.cpp` 已刷新为当前 HEAD，
  私有副本务必从 `/tmp/guild_base` 复制。
