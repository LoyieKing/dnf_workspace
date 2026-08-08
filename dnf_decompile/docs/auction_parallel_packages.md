# df_auction_r DIFF 细粒度并行包

生成：2026-08-08  
基线：IDENTICAL 4291 / NEAR 13 / DIFF 432 / MISSING 0（4736 项目函数）  
明细：`/tmp/dwarf_validate/auction_diff_by_tu.tsv`、`/tmp/dwarf_validate/auction_tu_diffs/<CU>.txt`

## 规则

1. **每个包只改本包列出的 `.cpp`/`.h`**，禁止改其它 CU 源文件（避免并行冲突）。
2. **auction 与 point 同源**：只改一份源码；Wave 结束后统一 `build-auction.sh` + `build-point.sh`。
3. **忽略** `source/relay/`、`source/coserver/` 进行中改动。
4. 优先级：**(a) callset/控制流语义** → **(b) 助记符/指令级** → (c) 局部名/行号（DWARF 优先，不强制行号）。
5. 类布局/字段名必须服从 auction DWARF；需要改头文件时只改本包所属头，并在回报里标明。
6. 验证：`/tmp/c6-g++-446r` + `source/toolchain/build-auction.sh <TU...>`；比对用 `auclib`（`/tmp/auclib.py`）或包内脚本。
7. 原版 ELF：`dnf_installer/.../neople/auction/df_auction_r`  
   重建：`source/build-auction/df_auction_r`

## 按 DIFF 降序总表（NI = NEAR+DIFF+MISSING）

| 包 ID | Wave | CU | NI | DIFF | CALLRISK | 源码 | 依赖 |
|---|---|---|---:|---:|---:|---|---|
| A1 | 1 | Strings | 86 | 83 | 26 | `Library/Include/Core/Strings.cpp` (+ Strings.h) | 无 |
| A2 | 1 | Socket | 21 | 21 | 4 | `ServerLib/basic_source/Socket.cpp` | 无 |
| A3 | 1 | TEA+SHA+SecureStdio+Method+System | 15 | 13 | 0 | basic_source TEA/SHA/Method/System + Core/SecureStdio | 无 |
| A4 | 1 | DNFFileLog+TraceLog | 14 | 14 | 7 | ServerCommon/DNFFileLog + basic_source/TraceLog (+CFileLogWriterBase 若需) | 无 |
| A5 | 1 | TCPUser+RecvBuffer | 12 | 12 | 3 | basic_source TCPUser/RecvBuffer | 无 |
| A6 | 1 | HandlerFor_GA_ | 14 | 14 | 10 | `auction_source/HandlerFor_GA_.cpp` | 只改 cpp |
| A7 | 1 | HandlerFor_GP_JPN | 16 | 16 | 10 | `auction_source/HandlerFor_GP_JPN.cpp` | 只改 cpp |
| A8 | 1 | HandlerFor_DB_ | 27 | 27 | 5 | `auction_source/HandlerFor_DB_.cpp` | 只改 cpp |
| B1 | 2 | Auction | 35 | 35 | 6 | `GameData/auction/Auction.cpp` | Wave1 后 |
| B2 | 2 | Search | 27 | 27 | 2 | `dictionary/Search.cpp` | 可与 B1 并行 |
| B3 | 2 | AuctionDictionary | 26 | 26 | 4 | `dictionary/AuctionDictionary.cpp` | 可与 B1 并行 |
| B4 | 2 | HandlerFor_TE_ | 10 | 10 | 0 | `auction_source/HandlerFor_TE_.cpp` | 可与 A6-8 并行实为 Wave1 |
| B5 | 2 | AveragePriceDictionary | 11 | 11 | 2 | dictionary/… | 并行 |
| B6 | 2 | GameDataPool+DataPool+CommonDataPool | 32 | 32 | 7 | 三个 DataPool | 并行（不同文件） |
| B7 | 2 | TCPThread+TCPSendThread+Dispatchers | ~20 | | | common_source 网络线程 | 并行 |
| B8 | 2 | ServerLibrary2.0+ServiceFactory | 14 | 14 | 5 | App/Service 入口 | 后置 |
| B9 | 2 | 小尾（StatisticsCollector, Script, Character, DBConnection, WorkThread, IArea, TActiveConnect, TimerThread, RDAR*, version, …） | 各 ≤8 | | | 各自文件 | 大量并行 |

