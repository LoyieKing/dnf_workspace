# monitor 第 25 轮类粒度回归 —— 子 Agent 通用手册（2026-08-12）

## 0. 角色

你是子 Agent。任务：把分配给你的 monitor 函数组逐个修到
`IDENTICAL` / `IDENTICAL_AE`（等价于父 agent 的 “md 已删除”，唯一完成标准）。
独立推进，不等待其它 agent；遇到疑难先穷举合理源码变体，仍不行就记录证据并
继续下一个函数，最后统一上报。不得轮询等待、不得替父 agent 做集成/审批。

## 1. 背景与权威基线（2026-08-12 14:07 重新 manifest + 全量 md 测量）

- 工作区根：`/home/loyieking/dnf_workspace/dnf_decompile`（所有路径以此为准）。
- ORIG 二进制：
  `/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r`
  （32 位、strict 口径逐指令比对）。
- 权威重建：`build/monitor/df_monitor_r`（c6444r 变体：c6root g++ 4.4.7 驱动 +
  Red Hat 4.4.4-13 cc1plus，`-m32 -O0 -std=gnu++0x`，链接用宿主机 g++）。
- 权威基线：monitor 非 identical = **380**（NEAR 8 + DIFF 372；IDENTICAL 986 /
  IDENTICAL_AE 313 / EXEMPT_SKIP 6247）。上一轮（第 24 轮）793→380 后维持；
  本轮目标继续向 0 推进。
- 判定口径：`source/toolchain/compare_common.py` strict（仅归一化直接跳转/调用目标
  地址；立即数、字段/栈偏移、寄存器、寻址形态、数据地址严格保留）。

## 2. 必读资料（动手前先读完）

- `docs/identical_brief_for_agents.md`：§0.1（类粒度子分解）、§4.1（行号/偏移/
  工具链口径、禁止硬套 asm、逐文件工具链授权）、§4.2（全量回归完成标准）。
- `docs/regression_progress_2026-08-11.md` §三：跨服务已验证的源码形态技巧清单。
- `docs/df_monitor_r_progress.md`：monitor 还原背景与既往结论。
- 你组内每个函数的 `function_reports/monitor/<mangled>.md`：含 ORIG/OURS 完整
  汇编 diff（伪代码化）、Ghidra 反编译 C、我们的源码函数位置。

## 3. 闭环循环（每个函数）

1. 读该函数 md，看懂 diff 与 ORIG 语义（Ghidra C + ORIG 汇编为准）。
2. 改源码（只改你组 TU；见 §4 与 §7 分组表）。
3. 重编 + 链接 scratch 二进制（只写你自己的 scratch 目录）：

   ```bash
   cd /home/loyieking/dnf_workspace/dnf_decompile
   bash source/toolchain/monitor_scratch.sh <scratch_dir> <TU_basename> [<TU2> ...]
   # 例：bash source/toolchain/monitor_scratch.sh /tmp/mon_member_a_scratch DNFMemberManager
   ```

   - TU basename 不带 `.cpp`。
   - 私有副本组（pt_a/pt_b/pt_c/pt_d，同 TU 多组并行）：编辑
     父 agent 给你的私有副本，再用 override 编译：
     ```bash
     export MON_SCRATCH_SRC_OVERRIDE=/tmp/mon_r25_pt_<X>/private/DNFPacketTranslater.cpp
     bash source/toolchain/monitor_scratch.sh /tmp/mon_pt_<X>_scratch DNFPacketTranslater
     ```
   - 逐 TU 工具链 A/B（仅当怀疑 ORIG 编译器版本与当前变体不符）：
     `export MON_SCRATCH_VARIANT=c6|c6446r|c5|c5r52` 再跑上面的命令；
     对比哪个变体助记符/寄存器形态最接近 ORIG，把结论与证据报父 agent，
     **不得**改动权威 build/monitor 的变体配置。
4. 复检：

   ```bash
   python3 source/toolchain/scratch_check_monitor.py <scratch_dir>/df_monitor_r <mangled>
   # 或批量：python3 source/toolchain/scratch_check_monitor.py <scratch>/df_monitor_r \
   #   --file round25_groups/monitor/<你的组>.txt
   ```

   `IDENTICAL` / `IDENTICAL_AE` = 完成（父 agent 集成后 md 会删除）。其它状态继续改。
5. 完成一个就立即做下一个；不要在单个函数上无限耗。

## 4. 铁律

- **禁止硬套内联 asm**（唯一例外：纯 `nop` 对齐填充）。到头函数按 §6 上报，
  不得用 asm 硬套。
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
- 禁止 `/mnt/d`；只在本工作区活动。

