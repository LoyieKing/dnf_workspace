# df_dbmw_r 还原进度（dbmw，无 DWARF）

生成时间：2026-08-09

## 二进制信息

- 路径：`neople/dbmw_guild|dbmw_mnt|dbmw_stat/df_dbmw_r`（三副本 md5 相同
  `0d70e931f2f17f03e4c80b7d28f03c83`，只还原一次）
- 4.0 MB ELF32 i386，无 DWARF（2 CU 仅 StackBuffer/StringFormat）
- 项目函数 7,816（T/W 口径）；应用层符号 3,072（is_app 过滤后）
- 动态依赖：libpthread/librt/libm/libc（无需独立 MySQL 客户端，但代码含
  mysql_* C API 729 处，通过静态 libmysqlclient 链接）

## 复用与骨架（本批）

dbmw 与 manager 共享约 73% 函数（6,041/8,268），以 `source/manager` 为起点
复制出 `source/dbmw`，新增：

- `source/toolchain/build-dbmw.sh`（同 manager 工具链：-O0 gnu++0x 应用层、
  yaSSL/taocrypt -O3 -fPIC、tinyxml -O3 4.4.6hdr、静态 libmysqlclient）
- `source/toolchain/compare_dbmw.py`（compare_common 严格口径 + 签名缓存）
- `source/dbmw/{ManagerApp,ManagerTypes}.{h,cpp}`

### 已确认的 dbmw 特有布局

- **CApplication**（ctor 0x0806b664 反推）：
  +0x8 m_field8、+0xc m_appInitor、+0x10 m_appConfig、+0x14 m_serverConfig、
  +0x18 m_serverHandler、+0x1c CFrameCountHandler（0x30）、
  +0x4c CKillUSRConfig*（原误标 CUserManager*）、+0x50 CDBManager（0x48）、
  +0x98 CUdpHandler*、
  +0x9c CNetworkThread*、+0xa0 CSwapQueue<UdpRecvQueue,2>（0x58）、
  +0xf8/+0x110 CMutex、+0x128 CTcpNetSystem（0x160）、+0x288 CGuildManager*
- **CDBManager**：m_handles[0x11]（17 槽，0x44）+ m_app = 0x48（manager 为 16 槽）
- **CNetworkThread**：dbmw 专用网络线程（dispatch 513 条待还原），布局同
  CUdpNetworkThread（+0xc 队列/+0x10 handler/+0x14/+0x18 锁）
- **main**：`strcmp(argv[2], "stop") != 0` 时才 Process（0x81a7220="stop"）
- **Free 顺序**：Thread(+0x9c)→Game Server Handler(+0x18)→UDP Handler(+0x98)
  →Signal Translater→App Config(+0x10)→Server Config(+0x14)→App Initor(+0xc)
  →Guild Manager(+0x288)→Application End
- **Init 结尾**：`np_server_xml::CServerXml::StrLoading()`（0x832d240 静态实例）
- CheckArgv 文案 "CApplication::CheckArgv() start argument error\n"（与 manager 同）
- ShowLogo banner 与 manager 完全相同

## 当前水位（严格口径，2026-08-09）

- IDENTICAL 597 / NEAR 504 / DIFF 1396 / MISSING 68（应用层 2,565 对比）

## 续批（MISSING 140→110）

### PowerWar Rank 族（4 个）
- OnSavePowerWarUserRank（0x4ea7 先删后插，步长 8 的 5 列）、
  OnSavePowerWarGuildRank（0x4ea9/0x4eaa）、两个 handler

### 周期消息/邮件/黑名单补充
- InsertMail（InsertLetter/InsertPostal 参数错位复刻）、OnLoadPeriodicMessage、
  InsertUdpCharacteristic（p2pnetwork_statistic 17 列）、DelBuddy、
  OnRequestApproveJoinGuild、OnInsertUdpCharacteristic、OnDelBuddy、
  OnEndGuildWar

### 事件/公会排行族（6 个）
- insertServerGameEvent（dnf_event_log 5 列）、updateServerGameEvent、
  onStartGameEventFromServer（TCP idx 10 优先 + Monitor 兜底，0x27fb/0x1a）、
  onEndGameEventFromServer（0x27fc/0x16）、UpdateGuildRank（先清零再按
  rankList 更新 guild_rank）、QueryGuildPointList（new STGuildRankInfo +
  make_pair push_back）

### 统计/成员族（9 个）
- QueryP2PStatistics（p2p_statistics 17 列混合 getter）、OnGoldcardEventStatistic
  （99 级步长 9，insert 死代码）、QueryUpdateChannelOccNum（game_channel 更新 +
  100 级 channel_occ_info）、OnMemberDeleteAsCharDelete（6 张表删除，exec 结果
  全忽略）、UpdateMemberKeyInCharacInfo、QueryGuildBooting、OnSaveMember
  （type 1/2 分流 SaveMemberInsert/Delete）、OnSaveMemberUpdateCharInfo、
  OnQueryGuildBooting

## 批量实现批（2026-08-09 续，MISSING 207→164）

### Limit Npc Buy Item 族（5 个）
- loadLimitNpcBuyItemInfo / updateLimitNpcBuyItemInfo / LimitNpcBuyItemResultInfo
  ctor（0x176/0x27dc，29×NpcBuyLimitItem@+0xe 步长 0xc，count@+0xa）/
  onLoadLimitNpcBuyItemInfo / onUpdateLimitNpcBuyItemInfo

### 公会成员等级族（7 个）
- QueryGuildMemberGradeByName（SQL col0→m_id、col1→grade、col2→result 低字节；
  fetch 失败返回 1）、ChangeGuildMemberGrade ×2（charac_name/charac_no 版）、
  ChangeGuildNotifyMessage（0x6002 buf + escape_string；**insert 0x4e63 仅在
  exec 失败时执行**——原版 affected 检查被 or %edx 死代码恒真短路）、
  OnChangeUnconnectedGuildMemberGrade（grade==1 直发 / ==2 发送+日志 /
  0xfe 路径 / ChangeGuildMemberGrade 路径）、OnChangeGuildNotifyMessage

### 公会邮件/委派族（6 个）
- GuildMasterDelegate（旧会长→grade 3、新会长→grade 1、0x4e6a 更新 master_id/
  master_no/master_name）、SendGuildLetter（**tm_hour+1/tm_min=0/tm_sec=0** 到期，
  GetServerString(0x431) 主题，逐成员 InsertLetter）、OnGuildMasterDelegate /
  OnSendGuildLetter（SendGuildCoinByMail 或 SendGuildLetter 按 +0x124 类型，
  回 Packet_DBMW_Reply_Guild_Mail + Notice_Guild_Mail_Arrived）、OnGuildJoin
  （STGuildJoinInfo 0x3c 填充 + GuildJoin + 失败时 DeleteJoinListByInvite）、
  OnSendMailCoinGuildEvent（abs(count) 作为 endurance，characNos 写
  Notice_New_Group_Mail@+0xe 步长 4，n 上限 0x12c）

