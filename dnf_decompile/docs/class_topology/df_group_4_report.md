# df_game_r G4 组拓扑还原报告（服务器框架 / 网络 / 分发域）

分析对象：`/tmp/df_group_4_classes.txt`（955 个类路径）、`df_core_classes.txt`（G4 前缀 51 项）、
`df_class_methods.txt`、`df_syms_demangled.txt`、`df_text_disasm.txt`、`packet_master_corpus.txt`
以及二进制 `df_game_r`（i386 ELF，无符号剥离后仍有完整 demangled 符号）。

方法：以符号表（vtable/typeinfo/ctor/dtor/方法签名）+ 反汇编（构造函数基类调用链、注册表数组偏移）+
反编译语料交叉验证；未修改任何源码。

构成统计（955 项）：

| 类别 | 数量 | 说明 |
|---|---:|---|
| DisPatcher_/Dispatcher_/Dispather_/…（客户端包分发） | 401 | `IPacketDispatcher<MSG_X, Param, ch_state>` 派生 |
| Inter_*（服务器间 sig 分发） | 311 | `ISigDispatcher` 派生，另含 4 个 InterSelect*（台湾内部） |
| Timer_*（定时器分发） | 32 | `TimerSig` 派生 |
| MSG_* / NOTIPacketStruct::*（包结构常量） | 71 | 假类/常量组，见第 5 节 |
| StaticPool/DynamicPool 模板实例 | 25 | 含池节点 CNode |
| ServerProxy 家族 | 10 | 见核心类表与继承树 |
| exchange_server 家族 | 10 | 角色交换/缓存服务 |
| Statistics / message_counter / 统计子系统 | 15 | 统计与计数 |
| 网络/线程/锁/队列基础设施 | 14 | CNetwork、线程、Epoll、MsgQueue 等 |
| Stream/Packet 缓冲 | 5 | Stream 家族 + PacketBuf |
| DNFLex 脚本词法 | 4 | DNFLex/Wrapper/嵌套类型 |
| DB 客户端设施 | 2 | DbmwClient、CDBConnector |
| 其余数据/杂项 | 55 | 见长尾节 |

---

## 1. 核心类深挖

### 1.1 ServerProxy 家族

重要修正：任务假设“BaseServerProxy ← 各 Proxy”，实际只对 **Hades/Auction/CeraAuction** 成立
（三者 ctor 首调用 `BaseServerProxy::BaseServerProxy(char*,int,char*)` 且持有独立 vtable）。
其余 “Proxy” 是**非多态类**，直接内嵌 `CNetwork<100000,100000>`（TCP）和/或 `CUdpHandler` 成员，
ctor 中无基类调用（已逐个核对反汇编）。详见 1.9 继承树。

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---:|---|---|---|---|
| BaseServerProxy | 23 | 多态 TCP 代理基类（名字/IP/端口），管理一条到远端服务器的连接；派生类复写 Parsing 解析远端包 | Init、InitTcp、SendTcpPacket、Disconnect、OnTcpRecv/Send/Error、OnDisconnect、GetTcpHandler、GetSocketState/SetSocketState | CNetwork<100000,100000>、std::string | 服务器框架/连接代理 | 高 |
| CGuildServerProxy | 77 | 公会服务器客户端：登录/心跳 + 约 40 个 Send*（公会创建/邀请/退出/改名/仓库/公告板/邮件/修炼场/PowerWar/资金等）+ Parsing 回包；附带代理侧公会信息缓存（map<uint,STGuildProxy>） | SendLogin、SendCallGuildInfo、SendGuildCreate、SendGuildWarStart/End、SendPacketCallGuildMembers、Insert/Get/Modify/LoadGuildInfoProxy、Parsing、OnBuyItem | CNetwork<100000,100000>、CUdpHandler、std::map<uint,STGuildProxy>、CServerProxyMgr<CGuildServerProxy> | 公会服务器代理 | 高 |
| CMonitorServerProxy | 43 | 监视（Monitor）服务器客户端：登录/心跳/上报频道与玩家信息/惩罚与税收请求/塔排行更新等 | SendLogin、SendGameServerInfo、SendExchangeServerInfo、SendNoticeCharLive、SendNotifyNewMail、SendMemberPayTax、SendUserRepel、updateTowerRank、Parsing | CNetwork<100000,100000>、CUdpHandler、CServerProxyMgr<CMonitorServerProxy> | 监视服务器代理 | 高 |
| CCommunityServerProxy | 24 | 社区服务器客户端：PvP 好友（Buddy）增删/列表同步 | SendLogin/Logout、SendReqAddPvPBuddy、SendResAddPvPBuddy、SendPvPBuddyList、SendRemovePvPBuddy、Parsing | CNetwork<100000,100000> | 社区服务器代理 | 高 |
| CPCRoomServerProxy | 20 | PC 网吧（PCRoom）服务器客户端：上下机登录/登出，Parsing 处理回包 | SendLogin/Logout、SendTcpPacket、Parsing、Init/InitTcp | CNetwork<100000,100000>、GlobalData::s_pcroom_proxy | PC 房服务器代理 | 高 |
| CStatisticServerProxy | 12 | 统计服务器客户端（**纯 UDP**，CUdpHandler），全部统计数据包经 SendPacket 投递 | SendPacket、SendFileStatistic、Init | CUdpHandler、CServerProxyMgr<CStatisticServerProxy>（GlobalData::s_statistic_proxy_mgr） | 统计上报 | 高 |
| CAuctionServerProxy | 12 | 拍卖服务器客户端（继承 BaseServerProxy）：注册/就绪检查/发包 | SendPacket、SendRegistPacket、SendCheckAuctionReadyPacket、Parsing、IsRunning/SetRunning | BaseServerProxy | 拍卖服务器代理 | 高 |
| CCeraAuctionServerProxy | 12 | Cera 拍卖（点券拍卖）服务器客户端，结构与拍卖代理同构 | SendPacket、SendRegistPacket、SendCheckCeraAuctionReadyPacket、Parsing、IsRunning | BaseServerProxy | 拍卖服务器代理 | 高 |
| CHadesServerProxy | 11 | Hades 反作弊服务器客户端（TCP+UDP 双通道）：初始化/连接/心跳/告警 | HadesSvrInit、ConnTcpHadesSvr、RunConnTimer、SendHeartBeatPacket、SendHadesTcpPacket、SendHadesUdpPacket、GetHadesSocketConnSec、IsConnect | BaseServerProxy、CUdpHandler | 反作弊(Hades) | 高 |
| CSchoolServerProxy | 5 | 学院（School）服务器客户端（UDP） | SendPacket、Init | CUdpHandler、GlobalData::s_school_proxy | 学院服务器代理 | 中 |
| CDoubleConnCheckServerProxy | 8 | 双开检测服务器客户端（UDP）：心跳/登录/登出 | SendHeartBeat、SendLogin、SendLogout、SendPacket | CUdpHandler、GlobalData::s_double_check_proxy | 反双开 | 中 |
| CmmChannelProxy | 11 | 频道桥接服务器（CMM/Bridge）客户端：连接桥服、上报频道信息、校验频道脚本 | ConnectBridgeServer、SendChannelInfo、SendCheckChannelScript、RecvPacket、SendPacket、Init | CUdpHandler、std::string | 频道管理/桥接 | 中 |
| CServerProxyMgr\<CMonitorServerProxy\> | 10 | 代理管理模板实例（Monitor）：按索引数组管理 N 个代理实例，按轮转取用 | GetServerProxy、GetServerProxyArrayAt/Size、GetStart/End/NextIndex、createServerProxy | CMonitorServerProxy | 代理管理 | 高 |
| CServerProxyMgr\<CGuildServerProxy\> | 10 | 同上（Guild 实例，GlobalData::s_guild_proxy_mgr） | 同上 | CGuildServerProxy | 代理管理 | 高 |
| CServerProxyMgr\<CStatisticServerProxy\> | 10 | 同上（Statistic 实例，GlobalData::s_statistic_proxy_mgr，无 Array 变体） | GetServerProxy、GetStartIndex 等 | CStatisticServerProxy | 代理管理 | 高 |

