# df_auction_r 还原进度

更新：2026-08-08

## 目标与口径

- 还原 `df_auction_r`（12.2 MB，32 位 ELF，66 个 CU，全部 GNU C++ 4.4.6-3，含 C++0x 特征符号）。
- 与 community 同款验证口径：DWARF 项目函数全量提取 → 符号命中 → 助记符级重叠比对。
- 用户标准：语义完全等价即可（机器码不需要 100% 一致），水位不低于 community。
- `df_point_r` 与 auction 100% 符号重叠，还原一个得两个。

## 当前水位（全量 66 CU 口径）

| 指标 | 数值 |
|---|---:|
| 项目函数（DWARF 提取） | 4,736 |
| 已实现 TU | 37（本批新增 ServerLibrary2.0 + AuctionString 全部符号） |
| IDENTICAL | 3,179 |
| NEAR | 19 |
| DIFF（语义等价，-O0 惯用法） | 426 |
| MISSING（未实现） | 1,112 |

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

## 第三阶段：框架层 + 公共库（2026-08-07 追加）

全量比对水位：**IDENTICAL 1625 / NEAR 18 / DIFF 225 / MISSING 2868**
（基线：IDENTICAL 641 / NEAR 9 / DIFF 127 / MISSING 3959）

本批（Strings 全量补完）后：**IDENTICAL 1809 / NEAR 20 / DIFF 273 / MISSING 2634**

本批（UnicodeConvert 全量补完）后：**IDENTICAL 1853 / NEAR 20 / DIFF 273 / MISSING 2590**

本批（ServerXml 全量补完，含 TinyXML 运行时）后：**IDENTICAL 1965 / NEAR 20 / DIFF 275 / MISSING 2476**

本批（RDARScriptItemInfo 全量补完）后：**IDENTICAL 2049 / NEAR 20 / DIFF 276 / MISSING 2391**

本批（RDARScriptAvatarColorInfo 全量补完）后：**IDENTICAL 2121 / NEAR 20 / DIFF 279 / MISSING 2316**

本批（DBConnection 全量补完，含 mysql 客户端 API 桩）后：**IDENTICAL 2135 / NEAR 20 / DIFF 284 / MISSING 2297**

本批（HandlerFor_DB_ + TeaInitialize + DNFFunctionLibWrapper 全量补完，DBConnection 访问器
改回头内联引用形参）后：**IDENTICAL 2217 / NEAR 21 / DIFF 323 / MISSING 2175**

本批（ServiceError 长错误表 + Socket 余量符号补齐）后：**IDENTICAL 2238 / NEAR 20 / DIFF 322 / MISSING 2156**

本批（HandlerFor_GA_ 全量补完）后：**IDENTICAL 2286 / NEAR 20 / DIFF 351 / MISSING 2079**

本批（HandlerFor_GP_ 全量补完）后：**IDENTICAL 2302 / NEAR 20 / DIFF 365 / MISSING 2049**

本批（ExpireTimeDictionary 全量补完）后：**IDENTICAL 2387 / NEAR 20 / DIFF 367 / MISSING 1962**

本批（CharacterDictionary 全量补完）后：**IDENTICAL 2535 / NEAR 20 / DIFF 369 / MISSING 1812**

本批（AveragePriceDictionary 全量补完）后：**IDENTICAL 2676 / NEAR 20 / DIFF 380 / MISSING 1660**

本批（AuctionDictionary 全量补完，AuctionItem 打包修正）后：**IDENTICAL 2851 / NEAR 20 / DIFF 417 / MISSING 1448**

本批（ServiceFactory 全量补完，InternalMsg 命名空间修正）后：**IDENTICAL 3110 / NEAR 19 / DIFF 418 / MISSING 1189**

本批（ServerLibrary2.0 + AuctionString 全量补完）后：**IDENTICAL 3179 / NEAR 19 / DIFF 426 / MISSING 1112**

### 已实现 TU（本阶段新增，均可编译链接）