**Wave 1 目标**：先吃掉高 CALLRISK + 大体积独立 CU（约 200+ DIFF 面），不碰 Auction/Search 大块。  
**Wave 2**：业务域 Auction/Search/Dictionary + 池/线程。  
**Wave 3**：全量 rebuild auction+point，再跑全量 compare 验收。

## Wave 1 包详情

### A1 Strings（最大）
- DIFF 83，callset 风险 26：`mid/left/right/insert/remove/replace` 等 CharString/WideString
- 进度文档已记过一批字符串形态；本包继续压到 callset=0 并尽量 IDENTICAL
- 反编译线索：`/tmp/auc_*` 与 Ghidra `df_auction_r`

### A2 Socket
- 对照 channel 本轮经验：dtor `close()`、accept 填 peer、UDP bind errno 分支
- auction 在 `nsl::` 命名空间，布局以 auction DWARF 为准（与 channel 可能不同）

### A3 crypto/leaf
- TEA Encrypt/Decrypt 寄存器命名、SHA Transform、SecureStdio 边界
- CALLRISK=0 → 纯代码生成对齐

### A4 日志
- CFileLogWriter ctor/dtor callset 差（EH `_Unwind_Resume`）→ 优先语义
- writeLog/writeRawLog 形态

### A5 TCPUser/RecvBuffer
- onRead/onWrite/onPassiveClose callset

### A6–A8 Handlers
- GA/GP 高度同构，DB 体量大
- 常见差异：重复 `get*()` 调用次数、日志串、临时对象构造次数
- **禁止**改公共 IHandler 头除非证据确凿且单包独占

## 并行执行记录

### 全量水位

| 时刻 | IDENTICAL | NEAR | DIFF | MISSING | exact+near |
|---|---:|---:|---:|---:|---:|
| 基线 | 4291 | 13 | 432 | 0 | 90.9% |
| Wave1 后 | 4358 | 15 | 363 | 0 | 92.3% |
| Wave2 后 | 4436 | 15 | 285 | 0 | 94.0% |
| **Wave3 后** | **4471** | **16** | **249** | **0** | **94.7%** |
| 累计变化 | **+180** | +3 | **−183** | 0 | **+3.8pp** |

### Wave1 包结果

| 包 | 状态 | 修复摘要 | 包内关键指标 |
|---|---|---|---|
| A1 Strings | ✅ | assert 三元、setle 分支、trim/replace/concat | ID 269→**295**，DIFF 83→**55**，callset ~26→~9 |
| A2 Socket | ✅ | fail-first open/bind/connect；send 断开序；shutdown 无 syscall | Socket 符号 ID **38**/41，4 callset→0，3/4 IDENT |
| A3 crypto | ✅ | TEA 全 IDENT；SecureStdio 8/8；SHA/Method/System 残留 codegen | TEA 5DIFF→0；SecureStdio 全清 |
| A4 日志 | ✅ | CFileLogWriter C1/D1 需 **-fno-exceptions**；TraceLog set_fd/errorLog IDENT | DNFFileLog callset 5→2；TraceLog call 0 |
| A5 TCPUser/Recv | ✅ | IsSending 语义；onRead/onWriteByCMsg IDENT | TCPUser DIFF 12→6，callset 0 |
| A6 HandlerFor_GA_ | ✅ | `!IsGoldServer` 早退、延后包构造、fail-first | **10 callset→0** |
| A7 HandlerFor_GP_ | ✅ | `!IsPointServer` 同构修复 | **10 callset→0**；3 handler IDENT |
| A8 HandlerFor_DB_ | ✅ | for 行循环、color 打包 bug、fail-first SEND_PACKAGE | **5 callset→0**；1 handler IDENT |

### 构建脚本

- `build-auction.sh` / `build-point.sh`：`CFileLogWriterBase` 强制 `-fno-exceptions`。

### Wave2 包结果

