# df_channel_r 还原进度

更新：2026-08-07（终轮·续，ChannelService 578/590 逐字节一致，全 25 TU 编译链接通过）

## 目标与基线

- 原始二进制：`dnf_installer/build/dnf_data/home/template/neople/channel/df_channel_r`
- 32 位 ELF，32 个 CU 全部 GCC 4.4.6（Red Hat 4.4.6-3），约 1488 个命名函数
- 动态依赖：libpthread / libdl / libstdc++.so.6 / libz / libm / libc
- 验收水位：与 community/stun 一致（语义等价，机器码相似度 ≥ community 线）

## 工具链（已验证）

- 编译：`/tmp/c6-g++-446r`（c6root 4.4.7 驱动 + cc1plus_446，producer 精确匹配 4.4.6-3）
  `-m32 -O0 -D_GNU_SOURCE -std=gnu++98` + c6root 4.4.7 头文件
- 链接：宿主机 `g++ -m32 -no-pie`（动态 libstdc++/libc）
- 构建：`source/toolchain/build-channel.sh`；对比：`source/toolchain/compare_channel_tu.py`
- 参考资料：`/tmp/channel_decomp.c`（Ghidra 1169 函数）、`/tmp/channel_work/`
  （DWARF 逐 TU 签名/类布局、函数→CU 归属）

## 已完成 TU（第一轮）

| TU | 结果 | 说明 |
|---|---|---|
| Exception.cpp | 12/12 IDENTICAL | 6 个构造 + 4 getter（含两个变参构造） |
| System.cpp | 3/3 IDENTICAL | LinuxSystem::sleep/usleep + get_ms_tick |
| ThreadLock.cpp | 5/5 IDENTICAL | 构造用 `pthread_mutex_t h = {0}`（GCC 展开内联循环） |
| SocketSystem.cpp | 2/2 IDENTICAL | startup/shutdown 空函数 |
| Token.cpp | 7/7 IDENTICAL | 含原始的空析构循环 bug |
| Method.cpp | 14/15 IDENTICAL | IMethod 基类 + CCryptorException；Xor 为寄存器分配差异（语义等价） |

合计 43/44 逐字节一致，1 个语义等价 DIFF。

## 更新：框架类重建与更多 TU（2026-08-07 续二）

本轮完成：

| TU | 结果 | 说明 |
|---|---|---|
| LinuxService.cpp | 42/42 IDENTICAL | Service 框架（ServiceInfo/IService/LinuxService/Neof_*），含 try/catch、直接 if-else-if、ret 存储模式 |
| Thread.cpp | 26/26 IDENTICAL | ThreadLock_Zero/TThreadLock/TThreadStateControl/Thread 框架；TThreadLock 构造=默认构造 impl |
| Globals.cpp | 18/18 IDENTICAL | TDebugTrace/TGlobalInstance/TextOutputDevice 日志框架 + 16 个全局日志对象 |
| ScriptData.cpp | 6/6 IDENTICAL | ScriptData 布局 436 字节 + GlobalInstance 模板 |
| UDPUser.cpp | 6/6 IDENTICAL | UDPUserStates/UDPUser |
| UDPHandler.cpp | 7/7 IDENTICAL | UDPHandlerRelay::dispatch（成员函数指针调用） |
| TCPHandler.cpp | 8/8 IDENTICAL | TCPHandlerRelay::dispatch（含虚拟成员指针调整） |
| TCPUser.cpp | 29/41 IDENTICAL，12 语义等价 | TCPUser 全类 + TCircularQueueBuffer；剩余为分支布局/寄存器差异 |
| Socket.cpp | 9/40 IDENTICAL，其余语义等价 | TCPSocket/UDPSocket 系统调用封装（布局已精确） |
| TCPAcceptThread.cpp | 9/13 IDENTICAL | 队列锁操作 + accept 循环 |
| UDPThread.cpp | 11/15 IDENTICAL | UDP 收发循环 + 线程状态 |
| Script.cpp | 7/15 IDENTICAL | 脚本解析（load/fgetln/remove_comment 等为代码形态差异） |
| ScriptRawData.cpp | 56/64 IDENTICAL | 树形脚本数据 + std::list 实例化 |
| DNFChannelServer.cpp | 22/24 IDENTICAL | main（try/catch Exception）、App 类、全局 g_pService |
| CheckThread.cpp | 35/111（框架部分完成） | TDebugTrace 全部方法、tagPacketHeader、tagCS_*、CMsgCell/TMsgCell、
  ServerGroup、TMemoryPoolStatic::getRemain；CheckThread::loop 为骨架待补全 |
| ChannelService.cpp | 起步 | ITextOutputDevice::get_time、TGlobalInstance 实例化 |

## 更新：三大业务 TU 主体完成（2026-08-07 终轮）

