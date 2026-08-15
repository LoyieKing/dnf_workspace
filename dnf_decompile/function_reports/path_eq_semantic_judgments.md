# PATH_EQ 334 函数：人工语义判定

判定对象：`function_reports/path_eq_functions.tsv` 里的 334 个 `--path-only == PATH_EQ` 非 IDENTICAL 函数。
材料：每个函数 `function_reports/<svc>/<mangled>.md` 的「## 1. 汇编 diff」，以及抽出的 leftover 卡片。
**不是** cozy SEMANTIC_EQ，也**不是**官方 IDENTICAL。这是读汇编之后的人工结论。

## 口径

| 标签 | 含义 |
|---|---|
| `SEM_EQ` | 机器码差是寄存器分配、独立 load 重排、同一地址的 lea/add、栈槽重编号、jcc 数值偏移、`xor $1`/`sete`/`je↔jne` 等价改写、`__FUNCTION__`↔同内容字面量、x87 `fdivp`↔`fdivrl`。可观察语义相同。 |
| `SEM_EQ_CLAMP` | 钳位后拷贝：两条 memcpy 与「先 min 再一条 memcpy」等价。 |
| `SEM_EQ_EH` | 正常路径调用/存取相同；OURS 多 `_Unwind_Resume` / `operator delete` 是编译器 EH landing。 |
| `SEM_EQ_CONST_FOLD` | 全局常量被折成立即数；若符号值等于该立即数则语义相同。 |
| `SEM_EQ_SHAPE` | PATH_EQ，且 leftover 是栈帧大小、bool 是否物化、局部槽、三维下标的 `imul`/`shl` 形态。我读过 diff，**没有**找到改调用目标、改字段最终地址或改返回值的硬证据；但不能用它当 IDENTICAL。 |
| `SEM_DIFF` | 读到了会改行为的差：多/少有副作用的 call、错误字符串、字段位移整体平移、钳位上下限不同、写死行号/列号。 |

## 汇总

| 判定 | 数量 |
|---|---:|
| `SEM_EQ` | 180 |
| `SEM_EQ_CLAMP` | 2 |
| `SEM_EQ_EH` | 10 |
| `SEM_EQ_CONST_FOLD` | 1 |
| `SEM_EQ_SHAPE` | 121 |
| `SEM_DIFF` | 20 |
| 合计 | 334 |

按「读汇编后认为语义相等」（含 SHAPE/EH/CLAMP/FOLD）：**314**
按「读到真实语义差」：**20**

## SEM_DIFF 明细（必须修，不在 168 的 path-fail 集合里）

这些函数 PATH_EQ 成立，但汇编不是寄存器重排。

| 服务 | 函数 | 原因 |
|---|---|---|
| dbmw | `_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh` | get_int 列号 OURS 出现 $2/$3，ORIG 只见 $0/$1；且 exec 结果未先存 bool 就 xor，与 GetResult 顺序在 PATH_EQ 骨架下仍可能改错误路径上的返回 |
| dbmw | `_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild` | 结果扫描步长/字段 leftover 为 add $8+0x2d vs add $0x20+setl，不像纯寄存器改道 |
| dbmw | `_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_` | OURS 多 movl $0 写 0x8 字段，ORIG 把已有值搬到 0x8 |
| dbmw | `_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party` | 三维统计下标步长 leftover ORIG add $0x20 / $0x14.. vs OURS shl $2 / $0x10，布局不一致 |
| dbmw | `_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job` | 统计项步长 $0x14.. vs $0x10 |
| dbmw | `_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac` | 统计项步长 $0x14/$0x30 vs $0x10 |
| guild | `_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader` | CMyFileLog 行号 ORIG 从栈/包加载，OURS 写死 $0x19f |
| guild | `_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader` | 0x8(%esp) ORIG 加载字，OURS 写死 $0x2d |
| guild | `_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader` | 包字段位移 ORIG 0xa/0xe/0x12 vs OURS 0xc/0x10/0x14，整体 +2 |
| guild | `_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader` | 多处 0x8(%esp) ORIG 加载字，OURS 写死 $0x31 |
| guild | `_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader` | catch 里 OURS 多一次 printf，ORIG 只写文件日志 |
| guild | `_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader` | 多处行号/长度 ORIG 加载，OURS 写死 $0x31 |
| guild | `_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader` | catch 里 OURS 多 printf，且字符串误用 OnNoticeGuildWarEnd |
| monitor | `_ZN10CIPCounter11setLoadTermEh` | 下限钳制 ORIG 0x708 / OURS 0x707，差 1 |
| monitor | `_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader` | 日志行号 0x4c3/0x4c9 vs 0x4dd/0x4e3，不是同一源行 |
| monitor | `_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader` | 日志行号 0xdc4 vs 0xdc3 |
| monitor | `_ZNK11CUdpHandler12SendToClientEPcitPKcj` | leftover 比较立即数 ORIG `$0x61` / OURS 另有 `$0x60`，不是同一阈值 |
| monitor | `_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt` | leftover ORIG `cmp $0x58`，OURS 同时出现 `$0x58` 与 `$0x68` |
| statics | `_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler` | leftover 写字段 `0xe` vs `0x1a`，包内位移不一致 |
| statics | `_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic` | leftover 步长 `$0x10` vs `$0x18/$0x1c` |

## 全表（334）

