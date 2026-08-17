# df_game_r 完整项目类代码拓扑

> 二进制：`df_game_r`（elf32-i386，36,360,954 字节，md5 `7b2b22caea80752deaa403356ea867c0`）
> 还原日期：2026-08-16。方法：`nm -C` 全量 demangled 符号（348,050 个定义符号）+ objdump 全量反汇编（/tmp/df_text_disasm.txt，362 万行）+ Ghidra 反编译语料交叉验证，8 个并行分析域，每个类的结论均有符号/反汇编证据，无证据处标注置信度（高/中/低）。
> 完整分域报告（4,243 行）见 [docs/class_topology/](class_topology/)，本文为汇总索引。

---

## 1. 总览与统计

### 1.1 规模

| 项目 | 数量 |
|---|---|
| 符号表总行数 | 349,394 |
| 定义符号（nm -C） | 348,050 |
| C++ 符号（_ZN） | 134,589 |
| 提取出的"类路径"（含命名空间/常量组） | 3,810 |
| 其中真类（带方法/ctor/dtor） | ≈ 2,500 |
| 类成员方法（去重后类→方法映射行） | 50,891 |

### 1.2 符号量最大的类/命名空间（Top 25）

| 符号数 | 类路径 | 域 | 性质 |
|---:|---|---|---|
| 4738 | advancealtar | G8 | 命名空间（阿尔特拉祭坛；常量重复导出导致虚高，真类见 G8） |
| 1956 | EmoticonType | G8 | 常量/枚举命名空间（表情） |
| 1576 | random_option | G8 | 常量命名空间 + CRandomOptionItemHandle |
| 1183 | nexon::cash | G6 | 命名空间（Nexon 现金 SDK，**死代码**） |
| 1183 | Taiwan | G6 | 命名空间（Garena 台服计费，实际在用） |
| 1074 | CUser | G1 | 真类：在线用户聚合根 |
| 1033 | APSystem | G8 | 行动点系统（常量虚高） |
| 978 | UrgentQuestLevelLimit / InformNotice / InformNotice2nd | G6 | 常量组（非类） |
| 937 | Redeem_Item | G6 | 命名空间（赎回系统，CRedeemItem 真类） |
| 632 | nexon_packet | G6 | 命名空间（Nexon 协议包） |
| 628 | item_lock | G8 | 常量命名空间 + CItemLock |
| 498 | CUserCharacInfo | G1 | 真类：角色资料/状态 |
| 388 | CParty | G2 | 真类：队伍 |
| 307 | XNuclear | G7 | 命名空间（Hades 上报；PACKET_SEND_TIME 常量 307 份） |
| 290 | np_server_xml | G5 | 命名空间（文案常量 + CServerXml） |
| 235 | CBattle_Field | G2 | 真类：队伍副本战斗场 |
| 184 | GameWorld | G2 | 真类：世界/频道容器 |
| 181 | CInventory | G1 | 真类：背包 |
| 159 | CDataManager | G5 | 真类：全服数据仓库 |
| 143 | cUserHistoryLog | G7 | 真类：用户行为日志 |
| 130 | PvP_Room | G3 | 真类：PvP 房间 |
| 114 | CGameManager | G2 | 真类：单例对象池/房间管理器 |
| 109 | pvp_assault::CAssaultPlace / TutorialData | G3/G2 | 突袭战场 / 教程数据 |

### 1.3 分析域划分

| 域 | 类路径数 | 核心类(≥20 符号) | 报告 |
|---|---:|---:|---|
| G1 玩家/角色 | 682 | 33 | [df_group_1_report.md](class_topology/df_group_1_report.md) |
| G2 世界/副本/战斗 | 154 | 23 | [df_group_2_report.md](class_topology/df_group_2_report.md) |
| G3 PVP/对战 | 101 | 15 | [df_group_3_report.md](class_topology/df_group_3_report.md) |
| G4 服务器框架/网络/分发 | 955 | 51 | [df_group_4_report.md](class_topology/df_group_4_report.md) |
| G5 数据/配置/脚本/DB | 774 | 30 | [df_group_5_report.md](class_topology/df_group_5_report.md) |
| G6 事件/活动/商城/社交 | 645 | 25 | [df_group_6_report.md](class_topology/df_group_6_report.md) |
| G7 安全/反外挂/加密 | 186 | 10 | [df_group_7_report.md](class_topology/df_group_7_report.md) |
| G8 功能模块/杂项 | 302 | 52 | [df_group_8_report.md](class_topology/df_group_8_report.md) |

---

## 2. 架构分层图