| 包 | 状态 | 关键指标 |
|---|---|---|
| B1 Auction | ✅ | ID +20；**6 callset→0**；修 `RegistChkMap` avatar/creature map 互换 bug |
| B2 Search | ✅ | 原 27 DIFF 中 9 IDENT；**2 callset→0**；8× OperateBy* IDENT；`AuctionId::operator<` 用 instantPrice |
| B3 AuctionDictionary | ✅ | **4 callset→0**；LETTER_TEXT 索引未回退 |
| B4 AveragePriceDictionary | ✅ | **2 callset→0**；GetItemAveragePrice IDENT；POINT_SERVER refine 宏保留 |
| B5 GameDataPool | ✅ | 12→1 DIFF；pool construct/ctor 对齐 |
| B6 DataPool+Common | ✅ | DataPool DIFF 12→2；Common 11→1；`ISession` vtable 序按 DWARF |
| B7 TCPThread/Send | ✅ | TCPSend 3 方法 IDENT；loop callset 对齐；无 try/catch |
| B8 ServerLibrary2.0 | ✅ | main/load_script/run IDENT；prepareRun 残留（InterHandler 尺寸/TE_ 内联，Wave3） |

### 构建脚本补充

- `CFileLogWriterBase`：`-fno-exceptions`
- `ServerCommon/Thread.cpp` → `ServerCommon_Thread.o`（CMutex，避免与 basic Thread.o 冲突）

### Wave3 包结果（8 路并行）

| 包 | 状态 | 摘要 |
|---|---|---|
| Strings residual | ✅ | tokenize/join/tokenizeNewLine 6 个 IDENT；callset 9→3（STL 残留） |
| HandlerFor_TE_ | ✅ | 6 个 timer handler IDENT；ctor 改 weak 内联 |
| StatisticsCollector | ✅ | 原 8 DIFF **全 IDENT**（GetYear 两位年、toString 等） |
| Script | ✅ | get_sections/fgetln/load/get_key_val IDENT |
| Character+Dict | ✅ | setState switch、SubAuctionId callset 清零 |
| ServiceFactory+DBConn | ✅ | startup/ctor callset 清；shutdown/set_query/fetch IDENT |
| Work/Timer/Active/Log 线程 | ✅ | acUser−1 引用计数语义 bug；PopTimeReqEvent/CheckTheConnection IDENT |
| InterHandler+App | ✅ | `mArrayFunc[1024]` → new **0x200c** 对齐 prepareRun |

### Wave4 建议（剩余 ~249 DIFF）

- 大函数：Auction::RegistItem/Bidding、Search::FindBy*、HandlerFor_* 助记符残留  
- Strings 剩余 + STL move 模板  
- App::prepareRun 其它 EH/布局、EpollReactor、Dispatchers  
- AuctionString::initAuctionString

### Wave4 包分配（2026-08-08，9 路并行，文件不重叠）

| 包 | CU（DIFF 数） | 源文件 |
|---|---|---|
| W4-1 | Auction (17) | GameData/auction/Auction.cpp/.h |
| W4-2 | Search (13) | GameData/auction/dictionary/Search.cpp/.h |
| W4-3 | AuctionDictionary (28) | GameData/auction/dictionary/AuctionDictionary.cpp/.h |
| W4-4 | HandlerFor_DB_ (25) + HandlerFor_TE_ (1) | auction_source/HandlerFor_DB_.cpp/.h、HandlerFor_TE_.cpp/.h |
| W4-5 | HandlerFor_GA_ (18) + HandlerFor_GP_JPN (12) | auction_source/HandlerFor_GA_.cpp/.h、HandlerFor_GP_JPN.cpp/.h |
| W4-6 | Strings (54) | Library/Include/Core/Strings.cpp |
| W4-7 | 网络/线程杂项 (38) | TCPThread、Socket、TCPUser、RecvBuffer、TCPSendThread、DBConnection、IArea、TActiveConnect、TimerThread、TimeManager、WorkThread、NSLDBThread、GameDataPool、Character、Zone |
| W4-8 | 服务端库/数据 (27) | ServerLibrary2.0、AveragePriceDictionary、DNFFunctionLib、DNFFunctionLibWrapper、ServerXml、ServiceError、version、AuctionString |
| W4-9 | 日志/服务/脚本 (32) | DNFFileLog、TraceLog、ServiceFactory、RDARScriptItemInfo、RDARScriptAvatarColorInfo、Script、DBDispatcher、TCPDispatcher、InterDispatcher、LogSendThread、System、Method、SHA、Thread |

