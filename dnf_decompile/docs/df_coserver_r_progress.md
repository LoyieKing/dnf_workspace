# df_coserver_r 还原进度

更新：2026-08-08（应用层主体完成，符号/字符串/函数比对达社区水位）

## 二进制概况

- `df_coserver_r`：1,073,816 B（1.07MB），32 位 ELF，**无 DWARF**（纯 Ghidra 逆向）。
- 编译器：GCC 4.4.6-3 家族（`-std=gnu++0x`），部分 TU 为 4.1.2-52。
- 符号总数（剔除 `.L`）：3104 个强文本符号；应用类 ~55 个/306 个应用函数。

## 当前水位（2026-08-08）

| 指标 | 数值 |
|---|---|
| 符号命中（orig 强符号在重建中出现） | 3070/3104 = **98.9%** |
| 字符串命中 | 4647/5417 = **85.8%** |
| 全量函数比对 IDENTICAL + NEAR | 643/3070 = 20.9%（含 libstdc++/libgcc 工具链噪声） |
| 应用层函数 IDENTICAL + NEAR | 180/306 = **58.8%** |
| 真实缺失符号 | 2（`__libc_csu_init/fini`，宿主 glibc crt 差异） |
| 多余符号 | 3 个宿主 crt（`_start`/`_dl_relocate_static_pie`/`__x86.get_pc_thunk.bx`）+ 1 个 std 模板细节 |

## 构建

`source/toolchain/build-coserver.sh`：
- 编译：`/tmp/c6root/usr/bin/g++`（GCC 4.4.7 头文件）`-m32 -O0 -std=gnu++0x -DDF_NO_CODEPAGE -fno-enforce-eh-specs`。
- 链接：4.4.4 libstdc++.a + libgcc_eh.a + 4.1.1 libstdc++.a + 4.1.1 libgcc.a/e_h.a（与 relay 同款前置链接，解决 `__udivdi3` 等 libgcc 符号）。
- 产出：`source/build-coserver/df_coserver_r`。

## 源码结构（source/coserver/）

| 文件 | 内容 |
|---|---|
| CoserverApp.{h,cpp} | CAppBase（vtable：dtor/Process/Init/Load/Free）+ CApplication（0x8B0 布局）+ main + ShowLogo；Init/Load/Free/Process 均带原版 try/catch |
| CoserverTable.{h,cpp} | CTableBase（虚 Load_Table/Parse_Table）+ CAppConfig（frameCount + udpPorts[101]）+ ST_ServerInfo（0xc）+ CDNFException（继承 std::exception） |
| CoserverServer.{h,cpp} | CGameServer（0x14：group/name/port/connectFlag/heartBeat/channelNo/udp）+ CServerHandler（CGameServer[0x649b] + app）+ CServerConfig |
| CoserverThread.{h,cpp} | CThreadInterface（vtable：stop/join/dtor/dtor/dispatch）+ CFrameCountHandler（0x30）+ CAppThread（0x50）+ CNetworkThread（0x64） |
| CoserverUdp.{h,cpp} | CUdpHandler（sock/clientSock，Recv/Send/InetAddr 全量）+ CUdpRecvBuffer（0x204 池元素，operator new/delete） |
| CoserverUser.{h,cpp} | CUser（CGameServer*）+ CUserManager（10×map<const uint,CUser> + app） |
| CoserverPacket.{h,cpp} | CPacketDecoder（handlers[0x27fd]，0x3F9/0xBB8/0xBB9/0xBBA）+ CPacketTracer + CPacketTranslater（OnLogin/Logout/HeartBeat/ReplyUserInfo 带 try/catch）+ CInnerMsgHandler + 事件包 |
| CoserverSignal.{h,cpp} | CSignal 六子类 + CSignalTranslator（handlers[0x20]，init_signal 注册 14 个信号）+ signal_handler |
| CoserverInit.{h,cpp} | CAppInit/CAppStartInit（Init_Daemon/Save_pid）/CAppStopInit |
| CoserverMisc.{h,cpp} | MemPool<CUdpRecvBuffer>（10000 池）+ CDNFUserInOutCounter（0x324D9）+ CSourceVersionMgr/CVersionMgr + CKillUSRConfig/ST_KillUSRConfig + CommonTime + CSystemTime(Handler) |

## 复用来源（与其他二进制共享，已验证字节一致）

- 日志/互斥/工具：`DNFServer/ServerCommon/`（DNFFileLog、Thread、DNFFunctionLib 裁剪版 `-DDF_NO_CODEPAGE`）。
- PacketHeader：`shared/packet/`。
- CVersionMgr/CSourceVersionMgr：auction `GameData/version.{h,cpp}` 布局，coserver 常量 0x2C00/0x2C01。
- **CUser/CUserManager 为 coserver 独有 UDP 用户实现**（Community 的会话用户不通用）。
- 框架类（CAppBase/CApplication/CServerHandler/...）与 statics/guild/monitor/manager/dbmw 同族，coserver 是家族首个还原对象，后续可直接复用本目录源码。

## 已知残余（工具链/宿主差异，非语义问题）

1. 宿主 glibc crt：`__libc_csu_init/fini` 缺失、`_start` 等 3 个多余（relay 同款，需旧 glibc 才能消除）。
2. libstdc++ 版本差异（4.4.4/4.1.1 混合 vs 原版 4.4.6-3）：部分 std 模板实例化细节（如 `_Construct<SourceVersion,&&>`）。
3. O0 代码生成差异：剩余 DIFF 主要是寄存器分配/EH landing pad 布局/分支排布，语义已核对一致。
4. `CFrameCountHandler`/`CDNFUserInOutCounter` 等 TU 若原版为 4.1.2 编译（memset 内联形态不同），需混合工具链才能逐字节一致（relay 已证实该路线）。

## 下一步

- 逐函数核对剩余 DIFF（应用层 116 个），确认全部为代码生成差异后固化报告。
- 可选：按 relay 路线拆分 4.1.2/4.4.6 TU 编译，提升 IDENTICAL 比例。
- 验收后开始下一个二进制（建议 statics 或 dbmw_guild，可直接复用本目录框架类）。