### 1.2 流 / 包缓冲

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---:|---|---|---|---|
| Stream | 47 | 序列化缓冲流（有 vtable）：输入/输出双向，可切 big/small 模式；全服发包/收包的基础载体 | enable_in/enable_out、put_binary/get_binary、put/get via operator<< >>、resize/reset、length/str_len、set_big_stream/is_big_stream、in_ptr/out_ptr | 自身 vtable；被 StreamPool/guard 管理 | 网络缓冲 | 高 |
| PacketBuf | 76 | 客户端原始包缓冲（无 vtable，约 0x978 布局）：绑定网络包、逐字段读写、头/长度/索引管理、压缩与加密 | bind_packet、get/put_byte/short/int/str/binary/item_idx、put_header、get_len/get_packet、encrypt_packet/encFinalize、compress_packet/isCompressRequired/isEncryptRequired、finalize/is_finallized、getLastError/setLastError | 无（纯数据结构），由 PacketPool/DynamicPool 管理 | 包缓冲 | 高 |
| InterfacePacketBuf | 31 | PacketBuf 的薄适配层（非虚）：把 PacketBuf 操作封装成独立接口，供 DB/代理等子系统引用 | AcquirePacketBuf、bind_packet、get/put_*、finalize、getLastError | PacketBuf | 包缓冲接口 | 高 |
| CStreamGuard | 21 | 流 RAII 守卫：作用域内取 Stream，析构自动归还；模板 GetInBuffer\<SIG_X\>() 把入站 sig 数据反序列化到类型化结构 | Get、put_binary、operator->/*/<<、GetInBuffer\<SIG_LOAD_ETC\> 等 30+ 实例 | Stream、StreamPool | 网络缓冲管理 | 高 |
| PacketPool | 11 | PacketBuf 线程池（Acquire/Free + getThreadID/setThreadID），按线程回收包缓冲 | Acquire、Free、getThreadID、setThreadID | PacketBuf | 包缓冲池 | 高 |

### 1.3 分发器家族（核心）

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---:|---|---|---|---|
| PacketDispatcher | 12 | 客户端包分发注册表（单例，G_PacketDispatcher）：606 槽 `IDispatcher*[606]`；ctor 内 `new` 出 425+ 个 DisPatcher/Dispatcher 实例并写入 `slot[msgid]`；doDispatch 完成日志/反外挂/安全校验后调 dispatcher 虚入口 | dispatch、doDispatch、getDispatcher/get_dispatcher、log_recv_packet、server_load_monitoring | IDispatcher、IPacketDispatcher、CLocalChinaErrorDispatcher、CUser、PacketBuf、_NS_PI_Check_CMD | 客户端包分发 | 高 |
| IPacketDispatcher\<CMDPacketStruct…\> | 22 | 事件副本类分发器模板实例（CMDPacketStruct::_STReq/_STRes 型消息） | dispatch_template/read/process/send/check_state | CMDPacketStruct | 客户端包分发 | 高 |
| DBTask | 11 | DB 工作线程任务：从 MsgQueueMgr 队列取消息 → DBProcess，按消息注册分发到 DBDispatcher | HandleEvents(QUEUE_IDX)、DBProcess、RegistDispatcher/UnregistDispatcher | MsgQueueMgr、DBDispatcher | DB 分发 | 中 |
| MsgQueueMgr | 10 | 线程间消息队列（Stream* 消息）：按 QUEUE_IDX 多队列 put/get/empty/remain | put、get、empty、remain、get_queue_name | Stream、CStreamGuard | 线程通信 | 高 |
| TimerQueue | 11 | 全局定时器优先级队列（单例 G_TimerQueue）：InsertTimer(OBJ_TYPE,id,TIMER_MESSAGE,…)/毫秒版，GetTimerMess 出队 | InsertTimer、InsertTimerInMilisecond、GetTimerMess、GetQueueSize、write_timer_queue_log | TimerEntry、GlobalInstance\<TimerQueue\> | 定时调度 | 高 |
| TimerQueueSizeLog | 7 | 定时任务：周期输出 TimerQueue 队列大小日志 | dispatch_sig(int,int,uint)、RegistNextTimer | TimerSig、TimerQueue | 定时调度 | 高 |
| EpollHandler | 11 | epoll fd 封装：init/SetEpoll/GetEpollEvents/ResetEpoll/release | 同上 | 内核 epoll | 网络事件 | 中 |
| CUdpHandler | 11 | UDP 套接字封装：客户端/服务端初始化、四向收发（Client/Server） | InitClientSocket、InitServerSocket、SendToClient/Server、RecvFromClient/Server、InetAddr | socket | UDP 网络 | 高 |
| UdpThread | 11 | UDP 处理线程（ThreadInterface）：收包 → _processUDPData → dispatch | dispatch、_processUDPData、_bindUDPSocket | ThreadInterface、CUdpHandler | 网络线程 | 中 |
| NetworkThread | 7 | 主网络线程：跑 PacketDispatcher 分发循环 | dispatch | ThreadInterface、PacketDispatcher | 网络线程 | 高 |
| MonitorTcpThread | 7 | 监视服务器 TCP 线程（GlobalData::s_monitor_tcp_thr） | dispatch | ThreadInterface、CMonitorServerProxy | 网络线程 | 中 |
| ThreadInterface | 10 | 可移植线程基类（pthread 封装） | begin、join、stop、getThreadID、dispatch_proxy | 无 | 线程框架 | 高 |
| RwSpinLock | 12 | 读写自旋锁（读/写可重入计数） | enterRead/Write、leaveRead/Write、isReadTaken/isWriteTaken | 原子指令 | 同步原语 | 高 |
| Mutex | 6 | 互斥量封装 | lock、unlock | pthread mutex | 同步原语 | 高 |
| OS_API | 11 | OS 抽象：Sleep/uSleep、GetDateTimeTick、WriteLog/WriteLoginInfo/WriteLastBookmark/WriteLastSig、snprintf、Exit | 同上 | libc | 平台抽象 | 高 |
| Tick | 21 | 时间刻度值包装（内部毫秒值），定时器记账用 | now/setNow/getInternalValue、算术与比较运算符 | 无 | 时间 | 高 |
| CSharedServerMessageManager | 20 | 全服共享公告（server message）管理：设置/更新/切换/删除公告，检查用户条件，DB 加载，广播 | SetServerMessage、UpdateServerMessage、IsChangableMessage、CheckUserCondition、LoadServerMessageFromDB、SendServerMessageInfo、SetServerMessageAddInfo | CGameManager（GetSharedServerMessageManager）、CSharedServerMessageAdapter | 共享消息 | 高 |
| CSharedServerMessageManager::CSharedServerMessageAdapter | 8 | 公告槽适配器：把事件映射到公告槽位/索引，判断是否开启 | GetMappedEventID、GetShareKindWithIndex、IsOnIndex、SetServerMessageAddInfo | CSharedServerMessageManager | 共享消息 | 中 |

### 1.4 Inter_LoadEtc（26 符号，Inter 家族代表）

服务器间 sig 32（`Inter_LoadEtc`）处理器：登录后“杂项数据”装载/回填。基类 `ISigDispatcher`
（ctor 调用 `ISigDispatcher::ISigDispatcher()`，vtable {dispatch_sig, ~dtor, ~dtor}）。

关键方法：`dispatch_sig(CUser*,char*,int)`、`SendResult`、`SetFatigue`、`SetPvpRecord`、
`SetRankRecord`、`RequestDBEventArad`、`ProcessOneDayLethe/2ND`、`giveBreakAwayReward`、
`verifyCharacVillage`、`_checkUserDisadvantage`、`processAttendAnceEvent`、
`processGrowthWeaponEvent`、`processGrowthCreatureEvent`、`processSeriaRoomAniDecoEvent`、
`_fnEnumQuestClear`。依赖：CUser、CUserCharacInfo、SIG_LOAD_ETC、CStreamGuard。
子系统：服务器间数据装载。置信度：高。

### 1.5 DisPatcher_SelectCharac（24 符号）

客户端 msgid 4（`MSG_CHARAC_SELECT`，`IPacketDispatcher<MSG_CHARAC_SELECT, stSelectCharac, ch_state2>`）
选角分发器：触发 DB 装载（Charac/Inven/Skill/Quest/Ticket/Etc/KillMonsterInfo/DungeonClear/
Inventory_forchina/BlackCount），检查 PvP 进入条件，注册定时调度。
关键方法：`RequestDBCharac/Inven/Skill/Quest/Ticket/Etc/KillMonsterInfo/DungeonClear/Inventory_forchina`、
`RequestBlackCount`、`checkPvpEnterCharacter`、`RegistTimerSchedules`、`check_error/read/process/send`。
依赖：CUser、CUserCharacInfo、DBDispatcher、TimerDispatcher。子系统：登录/选角流程。置信度：高。

### 1.6 DisPatcher_DebugCommand（51 符号）

客户端 msgid 65（`MSG_DEBUG_COMMAND`）GM 调试命令分发器：25+ 个 `_debugCommand*` 子命令
（SetLevel/SetSkill/AddItem/AddAvatar/PowerUp/UserRepel/ClearInven/ClearSkill/PVPRankSet/
SetEnchant/GuildLevelUp/CargoCapacity/PowerWar*/BlackCount/UserDefine/RequestMid…），
`dispatch_sig` 按子命令路由。依赖：CUser、PacketBuf。子系统：GM/调试。置信度：高。

