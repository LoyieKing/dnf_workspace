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
| 已实现 TU | 20（本批新增 Strings 全部符号） |
| IDENTICAL | 1,809 |
| NEAR | 20 |
| DIFF（语义等价，-O0 惯用法） | 273 |
| MISSING（未实现） | 2,634 |

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

## 剩余缺口分布（按 TU，MISSING 数）

```
720  Search                477  Auction               180  ServerLibrary2.0
176  AuctionDictionary     150  AveragePriceDictionary 149  CharacterDictionary
144  ServiceFactory        106  ServerXml              98  HandlerFor_DB_
 87  ExpireTimeDictionary   85  RDARScriptItemInfo    81  RDARScriptAvatarColorInfo
 44  UnicodeConvert         32  HandlerFor_GP_JPN     32  HandlerFor_GA_
 19  DBConnection           10  ServiceError(余量)     9  Socket(余量)
  6  TeaInitialize(余量)     4  DNFFunctionLibWrapper(余量)
  ...
```

## 下一步

1. 补齐框架遗留：DBConnection（19，需 mysql 头/桩）。
2. ServerCommon + Core + DNFShared：Strings 已全量完成；下一步 ServerXml（106）、
   UnicodeConvert（44）、RDARScript*（约 166）。
3. 字典类：AuctionDictionary / AveragePriceDictionary / CharacterDictionary /
   ExpireTimeDictionary / ReliabilityDictionary。
4. 大块：Search（731）/ Auction（533）/ HandlerFor_GA_/DB_/GP_JPN / ServiceFactory /
   ServerLibrary2.0。
5. 全量复验 DIFF/MISSING，移除临时桩，产出 docs/df_auction_r_restoration_report.md，commit & push。
