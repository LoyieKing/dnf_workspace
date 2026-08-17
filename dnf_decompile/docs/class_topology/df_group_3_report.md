# df_game_r G3 组拓扑还原报告（PVP 对战域）

数据来源：/tmp/df_group_3_classes.txt（101 个类路径）、/tmp/df_core_classes.txt、/tmp/df_class_methods.txt、/tmp/df_syms_demangled.txt、/tmp/df_text_disasm.txt、/tmp/packet_master_corpus.txt（反编译语料）、df_game_r 二进制。
方法：以 demangled 符号签名为主要证据，关键依赖用反汇编 call 目标交叉验证；语料中出现的源码文件名（如 Assault.cpp、InterDispatcherEvent.cpp）作为辅助证据。无直接证据处一律标注"推断"。

## 1. 核心类深挖（≥20 符号，共 15 个）

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---|---|---|---|---|
| PvP_Room | 130 | PvP 对战房间本体（状态机/座位/队伍/结果结算），池化分配（StaticPool<PvP_Room,600>），内嵌接力赛与死亡竞赛两个战斗管理器 | create_room / join_room / leave_room / set_seat_state / start_pvp / end_pvp / end_pvp_result / pvp_reward / CalcuateVictoryPoint / CalculateVictoryPointOfSinglePlay / CalculateVictoryPointOfTeamPlay / check_winner / update_pvp_point / pvp_request_pvp_rank / recv_pvp_rank_all / SetPVPResult / change_manager_to_winner / vote_lack_user / check_acquire_guild_point / CheckPassword / SelectRandomMap | CUser、CUserCharacInfo、CGameManager、CRelayBattleMgr、CDeathMatchBattleMgr、PvpUserTable、RefPvpGrade、PvP_GuildWar_Log、PacketGuard/InterfacePacketBuf、GameWorld、CDataManager、PvpResultRecvFlag | PvP 房间/对战结算/排行榜同步 | 高 |
| pvp_assault::CAssaultPlace | 109 | 势力战（PowerWar）内的"突袭战"场景：双人/小队 1v1 P2P 突袭的完整状态机（约战、加载、P2P 连接、战斗、结算、逃跑、奖励），池化分配（StaticPool<CAssaultPlace,128>） | StartAssault / EndAssault / CloseAssault / ConnectP2P / DoConnectP2P / CompleteLoad / DieUser / RevivalUser / EvadeAssaultPlace / LeaveAssaultPlace / _MakeUserInfo / _MakeStartAssault / _ProcessChaos / _SendPowerWarPointToGuildServer / _SendHoldVictory / _VictoryBonus / _BackupPartyInfo / _SeparateTeam / _ChangeDieState / _SendUserUdpIpPort | CUser、CParty、CAssaulter（内嵌数组，0x20/元素）、pvp_assault::PartyInfo、CDisposition 族（布置矩阵）、CCandidateMatrix/CExtraMatrix、CPowerManager、PacketGuard、CUserCharacInfo、cUserHistoryLog | 势力战-突袭战 | 高 |
| fair_pvp::CFairMatch | 82 | 公平 PvP（公平 3v3 / 校际赛）匹配管理器，IMatch 实现；含 ELO 评分、练习印章奖励、重赛（rematch）、禁装备检查 | OnRegisterMatch / _RegisterWaitingRoom / OnMatchRoom / _MakeRoom / _PutInRoom / _UpdateRating / UpdateScore / GiveTrainingSeal / CheckUnusableEquipmentInUser / OnAskRematch / OnEndPvPResult / _CheckMovableRoom / _ChangeTeamLeader / CheckMatchable / RequestMap | IMatch（基类）、PvP_Room、CMultiMatchRoomList、fair_pvp::TeamInfoThird、fair_pvp::PlayerInfoThird、CFairPvPScore、CEloRating、CUser、CUserCharacInfo、PvPGlobalEnvironmentVariable、PacketGuard | PvP 匹配-公平 PvP | 高 |
| WarRoom | 75 | 公会战房间（40 间池化）：状态机、战场内击杀/掉落/复活/疲劳/换房主、公会 FP 结算与排行榜结果 | Create / Open / Prepare / Start / Join / SetSlotState / ChangeState / HandleDieCharacer / HandleMonsterKill / HandleGetItem / HandleItemDrop / HandleWpPerMonster / CalcGuildFP / SendGuildFP / ReviveUserByCoin / CheckFatuigue / HostChangeWarRoom / HandleTimerTimeBomb / HandleTimerResultCount | CUser、CUserCharacInfo（DecreaseWarPoint/WarAreaKill/GetFinishPointTotal）、WarField（G2 战场图）、CDungeon、CInventory、Inven_Item、CDataManager、TimerQueue、GameWorld、CValueStatistic、WongWork::CHackAnalyzer | 公会战 | 高 |
| pvp_assault（命名空间） | 66 | 命名空间级符号聚合，非类：ASSAULT_RECT_ICON_POINT/ASSAULT_RECT_PLAYER_POINT 常量（矩形区域点位）、单例访问器 GetInstanceAssaultMgr / GetInstanceAssaultPlaceFactory、GetDirectionByTeam、IsIncludeVirtualMoveAreas 及 Point2d/CandidatePoint 等类型引用 | GetInstanceAssaultMgr / GetInstanceAssaultPlaceFactory / GetDirectionByTeam / GetDistance / IsIncludeVirtualMoveAreas | CAssaultMgr、CAssaultPlaceFactory、Point2d、CandidatePoint | 势力战-突袭战（工具/常量） | 高 |
| online_preliminary::COnlinePreliminary | 65 | 线上预选赛匹配管理器（IMatch 实现）：2v2 队伍制、ELO 评分、与特定对手的对战次数、胜/负计数、每日重置、数据库持久化 | OnRegisterMatch / _RegisterWaitingRoom / OnMatchRoom / _MakeRoom / _UpdateRating / _GetRating / _IncreaseWinCount / _IncreaseLoseCount / _GetEachOtherPlayCount / _IncreaseEachOtherPlayCount / _CheckObserver / _CheckSameTeam / CheckUnusableEquipmentInUser / _SendMatchStatePacket | IMatch（基类）、PvP_Room、CLeagueMatchRoomList、TeamInfoSecond、COnlinePreliminaryTeam、CUserCharacInfo（SetCurCharacOnlinePreliminaryTeam）、CUser、CEloRating | PvP 匹配-线上预选赛 | 高 |
| CLeagueMatch | 53 | 校际联赛匹配管理器（IMatch 实现）：按学校分组匹配、徽章奖励、等待房间注册/计数、验证权限 | CheckJoinable / CheckMatchable / CheckSeat / OnRegisterMatch / _RegisterWaitingRoom / _CheckSchool / _getSameSchool / OnMatchRoom / _MakeRoom / _PutInRoom / addBadge / OnReward / GetGap / _SendMatchStatePacket / RequestMap | IMatch（基类）、PvP_Room、CLeagueMatchRoomList、TeamInfo、CUser（GetSchoolNo/GetDailyBadge）、RDARScriptStringManager、PacketGuard | PvP 匹配-校际联赛 | 高 |
| IMatch | 39 | PvP 匹配抽象接口（纯虚/空实现），全部为弱符号；定义匹配生命周期回调协议（注册/取消、进房/出房、开战/结束、奖励、重赛、P2P 超时等），由 CMatchingSystem::GetMatchingSystem 按 ENUM_PVP_MATCHING_TYPE 分派到各实现 | OnRegisterMatch / OnUnregisterMatch / OnMatchRoom / OnEndFight / OnReward / OnAskRematch / OnEndPvPResult / CheckMatchable / GetGap / GetUser / GetUserList / SetNextMatch / OnConnectP2P | PvP_Room、CUser、CWaitingRoomList（G1）、CMultiMatchRoomList（G2）、CLeagueMatchRoomList | PvP 匹配框架 | 高 |
| pvp_assault::CAssaultMgr | 38 | 突袭战全局管理器（单例）：突袭请求/费用、战场分配（ID 生成）、P2P 连接与超时、幽灵时间通知、房间关闭/强制移动、日志计数 | OnRequestAssault / AvailableAssault / GetRequestAssaultNeedMoney / _GetNextAssaultPlaceId / _GetAssaultPlace / OnConnectP2P / OnTimeoutConnectP2P / OnCompleteLoad / OnDieUser / OnRevivalUser / FrocedCloseAssaults / ForcedMoveAtPowerWarPlace / check_party_teleport_user / NotifyGhostTime / SetAssaultChannel | CAssaultPlace、CAssaulter、CUser、CUserCharacInfo、CPowerManager、CParty、expert_job::CAlchemist、CPowerWarLog | 势力战-突袭战 | 高 |
| CRelayBattleMgr | 27 | 接力赛（Relay Battle）战斗规则管理器：选手出场顺序（随机/变更序列）、回合切换、击杀统计；由 PvP_Room 内嵌持有（this+0x620） | SetParent / OnCreateRoom / OnJoinRoom / OnLeaveRoom / OnChangeTeam / OnReady / OnStart / OnFight / OnDiePlayer / TurnPlayer / GetNextPlayer / ArrangeMatchSequence / ArrangeChangeSequence / ArrangeNoChangeSequence / CreateRandomSequenceVector / GetAllKillUserIndex / SendRequestFight | PvP_Room、CUser（间接）、TimerQueue（推断，计时按键）、std::vector<int> | PvP 战斗模式-接力赛 | 高 |
| pvp_assault::CAssaulter | 24 | 突袭战单玩家状态（战场内 0x20 字节槽位）：绑定 CUser、队伍归属、HP、P2P 地址、死亡/放弃惩罚、势力战胜者标记 | AttachUser / DetachUser / _PrepareAssault / SetUserConnectP2P / ChangeHp / DieUser / GiveupPanalty / IsPowerWarWinner / SetPowerWarWinner / GetUserUniqueId / GetCharacName | CUser、ENUM_ASSAULT_TEAM、ENUM_ASSAULT_STATE | 势力战-突袭战 | 高 |
| online_preliminary::COnlinePreliminaryTeam | 24 | 线上预选赛队伍数据（600 队池化，CTeamFactory 分配）：队伍名/ID、ELO 评分、胜负计数、与对手队伍对战次数、每日重置与 DB 读写；CUserCharacInfo 持有当前队伍指针 | saveData / loadDataPreliminaryTeam / loadDataPreliminaryTeamMatchList / _saveTeam / _saveTeamMatchList / ResetDailyMidnight / IncreaseWinCount / IncreaseLoseCount / IncreaseEachOtherTeamPlayCount / SetRating / GetTeamId / GetTeamName | COnlinePreliminary、CUserCharacInfo、CDataManager（DB 读写，推断）、StaticPool/CTeamFactory | PvP 匹配-线上预选赛数据 | 高 |
| fair_pvp::CFairPvPScore | 23 | 公平 PvP 个人成绩数据（随 CUser 读写）：按职业键（JobKey）统计游玩次数、训练印章/奖励计数、每日重置 | loadData / _saveData / _reset / ResetDaily / UpdateScore / GetDailyPlayCount / SetDailyPlayCount / GetLastTrainingSealCount / GetLastTrainingSealBonusCount / GetRemainBonusCount / SetGiveItem / MakePacketSocre | CUser、CDataManager（DB 读写，推断）、std::map<JobKey, FAIR_PVP_SCORE_MODE_COUNT>、ENUM_CHARACTERJOB | PvP 匹配-公平 PvP 数据 | 高 |
| CDeathMatchBattleMgr | 23 | 死亡竞赛（Death Match，个人/团队）战斗规则管理器：击杀/死亡计数、游戏结束判定、胜负判定、排名与复活计时；由 PvP_Room 内嵌持有（this+0x69c） | SetParent / OnCreateRoom / OnJoinRoom / OnLeaveRoom / OnChangeTeam / OnReady / OnStart / OnFight / IncreaseKillCount / IncreaseDeathCount / InsertTimerKilledUserForRevive / checkGameOverForSinglePlay / checkGameOverForTeamPlay / checkWinnerForSinglePlay / checkWinnerForTeamPlay / getRanking / getKillCount / getDeathCount / getMaxKillCount | PvP_Room、PvpUserTable、CUser（数组）、TimerQueue | PvP 战斗模式-死亡竞赛 | 高 |
| PvpUserTable | 22 | PvP 积分/胜负结算查表：段位过滤、预期值、队 vs 队/幽灵 vs 队/用户 vs 队积分、逃跑惩罚；死亡竞赛胜负判定中按表计算 | Set / Calculate / GetExpectVal / GetResult / GetTeamVsTeamPoint / GetGhostVsTeamPoint / GetUserVsTeamPoint / GetLeavePenalty / GradeFilter / CheckDan / IsValidTeam / GetWinTeam / SetWinTeam | CUser、CDeathMatchBattleMgr | PvP 结算 | 高 |

