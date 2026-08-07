# df_bridge_r（bridge 服务）还原进度

生成时间：2026-08-07（首轮全量对齐，进行中）

## 一、原始二进制特征（已实测）

- 路径：`dnf_installer/build/dnf_data/home/template/neople/bridge/df_bridge_r`
- ELF 32-bit x86 EXEC，3,379,127 字节，带完整 DWARF（`.debug_info` 5a51b 字节），未 strip。
- **31 个编译单元全部由 GNU C++ 4.4.6（Red Hat 4.4.6-3）编译**——与 channel 完全同一工具链
  （`.comment` 中的 4.1.2/4.4.4 条目来自静态链接库对象，如 community 的结论一致）。
- 源路径前缀：`/home/neople/source/ChannelOld/DNFChannelBridge`，与 channel 同框架。
- 符号规模：`nm -S` 6,350 行；项目函数（31 CU 定义）**746 个唯一符号**；其余约 3,400 个为
  静态链接库代码（TaoCrypt/yaSSL、MySQL 4.x 客户端、zlib、dtoa 等）。

## 二、与 channel 的交叉对比（TU 级）

按 CU 逐函数对比 channel/bridge 原始二进制，结果为：

| 类别 | TU | 结论 |
|---|---|---|
| 框架完全一致（函数集与尺寸相同） | Exception、LinuxService(Service)、ScriptRawData、Socket、SocketSystem、System、TCPAcceptThread、TCPHandler、Thread、ThreadLock、Token | 直接复用 channel 已逐字节对齐实现 |
| 基本一致（少量差异） | Globals、Script、ScriptData、TCPUser、UDPHandler、UDPThread、CheckThread、ChannelService | 复用 channel 实现 + 按 bridge 反编译修正 |
| bridge 专属（channel 无对应） | DNFChannelBridge（main）、ScriptThread、DBMgr、DNFFunctionLib、ChannelServer | 从 Ghidra 反编译新写 |
| 原始中为空 TU | Authenticator、PIDHelper、SignalHandler、Service、UniqueIndex、CommandLineParser、stdafx | 保持空桩（原始这些 CU 无任何代码，信号函数实际定义在 LinuxService/Service.cpp） |

## 三、类布局对比结论（DWARF 解析）

与 channel 完全一致：TCPUser、ServerGroup、PortInfo、Handlers、UserPools、TCPAcceptThread、
UDPThread、CheckThread、ChannelScript、Reactor、Protocols、Script、ScriptRawData。

需按 bridge DWARF 单独写：

- `Channel`：`ServerGroup Servers[0x100]`（channel 为 0x80）、`std::map<char*,int> gc_map`
  （channel 为 `m_ServerNameMap` + `isReadyToStart`，bridge 无 `isReadyToStart`）。
- `ChannelServer`（bridge 新增）：`int ChannelServerNumber; tChannelServer CServers[0x100];`
- `Threads`：增加 `ScriptThread* threadScript_`，成员顺序 threadTCPAccept/threadTCP/threadUDP/threadCheck/threadScript/vector。
- `TCPThread`：简化为仅 `TCPHandler* pHandler_`（channel 版有队列，bridge 无）。
- `ChannelService`：基类用 `ChannelServer` 替换 `EncyptTool`；成员 `Mode_/tick_/serviceName/m_pfnMsgExtra/m_pfnMsg`
  （各 0x400 项）；bridge 无 `EncyptTool`/`lastTickForIdleSession`。
- `ScriptData`（bridge 版）：`channel_script_version[20]/max_client/tcp_port/udp_port/ip[17]/db_ip[16]/db_name[50]/db_id[20]/db_pwd[64]/pid_filename[256]`。
- `tChannelServer`：`int id; char IP[16]; int port; int tic; TCPUser* uTCP;`

## 四、构建

脚本：`source/toolchain/build-bridge.sh`（与 channel 同一工具链 `/tmp/c6-g++-446r` + c6root，
`-m32 -O0 -std=gnu++98 -fno-enforce-eh-specs`，链接 `-no-pie -static-libgcc` + zlib）。

产物：`source/build-bridge/df_bridge_r`（已完整链接，无缺失符号）。

说明：
- 原始 bridge 静态链接了 MySQL 4.x 客户端、TaoCrypt/yaSSL、zlib。本工程提供
  `MysqlClient.cpp`（MySQL API 最小桩，保持 DBMgr 调用结构完整）与 zlib 静态库；
  TaoCrypt/yaSSL 等为静态库内部实现，不属于项目函数，不参与对齐统计。
- 部署运行请使用原始运行时（dnf_installer）。

## 五、逐函数对齐水位（首轮，2026-08-07）

方法：与 channel 同款（`nm -S` 符号 + objdump 指令归一化，归一化已修正为可处理无 `0x` 前缀的
call 目标，避免 bridge 布局不同导致的误判）。

| 指标 | 值 |
|---|---:|
| 项目函数符号精确匹配 | 746/746（100%） |
| 助记符级精确（IDENTICAL+NEAR） | **691/746（92.6%）** |
| 其中 IDENTICAL（归一化后逐指令相同） | 686 |
| DIFF（真实结构差异） | 55 |
| MISSING / EXTRA 项目符号 | 0 / 0 |

对照：community 最终水位 93.3%（457/490）；bridge 尚差 5 个函数即达同一水位。

### 仍为 DIFF 的主要函数（55 个）

- 大服务函数：`CheckThread::loop`（3886B）、`ScriptThread::loop`（2880B）、
  `ChannelService::startup`（1469B）、`onCS_UPDATE_CHANNEL_INFO`（1871B）、
  `onCS_NOTICE_CHANNEL_SERVER`（2004B）、`onCS_GET_GC_INFO`（804B）、
  `onCS_CHECK_SCRIPT_VERSION`（611B）、`TCPUser::onRead_`（1626B）、`onWrite_`（1729B）、
  `send`（441B）、`onWrite2Buffer`（717B）、`TCPAcceptThread::loop`（1208B）、
  `TCPThread::loop`（264B）、`UDPThread::loop`（383B）、`ChannelScript::ReloadScript`（492B）、
  Script 系列 9 个、TDebugTrace 系列 6 个、TCircularQueueBuffer 5 个、EpollReactor 系列、
  `TMemoryPoolStatic::startup`×2、`GlobalInstance::create`×2、`TGlobalInstance::create`×2、
  `__static_initialization`、`App::load_script`、`CMsgCell::PAD`、`UDPHandlerRelay::dispatch`、
  `TextOutputDevice_FILE::open/serialize`、`TCPAcceptThread::lockPop/PushAcceptedUser`、
  `TCPUser::isIdle` 等。

差异性质：多为 -O0 代码生成惯用法（分支方向、bool 物化 `xor+test+je`、寄存器分配、
`while(i<=N)` 的 `setle/test` 形态、WORD 索引变量等），语义均已等价；少数为
libstdc++ 4.4.7 头与原始 4.4.6 头的模板实例化差异（`_M_create_node`×2）。

## 六、下一步

1. 按反编译逐函数收敛剩余 55 个 DIFF（优先大函数：CheckThread/ScriptThread/startup/handlers/TCPUser）。
2. 达到 ≥ 93.3% 后，与 channel 同款流程产出正式验证报告。
3. 补齐 CMake `df_bridge_r` 目标（当前用独立脚本构建），纳入主构建。