| 组件 | 状态 |
|---|---|
| TCPThread / TCPSendThread / NSLDBThread | ✅ 已实现（含 loop 心跳/发送/事务循环语义） |
| TCPDispatcher / InterDispatcher / DBDispatcher | ✅ 已实现（vptr[3] 成员函数指针派发，PMF 位 0 调整） |
| ActiveConManager + ConInterface（TActiveConnect） | ✅ 已实现（RequestConnect/PopRequestConnect 全逻辑） |
| ActiveNetClose | ✅ 已实现（pushActiveClose/onActvieClose） |
| CommonDataPool | ✅ 已实现（4 个 boost 池 + 双锁 + 计数） |
| IArea / ISession / IHandlers / IHandler | ✅ 已实现（IArea 注册/遍历；IHandler 虚接口按二进制修正：`init()` 无参） |
| Reactor（EpollReactor 全模板） | ✅ 已实现（handleEvents/add/del/GetConnectedUsersIter 等） |
| ServiceError | ✅ 已实现（55 条错误码表，从二进制 .rodata 逐条提取） |
| DataPool 成员顺序 | ✅ 修正（TCPSocketPool@0..LogSendMsgLock@16,mTcpUserCount@40） |
| tlsThreadId | ✅ 统一为 nsl 共享 `__thread`（WorkThread.cpp 定义） |
| DNFFileLog / DNFFunctionLib（ServerCommon） | ✅ 已实现（0 缺失） |
| ServerCommon Thread（CMutex/CGuard） | ✅ 已实现 |
| SecureStdio（Core） | ✅ 已实现（8 个 ss_* 函数） |
| UDPSocket + TCPSocket Set*BufSize | ✅ 已实现 |
| version（CVersionMgr/CSourceVersionMgr） | ✅ 已实现 |
| StatisticsCollector | ✅ 已实现（StData 计数、按秒/按天日志、备份轮转） |
| Zone（GSArea）+ Character + GameDataPool | ✅ 已实现（对象池、状态机、关服消息推送） |
| InternalMsg / TE_Entity 模板 | ✅ 已实现（2116B 布局 / 52B 布局） |
| HandlerFor_TE_ | ✅ 已实现（5 个定时事件注册与回调，initTimeEvent） |
| LinuxService（ServiceInfo/IPlatform） | ✅ 已实现（44 个缺口清零：19 精确 + 44 近似，仅 TraceLog 既有 DIFF） |
| InterHandler（含拍卖数据结构头） | ✅ 已实现（TU 0 缺失：23 精确 + 35 近似；onINTER_* 两函数逐字节一致） |
| WorkThread（含 GetMessageBuffer/TMsgCell 实例化） | ✅ 已实现（TU 0 缺失：55 精确 + 169 近似，3 个语义等价 DIFF） |
| TimeManager + TimerThread（含 RBTree 模板重建） | ✅ 已实现（两 TU 0 缺失：TimeManager 21 精确 + 46 近似，TimerThread 29 精确 + 89 近似） |
| Strings 核心库（CharString/WideString 全部） | ✅ 已完成（TU 0 缺失：267 精确 + 88 语义等价 DIFF；find/rfind 返回 int32 索引、静态 concat/format/tokenize/join、vector<CharString/WideString> 模板全套实例化） |
| UnicodeConvert | ✅ 已完成（TU 0 缺失：46/46 全部精确；TLS 10 槽轮转 buffer、toTString/toMbcs/toUnicode 各 8 变体、convertToUtf8/convertFromUtf8 全逻辑） |
| ServerXml + TinyXML | ✅ 已完成（TU 0 缺失：171 精确 + 3 语义等价 DIFF；CServerXml 208B 布局、TinyXML 按 vtable/字段偏移重建，str 解析全流程可用） |
| RDARScriptItemInfo | ✅ 已完成（TU 0 缺失：91 精确 + 2 语义等价 DIFF；CNRDItemInfoList 28B/map<int,STItemInfo*>、NextToken 双字节韩文处理、Save/Load 全流程） |
| RDARScriptAvatarColorInfo | ✅ 已完成（TU 0 缺失：139 精确 + 4 语义等价 DIFF；AvatarVariation::AvatarColorInfo 双 map、colorRGB 3B、Parse_Table/import/查询全流程） |
| DBConnection（+mysql 桩） | ✅ 已完成（TU 0 缺失：26 精确 + 7 语义等价 DIFF；0x42088 布局精确、init/open/exec/查询全流程 + mysql 客户端 API weak 桩） |
| HandlerFor_DB_ | ✅ 已完成（TU 0 缺失：118 精确 + 34 语义等价 DIFF；0x63fc 布局、14 个 DB 处理器 + insertPackage 系列全逻辑、GetAuctionMainFetchResult 27 列读取） |
| TeaInitialize | ✅ 已完成（TU 0 缺失：11 精确 + 1 语义等价 DIFF；kor/jpn/usa/taiwan 同 key、china 独立 key，mTEA.Initialize(key,0x21,sm_chain0,0,0)） |
| DNFFunctionLibWrapper | ✅ 已完成（TU 0 缺失：2 精确 + 2 语义等价 DIFF；Char2Hex 小写 saucHex 表、Hex2Char 双字符解析、Binary2Hex/Hex2Binary） |
| ServiceError | ✅ 已完成（TU 0 缺失：83 精确 + 3 语义等价 DIFF；COMMON/AUCTION_ERROR_LIST 移出 nsl 使 make_pair 模板符号对齐，SetAuctionServiceErrorStr 先调 InitServiceErrorStr 并含 2/3 号条目） |
| Socket | ✅ 已完成（TU 0 缺失：35 精确 + 25 语义等价 DIFF；poll*Event 用 p->fds_bits[i] 清零循环 + FD_SET((unsigned)sock_)，TCPSocket::getHandle/Set*BufSize 对齐，6 个 poll 函数逐字节一致） |
| HandlerFor_GA_ | ✅ 已完成（TU 0 缺失：96 精确 + 25 语义等价 DIFF；INetWorkHandler 派生、mArrayFunc[1024]@12 + mpSzBuffer@8204 共 12300B，15 个 on* 处理器 + registFuncMap/searchNetworkFunc 头内联，IsGoldServer 头内联，gmList[5] 从 .data 提取） |
| HandlerFor_GP_（HandlerFor_GP_JPN.cpp） | ✅ 已完成（TU 0 缺失：68 精确 + 24 语义等价 DIFF；PG 应答包 + IsPointServer，Bidding 写 owner_nexon_id/charge_point，ASK_OWNER_IS_VIP 用 OwnerInfo+IsOwnerVIP，avatar 只补 emblem 不补 expansion，无 gmList 追踪） |
| ExpireTimeDictionary | ✅ 已完成（TU 0 缺失：129 精确 + 4 语义等价 DIFF；object_pool_by_boost_pool(0x20) + std::queue<Data*>，Push/Peek/Pop 主方法逐字节一致，空队列返回 0x2c） |
| CharacterDictionary | ✅ 已完成（TU 0 缺失：155 精确 + 3 语义等价 DIFF；map<const int,Data*>@4 + 嵌套 Data(vector<unsigned long long> 12B)，Add/Sub/GetList/NowItemNum 全逻辑，AddAuctionId 逐字节一致） |
| AveragePriceDictionary | ✅ 已完成（TU 0 缺失：190 精确 + 16 语义等价 DIFF；12348B 布局（双 0x20×8 map 表）、AddItemAveragePrice 平均价加权/限价/概率提交全逻辑、UpdateAveragePirce 双表遍历、ROI_Average_Constraint::isVaildRange 出线实现） |
| AuctionDictionary | ✅ 已完成（TU 0 缺失：282 精确 + 34 语义等价 DIFF；16772B 布局、RegistItem/Bidding/Purchase/makeSuccessfulBid 全流程、注册/竞价/一口价/过期/平均价 7 大字典联动、UpdateAveragePrice 头内联弱符号） |
| ServiceFactory | ✅ 已完成（TU 0 缺失：400 精确 + 8 语义等价 DIFF；startup 1920B/shutdown/ctor/dtor 全流程、9 个子系统成员初始化、handler init 遍历、DB 连接关闭、configpath[256] 定义、EncyptTools/Threads/IHandlers getter 出线实现） |
| ServerLibrary2.0 | ✅ 已完成（TU 0 缺失：317 精确 + 18 语义等价 DIFF；App 类继承 LinuxService、main/prepareRun/run/load_script/readConfig/finishRun/stop/onStop/onPause/onContinue 全流程、8 个 handler 全局、GameDataPool[5]/双 DBConnection 初始化、remove_if 字符串修剪、双分支 Exception catch） |
| AuctionString | ✅ 已完成（TU 0 缺失：initAuctionString 1785B 十二段 getAuctionString+strncpy 填 LETTER_TEXT[0..8]/SENDER_NAME/SENDER_NPC_NAME/SENDER_NAME_GOLD、LETTER_TEXT[9][255] 全局、comp_by_time 头内联） |

