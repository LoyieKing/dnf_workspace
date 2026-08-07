# df_auction_r 还原进度

更新：2026-08-07

## 目标与口径

- 还原 `df_auction_r`（12.2 MB，32 位 ELF，66 个 CU，全部 GNU C++ 4.4.6-3，含 C++0x 特征符号）。
- 与 community 同款验证口径：DWARF 项目函数全量提取 → 符号命中 → 助记符级重叠比对。
- 用户标准：语义完全等价即可（机器码不需要 100% 一致），水位不低于 community。
- `df_point_r` 与 auction 100% 符号重叠，还原一个得两个。

## 当前水位（全量 66 CU 口径）

| 指标 | 数值 |
|---|---:|
| 项目函数（DWARF 提取） | 4,736 |
| 已实现 TU | 18 |
| IDENTICAL | 558 |
| NEAR | 9 |
| DIFF（语义等价，-O0 惯用法） | 116 |
| MISSING（未实现） | 4,053 |

> 说明：IDENTICAL/NEAR/DIFF 只统计「已实现且原二进制存在」的函数；MISSING 为尚未实现的
> 其余 TU。当前 IDENTICAL+NEAR 已全部落在已实现 TU 内，剩余 DIFF 逐一核验为 -O0
> 代码生成惯用法差异（分支方向、bool 物化、寄存器分配、栈槽、nop 对齐、调用参数求值顺序），
> 语义全部等价。

## 已实现 TU（11 个）

### 已对齐（助记符级精确/近似）

| TU | 函数 | 状态 |
|---|---|---|
| ThreadLock | 3 | ✅ 对齐（TThreadLock/TScopedLock/ThreadLock_linux） |
| Thread | 13 | ✅ 对齐 |
| Token | 6 | ✅ 对齐（free_token 用 `operator delete[]` 复现单次判空） |
| System | 3 | ✅ 对齐（`get_ms_tick` 用 `(unsigned long long)/1000` 复现 `__udivdi3`） |
| SocketSystem | 2 | ✅ 对齐 |
| Exception | 6 | ✅ 对齐（成员顺序 iErrorCode_@0/nLine_@4，无 getter） |
| Method | 15 | ✅ 对齐（BytesToWord/WordToBytes 指针递增形态） |
| SHA | 13 | ✅ 对齐（Transform 单表达式、Word2Bytes 倒序、setb 进位） |
| TEA | 12 | ✅ 语义等价（v/w/y/z/sum/delta/n 命名 + register 复现寄存器分配；Encrypt/Decrypt 用 pin/presult 局部指针；Signature 缓冲区 23B） |
| Script | 11 | ✅ 语义等价（remove_comment 已 0 差异；其余为分支惯用法） |
| TraceLog | 17 | ✅ 语义等价（Ghidra 辅助实现；依赖 LogSendThread 暂用临时桩） |

## 第二阶段：消息类 + 网络核心（2026-08-07 追加）

消息类全部为头文件内联 weak 符号，已精确复现：

| 组件 | 状态 |
|---|---|
| Message/IMessageStruct | ✅ ctor/initialize/setStringToMessage 等精确；dataTypeMask 用 `1 << bit`（x86 shl 硬件掩码） |
| CMsgCell/MsgCell.inl | ✅ ctor/Clear/PAD/AttachStream/operator<< 精确 |
| TMsgCell\<N\> | ✅ ctor（m_nBufLen=N; memset; m_bBuf=buf 直写） |
| PACKET_HEADER/INTERNALMSG/DBTR | ✅ pack(1) 布局 18/32/21B + 方法精确 |
| PCK_CS_POSTING_LOG | ✅ ctor（memset 0x12 + cat=1/id=0/size=0x12） |
| RecvBuffer | ✅ ctor/IsEmpty/IsFull/AvailableSize/GetFront/AdjustRear/GetRear 精确；Parse/ClearUsedMsgs 语义等价（while 循环形态 + goto 收尾） |
| TCPUser | ✅ 多数精确（dtor/initialize/postDisconnected/onError/shutdown 等）；ctor/onRead/onWriteByCMsg/onPassiveClose/onActiveClose 语义等价；枚举嵌套、const getter |
| WorkThread | ✅ ctor/SetArea/createOrderPool/destroyOrderPool/GetThreadId 精确；PushTransaction/PopTransaction/loop 语义等价 |
| DataPool | ✅ destroyTCPSocket/GetTcpUserCount 精确；其余语义等价（含 destroyTCPUser 全逻辑） |
| ServiceFactory | 布局已对齐（9 个匿名子系统基类 @8/24/92/116/180/184/188/308 + tick_/名称） |
| 子系统头 | Threads/Dispatchers/DataPools/Reactor/IHandlers/DBConnections/EncyptTools/IActiveConManager/ISession/IArea 已建 |