## 2. 长尾类（<20 符号，逐类一句话作用）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| fair_pvp | 17 | fair_pvp 命名空间级符号（maxRematchCount_ 常量、JobKey 引用），非类 | 高（非类） |
| RefPvpGrade | 17 | PvP 段位/等级参考表运行时容器：按等级取积分、排名点阈值、PVP 经验惩罚（GlobalData::s_ref_pvp_grade 全局实例），set(stPvpRefTable_t) 装载脚本表 | 高 |
| PvP_MissionSystem | 17 | PvP 每日任务系统：脚本装载（MissionScript/MissionParameterScript）、按种类/等级生成每日任务、基础任务经验表、PVP 任务工厂 | 高 |
| CPowerWarLog | 16 | 势力战突袭统计日志：突袭尝试/成功/失败、P2P 不良/超时计数、进出场人数，PrintPowerWarAssultReport 输出报表；由 CPowerManager::GetPowerWarLog() 持有 | 高 |
| stPvpRefTable_t | 13 | PvP 等级表原始结构（内含 stPvPGradeExp_t 向量：等级/经验对），供 RefPvpGrade 装载；符号多为 std::vector 模板实例 | 高（数据） |
| online_preliminary::COnlinePreliminaryMemberMatchList | 12 | 线上预选赛成员间对战次数列表（PeerPlayCount），每日重置 + DB 读写 | 高 |
| online_preliminary::COnlinePreliminaryMember | 12 | 线上预选赛成员个人数据：评分、胜负计数、DB 读写 | 高 |
| online_preliminary::COnlinePreliminaryTeamMgr | 10 | 线上预选赛队伍管理器：按用户查找队伍、进出场事件、队伍信息装载（OnLoadTeamInfo）、每日重置 | 高 |
| LwCallback | 10 | 日志回调封装：setCallback/getCallback/log（Lw=log writer 基础设施） | 中（非 PvP） |
| IntervalSet | 10 | 区间集合运算工具：AddInterval/MinusInterval/GetTotalIntervalSize/Sort（配合 IntersectInterval/IsOverlappedInterval 等自由函数） | 中（基础设施） |
| IPackFileProcess | 10 | 打包文件处理接口（PackSet/IndexEntry 更新回调），静态公共缓冲 s_common_buffer_/s_ref_count_ | 中（基础设施） |
| pvp_assault::CStaticDisposition | 9 | 突袭战静态布置：基于候选矩阵与虚拟地图（MapArea）的固定出生/旗点布置，MoveUser 强制移动角色 | 高 |
| pvp_assault::CCandidateMatrix | 9 | 候选点矩阵：由两角点生成候选点、移除与排序（按 MapArea 过滤） | 高 |
| fair_pvp::TeamInfoThird | 9 | 公平 PvP 三人队伍信息：add/del CUser、队伍评分、打包发送给队伍 | 高 |
| PvP_GuildWar_Log | 9 | 公会战 PvP 日志：写入公会战 PvP 记录（WriteGuildWarPvPLog）、插入公会、起始时间 | 高 |
| InterDispatcher | 9 | 跨服（InterServer）消息分发器：register_dispatcher/get_dispatcher/dispatch（事件源文件 InterDispatcherEvent.cpp） | 高（跨服基础设施） |
| ICryptoGraph | 9 | 加密算法抽象接口（CRYPTO_GRAPH_TYPE），带拷贝/赋值 | 中（基础设施） |
| pvp_assault::Point2d | 8 | 二维坐标点（int,int），运算符 + / += | 高（工具） |
| pvp_assault::CExtraMatrix | 8 | 附加点矩阵：增点/移动点/校验点，用于突袭战强制移动区域 | 高 |
| LwConsole | 8 | 控制台日志：log/isSourcePositionVisible（源码位置开关） | 中（基础设施） |
| LoadServiceRestrictPolicy | 8 | 服务限制策略装载器：发送/分发 Taiwan::SigLoadRestrictPolicy 数据（配合 SecurityRestrictPolicy/AuthMobileRestrictPolicy 等策略类） | 中（跨服/账号策略） |
| LoadGeolocation | 8 | 地理定位数据装载器：发送 Taiwan::SigLoadGeolocation 国家数据 | 中（跨服/账号策略） |
| LevelUpMission | 8 | 英雄任务"升级"条件处理器：processMission/rewardMission（CUser、HeroMissionValue） | 中（任务系统） |
| IChecksum | 8 | 校验和抽象接口（CRYPTO_CHECKSUM_TYPE） | 中（基础设施） |
| LimitItemUsage | 7 | 物品使用限制：isUsable/useIt/isAnotherDay（每日限制） | 中（物品系统） |
| InterLoadServiceRestrictPolicy | 7 | 跨服装载服务限制策略信号 dispatch_sig(CUser*, char*, int) | 中（跨服） |
| InterLoadHeroMissionEventData | 7 | 跨服装载英雄任务事件数据信号 | 中（跨服） |
| InterLoadGeolocation | 7 | 跨服装载地理定位信号 | 中（跨服） |
| InterInsertGiveBoxEventReward | 7 | 跨服插入开箱活动奖励信号 | 中（跨服） |
| IndependentDropListInfo | 7 | 独立掉落列表信息（数据/拷贝） | 中（掉落系统） |
| InGameEventScriptLoader | 7 | 游戏内活动脚本装载器：importInGameEventScript/insertEventScript/getEventScript | 中（活动系统） |
| InGameEventInfo | 7 | 游戏内活动信息（拷贝/赋值） | 中（活动系统） |
| pvp_assault::CAssaultPlaceFactory | 6 | 突袭战场工厂：AcquireAssaultPlace/FreeAssaultPlace（封装 StaticPool<CAssaultPlace,128> 单例） | 高 |
| online_preliminary::CTeamFactory | 6 | 预选赛队伍工厂：Acquire/Free（封装 StaticPool<COnlinePreliminaryTeam,600>） | 高 |
| PvPSkillTreeValue | 6 | PvP 技能树节点值（拷贝构造/析构；由 PvPSkillTreeParameterScript 脚本装载） | 高 |
| LwServerWriter | 6 | 服务器日志写器（ENUM_LOG_TYPE）：log | 中（基础设施） |
| LogManager | 6 | 日志管理器单例：logFormat/logString/pushIndent/popIndent/getLogWriter/setLogWriter（全局被 PvP/WarRoom 等大量调用） | 高（基础设施） |
| LevelUpRewardItemTableKey | 6 | 升级奖励物品表键（int,int,int）+ operator< + clear | 中（升级奖励） |
| ItemFarmingData | 6 | 物品刷取数据（拷贝/析构） | 中（掉落系统） |
| Interval | 6 | 区间（长整型起止）工具类型 | 中（工具） |
| InterfaceServicePolicy | 6 | 服务策略接口基类（RestrictCategory::Enum），getCode | 中（跨服/策略） |
| InterUpdateP2pHolePunchingState | 6 | 跨服更新 P2P 打洞状态信号 dispatch_sig —— P2P 打洞用于 PvP/突袭连接（MSG_P2P_HOLE_PUNCHING_SUCCESS_RATE） | 高（PvP 相关跨服信号） |
| pvp_assault::CandidatePoint | 5 | 候选点（含 operator<，供矩阵排序） | 高（工具） |
| pvp_assault::CDynamicDisposition | 5 | 突袭战动态布置（虚基 CDisposition 派生）：按 MapArea 动态计算移动区域并 MoveUser | 高 |
| online_preliminary | 5 | 命名空间级模板/分配器符号（COnlinePreliminaryTeam*&、CharacterInServer&&、PlayCountInfo&&），非类 | 高（非类） |
| itemData | 5 | 物品数据结构（clear；eventReward::defaultOption/applyItemOption 使用） | 中（物品/活动奖励） |
| PvPSkillTreeKey | 5 | PvP 技能树键（uchar×3）+ operator< | 高 |
| PvPGlobalEnvironmentVariable | 5 | 全局静态配置变量容器（非类）：school_match_daily_point_、school_match_daily_point_weekends_、school_match_elo_k_、school_match_elo_k2_、school_match_fight_count_for_gain_point_（公平 PvP/校际赛 ELO 与积分配置） | 高（非类） |
| LotteryInfo | 5 | 抽奖信息（clear） | 中（活动/抽奖） |
| LogWriter | 5 | 日志写器基类 | 中（基础设施） |
| LimitNpcBuyItem | 5 | NPC 购买限制（基础） | 中（商店系统） |
| LevelUpSkill | 5 | 升级附加技能数据（clear；CSyncScript::GetLevelUpSkill） | 中（装备技能） |
| LevelUpRewardItemData | 5 | 升级奖励物品数据（clear；stLevelUpRewardItemScript 查询） | 中（升级奖励） |
| InGameEventInfoList | 5 | 活动信息列表：insertEventInfo（importInGameEventInfoList 装载，EventScriptMng 使用） | 中（活动系统） |
| ISigDispatcher | 5 | 跨服信号分发器抽象接口（InterDispatcher 注册对象） | 中（跨服基础设施） |
| IRentalMachine | 5 | 租赁机抽象接口（InstanceRentalSystem::registerRentalMachine 注册） | 中（租赁系统） |
| IDispatcher | 5 | 派发器抽象基类（虚析构 + vtable） | 中（框架基础设施） |
| CLeagueMatchRoomList | 5 | 联赛等待房间列表：AddRoom/DelRoom/Match（std::map<IMatch*,int> 遍历配对），CLeagueMatch/COnlinePreliminary 内嵌 | 高 |
| stPvpRefTable_t::stPvPGradeExp_t | 4 | PvP 等级-经验条目（int,uint） | 高（数据） |
| pvp_assault::PartyInfo | 4 | 队伍信息包装：Set(CParty*)/Get（突袭战备份/恢复队伍用） | 高 |
| online_preliminary::PlayCountInfoEx | 4 | 对战次数扩展信息（uint,bool） | 高（数据） |
| online_preliminary::PlayCountInfo | 4 | 对战次数信息（uint,bool） | 高（数据） |
| live_server_info_t | 4 | 直播/PvP 频道信息条目（importPVPChannelList 装载），与 PvP 频道列表相关 | 高 |
| itemGloballyUniqueIdentifier_t | 4 | 物品全局唯一 ID（SetServerId/SetDatetime/SetSequenceNo/reset） | 中（物品系统） |
| ItemAuraInfo | 4 | 物品光环信息（CStringMaker 序列化） | 中（物品系统） |
| online_preliminary::CharacterInServer | 4 | "服务器中的角色"标识（int,uint + operator<，用于跨服预选赛对战配对/查重） | 高 |
| isSameItem | 3 | 物品相同判定函数对象（ulong,uint） | 中（物品系统） |
| fair_pvp::PlayerInfoThird | 3 | 公平 PvP 三人队玩家信息（reset） | 高 |
| fair_pvp::JobKey | 3 | 公平 PvP 评分表键：职业(ENUM_CHARACTERJOB)+子键(uchar)，operator< | 高 |
| JobParty | 3 | 职业队伍数据（Reset；配合 JobKey） | 中（职业/转职系统） |
| JobKey | 3 | 职业键（operator<；CSuccessJobNode::InsertDB 等使用） | 中（职业系统） |
| InventoryMemory | 3 | 背包内存快照（CInventory::SetInventoryMemory 使用，reset） | 中（背包系统） |
| pvp_assault::CDisposition | 2 | 布置虚基类（vtable；CStaticDisposition/CDynamicDisposition 派生） | 高 |
| PvPMapInfo | 2 | PvP 地图信息（默认构造；与 CMapList::GetPVPMapCount 地图池相关，推断） | 中 |
| LogManagerData | 2 | 日志管理器数据（构造） | 中（基础设施） |
| LimitNpcBuyItemUpdate | 2 | NPC 购买限制更新（构造） | 中（商店系统） |
| LimitNpcBuyItemRequestInfo | 2 | NPC 购买限制请求信息（构造） | 中（商店系统） |
| LimitNpcBuyItemInfoAll | 2 | NPC 购买限制全量信息（构造） | 中（商店系统） |
| LimitNpcBuyItemInfo | 2 | NPC 购买限制条目（构造） | 中（商店系统） |
| ImageCommunicationData | 2 | 图片通信数据（importImageCommunicationInfo 装载） | 中（活动/图片素材） |
| IRoomList | 2 | 房间列表抽象接口（vtable 位于匹配相关区域，推测为 CLeagueMatchRoomList/CMultiMatchRoomList 基类） | 中（推断） |
| IData | 2 | 数据抽象接口（构造） | 低（框架） |
| IBusiness | 2 | 业务抽象接口（vtable） | 低（框架） |
| pvp_assault::CForcedMoveCharacter | 1 | 强制移动角色（ForcedMove），供布置矩阵 MoveUser 使用 | 高 |
| less_TCHAR | 1 | TCHAR 字符串 less 比较函数对象（operator()） | 中（工具） |
| IgnoreCaseCompare | 1 | 忽略大小写比较函数对象 | 中（工具） |

