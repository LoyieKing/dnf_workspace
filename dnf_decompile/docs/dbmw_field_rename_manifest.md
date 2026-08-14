# DBMW 字段语义化重命名清单（2026-08-13）

范围：`source/DNFServer/GameServer/DBMW/` 下 DNFPacket.h 及各 .cpp/.h 使用点。
只改名字，不改类型/偏移/大小；scratch 构建二进制与权威 build/dbmw 逐字节一致（`cmp` 通过）。
依据优先级：function_reports/dbmw 的 Ghidra 反编译 C（SQL 列名/调用语义）＞ 本服务 .cpp 使用上下文 ＞ 跨服务 canonical 名（guild 侧 PacketCounter.h/PTL）。

2026-08-14：`CTcpNetworkThread::dispatch` 控制流对齐 ORIG——`m_net==0` 为
`continue`；`errno==4` 继续；`errno!=0` 直接 `return`（不打 Terminate）；
发送长度按无符号和 `0x1800` 比。官方 md 未重刷。

## DNFPacket.h 结构体/类字段重命名

| 结构体/类 | 旧名 | 新名 | 依据 |
|---|---|---|---|
| STGuildJoinInfo | m_fieldC | m_mid | OnGuildJoinByListApprove Ghidra `*(uint*)(param_5+0xc)=param_3`（m_id 参数） |
| STTodayGuildMember | m_field0 / m_field22 / m_field23 / m_field24 / m_field25 / m_field26 | m_characNo / m_grade / m_job / m_growType / m_sex / m_lev | QueryTodayGuildMember SQL `charac_no,charac_name,grade,job,grow_type,sex,lev` |
| Packet_DBMW_Statistic_Login_Logout | m_field608/60c/610/614 | m_numOccupationsCharscreen / m_numOccupationsSeriaroom / m_numLoginPerMin / m_numLogoutPerMin | OnStatisticNumOfOccupations SQL 列名 |
| Packet_DBMW_Collect_Items_Update | m_fieldA / m_field13 | m_totalCount / m_flag | onCollectItemsUpdate（新总数=当前+diff；flag 强制回报） |
| Packet_DBMW_Collect_Items_Gm | m_fieldB / m_fieldF / m_field13 | m_totalCount / m_curCount / m_fullTime | updateCollectItemsGm SQL `total_count,cur_count,full_time` |
| Packet_DBMW_Request_Guild_Join | m_id / m_field13 | m_accId / m_mid | → STGuildJoinInfo.m_id(+8)/m_mid(+0xc)；GuildJoin SQL `m_id=%s` |
| Packet_DBMW_Request_Change_Unconnected_GuildMember_Grade | m_fieldF / m_field13 / m_field32 | m_characNo / m_flag / m_newGrade | OnChangeUnconnectedGuildMemberGrade 原始偏移读取语义 |
| Packet_DBMW_Request_BlackList_Login | m_fieldE | m_serverType | 0xc9→monitor / 0xcb→guild 路由 |
| Packet_DB_Load_Request_Guild_Board_Write | m_field13 | m_characNo | OnWriteGuildBoard SQL `charac_no=%u` |
| Packet_DB_Load_Request_Web_Guild_Board_Write | m_guildId / m_fieldE | m_guildKey / m_charNo | guild 侧 PacketCounter.h canonical |
| Packet_DB_Load_Request_Guild_Board_Delete | m_fieldB / m_fieldF / m_field13 | m_boardNo / m_guildId / m_charNo | OnDeleteGuildBoard `where no=%u`；handler 日志；guild sender |
| Packet_DB_Create/Delete/Upgrade_Guild_Agit | m_fieldE | m_characNo | guild 侧 PTL_GuildAgitPkt.m_charNo |
| Packet_DBMW_Save_Member | m_fieldB / m_fieldF / m_field13 | m_masterNo / m_characNo / m_flag | SaveMemberInsert/Delete 参数序（master_no / charac_no / 1|2） |
| Packet_TowerOfDespair_Statistic_STD::Entry | m_fieldE / m_field12 | m_success / m_enter | DBManager TowerOfDespairEntry；SQL enter/success |
| Packet_DBMW_Request_IPCounter_List | m_fieldB | m_fullListFlag | OnRequestIPCounterList `local_38[0xb]` 门控 D_IP 列表 |
| Packet_Result_OnTimeEvent_Idx | m_fieldA / m_fieldE | m_maxNo / m_result | SQL `ifnull(max(no),1)`；QueryOnTimeEventIdx 返回值 |
| Packet_Frame_Lag_Statistic_Reload_Spec | m_fieldA / m_fieldB | m_loadSeq / m_lastModifyTime | statics m_field18/19 序号；SQL `unix_timestamp(modify_time)>%d` |
| Packet_Frame_Lag_Collect_Interval_Check | m_fieldA | m_intervalSec | SQL collect_interval.value |
| Packet_Frame_Lag_Statistic_Result_Reload_Spec / Result_Load_Spec / Load_Spec | m_fieldA | m_loadSeq | 请求序号回显 |
| Packet_CollectItemsResult | m_fieldA / m_fieldE / m_field12 | m_totalCount / m_curCount / m_changeFlag | selectCollectItems out2/out1/out3（cur_count/total_count/change_flag） |
| Packet_DBMW_Add_Buddy_Reply | m_fieldA / m_field35 | m_mid / m_result | OnAddBuddy；AddBuddy out result |
| Packet_DBMW_Del_Buddy_Reply | m_fieldA / m_fieldE | m_mid / m_characNo | OnDelBuddy |
| Packet_DB_Reply_Guild_Secede | m_fieldA / m_fieldE / m_field12 / m_field16 / m_field1A / m_field1B / m_field3D | m_guildId / m_characNo / m_secedeCharacNo / m_result / m_grade / m_secedeType / m_mid | OnGuildSecede + GuildSecede out 参数（charac_no/m_id/result） |
| Packet_Response_IPCounterList / D | m_fieldA / m_fieldB | m_batchFlag / m_count | OnRequestIPCounterList 0=首 1=中间 2=末 |
| Packet_DBMW_Reply_Guild_Create | m_fieldA / m_fieldE / m_field12 | m_characNo / m_guildId / m_result | OnRequestGuildCreate + QueryGuildCreate out |
| Packet_Reply_Today_Guild_Member | m_fieldA | m_guildId | QueryTodayGuildMember |
| Packet_Result_Ontime_Event_Item | m_fieldA / m_fieldE / m_field12 | m_idx / m_cnt / m_result | SQL `idx,cnt`；无数据=2 |
| Packet_DB_Create/Delete/Upgrade_Guild_Agit_Reply | m_fieldA / m_fieldE / m_field12 | m_guildId / m_characNo / m_result | handler 回显 + OnCreateGuildAgit result |
| Packet_DBMW_Query_Buddy_Info_Reply | m_fieldA / m_fieldE | m_characNo / m_count | OnQueryBuddyInfo |
| Packet_DB_Reply_Guild_Master_Delegate | m_fieldA / m_fieldE / m_field12 | m_guildId / m_oldMasterNo / m_newMasterNo | OnGuildMasterDelegate + QueryGuildMemberGradeByName out m_id |
| Packet_DB_Response_Approve_Join_Guild | m_fieldA / m_fieldE / m_field12 / m_field16 | m_result / m_guildId / m_id / m_characNo | OnRequestApproveJoinGuild |
| Packet_Result_Loading_Periodic_Message | m_field20A / m_field20E | m_startHour / m_endHour | SQL `start_h,end_h` |
| Packet_DB_Load_Reply_Guild_Board_Delete | m_fieldA / m_fieldC / m_field10 / m_field14 | m_result / m_guildId / m_charNo / m_boardNo | handler 回显 |
| Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade | m_fieldA / m_fieldE / m_pad / m_field30 / m_field31 / m_field32 | m_guildId / m_characNo / m_name / m_result / m_grade / m_newGrade | OnChangeUnconnectedGuildMemberGrade |
| Packet_Server_Queue_Load_Statistic | m_fieldA / m_fieldB / m_fieldC | m_serverType / m_kind / m_qCnt | SaveServerQueueLoadStatistic SQL `server_type,kind,q_cnt` |
| Packet_DB_Query_Reply_On_Guild_Booting | m_fieldA / m_fieldE / m_field12 | m_aSidePoint / m_bSidePoint / m_winnerSide | SQL `a_side_point,b_side_point,winner_side`；日志 |
| Packet_DBMW_Reply_Guild_Mail | m_fieldA / m_fieldE / m_field12 | m_senderCharacNo / m_guildId / m_result | OnSendGuildLetter |
| Packet_DBMW_Save_Guild_Join_Reply | m_fieldA / m_fieldE / m_field12 / m_field16 | m_guildId / m_mid / m_characNo / m_result | OnGuildJoin + GuildJoin out result |
| Packet_Reply_Load_Tower_Full_Rank | m_fieldA / m_fieldB | m_batchFlag / m_count | onQueryTowerFullRank |
| Packet_Set_ARS_Info | m_fieldA / m_fieldE | m_count / m_statsType | OnRequestARSInfo（Cnt / Stats 日志） |
| Packet_Result_Ontime_Event_Idx_Update | m_fieldA | m_no | 回显请求 no |
| STGuildRankInfo | m_field0 / m_field4 / m_field8 | m_guildId / m_guildPoint / m_rank | QueryGuildPointList SQL + rank() |
| STGuildWarRankInfo | m_field0 / m_field4 / m_field8 / m_field24 | m_guildId / m_guildWarPoint / m_rank / m_guildPointPrev | QueryGuildWarPointList SQL + rankGuildWar() |
| STGuildSkill | m_field0 / m_field4 | m_skillId / m_skillLevel | ctor 默认 -1/-1 = 空槽 |
| STGuildMemberProxy | m_field22/23/24/26/27/28 / m_data2c | m_job / m_growType / m_lev / m_sex / m_grade / m_lastPlayTime / m_memo | QueryGuildMemberProxy / AllMembersProxy SQL |
| STGuildMemberCharacData | m_field0 | m_job | OnWriteGuildBoard job 写入 |
| STBlackUserDBType | m_field0 / m_pad4 / m_field24 | m_characNo / m_name / m_occTime | QueryBlackList SQL |
| STGuildBoardDBInfo | m_field78 / m_field7c / m_field80 | m_createTime / m_no / m_characNo | SQL `no, unix_timestamp(create_time), charac_no` |
| STGuildMemerDBInfo | m_pad / m_field15 / m_field16 | m_memo / m_grade / m_memberPoint | QueryGuildMember/SaveGuildMember SQL |
| st_ip_counter_list | m_field0 / m_field2 / m_field10 | m_hackType / m_hackSubType / m_cnt | QueryIPCounter SQL |
| st_full_ip_counter_list | m_field0 / m_field2 / m_field14 | m_hackType / m_hackSubType / m_cnt | QueryIPCounter SQL |
| st_ars_info_list | m_field0/2/4/6/8/9/A | m_hackType / m_cnt / m_etc / m_hackSubType / m_hackSubCnt / m_applyFlag / m_ipCnt | QueryLoadARSInfo SQL 列名 |
| STGuildDBInfoOnly | m_field2D / m_pad2E / m_field42 / m_field44 | m_subMasterCnt / m_subMasterData / m_guildSkillPoint / m_skillLearnCnt | guild 侧 DNFGuild.h canonical + SQL remain_sp/skill_slot |
| Packet_DBMW_Save_Guild_Member | m_fieldF / m_field2D | m_flag / m_type | SaveGuildMember(flag, type) |
| Packet_DBMW_Insert_Mail | m_fieldE / m_field12 / m_field16 | m_itemId / m_addInfo / m_extra | InsertPostal(item_id, add_info)；第 7 参 ORIG 未用 |
| LimitNpcBuyItemUpdate | m_fieldA / m_field12 | m_itemIndex / m_sellCountInc | SQL `where item_index=%u / sell_count=sell_count+%u` |
| Packet_DB_Call_Unconn_Guild_Member / All_Members | m_fieldA / m_fieldE | m_guildId / m_characNo | QueryGuildMemberProxy / AllMembersProxy |
| Packet_Monitor_Notify_New_Mail | m_fieldA | m_characNo | OnDBMWInsertMail / OnPcRoomPlayTimeReward 填入 charac_no |
| Packet_Notice_Guild_Mail_Arrived | m_fieldA | m_flag | 置 1 通知 |
| ST_MemberProxy | m_field23 | m_exp | QueryMember SQL exp |
| Packet_DB_Reply_Query_Member | m_fieldB / m_fieldF / m_field13 | m_characNo / m_maxCreateTime / m_maxDeleteTime | OnQueryMember 回显；SQL create_time/delete_time 最大值 |
| Packet_DB_Reply_Unconn_Guild_Member / All_Members | m_fieldA / m_fieldE | m_guildId / m_characNo | handler 回显 + guild PTL canonical |
| Packet_DB_Reply_Query_Guild | m_fieldA / m_fieldB / m_fieldF | m_result / m_guildId / m_characNo | guild PTL_ReplyQueryGuildPkt（m_success/m_guildKey/m_charNo） |
| Packet_Guild_Load_Guild_Agit / Cargo / Cargo_History | m_fieldA（/m_fieldE） | m_guildId（/m_count） | handler + OnLoadGuildCargoHistory |
| Packet_DBMW_Reponse_BlackList | m_fieldA | m_mid | OnRequestBlackListOnLogin |
| Packet_DB_Reply_Query_Guild_Member | m_fieldB / m_fieldF | m_guildId / m_characNo | SQL guild_id + guild PTL m_charNo |
| Packet_DB_Load_Reply_Guild_Board_Open | m_fieldA / m_fieldC / m_fieldD / m_field11 / m_field15 | m_result / m_count / m_guildId / m_charNo / m_boardCount | Ghidra local_d52/d50/d4f/d4b/d47 |
| Packet_DB_Load_Reply_Guild_Board_Write / Web | m_fieldA / m_fieldC / m_field10 | m_result / m_guildId / m_charNo | handler 回显 |
| STPartyMemberStat / Job / Charac | m_fieldE..m_field46 系列 | m_channelNo / m_dungeonIndex / m_dungeonDiff / m_dungeonStandardLevel / m_abuseParty / m_balkunParty / m_success / m_partyUserCount / m_characJob / m_characGrow / m_clearTime / m_dieCount / m_hpConsume / m_mpConsume / m_hitCount / m_hitPerAvgDamage / m_hpRecovery / m_mpRecovery / m_updateCount / m_level / m_fatigueConsume / m_expAdd / m_expAvg / m_jobCount / m_rank | QueryParty*StatisticCreate 的 log_dungeon_party/_job/_charac SQL 列序 |
| Packet_Item_Limit_Edition_Load_Data_Req / Rpy | m_fieldA / m_fieldB / m_fieldF | m_flag / m_serverId / m_ipgNoCount（Rpy: m_flag / m_count） | onItemLimitEditionLoadData SQL `server_id` + ipg_no 列表 |
| Packet_DBMW_Query_Guild_Member | m_guildId | m_characNo | QueryGuildMember SQL `where charac_no=%d`（原命名错误，验证发现） |
| Packet_DBMW_Save_Guild | m_fieldCC | m_saveType | 0=SaveGuildInfo 1=SaveGuildSkill |

