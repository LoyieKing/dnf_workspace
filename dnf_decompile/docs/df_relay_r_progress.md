# df_relay_r 还原进度

更新：2026-08-08

## 二进制概况

- `df_relay_r`：418 KB，32 位 ELF，**无 DWARF**（纯 Ghidra 逆向）。
- 编译器：GCC 4.1.2-52（Red Hat）——与 auction/point 的 4.4.6 不同，需独立工具链。
- 应用函数约 321 个（排除 libstdc++/libgcc 运行时）。
- 核心类：`RelayServiceApp::RelayService/TCPUser/TCPThread/TCPAcceptThread/UDPThread/
  TCPHandlerRelay/Users/UserPools`，`LinuxService`、`ServiceInfo`、`Script`、
  `ScriptData`、`Token`、`UDPSocket`、`Thread`、`Reactor`、`PortInfo`、`Handlers` 等。

## 工具链（已打通）

- 编译：`/tmp/c5r52tool/usr/bin/g++` —— **Red Hat GCC 4.1.2-52（与原版完全同版本号）**。
  - 从 Oracle OL5 latest 源下载并解包 `gcc/gcc-c++/cpp/libgcc/libstdc++/libstdc++-devel`
    的 `4.1.2-52.el5.x86_64.rpm`（`/tmp/c5r52/*.rpm`，解包脚本 `/tmp/extract_rpm.py`）。
  - glibc-2.5 头文件复用原 `/tmp/c5root/usr/include`。
  - 编译参数：`-m32 -O0 -fno-enforce-eh-specs -fno-builtin-memset -fno-builtin-strlen`。
- 链接：宿主机 `g++ -m32 -no-pie`。
- 脚本：`source/toolchain/build-relay.sh`，输出 `source/build-relay/df_relay_r`。

### 编译器差异（-52 标准 RPM 与原版自定义构建的已知不可复现项）

原版 relay 的 .comment 为 Red Hat 4.1.2-52，但其代码形态与标准 -52 RPM 有系统性差异，
属于 DNF 自建编译器（`_ZL` 内部链接符号 + cdecl 静态函数 + 不同 memset 阈值）。处理办法：

- 静态函数用 `__attribute__((regparm(0)))` + `__asm__("_ZL...")` 强制还原
  `_ZL` 符号与栈传参（`_evlog` 已按此还原，符号/调用约定与原版一致）。
- `-fno-builtin-memset`：使显式 `memset` 走 libcall（原版 ctor/save_pid 行为）；
- `-fno-builtin-strlen`：使 `strlen` 走 libcall（原版 save_pid 行为）。
- 不可复现项（记录为良性 DIFF）：30B `= {0}` 原版为对齐循环、-52 为 `rep stos`；
  256B `= {0}` 原版内联 `rep stos`、-52 调 `memset`；bool 返回值归一化形态差异；
  函数边界 `nop` 对齐差异。语义均一致。

## Ghidra

- 新建专用工程 `/tmp/relay_proj`（df_relay_r 导入+分析+反编译）。
- 277 个函数已反编译至 `/tmp/relay_decomp.c`（321 个目标中）。

## 已完成（首批，RelayUtil.cpp）

| 函数 | 指令数 O/N |
|---|---:|
| `G_ScriptData()` | 6/6 |
| `get_ms_tick()` | 43/43 |
| `NumberToString(uint,int)` | 22/22 |
| `NumberToString(ull,int)` | 29/28 |
| `make_dir(char*)` | 19/19 |
| `WriteLog(const char*)` | 87/92 |
| `MonitorAuthLog(uint)` | 98/101 |

已实现 `ScriptData`（0x38B 单例，GlobalInstance 双检锁）、`ThreadLock_linux`、`Mutex`。

## 已完成（第二批，LinuxService/ServiceInfo/Neof_* 框架层）

新增 `RelayService.h/.cpp` + `RelaySignal.cpp`，以 bridge Service.cpp 为底稿、逐函数对照
relay 反汇编重建：

- `ServiceInfo`（0x70c）+ `IService`（11 虚接口，vptr@0）+ `LinuxService`（0x734，
  vptr@0 / ServiceInfo@4 / isTerminated_@0x70d / m_dwServiceState@0x710 /
  m_command@0x714[0x1e]；**无 auction/bridge 的 m_bStop**，vtable 19 槽=11 实现+8 纯虚，
  与 `new App(0x734)` 一致）。