## 3. 假类 / 常量 / 枚举组

以下"类"实际是命名空间级符号、全局常量或模板分配器实例，不应作为类拓扑节点：

| 组名 | 符号数 | 内容 | 判定 |
|---|---|---|---|
| pvp_assault | 66 | 常量 ASSAULT_RECT_ICON_POINT（16）、ASSAULT_RECT_PLAYER_POINT（17）——突袭战矩形区域（图标点/玩家点）；单例访问器 GetInstanceAssaultMgr、GetInstanceAssaultPlaceFactory（含 guard variable）；工具函数 GetDirectionByTeam、GetDistance、IsIncludeVirtualMoveAreas；Point2d/CandidatePoint/CAssaultPlace*& 等 std 分配器符号 | 命名空间（含常量/单例访问器），非类 |
| fair_pvp | 17 | maxRematchCount_ 只读常量（多处 rodata 引用）+ JobKey 分配器符号 | 命名空间常量，非类 |
| online_preliminary | 5 | COnlinePreliminaryTeam*&、CharacterInServer&&、PlayCountInfo&&、PlayCountInfoEx&& 等移动/分配器符号 | 命名空间，非类 |
| PvPGlobalEnvironmentVariable | 5 | 全局静态配置：school_match_daily_point_、school_match_daily_point_weekends_、school_match_elo_k_、school_match_elo_k2_、school_match_fight_count_for_gain_point_ | 全局变量容器，非类 |
| stPvpRefTable_t::stPvPGradeExp_t | 4 | 等级-经验结构（int,uint），纯数据（"类"内符号多为 std::vector<stPvPGradeExp_t> 模板实例） | 数据结构，非类 |