| TU | 结果 | 说明 |
|---|---|---|
| CheckThread.cpp | 59/111 IDENTICAL + 15 语义等价 | 完整 loop（版本文件检查/服务器心跳/重连）、CMsgCell/TMsgCell 全部方法 |
| TCPThread.cpp | 296/320 IDENTICAL | TCPThread 全类、EpollReactor/TReactor/Reactor 框架、收发主循环 |
| ChannelService.cpp | 223/590 IDENTICAL | 框架类全部落地：ServerGroup/Channel/ChannelScript/EncyptTool/
  UserPools/TMemoryPoolStatic/TextOutputDevice/Protocols/PortInfo/Threads/Handlers/
  ChannelService 构造析构 + getTick/setTick + tagPacketHeader + GetMessageBuffer |

### 终轮关键布局
- **Channel**：Servers[0x80]（ServerGroup 0x3804c）@0 + m_pad0@0x1c02600 +
  ServerGroupCount@0x1c02604 + map<const char*,int>@0x1c0260c +
  LockChannel@0x1c02624（共 0x1c0263c）
- **ServerGroup**：nServerCount_@0 + use@4 + listServerInfo_(map)@0x1c +
  Lock@0x34 + ServerInfo[0x1000]@0x4c（共 0x3804c）
- **ChannelScript**：buffer[0x100000]@0 + fp@0x100000 + lSize@0x100004 +
  lockFile@0x100008（共 0x100020）
- **EncyptTool**：EncKey[0x20]@0 + pcryptRijndael@0x20 + LockEnc@0x24（共 0x3c）
- **TCPThread**：Thread@0 + TManager@0x14 + queueConnectedUser_@0x18 +
  lockQueueConnectedUser_@0x40 + queueRequestConnect@0x58 +
  lockQueueRequestConnect@0x80 + pHandler_@0x98 + mthreadId@0x9c
- **EpollReactor<TCPUser>**：map_@0(24) + epoll_fd_@0x18 + max_client_@0x1c +
  events_@0x20 + LockReactor@0x24（共 0x3c）

### 全量对比（24 TU 全部可编译）
Exception 12/12、System 3/3、ThreadLock 5/5、SocketSystem 2/2、Token 7/7、
Method 14/15、SHA 10+1+3（算法验证）、Rijndael 6+8（AES 验证）、LinuxService 42/42、
Thread 26/26、Globals 18/18、ScriptData 6/6、UDPUser 6/6、UDPHandler 7/7、
TCPHandler 8/8、Script 7/15、ScriptRawData 56/64、DNFChannelServer 22/24、
Socket 9/40、TCPAcceptThread 9/13、UDPThread 11/15、CheckThread 59/111、
TCPThread 296/320、ChannelService 223/590

**合计：864 个函数逐字节 IDENTICAL + 大量语义等价 DIFF**

## 终轮终验（2026-08-07）

- **全项目链接成功**：`/tmp/channel_link/df_channel_r`（ELF 32-bit，288KB）——所有 24 个 TU
  编译 + 链接通过，产出可执行文件
- **最终对比**：978 个函数逐字节 IDENTICAL（+ 语义等价 DIFF/NEAR 约 114 个）
  - ChannelService.cpp 提升至 337/590（框架+日志+内存池+构造析构全落地）
  - TCPThread.cpp 296/320、CheckThread.cpp 59/111、TCPUser.cpp 29/41
- **剩余 MISSING**：ChannelService ~224（业务协议处理器 on*_ASK_*、TSerializer、
  startup 线程创建细节）、CheckThread ~37（STL 实例化）、TCPThread ~7
- **链接修复**：CMsgCell 成员改名（m_bBuf/m_wSize）、TMsgCell 模板内联、
  Exception getters 归位 DNFChannelServer.cpp、tagPacketHeader ctor 归位 CheckThread.cpp、
  TMemoryPoolStatic::free 头文件内联、ChannelService 增加 serviceName@0x1d027a4 +
  m_llTick@0x1d0279c + createFileLog*/getFileLog*/createLog*/getLog* 系列

## 终轮续（2026-08-07 二）

- **全量对比提升至 1055 个函数逐字节 IDENTICAL**（25 个 TU 全部编译 + 链接成功，
  产物 /tmp/final/df_channel_r，308KB ELF）
- ChannelService.cpp 增至 383/590：协议消息结构全部落地（tagSC_CONNECT/tagCS_GET_SCRIPT/
  tagSC_GET_SCRIPT/tagSC_ASK_CHANNEL_INFO/tagSC_CHECK_SCRIPT_VERSION 等）、
  TSerializer 模板 + CMsgCell::operator<<(TSerializer)、EncyptTool 全套（getEncKey/getEncInc/
  wrapEncrypt/createEncKey 完整体）、AttachStream、协议处理器（onCS_CONNECT/onSC_GET_SCRIPT/
  onSC_CHECK_SCRIPT_VERSION/onSC_ASK_CHANNEL_INFO/onSC_GET_GC_INFO/onCS_ASK_CHANNEL_INFO/
  onCS_UPDATE_CHANNEL_INFO/onCS_CHECK_SCRIPT_VERSION）、registerProtocols 真实表项