### 关键形态结论（追加）

11. **Dispatcher 派发**：`vptr[3]` 返回成员函数指针（PMF），低位为 1 时经 vtable
    调整后再调用——用 `typedef int (INetWorkHandler::*networkFuncType)(CMsgCell*, TCPUser*)`
    等 PMF + `(pHandler->*handle)(...)` 天然复现。
12. **IHandler**：vtable=[D1,D0,init,search*Func]；`init()` 无参（调
    `Threads::getTCPSendThread()` + `setSendThread`）；`setSendThread` 出线实现（T）。
13. **ISession**：`onClose(bool)` 虚、`onDoClose()` 虚；setTCPUser/getTCPUser 非虚。
14. **Character 状态机**：IState vtable=[enter,exit]（无虚析构）；setState 映射怪异
    （STATE_MOVE→Stand、STATE_CAST→Cast、STATE_ATTACK→Attack、STATE_STAND→Move），按原样复现。
15. **HandlerFor_TE_**：556B，ITimeHandler + mOldTM(tm)@12 + mTimeEntity[125]@56；
    initTimeEvent 注册 5 个定时事件（0x19/2000、0x1c/10000、1/5000、0x1d/10000、0x28/60000）。
16. **StatisticsCollector**：StData=0xe4（tryCnt/failCnt/becauseCnt[55]）；mStDataPerDay@4、
    mStDataPerSec@0x2b0、mpLogFile@0x55c、mpDayFileName@0x564…mLastLoggingDay@0x1970；
    注意 HandlerFor_GA_ 里 IncTryCnt/IncFailCnt 用的是另一个 0xec 步长头（两版头并存）。
17. **InternalMsg**：CMsgCell 基类 + pNextJob@32/pConInfo@36/buf[128]@40/
    bActiveJob@168/workIndex@172/.../mOwnerWorkId@192，总 2116B；ctor 里
    `SetBuffer(buf)`、`mOwnerWorkId = tlsThreadId`。
18. **错误码表**：ServiceError.cpp 用短版 AUCTION_ERROR_LIST（51/52/54），
    auction 业务 TU 用长版（含 ERROR_INVALID_REFINE 等，53 个枚举值）。
19. **LinuxService**：`class LinuxService : public ServiceInfo, public IPlatform`；
    IPlatform vtable=[checkConfigFile,checkPIDFile,prepareStart,install,remove,start,main,
    sendBroadCastMessage,controlStop,controlPause,controlContinue,D1,D0]（13 项）；LinuxService
    追加虚拟 [13..21]=SendInfoMessage(实现)+readConfig/prepareRun/run/finishRun/stop/onStop/
    onPause/onContinue(纯虚，App 在 ServerLibrary2.0 实现)；布局 vptr@0/ServiceInfo@4(1804B)/
    isTerminated_@0x70d/m_dwServiceState@0x710/m_bStop@0x714/m_command@0x715/mbStopRecevied@0x733。
20. **LinuxService 细节**：processCommandLine 用 C `strstr`，main 用 `std::strstr(char*,const char*)`
    （需补 `_ZSt6strstrPcPKc` 弱符号，c6root glibc 定义了 __CORRECT_ISO_CPP_STRING_H_PROTO
    使 <cstring> 不再提供该重载）；`Neof_sendSuspendSignal` 里 sprintf 连续写两次（原样复现）；
    `main()` 的 catch 块带 `return;`（跳过 Out 打印）；`Neof_registerSignalHandlers` 前两个
    直接 `if(!f()) return false`，其余经 `ret` 变量（-O0 寄存器/栈槽差异）。