```
┌─ 进程入口与全局 ──────────────────────────────────────────────┐
│  GlobalData（全局单例池：线程/代理/管理器/内存池）               │
│  CEnvironment（server_str.xml 配置：IP/端口/频道/服务器组）      │
│  CLog / CQueryCounter / CSourceVersionMgr / Arad_ServerStateMgr │
└──────────────────────────┬────────────────────────────────────┘
                           │
┌─ 线程层 ─────────────────┼─────────────────────────────────────┐
│  DispatchThread / MonitorTcpThread / UdpThread / DBThread       │
│  TimerQueue + TimerDispatcher（Timer_* 家族 32 个）              │
│  EpollHandler / CNetwork<T,R> / CUdpHandler / CStreamGuard       │
└──────────────────────────┬────────────────────────────────────┘
                           │
┌─ 分发层 ─────────────────┼─────────────────────────────────────┐
│  客户端包：PacketDispatcher → IPacketDispatcher<MSG_*>           │
│            → Dispatcher_*/DisPatcher_*（401 个）                 │
│  服务器间：DispatchThread → InterDispatcher → Inter_*（311 个）  │
│  DB：DBThread → DBTask → DB_*（约 330 个）→ MySQL/存储过程        │
└──────────────────────────┬────────────────────────────────────┘
                           │
┌─ 数据层 ─────────────────┼─────────────────────────────────────┐
│  CDataManager（ST*Script 全表仓库）                              │
│  脚本：Arad_Script/DNFLex/CompiledDNFLex + StringDictionary       │
│  DB：DBMgr 连接池 / MySQL 封装 / ARAD::DATABASE::*_QUERY         │
│  配置：ServerParameterScript / GuildParameterScript / STItemScript│
└──────────────────────────┬────────────────────────────────────┘
                           │
┌─ 游戏对象层 ─────────────┼─────────────────────────────────────┐
│  CUser（玩家聚合根，内嵌 30+ 对象）→ CUserCharacInfo（基类）       │
│  CGameManager（对象池：CUser/CParty/PvP_Room/WarRoom/...）        │
│  GameWorld（频道容器：Village → Area → CUser）                   │
│  CParty → CBattle_Field → CDungeon → CMap（副本链）              │
│  PvP_Room / WarRoom / pvp_assault / fair_pvp（对战链）           │
│  各 ServerProxy（Guild/Monitor/Hades/Community/Auction/...）      │
└──────────────────────────────────────────────────────────────────┘
```

---

## 3. 各域核心类总表

### 3.1 G1 玩家/角色域（CUser 聚合根）

| 类 | 作用 | 关键依赖 |
|---|---|---|
| CUser | 在线用户会话聚合根（基类 CUserCharacInfo），内嵌 30+ 大对象：网络、背包、仓库、任务、选项、安全、公会、Hades、高级祭坛、行动点、PMI 等 | CUserCharacInfo、CNetwork<4096,450000>、CAccountCargo、CGameOption、UserQuest、CInventory、cUserHistoryLog、CPacketVerifier、WongWork::CUserPremium/CHackAnalyzer、Secu_*、XNuclear::CHades、CharacAdvanceAltarManager、CActionPointManager |
| CUserCharacInfo | 角色资料/状态 + 脏标志；经 `_Charac_info` 双指针访问背包/技能/仓库/选项 | CInventory@+0xda、SkillSlot@+0x892、CCargo@+0xdaa |
| CInventory | 25 格背包 + AvatarCoin 货币 + 宠物管理器 + 头像物品管理器 | Inven_Item[25]、user_creature::CCreatureMgr、WongWork::CAvatarItemMgr |
| CItem / CStackableItem / CEquipItem | 只读物品/消耗品/装备定义（STItemScript 数据源） | STItemScript、CItemList（工厂） |
| SkillSlot / CSkill / CSkillList | 技能树容器 / 技能定义 / 技能列表 | STSkillScript |
| CMissionList_Charac / CMission | 角色任务列表 + 任务模板（CMission_* 条件派生） | Quest、CMission_* 家族 |
| CQuestShop / CTitleBook / CAchievement | 任务商店（QP/碎片）/ 称号簿 / 成就 | STQuestShopData、STTitleBook |
| CCargo / CAccountCargo / CTradeSpace | 角色仓库 / 账号金库 / 交易窗口（双 CUser+TradeSlot） | StaticPool<CCargo>、STCargoData |
| CGameOption | 热键/快速聊天/表情/ETC 选项容器 | CHotkeyOption、CQuickChattingOption、CChattingEmoticonConfig |
| CPowerManager | 势力战开关/点数/排行 | PowerWar* |
| WideString / CharString / PackSet | 宽/窄字符串包装、pack 资源文件 | — |

### 3.2 G2 世界/副本/战斗域

