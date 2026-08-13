# statics 字段语义名还原清单（2026-08-13）

## 范围与原则

- 只改**名字**，类型/偏移/大小全部保持不变；改后 clean rebuild + 权威 manifest 复验：
  statics non-identical = **42**（与改前一致，无回归），md 已重生成。
- 字段名依据优先级：① DBMW/statics 的 Ghidra 反汇编（ORIG 逐槽位读偏移）；
  ② SQL 列名（DBMW/statics 内嵌的 set_query 字符串）；③ 源码使用上下文/日志。
- 涉及文件（20 个，全部在 `source/DNFServer/GameServer/Statics/`）：
  GMAccounts.h/.cpp、Statistics.h/.cpp、CubeStatistics.h/.cpp、UdpCharacteristic.h/.cpp、
  HWSpecResearcher.h/.cpp、ErrorValue.cpp、DNFDBServer.h/.cpp、DNFPacketTranslater.h/.cpp、
  DNFServerConfig.h/.cpp、DNFServerHandler.cpp、FrameLagCollector.h/.cpp、
  `source/toolchain/statics_rename_fields.py`（一次性机械重命名脚本，已保留可复跑）。

## 结构体 → 字段旧名 → 新名 → 依据

### 通用 key/value（GMAccounts.h）

| 结构体 | 字段 | 依据 |
|---|---|---|
| STCubeStatisticKey | m_field0/4/8/c → m_channel/m_index/m_level/m_type | printStatisticData 日志 "channel %d, index %d, level %d, type %d"；DBMW CubeStatisticView |
| STPartyStatisticKey | m_field0→m_channelNo；m_field4→m_dungeonIndex；m_field8→m_dungeonDiff；m_field9→m_dungeonStandardLevel；m_fielda→m_abuseParty；m_fieldb→m_balkunParty；m_fieldc→m_success；m_fieldd→m_partyUserCount | ORIG DBMW QueryPartyStatisticCreate 读偏移 + `log_dungeon_party` 列序 |
| STPartyJobStatisticKey | 同上 + m_field10→m_characJob；m_field14→m_characGrow | ORIG QueryPartyJobStatisticCreate + `log_dungeon_party_job` |
| STPartyCharacKey | m_field0→m_channelNo；m_field4→m_dungeonIndex；m_field8→m_dungeonDiff；m_field9→m_dungeonStandardLevel；m_fielda→m_success；m_fieldc→m_characJob；m_field10→m_characGrow；m_field11→m_partyUserCount | ORIG QueryPartyCharacStatisticCreate + `log_dungeon_charac` |
| STDeathTowerValueStatisticKey | m_field0→m_type；m_field2→m_level；m_field4→m_counterIdx | ORIG QueryDeathTowerValueStatisticCreate（+0x11 作计数器下标）+ `log_deathtower_value` |
| STDeathTowerPlayDataJobStatisticKey | m_field0→m_deathTowerType；m_field2→m_level；m_field4→m_characJob；m_field8→m_characGrow | 源码日志 "deathTower_type/level/job_/grow_type_" + `log_deathtower_playdata_job` |
| STDeathTowerPlayDataPartyStatisticKey | m_field0→m_deathTowerType；m_field1→m_partyCount | `log_deathtower_playdata_party` |
| STPacketOverflowKey | m_field0→m_packetType；m_field2→m_packetKind | DBMW PacketOverflowView + `packet_overflow` SQL |
| STAssertManagerKey | m_str0→m_fileName；m_field100→m_fileLine；m_str2→m_reason | DBMW `assert_manager (file_name, file_line, reason, cnt)` |
| STUserTingTimeCheckKey | m_field0→m_minute | `user_ting_timecheck (occ_time, minute, cnt)`；源码 秒/0x3c |
| STHellPartyStatisticItemKey | m_field0→m_hellpartyType；m_field4→m_dungeonIndex；m_field8→m_dungeonDiff；m_field9→m_partyCount；m_fielda→m_hellpartyDiff | ORIG QueryHellPartyStatisticItemCreate + `log_hellparty_value` |
| STPowerwarFightLoadingKey | m_field0→m_mId；m_field4→m_round | `powerwar_loading (m_id,occ_time,round,...)` |
| STPowerwarFightLoadingData | m_field0→m_player；m_field2→m_myLoading；m_field4→m_otherLoading；m_field6→m_vsLoading | 同上 |
| STPowerwarFightLagKey | m_field0→m_mId；m_field4→m_round | `powerwar_lag (m_id,occ_time,round,...)` |
| STPowerwarFightLagData | m_field0→m_player；m_field4→m_lagAvg；m_field8→m_lagCnt | 同上 |
| STFatigueBattery | m_field0→m_money；m_field4→m_buff | DBMW `log_fatigue_battery (server_id, money, buff)` |
| stP2PStatistics | m_field0→m_p2pUser；m_field4→m_relayUser；m_field8→m_serverGroup；m_fieldA→m_p2pMinPing；m_fieldC→m_p2pMaxPing；m_fieldE→m_p2pAvgPing；m_field10→m_p2pPingSum；m_field14→m_p2pPingCnt；m_field18→m_p2pOverPing100；m_field1c→m_p2pOverPing200；m_field20→m_p2pOverPing300；m_field24→m_p2pOverPing400；m_fieldB→m_relayMinPing；m_field2a→m_relayMaxPing；m_field2c→m_relayAvgPing；m_field30→m_relayPingSum；m_field34→m_relayPingCnt；m_field38→m_relayOverPing100；m_field3c→m_relayOverPing200；m_field40→m_relayOverPing300；m_field44→m_relayOverPing400 | DBMW `p2p_statistics` 列序 + AddP2PStatistic/SendDBP2PStatistic 对应（minPing/maxPing/avgPing） |
| GoldCardEventStatistic | m_field0→m_level；m_field1→m_createCnt；m_field5→m_openCnt | DBMW `log_goldcard_event (level, create_cnt, open_cnt)` |
| TowerOfDespairStatistic_Value | m_field0→m_success；m_field4→m_enter | DBMW TowerOfDespairEntry + `log_tower_despair_layer_stat (layer, enter, success)` |
| STReasonCrashDownKey | m_field0→m_occTime；m_field4→m_channelNo；m_field8→m_reason；m_fieldc→m_cnt | `log_client_ting_stat (occ_time, channel_no, reason, cnt)` |
| STBloodDungeonStatistic | m_field0→m_tryCount；m_field4→m_clearCount | `log_blood_dungeon (level, try_count, clear_count)` |
| stGMInfo_t | m_field0→m_id；m_field1→m_flag | isGM/AppendGM_Sys/LoadGmList 使用 |