枚举/常量值（无符号值，以下为推断）：PVP_BATTLE_MODE（PVP 战斗模式，驱动 CRelayBattleMgr/CDeathMatchBattleMgr 选择）、ENUM_ASSAULT_TEAM（突袭阵营）、ENUM_ASSAULT_STATE（突袭状态）、ENUM_SEAT_STATE（座位状态）、ENUM_WALKOUT_TYPE（离开类型）、WARROOM_STATE（公会战状态机）、ENUM_SCHOOL_MATCH_TEAM（校际赛队伍）、ENUM_ELO_RATING_SYSTEM（ELO 评分制）、ENUM_PVP_MATCHING_TYPE（匹配类型，CMatchingSystem 分派键）、FAIR_PVP_SCORE_MODE_COUNT（评分模式数）、ENUM_POWER_SIDE_TYPE / ENUM_POWER_WAR_WINNER_OR_LOSER（势力战方/胜负）、TIMER_MESSAGE（计时消息键）。

## 4. 模板实例

| 模板实例 | 用途 |
|---|---|
| StaticPool<PvP_Room, 600> | PvP 房间对象池（容量 600），CGameManager 通过 GetPvp/PutPvp 存取 |
| StaticPool<WarRoom, 40> | 公会战房间对象池（容量 40），CGameManager::WarRoomAlloc/GetWarRoom/PutWarRoom 存取 |
| StaticPool<pvp_assault::CAssaultPlace, 128> | 突袭战场对象池（容量 128），CAssaultPlaceFactory（单例）封装 |
| StaticPool<online_preliminary::COnlinePreliminaryTeam, 600> | 预选赛队伍对象池（容量 600），CTeamFactory 封装（同池 600 与 PvP_Room 相同模板参数） |
| std::multimap<float, IMatch*, std::less<float>> | CWaitingRoomList::doMatch 按评分差距（GetGap）排序等待房间 |
| std::map<int, CWaitingRoomList> | CMultiMatchRoomList 按队伍规模/模式分组的等待列表 |
| std::map<IMatch*, int> | CLeagueMatchRoomList 等待房间表 |
| std::map<fair_pvp::JobKey, FAIR_PVP_SCORE_MODE_COUNT> | CFairPvPScore 按职业键统计游玩/奖励次数 |
| std::vector<pvp_assault::Point2d> / std::vector<pvp_assault::CandidatePoint> | 突袭战布置矩阵点集 |
| std::vector<CUser*> / std::vector<IMatch*> | 队伍成员列表 / 匹配组合列表 |