### 公会公告板族（6 个）
- OnWriteGuildBoard（0x4f08 insert guild_memo 7 参 + blob_to_str + 0x4f07 查
  LAST_INSERT_ID；set_query 结果**不检查**只查 exec）、OnWriteWebGuildBoard
  （6 列：get_uint/get_uint/get_binary×2/get_uint/get_byte）、OnDeleteGuildBoard、
  OnDBLoadRequestGuildBoardWrite / WebGuildBoardWrite / GuildBoardDelete

### 公会建筑/仓库族（16 个）
- OnLoadGuildAgit / OnLoadGuildCargo（cargo@+0xe 0x18d8 + capacity@+0x18e6）/
  OnCreateGuildAgit（0x4eae insert + 0x4eb4 flag=1，reply+0x12=0/2）/
  OnDeleteGuildAgit（0x4eaf delete + 0x4eb4 flag=0）/ OnUpgradeGuildAgit
  （0x4eb6 upgrade+1）/ OnInsertGuildCargoHistory（guild_cargo_history_%d 分表，
  19 列 insert，amplify/separate 位段）、4 个 handler（m_pclApp==0 抛
  CDNFException "0 == m_pclApp"）+ OnUpdateGuildCargo / OnUpgradeGuildCargo /
  OnInsertGuildCargoHistory 3 个简单转发 handler

### 黑名单族（5 个）
- DeleteToBlackListOnly（0x4e40 按 m_id+charac_name 删）、QueryBlackList
  （0x4e44 limit 10，STBlackUserDBType 0x28 步长：uint+name[0x1e]+uint）、
  OnDeleteToBlackList / OnRegisterToBlackList（characNo==-1 时先
  QueryCharacNoByName，结果写回 +0x2c）、OnRequestBlackListOnLogin
  （+0xe 为 0xc9 发 Monitor / 0xcb 发 Guild）

### 公会保存/退会族（6 个）
- SaveGuildSkill（**insert 0x4e59 永不执行**——or %edx 死代码；blob_to_str
  skill_slot）、SaveGuildMember（type<=2 走 member_point 版、type==3 走 grade
  版 SQL）、SaveGuildWarPointList（10 项 guild_war_point 更新）、OnSaveGuild
  （+0xcc 0/1 分流 SaveGuildInfo/SaveGuildSkill + 11 参日志）、OnGuildSecede、
  OnSaveGuildMember / OnSaveGuildWarInfo

### PowerWar 家族（10 个）
- SavePowerWarPoint（0x4e81 update + exec 失败 insert 0x4e82）、
  OnSavePowerWarStatueRanker（sso 删 event_server_message + guild 更新/插入
  power_war_statue_ranker）、OnSavePowerWarPointReward（power_war_point 累加，
  步长 8 的配对）、OnSavePowerWarBonusPoint（postal 插入，item_id=0x4df，
  EUC-KR 发件人名，occ_time=下一整点）、4 个 handler（含 ORIG 的
  OnRequestGuildCreate 文案错配复制）

### 周期消息/邮件族（4 个）
- OnLoadPeriodicMessage（0x4f04 查 dnf_game_message，空结果清零 reply 0x200）、
  InsertMail（**InsertLetter/InsertPostal 参数错位怪癖**：subject 当
  sendCharacNo、content 当 name，按原版复刻）、OnLoadPeriodicMessage handler
  （0x212 发 Monitor）、OnDBMWInsertMail（letterNo=(occTime-0x44a53c70)/86400，
  +0x12f 天 ×0x15180）

## 逐函数核验批（2026-08-09 续，MISSING 207→202）

### 新增实现
- **GetCoinEventPerDay / QueryCharacNoByName / updateCompatibilityIndex /
  OnSecretShopStatistic**（4 个 CDBManager handler）+ 补
  **CPacketTranslater::OnSecretShopStatistic**（try/catch + CMyFileLog 0xeed/0xef2，
  ./log/Except 日志，m_pclApp->m_dbManager 转发）

### 修复的真实语义 bug（大函数核验发现）
1. **40 个 Packet_* shell 类对象偏小 → 栈越界**：handler 用裸偏移写 reply 对象，
   但类只声明了 PacketHeader 10 字节；如 onQueryTowerFullRank 帧 ORIG 0x184c vs
   我们 0x4（写到 +0x17bf 必然崩栈）。已按 ctor size 为全部 40 个类补尾部
   `char m_pad[N]`（QueryFirstLoadSpecDb / OnRequestARSInfo / OnRequestIPCounterList /
   OnQueryGuild 等帧大小现已与 ORIG 完全一致 0x118/0x530/0xeb0/0x1a0）
2. **CGameServer/CGuildServer/CMonitorServer/CStatisticsServer 布局 0x14 vs 0x10**：
   多声明了 `char m_padC[3]` 把 m_udpHandler 挤到 +0x10。删除后四类 0x10；
   **CServerHandler 数组实为 `m_gameServers[0xff]`（255 个，+0xff0）**，笔记原
   写 0xfe 是错的（GetGameServer 边界 cmpl $0xfe 证实 0..0xfe 共 255 槽）。
   CServerHandler ctor 修后 **IDENTICAL（109 vs 109）**；GetGuildServer/
   GetMonitorServer/GetStatisticsServerPtr/CGameServer ctor/SendHeartBeat/
   SendToServer/CServerHandler::Process 全部 IDENTICAL；Load 496 vs 496 NEAR
3. **CApplication::InitDB 的 DB handle 映射错**：ORIG 插入序 1,2,3,4,6,8,5,0xf,9,0xd
   = E_ACCOUNT_DB/E_GAME_DB/E_GAME_DB_2ND/E_LOG_DB/**E_SSO_DB@6**/**E_GUILD_DB@8**/
   E_WEB_DB@5/FRAME_LAG/EVENT/SE_EVENT。我们原把 7(E_WEB_DB) 打开而 **8(guild)
   从未打开**（24 处 m_handles[8] 公会查询会连错库）。修正后 InitDB 仅剩 rodata/
   xor-sete 差异。**handle 槽位正确映射：0=master/1=account/2=game/3=game2nd/
   4=log/5=web/6=sso/8=guild/9=event/0xd=se_event/0xf=frame_lag**
4. **CAppConfig::Load_Table**：Load_Txt_Table_Data 上限 0xff（原 0x13）、成功界
   0xfe（原 0x12）、返回 n（原 1）、补开头日志（0x35d, ./log/process.log,
   "CAppConfig::Load_Table :  _S_MOD_CFG_LOADER_BY_NAME\n"）、错误日志 0x365、
   path 直接 `"./cfg/" + fileName + ".cfg"`（避免多余临时 string，146 vs 147）
5. **CKillUSRConfig::Load_Table**：返回 n；日志改 "./log/TableError" +
   "Kill USR Config Table - ReturnCode = %d\n"（0x5b）；异常文案
   "CKillUSRConfig::Load_Setup_Table() Exception break!"；
   CServerConfig 异常文案补 "Load_Setup_Table"