## 关键源码形态结论（追加）

8. **TCPUser 无虚函数**（布局 @0 直接是 mSendDataType）；getUserId/GetMaxPacketSize/
   isBindedSession/GetPending*Num 是头内联（W），Inc/Dec*Num 与 IsSending/IsWorking 在 .cpp（T）。
9. **WorkThread::loop**：`while (mRearIdx > mParseIdx)` 形态、`__thread` TLS 存线程号、
   ITimeEntity 虚调用 isTerminated()/operator()、CommonDataPool::destroyTimeEntity 虚调用、
   消息 acUser-1 计数 + `*(char*)&mpSendBuffer = 0` 字节清零的怪癖。
10. **boost pool**：使用 2011-07 版 boost pool 头（/tmp/boost_inc），类布局与 DWARF 精确一致
    （simple_segregated_storage=4B, pool=28B, object_pool=28B）。

## 关键源码形态结论（后续必须保持）

1. **TEA 块加密**：`register unsigned int y/z/sum` + `delta/n` 才能复现原始寄存器分配
   （y=esi, z=ebx, sum=edi）；`while (n-- != 0)` 循环；v/w 声明顺序 `w; v` 才能对齐栈槽。
2. **SHA Transform**：第二个 W 展开循环必须写单表达式
   `W[i] = sig1(W[i-2]) + W[i-7] + sig0(W[i-0xf]) + W[i-0x10];`（不能拆临时变量）。
3. **get_ms_tick**：`(long long)tv.tv_sec * 1000 + (unsigned long long)tv.tv_usec / 1000`
   （unsigned 64 位除法触发 `__udivdi3`）。
4. **remove_comment**：`while (i <= 0x3fd)` + 循环内 `memset+return true` 形态才对齐。
5. **Script::findCharValue/findIntValue 是 Script.h 内联**（weak 符号），G_Script() 亦为内联。
6. **Token::free_token** 用 `operator delete[]` 直接调用（避免 delete[] 二次判空）。
7. 原二进制 `.rodata` 含韩文 EUC-KR 字符串（如 parse 错误的
   `\xC5\xE4\xC5\xAB\xC0\xBB \xBE\xF2\xBE\xEE \xBF\xC0\xB4\xC2\xB5\xA5 \xBD\xC7\xC6\xD0 \xC7\xCF\xBF\xB4\xBD\xBF`）。

## 依赖与工具链

- 编译器：`/tmp/c6-g++-446r`（c6root g++ 4.4.7 驱动 + cc1plus 4.4.6-3），`-m32 -O0 -std=gnu++0x`。
- 构建：`source/toolchain/build-auction.sh`（增量；临时链接桩 `/tmp/auc_tmp_stubs.cpp`，
  待 LogSendThread/DataPool/TCPUser 实现后移除）。
- 比对：`/tmp/compare_auction.py`（改自 bridge 同款）。
- Ghidra：`dnf_project` 已导入 `df_auction_r`，`ghidra_decompile_targets.java` 按地址反编译。

## 下一步

1. 实现 LogSendThread/DataPool/TCPUser/Message（TraceLog 依赖链），移除临时桩。
2. 按依赖顺序推进 ServerLib basic_source 其余 TU（RecvBuffer/Socket/DefGlobal/LinuxService 等）。
3. 然后 common_source（TCPThread/WorkThread/TCPSendThread/TimerThread/ServiceFactory 等）。
4. ServerCommon（ServerXml）+ DNFShared（RDARScript*）+ Core（Strings/UnicodeConvert）。
5. auction 专属 26 TU（Search 750 / Auction 630 / AuctionDictionary 317 等）。