| 类 | 作用 | 关键依赖 |
|---|---|---|
| CParty | 队伍核心：成员管理、副本进出/结算、特殊物品路由、P2P、各特殊副本准入；**内嵌 CBattle_Field**（offset 0xb24） | CBattle_Field、CPartyTelePort、BattleData、GameResultSet、CItemRoutingData |
| CBattle_Field | 队伍副本战斗场状态机：地图序列、怪物生成/击杀、地狱组队、血之副本、锦标赛、掉落/通关 | CParty、CDungeon、CMap、CWorldMap、CRidable、CClearCondition |
| GameWorld | 世界/频道容器：按频道管理在线用户、跨域迁移（goto/出副本/PvP/战房）、广播、每日重置 | Village、Area、Statistics |
| CGameManager | 单例对象池/房间管理器：10 个 StaticPool + 9 个 hash_map 房间表 | CUser、CParty、PvP_Room、WarRoom、DeathTower、BossTower、QuickParty、BlueMarble、StageControl、CTradeSpace |
| CDungeon | 副本静态定义：迷宫、地图注册、事件怪物、掉落/清除物品、准入规则 | hash_map<int,CMap*> |
| CMap | 副本地图运行时：怪物/物品/条件怪物/APC 布点/锦标赛怪 | advancealtar::TimeLine |
| CMonster | 怪物定义/实例 | STMonsterScript、CAICharacter |
| TutorialData / GlobalScriptTutorial | 教程脚本数据与加载 | STTutorialData |
| TowerOfDespairMgr / CCharacBloodDungeon | 绝望之塔层映射 / 血之副本角色数据 | CDungeon、charac_expand::CData |
| InstanceRentalSystem | 实例租赁（Ready/Rent/CheckRentableItem） | RentalMachineDimension/PcRoom |

### 3.3 G3 PVP/对战域

| 类 | 作用 | 关键依赖 |
|---|---|---|
| PvP_Room | PvP 房间本体（池化 600）：座位/队伍/胜负积分/排行；内嵌接力与死亡竞赛管理器 | CUser（双向）、CRelayBattleMgr@+0x620、CDeathMatchBattleMgr@+0x69c |
| pvp_assault::CAssaultPlace | 势力战"突袭战"场景：1v1 P2P 决斗状态机（约战→P2P→战斗→结算→奖励），池化 128 | CParty、CAssaulter、CPowerManager |
| fair_pvp::CFairMatch | 公平 PvP/校际赛匹配管理器（IMatch 实现）：ELO、训练印章、重赛、禁装备检查 | IMatch、CMatchingSystem |
| WarRoom | 公会战房间（池化 40）：击杀/掉落/复活/换房主、公会 FP 排行 | CGameManager、WarField、CDungeon、CUserCharacInfo |
| online_preliminary::COnlinePreliminary | 线上预选赛匹配（2v2 队伍制、ELO、每日重置、DB 持久化） | COnlinePreliminaryTeam（池化 600） |
| CLeagueMatch | 校际联赛匹配（按学校匹配、徽章奖励） | CMatchingSystem |
| CRelayBattleMgr / CDeathMatchBattleMgr | 接力赛规则（出场顺序/回合）/ 死亡竞赛规则（击杀/胜负/复活计时） | PvP_Room 内嵌 |
| PvpUserTable / RefPvpGrade | PvP 积分结算查表 / 段位表 | STPvpRefTable |

**匹配流程**：`PvP_Room::create_room → CMatchingSystem::GetMatchingSystem(类型) → 各 IMatch 实现（CNormalMatch/CLadderMatch/CTournamentMatch/CLeagueMatch/CFairMatch/COnlinePreliminary）→ OnRegisterMatch → _RegisterWaitingRoom → TimerStartMatching → CGameManager::GetPvp → _MakeRoom/_PutInRoom`。

### 3.4 G4 服务器框架/网络/分发域

