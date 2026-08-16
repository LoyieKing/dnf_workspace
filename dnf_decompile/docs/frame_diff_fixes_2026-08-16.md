# 栈槽/帧尺寸差异修复记录（2026-08-16）

针对用户质疑"帧差/栈槽是语义问题而非编译器问题"，逐函数核对 ORIG Ghidra
反编译与 OURS 源码，修复帧差并归类。

## 已修复（真实源码结构差异，帧差大幅缩小）

| 函数 | 帧差变化 | 根因 | 修复 |
|---|---|---|---|
| `CVillageAttackedManager::SendCharacRank` | 0x2090→0x1090（ORIG 0x119c） | `char sql[0x1001]` 与 `pkt.m_sql` 各自独立占栈；ORIG 共享同一缓冲 | sql 改为 `pkt.m_sql` 别名，提前构造 pkt |
| `CPacketTranslater::OnDBLoadRequestGuildBoardOpen` | 0x2730→0x2dc0（ORIG 0x2db0） | 两个不重叠作用域的 reply 大对象被 c6446r 复用为 1 槽；ORIG 各 0x688 独立 | 拆成 reply/replyR 两个函数级变量 |
| `OnNoticeCharLiveOnTenMin` | 0xa0→0x90（ORIG 0x70） | 缓存 userMgr/memberMgr/handler/live 4 局部；ORIG 直接 m_pclApp+0x10/+0x2d0/+0xa0 内联 | 全部内联 |
| `CVillageAttackedManager::InsertTimer` | 0x3c→0x1c（ORIG 0x14） | t1–t5 指针局部；ORIG 直接 `AddTask(new ...)` | 内联 new |
| `CPacketTranslater::OnLogout` | 0x18c→0x17c（ORIG 0x16c） | 缓存 userMgr/memberMgr/stats 局部；ORIG 内联 | 内联（保留 logout 包局部） |
| `CPacketTranslater::OnMemberEnterReply` | 0xec→0xdc（ORIG 0xcc） | 缓存 userMgr/memberMgr 局部 | 内联 |

修复后函数仍为 DIFF（其余寄存器分配/分支方向/CSE/跳转偏移形态），水位不变。

## 帧差根因分类（139 个有帧差的函数）

### A. 源码结构差异（可修，已修 6 个代表）
- OURS 缓存局部（userMgr/memberMgr/handler/stats）而 ORIG 内联成员访问
- 不同作用域同名大对象被编译器复用（ORIG 独立槽）→ 拆独立变量
- 大缓冲（sql）与包成员未共享栈 → 别名共享
- 指针局部（t1–t5）而 ORIG 直接内联表达式

### B. 编译器固有行为（源码无法复刻）
- bool 的寄存器 vs 栈分配（如 CServerHandler::Process 的 doHb 用 dl vs 栈字节）
- varargs（set_query）栈参数区大小差异
- 异常消息临时 std::string 栈槽（GetFrameCountInfo 等）
- ORIG 编译器冗余帧（SendRequestRevengeDungeon：仅 2 赋值，ORIG 帧 0x28 vs OURS 0x4）
- CMyFileLog 独立槽数量差异（GuildSecede 等，ORIG 12+ 槽 vs OURS 复用）

### C. 涉及共享接口的结构差异（需谨慎）
- `OnLogout` 类函数中 vector vs 固定数组（经核实 ORIG findBuddyRegister 也用 vector，
  local_134[32] 为 charNos，两边一致；非接口差异）

## 当前状态

monitor/dbmw 水位不变（156/133）；帧差最大的 2 个（SendCharacRank 0xef4、
OnDBLoadRequestGuildBoardOpen 0x680）已修复至 0x10 级。剩余帧差函数多为 B 类
（编译器行为）或 A 类中帧差 ≤0x30 的小项（monitor 3 个可修，各 0x10）。