21. **InterHandler**：vtable=[D1,D0,init,searchInterFunc]；init() 清 0x400 个 PMF 后
    registFuncMap()[2]=onINTER_DESTORY_CHARACTER、[0]=onINTER_SERVICE_UNAVAILABLE；
    searchInterFunc 返回 `(interFuncType)mArrayFunc[id]`（GCC 4.4 需显式 PMF 转换）。
22. **拍卖数据结构头**（AuctionItem.h）：DnfItemInfo 53B pack(1)、ROI_Category 12B
    （field_0=8B union/shorts[3]+__int64、field_1=4B union/chars[3]+int key）、
    RandomOption 14B、UpgradeSeparateInfo 1B 位域（upgrade:5/tradeRestriction:1/others:2）、
    ReservedCapacity 9B；`PAY_TYPE`=GOLD0/POINT1，Auction::mPayType@0x52c0。
23. **ITimeEntity 布局修正**：`ITimeEntity : public IMessageStruct`（vptr@0/bActMsg@4/
    mbInter@5/mMsgType@6/bTerminated@7 复用基类尾填充/proc_id@8…pmMsg@36，40B）；
    TE_Entity::regist 额外置 bActMsg/bWillDelete/entNo=this/accumulated_tick=0，
    ctor 置 m_fpt=0/m_pt2Object=0/mMsgType=2，operator() 直接 `return (m_pt2Object->*m_fpt)(pmMsg)`。
24. **ISession**：C1/D1/setTCPUser/getTCPUser 全部头内联（pTCPUser@4），与二进制 W 弱符号一致。
25. **GetMessageBuffer**：头内联 `CMsgCell* GetMessageBuffer(int)`——`size>0x80000||size<0` 时
    `throw (const char*)__FUNCTION__`（typeinfo=_ZTIPKc），否则按 0x10..0x80000 十六档
    `new TMsgCell<N>()`（16..524288），兜底 `new TMsgCell<409600>()`（原样复现死分支）。
26. **RBTree 模板重建**（TimeManager/TimerThread 依赖）：节点经 `boost::pool(0x18,0x6000,0)`
    分配（ctor 先 malloc+free 预热）；RBNode 辅助方法全部实例方法（init 四写、SetColorBlack/Red、
    getSibling/getGrandParent/getUncle/GetData/GetParent/GetLeft/RightChild）；RBIterator 12B
    （mpRbnode/mTraversal/mFlow），INORDER 遍历由 mFlow=PARENT/RIGHTCHILD 驱动；Insert 用
    ENUM_RBTREE_INSERT_CASE 状态机（0..3）、Remove 用 ENUM_RBTREE_DELETE_CASE 状态机（0..4，
    switch 跳转表），两者剩余 DIFF 为分支布局差异（语义等价）。
27. **TimeManager::onTime** 触发条件实为 64 位无符号比较
    `(unsigned long long)check_period <= (unsigned long long)accumulated_tick`
    （Ghidra 反编译的 `(accumulated>>32)!=0 || ...` 形态是同一语义）。
28. **Strings 库核心**：StringData(8B refCount_/size_) 引用计数（incRef=`lock addl`、
    decRef=`lock xadd`+asserts，empty 数据 refCount_=1/size_=1）；CharString 4B 仅存
    `buffer_`（= data+8 的字符区，getData = buffer_-8）；concat/compare/compareNoCase/
    pattern 是**静态成员**（`_ZN` 编码）；isUnique/isShared/getSize/getLength 为 const；
    自由函数 left/mid/right/trim/lower/upper/reverse/insert/remove/replace 与全部
    比较/拼接操作符已按 -O0 形态重建。
29. **Strings 补完**：find/rfind 全部 32 个入口返回 **int32 索引**（核心循环
    `memcmp` 匹配，`patLength==0` 提前 `return -1`，guard 用隐式布尔不落栈）；
    WideString 的 concat/pattern/compare/compareNoCase/format/vformat/tokenize/
    tokenizeNewLine/join 与 CharString 同款均为**静态成员**（DWARF 无 this）；
    isuspace 按 9/10/0xb/0xc/0xd/0x20/0xa0/0x2000..0x200b/0x202f/0x205f/0x3000/0xfeff
    白名单，isupunct 按 Unicode General Punctuation 区间长链复现；
    getHash 乘法用 `(v<<6)+(v<<16)-v` 复现原移位序列，`patLength*4` 需 `(size_t)` 转型
    才生成 `lea (,%eax,4)`；tokenize/join 实例化 `std::vector<T>::push_back(T&&)`
    （emplace/move_iterator/_M_insert_aux 全套 C++0x 模板符号），join 的
    `token_runOnce` 标志按原 for 条件 `(flag=!flag)` + `while(flag)` 形态复现；
    tokenize 默认分隔符 Char=`(" \t\n\r",".,")`、Wide=`(L" \t\n\r",L".")`。
30. **UnicodeConvert**：TLS 三组 10 槽轮转 buffer（声明序 mbcs[10][0x1000]/
    mbcs 索引/unicode[10][0x1000] wchar/unicode 索引/tchar[10][0x1000]/tchar 索引，
    偏移 -0x3c010/-0x32010/-0x3200c/-0xa00c/-0xa008/-0x8 与二进制逐一吻合）；
    toTString/toMbcs/toUnicode 的宽窄串变体用 wcstombs/mbstowcs 填 buffer 后
    `(idx+1)%10`（0x66666667 magic 除法），c_str() 内联不落局部；指针返回版本
    （string→char*、wstring→wchar* 等）直接透传；convertToWideString(PKc,j) 忠实
    复现原版 `mbstowcs(NULL,..,0)>>2` 的 bug 形态；convertToUtf8 用 `c<=0x7f/0x7ff`
    与 `(c>>6)|0xc0`（int32 c，sar），convertFromUtf8 用 `(char)c>=0` 分支在前、
    `c<=0xdf/0xef` 无符号比较、3 字节项 `(unsigned short)(c<<12)`（shl+movzwl）。