6. **QueryGuildCreate**：0x4e70 inSert guild_member_introduce 的 charac_no 参数
   ORIG 传 packet+0xf（m_characNo），我们误传 m_id(+0xb)——已改；
   m_job/m_growType/m_lev/m_sex 改有符号 char（ORIG movsbl 有符号扩展）

### 已核验为系统性差异（无需修改）
- QueryFirstLoadSpecDb / QueryReloadSpecDb / onQueryTowerFullRank / OnRequestARSInfo /
  OnRequestIPCounterList / QueryGuild / GuildSecede / QueryMember / QueryPartyStatisticCreate /
  CAppConfig::Parse_Table / OnLoadGuildCargoHistory / CApplication ctor / Free /
  MsgDecode / QueryConnInfo：差异均为 xor/sete、寄存器分配、栈槽、rodata 地址、
  内联 memset/epilogue 结构；语义逐一比对一致

### 工作流优化
- 新增 `source/toolchain/review_dbmw.py`：复用 verify_diffs 分类器 + 二次过滤
  （帧大小/栈槽/寄存器噪声），把 1267 个 DIFF 收敛到“真实差异”队列并排序；
  全量比对 0.4s（签名缓存），单函数 diff 用 monitorlib 整二进制缓存

## 大函数批（2026-08-09 续，MISSING 259→218）

### 已实现（差异均为系统性代码生成形态）
- **OnRequestIPCounterList**（374 vs 371）：IP 计数分批发送（0x95/批，
  flag 0/1/2 + 16 位 sendSize）
- **queryTowerFullRank**（182 vs 210）+ **onQueryTowerFullRank**（298 vs 262）：
  rank 1..4 分桶 + 60 条/包 + Sleep_Ext(0,0x30d40)
- **UpdateDisjointAvatarStatistic**（288 vs ？）：grade/body 表名选择
  （normal/high/rare × headgear..aurora）+ 死代码 insert（or edx 恒真）
- **QueryDeathTowerPlayDataJobStatisticCreate / Party / Value**（374/362/? vs
  330/298/?）：双段批处理（跳过 count/2）+ vals 索引更新
  （Value 版复刻不完整 WHERE 的怪 SQL）
- **CServerXml 全家 13 函数**（4 IDENTICAL + 8 NEAR + 1 DIFF-2）：
  新建 dbmw 专用 ServerXmlDbmw.h/cpp（无 auction 扩展成员，布局与 ORIG 一致）
- **AwardGuildCoinByMail**（295 vs 246）、**SendGuildCoinByMail**（196 vs 198）、
  **InsertPostal**（86 vs ？）：公会币邮件发放（postal 11 列 + letter）
- **QueryLoadARSInfo**（225 vs 246）+ **OnRequestARSInfo**（237 vs 237）：
  ARS 信息分批发包（0x64/批，stride 0xc）；CopyStruct/dtor IDENTICAL
- **QuerySubGuildMaster / QueryGuildSkill / QueryGuildNotiMessage +
  OnQueryGuild**：公会查询链（子会长列表、技能槽、公告），回复 0x135
- **ontime 事件族**：QueryOnTimeEventIdxUpdate/Item +
  OnReqOntimeEventIdx/IdxUpdate/Item（TCP 0xa 优先，回退 Monitor +
  GetTcpServer null 日志）；修复 makePacketHeader 返回类型
  （ushort→char*，原实现截断指针）
- **QueryBuddyInfo + OnQueryBuddyInfo**：好友列表查询（stride 0x27）

### QueryTodayGuildMember（272 vs 294）
- vector<STTodayGuildMember>（0x27：charac_no+name[0x1e]+grade/job/grow/sex/lev）
  收集后 rand()%size 抽样写 reply+0xe；顺带实例化 vector 模板族与
  STTodayGuildMember dtor

## 公会/统计/活动批（2026-08-09 续，MISSING 279→264）

### 已实现（差异均为系统性代码生成形态）
- **QueryGuild**（392 vs 396）：guild_info 15 列 → STGuildDBInfoOnly
- **QueryHWspecCreate**（440 vs 334）：log_hardware_ting 三模式
  （mode@+0xa：0/1/else → 0x4e78/0x4e7a/0x4e7c update + 失败 insert
  0x4e79/0x4e7b/0x4e7d）；**affected 检查为死代码**（`or %edx,%eax` 恒真），
  insert 仅 update exec 失败时执行——按原版有效语义复刻
- **OnLoadGuildCargoHistory**（286 vs 221）：guild_cargo_history_%d 分表
- **DeleteToBlackList**（236 vs 247）：删黑名单 + 查积分 + 条件减分
- **OnLoadGuildBoard**（217 vs 235）：guild_memo 7 列 → STGuildBoardDBInfo
- **OnDBLoadRequestGuildBoardOpen**（373 vs 354）：10 条/页分页 + rem 尾包 +
  try/catch
- **selectCollectItems**（232 vs 216）：**change_flag→fullTime 参数、
  full_time→changeFlag 参数（原版交叉怪癖）**
- **updateNexonPinPcRoomPlayTimeEvent**（228 vs 220）：nexon cash pin 领取
- **OnSaveAssertManagerInfoWrite**（223 vs 187）：escape_string 双字段 +
  逐条 Exec Query 日志
- **QueryCubeStatisticCreate**（281 vs 230）：std::string 批处理，
  str.length()+0x800 > 0x6000 时冲刷 + i-- 重试
- **SaveUnchangableGuildInfo**（276 vs 286）：master 改名（0x4e87）/
  成员改名（0x4e84）分支
- **InsertLetter**（139 vs 83）+ **OnPcRoomPlayTimeReward**（316 vs 252）：
  PC 房奖励发信（韩文 EUC-KR 串按原始字节）+ Monitor 通知
- **AddBuddy**（325 vs 294）+ **OnAddBuddy**：查角色 + GM 检查
  （isGM→result=0x5a）+ charac_friends 插入

### 布局修复
- STGuildDBInfoOnly 按 ORIG ctor 重写真实布局（0xbd：master_no/member_count/
  guild_rank/skills[0xf]/master_name/fieldB9）
- STGuildSkill 补 packed（8→5 字节）

### 追加（MISSING 264→259）
- **QueryIPCounter**（355 vs 388）：auto_punish_hack_ip/full_ip 两查询 →
  vector<st_ip_counter_list>（0x14）/vector<st_full_ip_counter_list>（0x18）
- **st_ip_counter_list/st_full_ip_counter_list::CopyStruct**：字段拷贝 +
  memset + strncpy——两个都 IDENTICAL；dtor IDENTICAL
- 剩余 vector 模板（begin/end/empty/operator[]）随 OnRequestIPCounterList
  实现后自然实例化

## 批量收尾批（2026-08-09 续，MISSING 364→283）

### QueryFirstLoadSpecDb（414 vs 431）
- 与 QueryReloadSpecDb 同构（6 行/包、12 列 getter、i%6 发包双发、
  -1 填充），无 collect_interval 段、无收尾 delete-notify

