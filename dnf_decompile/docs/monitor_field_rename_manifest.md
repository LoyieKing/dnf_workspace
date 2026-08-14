# monitor 偏移式字段名 → 语义名 还原清单（2026-08-13）

范围：`source/DNFServer/GameServer/Monitor/` 下 .h/.cpp。只改字段名，
不改类型/偏移/大小。证据源：function_reports Ghidra C（log 格式串）、
源码使用上下文、跨服务 canonical 名（共享头 / dbmw / guild）。

## 一、DNFPacketTranslater.h 报文结构

| 结构体 | 旧名 | 新名 | 依据 |
|---|---|---|---|
| Packet_Item_Limit_Edition_Load_Data_Req | m_fieldA/m_fieldB/m_fieldC | m_fullLoad / m_serverType / m_loadTargetNum | Ghidra log "FullLoad/ServerType/LoadTargetNum" |
| Packet_Item_Limit_Edition_Sell_end | m_fieldA/m_fieldB | m_serverType / m_sellEndNum | Ghidra log "ServerType/SellEndNum" |
| Packet_Item_Limit_Edition_Update | m_fieldA | m_serverGroup | processScheduledJob: Get_ServerGroup() |
| Packet_Monitor_Event_Start | m_fieldA/m_fieldB/m_fieldC | m_eventCode / m_eventParam1 / m_eventParam2 | Ghidra log "eventCode/eventParam1/eventParam2" |
| Packet_Monitor_Event_End | m_fieldA | m_eventCode | Ghidra log "eventCode" |
| Packet_Monitor_Take_Screen_Shot | m_fieldA/m_fieldB | m_channel / m_time | Ghidra log "channel/time" |
| Packet_DBMW_Query_Msg | m_fieldA/m_fieldB | m_queryId / m_handleIdx | dbmw QueryMsg: set_query(m_fieldA), m_handles[m_fieldE] |
| Packet_VillageAttackedEnd | m_fieldE/m_field12 | m_huntingPoint / m_maxHuntingPoint | SendVillageAttackedEnd = m_cur/m_maxHuntingPoint |
| Packet_VillageAttackedUpdate | m_fieldE/m_field12 | m_huntingPoint / m_maxHuntingPoint | 同 |
| Packet_VillageAttackedScore | m_field16/m_field1a | m_huntingPoint / m_maxHuntingPoint | 同 |
| Packet_VillageAttackedRewardServer | m_fieldA | m_rewardType | OnRewardVillageAttacked 置 0 |
| Packet_Monitor_SAVE_Member | m_fieldA | m_flag | SaveMemberOnConnect: =flag |
| Packet_Monitor_Member_Enter_Reply_ToResponser | m_fieldA/B/C/D/E | m_result / m_flag / m_flag2 / m_level / m_expLevel | SendNoticeMemberEnterPacketReply 参数语义 |
| Packet_Monitor_Notice_Member_Enter_Ok | m_fieldA/B/C/D/E | 同 | 同 |
| Packet_Monitor_Notice_Buddy_In_Out | m_field13/14/33 | m_flag1/m_flag2/m_flag3 | SendNoticeBuddyInOut flag1..3 |
| Packet_Server_Queue_Load_Statistic | m_fieldA/B/C | m_flag/m_param/m_value | canonical：Guild/DBMW 同名 |
| Packet_Monitor_UDP_HeartBeat | m_fieldA | m_channelIndex | OnHeartBeat 频道号 |
| Packet_MiniCraneSeed | m_fieldA | m_seed | SendMiniCraneRandomSeed |
| Packet_DB_Query_Member | m_fieldA | m_memberKey | QueryMember(key) |
| Packet_DB_Query_Member_Member | m_fieldA | m_memberKey | QueryMemberMember(key) |
| Packet_Send_Time_Sync | m_fieldA/m_fieldC | m_hour / m_min | ProcessTimeSync |
| Packet_MTG_OntimeEvent_RewardStart | m_fieldE/12/16 | m_remainSec / m_itemIndex / m_itemCount | SendContinueTimeToGS |
| BuddyList | m_field0/1/2 | m_channelNo / m_blackFlag / m_online | SendConnectedBuddysList |
| Packet_Monitor_Reply_Buddy_List | m_fieldA/m_fieldE | m_dbid / m_count | SendConnectedBuddysList: GetDBID/count |
| Packet_DB_InsertMail | m_fieldA/B/C/D/m_field12f + m_title/m_body | m_characNo / m_fieldE / m_field12 / m_field16 / m_delayHours + m_subject/m_content | dbmw Packet_DBMW_Insert_Mail 对齐 |
| Packet_Request_IPCounterList | m_fieldA/m_fieldB | m_type / m_param | SendDBMWRequestIPCounter(flag,b) |
| Packet_DBMW_Statistic_Login_Logout | m_fieldA/608/60c/610/614 | m_channelNo / m_occCount0 / m_occCount4 / m_loginCount / m_logoutCount | CLoginLogoutStatistics 源码语义 |
| Packet_Punish_Cancel | m_fieldE/m_field10 | m_type / m_param | OnMonitorPunishCancel 透传 |
| Packet_Set_CleanPad_Point | m_fieldE | m_point | OnSetCleanPadPoint 透传 |
| Packet_Monitor_Other_Channel_Chat_ToUser (+Hyper_Link) | m_fieldE | m_serverId | canonical：共享头 server_id |
| Packet_Change_User_Handicap | m_fieldA | m_charNo | OnWebChangeUserHandicap 透传 |