31. **ServerXml/TinyXML**：CServerXml 208B（m_cCharSet[5]/TiXmlDocument@8/
    m_eCharSet@80/xmlFileName_@84/5 个 std::map@88..184）；_eStringType 值为
    SERVER=0/START=1/END=2（StrPunish 第三分支用 `test` 判 0，GetEventString
    cmp 1/2）；_eCharSetType KOR..TWN=0..4；StrPunish/GetEventString 为 switch 形态
    （cmp+je 跳转，最后一个 case 内联）；TinyXML 重构 TiXmlNode 28B 字段
    （row/col/document/parent/type/firstChild/lastChild/value/prev/next@0x28）+
    TiXmlDocument 72B（errorId@0x2c/error@0x30/errorDesc@0x34/tabSize=4@0x38/
    errorRow/errorCol/encoded@0x44），vtable 19 槽（Print@2/Parse@3/const ToXxx@4..9/
    ToElement@0x2c 槽 11/Clone@16/Accept@17/StreamIn@18）；LoadFile 走
    `fopen("rb")`+Parse 递归下降；仅 3 个 DIFF（分支方向/nop/静态初始化 nm 取末副本
    伪差异），语义全部等价。
32. **RDARScriptItemInfo**：CNRDItemInfoList 28B（vptr + std::map<int,STItemInfo*>）；
    STItemInfo 36B（nItemIndex_/rarity_/xaUsableCharacter_[11]/nOriginalUsableLevel_/
    sName_/sEnglishName_/category_@32）；NextToken 用静态 0x400 buffer + 韩文双字节
    分支（`*ptr=c1; ptr++; *ppszBuff++; *ptr=c2; ptr++; *ppszBuff++` 六语句形态）；
    findFileWithServerTokenInAuction 在末分隔符后插 `(R)`（substr(0,endIdx+1)+"(R)"+
    substr(endIdx+1,size)），ss_strcpy 用字面 0x104 而 MAX_PATH_ 局部仅初始化未用；
    Save 早退 return + `i<=0xa` 有符号循环 + `xa[i]?1:0` 三元；Clear 的 delete 自带
    判空缓存 ebx；ConvertAvatarCategory 直接改参数（23000→15000/19000、
    25000→17000/21000，`>22999&&<=23000` 双 cmpw 形态）；Load 逐行解析并
    `GetItemInfo==0 && nItemIndex_>0` 才入 map，剩余 DIFF 为原版 -O0 内联
    memset(rep stos) 与工具链差异（语义等价）。
33. **RDARScriptAvatarColorInfo**：AvatarVariation::AvatarColorInfo = avatarColorMap
    (map<int,colorRGB>)+avatarColorNameMap(map<int,string>) 48B；colorRGB 3B
    （red/green/blue，默认 0xff）；Parse_Table 用 DNFFLib::ExplodeString(" \t\r\n\"")
    拆 5 列并 bracketTrim 反引号成括号；importAvatarColorVariation 读
    AvatarColorVariation.etc 逐行解析（`0xfe < iParseCount` 上限）；getAvatarColorInfoInst
    函数局部 static + __cxa_guard + 每次重载；getAvatarColorValue 越界时把 index 钳到 0
    而非早退，命中分支 `return itr->second`（3B 结构 16 位+8 位拷贝）；getAvatarColorName
    0..0x1ff 越界返回 0，map 指针冗余判空。剩余 DIFF 为条件布尔物化（sete/jne）与
    寄存器分配差异（语义等价）。
34. **DBConnection**：0x42088 布局——h_db/m_res/m_row/m_len/m_num_rows/m_num_fields
    @0..0x14、m_query[0x6001]@0x18、temp_buf[10][0x6001]@0x6019（10×0x6001=0x3C00A，
    正确算到 0x42023，无多余成员）、m_query_len@0x42024、m_db_err@0x42028、
    dbIp_@0x4202c/dbPort_@0x4203c/dbAcc_@0x42040/dbPwd_@0x42054/dbName_@0x42068；
    init 用 `if(!ret) return false` 三段；open 的 mysql_real_connect 结果在条件内联
    （sete 物化 + SUCCESS/FAILED 双 printf）；set_query 用 `len<=0x5fff`（int len）；
    exec_query 重连逻辑（0x7d5/0x7dd/0x7d3/0x7d6 判定 + mysql_ping + err==0x7d6 重连）；
    mysql 客户端 17 个 API 用 weak 桩实现以便链接。剩余 DIFF 为 -O0 分支布局/寄存器
    分配差异（语义等价）。