### wire 布局（GMAccounts.h / Statistics.h / CubeStatistics.h）

| 结构体 | 字段映射 | 依据 |
|---|---|---|
| STPartyStatisticWire | 同 STPartyStatisticKey 前 8 字段 | ORIG DBMW + `log_dungeon_party` |
| STPartyJobWireItem | 同 STPartyJobStatisticKey 全字段 | ORIG DBMW + `log_dungeon_party_job` |
| STPartyCharacWireItem | 同 STPartyCharacKey 全字段 | ORIG DBMW + `log_dungeon_charac` |
| STDeathTowerValueWireItem | m_field0/2/4→m_type/m_level/m_counterIdx | `log_deathtower_value` |
| STDeathTowerPlayDataJobWireItem | m_field0→m_deathTowerType；m_field2→m_level；m_field4→m_characJob；m_field8→m_characGrow；m_avg→m_avgClearCount；m_count→m_playCount | `log_deathtower_playdata_job` |
| STDeathTowerPlayDataPartyWireItem | m_field0→m_deathTowerType；m_field1→m_partyCount；m_value→m_avgClearCount | `log_deathtower_playdata_party` |
| STAssertManagerWriteItem | m_str0→m_fileName；m_field100→m_fileLine；m_str2→m_reason | `assert_manager` |
| STUserTingTimeCheckWriteItem | m_field0→m_minute；m_field4→m_cnt | `user_ting_timecheck` |
| Packet_DBMW_Packet_Overflow_Statistic::m_typed | m_field0→m_packetType；m_field2→m_packetKind；m_field4→m_cnt | `packet_overflow` |
| Packet_Server_Match_data_DBMW | m_fieldA→m_serverId；m_fieldB→m_winCount；m_fieldC→m_loseCount | DBMW `pvp_score (server_id, win_count, lose_count)` |
| FatigueBatteryItem | m_field0→m_money；m_field4→m_buff | `log_fatigue_battery` |
| TingItem | m_field0→m_id；m_field4→m_minute | `ting_user_account (m_id, minute)` |
| STHellPartyStatisticItemWire（Statistics.h） | 同 STHellPartyStatisticItemKey | `log_hellparty_value` |
| CubeStatisticItem | m_field0→m_channel；m_field8→m_level；m_field4→m_itemIndex；m_value→m_itemCount；m_fieldc→m_type | DBMW CubeStatisticView |