### CAppLoadChecker 全家（12 个符号，10 IDENTICAL + 1 NEAR + 1 nop）
- 布局：+0/+4/+8 队列水位 int、+0xc/+0xd/+0xe 等级 byte、+0xf pad
- checkTcpRecvLoad/checkUdpRecvLoad/checkTcpSendLoad：阶段阶梯
  （50/100/200/500/1000/5000）+ 负阶段（0xff..0xfa），204 条全同构
- **原版怪癖**：checkTcpSendLoad 负阶段首块写 +0xd（udp 等级）而非
  +0xe——已复刻
- RequestDB → OnServeQueueLoadStatistic（0x4ecd 存 log_otherserver_load_stat）
- check*Load 返回 bool（调用方直接 test %al; je）

### 包 ctor 批量（28 个包 + 7 个结构体，8 IDENTICAL + 28 DIFF）
- 结构体：DnfItemInfo（0x35，RandomOption/UpgradeSeparateInfo/ReservedCapacity
  嵌套）、STGuildMemberCharacData、STBlackUserDBType、STGuildBoardDBInfo、
  STGuildCargoDBInfo（0x77×DnfItemInfo）、STGuildMemerDBInfo、
  STGuildCargoLog（复用 DNFFunctionLib.h 定义）
- 28 个 Packet_* ctor（type/size/字段初值全部按 ORIG 反汇编核对）
- 循环构造（BlackList 10×、Board_Open 9×、Cargo_History 0x31×、
  CargoDBInfo 0x77×）用 placement-new；DIFF 来自 GCC placement-new
  机制（_ZnwjPv+判空）与数组自动构造循环形态差异——工具链无法对
  非 POD 成员打包，语义等价

### 复用其他二进制
- monitor 的 CAppLoadChecker 语义参考（dbmw 为扁平阶梯结构）
- guild 的包数据小结构（RandomOption/UpgradeSeparateInfo/ReservedCapacity）
- statics 原版接收侧核对 Frame_Lag 结果包字段
- 无参数启动输出与原版逐字节一致（exit=1、banner、CheckArgv、Free 序列完整，
  含 "Guild Manager Free Success!"）

## Frame-Lag 大函数批（2026-08-09 续，MISSING 372→364）

### 已实现
- **UpdateResetGuildPoint / UpdateAccumulateGuildPoint**（各 92 vs 92）：
  m_handles[8]，set_query 失败仅记日志仍 exec（0x4e36/0x4e38 与
  0x4e35/0x4e37），exec 失败 return 0
- **QueryReloadSpecDb**（494 vs 511）：collect_interval 查询 → 发包 →
  monitoring_spec 12 列查询 → 结果包（**6 行/包**，count=n/6 余数+1，
  i%6==0 发包、Sleep_Ext(0,1) 双发、收尾 -1 填充）；字段与 statics ORIG
  接收侧逐列核对一致（详见 df_dbmw_r_reloadspec_notes.md）
- **InsertFrameLagStatistics**（433 vs 486）：common_index 14 列 + kind
  0..5 跳转表 6 表名 + 每表 20 列（int/float 双精度）+ 收尾
  monitoring_spec 检查 → Spec_Delete_Notify 兜底（详见
  df_dbmw_r_fls_notes.md）
- 4 个 Frame_Lag 包 ctor 全部 IDENTICAL

### 包布局审计（本批发现并修复的真实语义 bug）
- **显式 pad 数组成员会破坏 GCC 打包**：`char m_padB[1]` 之后的 int 成员
  偏移 +2（如 Change_Char_Name.m_characNo 实为 +0xc，ORIG +0xb）。
  删除 Packet_DBMW_Change_Char_Name / Request_Guild_Create /
  Item_Limit_Edition_Update / Load_Data_Req/Rpy / Frame_Lag 系列中的 pad
  后全部恢复正确打包（ChangeCharName 等函数偏移与 ORIG 一致）
- Change_Char_Name.m_serverId 改有符号 char（ORIG movsbl）；
  Item_Limit_Edition_Update.m_count 改 unsigned（ORIG seta 无符号比较）
- STGuildMemberProxy 补 `__attribute__((packed))`（0x44→0x41，影响
  All_Members 数组步长与 Unconn 布局）
- QueryMember：STMemberDBInfo 因含非 POD 成员无法紧打包，m_master 改用
  原生偏移（+0x17 基址、m_count+0x27、m_lowers+0x28）访问
- 发现 statics 重建端 PushMonitoringSpecData(Reload_Spec) 读偏移与其 ORIG
  不符（+0x18+i*0x38 vs 0x13+4i），留待 statics 批修复

## 统计 handler 批（2026-08-09 续，MISSING 376→372）

### 已实现
- **OnStatisticNumOfOccupations**（209，59 vs 67）：复刻原版怪癖——set_query
  用 0x4eec、exec 用 0x4eeb，且 set_query 成功直接 return 1（跳过 exec）；
  exec 失败记日志仍返回 1
- **OnStatisticLoginLogout**（347，93 vs 94）：循环插入 log_login_logout
  （项步长 6：+0xe/+0xf 字节、+0x10 int），0x4eeb
- **QueryOnTimeEventIdx**（268，79 vs 80）：0x4f14 查 ifnull(max(no),1) →
  get_uint 到回复 +0xa；exec/fetch 失败直接 return 0（无日志）
- **Packet_Result_OnTimeEvent_Idx** ctor（0x2341/0xf，**IDENTICAL**）

## CGuildManager 收尾批（2026-08-09 续，MISSING 378→376）

### 已实现
- **printGuildWarRank**（72 vs 72）：遍历 warRankList 记日志
  （GuildKey/Point/Rank）
- **GetGuildWarEnterableRank**（95 vs 89）：前 10 项填 ST_Guild_War_Info
  （步长 0x23：+0/+4 int、+8 name[0x16]、+0x1f int）→ printGuildWarRank()
- CGuildManager 主体函数至此全部完成

## CGuildManager 公会战批（2026-08-09 续，MISSING 392→378，8 个 IDENTICAL）

