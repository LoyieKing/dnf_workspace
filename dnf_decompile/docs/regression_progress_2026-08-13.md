# 全量回归进度（2026-08-13 保存点）

## 当前权威状态

总计 **568 个可操作 md**（R44 基线 649，累计 -81）。

| 服务 | md | 状态 |
|---|---:|---|
| coserver | 0 | ✅ |
| manager | 2 | 攻坚中 |
| dbmw | 144 | 攻坚中 |
| guild | 196 | 攻坚中 |
| monitor | 184 | 攻坚中 |
| statics | 42 | 攻坚中 |

## 第 46 轮（2026-08-13 收尾，字段语义化 + 集成复验）

权威口径重生成（clean rebuild 六服务 + gen_report_manifest + gen_function_md）：
**568 md，与基线一致，逐函数状态对比 HEAD 零变化，无回归**。

### 本轮集成内容

1. **四服务字段语义化重命名**（只改名，类型/偏移/大小不变，代码生成零影响）：
   - dbmw ~220 处（85+ 结构体，清单 docs/dbmw_field_rename_manifest.md）
   - guild ~110 处（39 文件，含 CGuild/DNFGuild.h/DNFPacketTranslater.h）
   - monitor ~140 处（47 文件，清单 docs/monitor_field_rename_manifest.md）
   - statics ~144 处（20 文件 + 可复跑脚本 source/toolchain/statics_rename_fields.py，
     清单 docs/statics_field_rename_manifest.md）
2. **guild 结构体还原**：STGuildSkill/STGuildMemberProxy/STGuildMemberChangableInfo/
   STGuildMemberWebConnInfo/ST_GuildCreateFromWeb/ST_Notice_Guild_Enter/ST_Notice_Guild_Secede；
   26 个 `_Layout` 中 13 个 MATCH 重构。
3. **集成期修复的 2 处回归**（子代理改名漏改/误改）：
   - DNFPowerWarConfig.cpp：m_field4 → m_rankUpdateTime（漏改 1 处使用点，编译错误）
   - DNFUser.cpp：m_guildMemFlag(+0x38) 4 处被误改写成 m_guildStateFlag(+0x48)
     （ResetCharInfo/SetUserInfo_CharNo/SetUserChangableInfo/GetLevel），已按 ORIG
     反汇编（movw/movzwl 0x38）全部还原。
4. **复核并排除 2 处疑似 bug**（行为与 ORIG 一致，已加注释防误改）：
   - OnNoticeGuildSecede 的 Packet_Guild_Exp_Book_Delete：+0x12=guildKey、
     +0x16=group，与 ORIG 槽位一致，未写反。
   - OnMonitorFindFactoryHubUser：入包读 +0x2d/+0x2f、回复写 +0x2e/+0x30，与 ORIG 一致。
   - QueryLoadARSInfo 列序与 SQL 列名不对齐，但函数 IDENTICAL（ORIG 原始行为），
     加注释禁止按 SQL "修正"。

### 待办（下一轮）

- dbmw DBManager 大 DIFF 函数（Queue 中 CONST_OR_OFFSET 325 个为主力）。
- monitor Packet_Notice_Find_Factory_Hub_User 入包/回复 1 字节布局差异（行为已对齐，
  命名待进一步 log 证据）。
- 继续从大 DIFF 函数反挖真实语义 bug（verify_final / semantic_sweep 思路）。

## 第 47 轮（2026-08-13 晚，CALL_DIFF 清零 + 根因修复，568→567）

### 成果

1. **guild 真实调用集差异全部归零**：20 个 CALL_DIFF（EH 缺失）+ 4 个
   （缺失日志分支/GetGuildBoard 重复调用形态/缺失 isWebGuildBoardAction 判断）
   全部修复；完整反汇编调用集合对比 ORIG-only/OURS-only = 0。
2. **regression_triage 修复**：parse_md 把 diff 共同行纳入 ORIG/OURS 两侧，
   CALL_DIFF 误报（40）消除。
3. **CPeer::parsing try/catch 位置根因修复（guild/monitor/dbmw）**：
   ORIG 的 try 包 CMyFileLog 日志块（[PARSING LENGTH EXCEPTION]），catch 是
   printf("[PARSING EXCEPTION] memmove...")+return 0；memmove 在 try 外。
   此前包在 memmove 上被 GCC 判定无异常而整体删除。修正后 monitor 指令数
   289=289 与 ORIG 一致。
