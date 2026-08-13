# DBManager.cpp get_* 类型修复记录（2026-08-13）

## 已修复的语义 bug（get_* vtable 槽位不匹配）
对照 Ghidra vtable 偏移（0x34=get_int(int&),0x38=get_uint(uint&),0x40=get_short(short&),
0x48=get_ushort(ushort&),0x50=get_byte(char&),0x58=get_ubyte(uchar&),0x2c=get_str,0x30=get_binary）：

1. QueryUpdateChannelOccNum  循环变量 int→unsigned int（setle→setbe）
2. QueryGuildBooting         get_uint→get_int(×2: a/b_side_point), get_ubyte→get_byte(winner_side)
3. QueryGuildMemberGradeByName  get_ubyte→get_uint(列2 m_id)
4. GuildSecede               get_ubyte→get_byte(grade)
5. QueryGuildSkill           get_ushort→get_ubyte(used_sp 单字节)
6. OnLoadGuildCargo          get_str→get_binary(cargo 列)
7. QueryGuildMemberProxy     get_ubyte→get_byte(×3: job/grow_type/sex, +0x22/0x23/0x26)
8. QueryGuildAllMembersProxy get_ubyte→get_byte(×3 同上；grade 0x27 保持 get_ubyte)
9. OnWriteWebGuildBoard      get_binary→get_str(×2: charac_name/memo)
10. onItemLimitEditionLoadData get_ubyte→get_byte(avatar_period_type), get_short→get_ushort(×2: cond_lev_begin/end)
11. GetCoinEventPerDay       get_int→get_uint(log_id)

## 编译器变体结论（重要）
- DBManager.cpp 当前 OPTIONS = `-B/tmp/cc1plus446bin`（4.4.6）。
- 剩余 DIFF 的形态：`mov %al,-0xd; movzbl -0xd,%eax`(bool 溢出) + `lea -0x18`(更大栈帧 0x38)。
- A/B：c5r52(4.1.2-52) 编译后栈帧变小(0x28)，且 bool 形态不同，仍不匹配。
- ORIG .comment 首项为 4.1.2-52（出现3次），但 c5r52 复测不中；需进一步定位
  4.4.4 / 4.4.6 / 4.4.7 各变体（cc1plus444bin/446bin）的精确 codegen。
- 结论：语义已修正确，剩余为 TU 级编译器 codegen，属根 Agent 工具链分流范围。

## 已验证无 bug（get_* 槽位正确，剩余纯 codegen）
QueryGuild, QueryBuddyInfo, OnLoadGuildBoard, QueryTodayGuildMember, AddBuddy,
selectCollectItems, OnLoadGuildAgit, QueryGuildNotiMessage, SaveGuildInfo,
OnLoadPeriodicMessage, QueryGuildMember, QueryGuildCreate, OnGuildJoinByListApprove 等。