- LinuxService 全套：ctor/dtor、checkConfigFile/checkPIDFile/prepareStart/install/remove/
  start/main/sendBroadCastMessage/controlStop/controlPause/controlContinue/stopPending/
  setRunning/setStopped/setServiceState/processCommandLine/getInstance；main() 带 try/catch。
- Neof_* 全套（含 EUC-KR 原版日志字节、`pid/%s`（suspend）/`pid/%s.pid`（terminate）差异、
  "Signal occured: %s" 格式、英文 signal 消息、`_evlog`=puts 且符号 `_ZL6_evlogPKc`）。
- delete_pid/save_pid（save_pid 成功路径不 close，`%ld\n`，先 open 后 memset 512B）。

### 比对水位（40 个符号，助记符级）

- IDENTICAL 10；NEAR 2（main 85/85、setRunAsService 11/11）。
- 等长 DIFF（仅寄存器/布局差异）：setInfo 67/67、processCommandLine 238/238、
  start 35/35、Neof_SignalLog 87/87、prepareStart 16/16、LinuxService C1 27/27。
- 差 1~2 条（nop 对齐/寄存器分配）：G_ScriptData、get_ms_tick、make_dir、_evlog、
  setPIDFileName、setRunning、remove、getInstance、getChannelName、setCoreLimit、
  Neof_registerSignalHandler(38/40)、Neof_registerSignalHandlers(123/125)、
  Neof_SignalHandler(42/45)、D1(6/8)。
- 系统性 memset/返回形态 DIFF（语义一致）：checkConfigFile(65/33)、checkPIDFile(64/33)、
  delete_pid(69/40)、save_pid(90/65)、Neof_sendTerminateSignal(108/88)、
  Neof_sendSuspendSignal(104/82)。

类布局已用 GCC 4.1.2-52 实测核对（offsetof）：ServiceInfo=0x70c、LinuxService=0x734、
m_bRunAsService@0x70c、m_terminated@0x70d、m_dwServiceState@0x710、m_command@0x714；
vtable 19 槽（0-10 实现 + 11-18 纯虚）与原版 08070da0 完全同构。

## 下一步

1. 补齐 RelayServiceApp 核心函数体：RelayService(startup/shutdown/makeLog/setTick/
   relayToTCP/disconnectEvent)、TCPUser(onRead_/onWrite/onPacketParse/onClose/send/
   postSendPacket)、TCPThread/UDPThread/TCPAcceptThread loop、TCPHandlerRelay/
   UDPHandlerRelay/UDPHandlerS2S dispatch、Users 计数、UserPools 全局 MaxUserPoolSize。
2. 实现 TReactor/EpollReactor（0x40，relay 三参模板）+ TextOutputDevice_FILE/
   TDebugTrace/TGlobalInstance 日志系统 + createFileLog*/createLog*。
3. App（readConfig/prepareRun/run/finishRun/stop/onStop/onPause/onContinue/load_script）
   + main（version 分支 "Relay Server v2.5.6.9"）。
4. 逐函数对照原版反汇编，把指令数/常量压到与 4.1.2 原版一致；全量比对并产出报告。

## 水位

已完成：框架层（LinuxService/ServiceInfo/Neof_*/pid）、基础类（Exception/Token/Thread/
LinuxSystem/Script/ScriptRawData）、Socket（TCPSocket 0x1c/UDPSocket 0x80）、
模板（TDoubleCircularQueueBuffer 0x1900c/TMemoryPoolStatic 0x30）、RelayServiceApp
全部类布局（RelayService 0x1d8/TCPUser 0x32038/Users 0xb8/UserPools 0x90/App 0x734），
以及全部应用级函数体：TCPUser（onRead_/onWrite/onPacketParse/send/onClose）、
TCPThread/UDPThread/TCPAcceptThread loop、EpollReactor/TReactor（0x40，全局作用域）、
TCPHandlerRelay/UDPHandlerRelay/UDPHandlerS2S dispatch、RelayService
（startup/shutdown/makeLog/disconnect/relay/setAuthenticated）、日志系统
（TGlobalInstance/TDebugTrace/TextOutputDevice_FILE/createFileLog*/createLog*）、
App（readConfig/prepareRun/run/load_script）与 main。