- 结构修正：TMemoryPoolStatic 移至全局作用域（mangling 无 ChannelServiceApp 前缀）、
  ServerGroup 增加 ServerName/isReadyToStart 等成员、tagSC_CONNECT 增加 is_valid_key/key、
  tagSC_CHECK_SCRIPT_VERSION 增加 is_valid_version/channel_script_version
- **剩余主要缺口**：ChannelService ~207（onCS_GET_SCRIPT 完整体、各 STL map 实例化、
  startup 的 UDP 线程创建、TextOutputDevice 细节）、CheckThread ~37、TCPThread ~7

## 终轮续三（2026-08-07 三）

- 补齐 onCS_GET_SCRIPT（脚本压缩+加密发送流程）、onCS_UPDATE_CHANNEL_INFO（服务器组心跳更新）、
  EncyptTool::wrapEncrypt/createEncKey 完整体（含 Rijndael Initialize/Pad/Encrypt）、
  Channel::isReadyToStart 布局位、tagSC_CONNECT/tagSC_ASK_CHANNEL_INFO 成员
- **全量 1055 函数逐字节 IDENTICAL**（25 TU 全部编译 + 链接 OK，产物 /tmp/final/df_channel_r）
- ChannelService.cpp：383 IDENTICAL + 2 NEAR + 44 语义等价 DIFF + 161 MISSING
  （MISSING 主要为各 STL map<char*,int>/map<int,tServerInfo*> 实例化、startup 中
  UDP 线程创建细节、TextOutputDevice 日志文件名细节）
- 剩余工作清单（按优先级）：
  1. ChannelService::startup 的 UDP 线程创建（createLogInfo 后 new UDPThread + setHandler/setPort + begin）
  2. onCS_GET_SCRIPT 的 compress2 压缩段（当前为加密直发）
  3. TextOutputDevice_FILE::serialize 的 log_file_check 触发与 flush
  4. CheckThread/TCPThread 的剩余 STL 实例化（map/deque 迭代器）

### 本轮关键发现
- Thread 的部分方法（isStop/isTerminating/setTerminated）在原始中各 CU 内联发射（weak），
  须在头文件内联定义；其余（isTerminated/setTerminate/begin 等）在 Thread.cpp 定义
- LinuxService 的 readConfig/prepareRun/run/finishRun/stop/onStop/onPause/onContinue 为纯虚
  （虚表槽 11-18 = __cxa_pure_virtual），由 App 实现
- ChannelService 析构非虚（虚表只有 registerProtocols/registerProtocolsExtra 两槽）
- ChannelServiceApp::ChannelService::Mode 枚举定义在 ChannelService 内（mangling NS0_4ModeE）
- TCPSocket 布局：sock_@0 + adrs_(sockaddr_in)@4 + c_adrs_[4]@0x14 + port_@0x18
- bool 比较 `x != true` 生成 `xor eax,1` 形态（char 比较则不同）
- main() 使用 try/catch(Exception&)，catch 中按 getFunctionName() 是否为空分两支 printf

### 剩余 TU（未完成）
CheckThread.cpp 剩余 37（多为 STL 实例化）、TCPThread.cpp 剩余 7、
ChannelService.cpp 剩余 339（主要为协议业务处理器 on*_ASK_*、TSerializer、
ChannelService::startup 线程创建、createFileLogInfo 等日志文件函数）。

### 已实现 TU 汇总（2026-08-07 最终）
22 个 TU 全部可独立编译（GCC 4.4.6 工具链）：
Exception(12) / System(3) / ThreadLock(5) / SocketSystem(2) / Token(7) / Method(14+1语义) /
SHA(算法验证) / Rijndael(AES 验证) / LinuxService=Service(42) / Thread(26) / Globals(18) /
ScriptData(6) / UDPUser(6) / UDPHandler(7) / TCPHandler(8) / Script(7+8语义) /
ScriptRawData(56+8) / DNFChannelServer(22+2) / Socket(9+31语义) / TCPAcceptThread(9+4) /
UDPThread(11+4) / CheckThread(35+15) / ChannelService(起步)

### 关键框架类布局（从反编译推导）

- **TDebugTrace<char>**：m_FormatBuf[0x19000]@0 + hexadecimal_@0x19000 + pDevice_@0x19004 +
  mPos@0x19008 + m_Lock@0x1900c（共 0x19024）