### 已实现
- **GetFirstRankGuild**/**insertGuildWar**（IDENTICAL）：m_warRankList 首元素/
  push_back(make_pair(m_field4, info))
- **getFirstGuildOfGuildWar**（NEAR）：max_element(GuildWarPairDataCompare
  `<` 升序) → second->m_field0；**GuildWarPairDataCompare**（IDENTICAL）
- **InitGuildWarPointList**：前 11 项 m_field4=1000
- **rank/rankGuildWar**（66 vs 64 / 72 vs 70）：std::sort 按 pair.first
  **降序**（CPairDataCompare/GuildWarCompare keyLess `a>b`）→ 逐项 m_field8=++r；
  **CPairDataCompare/CPairDataGuildWarCompare operator()/keyLess 均 IDENTICAL**
- **insert**（push_back make_pair）/**GetVtGuildRankInfo**（&m_rankList）
- **STGuildRankInfo** ctor（IDENTICAL）
- 连带补全 vector<pair<uint,STGuildRankInfo*>> 模板实例（~40 个符号）

## 小 handler 批（2026-08-09 续，MISSING 397→392）

### 已实现（差异全为系统性 xor/sete/寄存器）
- **ChangeCharName**（218，65 vs 60）：m_handles[3]，0x4e85 更新
  charac_black_list 名字
- **ChangePvPBuddyName**（227，69 vs 72）：m_handles[9]，0x4efa 更新
  pvp_buddy（buddy_server_id/charac_no 条件），失败日志 0x13b0
- **DeleteJoinListByInvite**（232，60 vs 62）：0x4f0c 删 guild_join_list
- **OnUpgradeGuildCargo**（216，65 vs 68）：0x4edc 更新 guild_agit
  cargo_capacity（packet +0x12 容量/+0xa guildId）
- **OnUpdateGuildCargo**（222，64 vs 67）：blob_to_str(0, +0x12, 0x18d8) →
  0x4ecb 更新 cargo 文本
- 新增：Packet_DBMW_Change_Char_Name（+0xa serverId/+0xb characNo/+0xf name）

## Frame-Lag 分析批（2026-08-09 续）

### 已实现
- **UpdateGuildWarPointList**（201，55 vs 54）：0x4e3d 重置 guild_war_point=1000
  （server_id + 硬编码 rank<=10；rank 参数未用，复刻）

### 待继续（笔记已存）
- **QueryReloadSpecDb**（1700，494 条）：collect_interval 查询 → 发包 →
  spec 查询（n/3 分页）→ 结果包逐行 ~20 列（docs/df_dbmw_r_reloadspec_notes.md）
- **InsertFrameLagStatistics**（1620，433 条）：common_index 插入 + kind 跳转表
  （7 类 lag 表名）+ 浮点列 + daily_bad_spec（docs/df_dbmw_r_fls_notes.md）

## Item Limit 家族（2026-08-09 续，MISSING 402→398）

### 已实现（差异全为系统性 xor/sete/寄存器/临时槽）
- **onItemLimitEditionLoadData**（1793，583 vs 600）：h=m_handles[1]；
  WHERE 拼接 "and ipg_no " + `getList2inQuery("in (n1,n2,...)")`；0x4ec7 查
  limited_shop_manager（19 列）→ 回复包逐行 19 列混合 getter
  （0x38 get_uint/0x50 get_ubyte/0x34 get_int/0x48 get_short），项步长 0x48
- **onItemLimitEditionUpdateData**（356，115 vs 124）：按项 flag（+0x1a）
  选 UPDATE sell_cnt[+real_end_time]（0x4ec8），项步长 9，exec 结果不检查
- **getList2inQuery**（45 vs 46）辅助 + Packet_Item_Limit_Edition_Load_Data_Rpy
  ctor（0x1008/0x7ef）
- 新增：STItemLimitItem（packed 19 字段）、Req/Rpy/Update 三个包类

## SaveGuildInfo / ItemLimit 批（2026-08-09 续，MISSING 405→402）

### 已实现
- **SaveGuildInfo**（537，107 vs 114）：guildName 空 → 日志（仍继续 UPDATE）；
  0x4e25 更新 guild_info 11 列（lev/ability/guild_point/guild_exp/name/power_side/
  power_war_point/guild_agit_flag/power_join_count/guild_fund where guild_id）
- **STGuildDBInfoOnly** ctor（89 vs 107）：+0x45 STGuildSkill[0xf]（各 0xffffffff/0xff）
  → 末尾 memset(+0x45,0x50) 清空技能（原版怪癖）、+0x1c 置位/清位、memset(+0xa4,0x15)
- **STGuildSkill** ctor（**IDENTICAL**）

### 待继续（笔记已存 docs/df_dbmw_r_itemlimit_notes.md）
- **onItemLimitEditionLoadData**（1793）：WHERE 拼接 "and ipg_no " + getList2inQuery，
  0x4ec7 查询 → 回复包逐行 30+ 列（混合 getter 0x34/0x38/0x48/0x50）；需
  getList2inQuery 辅助与两个包类定义

## Party 统计三件套（2026-08-09 续，MISSING 407→405）

### 已实现（差异全为系统性 xor/sete/寄存器/临时槽）
- **QueryPartyJobStatisticCreate**（1737，477 vs 487）：成员步长 0x19，
  12 列（+0xe ushort/+0x10 int/+0x14..0x19 字节/+0x1a int/+0x1e byte/+0x1f int/
  +0x23 int）；flush 与最终均写 log_dungeon_party_job（0x4e99）
- **QueryPartyCharacStatisticCreate**（1991，531 vs 545）：成员步长 0x43，
  21 列（含 +0x11 与 +0x10 重叠读、+0x17/+0x1d/+0x21..0x4d int、+0x14..0x1c 字节）；
  flush 与最终均写 log_dungeon_charac（0x4e9b）
- 三者共同模式：0x200 缓冲 sprintf 拼行（首行无逗号、后续加逗号）、
  sql.length()+0x800 > 0x6000 时 flush + i-- 重做、成员指针每字段重算

## PartyStatistic 批（2026-08-09 续）

### 已实现（MISSING 408→407）
- **QueryPartyStatisticCreate**（2259，647 vs 735，差异为寄存器/临时槽代码生成）：
  m_handles[4]（log）；Packet_DBMW_Dungeon_Statistic_Party（+0xa count，
  成员 +0x10 + i*0x3c）；每成员 20 列（+0xe ushort、+0x10 int、+0x14..0x19 字节、
  +0x1a..0x46 int）按 `sprintf("(now(),%d×20)")` 拼行；sql 长度 > 0x5800 时
  flush 到 log_dungeon_party_job（0x4e99）并 i-- 重做；末尾 flush 到
  log_dungeon_party（0x4e97）；成员指针每字段重算（原版 shl/shl/sub 展开）
- 新增：STPartyMemberStat（packed，字段至 +0x46）、
  Packet_DBMW_Dungeon_Statistic_Party

## JoinApprove 批（2026-08-09 续）

### 已实现（MISSING 409→408，差异全为系统性 xor/sete/寄存器）
- **OnGuildJoinByListApprove**（409 vs 417）：签名 `(guildId, char serverId,
  m_id, characNo, STGuildJoinInfo&, uint&)`（第二参为 char，mangled `c`）；
  memset(joinInfo,0x3c) 后填 +0 serverId/+0x4 guildId/+0xc m_id/+0x10 characNo；
  查 guild_join_list（m_id/born_year）→ 查 charac_info（name/job/grow/lev/sex，
  get_byte 写 +0x32..0x35）→ GuildJoin → deLete guild_join_list；
  两处 `!exec||!fetch` 均为短路（exec 失败跳过 fetch）
- STGuildJoinInfo 补 +0xc m_fieldC（非 pad）

## SaveMember 批（2026-08-09 续）

### 已实现（MISSING 411→409，差异全为系统性 xor/sete/寄存器）
- **GuildJoin**（561 vs 563）：见上批记录
- **SaveMemberInsert**（432 vs 424）：参数序 (masterNo, characNo, type)；
  type==2：UPDATE 4e45 master_no →（`!exec||affected==0`）INSERT 4e46 →
  UPDATE 4e4b charac_no=masterNo（原版用 masterNo 当 charac_no！）→ INSERT 4e47；
  type==1：UPDATE 4e48 → INSERT 4e49 → UPDATE 4e4a → INSERT 4e46（master_no=0）；
  其余 type 直接 return 1
- **SaveMemberDelete**（89 vs 87）：type==1：UPDATE 4e4e master_no=0/exp=0（用
  第二参）→ UPDATE 4e4c delete_time（用第一参）；type==2：UPDATE 4e4f 三者都清；
  各 exec 失败 return 0

## MemberProxy / GuildJoin 批（2026-08-09 续）

### 已实现（MISSING 419→411，差异全为系统性 xor/sete/寄存器）
- **QueryGuildMemberProxy**（179 vs 172）：0x4e54 查 guild_member 6 列 → STGuildMemberProxy
  （+0 no/+4 name[0x1d]/+0x22 job/+0x24 lev(short)/+0x23 grow/+0x26 sex）
- **QueryGuildAllMembersProxy**（294 vs 293）：0x4e23 limit 0x12c → 9 列填充
  （含 +0x27 grade、+0x28 last_play_time、+0x2c memo[0x15]），count 上限 0x12c
- **OnQueryUnconnGuildMemberProxy**（128 vs 125）：Packet_DB_Reply_Unconn_Guild_Member
  （0x427/0x53）→ QueryGuildMemberProxy → GetGuildServer()->SendToServer
- **OnQueryGuildAllMembersProxy**（255 vs 251）：临时数组（m_guildManager
  GetArrayTempGuildMemberList=+0x18，memset 0x4c2c）→ 查询 → 按 0x5d（93）人分页
  （0x179d 字节/页）发送 Packet_DB_Reply_Guild_All_Members（0x426/0x17b1，
  末页 flag=2，余数页改 packetSize）
- **GuildJoin**（561 vs 563）：characName 空 → 0x27；member_flag/secede_time 检查
  （0x27/0x68）→ 人数上限 0x12c（0x26）→ UPDATE guild_member 复位字段
  （`!exec||affected==0` 才 INSERT）→ member_count+1 → charac_info 更新
- 新增结构：STGuildJoinInfo（+0 serverId/+0x4 guildId/+0x8 m_id/+0x10 characNo/
  +0x14 name/+0x32 lev/+0x33 grow/+0x34 job/+0x35 sex/+0x36 bornYear）、
  Packet_DB_Reply_Unconn_Guild_Member、Packet_DB_Reply_Guild_All_Members

## StackBuffer / QueryGuildCreate / QueryMember 批（2026-08-09 续）

### StackBuffer 家族（已实现，2 个 IDENTICAL + 若干 NEAR）
- TLS StackBufferContext（vector<Buffer{idx,off,size}> + vector<uchar*> 0x4000 块池
  + blockIndex + offset）；allocStackBuffer/freeStackBuffer/freeAllStackBuffers
- StackBuffer 基类（+0 m_buf、+4 m_end）+ StackBuffer_char/StackBuffer_wchar
  （+8 内联缓冲）：alloc/getBuffer/cv/拷贝构造（const 引用但偷取源）/operator=/
  freeAll；`sformat(const char*, ...)` 返回 StackBuffer_char（117 条，先量后写）
- CGuildManager m_members 展开为 `STGuildMemberProxy[0x12c]`（0x41 布局），ctor
  数组构造自动对齐（NEAR 39 vs 39）

### QueryGuildCreate（2463，已实现；710 vs 739 = 系统性 xor/sete）
- Packet_DBMW_Request_Guild_Create 布局修正：+0xa serverId、+0xb m_id、
  +0xf characNo、+0x13 characName、+0x31..0x34 job/grow/lev/sex、+0x35 bornYear、
  +0x38 guildName、+0x4f guildUrl（早期笔记中 +0xb/+0xf 与 0x31..0x34 语义已纠正）
- 流程：member_flag/secede_time 检查（0x20/0x22/0x68/4 错误码）→ 名字 NULL 日志
  （CharacName 空继续、GuildName 空返回）→ 插 guild_info → GetIdentity →
  sformat("%s%d","url",guildId) → 更新 guild_url（`!exec||affected==0` 置 result=2）
  → UPDATE guild_member → INSERT guild_member → guild_introduce/member_introduce/
  visit/skill → charac_info；失败仅置 result=2 并继续，最终 return 1

### QueryMember（2938，已实现；796 vs 830 = 系统性 xor/sete）
- 双查询：UNION 查 charac_members（type 1=master/2=member，exp/时间戳）→
  sprintf 拼 "(no1,no2,)" 列表（0x40 缓冲，n 上限 0xb）→ 按 `charac_no in %s`
  查 charac_info 回填 lev/name（master 记录 + FindCharProxyInArray(0xa) 匹配）
- 新增结构：ST_MemberProxy（0x27：+0 no/+4 lev/+5 name[0x1e]/+0x23 exp）、
  STMemberDBInfo（+0 proxy/+0x27 count/+0x28 lowers[9]）、
  Packet_DB_Reply_Query_Member（0x4b3/0x1c5，+0xa flag/+0xf maxExp/+0x13 maxIdx/
  +0x17 master）、STGuildMemberProxy（0x41）

## SQL handler 批（2026-08-09 续）：GuildSecede / RegisterToBlackList 等

### 已实现（MISSING 439→434，均为语义对齐，差异仅系统性 xor/sete/寄存器/字符串地址）
- **QueryGuildWarPointList**(774)：m_handles[8]，0x4e3b 查 guild_info（guild_rank<=10）
  → STGuildWarRankInfo（0x28：+0 guild_id、+4 guild_war_point、+8 guild_point_prev、
  +0xc guild_name[0x17]、+0x24 追加列）push_back(make_pair(m_field4, info))
- **AwardGuildTitleByMail**(758)：m_handles[8] 查 guild_member → m_handles[3] 写 postal
  （occ_time=now+1h、receive=titleNo、item_id=0x65b2、add_info=rand(0x3e8)、
  endurance=item、send_name=guildName）；log 中 endurance 传 0（原版如此）
- **RegisterToBlackList**(1531)：m_handles[3]；插 charac_black_list →
  UPDATE black_point+1（affected==0 才 INSERT charac_black_info）→ 查
  black_point/offset_point/时间戳 → problemTime==0 且 blackPoint-offsetPoint>99 时
  重置 problem_child_time；`NumberToString(m_id,0)` 已复用
- **GuildSecede**(3515)：m_handles[8]+m_handles[2]；grade==2 禁止退会(0x57/0x18)；
  grade==1 且 memberCount==1 才可解散(isMaster)；更新 charac_info/guild_member →
  重计 member_count → 按需查 m_id → isMaster 时 expire+删 8 张表；result 码
  2/0x22/0x57/0x18/4/0x68/1/0
- **GetIdentity**(164)：0x4e5d "seLect @@identity" → exec/fetch/get_uint
- **isDayTimeOver**(新)：localtime 副本 tm_mday-=days 后 mktime，有符号比较

### 关键修正
- **包类必须 `__attribute__((packed))`**：Packet_DB_Request_Guild_Secede /
  Packet_Notice_Guild_Mail_Arrived / Packet_Monitor_UDP_HeartBeat 之前缺 packed
  导致继承 PacketHeader(10B) 后成员 +2 偏移
- STGuildWarRankInfo 0x28 布局（+0x24 字段、ctor 只清 +0..0x23）

### 待办（下批）
- **QueryGuildCreate**(2463) 已实现（710 vs 739，差异为系统性 xor/sete）：
  Packet_DBMW_Request_Guild_Create 布局 +0xa serverId/+0xb m_id/+0xf characNo/
  +0x31..0x34 job/grow/lev/sex；sformat + StackBuffer 家族（TLS 0x4000 块池、
  char/wchar 变体、operator=/freeAll）已实现，依赖 GetIdentity/isDayTimeOver 闭环
- 继续 CDBManager handler：QueryMember(2938)/QueryGuild(1335)/GuildJoin(2125)/
  SaveMemberInsert(1607)/QueryParty*StatisticCreate(2259/1991/1737) 等

## DB 入口批（2026-08-09 续）：QueryConnInfo / InitDB / OpenDB / CServerHandler 重构

### QueryConnInfo（189 vs 198 → 仅系统性差异）
- 原版签名 `(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&)`（mangled
  `...17ENUM_SERVER_GROUPR12STDBConnInfo`），新增 `enum ENUM_SERVER_GROUP`；
  第三参为 `m_appConfig->GetDBConnInfo(idx)` 引用（非局部结构体）
- 端口列走虚表 +0x5c = `get_int(int&, uint&)`（转发 get_uint，语义等价但调用点
  必须一致）；列序：db(+0x42)/host(+0)/port(+0x14)/user(+0x18)/pass(buf→DecryptValue
  →+0x2d)；`get_n_rows()!=1` 判定
- **CMySql 虚表 31 槽修正**：原版 +0x7c 是 `get_quest_str()`（返回 m_query），
  `get_ulonglong` 为非虚（get_uint(ull&) 转发之）

### InitDB（504 vs 505 → 仅字符串地址/xor-sete）
- DB_HANDLE_0（E_MASTER_DB）先单独 OpenDB，其余 10 项 map
  `insert(make_pair(...))`（原版插入序 1,2,3,4,6,5,7,0xf,0x9,0xd）
- 循环内 `QueryConnInfo(*GetDBConnInfo(idx))` 失败即 return 0；
  结尾 `puts("DBMW_ALL_DB Open Success")`

### OpenDB（79 vs 80 → 仅系统性差异）
- 原版按值传 `std::string`（mangled `Ss` 非 `RKSs`）
- **双重错位补偿**：OpenDB 传 `(idx, host, port, db, user, pass)`，
  CDBManager::Open 语义 `(user, pass, db)`，open6 再错位给
  mysql_real_connect(host, pass, db, user)——净效果连接参数正确，逐字节复刻

### 重大发现：CServerHandler 布局与 manager 完全不同（0x1040，非多态）
原版 ctor 反推：
- +0：`CGameServer m_gameServers[0xfe]`（254×0x10 = 0xfe0，同构类四份：
  CGameServer/CGuildServer/CMonitorServer/CStatisticsServer，各 0x10：
  +0 type(uchar)、+4 name、+8 port、+0xb flag、+0xc CUdpHandler*）
- +0xff0：单 CMonitorServer、+0x1000 map<uchar,CTcpServer*>、+0x1018 CGuildServer、
  +0x1028 m_app、+0x102c m_tickCount、+0x1030 CStatisticsServer
- 原版方法集：GetTcpServer(Eh/Ej)/GetGameServer/GetGuildServer/GetMonitorServer/
  GetStatisticsServerPtr/CreateTcpServer/DeleteTcpServer/SendAllTcpServer/
  SendAllToGameServer/CheckTcpServerHeartbeat/Attach/Load/Process
  （manager 的 m_monitorServers[0x65]/SendToMonitorServer 等均不存在）
- SendHeartBeat 分化：CGameServer 直连 m_udpHandler；其余三类走 this->SendToServer
- CTcpServer：SetServerType/GetServerType（非 SetServerIndex）

### CTableBase / 配置类虚表修正
- CTableBase：vptr+0x8 `Load_Table(const std::string&)`、vptr+0xc `Parse_Table(char*,int)`
  均为纯虚；`Load_Txt_Table_Data` 为非虚读文件（补 fclose）
- CServerConfig：m_servers[0xff]（255×0xc = 0xbf4），Parse_Table 5 列
  （type/flag/idx/name/port），Load_Table 用 idx=0xff、界 0..0xfe、成功返 n
- ST_ServerInfo 字段序：+0 type、+1 flag、+2 idx（原 +0 index/+1 type 是错的）
- CApplication +0x4c 实为 `CKillUSRConfig*`（非 CUserManager*；dbmw 无 CUserManager）

### TranslateSignal（275 vs 276 → 结构对齐）
- 完整实现：CKillUSRConfig Clear_Table/Load_Table("./script/kill_user_config.tbl")
  → 遍历（const vector + const_iterator，原版 GetInfo 按 const 用）：
  type 1 = 重载 server_config.tbl + CServerHandler::Load；
  type 2 = clearGuildWar + QueryGuildWarPointList + ranks 空即返 +
  get_awardItem_using_interval()（tm 计算，<0 日志返回）+
  AwardGuildTitleByMail(0x65b2, 韩文常量名) + Packet_Notice_Guild_Mail_Arrived
  （0x415/0x33）经 GetMonitorServer()->SendToServer
- 新增依赖：CGuildManager clear/clearGuildWar/GetVtGuildWarRankInfo、STGuildWarRankInfo
  ctor、Packet_Monitor_UDP_HeartBeat（+0xa=0xff）、get_day_interval；
  QueryGuildWarPointList(774)/AwardGuildTitleByMail(758) 暂为占位（仍计 MISSING）

## 待办（按优先级）

1. 实现 439 个缺失函数（按体量）：
   - CDBManager SQL handler 族（GuildSecede/QueryMember/QueryGuildCreate/
     各类 StatisticCreate/OnSave*/Query* 等）
   - CNetworkThread::dispatch（513 条）
   - QueryGuildWarPointList（774）/ AwardGuildTitleByMail（758）
   - np_server_xml::CServerXml 全类（ctor/InitString/StrLoading/ProcessLoad/
     EventLoad/RGBALoad/CharsetInit/StrPunish）
   - CGuildManager / CUser / CAppLoadChecker / WongWork
   - CApplication::Load / Free / Process（CServerHandler 新布局下的核对）