| 类 | 作用 | 关键依赖 |
|---|---|---|
| BaseServerProxy | 多态 TCP 代理基类（名字/IP/端口），派生类复写 Parsing | CNetwork<100000,100000> |
| CGuildServerProxy | 公会服务器客户端：登录/心跳 + 约 40 个 Send*（公会/仓库/公告板/邮件/PowerWar）| CNetwork、CUdpHandler、CServerProxyMgr<CGuildServerProxy> |
| CMonitorServerProxy | 监视服务器客户端：登录/心跳/上报频道与玩家信息/惩罚 | CNetwork、CUdpHandler |
| CCommunityServerProxy | 社区服务器客户端：PvP 好友同步 | CNetwork |
| CPCRoomServerProxy / CStatisticServerProxy / CSchoolServerProxy / CDoubleConnCheckServerProxy | PC 网吧 / 统计（纯 UDP）/ 学院（UDP）/ 双开检测（UDP） | CUdpHandler |
| CAuctionServerProxy / CCeraAuctionServerProxy | 拍卖 / Cera 拍卖客户端（**继承 BaseServerProxy**） | BaseServerProxy |
| CHadesServerProxy | Hades 反作弊客户端（TCP+UDP 双通道，见 [hades_protocol.md](hades_protocol.md)） | BaseServerProxy、CUdpHandler |
| CmmChannelProxy | 频道桥接服务器（CMM/Bridge）客户端 | CUdpHandler |
| CServerProxyMgr<T> | 代理管理模板：按索引数组管理 N 个代理实例 | 各 ServerProxy |
| Stream / PacketBuf / InterfacePacketBuf / CStreamGuard / DynamicPool<Stream> | 流式缓冲与包缓冲体系 | StreamPool、MsgQueueMgr |
| IPacketDispatcher<MSG_*,Param,state> / Dispatcher_* / DisPatcher_*（401 个） | 客户端包分发模板：check_state → read → check_error → dispatch_sig | PacketBuf、MSG_BASE、ParamBase |
| Inter_*（311 个） | 服务器间 sig 分发（ISigDispatcher 派生，InterDispatcher 数组注册） | Stream、MsgQueue |
| Timer_*（32 个） | 定时器回调（TimerSig 派生，TimerDispatcher 数组注册） | TimerQueue |
| DbmwClient / CDBConnector | DBMW 客户端 / DB 连接器 | MySQL |

**重要修正**：ServerProxy 家族中仅 Hades/Auction/CeraAuction 继承 BaseServerProxy（ctor 有基类调用），其余是内嵌 `CNetwork` + `CUdpHandler` 的非多态类。

### 3.5 G5 数据/配置/脚本/DB 域

| 类 | 作用 | 关键依赖 |
|---|---|---|
| GlobalData | 全服全局单例池（s_db_mgr/s_db_thr/s_msgq_mgr/s_*_proxy 等），Init/Fini 即全服启停 | 全部子系统 |
| CEnvironment | 服务器配置解析（server_str.xml）：全部 IP/端口/服务器组/频道 getter | GlobalInstance 单例 |
| CDataManager | 全服数据仓库：init 灌入全部 ST*Script 表，数百 getter 与 Verify | ST*Script、Arad_Script |
| MySQL / DBMgr | libmysqlclient 封装 / 连接池（按 DB_HANDLE_IDX × SERVER_GROUP 分库） | QueryCounter |
| DB_*（约 330 个） | DB 任务分发（DB_Load*/Create*/Save*/Update*/Insert*/Select* 按业务域命名） | DBTask、DBDispatcher、ARAD::DATABASE::*_QUERY |
| Arad_Script | 经典 .rs 表加载器（按 行,列 GetInt/GetString/GetFloat） | DNFLex |
| ServerParameterScript / GuildParameterScript / STItemScript / PvPSkillTreeParameterScript | 服务器/公会/物品/PvP 参数表 | CDataManager |
| DNFLex / CompiledDNFLex / FlexLexer / DNFLexWrapper | 脚本词法：文本 token 流 / 编译态 token 流 / flex 基类 / 统一封装 | StringDictionary |
| np_server_xml::CServerXml | 服务器文案加载（TinyXML DOM） | TiXml* |
| HistoryLog / CLog | 玩家行为历史日志（按日分文件，20+ Write*）/ 全局日志单例 | CUser |
| CQueryCounter | SQL 查询计数器（周期上报落日志 DB） | MySQL |
| TiXml*（14） | 第三方 TinyXML 1.x DOM | — |

**DB 链路**：`游戏线程 Inter_* 构造 SIG_* → MsgQueueMgr → DBThread → DBTask::DBProcess（sig 校验 ≤0x353）→ DB_*::dispatch → Stream::GetOutBuffer<SIG_*> → DBMgr::GetDBHandle → arad_sp_* 存储过程 → SendResult 回游戏线程 Inter_*`。

**脚本体系**：`FlexLexer/flex → DNFLex（文本流）/CompiledDNFLex（编译态）→ Arad_Script::Load / InitRDARScript（IndexEntry+IMethod 加密包）→ ST*Script 对象 → CDataManager getter / ARAD::Arad_DataManager`。

### 3.6 G6 事件/活动/商城/社交域