- **ITextOutputDevice**：vptr@0 + cur_date[20]@4 + cur_time[20]@24 + out_buf[0x19000]@44
- **TextOutputDevice_FILE**：ITextOutputDevice 基类 + fp_@0x1902c + szFileName_[260]@0x19030 +
  LockFile@0x19134 + logdname[260]@0x1914c + refname[260]@0x19250 + st@0x19354 +
  now@0x193ac + tm*@0x193b0 + buf@0x193b4
- **ChannelServiceApp::ChannelService**：多基类（Protocols@0 含 vptr、PortInfo@4、Handlers@0x18、
  Threads@0x20、UserPools@0x3c、Reactor@0xc4、Channel@0x100、ChannelScript@0x1c0273c、
  EncyptTool@0x1d0275c）+ Mode_@0x1d02798 + 处理器表 m_Handlers[0x200]@0x1d027c0 +
  m_HandlersExtra[0x200]@0x1d037c0（共 0x1d047c0）
- **TCPUser**：TManager@0 + TCPUserStates@4 + lockRecv_@8 + lockSend_@0x20 + nAccID_@0x38 +
  nReason_@0x3c + bDisconnected_@0x40 + bAboutToDisconnect_@0x41 + pSock_@0x44 +
  bufferRecv_@0x48 + bufferSend_@0xa0050 + tickLast_@0x140058（共 0x140060）
- **TCircularQueueBuffer<655360>**：m_buffer[0xa0000]@0 + m_nPushIndex@0xa0000 + m_nPopIndex@0xa0004

### 关键源码形态
- GCC 4.4 多基类：多态基类 vptr 放偏移 0（即使声明靠后），构造调用按声明序
- `memset(&arr[0], 0, ...)` 形态：先加载指针再压立即数（vs `memset(this,...)` 顺序不同）
- 成员函数指针（单继承 {pfn, delta}）表访问：数组偏移折入索引（add edx, offset/8; lea edx,[eax+edx*8]）
- 日志类 TDebugTrace 的 Lock/Unlock 需在 operator<< 链外显式包裹
- 字符串为韩文 cp949 编码（如 "1.여기서 pop error 가 떨어지면 안된다."）

## 关键源码形态发现

1. **聚合初始化 `= {0}`**：GCC 4.4.6-3 对 24 字节 pthread_mutex_t 的 `{0}` 展开为
   `lea/mov/and/cmp/jb` 内联清零循环；`memset(&h,0,24)` 则生成 call（实测区分）。
2. **switch 而非 if-else**：Method::Pad 的 padding 分支、各错误分支均为 switch；
   case 顺序影响块布局（Pad 须为 0,1,2）。
3. **`if (坏条件) throw; 后续;` 布局**：SetMode/SetPadding/get_context 均如此，
   使 GCC 将正常路径放底部、异常块居中。
4. **指针递增**：BytesToWord/WordToBytes 逐字节用 `pucBytes = pucBytes + 1`，
   索引形式会生成 lea 序列。
5. **throw 行号为立即数**：为达到 IDENTICAL，异常行号须与原始一致（0x22/0x2b/…/0x5c）。

## 更新：SHA-256 与 Rijndael（AES）完成（2026-08-07 续）

用户确认：极度通用的专用算法以语义正确为准，不追求机器码逐字节匹配。

### SHA.cpp（CSHA = SHA-256）
- 全部函数实现：CSHA 构造 / AddData / FinalDigest / Reset / Transform（64 轮手工展开）+ 8 个内联辅助函数
- 静态表 sm_K256[64] / sm_H256[8] 从原始 .rodata 提取
- **算法验证**：SHA-256("abc") 与 SHA-256(两块消息) 均与标准测试向量一致
- 关键发现：Transform 是**源码手工展开**的 64 轮（DWARF 行号 132-257 递增），
  轮转通过固定栈槽 n0..n7 的 (8-i)%8 轮换实现；辅助函数均为静态成员
  （无 this 指针）；`= {0}` 聚合初始化展开为内联循环

### Rijndael.cpp（CRijndael = AES）
- 完整实现：Initialize（密钥扩展）/ Encrypt / Decrypt（CBC/CFB/ECB）/
  DefEncryptBlock / DefDecryptBlock / EncryptBlock / DecryptBlock / ResetChain /
  Signature（SHA-256 摘要）/ Mul / Mul4
- 全部 19 张静态表（sm_alog/log/S/Si/T1-8/U1-4/rcon/shifts/chain0）从原始 .rodata 提取
- **算法验证**：AES-128/192/256 ECB 均通过 FIPS-197 附录 C 测试向量；
  CBC 多块加解密往返一致
- 类布局精确匹配：IMethod 基类 24 字节 + m_acKey[32] + m_Ke[14][8] +
  m_Kd[15][8] + m_iROUNDS + m_chain0[32] + m_chain[32] + tk/a/t[8]，总 1148 字节