2. 修正 1,133 个 DIFF（共享类在 dbmw 中的语义分化，逐函数核对）：
   - 已知系统性差异：xor $1 vs test;sete（`if(!x)` 代码生成）、字符串/rodata
     地址漂移、栈偏移 ±0x18（局部布局）
   - CServerHandler::Load 496 vs 500（内联 infos[i] 重算模式已对齐，剩余为
     EH landing pad 顺序）
   - CPacketTranslater handler 族（manager 遗留 OnHeartBeat/OnWebNoticeProhibit
     等在 dbmw 不存在，需按 dbmw 版重做并清理兼容 API）
3. 全量验收 + 运行时行为验证（带 cfg 的真实启动）

## 加密子系统（CSHA / IMethod / CTEA，本批）

### CSHA（SHA-256）
- 类布局：+0 H[8]、+0x20 lengthLo、+0x24 lengthHi、+0x28 block[0x40]、
  +0x68 finalized；sm_K256（0x0819e660）/ sm_H256（0x0819e760）标准常量
- AddData：`(oldLo>>3)&0x3f` 为块内偏移（用旧 lengthLo）、len*8 进位到 hi、
  len<=0 返回 0x70000007、成功 0x6fffffff
- FinalDigest：未 finalized 返回 0x70000008；长度写 block+0x38/0x3c（this+0x60/
  0x64）；结束后 Reset + 返回 0x6fffffff