| 类 | 作用 | 关键依赖 |
|---|---|---|
| CEventManager / CEventBase / CEvent 家族（约 50 个 C*Event） | 事件注册与触发框架；具体事件类（升级/签到/疲劳/购买/宠物/武器/宾果/强化罐/一日商店等） | EventClassify、CDataManager、CUser |
| EventClassify::CEventScriptMng | 脚本事件管理器：按 InGameEventInfoList 创建 CEventEntity，处理升级/签到/疲劳/购买奖励 | CEventEntity、CUser |
| Taiwan::TaiwanCash | **实际在用**的 Garena 台服计费客户端（购买/充值/确认/余额/Cera 点） | Taiwan::BillTransaction、nexon::cash::TCPSocket、WongWork::IPG |
| nexon::cash::NexonCash | 韩国版 Nexon 现金 SDK 门面：**本二进制 0 调用点 = 死代码** | NCashImpl |
| Redeem_Item::CRedeemItem | 赎回系统：物品回收（FP 校验/价格）、赎回列表、DB 读写 | CUser、CInventory |
| private_store::CPrivateStore / CPrivateStoreMgr | 私人商店本体（池化 300）/ 卖家买家注册表 | CUser、CInventory、CPacketBufPrivate |
| COnTimeEvent / BingoEvent / LevelupSupportEventManger / MultiBoxLotteryInfo | 在线定时活动 / 宾果（每日棋盘+连线奖励）/ 升级支援（分步奖励）/ 多开宝箱抽奖 | CEventBase、CBingo |
| CCeraShopGoods / CItemLimitEdition / CerashopAddRestrict::Manager | 商城商品 / 限量版物品 / 每日限购（按 IPG no） | STCeraShopItem、WongWork::CCeraShop |
| SpecialItemHandler | 商城特殊物品处理器（11 种：礼包/仓库/点数卡/技能树/栏位扩展/Premium） | WongWork::CCeraShop |
| eventReward | 事件奖励脚本引擎（背包/装备奖励生成、邮件发送、随机属性） | CDataManager、CInventory |
| CAutoMarketConditionsControl | 自动市场条件控制（按服务器状态调掉落率） | CDataManager |
| SDCActiveStatusSyncCommon | 主动状态同步公共计算（DoT 伤害/时长） | STSDCActiveStatusSyncData* |
| secretshop / CSecretShop | 秘密商店 | CUser、CInventory |

**重要发现**：`nexon::cash::NexonCash` 全部方法 0 调用点（韩国版 SDK 死代码）；实际计费走 `Taiwan::TaiwanCash`（Garena 计费，由 `WongWork::IPG::CIPGWorker` 驱动）。`InformNotice/InformNotice2nd/UrgentQuestLevelLimit`（各 978 符号）均为静态常量组（非类）。

### 3.7 G7 安全/反外挂/加密域

| 类 | 作用 | 关键依赖 |
|---|---|---|
| XNuclear::CHades | 每用户 Hades 上报客户端（CUser+0x8e954）：登录/登出/疲劳/经验/金币/安全/外挂计数 9 包 + UserStatus（协议见 [hades_protocol.md](hades_protocol.md)） | Secu_GoldControl、Secu_AccountHacking、CHackAnalyzer、CHadesServerProxy |
| CHadesServerProxy | Hades 服务器代理（TCP+UDP 双通道、60s 心跳、0xfe7 重置会话） | BaseServerProxy、CUdpHandler、Timer_HadesHeartBeat |
| Secu_GoldControl | 每用户金币管控（CUser+0x8e980）：普通/导入/拍卖三通道，联动 CHades::GoldPlus/Minus(reason 0/1/2) | CHades、user_gold_info |
| Secu_AccountHacking | 账号入侵检测：同账号多角色金币/时装/邮件转移模式识别（HackType 0x2c6~0x2ce） | CHackAnalyzer、CHades、DB_SelectCharacMid |
| Secu_HackLogCheck / Secu_HackLogCheckByParty | 外挂日志检查调度（每用户）/ 组队版 | CHackLog_InvalidAreaMove、Secu_MonsterCheck、Secu_DungeonAverageCheck |
| CHackLog_InvalidAreaMove / CHackLog_InvalidUsingSkill / CHackLog_OverDamage / CHackLog_InvitationPaperSellToNPC | 非法移动（0x1f5）/ 非法技能（0x339）/ 伤害超限（0x6b/0x85）/ 邀请函卖店（0x322）检测 | GameWorld、CSkill |
| CTraceMobDieHack | 怪物死亡伤害追踪（4 槽位），击杀数>1 上报 | village_attacked、CHackAnalyzer |
| cUserHistoryLog | 用户行为日志门面（CUser+0x79700，约 110 个事件方法，CSV 格式） | CUser、TimeLog_ |
| Sanicova::CPad | 安全键盘/密保垫（每用户）：随机键序、密码学算法选择、认证/失败计数 | Cipher（5000 例）、CUser |
| Cipher / CNCrypto*（14 算法）/ CRijndael / CTEA / CBlowFish / CSHA / CSHA1 / CNChecksum* | 分组密码容器（Anubis…XTea）/ AES / TEA / Blowfish / SHA-256 / SHA-1 / 校验 | CreateCryptoGraph 工厂 |
| Encryption / SimpleEncryption / XorRand4/8 | 包加密（CRC32+XOR 流）/ 简单加密（死代码）/ xorshift PRNG | PacketBuf、CaptchaGen |
| CodeHackChecksumEx / CodeHackCheckStorage | 客户端代码区校验（SHA-256，二次上报不符 → addServerHackCnt(0x3c8)） | CUser、CSHA |
| WindowsCodeProtectorServer / WindowsExeFileFamily / WindowsDataFileFamily | 客户端 EXE/数据文件完整性（**已编译未接线/死代码**） | CodeHackChecksumEx |
| CaptchaGen | 服务端验证码图片生成（韩/日/台字符集，60s 预生成） | GreyImage、XorRand4 |
| CPacketVerifier | 每用户包序号/varid 校验（反重放/反注入） | CUser |
| CSecu_ProtectionField / ServiceRestrictManager / SecurityRestrictPolicy / CreateCharacterRestrictPolicy / AuthMobileRestrictPolicy / RestrictGeolocation | 交易/现金保护 / 服务限制策略（台服：AuthMobile/CreateCharacter/Security…）/ 地理限制 | CUser、Taiwan::internal_stream |
| CGM_Manager / game_master::* | GM 账号管理（gm_manifest 表）/ 新 GM 命令框架（CGameMasterMgr→CCommandMap→CCommand→executeTemplate） | MySQL、CUser |
| CLocalChinaErrorDispatcher | 中国区逐包错误分发（防沉迷/安全模式/锁 Sella 房间） | PacketDispatcher |
| disconnect_detecter::CDisconnectDetecter | 异常断线检测（60s 周期，PvP/突袭注册） | TimerDetectDisconnect |
| break_away_prevent::CBreakAwayPreventSystem | 防流失/回流奖励（连续断登天数/UV 列表） | SIG_*、CUser |