## 5. 可用纯 C++ 形态技巧（跨服务已验证）

- `if (x == -1) return;`、`switch(cond){case 0:break;case 1:break;}`（含 switch 单 case）
- `continue` / `goto LABEL` / 单 return 汇合 / 三元表达式 / 分支换向
- `register` 变量（阻止 4.4 消除临时拷贝）
- 无符号常量表达式（`- 0xbU`）、bool 局部变量（`xor $1` 极性）、`(int)` 显式强转
- `__builtin_alloca` 替代 VLA 固定栈槽；变量/成员声明顺序调整；表达式拆合
- 临时对象形态、`(char*)&pkt + 偏移` 指针算术显式化
- 字符串/日志按 ORIG 二进制逐字节还原（含行号实参）

## 6. 证据与上报

每个函数最终结论二选一：
- `FIXED`：改动一句话（什么形态技巧 / 什么真实语义修复）。
- `REMAIN`：`--diff` 完整证据 + 已尝试的源码变体清单 + 为什么到头的判断
  （父 agent 负责记入 caliber_issues.csv）。

不要写 `caliber_issues.csv`（父 agent 统一记录）。

最终报告（发给父 agent）包含：
1. 逐函数结论表（mangled → FIXED/REMAIN + 一句话）。
2. 你的源码改动 diff：
   - 独占 TU 组：`git diff -- source/DNFServer/GameServer/Monitor/<TU>.cpp`
   - 私有副本组：`diff -u /tmp/mon_r25_pt_<X>/private/DNFPacketTranslater.cpp <共享工作副本>`（父 agent 会按函数合并）
3. 需要父 agent 决策的共享改动（头文件/布局/工具链 A/B 结论）。

## 7. 分组与 TU 归属（round25_groups/monitor/*.txt）

| 组 | 函数数 | TU（basename） | 私有副本 |
|---|---|---|---|
| pt_a / pt_b / pt_c / pt_d | 28/28/28/27 | DNFPacketTranslater | 是（/tmp/mon_r25_pt_a..d/private/） |
| user_buddy | 36 | DNFUser + DNFUserManager + DNFBuddyHandle + BuddyRegisterManager | 否（独占） |
| network | 27 | TcpNetSystem + Peer + DNFTcpSocket + DNFTcpHandler | 否（独占） |
| village | 26 | VillageAttackedManager + TowerOfDespairReloadAPC | 否（独占） |
| member_a | 20 | DNFMemberManager | 否（独占） |
| member_b | 25 | DNFMember + DNFMemberConfig | 否（独占） |
| cash_item | 25 | MemoryCashManager + ItemLimitEditionManager + LimitNpcBuyItem + CashObject | 否（独占） |
| event_task | 23 | OnTimeEventManager + EventActionManager + Arad_MomijiEvent + TaskImpl + TaskScheduler + SystemTimeHandler | 否（独占） |
| server_handler | 22 | DNFServerHandler + DNFManagerServer + LoginLogoutStatistics + DNFTcpAcceptThread + DNFTcpNetworkThread + DNFServerInterface | 否（独占） |
| app | 19 | DNFApplication + DNFAppStartInit + DNFAppConfig + DNFAppStopInit + DNFServerConfig + DNFKillUserConfig + DNFNetworkThread + DNFMonitorServerMain | 否（独占） |
| udp_packet | 18 | DNFUdpHandler + DNFTickHandler + DNFPacketDecoder + DNFPacketTracer | 否（独占） |
| tables | 17 | DNFTableBase + ServerXml + IPCounter + GMAccounts + DNFTowerRank + DNFProhibitUser | 否（独占） |
| mempool | 11 | DNFPacketBuffer | 否（独占） |

## 8. 已知提示（本轮基线已含，先看 md 再动手）

- 剩余 380 个绝大多数是 -O0 代码生成差异（栈槽/寄存器/求值顺序/寻址形态/
  leave vs pop ebp、push 序、mov 交换），源码形态可消除。
- 典型小 diff：`mov %ebx,-0x4c(%ebp)` vs `mov %edx,-0x4c(%ebp)`（寄存器名）；
  两条 `mov` 交换（求值顺序）；`movw $0x0,0xc(%eax,%edx,2)` vs
  `add %edx,%edx; add %edx,%eax; movw $0x0,(%eax)`（寻址形态）；栈顶 `leave` vs
  `pop %ebp` 序列。
- 真实 bug 型差异（必须修源码）：ORIG 有某字段比较块而 ours 缺失；ORIG 调用
  序列与 ours 不同；字段偏移/行号常量不同。
- `caliber_issues.csv` 中旧 codegen_diff 记录不构成完成状态，一律按上述闭环重做。