- Transform：64 轮循环、每轮调用 CH/MAJ/SIG0/SIG1（原版未内联，-O0 天然同构）；
  原版展开 2305 条 vs 我们循环 204 条（语义等价，展开差属代码生成）
- 实测：sha256("abc")、1000×'a'、分段 AddData、55/56 字节边界全部通过

### IMethod（加密基类）
- 布局：+0x4 initialized（byte）、+0x8 blockSize、+0xc keyLength、+0x10 mode、
  +0x14 padding
- 错误码：0x70000005（已初始化）、SetMode 非法 0x70000003、SetPadding 非法
  0x70000004；Get* 在已初始化时写 *out=0x70000005 并返回 0，否则直接返回值
- Pad：返回 data+padLen（指针）；padding 0=0x00、1=0x20、2=padLen
- BytesToWord/WordToBytes 大端

### CTEA（TEA 变异版）
- 布局：IMethod + +0x18 K[4]（16B）、+0x28 iv[4]（轮密钥）、+0x38 chain、
  +0x40 chain2；blockSize=8、keyLength=0x10
- Initialize：key 循环展开为 tmpKey（tmpKey[i]=key[i%keyLen]）、
  第 4 参 ivLen 范围 0..2（存 m_padding）、iv 同则 chain=chain2 否则
  chain=chain2=iv；key 同则早退；否则写 K、BytesToWord ×4 → iv（轮密钥）