**反外挂总链路**：`客户端包 → DisPatcher_*（MoveMap/UseSkill/DieMob/...）→ Secu_HackLogCheck* → CHackLog_*（各 HackType）→ CHackAnalyzer::addServerHackCnt → CUser::onUpdateHackCount → CHades::AddHackTypeCnt → Hades 服务器；金币链：Secu_GoldControl → CHades::GoldPlus/Minus/Tracking；客户端上报链：0x2b6 → Inter_HadesAction → RunHadesAction（位掩码惩罚）→ DB_HadesPunish 落库 member_punish_info*`。

### 3.8 G8 功能模块/杂项域

| 模块 | 核心类 | 作用 |
|---|---|---|
| advancealtar（阿尔特拉祭坛） | Dispatcher_* 家族（9 个）→ Manager → StageControl（池 600）→ ProcStage（TimeLine/召唤/清场/发奖）| 独立副本玩法；CharacAdvanceAltarManager 内嵌于 CUser+0x8df60 |
| WongWork（平台运营，70+ 子类） | CDeathTower/CBossTower、CMailBox（池 600）、CCeraShop、CItemUpgrade、CCompoundAvatar、CAvatarItemMgr、CMonsterDrop、CHackAnalyzer、CClearReward、CUserPremium、IPG（CIPGHelper/CIPGMgr/CIPGWorker） | 死亡之塔/Boss 塔、邮件、塞拉商城+IPG 计费、强化、头像合成、掉落、反外挂、会员 |
| user_creature（宠物养成） | CCreatureMgr（CInventory 持有）、CCreature、CCreatureScriptMgr、CEgg、CPacketRespondent、CDBMsgSender | 蛋孵化/进化/经验/饱食度/神器/超技能计时 |
| expert_job / expert_extraction（副职业） | CEnchanter（池 300）、CDisjointer（池 600）+ CDisjointMachine、CAlchemist、CDollController、CCharacExpertJob、CExpertJobMgr、CExtractionMgr | 附魔/分解/炼金/人偶；角色侧由 CUserCharacInfo 持有 |
| APSystem | CActionPointManager（全局）、CUserProc（用户入口）、Dispatcher/DB/交换服务器层 | 行动点+勋章+今日奖励 |
| BlueMarble | 大富翁棋盘小游戏（池 300，CUser 持实例）+ 脚本族 | 掷骰/移动/进副本/奖励 |
| QuickParty | CQuickPartySystemManager + CQuickParty（池 300）+ CQuickPartyRewardManager | 按（地图+难度）键的快速组队匹配 |
| charac_expand | CData / CDataMgr | 每日角色扩展数据（跨日重置） |
| item_lock | CItemLock | 物品上锁/解锁/取消（计时器+安全校验） |
| EmoticonType / random_option | 常量组 + EmoticonScript / CRandomOptionItemHandle | 表情常量 / 随机选项生成 |
| sync_script | CSyncScript（单例） | 脚本表 truncate+insert 同步进 MySQL |
| user_creature::CCreatureScriptMgr / CStringMaker | 宠物脚本 / 字符串合成 | — |

---

## 4. 关键跨域依赖关系

