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

1. 按依赖序还原：Script/Token/UDPSocket → Thread/Reactor → RelayService 核心
   （startup/shutdown/makeLog/TCPUser/TCPThread/TCPAcceptThread/UDPThread/
   TCPHandlerRelay/Users/UserPools）→ App/main。
2. 逐函数对照原版反汇编，把指令数/常量压到与 4.1.2 原版一致。
3. 全部完成后全量比对并产出还原报告。

## 水位

框架层（LinuxService/ServiceInfo/Neof_*/pid）已还原完成；目标：MISSING=0，
机器码接近原版 4.1.2 水平（已知编译器构建差异已记录）。