35. **HandlerFor_DB_**：nsl::IDBHandler 派生，vptr@0 + mArrayFunc[126]@12（PMF 8B×126）+
    mSzBuffer[24576]@1020 + mTEA@0x63fc，总 25668B；init 清 0x7e 个 PMF 后
    registFuncMap 填 13 个（0..9/0x11/0x12/0x15/0x16），TeaInitialize 选 taiwan 变体，
    GameDB(0)/AuctionDB(1) 密码走 DecryptPassword（Hex2Binary + CTEA::Decrypt + strncpy 0x14），
    失败 exit(1)/(2)；SearchDBHandlerFunc 直接 `return mArrayFunc[typeId]`（PMF 隐藏返回槽）；
    GetAuctionMainFetchResult 按 `int col=i+1; i+=2` 首列跳 occ_time、随后 `col=i; i++`
    逐列读 27 列（uniItemAttr 两次位拼接 `&0xe0|(upgrade&0x1f)`、`&0x1f|(seal_cnt<<5)`、
    buyer_id/price 前置 1 字节清零怪癖原样复现）；DBTransactionDesign 补齐
    tagAUCTION_DB_REGIST_ITEM(181B)/UPPER_BIDDING(50B)/EXPIRE_HISTORY(128B)/
    BUYER_HISTORY(49B)/INSERT+UPDATE_AVERAGE_PRICE(55/59B)/SEND_PACKAGE(356B)/
    SEND_PACKAGE_BY_EXPIRE(735B)/ROI_AverageKey(24B)/ROI_Average_Constraint(24B)；
    onGAME_DB_SEND_PACKAGE_BY_EXPIRE 的 SendMessageToMonitor 里 owner 消息的
    RandomOption 传 buyer 的随机选项（0x01/0x05 分支原样复现原版怪癖）。
36. **DBConnection 访问器**：is_valid_col/get_n_rows/get_str/get_binary/get_int…get_int64
    共 14 个全部为**头内联弱符号**（原二进制 W），除 get_str/get_binary 外参数均为
    **引用形参**（EiRi/EiRj/EiRl/EiRm/EiRs/EiRt/EiRb/EiRh/EiRx/EiRy），必须在头里定义
    inline 并在调用 TU 内发射；`get_int64` 为 `unsigned long long&`（Ry 而非 Rx）。
37. **DBConnections**：getDBConnection/setDBConnection 为头内联（`mDbConnections[idx]`
    直接 map::operator[]，W 符号），无 .cpp。
38. **__int64 全局口径**：原二进制 DWARF 中 `__int64` typedef 底层为
    **unsigned long long**（encoding=unsigned，mangle `y`）；所有共享头（AuctionItem/
    Message/TimeManager/TimerThread/ServiceFactory/DBTransactionDesign）统一为
    `typedef unsigned long long __int64`。
39. **CMsgCell::GetSize/GetBuf 为 const 方法**（原二进制仅 `_ZNK` 弱符号），
    GetDBTr/GetPacket 非 const；DataPool::destroyTCPUser 调 `pSession->onClose(false)`。
40. **TeaInitialize**：kor/jpn/usa/taiwan 同 key（"qortmddk…guswn" 34 字节传 0x21）、
    china 用 "Service Management Framework bySCM"；chain 传 `nsl::CTEA::sm_chain0`
    （原二进制为 8 个 0x00，TEA.cpp 已由 "TEA" 修正）；`mTEA.Initialize(key,0x21,chain,0,0)`。
41. **DNFFLibWrapper**：Char2Hex 用静态 `"0123456789abcdef"`（小写）表；Hex2Char
    只认 0-9/a-f（大写非法）两字符拼装返回 bool；Binary2Hex 逐字节 strcat 形态。
42. **ServiceError**：COMMON_ERROR_LIST/AUCTION_ERROR_LIST 为**全局枚举**（非 nsl），
    make_pair 模板实例化符号 `_ZSt9make_pairI17COMMON_ERROR_LISTRA2048_cE...` 才能对齐；
    SetAuctionServiceErrorStr 以 `nsl::InitServiceErrorStr()` 开头，顺序 4,5,3,2,6..52,54
    （2/3 复用 COMMON 名）；共 52 条 insert（含 2/3 重复键覆盖）。
43. **Socket**：pollReadEvent/pollWriteEvent/pollErrorEvent 为 const 成员（T 符号），
    实现 `fd_set` 清零用 `p->fds_bits[i]` 循环（`i<=0x1f` 无符号 setbe）+ `FD_SET((unsigned int)sock_,...)`
    （shr/and 无符号位运算，6 个函数逐字节一致）；select 首参恒为 2（原版怪癖）；
    TCPSocket::getHandle 为 const、UDPSocket::getHandle 非 const；SetRecvBufSize/
    SetSendBufSize 为 void（写静态 msRecvBufSize/msSendBufSize）。
44. **HandlerFor_GA_**：nsl::INetWorkHandler 派生，vptr@0 + mArrayFunc[1024]@12（PMF 8B×1024）
    + mpSzBuffer[4096]@8204，总 12300B；ctor/dtor/init/registFuncMap/searchNetworkFunc 全为
    头内联 W（发射于 ServiceFactory TU），init = IHandler::init + registFuncMap + G_Auction()；
    registFuncMap 清 0x400 个 PMF 后按 0..14 填 15 个处理器（0x8073fe4..0x80764c6 顺序）；
    IsGoldServer 头内联（GetPayType()==PAY_TYPE_GOLD）；gmList[5] 静态 GM 表
    {0x4c2dc8,0x5cf723,0xa9c742,0xa2ad85,0x9ae1ae} 从 .data 提取；onAUCTION_ASK_AVERAGE_PRICE_GA
    需 std::sort(short[3]) 模板实例化（Ghidra 反编译失败，按反汇编语义重建）。