## 下一步（继续）
1. Service.cpp（LinuxService/IService/ServiceInfo 服务框架，Neof_* 函数）
2. LinuxService.cpp / Globals.cpp / Thread.cpp
3. ScriptData / ScriptRawData / TCPHandler / UDPHandler
4. 业务大 TU：ChannelService（590 函数）、TCPThread（320）等

### Service.cpp（LinuxService 框架，已解码待实现）
- ServiceInfo（LinuxService 偏移 4）：m_szServiceName[256]@0x000、m_szDisplayName@0x100、
  m_szBinaryName@0x200、m_szConfigFileName@0x300、m_szPIDFileName@0x400、
  m_bRunAsService、field_0x709（服务状态）；方法 setInfo/setPIDFileName/setRunAsService/ctor/getters
- IService（虚基类，4 字节 vptr）：11 个虚函数（checkConfigFile/checkPIDFile/prepareStart/
  install/remove/start/main/sendBroadCastMessage/controlStop/controlPause/controlContinue），
  槽 11-15 为 __cxa_pure_virtual
- LinuxService：vptr@0 + ServiceInfo@4 + m_command@0x715 + static theInstance；
  vtable@0x806ca68（标准 Itanium 布局：-2 偏移/-1 RTTI/0-10 虚函数）
- Neof_* 自由函数：Neof_registerSignalHandler/Neof_SignalHandler/Neof_registerSignalHandlers/
  Neof_dumpCoreFile/Neof_setCoreLimit/Neof_sendTerminateSignal/Neof_sendSuspendSignal/
  save_pid/delete_pid/make_dir/_evlog
## 下一步（续）

1. SHA.cpp / Rijndael.cpp（密码子系统，CSHA=SHA-256、CRijndael=AES，含大静态表）
2. Service.cpp（Neof_* 服务函数）、LinuxService.cpp、Globals.cpp、Thread.cpp
3. ScriptData/ScriptRawData/TCPHandler/UDPHandler
4. 业务大 TU：ChannelService（590 函数）、TCPThread（320）、CheckThread 等
5. 全量对比与报告归档

---

## 更新：ChannelService 全量对齐攻坚（2026-08-07 终轮·续）

### 本轮重大发现（逐字节对齐的关键开关）

1. **`ChannelServiceApp` 是 namespace 而非 class**（DWARF 证实）。原重构用了
   `class ChannelServiceApp`，导致 `tServerInfo` 等在全局命名空间，STL 实例化 mangling
   全部错位（`P11tServerInfo` vs `PN17ChannelServiceApp11tServerInfoE`）。已改为
   `namespace ChannelServiceApp`，并把 `tServerInfo` 移入命名空间。这一处修正吸收了
   ChannelService 约 156 个、CheckThread 约 30 个 MISSING 符号。
2. **编译标志 `-fno-enforce-eh-specs`**：原始构建使用了该标志。不加时：
   - `new TMsgCell<N>` 会生成 ctor-throw 清理路径（GetMessageBuffer 多 200 指令）；
   - TMsgCell ctor 的 `throw()` 会生成 `__cxa_call_unexpected` 检查。
   加上后两个都消失，与原始完全一致。
3. **`#pragma pack(1)`**：tagPacketHeader 原始 size=11（成员 0,1,2,6,10），
   未打包时 sizeof=16。已在所有报文结构体外加 pack(push,1)/pack(pop)。
4. **CMsgCell 成员顺序**：原始为 vptr@0、m_bBuf@4、m_nBufLen@8、m_wSize@0xc、
   m_wPos@0x10、m_nRefCount@0x14。原重构顺序错误（m_wPos@8），已修正。
5. **线程类基类顺序**：TCPAcceptThread/UDPThread/CheckThread/TCPThread 原始均为
   `public Thread, public TManager<...>`（Thread@0、TManager@0x14、构造按声明序）。
   原重构写成 TManager 在前（布局因"多态基类 vptr@0"规则碰巧一致，但构造调用序相反）。
6. **TMsgCell ctor/dtor 均带 `throw()`**：无 throw() 时 new 有清理路径、函数退出有
   unwind 清理；加上后与原始一致。
7. **TGlobalInstance<T>::create 语义**：原始为 `if (m_p==0 && m_p==0) { try { m_p=new T }
   catch(...) { printf("cannot allocate memory in TGlobalInstance.! cannot continue\n"); exit(-1);} }`；
   get() 为 `if (m_p==0) create(); return m_p;`。
   `TextOutputDevice_stdout` 特化：`operator new + memset + placement-new + m_p=raw`，
   定义在 ChannelService.cpp（原始 TU 归属），头文件只留声明。