4. **CGuild::SendGuildInfoToMemberOnly 翻 IDENTICAL**：placement new →
   直接构造消除多余 _Unwind_Resume；guild 196→195，总数 568→567。
5. **编译器发现**：c6444r 变体 cc1plus444bin 的 cc1plus 实为 4.4.7-23
   （symlink 到 c6root/4.4.4 但内容是 4.4.7）；真 4.4.4-13 在
   /tmp/cc1plus444r13bin。monitor 6 个函数（OnTimeEventManager 4 个 +
   momiji/ChristmasEvent）的 `new` 生成 _Unwind_Resume（ORIG 无），真 4.4.4-13
   编译 Unwind=0 与 ORIG 一致。**待完整验证整 TU/全局切换无回归后实施**。

### 剩余结构

- EH_OR_CLEANUP 272（含已有 EH 的栈布局/细节差异长尾）
- CONST_OR_OFFSET 165、NEEDS_REVERSE 110、CODEGEN_TAIL 21

## 决定性结论（2026-08-13 晚，variant_sweep 子代理）

## 决定性结论（2026-08-13 晚，variant_sweep 子代理）

**编译器版本不是剩余函数的杠杆**：对 guild/statics/manager 做逐 TU × 未测变体
（4.4.4-13 真身 / 4.4.5-6 / 4.4.6-3 / 4.4.7-3 / 4.4.7-23 / 4.1.2-52，含匹配头目录）
全量扫测，**没有任何一个函数在任何变体下翻成 IDENTICAL**（所有 4.4.x 变体产出
完全相同的 NEAR/DIFF 分类）。ORIG .comment 组成：多数 4.4.4-13、各 1 个 4.4.6-3/
4.4.7-1、3 个 4.1.2-52。4.4.7-1 本地无（只有 -3 和 -23，两者产出一致，-O0 下 patch
level 不影响调度，-1 几乎必然也不翻）。

同时确认 c6444r 变体此前误标：/tmp/cc1plus444bin 实为 4.4.7-23，真 4.4.4-13 在
/tmp/cc1plus_444。换真身净收益仅 -1 且回退一处 AE，故保持现有路由。

## 决定性结论二（near_fix 子代理）

**36 个 NEAR 函数全部是编译器代码生成差异，无 ASM 约束下不可约**：逐函数指令级
分析，全部落在 LHS/RHS 加载顺序、纯寄存器分配（%al/%bl、fn/obj）、栈槽顺序、
栈帧大小、常量折叠/跳转目标、实参求值顺序六类。两个实证（SaveProcess 去 register
bool、AddGuildFund 反转分支）均使函数 NEAR→DIFF 退化，已回退。工作树干净，无改动。

后续子代理不应再重试这批 NEAR 函数；归零只能靠换编译器（已穷尽）或放宽 ASM 约束。
真正还能产出 IDENTICAL 的是剩余 DIFF 桶里的真实语义/结构差异。

2026-08-14 续：见 [regression_progress_2026-08-14.md](regression_progress_2026-08-14.md)
（统计入站包字段、monitor 重叠举报 connNo、dbmw dispatch errno、cozy/objdiff 辅助栈）。

## 剩余差异的真实构成（源码层，非编译器层）

1. 裸偏移寻址形态（常量/数组索引）——已对 guild/monitor/dbmw 三个 PT + DNFGuild +
   DNFPacketDecoder + dbmw DBManager 主力做成员化，仍可逐函数继续。
2. 真实语义 bug（调用实参顺序/类型、字段偏移、常量）——持续发现中。
3. 局部变量数量/声明顺序 + 求值顺序——与 Ghidra local_XX 对齐，是剩余最难的
   长尾，逐函数精确重构，每函数只能压 diff、少量翻 IDENTICAL。

## 已验证可复用的规则

- 返回类型 char/int→bool：仅当「函数体只 return 0/1 字面量 + 调用方直接 if/!fn +
  调用方非复杂函数」三条件同时满足才安全修。
- 裸指针 `*(T*)((char*)X+off)` → `X->m_field`：仅常量偏移、且头里已有对应命名成员。
- 变量偏移数组索引 → 成员数组访问：能把 `add;add;mov` 对齐成 SIB 形态。