自校验工具（Wave4 新增）：
- `source/toolchain/w4_compile.sh <src.cpp> <out.o>` — 单 TU 编译到 /tmp，不触碰 build-auction/
- `source/toolchain/compare_auc_obj.py <CU> <obj.o>` — 对象级助记符+调用集比对（ORIG vs .o）

权威口径仍是根代理统一重建后的全量 compare（严格 4736 项目符号）。

### Wave4 单代理模式结果（2026-08-08，根代理亲自执行）

用户要求取消全部 subagent、由根代理亲自推进。当前水位：

| 时刻 | IDENTICAL | NEAR | DIFF | MISSING | exact+near |
|---|---:|---:|---:|---:|---:|
| Wave3 后 | 4471 | 16 | 249 | 0 | 94.7% |
| Wave4 前（Strings+AuctionDictionary 首轮） | 4498 | 16 | 222 | 0 | 95.3% |
| **根代理修复后（当前）** | **4497** | **16** | **223** | 0 | **95.3%** |

> 注：4498→4497 的 −1 是 StatisticsCollector 布局从 228B 切到 236B 的净影响
> （IncTryCnt/IncFailCnt 两个真实语义 bug 修复，LoggingPerSec/DataInitialization
> 转为布局 DIFF，见下）。语义正确性优先于助记符计数。

#### 发现并修复的真实语义 bug

1. **Auction::Auction() 成员初始化值错误（调用集相同但常量不同）**
   - 原版佣金常量：mAUCTION_COMMISSION=0.5、mAUCTION_VIP_COMMISSION=5.0、
     mAUCTION_PRIVATE_STORE_COMISSION=5.0；源码误写 0.1/0.05/0.05。
   - mAUCTION_EXPIRE_TIME 原版 0xd2f00（864000），源码误写 0x15180（86400）。
   - 原版这些赋值在初始化列表（子对象构造前），源码写在函数体。
   - 修复后 `Auction::Auction()` **IDENTICAL（306/306）**。
2. **StatisticsCollector::StData::becauseCnt 尺寸错误（55→57）**
   - ORIG 代码（IncTryCnt/IncFailCnt）用 236B 步长（becauseCnt[57]），源码 228B（[55]）
     → IncFailCnt 的 failCnt 实际写进 becauseCnt[0]、mStDataPerSec 整体偏移错 24B。
   - isValidErrorNo 允许 error_no=55，[55] 数组会越界写；[57] 修复。
   - 原版自身 DWARF 存在双版本（228B/236B StData 共存于不同 TU），运行时
     GlobalInstance::create 分配 0x19a4=6564B，与 236B+无尾填充一致。
3. **-O0 布尔物化形态**：`if (!mItemInfo.Load(...))` 改为
   `bool ok = ...; if (!ok)` 后，构造器逐助记符对齐（原版先存局部再 movzbl+xor 取反）。

#### 已确认语义等价的 DIFF（剩余 223 中的大部分）
- 三个 dispatcher（DB/TCP/Inter）：调用集完全一致，仅基本块布局/寄存器分配差异。
- Auction::RegistItem、initAuctionString、IncFailCnt 等：调用集+常量集合一致，
  差异为 -O0 代码生成（栈槽、寄存器调度、布尔物化）。
- STL 模板实例（uninitialized_copy/move_iterator/_M_insert_aux/_Rb_tree dtor）：
  编译器/libstdc++ 版本形态差异，行为等价。

#### ORIG 自身布局不一致（需记录，无法单头文件同时满足）
StatisticsCollector 在 ORIG 二进制中：IncTryCnt/IncFailCnt 用 236B StData；
LoggingPerSec/DataInitialization 用 228B StData（mpDayFileName@0x564）。本实现采用
236B（与运行时分配 0x19a4 一致），LoggingPerSec/DataInitialization 保持语义等价
但成员偏移与 ORIG 228B-TU 不同（布局 DIFF）。

### 严格口径复查与后续修复（2026-08-08 用户新规）

#### 新 IDENTICAL 口径（已入 `source/toolchain/compare_common.py`，CALIBER_VERSION=3）
- 仅归一化「直接跳转/调用指令的目标地址」（j*/call/loop → `<T>`，随附符号保留）
- 保留：立即数常量、字段/栈偏移、全局数据地址、寄存器分配、寻址形态
- 旧口径（所有 0x 抹成 0xX）废弃