### 1.7 exchange_server 家族

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---:|---|---|---|---|
| exchange_server::CExchangeServer | 51 | 角色交换服务器子系统：被动监听交换服连接、注册/注销交换服务器、按需请求/回复角色信息、缓存并转发角色数据 | RegisterExchangeServer、PreparePassiveSocket、DispatchPacket/DispatchMessage、SendRequestCharacInfo、OnRecvPacketCharacInfo(Ret)、SetMaster/SetSlave、Reset、ReturnCacheCharacter | IExchangeServer、CSessionManager<CSession,PacketGuard,CEpoll>、ExchangeServerInfo、StaticPool<CSession,300>、map<int,ExchangeServerInfo> | 角色交换 | 高 |
| exchange_server::CSession | 29 | 一条到交换服务器的连接（双 CNetwork<95000,450000> 收发缓冲）：listen/connect、事件回调、Parsing | Listen、Connect、OnAccept/OnRecv/OnSend/OnError、Parsing、Send、Set/GetChannelNo、Set/GetTriggerSessionEventType | CNetwork<95000,450000> | 角色交换 | 高 |
| exchange_server::CExchangeServerThread | 7 | 交换服务器事件循环线程 | dispatch | ThreadInterface、CExchangeServer | 角色交换 | 中 |
| exchange_server::CEpoll\<CSession\> | 7 | 会话 epoll 封装 | RegisterSession、UnregisterSession、WaitForEvent | epoll、CSession | 角色交换 | 中 |
| exchange_server::CSessionManager\<CSession, PacketGuard, CEpoll\> | 9 | 会话注册表（模板实例） | CSession 数组管理（头文件展开，符号少） | CSession、PacketGuard、CEpoll | 角色交换 | 中 |
| exchange_server::CCacheCharacterMgr | 10 | 交换角色缓存：Mutex + StaticPool<CACHE_CHARACTER_TYPE,1000> + map<int,CACHE_CHARACTER_TYPE*> | AcquireCharacter、CacheCharacter、FreeCharacter、CollectGarbage、GetCacheCharacter | Mutex、StaticPool、map | 角色交换 | 高 |
| exchange_server::CExchangeServerHitRate | 12 | 交换服务器命中率统计 | 计数/命中率运算 | ExchangeServerInfo | 角色交换 | 中 |

