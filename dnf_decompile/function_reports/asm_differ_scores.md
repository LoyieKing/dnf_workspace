# asm-differ similarity scores

Similarity = 100% * (1 - current_score / max_score)。current_score 是 asm-differ 的 penalty 分数，越低越接近；C2 构造函数是 C1 的别名，若 objdump 不单独导出 C2，则用对应 C1 打分并标注 alias。

| service | function | similarity | current_score | max_score | note |
|---|---|---|---:|---:|---|
| auction | `_ZN3nsl9TCPThread4loopEPv` | 99.21% | 310 | 39000 |  |
| point | `_ZN3nsl9TCPThread4loopEPv` | 99.21% | 310 | 39000 |  |
| dbmw | `_ZL16allocStackBufferjPPhPi` | 99.50% | 82 | 16400 |  |
| dbmw | `_ZN10CDBManager15OnLoadGuildAgitEP25Packet_DB_Load_Guild_AgitR28Packet_Guild_Load_Guild_Agit` | 98.63% | 134 | 9800 |  |
| dbmw | `_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack` | 98.94% | 92 | 8700 |  |
| dbmw | `_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward` | 97.63% | 168 | 7100 |  |
| dbmw | `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` | 99.97% | 5 | 19100 |  |
| dbmw | `_ZN14CNetworkThread8dispatchEPv` | 99.16% | 430 | 51300 |  |
| dbmw | `_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History` | 99.03% | 200 | 20700 |  |
| dbmw | `_ZN12CApplication4LoadEiPPc` | 99.18% | 345 | 42000 |  |
| dbmw | `_ZN13CTcpNetSystem14OpenTcpServiceERiPKct` | 97.39% | 297 | 11400 |  |
| dbmw | `_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader` | 98.71% | 225 | 17500 |  |
| dbmw | `_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader` | 98.72% | 220 | 17200 |  |
| dbmw | `_ZN6CMySql4execEj` | 98.50% | 150 | 10000 |  |
| dbmw | `_ZN6CMySql4openEPKcS1_S1_S1_` | 97.55% | 230 | 9400 |  |
| dbmw | `_ZN6CMySql4openEPKcjS1_S1_S1_` | 97.60% | 230 | 9600 |  |
| monitor | `_ZN13CMemberExpTbl17GetMemberExpLevelEj` | 95.65% | 200 | 4600 |  |
| monitor | `_ZN13CTcpNetSystem4InitEt` | 97.08% | 295 | 10100 |  |
| monitor | `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` | 99.45% | 105 | 19100 |  |
| monitor | `_ZN14CServerHandler20GetTcpGameServerByChEh` | 97.90% | 105 | 5000 |  |
| monitor | `_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb` | 97.86% | 60 | 2800 |  |
| monitor | `_ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start` | 97.36% | 66 | 2500 |  |
| monitor | `_ZNK11CUdpHandler12SendToServerEPcitPKc` | 97.68% | 345 | 14900 |  |
| monitor | `_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t` | 99.28% | 18 | 2500 |  |
| statics | `_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler` | 98.98% | 115 | 11300 |  |
| statics | `_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler` | 98.40% | 168 | 10500 |  |
| statics | `_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler` | 78.08% | 1995 | 9100 |  |
| guild | `_ZN6CGuild12AddGuildFundEj` | 99.19% | 82 | 10100 |  |
| guild | `_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii` | 99.56% | 72 | 16400 |  |
| guild | `_ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption` | 99.19% | 65 | 8000 |  |
| guild | `_ZN11CGuildCargo14SendGuildCargoEP5CUser` | 98.12% | 60 | 3200 |  |
| guild | `_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri` | 83.35% | 616 | 3700 |  |
| guild | `_ZN11CTcpHandlerC1Ev` | 95.81% | 130 | 3100 |  |
| guild | `_ZN11CTcpHandlerC2Ev` | 95.81% | 130 | 3100 | alias of `_ZN11CTcpHandlerC1Ev` |
| guild | `_ZN11CUdpHandler16InitServerSocketEi` | 95.32% | 524 | 11200 |  |
| guild | `_ZN12CUserManager17DeleteUser_CharNoEj` | 99.47% | 30 | 5700 |  |
| guild | `_ZN12CUserManager17InsertUser_CharNoEjP5CUser` | 97.33% | 176 | 6600 |  |
| guild | `_ZN12CUserManager19InsertUser_CharNameEPcP5CUser` | 97.73% | 150 | 6600 |  |
| guild | `_ZN13CAppStartInit4InitEP12CApplicationiPPc` | 98.62% | 255 | 18500 |  |
| guild | `_ZN13CGuildManager16GetAttendanceExpEji` | 99.58% | 25 | 5900 |  |
| guild | `_ZN13CPowerManager23SendPowerWarProcessInfoEj` | 98.66% | 204 | 15200 |  |
| guild | `_ZN13CTcpNetSystem10SendPacketEv` | 99.52% | 99 | 20700 |  |
| guild | `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` | 99.45% | 105 | 19100 |  |
| guild | `_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader` | 95.27% | 605 | 12800 |  |
| guild | `_ZN14CPacketDecoderC1Ev` | 97.00% | 750 | 25000 |  |
| guild | `_ZN14CPacketDecoderC2Ev` | 97.00% | 750 | 25000 | alias of `_ZN14CPacketDecoderC1Ev` |
| guild | `_ZN17STGuildDBInfoOnlyC1Ev` | 95.00% | 440 | 8800 |  |
| guild | `_ZN17STGuildDBInfoOnlyC2Ev` | 95.00% | 440 | 8800 | alias of `_ZN17STGuildDBInfoOnlyC1Ev` |
| guild | `_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt` | 99.41% | 59 | 10000 |  |
| guild | `_ZN5CPeer11send_packetEPci` | 99.59% | 55 | 13300 |  |
| guild | `_ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember` | 99.36% | 18 | 2800 |  |
| guild | `_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc` | 91.19% | 740 | 8400 |  |
| guild | `_ZN6CGuild22NotifyTodayGuildMemberEP5CUser` | 73.77% | 1259 | 4800 |  |
| guild | `_ZN6CGuild25ChangeGuildMemberCharNameEjPc` | 85.45% | 1353 | 9300 |  |
| guild | `_ZN6CGuild29getUnconnectedGuildMemberNameEj` | 99.26% | 34 | 4600 |  |
| guild | `_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji` | 97.61% | 122 | 5100 |  |
| guild | `_ZN8WongWork11CGMAccounts4isGMEj` | 98.10% | 91 | 4800 |  |
| guild | `_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info` | 84.32% | 1411 | 9000 |  |
| guild | `_ZNK11CUdpHandler12SendToServerEPcitPKc` | 97.68% | 345 | 14900 |  |