链接改用 **-52 静态 libstdc++.a/libgcc.a**（i386 libstdc++-devel RPM），原版 std 运行时
符号大量对齐（比对符号数 984 → 2010）。

### 最终水位（2010 个原版符号，C1/C2 别名归一后）

- **应用级 MISSING = 0**（RelayServiceApp/App/Socket/Script 等全部存在）；
- IDENTICAL 142 + NEAR 282；DIFF 791（绝大多数为已记录的编译器构建差异：
  寄存器分配、30B memset 扩展、bool 返回归一化、EH 代码形态）；MISSING 518 全部为
  std/__gnu_cxx 容器内部实例化差异（deque/set/hash_map/vector 的 move/copy 机制，
  原版代码的 STL 操作序列与还原版不完全相同所致，语义等价）。
目标：MISSING=0，机器码接近原版 4.1.2 水平（已知编译器构建差异已记录）。

### 剩余可优化点（下一轮）

1. TMemoryPoolStatic ctor 用 `queue(deque&&)` 临时对象构造（原版为
   `_ZNSt5queue...C1EOS4_`），可拉回一批 deque move/swap 实例化符号；
2. Users hash_map 的 find/end/operator[] 调用形态（原版用迭代器比较，可补
   hashtable 内部实例化）；
3. EpollReactor 的 set 操作（insert/erase/begin 迭代）与 m_users 的
   _Rb_tree 内部符号；
4. main 的栈对齐 prologue 差异（原版无 `lea 0x4(%esp),%ecx` 序列）为编译器构建差异。

## 重大发现（工具链混合）

原版 relay 是**混合工具链**：.comment 含 3 个 GCC 4.1.2-52 TU + 1 个 **GCC 4.4.6-3 TU**。
4.4.6 TU 以 **-std=gnu++0x** 编译（rvalue 重载被启用）：

- **UserPool.cpp**（对象池/UserPools/queue(deque&&)）：4.4.6-3 + c++0x（`/tmp/cc1plus446bin`
  精确 4.4.6-3 cc1plus + c6root 4.4.7 头文件，`-std=gnu++0x`）；
- **RelayApp.cpp**（RelayServiceApp 全部核心：Users/TCPUser/线程/Handler/RelayService/日志/
  App/main）：同为 4.4.6-3 + c++0x；
- 其余 TU（RelayUtil/LinuxService/Script/Socket/Exception/Token/Thread）：4.1.2-52。

切换后比对大幅提升：**IDENTICAL 308 → 515**（+207），NEAR 110 → 412；
real missing 稳定在 300（全部为 std/__gnu_cxx 容器内部实例化细节 + 未引用的
libstdc++ 运行时符号如 bad_*::what/error_category）。链接同时挂 4.1.2 与 4.4.4 静态
libstdc++.a/libgcc_eh.a。

## 水位（最新）

2010 个原版符号：应用级 MISSING=0；**IDENTICAL 309 + NEAR 699（占全部符号 50.1%）**；
DIFF 590（编译器/寄存器分配差异）；**real missing 15**（其中 4 个是 TU 静态初始化符号名、
8 个是 std 容器复制实例化细节、3 个是宿主 glibc 链接差异 `__libc_csu_*/pthread_equal`）。

## 最新进展（全量 TU 迁移至 4.4.6-3）

确认 relay 除 RelayUtil/RelayService/RelaySignal 三个 TU 为 4.1.2-52 外，其余应用 TU
（Socket/Script/Thread/Token/Exception/Log/Reactor/App/UserPool）全部由
**GCC 4.4.6-3 + -std=gnu++0x** 编译。全量迁移后：

- real missing 300 → 15（-95%）；
- 链接顺序调整为 4.4.4 libstdc++/libgcc_eh 在前（_Rb_tree rebalance、__gxx_personality
  等运行时符号与 4.4 版对齐）；
- UDPHandlerS2S::dispatch（postDisconnectEvent2TCPUser/setAuthenticated 双分支）、
  ScriptRawData::get、TCPSocket::connect(const char*)、UDPSocket monitor_set
  erase(iterator)、Reactor 空闲清扫的 unlock-先于-onClose + break 语义均已补齐。