### 1.8 其余核心

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---:|---|---|---|---|
| DbmwClient | 29 | DB 中间件（dbmw）客户端：注册到中间件、执行查询、收应答、断线重连 | Regist/RegistToMiddleware/ReceiveRegistAck、DoQuery/DoReceive、Connect/Reconnect、IsConnected/IsInitialized、SendHeader、set_query/exec | socket、缓冲 | DB 中间件 | 高 |
| CDBConnector | 14 | MySQL 连接管理器（主/从组）：按服务器组连接、查询连接信息 | Connect/Open、ConnectWithServerGroup、OpenMaster/CloseMaster、QueryConnInfo、GetConnInfo | MySQL C API | DB 连接 | 高 |
| DNFLex | 26 | DNF 脚本 flex 词法器（yylex/get_next_token/tok_str），流栈管理（Push/Pop/SwitchInputStream） | LoadStream、yylex、get_next_token、Enable/DisableInclusion、SetHandler、LexerError | flex | 脚本词法 | 高 |
| DNFLexWrapper | 36 | DNFLex + CompiledDNFLex 的包装：类型化取词（string/decimal/float/hex/pair），字符串表装载 | LoadStream、getToken/getType/getString/getDecimal/getPairInt、setStringTableFromFile/Buffer、switchChannelInputStream | DNFLex、CompiledDNFLex | 脚本词法 | 高 |
| Statistics | 16 | 运行时统计聚合（副本/合成/分解/罐子/PvP/Shusia/排行信号），经 CStatisticServerProxy 上报 | DungeonClear/Fail/GiveUp、Composition/Decomposition/BreakJar、PVPPlay2/RankResult、SendSignal、UseShusiaService | CStatisticServerProxy | 统计 | 高 |
| StatisticsPvP | 16 | PvP 房间粒度统计（按 PvP_Key 索引房间结果，锁保护） | incPvPRoomResult、lock/unlock、reset | PvP_Room | 统计 | 中 |
| StatisticsShusiaService | 11 | Shusia 服务使用次数/失败计数 | incServiceUsage、incDungeonFailure、getServiceUSage | 无 | 统计 | 中 |
| StatisticsNatType | 9 | NAT 类型统计（IncreaseNatType/UpdateNatType/Reset） | 同上 | NAT_TYPE_PEER_TO_PEER、RESULT_COUNT | 统计 | 中 |
| message_counter::CUserPacketCounter | 7 | 每用户包计数（PacketDispatcher::pUserPacketCounter_），周期写日志 | IncreasePacket、WriteLog | CTimeInterval | 消息计数 | 高 |
| message_counter::CMessageCounter | 6 | 消息（Inter/Timer）计数 | IncreaseMessage、WriteLog | CTimeInterval | 消息计数 | 高 |
| AvatarRechargeServer | 25 | 时装耐久/充值系统：Load/Recharge、耐久计算（CalcDurability*）、徽章加成、GM 调参、上报 | Load、Recharge、SaveAvatarEnduranceUnit、CalcDurability、GetRateFromEmblemGrade、UseEmblem、SendDurability | CDataManager、CStatisticServerProxy | 时装耐久 | 中 |
| AvatarFixedHiddenOptionServer | 17 | 时装固定隐藏属性生成：随机输入/技能索引校验/属性变更 | GetRandomInput、GetSkillIndex、ChangeHiddenOption、IsVaildSkillIndex、Load | CDataManager | 时装属性 | 中 |
| EmblemCompoundServer | 15 | 徽章合成：随机徽章/结果可选判定/测试 | GetEmblemInfo、GetEmblemRandomIndex、IsResultSelectable、Process、Load | CDataManager | 徽章合成 | 中 |
| AvatarConvertServer | 14 | 时装转换（含统计上报） | Convert、CheckCondition、StatisticsAvatarDisjoint、StatisticsEmblemCreate | CStatisticServerProxy | 时装转换 | 中 |
| CDispatchServerPacket | 6 | 向拍卖/点券服务器分发包的辅助 | dispatchAuctionPacket、dispatchPointPacket、dispatchPacket | CAuctionServerProxy、CCeraAuctionServerProxy | 分发辅助 | 中 |
| InterSelectPcroomDailyReward | 12 | 台湾内部“DB SELECT”型 Inter 处理器：PC 房每日奖励查询（TaiwanInterfaceInterDispatcher 基类） | makeRequest、dispatch_sig、SendPacket、Msg* | TaiwanInterfaceInterDispatcher | 区域内部消息 | 中 |
| InterSelectMobileAuthReward / InterSelectCreateDnfUserInfo / InterSelectCreateDnfEventInfo | 11 | 同上：手机认证奖励 / 创建 DNF 用户信息 / 创建 DNF 活动信息 | makeRequest、dispatch_sig | TaiwanInterfaceInterDispatcher | 区域内部消息 | 中 |
| MapArea | 10 | 地图区域集合（范围包含判断） | include、clear、operator= | 无 | 区域判断 | 中 |
| NeedMaterialDataManager | 9 | “所需材料”数据单例管理 | getInstance、getNeedMaterial、setNeedMaterialInfo | 无 | 配置数据 | 中 |
| MemPool\<CAdvertisementExposeInfo\> | 9 | 广告曝光信息的内存池（空闲链表） | alloc、free、headOfFreeList_ | CAdvertisementExposeInfo | 内存池 | 中 |

---

## 2. 分发机制规律（核心产出）