#### 严格口径全量复查（4736 项目符号）

| 口径 | IDENTICAL | NEAR | DIFF | MISSING |
|---|---:|---:|---:|---:|
| 宽松口径（旧） | 4497 | 16 | 223 | 0 |
| **严格口径（新）** | **4081** | **436** | **219** | 0 |

> 严格口径下，引用 rodata/数据地址的函数天然停在 NEAR（跨二进制地址不同），
> 这是新口径的预期行为；可继续压的是 DIFF→NEAR 与「常量/偏移不同」的 NEAR→IDENTICAL。

#### 严格口径复查新增发现的真实 bug（已修复）

1. **PacketHeader 布局错误（数据包头）**
   - ORIG DWARF：`m_wMessageID@0 / m_wSize@2 / m_wSrcPort@4 / m_dwSrcIp@6(unsigned int)`，
     且整个包结构 packed(1)（m_nItemId@19 非对齐）。
   - 源码误写为 `m_wDstPort + m_nToken` 两个 ushort，且缺 `#pragma pack(1)`。
   - 修复后 `PacketHeader::PacketHeader()` **严格 IDENTICAL（19/19）**，
     `SendMessageToMonitor` 长度对齐（剩余为 -O0 相邻 store 调度差异）。
2. **TransErrToReason switch 形态**：`reason=...;break` 改为各 case 直接 `return X`，
   DIFF→NEAR（29/29）。
3. **StatisticsCollector 布局定案**：跟随多数 TU 的 228B-StData + 48B 尾填充
   （= 运行时 0x19a4），GetDay/GetMin/GetSec 等恢复严格一致；Inc* 的 236B 步长
   属 ORIG 另一 TU 头版本，无法单头文件同时满足，保留 NEAR。

### Wave5 包分配（2026-08-08 晚，16 路满配）

Wave4 中断复盘：仅 W4-3 AuctionDictionary 落盘（IDENT +10，DIFF 249→239）；W4-1/2/6/7/8/9 工作丢失；W4-4/5 仍在跑。Wave5 重发丢失包 + 新增细包，共 14 路，另有 2 路（HandlerFor_DB_/GA_/GP_JPN/TE_）在跑，总计 16 子代理。

| 包 | CU（DIFF 数） | 源文件 |
|---|---|---|
| W5-1 | Auction (15) | GameData/auction/Auction.cpp/.h |
| W5-2 | Search (18) | GameData/auction/dictionary/Search.cpp/.h |
| W5-3 | Strings (49) | Library/Include/Core/Strings.cpp |
| W5-4 | AuctionDictionary (12) | GameData/auction/dictionary/AuctionDictionary.cpp/.h（继续 W4-3 成果） |
| W5-5a | TCPThread/TimerThread/TimeManager/TCPSendThread/TActiveConnect/NSLDBThread (16) | common_source 对应文件 |
| W5-5b | TCPUser/Socket/RecvBuffer/DBConnection/IArea/GameDataPool (14) | basic/common_source + GameData |
| W5-6 | ServerLibrary2.0 (7) | GameData/ServerLibrary2.0.cpp/.h |
| W5-7a | AveragePriceDictionary (5) | GameData/auction/dictionary/AveragePriceDictionary.cpp/.h |
| W5-7b | Character + AuctionString (3) | GameData/Character.cpp/.h、GameData/AuctionString.cpp |
| W5-8 | DNFFileLog/TraceLog/LogSendThread (12) | ServerCommon + basic/common_source |
| W5-9a | ServiceFactory/Script/RDARScriptItemInfo/RDARScriptAvatarColorInfo (8) | common/basic_source + DNFShared/GameScript |
| W5-9b | DBDispatcher/InterDispatcher/TCPDispatcher/System/SHA/Method (7) | common/basic_source |
| W5-10 | DNFFunctionLib/DNFFunctionLibWrapper/ServerXml/version/ServiceError (11) | ServerCommon + GameData + common_source |
| W5-11 | WorkThread (3) | basic_source/WorkThread.cpp |

每个包符号清单：`/tmp/auc_wave5/<包>.syms`（mangled，逐行）。权威口径仍是根代理统一重建后的全量 compare。