| 服务 | 状态 | pm | canonΔ | 判定 | 理由 | 函数 |
|---|---|---:|---:|---|---|---|
| dbmw | NEAR | 2 | 0 | `SEM_EQ` | 独立 load 重排：mov 0x8(%ebp),%edx 提前 | `_ZL16allocStackBufferjPPhPi` |
| dbmw | DIFF | 1069 | 7 | `SEM_EQ` | 键分支对齐后仅栈帧 0xb0→0xa0 与局部槽平移，strcmp/atoi/memcpy 目标字段位移一致 | `_ZN10CAppConfig11Parse_TableEPci` |
| dbmw | NEAR | 22 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN10CDBManager10InsertMailEjPcS0_jjii` |
| dbmw | NEAR | 10 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild` |
| dbmw | DIFF | 1102 | 74 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_` |
| dbmw | DIFF | 19 | 3 | `SEM_EQ` | 小 diff（pm=19）：mov    %al,SLOT(%r) \| movzbl SLOT(%r),%r ↔ movzbl %bl,%r | `_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly` |
| dbmw | DIFF | 118 | 32 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=118 canonΔ=32）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh` |
| dbmw | DIFF | 31 | 7 | `SEM_EQ` | add 与 lea 地址计算等价，省 bool 栈槽 | `_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly` |
| dbmw | NEAR | 8 | 0 | `SEM_EQ` | 互斥分支栈槽成对互换 | `_ZN10CDBManager15OnLoadGuildAgitEP25Packet_DB_Load_Guild_AgitR28Packet_Guild_Load_Guild_Agit` |
| dbmw | DIFF | 26 | 2 | `SEM_EQ` | add 与 lea (r,r,1) 同一加法 | `_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild` |
| dbmw | DIFF | 136 | 10 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh` |
| dbmw | DIFF | 162 | 6 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=162 canonΔ=6）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager16SaveMemberInsertEjjh` |
| dbmw | DIFF | 126 | 4 | `SEM_EQ` | lea 0x17 与 add $0x17 | `_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo` |
| dbmw | DIFF | 396 | 74 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=396 canonΔ=74）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic` |
| dbmw | DIFF | 327 | 31 | `SEM_DIFF` | get_int 列号 OURS 出现 $2/$3，ORIG 只见 $0/$1；且 exec 结果未先存 bool 就 xor，与 GetResult 顺序在 PATH_EQ 骨架下仍可能改错误路径上的返回 | `_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh` |
| dbmw | DIFF | 93 | 3 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=93 canonΔ=3）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager18updateCollectItemsEhijh` |
| dbmw | DIFF | 68 | 18 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=68 canonΔ=18）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager19QueryCharacNoByNameEPcRjPi` |
| dbmw | DIFF | 66 | 14 | `SEM_DIFF` | 结果扫描步长/字段 leftover 为 add $8+0x2d vs add $0x20+setl，不像纯寄存器改道 | `_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild` |
| dbmw | DIFF | 66 | 14 | `SEM_DIFF` | OURS 多 movl $0 写 0x8 字段，ORIG 把已有值搬到 0x8 | `_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_` |
| dbmw | DIFF | 45 | 13 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=45 canonΔ=13）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic` |
| dbmw | DIFF | 68 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager20updateCollectItemsGmEhiij` |
| dbmw | DIFF | 50 | 10 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=50 canonΔ=10）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message` |
| dbmw | DIFF | 104 | 68 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=104 canonΔ=68）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic` |
| dbmw | DIFF | 54 | 16 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy` |
| dbmw | DIFF | 55 | 13 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager21SaveGuildWarPointListEiPjS0_` |
| dbmw | DIFF | 37 | 7 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=37 canonΔ=7）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout` |
| dbmw | DIFF | 21 | 3 | `SEM_EQ` | mov $0x6002,%r; mov %r,0x8 合并为 movl $0x6002,0x8 | `_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo` |
| dbmw | DIFF | 180 | 12 | `SEM_EQ` | xor $1/je 与 cmpb $0/jne；lea 0x6/0x4 与 add | `_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History` |
| dbmw | DIFF | 13 | 3 | `SEM_EQ` | movzbl vs movsbl 后只用低字节/再零扩展场景下值域相同（返回 bool） | `_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report` |
| dbmw | DIFF | 184 | 40 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=184 canonΔ=40）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo` |
| dbmw | DIFF | 43 | 7 | `SEM_EQ` | 立即数写字段合并为 movl | `_ZN10CDBManager24ChangeGuildNotifyMessageEijPc` |
| dbmw | DIFF | 370 | 118 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=370 canonΔ=118）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer` |
| dbmw | DIFF | 30 | 2 | `SEM_EQ` | 删 jmp+nop 直通 | `_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD` |
| dbmw | DIFF | 224 | 6 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=224 canonΔ=6）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj` |
| dbmw | NEAR | 8 | 0 | `SEM_EQ` | 互斥分支栈槽成对互换 | `_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack` |
| dbmw | DIFF | 111 | 23 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=111 canonΔ=23）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic` |
| dbmw | DIFF | 7 | 3 | `SEM_EQ` | cmp 寄存器 vs cmpl 内存，比较值 0x63 相同 | `_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic` |
| dbmw | DIFF | 46 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer` |
| dbmw | DIFF | 90 | 44 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=90 canonΔ=44）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index` |
| dbmw | DIFF | 15 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History` |
| dbmw | DIFF | 107 | 31 | `SEM_EQ` | setge vs setle 且操作数对调，比较方向等价 | `_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic` |
| dbmw | NEAR | 4 | 0 | `SEM_EQ` | packet 指针与循环下标两条独立 load 互换 | `_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward` |
| dbmw | DIFF | 146 | 24 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt` |
| dbmw | DIFF | 1029 | 227 | `SEM_DIFF` | 三维统计下标步长 leftover ORIG add $0x20 / $0x14.. vs OURS shl $2 / $0x10，布局不一致 | `_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party` |
| dbmw | DIFF | 32 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker` |
| dbmw | DIFF | 147 | 51 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=147 canonΔ=51）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query` |
| dbmw | DIFF | 523 | 117 | `SEM_DIFF` | 统计项步长 $0x14.. vs $0x10 | `_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job` |
| dbmw | DIFF | 110 | 10 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD` |
| dbmw | DIFF | 344 | 58 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=344 canonΔ=58）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB` |
| dbmw | DIFF | 543 | 157 | `SEM_DIFF` | 统计项步长 $0x14/$0x30 vs $0x10 | `_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac` |
| dbmw | DIFF | 156 | 14 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj` |
| dbmw | DIFF | 235 | 59 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=235 canonΔ=59）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job` |
| dbmw | DIFF | 145 | 39 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=145 canonΔ=39）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party` |
| dbmw | DIFF | 125 | 3 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=125 canonΔ=3）。未看到改返回值或改调用目标的证据 | `_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi` |
| dbmw | DIFF | 65 | 7 | `SEM_EQ` | shr $0x1f 取符号位 vs cmpl $0/jns，有符号>=0 测试等价 | `_ZN12CApplication15TranslateSignalEv` |
| dbmw | DIFF | 18 | 0 | `SEM_EQ` | 寄存器分配 + 尾部 mov 合并 | `_ZN12CApplication4LoadEiPPc` |
| dbmw | NEAR | 10 | 0 | `SEM_EQ` | 虚调用寄存器 edx→eax，目标相同 | `_ZN13CPacketTracer19EndPacketProcessLogEj` |
| dbmw | DIFF | 51 | 3 | `SEM_EQ` | fldl+fdivp 与 fdivrl 同一栈槽，x87 除法等价 | `_ZN13CPacketTracer21WritePacketProcessLogEv` |
| dbmw | NEAR | 12 | 8 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CPacketTracerC1Ev` |
| dbmw | DIFF | 23 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CQueryCounter10WriteDBLogER10CDBManager` |
| dbmw | DIFF | 12 | 0 | `SEM_EQ` | 错误分支栈槽互换 + 寄存器改道 | `_ZN13CTcpNetSystem14OpenTcpServiceERiPKct` |
| dbmw | DIFF | 50 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CTcpNetSystem18PushTcpSendPacketQEPc` |
| dbmw | DIFF | 30 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv` |
| dbmw | NEAR | 2 | 0 | `SEM_EQ` | 删 nop，jmp 偏移 -1 | `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` |
| dbmw | DIFF | 22 | 0 | `SEM_EQ` | 清理块整体平移，jmp 偏移随长度变 | `_ZN14CNetworkThread8dispatchEPv` |
| dbmw | DIFF | 55 | 15 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=55 canonΔ=15）。未看到改返回值或改调用目标的证据 | `_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi` |
| dbmw | DIFF | 16 | 2 | `SEM_EQ` | lea -0xa 与 sub $0xa | `_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader` |
| dbmw | DIFF | 122 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader` |
| dbmw | DIFF | 24 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader` |
| dbmw | DIFF | 111 | 35 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=111 canonΔ=35）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader` |
| dbmw | DIFF | 32 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader` |
| dbmw | DIFF | 8 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader` |
| dbmw | DIFF | 23 | 1 | `SEM_EQ` | 同一槽 load 到 eax 再 mov 到 edx | `_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader` |
| dbmw | DIFF | 66 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader` |
| dbmw | DIFF | 29 | 3 | `SEM_EQ` | add $0x12 与 lea 0x12 | `_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader` |
| dbmw | DIFF | 68 | 12 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader` |
| dbmw | DIFF | 52 | 16 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=52 canonΔ=16）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader` |
| dbmw | DIFF | 23 | 1 | `SEM_EQ` | 同一槽 load 到 eax 再 mov 到 edx | `_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader` |
| dbmw | DIFF | 284 | 52 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=284 canonΔ=52）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader` |
| dbmw | DIFF | 72 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader` |
| dbmw | DIFF | 74 | 8 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=74 canonΔ=8）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader` |
| dbmw | DIFF | 81 | 17 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=81 canonΔ=17）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader` |
| dbmw | DIFF | 106 | 12 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=106 canonΔ=12）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader` |
| dbmw | DIFF | 80 | 10 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader` |
| dbmw | DIFF | 92 | 20 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=92 canonΔ=20）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader` |
| dbmw | DIFF | 37 | 3 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=37 canonΔ=3）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader` |
| dbmw | DIFF | 10 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader` |
| dbmw | DIFF | 16 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt` |
| dbmw | DIFF | 46 | 0 | `SEM_EQ` | 虚调用寄存器 edx→eax，目标相同 | `_ZN6CMySql10exec_queryEv` |
| dbmw | DIFF | 36 | 18 | `SEM_EQ` | 0x6070+9 与 0x6079 同一地址，movb $0 写同一字节 | `_ZN6CMySql11blob_to_strEiPvi` |
| dbmw | DIFF | 15 | 1 | `SEM_EQ` | 对象指针寄存器改道，字段 0x18 不变 | `_ZN6CMySql4execEj` |
| dbmw | DIFF | 11 | 1 | `SEM_EQ` | this 先装 edx 再写 0x42088 | `_ZN6CMySql4openEPKcS1_S1_S1_` |
| dbmw | DIFF | 11 | 1 | `SEM_EQ` | this 先装 edx 再写 0x42088 | `_ZN6CMySql4openEPKcjS1_S1_S1_` |
| dbmw | NEAR | 16 | 0 | `SEM_EQ` | 虚调用寄存器 edx→eax，目标相同 | `_ZN6CMySql7get_intEiRj` |
| guild | DIFF | 126 | 24 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=126 canonΔ=24）。未看到改返回值或改调用目标的证据 | `_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser` |
| guild | NEAR | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii` |
| guild | NEAR | 16 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption` |
| guild | DIFF | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN11CGuildCargo14SendGuildCargoEP5CUser` |
| guild | DIFF | 46 | 4 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=46 canonΔ=4）。未看到改返回值或改调用目标的证据 | `_ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo` |
| guild | DIFF | 16 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri` |
| guild | DIFF | 10 | 4 | `SEM_EQ` | 小 diff（pm=10）：cmp    $0x32,%r \| mov    $0x32,%r ↔ cmpl   $0x32,0xc(%r) \| movl   $0x32,SLOT(%r) | `_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog` |
| guild | DIFF | 3 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN11CTcpHandlerC1Ev` |
| guild | DIFF | 16 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN11CUdpHandler16InitServerSocketEi` |
| guild | DIFF | 114 | 16 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=114 canonΔ=16）。未看到改返回值或改调用目标的证据 | `_ZN12CApplication15TranslateSignalEv` |
| guild | DIFF | 44 | 4 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=44 canonΔ=4）。未看到改返回值或改调用目标的证据 | `_ZN12CApplication4LoadEiPPc` |
| guild | NEAR | 8 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN12CUserManager17DeleteUser_CharNoEj` |
| guild | NEAR | 28 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN12CUserManager17InsertUser_CharNoEjP5CUser` |
| guild | NEAR | 24 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN12CUserManager19InsertUser_CharNameEPcP5CUser` |
| guild | DIFF | 30 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CAppStartInit4InitEP12CApplicationiPPc` |
| guild | DIFF | 3 | 3 | `SEM_EQ` | xor $1/jne 与 je 对同一 test 结果等价 | `_ZN13CGuildManager13GuildMemLoginEjP5CUser` |
| guild | DIFF | 46 | 6 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=46 canonΔ=6）。未看到改返回值或改调用目标的证据 | `_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb` |
| guild | DIFF | 36 | 10 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CGuildManager14GuildMemLogoutEjP5CUser` |
| guild | NEAR | 8 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN13CGuildManager16GetAttendanceExpEji` |
| guild | DIFF | 56 | 18 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=56 canonΔ=18）。未看到改返回值或改调用目标的证据 | `_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo` |
| guild | DIFF | 6 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN13CPowerManager23SendPowerWarProcessInfoEj` |
| guild | DIFF | 133 | 31 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=133 canonΔ=31）。未看到改返回值或改调用目标的证据 | `_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc` |
| guild | NEAR | 12 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN13CTcpNetSystem10SendPacketEv` |
| guild | DIFF | 3 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` |
| guild | DIFF | 19 | 5 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader` |
| guild | DIFF | 6 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN14CPacketDecoderC1Ev` |
| guild | DIFF | 202 | 14 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=202 canonΔ=14）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader` |
| guild | DIFF | 193 | 23 | `SEM_EQ_EH` | call 差是虚调用寄存器或 EH landing；业务符号集合一致 | `_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader` |
| guild | DIFF | 497 | 47 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=497 canonΔ=47）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader` |
| guild | DIFF | 57 | 5 | `SEM_EQ_EH` | OURS 多 _Unwind_Resume，是 EH landing，正常路径调用序列相同 | `_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader` |
| guild | DIFF | 162 | 20 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=162 canonΔ=20）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader` |
| guild | DIFF | 201 | 35 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=201 canonΔ=35）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader` |
| guild | DIFF | 110 | 8 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader` |
| guild | DIFF | 74 | 10 | `SEM_DIFF` | CMyFileLog 行号 ORIG 从栈/包加载，OURS 写死 $0x19f | `_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader` |
| guild | DIFF | 103 | 11 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader` |
| guild | DIFF | 191 | 21 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=191 canonΔ=21）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader` |
| guild | DIFF | 136 | 8 | `SEM_EQ_EH` | call 差是虚调用寄存器或 EH landing；业务符号集合一致 | `_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader` |
| guild | DIFF | 255 | 17 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=255 canonΔ=17）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader` |
| guild | DIFF | 282 | 32 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=282 canonΔ=32）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader` |
| guild | DIFF | 392 | 68 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=392 canonΔ=68）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader` |
| guild | DIFF | 536 | 60 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=536 canonΔ=60）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader` |
| guild | DIFF | 87 | 5 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader` |
| guild | DIFF | 130 | 18 | `SEM_DIFF` | 0x8(%esp) ORIG 加载字，OURS 写死 $0x2d | `_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader` |
| guild | DIFF | 102 | 22 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=102 canonΔ=22）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader` |
| guild | DIFF | 61 | 19 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=61 canonΔ=19）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader` |
| guild | DIFF | 59 | 17 | `SEM_DIFF` | 包字段位移 ORIG 0xa/0xe/0x12 vs OURS 0xc/0x10/0x14，整体 +2 | `_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader` |
| guild | DIFF | 110 | 30 | `SEM_EQ_CLAMP` | jg 分路 memcpy 与 cmovbe 钳 0x14 后单 memcpy 等价；字段 0xa/0xe/0x12 一致 | `_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader` |
| guild | DIFF | 85 | 15 | `SEM_DIFF` | 多处 0x8(%esp) ORIG 加载字，OURS 写死 $0x31 | `_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader` |
| guild | DIFF | 45 | 13 | `SEM_DIFF` | catch 里 OURS 多一次 printf，ORIG 只写文件日志 | `_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader` |
| guild | DIFF | 16 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader` |
| guild | DIFF | 129 | 25 | `SEM_DIFF` | 多处行号/长度 ORIG 加载，OURS 写死 $0x31 | `_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader` |
| guild | DIFF | 247 | 49 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=247 canonΔ=49）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader` |
| guild | DIFF | 67 | 5 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader` |
| guild | DIFF | 159 | 7 | `SEM_EQ` | 日志函数名 __FUNCTION__ vs 字面量，内容相同；其余 polarity/lea | `_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader` |
| guild | DIFF | 152 | 18 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=152 canonΔ=18）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader` |
| guild | DIFF | 57 | 23 | `SEM_DIFF` | catch 里 OURS 多 printf，且字符串误用 OnNoticeGuildWarEnd | `_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader` |
| guild | DIFF | 16 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader` |
| guild | DIFF | 75 | 5 | `SEM_EQ` | 日志函数名 __FUNCTION__ vs 字面量，内容相同；其余 polarity/lea | `_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader` |
| guild | DIFF | 383 | 11 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=383 canonΔ=11）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader` |
| guild | DIFF | 470 | 18 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=470 canonΔ=18）。未看到改返回值或改调用目标的证据 | `_ZN17CUdpNetworkThread8dispatchEPv` |
| guild | DIFF | 8 | 4 | `SEM_EQ` | 小 diff（pm=8）： ↔ mov    %r,%r \| mov    %r,%r \| mov    0x8(%r),%r \| mov    0x8(%r),%r | `_ZN17STGuildDBInfoOnlyC1Ev` |
| guild | DIFF | 243 | 41 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=243 canonΔ=41）。未看到改返回值或改调用目标的证据 | `_ZN18CFrameCountHandler17GetFrameCountInfoEv` |
| guild | NEAR | 4 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt` |
| guild | DIFF | 166 | 12 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=166 canonΔ=12）。未看到改返回值或改调用目标的证据 | `_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii` |
| guild | DIFF | 30 | 18 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=30 canonΔ=18）。未看到改返回值或改调用目标的证据 | `_ZN5CPeer11recv_packetEv` |
| guild | NEAR | 6 | 4 | `SEM_EQ` | 小 diff（pm=6）：mov    0x10(%r),%r \| add    %r,%r ↔ mov    %r,%r \| add    0x10(%r),%r | `_ZN5CPeer11send_packetEPci` |
| guild | DIFF | 82 | 16 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=82 canonΔ=16）。未看到改返回值或改调用目标的证据 | `_ZN5CPeer11send_packetEv` |
| guild | NEAR | 8 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN6CGuild12AddGuildFundEj` |
| guild | DIFF | 79 | 9 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj` |
| guild | DIFF | 13 | 3 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild17InsertGuildMemberEjP5CUser` |
| guild | DIFF | 26 | 6 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=26 canonΔ=6）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild17SetSubGuildMasterEjb` |
| guild | DIFF | 16 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh` |
| guild | NEAR | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember` |
| guild | DIFF | 32 | 14 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=32 canonΔ=14）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc` |
| guild | DIFF | 50 | 12 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=50 canonΔ=12）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild22NotifyTodayGuildMemberEP5CUser` |
| guild | DIFF | 70 | 10 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=70 canonΔ=10）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo` |
| guild | DIFF | 44 | 18 | `SEM_EQ_CLAMP` | strlen>0x64 两条 memcpy 与先钳到 0x64 再一条 memcpy 等价 | `_ZN6CGuild22SendGuildInfoToMembersEb` |
| guild | DIFF | 102 | 50 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=102 canonΔ=50）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser` |
| guild | DIFF | 40 | 14 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=40 canonΔ=14）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy` |
| guild | DIFF | 22 | 10 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild23SendGuildInfoToManagersEv` |
| guild | DIFF | 34 | 12 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=34 canonΔ=12）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh` |
| guild | DIFF | 57 | 23 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=57 canonΔ=23）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild25ChangeGuildMemberCharNameEjPc` |
| guild | DIFF | 60 | 16 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=60 canonΔ=16）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild25NotifyAllTodayGuildMemberEv` |
| guild | DIFF | 8 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild26NotifyAllAchieveAttendanceEjj` |
| guild | DIFF | 22 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild26NotifyMessageToGuildMemberEv` |
| guild | DIFF | 8 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild26SendGuildAgitInfoToMembersEv` |
| guild | DIFF | 25 | 11 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=25 canonΔ=11）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild26UpdateChangableInfoProcessEv` |
| guild | DIFF | 16 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild27DismissGuildMemberAndNoticeEi` |
| guild | DIFF | 8 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN6CGuild28SendGuildNameChangeToMembersEv` |
| guild | NEAR | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN6CGuild29getUnconnectedGuildMemberNameEj` |
| guild | NEAR | 18 | 4 | `SEM_EQ` | 小 diff（pm=18）：add    $0xf0,%r \| mov    %cl,0x14(%r) ↔ add    $0x104,%r \| mov    %cl,(%r) | `_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji` |
| guild | DIFF | 37 | 9 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=37 canonΔ=9）。未看到改返回值或改调用目标的证据 | `_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc` |
| guild | NEAR | 18 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN8WongWork11CGMAccounts4isGMEj` |
| guild | DIFF | 21 | 11 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN9CGuildWar13DBSaveProcessEP12CApplication` |
| guild | DIFF | 30 | 20 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=30 canonΔ=20）。未看到改返回值或改调用目标的证据 | `_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info` |
| guild | DIFF | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZNK11CUdpHandler12SendToServerEPcitPKc` |
| guild | DIFF | 23 | 7 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=23 canonΔ=7）。未看到改返回值或改调用目标的证据 | `_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo` |
| monitor | NEAR | 10 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN10CAppConfig11Parse_TableEPci` |
| monitor | DIFF | 24 | 18 | `SEM_DIFF` | 下限钳制 ORIG 0x708 / OURS 0x707，差 1 | `_ZN10CIPCounter11setLoadTermEh` |
| monitor | DIFF | 10 | 6 | `SEM_EQ` | ORIG mov $0xffffffc8 只写 %al=0xc8，与 movb $0xc8 相同 | `_ZN10CIPCounter13setMinIPCountEh` |
| monitor | NEAR | 20 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN10CIPCounter9setOptionEhh` |
| monitor | NEAR | 22 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN11CCashObject15GetBuddysObjectEPP6CBuddy` |
| monitor | DIFF | 71 | 23 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=71 canonΔ=23）。未看到改返回值或改调用目标的证据 | `_ZN11CUdpHandler16InitServerSocketEi` |
| monitor | DIFF | 58 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN12CApplication15TranslateSignalEv` |
| monitor | DIFF | 561 | 35 | `SEM_EQ_EH` | 多出的 call 是 EH landing；配置解析控制流骨架 PATH_EQ | `_ZN12CApplication4LoadEiPPc` |
| monitor | DIFF | 7 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN12CBuddyHandle11addFromCashEP6CBuddy` |
| monitor | NEAR | 20 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN12CUserManager11AddSchoolNoEjh` |
| monitor | DIFF | 130 | 12 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=130 canonΔ=12）。未看到改返回值或改调用目标的证据 | `_ZN12CUserManager14GetSchoolCountEjPjRh` |
| monitor | NEAR | 28 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN12CUserManager17InsertUser_CharNoEjP5CUser` |
| monitor | NEAR | 24 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN12CUserManager19InsertUser_CharNameEPcP5CUser` |
| monitor | DIFF | 119 | 15 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=119 canonΔ=15）。未看到改返回值或改调用目标的证据 | `_ZN12CUserManager23SendConnectedBuddysListEP5CUser` |
| monitor | DIFF | 11 | 9 | `SEM_EQ_EH` | new 失败路径多 operator delete + _Unwind_Resume，正常路径相同 | `_ZN12momiji_event13EndEffectTask10_DoExecuteEv` |
| monitor | DIFF | 13 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CMemberExpTbl11Parse_TableEPci` |
| monitor | DIFF | 18 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CMemberExpTbl17GetMemberExpLevelEj` |
| monitor | DIFF | 13 | 3 | `SEM_EQ` | 小 diff（pm=13）：add    %r,%r ↔ lea    (%r,%r,1),%r \| mov    %r,%r | `_ZN13CPacketTracer8WriteLogEv` |
| monitor | DIFF | 70 | 20 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CTcpNetSystem14OpenTcpServiceERiPKct` |
| monitor | DIFF | 65 | 7 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CTcpNetSystem19CleanTcpSendPacketQEv` |
| monitor | DIFF | 12 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13CTcpNetSystem4InitEt` |
| monitor | DIFF | 3 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` |
| monitor | DIFF | 121 | 19 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=121 canonΔ=19）。未看到改返回值或改调用目标的证据 | `_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler` |
| monitor | DIFF | 22 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN14CMemberManager12DeleteMemberEjb` |
| monitor | DIFF | 7 | 3 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN14CMemberManager12InsertMemberEjP7CMember` |
| monitor | DIFF | 52 | 8 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=52 canonΔ=8）。未看到改返回值或改调用目标的证据 | `_ZN14CMemberManager13MemerMemLoginEjP5CUser` |
| monitor | DIFF | 22 | 6 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=22 canonΔ=6）。未看到改返回值或改调用目标的证据 | `_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb` |
| monitor | DIFF | 16 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h` |
| monitor | DIFF | 80 | 22 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=80 canonΔ=22）。未看到改返回值或改调用目标的证据 | `_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i` |
| monitor | DIFF | 29 | 13 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=29 canonΔ=13）。未看到改返回值或改调用目标的证据 | `_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh` |
| monitor | DIFF | 37 | 7 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN14CMemberManager25MemberRegisterFlagProcessEv` |
| monitor | DIFF | 53 | 11 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=53 canonΔ=11）。未看到改返回值或改调用目标的证据 | `_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi` |
| monitor | DIFF | 116 | 46 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=116 canonΔ=46）。未看到改返回值或改调用目标的证据 | `_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader` |
| monitor | DIFF | 7 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN14CServerHandler20GetTcpGameServerByChEh` |
| monitor | DIFF | 45 | 17 | `SEM_EQ_EH` | new 失败 EH landing；+0x15180 / 周六 0 点 mktime 逻辑相同 | `_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb` |
| monitor | DIFF | 14 | 12 | `SEM_EQ` | 小 diff（pm=14）：setle  %al \| test   %al,%al \| je     <T> \| mov    $0x1,%r ↔ sub    $0x4,%r \| jg     <T> \| movl   $0x1,SLOT(%r) \| movl   $0x0,SLOT(%r) | `_ZN16CDNFProhibitUser20IsTimeOutConnectableEv` |
| monitor | DIFF | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb` |
| monitor | DIFF | 16 | 10 | `SEM_EQ` | 小 diff（pm=16）：sete   %al \| test   %al,%al \| test   %al,%al \| seta   %al ↔ push   %r \| sete   %bl \| test   %bl,%bl \| test   %bl,%bl | `_ZN16CServerInterface19IsHeartBeatTimeOverEv` |
| monitor | DIFF | 74 | 26 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=74 canonΔ=26）。未看到改返回值或改调用目标的证据 | `_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv` |
| monitor | DIFF | 94 | 56 | `SEM_EQ_CONST_FOLD` | COUNTDOWN_* 全局被折成 0x258/0x12c/0x3c；另多 EH landing。若符号值等于这些立即数则语义相等 | `_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii` |
| monitor | DIFF | 48 | 26 | `SEM_EQ_EH` | 多 EH landing，业务调用序列相同 | `_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv` |
| monitor | DIFF | 17 | 11 | `SEM_EQ` | 小 diff（pm=17）：sub    $0x28,%r \| mov    %r,SLOT(%r) \| mov    SLOT(%r),%r \| mov    SLOT(%r),%r ↔ push   %r \| sub    $0x4,%r \| mov    0xc(%r),%r \| add    $0x4,%r | `_ZN16village_attacked23CVillageAttackedManager25SendRequestRevengeDungeonEPc` |
| monitor | DIFF | 17 | 11 | `SEM_EQ` | 小 diff（pm=17）：mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,8),%r \| shl    $0x3,%r \| mov    &_ZN16village_attacked26village_attacked_schedulerE(%r),%r \| mov    SLOT(%r),%r ↔ add    %r,%r \| add    %r,%r \| mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,4),%r \| mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,4),%r | `_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv` |
| monitor | DIFF | 32 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader` |
| monitor | DIFF | 70 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader` |
| monitor | DIFF | 10 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader` |
| monitor | DIFF | 68 | 8 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=68 canonΔ=8）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater12OnEventStartEP12PacketHeader` |
| monitor | DIFF | 32 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader` |
| monitor | DIFF | 290 | 22 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=290 canonΔ=22）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader` |
| monitor | DIFF | 266 | 44 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=266 canonΔ=44）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader` |
| monitor | DIFF | 134 | 12 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=134 canonΔ=12）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader` |
| monitor | DIFF | 102 | 10 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=102 canonΔ=10）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader` |
| monitor | DIFF | 194 | 10 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader` |
| monitor | DIFF | 60 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader` |
| monitor | DIFF | 156 | 8 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader` |
| monitor | DIFF | 169 | 15 | `SEM_DIFF` | 日志行号 0x4c3/0x4c9 vs 0x4dd/0x4e3，不是同一源行 | `_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader` |
| monitor | DIFF | 152 | 20 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=152 canonΔ=20）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader` |
| monitor | DIFF | 234 | 40 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader` |
| monitor | DIFF | 242 | 20 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=242 canonΔ=20）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader` |
| monitor | DIFF | 97 | 19 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader` |
| monitor | DIFF | 127 | 37 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=127 canonΔ=37）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader` |
| monitor | DIFF | 119 | 23 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=119 canonΔ=23）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader` |
| monitor | DIFF | 8 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader` |
| monitor | DIFF | 62 | 16 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=62 canonΔ=16）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader` |
| monitor | DIFF | 107 | 7 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader` |
| monitor | DIFF | 56 | 10 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader` |
| monitor | DIFF | 57 | 9 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=57 canonΔ=9）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader` |
| monitor | DIFF | 68 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader` |
| monitor | DIFF | 8 | 6 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader` |
| monitor | DIFF | 399 | 43 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader` |
| monitor | DIFF | 68 | 22 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=68 canonΔ=22）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader` |
| monitor | DIFF | 104 | 6 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=104 canonΔ=6）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader` |
| monitor | DIFF | 266 | 18 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=266 canonΔ=18）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader` |
| monitor | DIFF | 87 | 11 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=87 canonΔ=11）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader` |
| monitor | DIFF | 14 | 4 | `SEM_EQ` | 小 diff（pm=14）：mov    %al,0x15e(%r) \| jmp    <T> \| nop ↔ mov    %dl,0x15e(%r) | `_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader` |
| monitor | DIFF | 298 | 26 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=298 canonΔ=26）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader` |
| monitor | DIFF | 46 | 6 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=46 canonΔ=6）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader` |
| monitor | DIFF | 189 | 21 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=189 canonΔ=21）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader` |
| monitor | DIFF | 148 | 8 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=148 canonΔ=8）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader` |
| monitor | DIFF | 179 | 27 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=179 canonΔ=27）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader` |
| monitor | DIFF | 110 | 16 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader` |
| monitor | DIFF | 37 | 11 | `SEM_DIFF` | 日志行号 0xdc4 vs 0xdc3 | `_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader` |
| monitor | DIFF | 122 | 10 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader` |
| monitor | DIFF | 62 | 20 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=62 canonΔ=20）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader` |
| monitor | DIFF | 155 | 9 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=155 canonΔ=9）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader` |
| monitor | DIFF | 194 | 14 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=194 canonΔ=14）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader` |
| monitor | DIFF | 121 | 33 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=121 canonΔ=33）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader` |
| monitor | DIFF | 125 | 37 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=125 canonΔ=37）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader` |
| monitor | DIFF | 515 | 41 | `SEM_EQ_EH` | call 差是虚调用寄存器或 EH landing；业务符号集合一致 | `_ZN17CUdpNetworkThread8dispatchEPv` |
| monitor | DIFF | 247 | 37 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=247 canonΔ=37）。未看到改返回值或改调用目标的证据 | `_ZN18CFrameCountHandler17GetFrameCountInfoEv` |
| monitor | DIFF | 14 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN18CMemoryCashManager18ProcessLifeTimeOutEv` |
| monitor | NEAR | 44 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN18CMemoryCashManager20ProcessCashDataPrintEv` |
| monitor | DIFF | 90 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser` |
| monitor | NEAR | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start` |
| monitor | DIFF | 8 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZN19COnTimeEventManager10StartEventEjj` |
| monitor | DIFF | 18 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN19COnTimeEventManager11OnRewardEndEv` |
| monitor | DIFF | 40 | 22 | `SEM_EQ_EH` | 多 EH landing | `_ZN19COnTimeEventManager13OnRewardStartEv` |
| monitor | DIFF | 55 | 17 | `SEM_EQ_EH` | 多 EH landing | `_ZN20CTask_ChristmasEvent10_DoExecuteEv` |
| monitor | DIFF | 22 | 12 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=22 canonΔ=12）。未看到改返回值或改调用目标的证据 | `_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo` |
| monitor | DIFF | 5 | 3 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv` |
| monitor | NEAR | 6 | 4 | `SEM_EQ` | 小 diff（pm=6）：mov    0x10(%r),%r \| add    %r,%r ↔ mov    %r,%r \| add    0x10(%r),%r | `_ZN5CPeer11send_packetEPci` |
| monitor | DIFF | 82 | 18 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=82 canonΔ=18）。未看到改返回值或改调用目标的证据 | `_ZN5CPeer11send_packetEv` |
| monitor | DIFF | 10 | 6 | `SEM_EQ` | 小 diff（pm=10）：je     <T> \| setle  %al \| test   %al,%al ↔ jg     <T> \| jmp    <T> \| nop | `_ZN5CUser18MemberEnterProcessEv` |
| monitor | DIFF | 13 | 5 | `SEM_EQ` | 小 diff（pm=13）：cmp    SLOT(%r),%r \| add    $0x6,%r ↔ mov    SLOT(%r),%r \| cmp    %r,%r \| lea    0x6(%r),%r | `_ZN7CMember10LoadMemberER14STMemberDBInfosjj` |
| monitor | DIFF | 10 | 4 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN7CMember21GetConnLowerMemberCntEv` |
| monitor | DIFF | 36 | 8 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN7CMember21NoticeLevelUpToLowersEj` |
| monitor | DIFF | 306 | 20 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=306 canonΔ=20）。未看到改返回值或改调用目标的证据 | `_ZN7CMember21NoticeMemberLogin_OutEP5CUserc` |
| monitor | DIFF | 82 | 16 | `SEM_DIFF` | leftover 比较立即数 ORIG `$0x61` / OURS 另有 `$0x60`，不是同一阈值 | `_ZNK11CUdpHandler12SendToClientEPcitPKcj` |
| monitor | DIFF | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZNK11CUdpHandler12SendToServerEPcitPKc` |
| monitor | DIFF | 66 | 20 | `SEM_DIFF` | leftover ORIG `cmp $0x58`，OURS 同时出现 `$0x58` 与 `$0x68` | `_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt` |
| monitor | DIFF | 58 | 16 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=58 canonΔ=16）。未看到改返回值或改调用目标的证据 | `_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt` |
| monitor | NEAR | 2 | 0 | `SEM_EQ` | 去掉寄存器/栈槽/跳转目标后指令多重集相同 | `_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t` |
| statics | DIFF | 180 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN14CNetworkThread8dispatchEPv` |
| statics | DIFF | 437 | 93 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=437 canonΔ=93）。未看到改返回值或改调用目标的证据 | `_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics` |
| statics | DIFF | 211 | 27 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc` |
| statics | DIFF | 203 | 49 | `SEM_DIFF` | leftover 写字段 `0xe` vs `0x1a`，包内位移不一致 | `_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler` |
| statics | DIFF | 33 | 13 | `SEM_DIFF` | leftover 步长 `$0x10` vs `$0x18/$0x1c` | `_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic` |
| statics | DIFF | 32 | 16 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=32 canonΔ=16）。未看到改返回值或改调用目标的证据 | `_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler` |
| statics | DIFF | 13 | 7 | `SEM_EQ` | 小 diff（pm=13）：je     <T> \| mov    SLOT(%r),%r \| cmp    $0x2fd,%r \| seta   %al ↔ cmpl   $0x2fd,SLOT(%r) \| jbe    <T> | `_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler` |
| statics | DIFF | 14 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS` |
| statics | DIFF | 193 | 43 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=193 canonΔ=43）。未看到改返回值或改调用目标的证据 | `_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler` |
| statics | DIFF | 129 | 17 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party` |
| statics | DIFF | 93 | 11 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=93 canonΔ=11）。未看到改返回值或改调用目标的证据 | `_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info` |
| statics | DIFF | 95 | 9 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item` |
| statics | DIFF | 52 | 20 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=52 canonΔ=20）。未看到改返回值或改调用目标的证据 | `_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler` |
| statics | DIFF | 121 | 31 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=121 canonΔ=31）。未看到改返回值或改调用目标的证据 | `_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler` |
| statics | DIFF | 355 | 13 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=355 canonΔ=13）。未看到改返回值或改调用目标的证据 | `_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics` |
| statics | DIFF | 86 | 16 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=86 canonΔ=16）。未看到改返回值或改调用目标的证据 | `_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler` |
| statics | DIFF | 13 | 7 | `SEM_EQ` | 小 diff（pm=13）：je     <T> \| mov    SLOT(%r),%r \| cmp    $0x2fd,%r \| seta   %al ↔ cmpl   $0x2fd,SLOT(%r) \| jbe    <T> | `_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler` |
| statics | DIFF | 125 | 11 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac` |
| statics | DIFF | 85 | 7 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job` |
| statics | DIFF | 15 | 7 | `SEM_EQ` | 小 diff（pm=15）：je     <T> \| mov    SLOT(%r),%r \| cmp    $0x17d,%r \| seta   %al ↔ cmpl   $0x17d,SLOT(%r) \| jbe    <T> | `_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler` |
| statics | DIFF | 81 | 7 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party` |
| statics | DIFF | 13 | 7 | `SEM_EQ` | 小 diff（pm=13）：je     <T> \| mov    SLOT(%r),%r \| cmp    $0x263,%r \| seta   %al ↔ cmpl   $0x263,SLOT(%r) \| jbe    <T> | `_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler` |
| statics | DIFF | 12 | 2 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh` |
| statics | DIFF | 11 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler` |
| statics | DIFF | 51 | 13 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=51 canonΔ=13）。未看到改返回值或改调用目标的证据 | `_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader` |
| statics | DIFF | 11 | 1 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler` |
| statics | DIFF | 519 | 125 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=519 canonΔ=125）。未看到改返回值或改调用目标的证据 | `_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct` |
| statics | DIFF | 81 | 23 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=81 canonΔ=23）。未看到改返回值或改调用目标的证据 | `_ZN17FrameLagCollector18FrameLagDataStruct4initEv` |
| statics | DIFF | 168 | 30 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=168 canonΔ=30）。未看到改返回值或改调用目标的证据 | `_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec` |
| statics | DIFF | 96 | 22 | `SEM_EQ_SHAPE` | PATH_EQ；leftover 是栈帧/局部槽/布尔物化/寻址形态（pm=96 canonΔ=22）。未看到改返回值或改调用目标的证据 | `_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add` |
| statics | DIFF | 35 | 3 | `SEM_EQ` | leftover 只有 lea/add、极性翻转、nop、栈帧、__FUNCTION__ 字符串 | `_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler` |

## 分服务计数

| 服务 | SEM_EQ | CLAMP | EH | FOLD | SHAPE | DIFF | 合计 |
|---|---:|---:|---:|---:|---:|---:|---:|
| dbmw | 60 | 0 | 0 | 0 | 28 | 6 | 94 |
| guild | 46 | 2 | 3 | 0 | 39 | 7 | 97 |
| monitor | 58 | 0 | 7 | 1 | 41 | 5 | 112 |
| statics | 16 | 0 | 0 | 0 | 13 | 2 | 31 |