df_game_r 中有 **四条平行分发链**，全部是“**注册表数组 + 接口基类 + 每消息一个派生类**”：

```
客户端包    PacketDispatcher[msgid=0..605]  → IDispatcher → IPacketDispatcher<MSG_X, ParamT, ch_state>  ← DisPatcher_X / Dispatcher_X
服务器间    InterDispatcher[sig=0..851]     → ISigDispatcher                                   ← Inter_X / InterSelect*
定时器      TimerDispatcher[timer=0..174]   → TimerSig                                       ← Timer_X
DB 任务    DBTask → MsgQueueMgr → DBDispatcher                                              ← DB_*（G5 组）
区域内部    TaiwanInternalDispatcher / ARAD::DISPATCHER::Arad_InternalDispatcher（std::map<枚举, 接口>） ← 台湾/日服专用
```

证据（反汇编）：
- `PacketDispatcher::PacketDispatcher()`：先清零 `this[0..0x25d]`，随后逐条
  `new Dispatcher_X` 并 `mov %edx, offset(%eax)` 存入 `slot[msgid]`（offset/4 = msgid，
  已恢复 425+ 条注册，如 slot4=DisPatcher_SelectCharac、slot21=DisPatcher_BuyItem、
  slot603=Dispatcher_Antibot）。另含 `CLocalChinaErrorDispatcher` 成员（偏移 0x978）。
- `InterDispatcher::register_dispatcher(sig, ISigDispatcher*)` 与 `get_dispatcher(int)` 均为
  `arr[4*sig]` 直读；ctor 清零 `arr[0..0x353]` 后注册 310+ 个 `Inter_*`（slot1=Inter_Disconnect、
  slot3=Inter_LoginInfo、slot7=Inter_LoadCharac、slot8=Inter_LoadInven、slot32=Inter_LoadEtc…）。
- `TimerDispatcher` 同样为 `arr[0..0xae]`，ctor 注册 161+ 个 `Timer_*`。
- `IPacketDispatcher<MSG_X,Param,ch_state>` vtable = {dispatch_template, ~dtor×2, dispatch_sig,
  check_state, read, process, send}；派生类仅覆写 read/process/send（已核对 DisPatcher_BuyItem
  vtable 08bdc2c0 vs 基类 vtable 08bde800）。
- `dispatch_sig` 返回非 0 时 `PacketDispatcher::doDispatch` 调 `CUser::DisConnSig` 断开。
- `InterDispatcher::dispatch` 先 `CGameManager::getUser` 定位 CUser 再虚调 `dispatch_sig(CUser*,char*,int)`。

### 2.1 命名规则 → 处理什么消息

| 命名前缀 | 基类/注册表 | 语义 | 举例 |
|---|---|---|---|
| `DisPatcher_X`（旧命名） | IPacketDispatcher\<MSG_X, stXParam, ch_state S\>，slot = MSG_X 枚举 | 客户端消息 X 的处理者 | DisPatcher_BuyItem → MSG_BUY_ITEM(21) |
| `Dispatcher_X`（新命名） | 同上 | 同左（仅命名风格差异） | Dispatcher_GuildCargo → slot 265 |
| `Dispather_X` / `DIspatcher_X` / `Dispatcer_X` / `DispatcherReset…` | 同上 | 拼写错误的同族类 | Dispather_RegenerationRandomOption(slot407)、DIspatcher_OneDayLetheTicket(213)、Dispatcer_polic_one_to_one_chat_disable(330)、DispatcherResetRandomOption(456/720) |
| `Inter_X` | ISigDispatcher，slot = sig id | 服务器间 sig X 的处理者 | Inter_LoadEtc(32)、Inter_MonitorLoginOK(65) |
| `InterSelect*` | TaiwanInterfaceInterDispatcher（台湾内部） | 台湾内部 DB SELECT 型消息 | InterSelectPcroomDailyReward |
| `Timer_X` | TimerSig，slot = timer id | 定时器 X | Timer_Midnight、Timer_QuickPartyWaitingPartyMatching |
| `TimerSig`/`TimerEntry`/`TimerQueue`/`TimerDispatcher` | 基础设施 | 定时器基类/条目/队列/注册表 | — |
| `DB_X`（G5 组） | DBDispatcher | DB 读写任务（本组仅相关依赖） | DB_LoadEtc 等 |
| `CLocalChina_*` / `Taiwan*` / `ARAD::DISPATCHER::*` | 区域分发器 | 中国本地/Taiwan/Arad 区域专属 | CLocalChinaErrorDispatcher、Arad_InternalDispatcher |

IPacketDispatcher 第三模板参数 `ch_state` 为所需用户状态门控（`check_state` 比较
`CUser::get_state()`；常见值 0=无要求/非负、2=选角/建角阶段、3=游戏中、5=特殊状态）。

### 2.2 代表分发器抽查（客户端，取符号数大的）

| 类 | 符号 | msgid | 模板消息 | 一句话作用 |
|---|---:|---:|---|---|
| DisPatcher_DebugCommand | 51 | 65 | MSG_DEBUG_COMMAND | GM 调试命令集（25+ 子命令） |
| DisPatcher_SelectCharac | 24 | 4 | MSG_CHARAC_SELECT | 选角并触发全量 DB 装载 |
| DisPatcher_BuySkill | 17 | 31 | MSG_BUY_SKILL | 购买技能（含状态门控） |
| DisPatcher_BuyItem | 15 | 21 | MSG_BUY_ITEM | 商店购买（限购/统计） |
| DisPatcher_CreateCharac | 15 | 5 | MSG_CREATE_CHARACTER | 创建角色（送礼包） |
| DisPatcher_UseCoin | 15 | 44 | MSG_USE_COIN | 使用金币 |
| DisPatcher_MoveMap | 14 | 48 | MSG_MOVE_MAP | 地图移动 |
| DisPatcher_DeleteCharac | 14 | 6 | MSG_DELETE_CHARACTER | 删除角色 |
| DisPatcher_DeleteItem | 14 | 18 | MSG_DELETE_ITEM | 删除物品 |
| DisPatcher_DieCharacInDungeon | 13 | 43 | MSG_DIE_CHARACTER | 副本内角色死亡 |
| DisPatcher_UseSkill | 11 | 41 | MSG_USE_SKILL | 使用技能 |
| DisPatcher_StartGame | 11 | 15 | MSG_BASE/stStartGameParam | 开始游戏 |
| DisPatcher_Login | 10 | 1 | —（独立 dispatch_sig） | 登录握手 |
| Dispatcher_RequestMemberEnter | 11 | 79 | — | 请求队员进入 |
| Dispatcher_MailBox_Send | 12 | 97 | MSG_MAILBOX_SEND | 发送邮件 |
| Dispatcher_EPLPCommand | 13 | 75 | — | EPLP（点券活动）命令 |
| Dispatcher_New_Gmdebug_Command | 11 | 179 | — | 新版 GM 调试命令 |
| Dispatcher_SecurityCardAuthRpy | 12 | 167 | MSG_SECU_RPY | 安全卡认证应答 |
| Dispatcher_GuildCargo | 10 | 265 | MSG_BASE/stGuildCargoParam | 公会仓库主菜单 |
| Dispatcher_Antibot | 9 | 603 | — | 反外挂（Antibot）应答 |