### 4.1 CUser 聚合根（G1 与其他域的连接点）

```
CUser（G1）
├─ 基类 CUserCharacInfo → CInventory / SkillSlot / CCargo / CharacterOption
├─ 内嵌：CNetwork<4096,450000>、CAccountCargo、CGameOption、UserQuest、cUserHistoryLog（G7）、
│         CPacketVerifier（G7）、WongWork::CUserPremium/CHackAnalyzer/CMCAPManager/CSecurityCard（G8）、
│         Secu_AccountHacking/Secu_GoldControl/CHackLogCheck（G7）、XNuclear::CHades（G7）、
│         CharacAdvanceAltarManager（G8）、CActionPointManager（G8）、PMI、Guild 数据
├─ 引用：GameWorld 按频道持有 map<uid,CUser*>（G2）、PvP_Room 双向（G3）
└─ 生命周期：CGameManager StaticPool<CUser,600> 分配（G2）
```

### 4.2 副本/战斗链（G2）

```
CGameManager（池）→ CParty →（成员）→ CBattle_Field（内嵌 0xb24，SetParty 反指）
→ CDungeon（静态定义）→ hash_map → CMap（运行时）→ CMonster/CAICharacter
GameWorld（频道容器）→ Village → Area → CUser
```

### 4.3 对战链（G3）

```
PvP_Room::create_room → CMatchingSystem → IMatch 实现（G3）
  → CGameManager::GetPvp → _MakeRoom/_PutInRoom → PvP_Room ↔ CUser（双向）
WarRoom ↔ CGameManager / WarField / CDungeon / CUserCharacInfo
pvp_assault ↔ CParty / CPowerManager / CPowerWarLog
```

### 4.4 数据/配置 → 游戏对象（G5 → 全部）

```
CEnvironment（配置）→ GlobalData::Init → 各 ServerProxy / 线程 / 池
CDataManager（ST*Script 全表）→ 所有游戏对象 getter/Verify
DB 链路：Inter_*（G4）→ MsgQueue → DB_*（G5）→ MySQL → SendResult → Inter_* 回游戏线程
```

### 4.5 安全体系（G7 → G1/G8）

```
CHackAnalyzer（G8）← Secu_* / CHackLog_* / CTraceMobDieHack（G7）→ addServerHackCnt
  → CUser::onUpdateHackCount → CHades::AddHackTypeCnt（G7）→ Hades 服务器
Secu_GoldControl（G7）→ CHades::GoldPlus/Minus/Tracking
0x2b6 客户端上报 → Inter_HadesAction → RunHadesAction → DB_HadesPunish（落库）
```

### 4.6 模板/池基础设施

| 模板 | 实例化点 |
|---|---|
| StaticPool<T,N> | CUser 600、CTradeSpace 300、PvP_Room 600、WarRoom 40、CPrivateStore 300、CAssaultPlace 128、QuickParty 300、BlueMarble 300、CEnchanter 300、CDisjointer 600、CMailBox 600、StageControl 600、CACHE_CHARACTER_TYPE 1000 等 |
| DynamicPool<T> | Stream、SmallStream、BigStream、PacketBuf、Avatar_Item、CEgg、CCreature、SIPGData |
| IPacketDispatcher<MSG_*,Param,state> | 136 个 MSG 实例化（客户端包分发） |
| CServerProxyMgr<T> | CMonitorServerProxy、CGuildServerProxy、CStatisticServerProxy |
| GlobalInstance<T> | 15 个实例（CEnvironment、Cipher、CDataManager 等） |
| ARAD::Singleton<T> | 15+ 个实例（事件管理器/活动管理器） |

---

## 5. 假类 / 常量组 / 第三方库

### 5.1 大符号量"类"实为命名空间/常量组

| 路径 | 符号数 | 实际构成 |
|---|---:|---|
| Taiwan / InformNotice / InformNotice2nd / UrgentQuestLevelLimit | 978~1183 | 静态 const 数组/枚举（k* 常量重复导出虚高） |
| nexon::cash / nexon_packet | 632~1183 | 现金 SDK 命名空间（含真类 NCashImpl 等） |
| advancealtar / EmoticonType / random_option / APSystem / item_lock | 628~4738 | 命名空间：常量重复导出虚高 + 少量真类 |
| XNuclear | 307 | PACKET_SEND_TIME 静态常量（307 份）+ CHades 真类 |
| np_server_xml | 290 | FILE_NAME 多语言文案常量表 + CServerXml |
| village_attacked / stagemap / ExtreamDungeon / pvp_assault / fair_pvp / online_preliminary | 17~107 | 命名空间 + 常量 + 真类混合 |
| Redeem_Item / secretshop | 22~937 | 命名空间（CRedeemItem/CSecretShop 真类 + 常量） |