45. **Auction 数据包体系**（AuctionPacket.h）：AG/PG 应答包 + GA 请求包，packetID 按
    REGIST_ACK=0/ASK_AVERAGE=2/ASK_NUM=3/REGIST_RESULT=4/BIDDING=5/CANCEL=6/ITEM_LIST=7/
    MY_REGISTED=8/MY_BIDDING=9/LOG=0xb/CHECK_READY=0xd/BUY_APIECE=0xe，size 与 memset 一致；
    AuctionItemInfo 137B/MyRegistedItemInfo 117B/MyBiddingItemInfo 125B/
    TSearchByItemId_(23B)/TSearchByCategory_(25B)/AuctionDictionaryData(132B) 均按 DWARF 偏移；
    PCK_AUCTION_SEARCH_BY_ITEMKEY_GA 为唯一服务端构造的 GA 请求包（cat=0,id=6,size=0x81）。
46. **HandlerFor_GP_**（源文件 HandlerFor_GP_JPN.cpp）：与 GA 同布局（12300B，registFuncMap
    填 15 个处理器 0..14），IsPointServer 头内联；PG 应答包与 AG 布局差异——ASK_AVERAGE_PG
    只回 average_price（30B）、ASK_NUM_PG 无 unit_price/ROI（47B）、BIDDING_RESULT_PG 增
    owner_nexon_id[32]@40 + charge_point@72（76B）、LOG_MESSAGE_PG 无 result_because（54B）；
    onAUCTION_ASK_OWNER_IS_VIP_GP 用 OwnerInfo(8B) + IsOwnerVIP + GetAveragePrice；
    avatar 成功分支只调 AddAvatarEmblemInfo（无 expansion）；无 gmList 追踪循环。
47. **ExpireTimeDictionary**：vptr@0 + object_pool_by_boost_pool<Data,int,int,int>@4（32B）+ std::queue<Data*>@36，
    总 76B；ExpireTimeDictionaryData 12B（expire_time@0/auction_id@4，嵌套类型）；ctor 用
    `mExpireTimeDicQueue(std::deque<Data*>())` 复现局部 deque→queue 拷贝形态；Push 从池 malloc
    （NULL 返 9），Peek/Pop 空队列返 0x2c；Pop 后池 free。
48. **AuctionItem.h 打包修正**：`ReservedCapacity` 必须在 `#pragma pack(1)` 内（9B 而非 12B），
    否则 DnfItemInfo 变成 56B 而原二进制为 53B——修正后 RegistItem 的逐字节 struct copy
    末尾 `movzbl 0x34(%edx),%edx`（byte 尾拷）与 separate_info@0x2b 完全对齐；此改动影响
    所有包含 Auction.h/AuctionItem.h 的 TU，需连带重建。
49. **RegistItem 签名与流程**：原始 mangling
    `...EyiPKciijiR11DnfItemInfoliS1_RK12ROI_CategorycPc` 解码为
    `(unsigned long long, int, const char*, int, int, unsigned int, int, DnfItemInfo&,
     long, int, const char*, const ROI_Category&, char, char*)`（buyerName 是 `const char*`，
    ROI_Category 是**引用**）；价格归一用三元 `price = isInvalidPrice(price) ? price : -1`
    （原版 `test/je/mov/jmp/mov` 形态）；错误路径全部 `return 0x26/0x1f/4/9/10` 直返；
    字符名表写入用 `->char_name[0xd]`（越界一字节，原版 `movb $0x0,0xd(%eax)` 直偏移形态）。
50. **Bidding 语义修正**：auctionId 未找到必须 `return 0x24`（原版 `mov $0x24,%eax; jmp`
    直返，不是 error_code=0 落尾）；owner==buyerId 直返 0x2d；prev_buyer 校验用
    `if (prev_buyer_id != 0xffffffff) { error_code = SubAuctionId(...); if (error_code != 0)
    return error_code; }` 嵌套形态（原版 `cmpl/je/call/cmpl/je` 双跳，不物化 bool）；
    成功尾部 `return 0`（`mov $0x0,%eax`）。
51. **UpdateAveragePrice 头内联弱符号**：`AuctionDictionary::UpdateAveragePrice`（调
    mAvrgPriceDic@0xd8）与 `Auction::UpdateAveragePrice`（调 mAuctionDic@0x54）都是
    **头内联 W**，在 HandlerFor_TE_ TU 发射（24B/22B 相邻）；Auction 成员
    mAuctionDic（AuctionDictionary 16772B）@0x54，与 mpSzBuffer@0x41d8/mSearch@0x51d8 联动。
52. **getExpiringTime**：`expirationTime -= now_time;` 原地减法（原版 `sub %eax,0xc(%ebp)`
    写回参数槽），`< 0xe11` 返 1，否则 `(diff/0xe10)+1`（0x91a2b3c5 magic 有符号除法）。
53. **version TU C++0x 形态**：`source_version_list_.push_back(std::move(local_14))`
    （原版 `push_backEOS1_` 右值重载，触发 emplace_back/_M_insert_aux 模板实例化；
    lvalue 拷贝形态会缺 3 个符号）。
54. **ServiceFactory TU 全量重建**：原 cpp 从未编译（PortInfo/TCPSocket 签名与
    ActiveConManager 头不匹配），导致 249 个符号缺失。修正：PortInfo 的
    setTCPPort/setUDPPort 为成员调用、TCPSocket::SetRecvBufSize/SetSendBufSize 为
    **静态**成员、ActiveConManager 包含改 TActiveConnect.h 且 ctor 出线（成员序
    bools@0/1 → 锁@4/0x1c → map@0x34 → queue@0x4c，总 0x74）；startup 完整实现
    （TraceLog::init 结果存 ret 并 `if (ret >= 0)` 判断、handler 三表 init 遍历、
    mTimeHandlerNum 次 `threadWork_[i]->loop((void*)0)` 虚调用、Server Frame
    Start 横幅 + checkLogServer 分支）；shutdown 遍历 mDbConnections 逐连接 close。
