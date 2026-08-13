# monitor 其余包（第四轮）执行报告

## 目标过滤

- 数据源：`function_reports/_triage/v2_triage.tsv`
- 服务：`monitor`
- 排除 `src_file` 为 `DNFPacketTranslater.cpp`（PT）
- 排除 netcore 核心包 TU：`TcpNetSystem.cpp`、`Peer.cpp`、`DNFTcpSocket.cpp`
- 结果：129 个函数。本轮无 `bucket=CALL_DIFF`；优先处理
  `CODEGEN_TAIL` 与 `EH_OR_CLEANUP`。

## 闭环工具

- `MON_SCRATCH_VARIANT=c6446r bash source/toolchain/monitor_scratch.sh /tmp/<scratch> <tu...>`
- `MONITOR_TU_WRAPPER=.../dnf_c6446r_gxx.sh bash source/toolchain/monitor_scratch_build.sh /tmp/<scratch> <TU>.cpp '<extra>'`
- `python3 source/toolchain/gen_function_md.py --services monitor --function <mangled> --new-bin <scratch>/df_monitor_r --check-only`

## 改动文件

仅修改 `source/toolchain/cmake/dnf_monitor_cxx.sh`；未改任何 Monitor 源码、共享头、
`build/` 或 `function_reports/`。

变更内容：

- 新增 `C6446R` wrapper 变量。
- 以下 TU 改为 c6446r（4.4.7 驱动 + 4.4.6 cc1plus）：
  `DNFApplication`、`DNFMonitorServerMain`、`DNFServerHandler`、
  `DNFSignalTranslator`、`DNFTcpHandler`、`DNFTableBase`、
  `DNFThreadInterface`、`TaskScheduler`。
- `EventActionManager` 改为 c6446r 且追加 `-fno-exceptions`，
  消除 `new` 路径上的异常清理块并恢复 ORIG 形态。

## FIXED（29）

| mangled | 改前 | 改后 | src_file | bucket |
|---|---|---|---|---|
| `_Z14signal_handleri` | NEAR | IDENTICAL | DNFSignalTranslator.cpp | CODEGEN_TAIL |
| `_ZN10CTableBase19Load_Txt_Table_DataEPKci` | NEAR | IDENTICAL_AE | DNFTableBase.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandler10ResetEpollEi` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandler11GetEventPtrEi` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandler12IsSetInEventEi` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandler12WaitForEventEv` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandler13IsSetErrEventEi` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandler13IsSetOutEventEi` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandler7SetPeerEPvib` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandlerD1Ev` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN11CTcpHandlerD2Ev` | NEAR | IDENTICAL | DNFTcpHandler.cpp | CODEGEN_TAIL |
| `_ZN12CApplication4FreeEv` | NEAR | IDENTICAL_AE | DNFApplication.cpp | CODEGEN_TAIL |
| `_ZN12CApplication4InitEiPPc` | NEAR | IDENTICAL_AE | DNFApplication.cpp | CODEGEN_TAIL |
| `_ZN12CApplication7ProcessEv` | NEAR | IDENTICAL_AE | DNFApplication.cpp | CODEGEN_TAIL |
| `_ZN14CServerHandler16RegistGameServerEP12stServerInfo` | NEAR | IDENTICAL | DNFServerHandler.cpp | CODEGEN_TAIL |
| `_ZN14CServerHandlerD1Ev` | NEAR | IDENTICAL | DNFServerHandler.cpp | CODEGEN_TAIL |
| `_ZN14CServerHandlerD2Ev` | NEAR | IDENTICAL | DNFServerHandler.cpp | CODEGEN_TAIL |
| `_ZN14CTaskScheduler10CTaskProxy7DestroyEv` | NEAR | IDENTICAL | TaskScheduler.h | CODEGEN_TAIL |
| `_ZN14CTaskScheduler10CTaskProxy8DoExcuteEv` | NEAR | IDENTICAL | TaskScheduler.h | CODEGEN_TAIL |
| `_ZN16CBaseEventAction10OnEndEventEv` | NEAR | IDENTICAL | EventActionManager.cpp | CODEGEN_TAIL |
| `_ZN16CBaseEventAction12OnStartEventER10EventParam` | NEAR | IDENTICAL | EventActionManager.cpp | CODEGEN_TAIL |
| `_ZN16CThreadInterface14dispatch_proxyEPv` | NEAR | IDENTICAL | DNFThreadInterface.cpp | CODEGEN_TAIL |
| `_ZN17CSignalTranslator4initEP12CApplication` | NEAR | IDENTICAL_AE | DNFSignalTranslator.cpp | CODEGEN_TAIL |
| `_ZN17CSignalTranslator5clearEv` | NEAR | IDENTICAL | DNFSignalTranslator.cpp | CODEGEN_TAIL |
| `_ZN19CEventActionManager4initEv` | DIFF | IDENTICAL | EventActionManager.cpp | EH_OR_CLEANUP |
| `_ZN19CEventActionManager7destroyEv` | NEAR | IDENTICAL | EventActionManager.cpp | CODEGEN_TAIL |
| `_ZN8CAppBase5ClearEv` | NEAR | IDENTICAL | DNFApplication.cpp | CODEGEN_TAIL |
| `_ZN8CAppBase6CreateEiPPc` | NEAR | IDENTICAL | DNFApplication.cpp | CODEGEN_TAIL |
| `main` | NEAR | IDENTICAL | DNFMonitorServerMain.cpp | CODEGEN_TAIL |

## REMAIN（100）

剩余 bucket 分布：

- `EH_OR_CLEANUP`：16
- `CODEGEN_TAIL`：14
- `NEEDS_REVERSE`：15
- `CONST_OR_OFFSET`：55

严格复检口径仍为 `DIFF 93`、`NEAR 7`。

主要未解决类型：

- `EH_OR_CLEANUP` 多为 `new` 表达式生成的异常清理块；对
  `DNFAppStartInit`、`DNFAppStopInit`、`DNFPacketDecoder`、
  `DNFNetworkThread`、`DNFTickHandler` 等含 try/catch 的 TU，直接
  `-fno-exceptions` 会编译失败，不能整 TU 应用。
- `Arad_MomijiEvent` 与 `OnTimeEventManager` 的 `-fno-exceptions` 虽能
  归零部分函数，但会同时回归构造函数/其它任务函数，故未集成。
- 大量 `CONST_OR_OFFSET` / `NEEDS_REVERSE` 为字段偏移、大函数反编译差异
  与代码生成尾音，本轮仅做编译分派/形态定位，未做共享头或 asm 改动。