## 验证发现（偏移反查源码）

1. **Packet_DBMW_Query_Guild_Member +0xb 实为 charac_no**，原源码命名 m_guildId 是错的；guild 侧
   OnDBReplyQueryGuildMember 用 reply +0xf 做 FindUser_CharNo 也印证（+0xf=characNo 回显）。
2. **QueryLoadARSInfo 列序疑似错位**：SQL 列序为 hack_type,cnt,etc,hack_sub_type,hack_sub_cnt,apply_flag,ip_cnt，
   但代码把 col2 读入 ip_cnt、col3 读入 etc、col4 读入 hack_sub_type（偏移 +2 错位）。重命名后该错位更明显，待 ORIG 反汇编核对。
3. **LimitNpcBuyItemUpdate 头注释原来写反**（m_fieldA 注释为 sell_count、m_field12 为 item_index），按 SQL 修正为
   m_itemIndex(+0xa) / m_sellCountInc(+0x12)。
4. STGuildWarRankInfo.m_field8 原注释“guild_point_prev”错误：rankGuildWar() 与日志确认它是 rank，guild_point_prev 在 +0x24。

## 有意保留的 m_fieldX（无足够 log 证据，已加注释）

DnfItemInfo（物品栏结构）、ReservedCapacity、NpcBuyLimitItem、STGuildAgitDBInfo、RandomOption、
STGuildMemberCharacData.m_field1/2、STGuildDBInfoOnly.m_field1E/m_fieldB9、LimitNpcBuyItemUpdate.m_fieldE/m_field16、
Packet_DBMW_Send_Guild_Letter.m_fieldA、Packet_Monitor_UDP_HeartBeat.m_fieldA、STPartyCharacMemberStat.m_field11（重叠读）。