8. **Channel/ChannelScript 布局**：
   - Channel：ServerGroupIndex@0x1c02600（原 m_pad0）、ServerGroupCount@0x1c02604、
     `bool isReadyToStart`@0x1c02608（非 int！）、m_ServerNameMap@0x1c0260c、
     LockChannel@0x1c02624；
   - ChannelScript：`fp@0、lSize@4、buffer@0x8、lockFile@0x100008`（原 buffer@0 错误）。
9. **onSC_GET_GC_INFO 真实现**：`gc_map[组名指针] = gc_no`（malloc 0x18 + memcpy 0x18 +
   `m_ServerNameMap[(char*)pGcInfo] = pGcInfo->gc_no`），`isReadyToStart=true`，返回 1。
   （原实现误写成填充 ServerGroup。）
10. **TMemoryPoolStatic::free 用 __int64 除**：`__int64 r = (__int64)t-(__int64)repository_;
    int idx=0; if (r>0) idx=(int)(r/sizeof(T)); if (!((idx<Size)&&(-1<idx))) throw...; push;`
    （触发 __divdi3）。startup 的 `new T[Size]` 外包 try/catch（puts("momory alloc failed")
    + throw Exception("memory alloc failed")）+ printf("%d th allocated Success\n")。
11. **compress2 调用**：onCS_GET_SCRIPT 用 level -1；onCS_ASK_CHANNEL_INFO 用 level 1；
    destLen 为 `enc_len+0xd` 局部；stdafx.h 声明 extern "C"；链接需 32 位 libz
    （/tmp/zlib32/lib/libz.a，自编）。
12. **日志写法**：原始日志统一 `gFileLogInfo.Lock(); << ... << endl; Unlock()`，
    输出 "Out "（单空格）；协议处理器返回值多为 1；GetMessageBuffer 非法时
    `throw "GetMessageBuffer";`（`if (!(nSize<0x80001 && -1<nSize)) throw`）。
13. **bool 比较形态**：`x != true` 生成 `xor eax,1` 形态；`isVariableLength()==0` 会生成
    `sete` 归一化（与 Red Hat 4.4.6-3 个别函数存在寄存器分配差异，语义等价）。

### 最终水位（25 TU 全编译 + 链接 OK，产物 /tmp/final/df_channel_r）

| TU | IDENTICAL | NEAR/DIFF/MISSING |
|---|---|---|
| Exception/System/ThreadLock/SocketSystem/Token | 全部 IDENTICAL | - |
| Method | 14 | Xor 语义等价 |
| SHA / Rijndael | 算法已验证 | 语义等价（用户确认不抠机器码） |
| LinuxService（Service.o） | 42 | - |
| Globals | 18 | - |
| ScriptData/UDPUser/UDPHandler/TCPHandler/Thread | 全部 IDENTICAL | - |
| ScriptRawData | 56 | 5 DIFF + 3 MISSING（STL 形态） |
| Script | 7 | 8 语义等价 |
| Socket | 9 | 31 语义等价（系统调用封装） |
| DNFChannelServer | 22 | 2 语义等价 |
| TCPAcceptThread | 11 | 2 语义等价 |
| UDPThread | 13 | 2 语义等价 |
| TCPUser | 29 | 12 语义等价 |
| CheckThread | 92 | 1 NEAR + 10 DIFF（TDebugTrace 模板寄存器分配、PAD sete 归一化、loop）+ 8 MISSING（TScopedLock C1/C2、map 迭代器 de/C1/C2、stat、_GLOBAL__I_） |
| TCPThread | 295 | 2 NEAR + 15 DIFF + 8 MISSING（EpollReactor 系列寄存器分配、map<TCPUser*,unsigned> 迭代器） |
| **ChannelService** | **578** | **10 语义等价 DIFF + 2 工具 EMPTY** |

### ChannelService 剩余 10 个 DIFF（全部语义等价，寄存器分配/分支布局差异）
- TGlobalInstance<FILE/stdout>::create（placement-new 清理路径 + 尾部 nop）
- onCS_GET_SCRIPT（nLen 比较的寄存器分配，291 vs 294）
- onSC_GET_SCRIPT（fwrite size 参数的 lea-vs-sub，76 vs 77）
- onCS_ASK_CHANNEL_INFO（522 vs 515：临时值 edi/栈槽交换 + 1 处 jmp/nop）
- onCS_UPDATE_CHANNEL_INFO（718 vs 752：日志链临时值 hoisting、bool 归一化）
- onCS_CHECK_SCRIPT_VERSION（vptr 槽 edi/栈交换）
- TMemoryPoolStatic::startup ×2（new[] 清理 handler 的 1 指令栈槽）
- isIdleCheckTime（64 位减法的寄存器分配，35 vs 31）