## 二、类成员字段

| 头文件 | 旧名 | 新名 | 依据 |
|---|---|---|---|
| SystemTimeHandler.h CommonTime | m_field0..5 | m_year/m_month/m_day/m_hour/m_minute/m_wday | SetCurTime |
| SystemTimeHandler.h CSystemTime | m_field4/m_field16 | m_msec / m_sec | ctor: tv_usec/1000, tv_sec |
| DNFTickHandler.h CFrameCountHandler | m_field0/4/8/c/10/14/18/24/25/26/28 | m_inited/m_frameCount/m_interval/m_prevTick/m_curTick/m_frameCounter/m_fps/m_state/m_secCounter/m_minCounter/m_logCounter | GetFrameCountInfo/SaveProcess 语义 |
| DNFMember.h ST_MemberProxy | m_field0/m_field23 | m_charNo / m_exp | OnCallMemberList Ghidra + 源码 |
| DNFMember.h ST_MemberInfo | m_field0/1/20/21/22/26 | m_channelNo/m_flag/m_blackFlag/m_level/m_exp/m_expNext | OnCallMemberList Ghidra |
| DNFBuddyHandle.h | m_field1c | m_buddyDBFlag | GetBuddyDBFlag/SetBuddyDBFlag |
| IPCounter.h | m_field10/m_field11 | m_loadFlag / m_loadParam | setOption/Proc |
| DNFUser.h | m_field1a/m_field68 | m_memberEnterCount / m_blackListDBFlag | RecordCallMemberEnter / SetBlackListDBFlag |
| BlackUser.h STBlackUserDBType | m_field24 | m_occurTime | GetBlackList: =GetOccurTime |
| LoginLogoutStatistics.h | m_fieldac/b0/b4/b8 + stLoginLogout.m_field0 | m_occCount0/m_occCount4/m_loginCount/m_logoutCount + m_count | CountNumOf* 源码 |
| DNFPacketDecoder.h | m_field0/m_field4 | m_udpParseQ / m_udpQLock | Attach: Get_UdpPacketParseQ/Get_UdpQLock |
| DNFApplication.h CApplication | m_field2cc/31c/330/334/388 | m_gmAccounts/m_eventActionMgr/m_loginLogoutStats/m_accusationMgr/m_collectItms | Init: new 类型 |
| VillageAttackedManager.h | m_field1c/20/28/2c/30/34 | m_curHuntingPoint/m_maxHuntingPoint/m_endTime/m_startTime/m_rewardType/m_rewardCloseTime | OnSchedule/SetRewardCloseTime 语义 |
| VillageAttackedManager.h stHuntingPoint | m_field4 | m_bonusPoint | SendVillageAttackedScore: max=hp+bonus |
| MemoryCashManager.h | m_field44/48/4c | m_buddyCashHitCnt/m_memberCashHitCnt/m_blackListCashHitCnt | inc*CashHitCnt |
| GMAccounts.h stGMInfo_t | m_field4 | m_level | AppendGM_Sys: =level |
| LimitNpcBuyItem.h | m_fieldE | m_remainCount | maxCount-sellCount |
| DNFManagerServer.h CACHE_CHARACTER_TYPE | m_field8 | m_time | CacheCharacter: time(0) |
| DNFServerHandler.h | m_field24/50/64 | m_managerHeartbeatCnt/m_dbHeartbeatCnt/m_managerTcpHeartbeatCnt | Process 心跳节流 |
| DNFAppConfig.h stServerInfo | m_field1/m_field2 | m_group / m_type | RegistGameServer / Load 类型判断 |