### 2.3 代表 Inter 类抽查

| 类 | 符号 | sig | 一句话作用 |
|---|---:|---:|---|
| Inter_LoadEtc | 26 | 32 | 登录后杂项数据装载（疲劳/PvP 战绩/排行/Lethe/奖励/村庄校验） |
| Inter_LoadInven | 10 | 8 | 背包装载（租赁/超越装备/维度租赁校验） |
| Inter_LoadCharac | 7 | 7 | 角色数据装载结果 |
| Inter_CreateCharac | 9 | 4 | 创建角色结果 |
| Inter_Notice | 7 | 61 | 通用通知 |
| Inter_Terminate / Inter_ReadyToTerminate | 7/7 | 63/62 | 服务器终止/准备终止 |
| Inter_Disconnect | 7 | 1 | 服务器断开通知 |
| Inter_MonitorLoginOK | 7 | 65 | 监视服登录确认 |
| Inter_MonitorCallGuildInfo | 7 | — | 从监视服请求公会信息 |
| Inter_MonitorNoticeGuildChatMsg | 7 | — | 公会聊天跨服转发 |
| Inter_MonitorPunishUserReq | 7 | — | 监视服惩罚请求 |
| Inter_MonitorPayTaxToUpper | 7 | — | 向上级缴税 |
| Inter_AuctionResultBidding | 8 | — | 拍卖出价结果（含 taiwan 变体） |
| Inter_BlackIPMonitor | 7 | — | 黑 IP 监视（增删/部分装载） |
| Inter_Antibot_SendBufferClient | 7 | — | 反外挂缓冲下发客户端 |
| Inter_PcroomResponse | 8 | — | 网吧认证应答（关机时间登录判定） |
| Inter_HadesAction | 7 | — | Hades 反作弊动作（send_alert） |
| Inter_DispatcherTaiwan / Inter_DispatcherAradOnly | 7/7 | — | 台湾/Arad 区域专属消息入口 |

### 2.4 代表 Timer 类抽查

| 类 | 符号 | timer | 一句话作用 |
|---|---:|---:|---|
| Timer_Midnight | 8 | — | 午夜调度（RegistNextTimer 自续期） |
| Timer_DailySchedule / Timer_TenMinuteSchedule | 7/7 | — | 每日/每十分钟调度 |
| Timer_DungeonInoutOpenTime / CloseTime | 9/7 | — | 副本进出开放/关闭时间窗 |
| Timer_Send_Ontime_Reward | 8 | — | 定时奖励发放 |
| Timer_HadesHeartBeat | 7 | — | Hades 心跳 |
| Timer_QuickPartyWaitingPartyMatching / StartGame | 7/7 | — | 快速组队匹配等待/开局 |
| Timer_CheckAuctionReady | 5 | — | 拍卖就绪轮询 |
| Timer_PcRoomAuthRetry | 7 | — | 网吧认证重试 |
| Timer_EventManagement | 7 | — | 活动管理调度 |
| TimerQueueSizeLog | 7 | — | 定时器队列大小日志 |

---

## 3. 长尾类（<20 符号，逐类一句话作用）

### 3.1 模板/基础设施（可合并说明）

| 类 | 符号 | 作用 | 置信度 |
|---|---:|---|:--:|
| StaticPool\<WongWork / CBossTower/CDeathTower/CMailBox 等\>（75/24…） | 75/24 | 固定容量对象池模板实例（Get/Free/GetIndex），G8 组游戏内容子系统对象 | 高 |
| StaticPool\<expert_job / QuickParty / advancealtar / pvp_assault / private_store / online_preliminary / exchange_server\>（48/27/25/23/23/23/23） | 48–23 | 各玩法子系统的固定容量池（CEnchanter/CDisjointer、CQuickParty、StageControl、CAssaultPlace、CPrivateStore、COnlinePreliminaryTeam、CSession） | 高 |
| DynamicPool\<Stream/SmallStream/BigStream/PacketBuf\>（24/24/24/23） | 24 | 变长缓冲对象池（Acquire/Free + CNode 链表），供 StreamPool/PacketPool 使用 | 高 |
| DynamicPool\<WongWork::Avatar_Item / IPG::SIPGData / user_creature::CCreature / CEgg\>（22/23/22/22） | 22 | 游戏对象动态池模板实例 | 高 |
| DynamicPool\<X\>::CNode（5×1 项，4–5 符号） | 4–5 | 动态池空闲链表节点（内部类型，假类候选） | 高 |
| IPacketDispatcher\<CMDPacketStruct::_STReq/_STRes…\>（22） | 22 | 事件副本类客户端消息模板实例 | 高 |

### 3.2 数据/配置类（多为简单结构体）