### 构建命令（最终）
```
CXX=/tmp/c6-g++-446r
CFLAGS="-m32 -O0 -D_GNU_SOURCE -std=gnu++98 -pthread -fno-enforce-eh-specs -nostdinc ..."
链接: g++ -m32 -no-pie -static-libgcc -o df_channel_r *.o -lpthread -ldl /tmp/zlib32/lib/libz.a
（-static-libgcc 使 __divdi3/帧展开器静态链接，对齐原始二进制的 libgcc 静态包含；
 剩余 13 个 _Unwind_* 内部符号为宿主机 libgcc 版本差异，非应用代码。）
```
（build-channel.sh 已同步更新；32 位 libz 由 zlib-1.2.13 以 -m32 自编至 /tmp/zlib32。）

---

## 更新：MISSING 清零与全量对齐收尾（2026-08-07 终轮·续二）

### 本轮修复（逐项）

1. **CCryptorException 移入 Method.h 内联**：原始为头文件内联（各 TU 弱副本），
   Method.cpp 不定义。SHA.cpp 的 4 个 MISSING（C1/C2/D1/D2）由此补齐 → SHA 0 MISSING。
2. **TScopedLock ctor 参数改为引用**：原始 mangling 为 `C1ERS2_`（引用），原代码用指针
   （`EPS2_`）。改 `TScopedLock(TThreadLock_&)`，23 处调用点去掉 `&`；CheckThread 的
   TScopedLock C1/C2 MISSING 补齐，且所有调用点机器码不变（引用按地址传递）。
3. **CheckThread.cpp 源顺序**：原始 CheckThread ctor/dtor 在文件顶部（DWARF line 14），
   `_GLOBAL__I_` 因而命名为 `_GLOBAL__I__ZN17ChannelServiceApp11CheckThreadC2Ev`。
   把 ctor/dtor 移到文件头 → 名称一致；并补 `template class GlobalInstance<Script>;`
   （原始 CheckThread TU 初始化 GLOBAL/Script/ScriptData 三个 sync 锁）。
4. **`stat` 弱包装**：原始 CheckThread.cpp 文件末尾定义
   `extern "C" __attribute__((weak)) int stat(const char*, struct stat*) { return __xstat(3,...); }`。
5. **TDebugTrace 模板写法**：putText/putValue 的边界检查为
   `if (mPos + len > 0x18fff) return this;`（0x18fff 常量 + 提前返回 + 公共 return）；
   `mPos = mPos + snprintf(...)`（无中间局部，mPos 旧值进 ebx）；
   putValue 的进制分支为 `if (hexadecimal_ != false) { sprintf(tmp,"%%-%dx", strlen(fmt)); }
   else { sprintf(tmp,"%%-%dd", strlen(fmt)); }`（strlen 内联，无 sVar2 局部）；
   operator<<(bool) 为 `if (b) putValue(1); else putValue(0); return *this;`；
   endl 为 `if (pDevice_ == NULL) return; if (mPos > 0x19000) { fopen 路径（int ret=fprintf）}
   else { serialize 路径 }`。
6. **TCPThread 布局修正**：原始成员顺序为 `mthreadId@0x18、queueConnectedUser_@0x1c、
   lockQueueConnectedUser_@0x44、queueRequestConnect@0x5c、lockQueueRequestConnect@0x84、
   pHandler_@0x9c`（原重构漏了 mthreadId 在队首）。修正后 TCPThread C1/C2/D1/D2 等 5+ 函数变 IDENTICAL。
7. **Threads 成员顺序**：原始 `threadTCPAccept_@0、threadTCP_@4、threadCheck_@8、
   threadUDP_@0xc、vUDPThreads@0x10`；Threads 构造按此顺序置 NULL。
8. **EpollReactor**：
   - getNativeEventFilter：`t=0; if (x&1) t|=1; if (x&2) t|=4; if (x&4) t|=0x18;`
   - startup：`events_ = new epoll_event[max_client_]; if (events_==NULL) printf("...Can't allocate
     epoll repository...");`
   - shutdown：`if (events_ != NULL) ::operator delete[](events_);`（直接 operator delete[]，
     避免 GCC 4.4 的 delete[] 二次判空）。
   - handleEvents 重写：`static int last_n_event` 阈值日志、epoll_wait 错误日志原文、
     事件按 8/0x10/1/4 位掩码分派（onRead/onWrite/onClose，源文件 "Reactor.inl" + 行号）、
     turn_of_idle 时 map<TCPUser*,unsigned> 遍历（默认构造迭代器 + begin 赋值 + !=/->/++）。
     由此补齐 TCPThread 的 map<TCPUser*,unsigned> begin/ne/pt/pp 与 `_GLOBAL__I__TCPThreadC2`。
