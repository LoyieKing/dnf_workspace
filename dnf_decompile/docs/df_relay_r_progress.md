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

- 编译：`/tmp/c5root/usr/bin/g++`（Red Hat GCC 4.1.2-55，与原版 -52 同族）
  `-m32 -O0` + c5root 4.1.2 头文件。
- 链接：宿主机 `g++ -m32 -no-pie`。
- 脚本：`source/toolchain/build-relay.sh`，输出 `source/build-relay/df_relay_r`。

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

## 下一步

1. 补齐 `LinuxService`/`ServiceInfo`（save_pid/delete_pid/processCommandLine/main）。
2. 按依赖序还原：Script/Token/UDPSocket → Thread/Reactor → RelayService 核心
   （startup/shutdown/makeLog/TCPUser/TCPThread/TCPAcceptThread/UDPThread/
   TCPHandlerRelay/Users/UserPools）→ App/main。
3. 逐函数对照原版反汇编，把指令数/常量压到与 4.1.2 原版一致。
4. 全部完成后全量比对并产出还原报告。

## 水位

当前为起步阶段（首批工具函数）；目标：MISSING=0，机器码接近原版 4.1.2 水平。