| 类 | 符号 | 作用 | 置信度 |
|---|---:|---|:--:|
| MapArea | 10 | 地图区域集合（包含判断），断线重连/区域限制用 | 中 |
| NpcMovieData | 6 | NPC 动画影片路径数据（getNextMoviePath） | 中 |
| NPC_Teleport | 7 | NPC 传送规则校验（check_rule/set_teleport_data） | 中 |
| NpcDialogue | 3 | NPC 对话条目 | 低 |
| NpcBuyLimitItem | 3 | NPC 限购条目（Inter_NpcLimitBuyItemInfo 配套） | 低 |
| Monster / MonsterBaseParameter / MonsterKillItem / map_monster / map_item | 6/5/5/8/2 | 怪物/地图数据小结构（疑似 G1/G2 误分组，仅 clear/operator=） | 低 |
| MissionInfo / MissionClearCondition_Parameter / MissionLessThan | 3/2/1 | 任务条件参数结构 | 低 |
| MinimumInfo | 5 | 最小化信息结构（clear 复位） | 低 |
| MsgClearQuestIndex | 5 | 清任务索引消息结构（MsgClearQuestIndex, ReqDebugClearQuestResult 模板参） | 中 |
| MsgTournamentRewardSelect / MsgRequestAssaultPrice | 2/2 | 锦标赛奖励选择/突击价格请求消息结构 | 中 |
| MoneyLogPacket | 2 | 金钱日志包结构 | 中 |
| MobileRestrict | 2 | 手机/地区限制枚举↔字符串映射（enumStringMobiles/enumToString） | 中 |
| ManagePointBonus | 4 | 管理点数奖励结构 | 低 |
| OutLineEFFECTInfoTemp | 2 | 轮廓特效信息临时结构 | 低 |
| OptionGroup / OptionGroupValue / OptionGroupChoiceValue | 2/7/7 | 选项组及取值结构（游戏选项保存相关） | 中 |
| OptionValueRatio / OPTION_VALUE_RATIO | 4/5 | 选项值比例结构（常量组，见第 5 节） | 低 |
| OPTION_MODIFICATION_COST | 2 | 选项修改费用结构 | 低 |
| MercenaryHardCodingSettingValue | 2 | 佣兵硬编码设置值 | 低 |
| MyRandom | 3 | 随机数包装（operator()） | 低 |
| NeedMaterialDataManager | 9 | 所需材料数据单例管理 | 中 |
| NullPolicy | 12 | 限制策略模板基类（beginPolicy/endPolicy/getRestrictValue/isApply） | 中 |
| CDispatchServerPacket | 6 | 拍卖/点券服务器发包辅助 | 中 |
| InterSelectCreateDnfEventInfo::Reward | 3 | 活动奖励内部结构（嵌套类型） | 中 |

### 3.3 其余计数/消息类

| 类 | 符号 | 作用 | 置信度 |
|---|---:|---|:--:|
| message_counter::CTimeInterval / CUnixTimeInterval | 6/4 | 计数时间窗（Create/Destroy、GetTimeInterval） | 高 |
| message_counter::MessageKey | 3 | 计数键（operator<） | 高 |
| StatisticsPacket / StatisticsGmCmdPacket | 2/2 | 统计包/ GM 命令统计包结构 | 中 |
| StatisticsNatType::NAT_TYPE_PEER_TO_PEER / RESULT_COUNT | 3/2 | NAT 类型枚举/计数（嵌套常量） | 中 |
| StatisticsPvP::PvP_Key | 1 | PvP 统计键（嵌套） | 中 |
| exchange_server::CExchangeServerHitRate | 12 | 交换服命中率统计 | 中 |
| exchange_server::IExchangeServer | 2 | 交换服接口基类（纯虚，假类候选） | 高 |
| exchange_server::ExchangeServerInfo | 2 | 交换服务器信息结构 | 高 |
| exchange_server（命名空间/聚合） | 16 | 命名空间符号（域限定符） | 高 |
| DNFLex::stream_t / stream_data_t | 2/2 | flex 输入流类型（嵌套 typedef） | 高 |

### 3.4 外部库 / 杂项

| 类 | 符号 | 作用 | 置信度 |
|---|---:|---|:--:|
| mySTL::vector\<TaoCrypt::…\>、mySTL::auto_ptr\<yaSSL::BulkCipher/TaoCrypt::HASH\> | 1 | yaSSL/TaoCrypt 加密库的自带 STL 替代品（第三方，非游戏代码） | 高 |
| main | 1 | 程序入口 | 高 |

---

## 4. 模板实例

| 模板 | 用途 | 实例化点 |
|---|---|---|
| `StaticPool<T, N>` | 固定容量对象池：`Get(int)` 按索引取、`Free(T*)` 归还、`GetIndex` 反查；容量 N 编译期固定 | CUser(600)、CParty(600)、PvP_Room(600)、WarRoom(40)、CTradeSpace(300)、BlueMarble(300)、exchange_server::CSession(300)、QuickParty::CQuickParty(300)、private_store::CPrivateStore(300)、pvp_assault::CAssaultPlace(128)、online_preliminary::COnlinePreliminaryTeam(600)、expert_job::{CEnchanter(300),CDisjointer(600)}、advancealtar::StageControl(600)、WongWork::{CBossTower(600),CDeathTower(600),CMailBox(600),CMailBox::CMail(20)}、CACHE_CHARACTER_TYPE(1000)、_IO_FILE(50) |
| `DynamicPool<T>` | 变长对象池（链表 CNode 空闲块），`DynamicPool(int)` 指定初始块数 | Stream、SmallStream、BigStream、PacketBuf、WongWork::Avatar_Item、WongWork::IPG::SIPGData、user_creature::CCreature、user_creature::CEgg |
| `StreamPool/SmallStreamPool/BigStreamPool` | 带文件行号泄漏追踪的流池包装（Acquire(file,line)） | GlobalData::s_stream_pool 等；CStreamGuard 依赖 |
| `IPacketDispatcher<MSG_X, ParamT, ch_state S>` | 客户端消息分发基类：dispatch_template 编排 read→process→send；check_state 校验用户状态 | 401 个 DisPatcher_/Dispatcher_ 派生类 |
| `CServerProxyMgr<T>` | 代理实例数组管理（GetServerProxy 轮转取用、createServerProxy 建立 N 条连接） | \<CMonitorServerProxy\>(s_monitor_proxy_mgr)、\<CGuildServerProxy\>(s_guild_proxy_mgr)、\<CStatisticServerProxy\>(s_statistic_proxy_mgr) |
| `CNetwork<S, R>` | TCP 连接缓冲模板（S=发送/R=接收缓冲字节数）：send_packet/recv_packet/Parsing_ServerPacket | CNetwork<100000,100000>（各 Proxy）、CNetwork<95000,450000>（exchange_server::CSession ×2） |
| `CEpoll<CSession>`、`CSessionManager<CSession,PacketGuard,CEpoll>` | 交换服会话事件/注册表模板 | exchange_server 子系统 |
| `MemPool<T>` | 侵入式空闲链表内存池 | MemPool<CAdvertisementExposeInfo> |
| `GlobalInstance<T>` | 单例模板（m_p/inst/create/destroy/inst_ptr） | GlobalInstance<InterDispatcher>、\<TimerDispatcher\>、\<TimerQueue\> |