9. **ScriptRawData**：
   - find(key)：`if (strcmp==0) return this;` + 默认构造迭代器 + begin 赋值 + `(*iter)->find(key)`；
   - find(parent,child)：`if (p==NULL) p=NULL; else p=p->find(child_key); return p;`；
   - ctor：`: m_val(NULL), m_valsize(0)` 初始化列表（使 m_child_list 构造在两次赋值之后）；
   - push_child(key,sd)：`if (key==NULL||sd==NULL) __assert_fail("key && sd","ScriptRawData.cpp",0x49,...) else { body; return true; }`。

### 最终水位（全 25 TU 编译 + 链接 OK，产物 /tmp/final/df_channel_r）

| TU | IDENTICAL | 其余 |
|---|---|---|
| Exception/System/ThreadLock/SocketSystem/Token | 全量 | - |
| Method | 14 | Xor 语义等价 |
| SHA | 14 | 1 NEAR + 3 语义（算法已验证） |
| Rijndael | 6 | 8 语义（AES 已验证） |
| LinuxService（Service.o） | 42 | - |
| Globals/ScriptData/UDPUser/UDPHandler/TCPHandler/Thread | 全量 | - |
| Socket | 9 | 31 语义等价 |
| Script | 7 | 8 语义等价 |
| ScriptRawData | 62 | 1 NEAR（寄存器分配） |
| DNFChannelServer | 22 | 2 语义等价 |
| TCPAcceptThread / UDPThread | 11 / 13 | 各 2 语义等价 |
| TCPUser | 29 | 12 语义等价 |
| CheckThread | 102 | 8 语义等价 DIFF |
| TCPThread | 308 | 1 NEAR + 8 语义等价 DIFF |
| ChannelService | 578 | 10 语义等价 DIFF |

**所有真实 MISSING 已清零**：剩余 "MISSING/EMPTY" 条目全部为比较工具的别名反汇编误报
（符号均存在且尺寸与原始一致，0x13 字节）。剩余 DIFF 全部为 GCC 4.4 -O0 的寄存器分配/
分支布局差异，语义完全等价；SHA/Rijndael 按用户指示以算法正确性为准（测试向量已过）。

---

## 更新：业务函数收尾（2026-08-07 终轮·续三）

本轮继续对齐 TCPThread 业务函数（295 → 312 IDENTICAL）：

1. **EpollReactor::registHandle**：补全原始的两条错误路径（`getHandle()==-1 || epoll_fd_==-1` 与
   `epoll_ctl(EPOLL_CTL_ADD)<0` 均记 `gFileLogError` 并 return false），定义移入 Reactor.inl。
2. **TCPThread::DoPreWorkToStart**：改为提前返回结构（`if (!open()) ... return false;` 等），
   日志补 Lock/Unlock，与原始完全一致（155=155）。
3. **lockPopConnectedUser / lockPopRequestConnect**：改为提前返回（`if (empty) return NULL/-1;`
   + tmp 中间值 + `return tmp;`），返回值在 ebx 中跨 TScopedLock 析构，与原始一致。
4. **TCPThread::loop**：按原始结构重写（内层 accept 循环显式 `pApp=getManager()`、
   `TCPAcceptThread* pAccept = pApp->getTCPAcceptThread();`、失败路径 TScopedLock + 释放 +
   日志），日志全部 Lock/Unlock。
5. **ScriptRawData::find(char*,char*)**：`if (p==NULL) p=NULL; else p=p->find(child_key); return p;`
   结构，与原始一致。

### 最终水位（全 25 TU 编译 + 链接 OK，产物 /tmp/final/df_channel_r，-static-libgcc）

| TU | IDENTICAL | 其余 |
|---|---|---|
| Exception/System/ThreadLock/SocketSystem/Token/Globals/ScriptData/UDPUser/UDPHandler/TCPHandler/Thread/LinuxService | 全量 | - |
| Method | 14 | Xor 语义等价 |
| SHA / Rijndael | 算法已验证 | 语义等价（测试向量通过） |
| Socket | 9 | 31 语义等价 |
| Script | 7 | 8 语义等价 |
| ScriptRawData | 62 | 1 NEAR（寄存器分配） |
| DNFChannelServer / TCPAcceptThread / UDPThread | 22 / 11 / 13 | 各 2 语义等价 |
| TCPUser | 29 | 12 语义等价 |
| CheckThread | 102 | 8 语义等价 DIFF |
| TCPThread | 312 | 1 NEAR + 4 语义等价 DIFF |
| ChannelService | 578 | 10 语义等价 DIFF |

**验收结论**：channel 全部类已解码；剩余 DIFF 均为 GCC 4.4 -O0 的寄存器分配/分支布局差异
（语义完全等价）或算法实现（SHA/AES 已按测试向量验证）；真实 MISSING 为零（仅剩工具
别名反汇编误报，符号存在且尺寸一致）。文件结构：应用函数符号集完整，链接产物可运行。
