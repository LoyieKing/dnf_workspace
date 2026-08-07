# 主 agent 组逐函数复核报告（BuddyManager / ConfigFileReader / SessionManager / global / main）

复核日期：2026-08-07（全量比对后第二轮人工复核）

方法：对清单内每个函数，对照 Ghidra 反编译（/tmp/divergence/perfile/）与 objdump 原始/重建指令，判定真实语义差异。编译器版本（gcc 4.4.7 vs 原始 4.4.x/4.1.2）造成的寄存器分配、指令序、地址等纯代码生成差异不计入 MISALIGN。

## 摘要

| 文件 | 复核数 | ALIGNED | MISALIGN | 修复 |
|---|---:|---:|---:|---|
| BuddyManager.cpp | 6 | 6 | 0 | — |
| ConfigFileReader.cpp | 7 | 6 | 1 | 1 |
| SessionManager.cpp（含 ISessionManager/CEpoll/CSessionProxy/PacketDispatcher 构造） | 13 | 12 | 1 | 1 |
| global.cpp（packet_proc ×8 + get_packet_table + sleep） | 10 | 10 | 0 | — |
| main.cpp（main + command） | 2 | 2 | 0 | — |

## 逐函数明细

### BuddyManager.cpp（6/6 ALIGNED）

- `CBuddyManager::CBuddyManager()` / 复制构造 / `add_buddy` / `find_buddy` / `get_size` / `del_buddy`：Ghidra 反编译与源码语义一致（vector 构造/复制、push_back、find_if + erase、返回 found）。`del_buddy` 的 DIFF 仅为 bool 变量存寄存器（原始）vs 栈变量（我们）的代码生成差异，控制流与 erase 调用完全一致。

### ConfigFileReader.cpp（6 ALIGNED，1 MISALIGN 已修复）

- `CheckCommand` / `GetLine` / `Parse` / `ReadConfigFile` / `add_tag` / `get_value`：语义一致（0x3fe 循环、1024 字节清零、strtok "="、strcmp 比较、make_pair 插入、警告打印、EOF 处理、返回值）。
- **MISALIGN `Trim`**：原始循环条件含 `-1 < param_1[i]`（signed char 非负检查，汇编为 `test %al,%al; js` 终止）；我们原实现只有 `str[i] < '!'`。对 EUC-KR 韩文配置值（字节 ≥ 0x80），原始会停止跳过并把韩文字节保留在结果中，我们则会当作空白跳过，导致配置值被截断。
  - 修复：前后两个循环条件均补 `str[i] >= 0`（[ConfigFileReader.cpp](/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Community/src/ConfigFileReader.cpp)）。

### SessionManager.cpp 组（12 ALIGNED，1 MISALIGN 已修复）

- `CSessionManager` 构造：成员构造顺序（ISessionManager → CSessionProxy → map → packetDispatcher）、`pSessionManager = this`、注册循环（`i >= get_packet_table_size()` break、packet_id & 0xffff）均与反编译一致。
- `RegisterSession` / `UnregisterSession` / `SendPacketToConnectingSession` / `GetPacketDispatcher` / 析构（packetDispatcher → map → CSessionProxy 顺序）语义一致；DIFF 来自 `get_packet_table()` 双调用与枚举比较的代码生成。
- `ISessionManager` 构造（vtable 置 `__cxa_pure_virtual`）、`CPacketDispatcher` 构造/析构（map<unsigned short, handler> 构造/析构）、thunk（this-4）均一致。
- **MISALIGN `CEpoll::CEpoll()`**：原始构造显式清零 `epollEvents`(off 4) 和 `epfd`(off 8)，且**不初始化** `eventCount`(off 0xc)；我们此前没有任何构造函数，epollEvents/epfd 为未初始化垃圾。
  - 修复：在 [Epoll.h](/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/Community/src/Epoll.h) 补默认构造 `CEpoll() : epollEvents(NULL), epfd(0) {}`（与反编译逐成员一致）。
- `CSessionProxy` 构造：隐式生成，调用基类 CEpoll 构造后覆盖 vtable，与反编译一致。

### global.cpp（10/10 ALIGNED）

- `packet_proc::OnLogin`：enter_user 参数（m_id、STGameUserInfo@0xe、buddyCount@0x3e、buddies@0x42）、LOGIN 日志字段（server_id 为 char、channel_no 为 byte、charac_no@0x18、buddy_n_user_id_what@0x1c）与反编译逐项一致；返回值 0/0x2a 一致。
- `OnLogout`：charac_no 校验（user_info+10 == packet+0xe）、eLoginout_Logout(1)、leave_user、0/0x46 一致。
- `OnReqBuddyList` / `OnReqRemoveBuddy`：一致。
- `OnReqAddBuddy` / `OnResAddBuddy`：find_user、find_buddy、0x12/3/0x15/4 错误码、0x20 上限、req/res_add_buddy 调用位置与顺序均与反编译一致（此前误报的 notice_add_buddy_fail 多调用为 Ghidra 反编译噪声，实际控制流一致）。
- `OnBuddyChatMsg` / `OnBuddyChatMsgHyperLink`：find_user 两次、buddyUser==NULL 时 send_other_channel_chat_result(ENUM_MONITOR_ERROR_ONE)，否则 buddyUser->send_other_channel_chat(packet, user)，与反编译一致。
- `get_packet_table`（返回 g_packet_table）、`get_packet_table_size`（8）、`global_function::sleep`（usleep(ms*1000)）一致。

### main.cpp（2/2 ALIGNED）

- `command`：nofork/start/stop 三分支、check_pidfile、Daemon、WritePID、SendShutdownSignal、返回值 0/1 与反编译一致。
- `main`：8 个 banner 输出、cfg add_tag×3、argc==3、255 字节按地址对齐清 0、sprintf cfg 路径、ReadConfigFile、command==1 时 CCoreDump/CSessionManager/CreateEvents(100)/atoi/TryListen、主循环（time(NULL)、WaitForSessionEvent(10)、sleep(1)）、pid 删除、try/catch（cout 输出、success 置位）、返回值与反编译一致（DIFF 仅为编译器对 bool 冗余赋值/landing pad 的生成差异）。

## 结论

本组 38 个真实项目函数中，2 处真实语义差异（`Trim` 韩文字节处理、`CEpoll` 构造成员未清零），均已修复并记录。其余函数语义一致，剩余 DIFF/NEAR 全部为编译器版本差异。