## 5. 核心类依赖关系速览

```
CMatchingSystem::GetMatchingSystem(ENUM_PVP_MATCHING_TYPE)  ── 工厂分派 ──┐
    (单例，PvP_Room::create_room 中调用)                                  │
    ├─ CNormalMatch (G1) / CLadderMatch (G1) / CTournamentMatch (G1)      │  ─┐
    ├─ fair_pvp::CFairMatch ──IMatch── CMultiMatchRoomList                │   │ 匹配
    ├─ CLeagueMatch ──IMatch── CLeagueMatchRoomList                       │   │ 流程
    └─ online_preliminary::COnlinePreliminary ──IMatch── CLeagueMatchRoomList ─┘
                          │
   CWaitingRoomList::doMatch(multimap<float,IMatch*>) → TimerStartMatching
                          → CGameManager::GetPvp → PvP_Room::OnMatchRoom → _MakeRoom → _PutInRoom

PvP_Room（130）
  ├─ CUser：SetPvpIndex/GetPVPRoom/CheckInPvp/SetPvpRecord/update_pvp_rank/givePvPSkillTree/GetServerGroupToPvP
  ├─ CUserCharacInfo：get_pvp_grade/getPVPResultRefR/get_pvp_result_oldexp_point/get_charac_guildkey
  ├─ 内嵌 CRelayBattleMgr(+0x620)、CDeathMatchBattleMgr(+0x69c)（按 PVP_BATTLE_MODE 分工）
  ├─ CGameManager：GetPvp/PutPvp/GetPvpIdx/CheckOutPvp/SendPvpList
  ├─ PvpUserTable（积分表）、RefPvpGrade（段位表）、PvP_GuildWar_Log/STPvPGuild（公会战 PvP 日志）
  └─ 排行：pvp_request_pvp_rank/recv_pvp_rank_all/GetRanking + CUser::update_pvp_rank
  （PvP_Room 不直接调用 CParty；队伍信息经 CUser::GetUserListByParty 间接获取）

CParty ↔ PvP：CParty::send_invite_pvp / send_invite_warroom（CParty 侧，G2）
  ├─ pvp_assault::CAssaultPlace::_BackupPartyInfo(CParty*, ENUM_ASSAULT_TEAM)、PartyInfo::Set(CParty*)
  └─ pvp_assault::CAssaultMgr::check_party_teleport_user（突袭时传送队伍成员）

WarRoom（75）──CGameManager（WarRoomAlloc/GetWarRoom/PutWarRoom/FindJoinableWarRoom/SendWarRoomList）
  ├─ WarField（G2，战场地图/怪/掉落）、CDungeon、CInventory、CDataManager
  └─ CUserCharacInfo（DecreaseWarPoint/WarAreaKill/GetFinishPointTotal）、CUser::gainGuildSkillExp、TimerQueue

pvp_assault 域（突袭战/势力战）：
  CAssaultMgr（单例）→ CAssaultPlace（池 128）→ CAssaulter[]（0x20 槽位）→ CUser
  CAssaultPlace ──CPowerManager（势力战开关/点数/排行）── CUserCharacInfo（IncPowerWarAssaultCount...）
  CAssaultPlace ──CDisposition(CStatic/CDynamic)──CCandidateMatrix/CExtraMatrix/Point2d──CForcedMoveCharacter
  CAssaultMgr/CAssaultPlace ──CPowerWarLog（统计）

匹配数据/配置：
  fair_pvp：CFairMatch → CFairPvPScore(map<JobKey,FAIR_PVP_SCORE_MODE_COUNT>) + TeamInfoThird/PlayerInfoThird + CEloRating + PvPGlobalEnvironmentVariable
  online_preliminary：COnlinePreliminary → COnlinePreliminaryTeam(池600)/CTeamFactory → Member/MemberMatchList/PlayCountInfo(Ex)/CharacterInServer + CUserCharacInfo(SetCurCharacOnlinePreliminaryTeam)
  CLeagueMatch：→ TeamInfo + CUser::GetSchoolNo/GetDailyBadge + addBadge(PlayerInfo*, ENUM_BADGE_TYPE,...)
```