## 三、有意保留原名（附注释）

- CollectItms（DNFApplication.h）：onCollectItems 视为
  MonitorCollectItemsState{m_total,m_current,m_time}，onCollectItemsResult 视为
  STCollectItemsData{m_uniqCharNo,m_money,m_etc,m_end}，双重视图语义冲突。
- Packet_CollectItemsUpdate/Result：monitor↔游戏服双向复用，字段语义随方向不同。
- Packet_SecuService_Connect_Web m_fieldE/F：整包透传 0x15。
- Packet_Change_User_Handicap m_fieldE/m_field12：透传。
- Packet_Notice_Find_Factory_Hub_User m_field2e/m_field30：透传；且 Ghidra 读
  +0x2d/+0x2f 而结构体注释 +46/+48 存在 1 字节偏差，建议父 agent 复核。
- Packet_DB_InsertMail m_fieldE/12/16：与 dbmw 端同名（InsertPostal 参数 hE/h12/h16）。
- BlackUser CBlackUser m_field1e/m_field24、DNFAppConfig stServerInfo.m_field0、
  DNFServerConfig ST_ServerInfo m_field0/1/2/8、CashObject m_field98、
  Peer m_field9783c、ServerXml m_field0[8]、DNFManagerServer CACHE_CHARACTER_TYPE
  m_field0/m_field4、DNFUser m_field18、DNFTickHandler m_field1c/m_field20、
  OnTimeEventManager m_field40、DNFApplication m_field90：无 Ghidra/使用证据。

## 三.1、2026-08-14 语义对齐（对照 ORIG 反汇编）

| 位置 | 改动 | 依据 |
|---|---|---|
| `OnCheckOverlappedAccusation` | 连接号走 `PacketHeader::m_connNo`（+0x6）；`m_name1`/`m_name2`/`m_type`/`m_result` | ORIG `mov 0x6(%eax)`；旧二进制读 +0xa 是错的 |
| `IncConnLowerMemberExp(int,...)` | 先 `count<=index` 打 0x284，再 `charNo` 不匹配打 0x28c | ORIG 两段独立日志 |
| `InsertMember` | `r.second == 0` 才打 Already Exist | ORIG `test %al; jne` 跳过日志 |
| `CCacheCharacterTime::m_charNo` | `int` → `unsigned int` | `map<unsigned int,...>::find` |
| `CollectGarbage` | 队列为空先返回 | ORIG 顶部 `empty` + 早退 |
| `SetCurTime` | `tm_year - 0x64`、`tm_mon + 1` | ORIG `sub $0x64` / `add $0x1` |

scratch：`IncConnLowerMemberExp` IDENTICAL_AE；其余仍 DIFF（`lea`/`je` 极性/EH）。
官方 md 未重刷。

## 四、验证

- monitor_scratch.sh 全量重编 24 个改动 TU + 链接通过。
- gen_function_md.py --check-only 抽查与基线一致。
- gen_report_manifest.py monitor：IDENTICAL 1074 / IDENTICAL_AE 421 /
  NEAR 14 / DIFF 170 → 184 non-identical，与基线相同，零回归。
- 未改共享头、其它服务、build/、function_reports/（仅 manifest 重生成）。