---

## 5. 假类 / 常量组

以下“类”实为**消息结构、枚举、typedef、命名空间或第三方符号**，不应作为业务类建模：

| 组 | 数量 | 说明 |
|---|---:|---|
| `MSG_*`（MSG_BASE、MSG_BUY_ITEM、MSG_CHARAC_SELECT…） | 65 | 客户端消息 ID 对应的包结构定义（各 2 符号：ctor/dtor），是 `IPacketDispatcher<MSG_X,…>` 的第一个模板参数 |
| `NOTIPacketStruct::_Noti*`（AdvanceAltar 系列） | 6 | 通知包结构（嵌套），仅 2 符号 |
| `StatisticsNatType::NAT_TYPE_PEER_TO_PEER`、`RESULT_COUNT` | 2 | 嵌套枚举/计数常量 |
| `message_counter::MessageKey`、`StatisticsPvP::PvP_Key`、`InterSelectCreateDnfEventInfo::Reward` | 3 | 嵌套键/结构类型 |
| `DynamicPool<X>::CNode` | 5 | 池内部链表节点 |
| `DNFLex::stream_t/stream_data_t` | 2 | typedef |
| `exchange_server::IExchangeServer` | 2 | 纯虚接口（仅有 ctor/dtor 槽） |
| `exchange_server`（裸名） | 16 | 命名空间符号 |
| `mySTL::vector/auto_ptr<…>` | 4 | yaSSL/TaoCrypt 自带 STL 替代（第三方库） |
| `OPTION_VALUE_RATIO`/`OPTION_MODIFICATION_COST` 等 | 2–5 | 常量/结构体组（与 OptionGroup 系列并存） |
| `main` | 1 | 入口函数 |

---

## 6. 核心类依赖关系速览

### 6.1 ServerProxy 继承树（反汇编 ctor 基类调用 + vtable 确认）

```
BaseServerProxy（多态基类：CNetwork<100000,100000> + 名字/IP）
├── CHadesServerProxy（+CUdpHandler；Hades 反作弊）
├── CAuctionServerProxy（Init/Parsing）
└── CCeraAuctionServerProxy（Init/Parsing）

非继承“Proxy”（内嵌成员，无 vtable）：
CMonitorServerProxy     = std::string + CNetwork<100000,100000> + CUdpHandler
CGuildServerProxy       = std::string + std::map<uint,STGuildProxy> + CNetwork + CUdpHandler
CCommunityServerProxy   = std::string + CNetwork
CPCRoomServerProxy      = std::string + CNetwork
CStatisticServerProxy   = std::string + CUdpHandler（纯 UDP）
CSchoolServerProxy      = std::string + CUdpHandler
CDoubleConnCheckServerProxy = std::string + CUdpHandler
CmmChannelProxy         = std::string + CUdpHandler
```

代理管理：`CServerProxyMgr<T>`（GlobalData::s_monitor/guild/statistic_proxy_mgr）；单例代理对象
（GlobalData::s_hades_proxy、s_auction_proxy、s_community_proxy、s_pcroom_proxy、s_school_proxy、
s_double_check_proxy）；TCP 线程 GlobalData::s_monitor_tcp_thr。

### 6.2 分发链依赖

```
PacketDispatcher → IDispatcher → IPacketDispatcher<MSG_X,Param,state> → DisPatcher_X/Dispatcher_X
    ├─ CLocalChinaErrorDispatcher（中国区错误前置）
    └─ CUser（setLastPacketID/DisConnSig）、PacketBuf、_NS_PI_Check_CMD（安全）
InterDispatcher → ISigDispatcher → Inter_X；dispatch 时经 CGameManager::getUser 定位 CUser
TimerDispatcher → TimerSig → Timer_X；TimerQueue（TimerEntry）→ TimerDispatcher::dispatch
DBTask → MsgQueueMgr::get(QUEUE_IDX) → DBDispatcher → DB_* 处理器（G5 组）
```

### 6.3 缓冲/流依赖

```
DynamicPool<Stream/SmallStream/BigStream> ← StreamPool/SmallStreamPool/BigStreamPool（泄漏追踪）
    → Stream（SmallStream=4K / BigStream=256K，均多态）
    → CStreamGuard（RAII；GetInBuffer<SIG_X> 反序列化）
PacketPool → PacketBuf（PacketDispatcher::doDispatch 用 bind_packet 包裹原始包）
InterfacePacketBuf = PacketBuf 的非虚适配层（AcquirePacketBuf）
```

### 6.4 其它依赖

```
exchange_server::CExchangeServer : IExchangeServer
   ├─ CSessionManager<CSession, PacketGuard, CEpoll>（CEpoll 会话事件）
   ├─ StaticPool<CSession,300>、map<int,ExchangeServerInfo>
   └─ CCacheCharacterMgr（Mutex + StaticPool<CACHE_CHARACTER_TYPE,1000> + map）
CSession = 2 × CNetwork<95000,450000>
DNFLexWrapper = DNFLex + CompiledDNFLex（脚本编译，G5 依赖）
Statistics* → CServerProxyMgr<CStatisticServerProxy>::GetServerProxy → SendPacket（UDP）
CSharedServerMessageManager ← CGameManager::GetSharedServerMessageManager（全服公告）
```

---

## 7. 结论要点

1. **分发是“表驱动”的**：三条注册表数组（包 606 / sig 852 / timer 175 槽）+ 每槽一个薄派生类，
   派生类名即消息名（DisPatcher_/Inter_/Timer_），模板参数携带 MSG 枚举、参数结构与状态门控。
2. **ServerProxy 家族并非单一继承树**：仅 Hades/Auction/CeraAuction 继承 BaseServerProxy；
   其余为“成员式”网络代理（CNetwork/CUdpHandler），应作为组合关系建模。
3. **网络栈**：CNetwork（TCP 模板）、CUdpHandler（UDP）、EpollHandler、Stream/PacketBuf 池 +
   CStreamGuard RAII、MsgQueueMgr 线程队列、ThreadInterface 线程族。
4. **假类集中在 MSG_*、嵌套枚举/结构、第三方 mySTL**：共 80+ 项，勿作为业务类。