跨域误分组说明：Lw*/LogManager/LogWriter、IPackFileProcess、ICryptoGraph/IChecksum、InterDispatcher/InterLoad*/InterInsert*/InterUpdateP2P、LoadServiceRestrictPolicy/LoadGeolocation/InterfaceServicePolicy、LevelUp*/Limit*/InGameEvent*/LotteryInfo/ItemFarmingData/IndependentDropListInfo/InventoryMemory 等类路径虽被划入 G3，但按符号证据属于服务器基础设施/跨服消息/活动与物品系统，与 PvP 对战域无直接关系（InterUpdateP2pHolePunchingState 除外——它与 PvP/突袭的 P2P 打洞直接相关）。

## 6. 关键推断与存疑点

- fair_pvp 的"公平 PvP"与校际赛（school match）配置共用（ENUM_SCHOOL_MATCH_TEAM、PvPGlobalEnvironmentVariable 的 school_match_* 变量、GiveTrainingSeal 训练印章奖励），判定其为同一子系统的不同表述，置信度中-高。
- COnlinePreliminary 使用 TeamInfoSecond（2 人队）、fair_pvp 使用 TeamInfoThird（3 人队）、CLeagueMatch 使用 TeamInfo（多队），据此推断队伍规模差异（线上预选赛 2v2、公平 PvP 3v3），置信度中（类名推断）。
- WarField（G2，17 符号）为 WarRoom 的战场地图/实体容器，WarRoom 通过 call 目标直接依赖它，此处仅作为 G3 依赖关系引用。
- PvP_MissionSystem 的 Factory(MissionScript const&) 与 copy_missionParameter(MissionParameterScript const&) 表明它消费英雄任务脚本系统（MissionScript 为 G1/G2 域），作为 PvP 每日任务层叠加在通用任务框架之上，置信度中。
- IPackFileProcess/ICryptoGraph/IChecksum/IData/IBusiness 等仅有构造/析构/虚表符号，无法确认具体实现，作用描述为中/低置信度推断。