### 5.2 第三方/外部库组件（不在游戏代码报告范围内）

本二进制内嵌了若干三方库（符号量约 8.5 万，未纳入逐类拓扑与函数报告）。它们的类函数报告已从
[docs/class_func_reports/](class_func_reports/) 分离至 [docs/class_func_reports_3rd/](class_func_reports_3rd/)（203 份）。
工程源码中均有对应三方库可供引用（已用 c6root g++ 4.4.7 实测编译通过，`-m32 -O0 -DTIXML_USE_STL`）：

| 三方库 | 类/命名空间 | 工程内位置 | include 路径 |
|---|---|---|---|
| Boost（裁剪版） | boost::* | `source/Library3rd/Boost/Include` | `-isystem source/Library3rd/Boost/Include` |
| MySQL（libmysqlclient 源码） | MySQL 封装（游戏代码）+ 底层 C API | `source/Library3rd/MySQL` | `-I source/Library3rd/MySQL/include` |
| yaSSL（SSL） | yaSSL::* | `source/Library3rd/MySQL/extlib/yassl` | `-I .../yassl/include` |
| TaoCrypt（加密 + mySTL） | TaoCrypt::*、mySTL | `.../yassl/taocrypt` | `-I .../taocrypt/include -I .../taocrypt/mySTL` |
| TinyXML 1.x | TiXml*（14） | `source/DNFServer/ServerCommon` | `-I source/DNFServer/ServerCommon -DTIXML_USE_STL` |
| flex 生成器 | FlexLexer、__slang_filter__/__dnf_script__ FlexLexer | 编译器生成（源码在 toolchain/flex 生成物） | 随构建 |
| zlib | — | `toolchains/zlib32` | `-I toolchains/zlib32/lib` |
| 标准库/运行库 | std、__gnu_cxx、__cxxabiv1 | `toolchains/c5root`、`c6root`、`lsd44` | 工程 CMake sysroot |

> nsl（NSL 网络库）属工程自研框架 `source/DNFServer/GameServer/ServerLab/ServerLib`，保留在游戏代码报告内。

### 5.3 判定为死代码/未接线的组件

| 组件 | 证据 |
|---|---|
| nexon::cash::NexonCash | 全方法 0 调用点（实际走 Taiwan::TaiwanCash） |
| SimpleEncryption | 运行时零外部调用 |
| CRijndael_fake | 仅自引用的测试桩 |
| WindowsCodeProtectorServer | 无外部实例化/调用（已编译未接线） |
| CHades::Send_HackType / Send_ReturnToVillage / Send_ChangeGold / Send_ChangeSecurity | 空桩 ret（前两者仍有调用点） |
| CHades 基类 std::map<ushort,ushort> | 仅 ctor/dtor 触碰的死成员 |

---

## 6. 复现方法

```bash
# 1. 全量 demangled 符号
nm -C --defined-only df_game_r > /tmp/df_syms_demangled.txt
# 2. 提取类路径（过滤 std/boost/yaSSL 等库）
nm -C --defined-only df_game_r | awk '{n=$3; sub(/\(.*$/,"",n); if (n !~ /::/) next;
  if (n ~ /^std::|^__gnu_cxx::|^boost::|^yaSSL::|^nsl::|^TaoCrypt::/) next;
  sub(/::[^:]*$/,"",n); print n}' | sort | uniq -c | sort -rn > /tmp/df_classes_raw.txt
# 3. 按类分组的方法清单
nm -C --defined-only df_game_r | awk '{n=$3; sub(/\(.*$/,"",n); if (n !~ /::/) next;
  cls=n; sub(/::[^:]*$/,"",cls); mth=n; sub(/^.*::/,"",mth); print cls "\t" mth}' | sort
# 4. 全量反汇编
objdump -d df_game_r > /tmp/df_text_disasm.txt
```

分域分析脚本与类清单（/tmp/df_group_{1..8}_classes.txt、/tmp/df_core_classes.txt、/tmp/df_class_groups_final.txt）为本次分析的可复现输入。

---

## 7. 已知限制与后续工作

1. 长尾类（<20 符号）的作用以类名/方法名推断为主，置信度 中/低 的条目建议在需要精确语义时用 Ghidra 单函数反编译复核；
2. std/__gnu_cxx/boost/yaSSL/TaoCrypt 库实例未逐类展开（量级 8.5 万符号，属标准/第三方库）；
3. 跨域依赖为"符号级"证据（方法签名/调用点），成员布局级依赖（对象内嵌偏移）目前仅对 CUser/CHades/CInventory/CParty/PvP_Room 等核心对象有反汇编实证；
4. 若需要某个类的字段级布局，可用 Ghidra headless 脚本（[tools/hades/dump_hades.java](tools/hades/dump_hades.java) 同法）按地址导出其 ctor/方法反编译。