- 轮函数为**变异 TEA**：`v0 += (((v1<<4)^(v1>>5))+v1) ^ (K[sum&3]+sum)`（每半轮
  仅 1 个密钥项），非标准双密钥项 TEA；加解密为互逆
- Encrypt/Decrypt 三种模式：0=ECB、1=CBC（Xor+链）、2=CFB 变体
  （encrypt 链 keystream、decrypt 链 src，原版两向本就不可逆）
- Signature：key 首 3 字节写 "TEA"、sprintf("%d%d%d", keyLength, mode,
  padding)、CSHA 摘要

### 比对水位（该子系统）
- CTEA ctor 38 vs 38 NEAR；CSHA ctor/Reset NEAR；AddData 105 vs 105；
  EncryptBlock 78 vs 86、DecryptBlock 78 vs 90（结构同构）

## 网络线程 / DB 入口（本批）

### CNetworkThread（dbmw 专用）
- ctor/dtor/attach/SetUDPQueue/dispatch 全部实现；attach 用 Get_QLock/Get_BLock
  （+0xf8/+0x110）
- dispatch 比 manager 简单：无 select/fcntl，直接 new CUdpRecvBuffer →
  RecvFromClient(0x1800)，失败回收；三道校验（buf+2!=size 0x6c、buf+2>0x17ff
  0x77、size>0x1800 0x83，均 "./log/recvErr"）；try/catch 重抛
  "Recv  Socket Exception Break!"；510 vs 513 指令
- CApplication 补 Get_QLock()/Get_BLock()

### CApplication::Load / InitDB / OpenDB
- Load 完整对齐：InitDB 失败 puts("DB Open Fail")+rethrow；CGuildManager(+0x288)
  → CNetworkThread(+0x9c) begin → "Application Network Thread Begin() Success!"；
  TCP 端口 0 时 puts("TCP Server Unused")+log(0x251)；WongWork::CGMAccounts
  (+0x28c)；IQueue 静态 Get；416 vs 420 指令
- InitDB：CDBManager::Init(1) → map<idx,名>（0..7 + 0xf/0x9/0xd 共 11 项）
  → 每项 QueryConnInfo + OpenDB
- OpenDB：GetDBConnInfo(idx) 固定格式串（host+0/port+0x14/user+0x18/pass+0x2d/
  db+0x42）；"unused"/"" 早退；CDBManager::Open(6 参) → "%s Open Success/Fail!"
- CAppConfig：+0x5c m_serverGroup、+0x60 m_dbConnInfo[0x11][0x168]；
  GetDBConnInfo = this+0x60+idx*0x168；GetServerGroup

### CDBHandle/CMySql 虚表重排（dbmw 版）
- dbmw 虚表 31 个虚函数（manager 26）：init/open5/open6/close/ping/set_query/
  exec/fetch/blob_to_str/get_str/get_binary/get_int(int&)/get_uint(uint&)/
  get_short(int&)/get_short(short&)/get_ushort(int&)/get_ushort(ushort&)/
  get_byte(int&)/get_byte(char&)/get_ubyte(int&)/get_ubyte(uchar&)/
  get_int(uint&)/get_int(ull&)/get_uint(ull&)/get_n_fields/get_n_rows/
  clear_result_set/getAffectedRowCount/escape_string/get_ulonglong
- CMySql 布局：+0x1c host[0x10]、+0x2c pass[0x14]、+0x40 db[0x14]、
  +0x54 user[0x1e]、+0x74 port、+0x78 query[0x6001]、+0x42084 queryLen、
  +0x42088 lastErrno
- open6 实现（strcpy 到内嵌串、mysql_real_connect(host,pass,db,user,port,0,0)、
  失败记 "./log/DBErr"+"Can't connect db : ( dbname : %s, ip : %s, id : %s )\n"）
- set_query 上限 0x5fff；blob_to_str 偏移 +0x6070+col*0x6001+0x9；
  新 getter（get_int(uint&/ull&) 转发、get_uint(ull&)→get_ulonglong、
  get_ulonglong=strtoull、getAffectedRowCount、escape_string、
  set_charset_name_option/set_reconnect_option=1）
- CDBManager::Open(6 参，返回 open 结果) NEAR 27 vs 27；Close NEAR 29 vs 29

### 待办（下批）
1. CAppConfig::Parse_Table（1314 条，DB 连接配置解析核心）
2. CMySql exec_query（155 条，含重连逻辑）/ init / open5 / exec 精修
3. CQueryCounter::WriteDBLog（182 vs 103，dbmw 版不同）
4. np_server_xml::CServerXml、CGuildManager 0x12c 代理数组展开、CUser
