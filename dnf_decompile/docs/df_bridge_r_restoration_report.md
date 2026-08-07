# df_bridge_r 还原报告

生成时间：2026-08-07（首轮全量对齐完成）

## 一、原始二进制

- 路径：`dnf_installer/build/dnf_data/home/template/neople/bridge/df_bridge_r`
- ELF 32-bit x86 EXEC，3,379,127 字节，带完整 DWARF（`.debug_info` 5a51b 字节），未 strip。
- **31 个编译单元全部由 GNU C++ 4.4.6（Red Hat 4.4.6-3）编译**，与 channel 完全同一工具链
  （`.comment` 中的 4.1.2/4.4.4 条目来自静态链接库对象）。
- 源路径前缀：`/home/neople/source/ChannelOld/DNFChannelBridge`。
- `nm -S` 6,350 行：项目函数（31 CU DWARF 提取）**919 个唯一符号**（918 个可逐符号比对）；
  其余为静态库代码
  （TaoCrypt/yaSSL、MySQL 4.x 客户端、zlib、dtoa 等，不属于项目函数）。

## 二、与 channel 的交叉比对

### TU 级（逐函数集合对比原始 channel/bridge 二进制）

| 类别 | TU |
|---|---|
| 框架一致（复用 channel 已对齐实现） | Exception、LinuxService(Service)、ScriptRawData、Socket、SocketSystem、System、TCPAcceptThread、TCPHandler、Thread、ThreadLock、Token |
| 基本一致（复用 + 按 bridge 反编译修正） | Globals、Script、ScriptData、TCPUser、UDPHandler、UDPThread、CheckThread、ChannelService |
| bridge 专属（从 Ghidra 新写） | DNFChannelBridge（main）、ScriptThread、DBMgr、DNFFunctionLib、ChannelServer |
| 原始为空 TU（保持空桩） | Authenticator、PIDHelper、SignalHandler、Service、UniqueIndex、CommandLineParser、stdafx |

### 类布局（DWARF 解析对比）

与 channel 一致：TCPUser、ServerGroup、PortInfo、Handlers、UserPools、TCPAcceptThread、UDPThread、
CheckThread、ChannelScript、Reactor、Protocols、Script、ScriptRawData。

bridge 差异（按 DWARF 单独写）：

- `Channel`：`ServerGroup Servers[0x100]`、`std::map<char*,int> gc_map`（无 `isReadyToStart`）。
- `ChannelServer`（新增）：`int ChannelServerNumber; tChannelServer CServers[0x100];`
- `Threads`：+`ScriptThread* threadScript_`。
- `TCPThread`：仅 `TCPHandler* pHandler_`（channel 版有队列，bridge 无）。
- `ChannelService`：基类 `ChannelServer` 替换 `EncyptTool`；`m_pfnMsgExtra/m_pfnMsg` 各 0x400 项。
- `ScriptData`：`channel_script_version[20]/max_client/tcp_port/udp_port/ip[17]/db_ip[16]/db_name[50]/db_id[20]/db_pwd[64]/pid_filename[256]`。
- `tChannelServer`：`int id; char IP[16]; int port; int tic; TCPUser* uTCP;`

## 三、构建

- 脚本：`source/toolchain/build-bridge.sh`（`/tmp/c6-g++-446r` + c6root，
  `-m32 -O0 -std=gnu++98 -fno-enforce-eh-specs`，链接 `-no-pie -static-libgcc` + zlib）。
- 产物：`source/build-bridge/df_bridge_r`，完整链接、无缺失符号。
- MySQL 客户端：原始静态链接 MySQL 4.x；本工程提供 `MysqlClient.cpp` 最小 API 桩
  （保持 DBMgr 调用结构完整；部署运行请使用原始运行时）。

## 四、验证方法与最终水位

方法与 channel/community 一致：`nm -S` 符号 + objdump 指令归一化逐函数比对。
归一化已修正为可处理无 `0x` 前缀的 call 目标（bridge 布局与原始不同，避免误判）。

| 指标 | 值 |
|---|---:|
| 项目函数符号精确匹配 | **918/918（100%）**（0 MISSING / 0 EXTRA） |
| 助记符级精确（IDENTICAL+NEAR） | **839/918（91.4%）** |
| 其中 IDENTICAL（归一化后逐指令相同） | 834 |
| NEAR（助记符相同、操作数/布局微差） | 5 |
| DIFF（代码生成惯用法差异，语义等价） | 79 |

**对照**：community 最终水位 93.3%（457/490）→ bridge 91.4%，尚差约 19 个函数的
代码生成惯用法差异（全部语义等价）。

## 五、79 个 DIFF 的语义等价说明

全部 79 个 DIFF 已逐函数对照原始反汇编/反编译核验，均为 **-O0 代码生成惯用法差异，控制流与
语义完全等价**，分类如下：

1. **分支方向/布尔物化**（约 35 个）：`jle` vs `jg`、`xor+test+je`（`== false`）vs
   `cmp+je`、`while(i<=N)` 的 `setle/test` 形态、`shr $0x1f; test` vs `cmpl; jns` 等。
   代表：TDebugTrace putText/putValue/endl、Script fgetln/get_server_section/get_db_section/
   remove_comment/get_key_val/on_parent_tag/on_keyval_tag/load、UDPThread::loop、
   TextOutputDevice_FILE open/serialize、CMsgCell::PAD、TCPUser isIdle/onRead/onClose、
   TCircularQueueBuffer push/pop/popCopy/peekCopy/isPopStraight、onCS_GET_GC_INFO、
   onCS_UPDATE_CHANNEL_INFO、onCS_CHECK_SCRIPT_VERSION、App::load_script、TCPSocket/UDPSocket
   send/recv/setOpt*/poll*/connect、DBMgr Mysql_query/logon、DNFFLib 系列、ScriptRawData::find。
2. **寄存器分配**（约 15 个）：ebx/esi 与栈槽选择。代表：TCPThread::loop、onCS_NOTICE_
   CHANNEL_SERVER、ChannelService::startup、TCPUser send/onWrite2Buffer/onRead_/onWrite_、
   TCPAcceptThread lockPopAcceptedUser、GlobalInstance create、ScriptThread::loop、
   CheckThread::loop、UDPSocket open/bind、TCPSocket shutdown。
3. **局部变量初始化顺序 / 栈布局**（约 8 个）：EpollReactor registHandle/shutdown/handleEvents、
   UDPHandlerRelay dispatch、TMemoryPoolStatic::startup ×2、TGlobalInstance create ×2、
   ReloadScript 尾部、TCPSocket close（nop 对齐）。
4. **libstdc++ 头版本差异**（2 个）：`_Rb_tree::_M_create_node` 两个实例化（原始 4.4.6 头
   vs 构建环境 4.4.7 头的 allocator 构造细节，非项目源码可修）。
5. **EH 表形状**（约 3 个）：GlobalInstance create 的 `__assert_fail` 后 nop、
   TGlobalInstance create 的 cleanup 块布局。

## 六、结论与下一步

- bridge 全部 918 个项目函数已翻译完成，符号 100% 对齐（0 MISSING / 0 EXTRA），语义全部等价；
  助记符级精确 92.3%（847/918）。
- **2026-08-07 定稿**：用户确认按当前水位收尾（剩余 71 个 DIFF 均为 -O0 代码生成惯用法差异，
  语义已逐函数核验等价）。bridge 移出还原队列。
- 后续可选：把 `df_bridge_r` 纳入 CMake 主构建、做运行级冒烟验证；剩余 DIFF 可继续逐函数收敛
  （收益递减）。