### 其他类/结构

| 位置 | 字段映射 | 依据 |
|---|---|---|
| UdpCharacteristic | m_field0→m_intervalTick；m_field4→m_successPartyTry；m_field8→m_totalPartyTry；m_fieldc→m_dungeonBadPing；m_field10→m_dungeonTotal；m_field14→m_pvpBadPing；m_field18→m_pvpTotal；m_field1c→m_fairPvpBadPing；m_field20→m_fairPvpTotal；m_field24→m_successDungeonClear；m_field28→m_totalDungeonClear | DBMW `p2pnetwork_statistic` 列序 |
| Packet_Udp_Characteristic | m_fieldA→m_serverGroup | 同上（server_group） |
| HWSpec | m_field0→m_category1；m_field4→m_category2；m_field8→m_category3 | DBMW `log_hardware_ting (category1..3, total)` |
| ErrorValue / STErrorStatic | m_field0→m_errorLine；m_field4→m_errorCode | 调用方 WriteErrorLineStatics(m_errorLine, m_errorCode) + `log_packet_dispatcher_error_line` |
| STSpecCount | m_field0→m_total | HWspecView（m_total + category） |
| STErrorCount | m_field0→m_errorCode；m_field4→m_errorLine；m_field6→m_cnt | SendDBMWErrorLine 写序 |
| CHWSpecResearcher | m_field48→m_specSaveTick；m_field68→m_errorSaveTick | DBSaveProcess 保存计数 |
| ST_ServerInfo | m_field0→m_serverType；m_field1→m_id；m_field2→m_serverIndex | CServerHandler::Load（1/2/4 分支 + Init id + 索引 0xff 无效） |
| Packet_GameServer2Statisctics2DBServer | m_fieldA→m_serverGroup；m_fieldB→m_connectedType；m_fieldC→m_requiredTime；m_fieldD→m_checkTime；m_restE→m_nationCode；m_restF→m_peerAddress | DBMW `p2p_connect_success_rate` |
| MonitoringSpecCase | m_field4→m_cpuVendor；m_field5→m_cpuProcessorNum；m_field8→m_aboveCpuClock；m_fieldc→m_belowCpuClock；m_field10→m_ram；m_field14→m_videocardVendor；m_field18→m_videocardDevice；m_field1c→m_videocardTextureMem；m_field1e→m_osVersion | DBMW `monitoring_spec` 列序 + QueryReloadSpecDb |
| StatisticManager::m_field110 | → m_tingUser | `ting_user_account (m_id, minute)` |

## 保留未改（无证据）

- FrameLagCollector 内部状态字段（m_field0/4/8/c/10/14/18/19/4c/50/6c/8c/90/94/9c/1e4 等）；
- ST_KillUSRConfig m_field0..3；Statistics.h m_flag/m_field34；stP2PStatistics m_field2e；
- 本地 Wire 视图字段（UdpPingPacketView、LagWire、FrameLagSpecView 等）与共享头 Packet_P2P_Statistics / Packet_Server_Match_data。

## 验证

- `cmake --build build/statics --clean-first`：通过。
- `gen_report_manifest.py --services statics`：IDENTICAL 576 / IDENTICAL_AE 225 / DIFF 41 / NEAR 1 → **42 non-identical（与改前一致）**。
- `gen_function_md.py --services statics`：42 个 md 全部重生成。