55. **IHandlers getter 出线**：getNetWorkHandler/getInterHandler/getDBHandler 为
    **T 符号**（0x80aa0ce/0x80aa138/0x80aa1ac），源码形态 `find` 判存在后
    `return mNetWorkHandlers[category]`（operator[] 二次查找，复现原版
    find+end+operator!=+operator[] 序列）；iterator 声明用「默认构造 + 赋值」
    以发射 `_Rb_tree_iterator C2Ev`（4 个缺符号的根因）。
56. **InternalMsg 命名空间**：`INTERNALMSG_HEADER` 在 nsl，而
    `INTERNALMSG_SERVICE_UNAVAILABLE`/`INTERNALMSG_DESTROY_CHARACTER` 是
    **全局结构**（mangle `_ZN31`/`_ZN29` 无 nsl）；两个 ctor 都是
    `memset(this,0,sizeof)` + `setCategory(0/1)` + `setInternalMsgID(0)` +
    `setSize(sizeof)` + 置位（SERVICE_UNAVAILABLE 额外 `bActiveJob=false`，
    DESTROY_CHARACTER 的 `movb $0x0,0x4` 为 bActiveJob@4）。
57. **TCPDispatcher 两 setter 为 T**：SetMaxCategory/SetNullSessionHandler 是
    **出线定义**（非头内联，0x80addd8/0x80adde6 T），TCPDispatcher.cpp 定义；
    `dispatch` 只用 MaxCategory 比较，不从 dispatch 调 setter。
58. **Character getCharacKey/setCharacKey 出线**：T 符号（0x8068c22/0x8068c14），
    非头内联；isActiveTCPUser 仍为 W 头内联。
59. **EpollReactor shutdown**：`if (epoll_fd_ != -1) { close; epoll_fd_=-1;
    if (events_) operator delete[](events_); }`——用 **operator delete[] 显式调用**
    （避免 delete[] 自带的二次判空），且删除后**不复位 events_**（原版怪癖）。
60. **ServerLibrary2.0（App）TU 全量重建**：App 继承 nsl::LinuxService（无自有成员，
    handlerFor_GA_/GP_/TE_/DB_/interHandler/gameDataPool_[5]/pGameDbConnection/
    pAuctionDbConnection 均为**文件级全局**）；main 用
    `std::string(argv[3])` + `remove_if(bind2nd(equal_to<char>(),' '))` 修剪后
    `new App` → processCommandLine → 虚调用 `main(c_str())`；prepareRun 建
    ServiceFactory/4 个 handler/StatisticsCollector/GameDataPool/双 DBConnection/
    InterHandler 并注册 0/0x12 网络、0/1 DB、0/1 Inter handler；
    run 的 `while (!isTerminated_)` 循环 + `static bool onlyOnce`（仅一次
    INTERNALMSG_SERVICE_UNAVAILABLE(reason=3) 广播）；stop 用显式
    `~ServiceFactory()` + `operator delete`（避免 delete 二次判空）；main 与
    prepareRun 的 catch 按 `getFunctionName()!=NULL` 双分支打印
    "Main Exception : %d %s at %d in %s\n" / "Main Exception : %d %s\n"。
61. **IHandler::DBHandlerFunc 在 IHandler 基类**：typedef 嵌套于 IHandler（非 IDBHandler/
    HandlerFor_DB_），IDBHandler 纯虚 `SearchDBHandlerFunc(int)`（大写 S，mangle
    `_ZN3nsl10IDBHandler19SearchDBHandlerFuncEi`）返回该 typedef；HandlerFor_DB_
    的 registFuncMap 用 `(nsl::IHandler::DBHandlerFunc)` 显式转换（GCC 4.4 拒绝
    派生→基 PMF 隐式转换）。
62. **AuctionString（initAuctionString）**：`file==NULL` 早退；`StrLoading(file)` 后
    十二段 `getAuctionString(0..8/100/101/102, result)` + `strncpy(dest, c_str(), 0xff)`
    填 LETTER_TEXT[0..8]/SENDER_NAME/SENDER_NPC_NAME/SENDER_NAME_GOLD，每段
    `if (!result) return false;`；LETTER_TEXT 为 `char[9][255]`（BSS 0x8f7）。
63. **build-auction.sh 修正**：`nm "$OBJS"` 去掉引号（zsh/bash 分词差异导致 stub_main
    重复）；移除 stub_main.o 后真实 main 生效。

## 剩余缺口分布（按 TU，MISSING 数）

```
656  Search                448  Auction
  ...
```

## 下一步

1. ServerCommon + Core + DNFShared：Strings/UnicodeConvert/ServerXml(+TinyXML)/
   RDARScriptItemInfo/RDARScriptAvatarColorInfo/DBConnection(+mysql 桩)/
   HandlerFor_DB_/TeaInitialize/DNFFunctionLibWrapper 已全量完成。
2. 字典类：AveragePriceDictionary / CharacterDictionary / ExpireTimeDictionary /
   ReliabilityDictionary 已完成；AuctionDictionary 已完成（本批）。
3. 大块：Search（656）/ Auction（448）/ ServerLibrary2.0 + ServiceFactory 已完成。
4. 全量复验 DIFF/MISSING，移除临时桩，产出 docs/df_auction_r_restoration_report.md，commit & push。
