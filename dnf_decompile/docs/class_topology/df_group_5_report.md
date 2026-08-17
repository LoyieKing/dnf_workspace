# df_game_r 类拓扑还原报告 — G5「数据 / 配置 / 脚本 / DB 域」

分析对象：`/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/init/df_game_r`
组内类总数：774（df_group_5_classes.txt）。仅分析，未改动任何源码。

## 0. 概览与分类统计

| 类别 | 数量 | 说明 |
|---|---|---|
| DB_*（含 DBUpdate/DBSelect/DBInsert 无下划线变体） | 约 330 | DBThread 任务分发类家族，见 §2 |
| Packet_* / PCK_AUCTION_* | 193 | 协议结构体 / 拍卖包常量（多为假类），见 §5 |
| TiXml* | 14 | TinyXML 第三方 DOM，见 §6 |
| 其他（脚本表、工具、命名空间、数据结构） | 244 | 见 §1 核心表与 §4 长尾表 |

核心类清单（df_core_classes.txt 中 G5 前缀）共 30 个：CDataManager(159)、CEnvironment(62)、GlobalData(93)、DB_Login(80)、DB_LoadEtc(70)、MySQL(63)、DB_LoadInventory(28)、DB_CreateCharac(35)、np_server_xml(290)、StringDictionary(30)、TiXmlDocument(32)、CompiledDNFLex(33)、STItemScript::SEXPERTJOB(33)、ARAD::SCRIPT(39)、Arad_Script(40)、ServerParameterScript(40)、TiXmlElement(42)、TiXmlNode(45)、STExpertJobScript(48)、TiXmlBase(23)、CLog(23)、RDARScriptStringManager(24)、ARAD::DATABASE(25)、CountryCode(25)、HistoryLog(26)、IndexEntry(26)、ARAD::Arad_DB_Charac_Dispatcher(20)、DBMgr(20)、createChracScript(20)、ARAD::DATABASE::LOGIN_QUERY(22)。

## 1. 核心类深挖

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---|---|---|---|---|
| GlobalData | 93 | 服务器全局单例池：几乎所有线程、代理、管理器、内存池的命名空间级指针（s_db_mgr/s_db_thr/s_accept_thr/s_msgq_mgr/s_*_proxy 等）；Init/Fini 即全服启停 | Init, Fini, GenerateCaptchaData, InitCaptcha, initTournamentDB, setCurrentPacketPool | DBMgr、DBThread、MsgQueueMgr、各 CServerProxyMgr、CStreamPool、CRijndael、CMonitorServerProxy 等 | 服务器引导 / 全局状态 | 高 |
| CEnvironment | 62 | 服务器配置文件解析（parse/parse_se_event_db/DecryptValue）与访问；提供全部 IP/端口/服务器组/频道号/运营类型 getter；GlobalInstance 单例 | load, parse, lock, unlock, DecryptValue, get_server_group, get_channel_no, get_tcp_port, get_*_ip, set_* | （无强依赖，被全服引用） | 配置 | 高 |
| CDataManager | 159 | 全服数据仓库单例：初始化 RDARScript 脚本包（InitRDARScript + 各 Init*Script），持有全部 ST*Script 表与活动表；提供 find_item/map/monster/npc/quest/skill、经验曲线、PvP 参数、掉率、活动物品等大量 getter 与 Verify 校验 | init, destroy, GetScriptPacks, SetScriptPacks, find_item, find_map, find_npc, get_exp_level, get_*_script, Verify, VerifyMap, VerifyDungeon, load_map_files, setExpRate, setItemDropRate | Arad_Script、ST*Script 全家族、RDARScriptStringManager、CEnvironment、sync_script | 数据域核心 | 高 |
| MySQL | 63 | libmysqlclient 的 C++ 封装：连接/查询/结果集类型化访问器，转义、二进制、查询计数器挂钩 | init, open, close, exec, exec_query, select, insert, update, escape_string, get_int/get_str/get_binary/get_float/get_longlong, fetch, set_query, GetQueryString, SetQueryCounter | libmysqlclient、CQueryCounter | DB 访问层 | 高 |
| DBMgr | 20 | MySQL 连接池：按 ENUM_DB_HANDLE_IDX × ENUM_SERVER_GROUP 打开/缓存句柄，setUserIdx 按用户分库，激活全局库 | Open, Close, GetDBHandle, GetDBHandleServerGroup, GetServerType, addUserDBInfo, setUserIdx, SetQueryCounterPointer | MySQL、CQueryCounter | DB 访问层 | 高 |
| DB_Login | 80 | 登录 DB 任务：解析 SIG_LOGIN_DATA，做账号/惩罚/密保卡/PassPad/事件查询与登录时间记录，SendResult 回游戏线程 | dispatch, GetAccountInfo, GetPunishUserInfo, SaveLoginTime, UpdateLoginStat, GetPremiumInfo, GetSchoolName, IsPCRoomIP, _DecryptUserInfo, _getPassPadInfo, _isPunishedHackUser | DBDispatcher/DBTask、MySQL、DBMgr、ARAD::DATABASE::LOGIN_QUERY、Stream | DB 家族 / 登录 | 高 |
| DB_LoadEtc | 70 | “加载杂项”DB 任务：登录后批量加载技能/称号/成就/任务商店/公会/活动等 Load* 方法 | dispatch, SendResult, GetUserSkill, GetUserPvp, LoadTitleBook, LoadAchievement, LoadQuestShop, LoadFairPvPScore, LoadComboSkill, _loadNPCRelasionship | DBDispatcher、MySQL、SIG_LOAD_ETC | DB 家族 / 角色加载 | 高 |
| DB_CreateCharac | 35 | 建角色 DB 任务：重名/限建检查，创建 stat/equip/inven/skill/pvp/quest/dungeon/NPC 关系 | dispatch, CreateNewCharac, CheckLimitCreateNewCharac, MakeInsertCharacInfo, CreateEquip, CreateInventory, CreatePvP, CreateSkill, SendResult | DBDispatcher、MySQL、ARAD::DATABASE::CREATE_QUERY、ARAD::Arad_DB_Charac_Dispatcher | DB 家族 / 建角色 | 高 |
| DB_LoadInventory | 28 | 加载背包/装备/装扮/宠物/物品锁（含中国服分支 SendResult_forchina） | dispatch, GetUserInven, GetUserAvatar, GetUserCreature, GetItemLock, _GetUserAvatar, _getCharacInvenExpand | DBDispatcher、MySQL、SIG_LOAD_INVENTORY | DB 家族 / 物品 | 高 |
| ARAD::DATABASE | 25 | ARAD 数据库 schema 命名空间：sourceInvenSize/sourceEquipSize 等容量常量，挂载 LOGIN_QUERY/CREATE_QUERY/ITEM_QUERY 三个存储过程包装子命名空间 | sourceInvenSize, sourceEquipSize, sourceCreatureSize, sourceCargoSize, sourceJewelSize（常量） | MySQL、SIG_* 结构体 | DB 家族 / ARAD schema | 高 |
| ARAD::DATABASE::LOGIN_QUERY | 22 | 登录相关 arad_sp_* 存储过程包装（选账号、会员、惩罚、事件、PassPad 转换等） | arad_sp_select_account_info, arad_sp_select_member_premium, arad_sp_load_event_entry, arad_sp_select_punish_user_info, arad_sp_convert_pass_pad_info, arad_sp_update_history | MySQL、SIG_LOGIN_DATA、DB_Login::tagDNFEventEntry | DB 家族 / 存储过程 | 高 |
| ARAD::DATABASE::CREATE_QUERY | 18 | 建角色 arad_sp_create_* 存储过程包装（character/stat/equip/inven/skill/pvp/quest/dungeon/npc_relationship） | arad_sp_create_character, arad_sp_create_charac_stat, arad_sp_create_equip, arad_sp_create_inven, arad_sp_charater_name_check | MySQL、SIG_CREATE_CHARAC | DB 家族 / 存储过程 | 高 |
| ARAD::DATABASE::ITEM_QUERY | 2 | 物品相关存储过程包装 | arad_sp_buy_item_check | MySQL、ARAD_DATAS::BuyItemInfo | DB 家族 / 存储过程 | 高 |
| Arad_Script | 40 | 经典 AradScript 表加载器：Load 打开 .rs 表文件，按 (行,列) 取 int/string/float；Create 分配表空间 | Load, Create, GetInt, GetString, GetFloat, SetInt, SetString, GetRowNum, ExpandRow, ExpandCol, make_file_path | FILE*、StringDictionary（字符串段） | 脚本系统 / 表读取 | 高 |
| ServerParameterScript | 40 | 服务器参数表（ServerParameterScript.rs）：全局可调参数与开关 | GetExpBonusWeight, GetPvPPenaltyRevision, GetPvPChannelGradePenalty, GetLottoCost, GetJackpot, getLuckPoint, checkAssaultServer, setDungeonOpen, CheckLightServer | Arad_Script / ST*Script 工具链 | 脚本系统 / 参数 | 高 |
| STExpertJobScript | 48 | 专家职业（炼金/附魔/人偶/分解）参数脚本表及嵌套结果结构 | GetAlchemistExtractionResultInfo, GetEnchanterExtractionPossibleLevel, GetDollControllerResultInfo, GetRecipeInfo, GetCompoundRate, GetUpgradeCost, GetMonsterCardBindRate | Arad_Script、STExpertJobScript::st*ResultInfo | 脚本系统 / 专家职业 | 高 |
| STItemScript::SEXPERTJOB | 33 | 物品脚本表中专家职业子表：SUSABLE（可铸造状态）、附加经验、合成结果变异 | SEXPERTJOB, SUSABLE, operator= | STItemScript | 脚本系统 / 专家职业 | 中高 |
| ARAD::SCRIPT | 39 | ARAD 活动脚本命名空间：时间结构 SEventPeriodData/SRewardPeriodData、readTime/uint32Time 辅助、importAradEventScript；含 AvatarRecharge、EmblemCompound、AvatarFixedHiddenOption、AradJumping_Script 子类 | importAradEventScript, readTime, uint32Time, SEventPeriodData, SRewardPeriodData | Arad_Script、ST* 工具链 | 脚本系统 / 活动 | 高 |
| CompiledDNFLex | 33 | 编译态（token 流）脚本 lexer：从预编译流取 token/int/str/float，挂字符串管理器 | create, destroy, getToken, getInt, getStr, getFloat, getStringManager, setStringManager, GetOffset, isEnd, stream_t | FlexLexer、StringDictionary/RDARScriptStringManager | 脚本系统 / lexer | 高 |
| StringDictionary | 30 | 脚本字符串字典：add/freeze/get 排序查找，脚本字符串段的运行时表示 | add, addString, freeze, get, getKey, getValue, setValue, getCount, StringEntity | StringEntity（内部结构） | 脚本系统 / 字符串 | 高 |
| IndexEntry | 26 | 脚本包索引条目：crc/offset/size/type，读写加密内容（get_contentEncryptedFile），内存/文件更新 | read_info, write_info, get_content, get_contentEncryptedFile, update_content_from_file, update_content_from_memory, crc | IMethod（加密）、FILE* | 脚本系统 / 打包格式 | 高 |
| HistoryLog | 26 | 玩家历史动作日志：按日 LogOpen/LogClose，20+ 种 Write* 事件写盘（买/卖/杀怪/升级/交易/聊天等） | Init, LogOpen, LogClose, WriteBuyItem, WriteSellItem, WriteKillMob, WriteLevelUp, WriteChat, WriteTradeUp, WriteDie | _IO_FILE | 日志 | 高 |
| CountryCode | 25 | 国家/地区枚举包装：korea/japan/china/taiwan/usa/none/global + 两位 alpha 码转换 | getInternalValue, setInternalValue, getAlpha2Code, getAlpha2CodeByte, getCountryName, isNone | （枚举类） | 配置 / 常量 | 高（枚举为主） |
| RDARScriptStringManager | 24 | RDAR 脚本字符串段管理器：加载/写出字符串文件、标签替换、变更查找 | loadStringFile, writeStringFile, getTagSizeInFile, changeSpacilTagStr, findChangedString, setTableValue, release | std::istream、ErrorLog | 脚本系统 / 字符串工具 | 高 |
| CLog | 23 | 全局日志单例：多通道（debug/error/money/history/snapShot），按日分文件 | createInstance, destroyInstance, instance, logDebug, logError, logMoney, logHistory, logToFile, logToInitFile, openLogFile | _IO_FILE | 日志 | 高 |
| createChracScript | 20 | 建角色奖励脚本数据：rewardInfo / rewardInfoList 映射（角色创建赠送） | rewardInfo, rewardInfoList, operator= | std::map<int, rewardInfoList> | 脚本系统 / 建角色 | 中 |
| ARAD::Arad_DB_Charac_Dispatcher | 20 | ARAD 建角色 DB 分发器：分别创建 stat/equip/inven/skill/pvp/quest/dungeon/NPC 关系记录 | dispatch, create_charac, create_charac_stat, create_equip, create_inventory, create_skill, create_pvp, create_charac_quest | MySQL、SIG_CREATE_CHARAC | DB 家族 / 分发器 | 高 |
| np_server_xml | 290 | 命名空间：290 个 FILE_NAME 只读字符串表（多语言服务器公告/事件文案常量数组）+ CServerXml 类 | FILE_NAME（常量） | CServerXml | 文案 / 多语言 | 中高 |
| np_server_xml::CServerXml | 15 | 服务器文案加载：基于 TinyXML 解析 XML，加载服务器公告字符串与事件 RGB/文案 | InitString, StrLoading, ProcessLoad, EventLoad, RGBALoad, CharsetInit, GetServerString, GetEventString, GetEventRGBA, StrPunish | TiXmlNode、TiXmlDocument | 文案 / 多语言 | 高 |
| CQueryCounter | 17 | SQL 查询性能计数器：注册/累加/周期上报/保存查询统计，可写日志 DB | RegisterQuery, IncreaseQueryCount, UpdateQueryCounter, SaveQuery, LoadQueryTable, SetResponseTime, setLogDB, QUERY_INFO | MySQL、DB_InsertQueryCounterDb/Logdb | 运维监控 | 高 |
| IMethod | 15 | 分组密码模式抽象基类：块大小/密钥长度/填充/Xor/字序转换；CRijndael 等实现 | SetMode, GetMode, SetPadding, GetPadding, GetBlockSize, GetKeyLength, Pad, Xor, BytesToWord, WordToBytes | （虚基类，vtable 存在） | 加密库 | 高 |
| ContentsType | 15 | “容器类型”枚举 ↔ 字符串转换器（getType/getString + std::vector<ContentsType::T> 模板展开） | getType, getString | std::vector | 常量 / 枚举 | 中 |
| ARAD::Arad_ServerStateManager | 18 | 服务器开放/关闭状态机：insertState/findState/loadServerState/saveServerState，定时器驱动状态切换 | attachTimer, insertState, insertStateNoSync, findState, deleteState, loadServerState, saveServerState, sendEffectPacket, sendState | CSystemTime、GlobalData | 服务器状态 | 高 |
| ARAD::Arad_EventPeriodDataManager | 16 | 活动周期数据管理：加载脚本、检查创建/运行/奖励时间，向用户发放活动奖励 | loadScriptData, clearScriptData, checkCreateTime, isRunning, isApplied, isRewarded, addUserRewardData, delUserRewardData | ARAD::EventRewardItemArad、CUser | 活动系统 | 高 |
| ARAD::Arad_DataManager | 15 | ARAD 游戏脚本容器：注册/查找 Arad_InterfaceGameScript 派生脚本实例 | Load, Destroy, initAradData, findGameScript, __insertGameScript, getPurchaseLimitItem, getAradMileageData | ARAD::Arad_InterfaceGameScript | 脚本系统 / 注册表 | 高 |
| SecretShopScript | 18 | 秘密商店脚本：按副本/等级/事件取物品、价格与 NPC，校验店铺 | GetItems, GetItemByDungeonIdx, GetItemByDungeonLev, GetRandItemPrice, GetDomainRate, verifyNpc, IsExistItem | Arad_Script | 脚本系统 / 商店 | 高 |
| CharacManageScript | 18 | 角色养成参数脚本：升级所需点数、经验/金币加成、角色名等 | GetLevel, GetLevelUpRequirePoint, GetExpBonus, GetGoldBonus, GetMinimumPointCharacterLevel, GetName, GetOptionValue, importScript | Arad_Script | 脚本系统 / 养成 | 高 |
| CSyncSlangFilter | 18 | 线程安全脏话过滤器：名单/子串/姓名匹配 | AddSlang, AddSlangName, AddSlangList, HasSlang, HasSlangName, Filter, MatchName, GetInstance, FreeInstance, IMPL | CSyncSlangFilter::IMPL（PIMPL） | 反骚扰 | 高 |
| CNPCScript | 17 | NPC 好感度/赠礼脚本：心情-好感曲线、礼物回报、Buff 回报、周期奖励 | load, getIndex, isFavorableNPC, getFavorRatePerMood, giveGiftItem, getGiftRewardItem, getBuffRewardInfo, getPeriodRewardType, isRewardLevel | Arad_Script | 脚本系统 / NPC | 高 |
| PvPSkillTreeParameterScript | 15 | PvP 技能树参数脚本：技能点、天赋树等级、赠送技能 | getGivePvPSkillPoint, getGiveSkill, getInitSkillTreeGrade, getPvPSkillPoint, importPvPSkillTreeParameterScript | Arad_Script | 脚本系统 / PvP | 高 |
| ARAD::Arad_Dispatcher_Manager | 11 | ARAD DB 分发器管理器：注册/注销子分发器，db_dispatch/inter_dispatch 路由 | open, register_dispatcher, unregister_dispatcher, db_dispatch, inter_dispatch | ARAD::Arad_Dispatcher、DBDispatcher | DB 家族 / 分发器 | 高 |
| ARAD::Arad_Dispatcher | 10 | ARAD 分发器基类：注册表 + 双端分发（db_dispatch/inter_dispatch/dispathc_code） | db_dispatch, inter_dispatch, register_dispatcher, unregister_dispatcher, dispathc_code | CUser、Stream | DB 家族 / 分发器 | 高 |
| ARAD::Arad_Dispatcher_Login_Impl | 14 | 登录 DB 分发实现：账号密码校验、惩罚校验、PassPad 认证、会员信息设置 | db_dispatch, inter_dispatch, account_password_check, punish_user_check, pad_certifiaction_check, premium_info_set | CUser、Stream | DB 家族 / 登录 | 高 |
| QuestScript | 12 | 任务脚本：条件/请求/完成文案 | getName, getConditionMessage, getRequestMessage, getSolveMessage, clear, destroy | Arad_Script | 脚本系统 / 任务 | 高 |
| TrainingQuestScript | 11 | 训练任务脚本：每日训练任务随机/洗牌/重置 | suffleTrainingQuests, reset_same_apply_level_cnt, computeDayIndex, getTrainingQuest, get_random_fake_value | Arad_Script | 脚本系统 / 任务 | 高 |
| GuildParameterScript | 12 | 公会参数脚本：升级、经验权重、公会据点/仓库升级 | getLevelupPrice, getGuildLevelUpParam, getExpWeight, getGuildAgitUpgradeInfo, getGuildCargoUpradeInfo, getGuildExpBook | Arad_Script | 脚本系统 / 公会 | 高 |
| DNFFLib | 12 | 通用工具库：GBK↔UTF8、Hex↔Binary、字符串拆分、目录创建、文本文件输出 | ConvertGBKtoUTF8, ConvertUTF8toGBK, Hex2Binary, Binary2Hex, ExplodeString, Make_Dir, PrintTextFile, get_rand_int | （静态函数） | 工具库 | 高 |
| ARAD::SCRIPT::AvatarFixedHiddenOption | 12 | 装扮固定隐藏属性脚本（parseAbility 解析） | parseAbility, AvatarFixedHiddenOption | STAvatarHiddenAbilityVariation | 脚本系统 / 装扮 | 中高 |
| StringResource | 11 | 字符串资源加载：fromFile/fromResource/fromString/loadFromBinary | loadFromFile, loadFromResource, loadFromString, loadFromBinary, add, get | FILE* | 脚本系统 / 字符串 | 高 |
| ARAD::SCRIPT::EmblemCompound | 11 | 徽章合成脚本 | EmblemCompound（单例） | Arad_Script | 脚本系统 / 装扮 | 中 |
| ARAD::Arad_Dispatcher_BuyItemCheck_Impl | 9 | 购买物品校验 DB 分发实现（对接 ITEM_QUERY::arad_sp_buy_item_check） | db_dispatch, inter_dispatch | ARAD::Arad_Dispatcher、Stream | DB 家族 / 商城 | 高 |
| ARAD::Arad_StatisticsEventItemList | 8 | 活动统计物品清单：加载脚本判断某物品是否需要统计 | loadScriptData, clearScriptData, needStatistics | Arad_Script | 活动系统 / 统计 | 高 |
| ARAD::Arad_GMCommandManger | 4 | GM 命令分发：按 ENUM_DEBUG_COMMAND 查找并处理 | Init, Process, __FindPorcess, Destory | CUser、MSG_DEBUG_COMMAND | GM 系统 | 高 |
| ARAD::Arad_InterfaceGameScript | 6 | ARAD 游戏脚本接口基类（scriptDataName） | scriptDataName | （虚基类） | 脚本系统 / 注册表 | 高 |

## 2. DB 家族机制（DBDispatcher / DBTask / DBThread / MySQL）

### 2.1 命名规则

| 前缀 | 语义 | 例 |
|---|---|---|
| DB_Load* | 查询并向游戏线程返回数据 | DB_Login, DB_LoadEtc, DB_LoadCharac, DB_LoadInventory, DB_LoadQuest, DB_LoadDungeonClear |
| DB_Create* | 创建（建角色等） | DB_CreateCharac, DB_CreateAccountCargo |
| DB_Save* | 全量保存状态 | DB_SaveCharac, DB_SaveInven, DB_SaveSkill, DB_SaveGameOption_1/2 |
| DB_Update* | 增量更新字段/记录 | DB_UpdateLogin, DB_UpdateLogout, DB_UpdateQuest, DB_UpdateItemCountValue |
| DB_Insert* | 插入新记录/日志 | DB_InsertChannel, DB_InsertAttendanceEvent, DB_InsertQueueSizeLog |
| DB_Delete* | 删除记录 | DB_DeleteCharac, DB_DeleteChannel, DB_DeleteAccountCargo |
| DB_Select* / DBSelect* | 显式 SELECT | DB_SelectCharacMid, DBSelectPcroomDailyReward, DBSelectCreateDnfUserInfo |
| DB_Check* | 存在性/约束校验 | DB_CheckCharacName, DB_CheckDoubleGuildName, DB_CheckAddFriend |
| DB_Req* / DB_Request* | 主动请求查询 | DB_RequestCharacSkillInfo, DB_ReqQueryCharacInfo, DB_ReqBlackCount |
| DB_Stat* | 统计落库 | DB_StatGameRank, DB_StatPvpPlay, DB_StatDungeonClear |
| DB_MailBox_Req_* | 邮件请求 | DB_MailBox_Req_Send/List/Delete/CheckReceiver/System_Multi_Mail |
| DB_SecurityCard* / DB_PassPad* / DB_GoblinPad* | 密保卡 / PassPad / GoblinPad 安全设备 | DB_SecurityCardIssue/Activate/Disuse, DB_PassPadUpdateFailCnt |
| DB_Avatar* | 装扮物品操作 | DB_AvatarItemInsert/Del/Move/ChangeOwner/ExtendPeriod/ChangeStat |
| DB_BlackIP* / DB_Hack* / DB_AutoPunish* / DB_Hades* | 反外挂/黑名单/自动惩罚 | DB_BlackIPMonitor, DB_HackIPSave, DB_AutoPunishedSecondUserData |
| DB_Reload* | 规则热重载 | DB_ReloadAutoPunishRuleHackType, DB_ReloadAutoPunishRuleBackIP |
| DB_TOD_* | 绝望之塔活动 | DB_TOD_Reset_UserAPC, DB_TOD_Random_Select_UserAPC |
| DB_Insert*Logdb / DB_Update*Logdb / DB_LastMsg* | 运维/日志库 | DB_InsertQueryCounterDb, DB_InsertQueryCounterLogdb, DB_UpdateQueryCountTimerDb |
| 无下划线变体 | 与 DB_ 相同，命名不统一 | DBUpdatePcroomDailyReward, DBSelectMobileAuthRewardTw, DBInsertGiveBoxEventReward |

### 2.2 链路（反汇编实证）

```
游戏线程                         DB 线程                                  返回路径
Inter_* (构造 SIG_*)  →  MsgQueueMgr::put(s_request) → DBThread::dispatch(void*)
    → DBTask::HandleEvents(QUEUE_IDX, ...)
    → DBTask::DBProcess(Stream*, int&)
        Stream >> userIdx;  Stream >> sigCode;
        校验 0<=sigCode<=0x353；
        handler = DBTask 分发数组[sigCode]（DBTask::RegistDispatcher() 一次性 new 出全部 DB_*，
        数组共 852 槽，按 sig code 索引，如 0x10=DB_Login, 0x14=DB_CreateCharac, 0x18=DB_DeleteCharac,
        0x20=DB_LoadCharac, 0x24=DB_LoadInventory, 0x84=DB_LoadEtc, 0x8c=DB_SaveCharac, 0x90=DB_SaveInven…）
        handler->dispatch(userIdx, sigCode, Stream)     （虚调用，vtable 0x8c5fb10 等）
            → DB_*::dispatch → DBDispatcher::dispatch 预检（CGameManager::getUser(userIdx, sigCode+0x7d0)）
            → Stream::GetOutBuffer<SIG_XXX>() 反序列化请求结构
            → DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP) 取 MySQL 句柄
            → ARAD::DATABASE::LOGIN_QUERY / CREATE_QUERY / ITEM_QUERY 的 arad_sp_* 存储过程包装执行查询
            → 填充 SIG_XXX 结果
            → SendResult(int, int, SIG_XXX*)：
                BigStreamPool::Acquire → CStreamGuard << sigCode << userIdx << put_binary(SIG_XXX)
                → MsgQueueMgr::put(游戏线程队列, stream)
游戏线程: Inter_LoginInfo::dispatch_sig / Inter_LoadEtc::dispatch_sig 等收包处理
```

要点：
- 每个 DB_* 类构造时 `new` 自 `DBTask::RegistDispatcher()`（`DBTask` 即 DB 线程任务），继承 `DBDispatcher`（虚基类，含 vtable），再经 DBThread 循环取队列驱动。
- 用户库分片：`DBProcess` 里 `DBMgr::setUserIdx(userIdx)` 后，`DBMgr::GetDBHandle` 才返回正确分库连接。
- 双线程无锁通信统一走 `MsgQueueMgr` + `Stream`/`BigStreamPool`（`CStreamGuard` RAII）。
- ARAD 侧另有 `ARAD::Arad_Dispatcher_Manager` + `Arad_Dispatcher`（register/unregister + db_dispatch/inter_dispatch），以及 `ARAD::Arad_DB_Charac_Dispatcher`、`ARAD::Arad_Dispatcher_Login_Impl`、`ARAD::Arad_Dispatcher_BuyItemCheck_Impl` 等实现，是同一套机制在 ARAD 命名空间下的变体。

### 2.3 代表性类一句话作用表

| DB 类 | 一句话作用 |
|---|---|
| DB_Login | 登录认证：账号/密码/惩罚/密保/事件数据查询后回传 SIG_LOGIN_DATA |
| DB_LoadEtc | 登录后“杂项”批量加载：技能、称号、成就、任务商店、公会、活动等 |
| DB_LoadCharac | 加载角色基本信息/属性/标签/学校角色 |
| DB_LoadInventory | 加载背包、装备、装扮、宠物、物品锁 |
| DB_LoadQuest | 加载玩家任务列表 |
| DB_LoadDungeonClear | 加载副本通关记录（含成员通关） |
| DB_LoadGameOption | 加载玩家游戏选项 |
| DB_CreateCharac | 建角色：重名检查 + 全套档案创建 |
| DB_DeleteCharac | 删角色：角色/选项/公会/活动标记清理 |
| DB_SaveCharac | 保存角色信息/属性/养成/契约 |
| DB_SaveInven | 保存背包与扩展栏 |
| DB_SaveSkill | 保存技能 |
| DB_SavePvp | 保存 PvP 记录/任务列表 |
| DB_SaveDungeonClear | 保存副本通关记录 |
| DB_UpdateLogin / DB_UpdateLogout | 上下线时间/状态更新（含账号疲劳赠送） |
| DB_UpdateQuest | 任务进度更新 |
| DB_UpdateItemCountValue / DB_UpdateAddItemCountValue | 物品数量变更（含加量） |
| DB_UpdateChannel / DB_InsertChannel / DB_DeleteChannel | 频道开/关/删 |
| DB_AvatarItemInsert / Del / Move / ChangeOwner / ExtendPeriod / ChangeStat | 装扮物品全生命周期 |
| DB_MailBox_Req_Send / List / Delete / CheckReceiver / System_Multi_Mail | 邮件收/发/删/查收件人/系统群发 |
| DB_SecurityCardIssue / Activate / Disuse / Retransfer / UpdateFailCnt | 密保卡签发/激活/注销/转移/失败计数 |
| DB_GatheringParyStatus | 组队/决斗 Ping 与结果历史入库 |
| DB_TimerStatisticsLog | 定时统计日志落库 |
| DB_StatGameRank / StatPvpPlay / StatDungeonClear / StatComposition / StatCoinUse | 各类统计任务（排位/PvP/副本/合成/金币） |
| DB_CheckCharacName / DB_CheckDoubleGuildName / DB_CheckAddFriend | 重名/公会名/好友校验 |
| DB_RequestCharacSkillInfo / DB_ReqQueryCharacInfo | 技能信息/角色信息请求查询 |
| DBSelectCreateDnfUserInfo / DBInsertCreateDnfUserInfo | DNF 用户档案查询/创建（无下划线变体） |
| DBUpdatePcroomDailyReward / DBSelectPcroomDailyReward | 网吧每日奖励更新/查询 |
| DB_LoadPowerWarInfo / DB_LoadKillMonsterInfo | 势力战信息/击杀怪物信息加载 |
| DB_BlackIPMonitor / DB_HackIPSave / DB_LoadDnfHackLog | 黑 IP 监控/外挂 IP 上报/外挂日志 |
| DB_InsertQueueSizeLog / DB_InsertResponseTime / DB_InsertQueryCounterDb | 队列/响应时间/查询计数运维入库 |
| DB_AradDatabaseDispatcher / DB_DispatcherTaiwan | DB 分发注册表变体（ARAD / 台湾服） |

## 3. 脚本体系

### 3.1 层次结构

```
词法层（文本）                   词法层（编译态）
FlexLexer (flex C++ 基类)        CompiledDNFLex::stream_t / GetToken / getInt/getStr
__dnf_script__FlexLexer (G8)     CompiledDNFLex (G5)
DNFLex (G4: LoadStream/yylex/get_next_token)
DNFLexWrapper (G4: getToken/getString/getInt/getFloat/switchInputStream)
          │
          ▼
表加载层：Arad_Script::Load（.rs 表） / InitRDARScript / loadRDARScriptFile / STScriptFileList
          │  （字符串段：StringDictionary / RDARScriptStringManager / ScriptStringManager；
          │    打包索引：IndexEntry + IMethod 加密；GlobalData::s_* 常量池）
          ▼
脚本对象层（ST*Script 家族 + 参数脚本）：
  STItemScript/STEquipmentScript/STStackableScript/STSkillScript/STMapScript/STCharacterScript/
  STMonsterScript/STDungeonScript/STAIInfoScript/STAICharacterCommonScript/STPassiveObjectScript/
  ServerParameterScript/QuestParameterScript/GuildParameterScript/PvPSkillTreeParameterScript/…
          ▼
游戏对象绑定层：
  CDataManager::find_*/get_* 供游戏逻辑查询；
  ARAD::Arad_DataManager → ARAD::Arad_InterfaceGameScript（ARAD::SCRIPT::AvatarRecharge/
  EmblemCompound/AvatarFixedHiddenOption 等单例）；
  sync_script::CSyncScript (G8)、EventClassify::CEventScriptMng (G6) 等跨组消费方
```

### 3.2 关键说明

- **lexer 三层**：`FlexLexer` 是 flex 生成器自带的 C++ 扫描基类（第三方）；`DNFLex`（G4）封装输入流栈（Push/Pop/SwitchInputStream）与 token 输出（yylex/get_next_token/tok_str）；`CompiledDNFLex`（G5）面向**编译后 token 流**（GetToken/getInt/getStr/getFloat/GetOffset/isEnd），说明存在“文本脚本 → 预编译二进制脚本（RDARScript .rs 包）”两条解析路径，`DNFLexWrapper` 把两者统一成带类型的读取器。
- **表格式**：`Arad_Script` 按 (行, 列) 读取；`IndexEntry`（crc/offset/size/encrypted content）+ `IMethod`（加密基类）对应脚本包的索引文件；`StringDictionary`/`RDARScriptStringManager` 对应字符串段（含导出/写回工具，用于脚本编辑器）。
- **ST*Script 家族**：每个游戏域一个薄表类（Clear + getter），数据实际由 `Init*Script`（InitSkillScript/InitMonsterScript/InitCharacterScript/InitDungeonScript/InitEquipmentScript/InitStackableScript/InitPassiveObjectScript 等全局函数）灌入，这些函数在 `CDataManager::init` 中统一被调用（反汇编见 `InitRDARScript`、`InitRDARScriptStringManager`、`InitMapEquipmentAniScript`、`sync_script::GetInstanceSyncScript` 等调用序列）。
- **ARAD 脚本**：`ARAD::Arad_DataManager` 是运行时容器（findGameScript/__insertGameScript），`ARAD::SCRIPT` 是活动脚本命名空间（时间结构 + Avatar/Emblem/跳跃活动实现），`ARAD::ScriptManager`（LoadScript/RegistScript/ScriptInterface 注册表）管理加载。
- **服务器参数**：`ServerParameterScript` 是“策划参数表”的代表（全服读取，含活动开关 setDungeonOpen）；`CharacManageScript`、`QuestParameterScript`、`GuildParameterScript` 等同类。

## 4. 长尾类（<20 符号，逐类一句话）

置信度：高=方法与符号直接印证；中=命名+方法推断；低=仅有命名/编译器杂项。

### A. 脚本表与参数类

| 类名 | 符号 | 作用 | 置信度 |
|---|---|---|---|
| STEquipmentScript | 10 | 装备脚本表：升级/动画价格表 | 高 |
| STAIInfoScript | 10 | AI 信息脚本表 | 中 |
| STStackableScript | 9 | 堆叠物（消耗品）脚本表 | 高 |
| STItemScript | 8 | 物品脚本表基类（类别枚举、hasCategory） | 高 |
| STEquipmentAniScript | 8 | 装备动画脚本 | 中 |
| STMapScript | 7 | 地图脚本表 | 高 |
| STCharacterScript | 7 | 角色脚本表（经验表、PvP 价格） | 高 |
| STAICharacterCommonScript | 7 | AI 角色公共脚本表 | 中 |
| STMonsterScript | 6 | 怪物脚本表 | 高 |
| STSkillScript | 5 | 技能脚本表 | 高 |
| STPassiveObjectScript | 5 | 被动物体脚本表 | 中 |
| STDungeonScript | 5 | 副本脚本表 | 高 |
| STTileScript | 1 | 瓦片脚本表 | 中 |
| QuestParameterScript | 10 | 任务奖励参数（经验/金币/等级/权重） | 高 |
| PowerParameterScript | 8 | 权力战/势力战参数（惩罚/加成/服务器检查） | 高 |
| QuestScript | 12 | 任务脚本：条件/请求/完成文案 | 高 |
| TrainingQuestScript | 11 | 每日训练任务脚本（洗牌/重置） | 高 |
| NpcScript | 5 | NPC 脚本表 | 高 |
| CNPCScript | 17 | NPC 好感/赠礼脚本（见核心表） | 高 |
| MazeScript | 10 | 迷宫网格脚本（getGrid） | 中 |
| WorldMapScript | 7 | 世界地图模式表 | 中 |
| TownScript | 5 | 城镇脚本 | 中 |
| TownAreaScript | 8 | 城镇区域脚本 | 中 |
| ItemShopScript | 7 | 物品商店脚本 | 中 |
| GridScript | 8 | 网格脚本 | 中 |
| EpisodeScript | 8 | 章节脚本（setEpisodeIndex） | 中 |
| BackAniScript | 8 | 背部动画脚本 | 中 |
| InteractiveDialogScript | 8 | 交互对话框脚本 | 中 |
| EventEtcScript | 5 | 活动杂项脚本 | 中 |
| MissionScript | 5 | 任务脚本表 | 中 |
| MissionParameterScript | 5 | 任务参数脚本 | 中 |
| DisjointScript / DisjointSkillScript | 5+5 | 分解脚本 / 分解技能脚本 | 中 |
| CreatureScript / CreatureCommonScript | 6+5 | 宠物生物脚本表（ExpTable_）/ 公共脚本 | 高/中 |
| RidableScript / RidableObject | 8+5 | 骑乘脚本表 / 骑乘对象数据 | 中 |
| stagemap::StageMapScript | 5 | 舞台地图脚本 | 中 |
| EquipmentAniInfoScript | 7 | 装备动画信息脚本 | 中 |
| AccountCargoScript | 8 | 账号仓库脚本（当前/下一级升级信息） | 高 |
| PremiumServiceData | 8 | 高级服务数据 | 中 |
| STExpertJobEtcScript | 4 | 专家职业杂项脚本 | 中 |
| Arad_STStackableScript | 6 | ARAD 堆叠物脚本（AradStClear） | 中 |
| PetScript | 1 | 宠物脚本 | 低 |
| CharacterCreateCreatureGiftScript | 5 | 建角色赠送宠物脚本（eventJob 子结构） | 中 |
| ST_Event_Upgrade_Jar_EventNPCs_Script | 4 | 升级罐活动 NPC 脚本 | 中 |
| stQPGuideScript | 10 | 快速组队引导脚本（stRecommendQPData 子结构） | 中 |
| PvPSkillTreeParameterScript | 15 | PvP 技能树参数（见核心表） | 高 |
| FairPvPStatScript | 6 | 公平 PvP 角色统计脚本（FindCharacStat） | 高 |
| EventAvatarListScript | 6 | 活动装扮列表脚本 | 中 |
| RandomOptionScript | 8 | 随机选项脚本（前缀/等级/洗练费） | 高 |
| SecretShopScript | 18 | 秘密商店脚本（见核心表） | 高 |

### B. 活动 / 奖励 / 事件脚本

| 类名 | 符号 | 作用 | 置信度 |
|---|---|---|---|
| stLevelUpRewardItemScript | 8 | 升级奖励物品脚本（get_data_when_growup） | 中 |
| stSeriaBlessingScript | 7 | 赛丽亚祝福脚本（get_value/is_possible_lv） | 中 |
| stBroadCastItemScript | 7 | 广播物品脚本（isUnCommonItem） | 中 |
| stStepRewardStackableItemScript | 6 | 阶梯奖励堆叠物品脚本 | 中 |
| stReturnUserRewardScript | 4 | 回归用户奖励脚本 | 中 |
| stNewAccountLevelUpToJobScript | 4 | 新账号转职升级奖励脚本 | 中 |
| stBingoScript | 4 | 宾果活动脚本 | 中 |
| stGrowthCapsuleScript | 2 | 成长胶囊脚本 | 低 |
| LevelUpRewardScript | 2 | 升级奖励脚本 | 中 |
| FatigueQuantityScript | 2 | 疲劳量脚本 | 中 |
| AttendanceScript | 2 | 签到脚本 | 中 |
| AccountFirstLoginScript | 2 | 账号首登脚本 | 中 |
| AddItemCountDBScript | 2 | 加物品数量 DB 脚本 | 中 |
| AvatarDisjointRandomRewardScript | 2 | 装扮分解随机奖励脚本 | 中 |
| UsedFatigueGiveItemScript | 2 | 消耗疲劳发放物品脚本 | 中 |
| PcBangPlayTimeScript | 2 | 网吧时长脚本 | 中 |
| growthEquipmentScript | 4 | 成长装备脚本 | 中 |
| ObjectBringUpScript | 3 | 物体培养脚本（ObjectBringUpRule 子结构） | 中 |
| PurchaseCashItemBonusScript | 3 | 购买现金物品加成脚本（PurchaseBonusRule） | 中 |
| InGameAdvertisementScript | 3 | 游戏内广告脚本 | 中 |
| InGameEventScript | 4 | 游戏内活动脚本 | 中 |
| ExchangeRandomItemRewardScript | 3 | 兑换随机物品奖励脚本（reset） | 中 |
| PresentResponceScript / PresentResponceScriptException | 8+8 | 礼物响应脚本 / 其异常 | 中 |
| DeleteInvalidItemScript | 10 | 无效物品删除脚本（IsInvalidItem2Delete + 邮件补偿） | 中 |
| EventCharacterParameterScript | 10 | 活动角色参数（GetEventCharacterInfo） | 中 |
| IndependentDropParameterScript | 10 | 独立掉落参数（ImportIndependentDrop） | 中 |
| PcBangItemRentarData | 6 | 网吧租借物品数据（getRewardSelectionList） | 高 |
| PcRoomPlayTimeRewardParam | 5 | 网吧时长奖励参数 | 中 |
| randomMessageBalloonInfo | 5 | 随机消息气泡信息 | 低 |
| seriaRoomDecoEventScript / seriaRoomDecoAniEventScript | 4+5 | 赛丽亚房间装饰事件/动画事件脚本（aniLayer 子结构） | 中 |
| RewardItemInfo / RewardUserData | 4+2 | 奖励物品信息 / 奖励用户数据 | 中/低 |
| PostalReward | 8 | 邮政奖励数据 | 中 |
| PurchaseLimitItem | 7 | 限购物品（Info 子结构） | 中 |
| rewardKey / rewardSubKey | 4+4 | 奖励 map 排序键 | 低 |
| PremiumServiceData | 8 | 高级服务数据 | 中 |

### C. 数据结构（Info / Data / *_t / 参数）

| 类名 | 符号 | 作用 | 置信度 |
|---|---|---|---|
| reseal_table_t | 6 | 再封装（解封）费用表：get_reseal_cost/get_oneshot_reseal_cost | 高 |
| RecipeInfo | 7 | 配方信息（changeOutput/additionalInfo） | 中 |
| RecoveryStairInfo / RecoveryInfo | 7+2 | 恢复阶梯信息 / 恢复信息 | 低 |
| PassiveObjGeneratorObject / Pattern / Sequence / Info | 7+7+7+4 | 被动物体生成器对象/模式/序列/信息 | 中/低 |
| PassiveIObjSniperInfo | 6 | 被动物体狙击信息 | 低 |
| PartSelectonValue / PartSelectonField | 7+2 | 装备部位选择值 / 字段 | 低 |
| RandomOption / RandomOptionGive / RandomOptionField / RandomOptionSeed | 6+7+2+1 | 随机选项数据/给予/字段/种子 | 中/低 |
| RandomItemTable | 6 | 随机物品表（GetRandomItemIndex） | 高 |
| RandomItemFairy | 5 | 随机物品精灵 | 低 |
| RandomApplicationKey | 5 | 随机应用键（map 键） | 低 |
| RandomList / QuantityRatio / Position / ParentLevelPenalty / ResetValue / ResetValues / RequiredItem / ReservedCapacity | 2~7 | 随机列表/数量比例/坐标/等级惩罚/重置值/所需物品/预留容量等小参数结构 | 低 |
| PlayInfo / PlayerInfo / PlayerInfoSecond / Party | 1~5 | 游玩信息/玩家信息/组队信息（Reset 型数据） | 低 |
| pvp_channel_info_t / PVPMAP_DATA / PVP_ROOM_INFO | 4+7+4 | PvP 频道/地图/房间结构 | 中 |
| PvpResultType / PvpResultSet / PvpResultRecvFlag | 9+5+8 | PvP 结果统计容器 / 结果集 / 接收标志位 | 高/中 |
| PieceQuestRewardStatus | 4 | 碎片任务奖励状态 | 低 |
| stSeriaBlessingScript::Value / FindOneByLv | 2+3 | 祝福值 / 按等级查找 | 低/中 |
| STExpertJobScript::st*ResultInfo / st*Result / st*Rate / stSelfDisjoinMaterialInfo | 2~5 | 专家职业炼金/附魔/人偶/卡片结果与费率子结构 | 中 |
| STExpertJobScript::stMonsterCardBindInfo | 5 | 怪物卡片绑定信息 | 中 |
| STItemScript::SEXPERTJOB::stExpertJobAdditionalExp / stExpertCompoundResultVariation / SUSABLE | 2×3 | 专家职业附加经验/合成变异/可铸造状态 | 中 |
| STEquipmentScript::artifact_info | 3 | 神器信息 | 中 |
| STCharacterScript::STSecondGrowTypeData | 5 | 二次成长类型数据 | 中 |
| ServerParameterScript::stPremiumGoldCardEvent | 2 | 金卡活动参数 | 中 |
| ServerParameterScript::PvPPlayerKey | 3 | PvP 玩家键 | 低 |
| CQueryCounter::QUERY_INFO | 2 | 查询信息结构 | 高 |
| StringDictionary::StringEntity | 3 | 字符串字典实体（key/value） | 高 |
| CompiledDNFLex::stream_t | 2 | 编译 lexer 流类型 | 中 |
| DeleteInvalidItemScript::DeleteInvalidItemData | 3 | 无效物品数据 | 中 |
| createChracScript::rewardInfo / rewardInfoList | 7+6 | 建角色奖励信息/列表 | 高 |
| ARAD::SCRIPT::SEventPeriodData / SRewardPeriodData / AradJumpingScriptData / _AradJumpingRewardItem | 2~5 | ARAD 活动周期/跳跃活动数据 | 高/中 |
| premium_script_parsing::STPremiumItemData | 4 | 高级内容物品数据 | 中 |
| restrict_inputting_name | 2 | 名字限制命名空间（RestrictInputtingNameData / IsNoneUnicodeRange 子项） | 中 |
| DisjointScript::._381 | 4 | 匿名结构/联合（编译器生成名） | 低 |

### D. 工具 / 基础设施

| 类名 | 符号 | 作用 | 置信度 |
|---|---|---|---|
| RwSectionLock / rwLock / readGuard<rwLock> | 8+7+4 | 读写锁与 RAII 读锁 | 高 |
| RandGen | 4 | 随机数生成器（getFloat/getFloat01） | 高 |
| PerfMgr | 3 | 性能计数器（inc/get/clear） | 高 |
| PacketGuard | 8 | 包保护占位类（无方法体） | 低 |
| PISenderManager / PIReceiverManager | 6+6 | 包注入（PI）发送/接收端管理器：发送哈希与接收校验（疑似反外挂报文完整性） | 中 |
| CSyncSlangFilter::IMPL | 4 | 脏话过滤器实现（PIMPL 隐藏） | 中 |
| HistoryLog 相关 static（count_/logfiles_/time） | 3 | 历史日志文件状态 | 高 |
| premium_helper_function | 6 | 高级内容辅助函数命名空间 | 中 |
| ARAD::FN_DeleteGameScript | 1 | 删除游戏脚本的函数对象 | 中 |
| ReqResult / ReqDebugClearQuestResult | 5+5 | 请求结果 / 调试清除任务结果 | 低 |

## 5. 假类 / 常量 / 枚举组

| 组 | 数量 | 说明 | 处理建议 |
|---|---|---|---|
| PCK_AUCTION_*（GP/GA 成对） | 48 符号（24 名） | 拍卖协议包编码常量（REGIST/BIDDING/SEARCH/OPEN_PRIVATE_STORE…），每个仅有 2 个“符号”（编译期常量对象），非运行时类 | 归入枚举/常量，不建类 |
| Packet_* | 165 名 ×2 | 跨服务器报文结构体（Guild/Party/Monitor/Hades/Statistic…），每个只有 2 符号（构造/析构或 size 特化），多数是协议结构 | 归入协议结构组，按命名域聚合 |
| PacketHeader / Pakcet_FindUserName_use_Charac_no | 2+2 | 报文头结构；后者是拼写错误（Pakcet）的报文结构 | 协议结构 |
| CountryCode | 25 | 国家枚举包装（korea/japan/china/taiwan/usa/none/global + alpha2 码），方法多为枚举转换 | 常量/枚举类 |
| RestrictCategory / ROI_Category / ContentsType | 3+3+15 | 枚举 ↔ 字符串转换器（enumStringRestrict/enumToString、getType/getString） | 枚举映射 |
| PvpResultType / PvpResultRecvFlag | 9+8 | 行为接近容器/标志位，非传统类 | 数据类 |
| ST*_t 结构：pvp_channel_info_t、reseal_table_t | 4+6 | 纯 C 风格结构体 | 结构体 |
| 各 `::Info / ::Data / ::Rule / ::Result / ::Value` 子结构 | 数十 | 表行数据载体（stExpertJobScript::st*、ObjectBringUpRule、PurchaseBonusRule、DeleteInvalidItemData、stRecommendQPData 等） | 结构体/表行 |
| kXxx 常量 | 组内未见独立条目 | 本组未出现 k 前缀常量类；常量类主要是 PCK_AUCTION_* 与 *_t 结构体 | — |
| GlobalData 的 g_/s_ 全局 | 93 符号中约 80 | 命名空间级全局单例/常量（s_db_mgr、s_accept_thr、g_blackIPMonitor、cg_ 等），被聚合成“GlobalData 类” | 全局变量表，非类 |
| np_server_xml::FILE_NAME | 290 | 只读字符串常量数组（每语言/每事件一组文案） | 常量数据 |

## 6. 第三方 / 自研库组件

| 组件 | 判定 | 依据 |
|---|---|---|
| TiXmlNode/Element/Document/Base/Attribute/AttributeSet/Declaration/Comment/Text/Unknown/Visitor/Printer/Handle/ParsingData | 第三方 TinyXML 1.x（原版 vendored） | 方法名与 TinyXML 完全一致：FirstChildElement/IterateChildren/InsertEndChild/QueryIntAttribute/condenseWhiteSpace/ConvertUTF32ToUTF8/TiXmlParsingData::Stamp；无 DNF 定制痕迹 |
| FlexLexer | 第三方 flex C++ 运行时 | flex 生成器自带基类（YYText/YYFlexLexer）；G8 的 __dnf_script__FlexLexer 与 G7 的 __slang_filter__FlexLexer 为其生成子类 |
| MySQL | 自研薄封装（第三方 libmysqlclient 之上） | 方法集是典型 C API 包装（exec/exec_query/fetch/get_* 访问器/escape_string），行为纯工具性 |
| IMethod | 自研/移植密码模式抽象（配合 G7 CRijndael） | 块密码模式参数化接口，IndexEntry 用它做脚本包内容加解密 |
| DNFLex / CompiledDNFLex / DNFLexWrapper / Arad_Script / RDARScript* / IndexEntry | 自研脚本系统 | 命名（DNF/RDAR/Arad）与打包/索引/字符串段设计均为项目特有 |
| np_server_xml | 自研（基于 TinyXML） | CServerXml 直接以 TiXmlNode* 为参数遍历 XML，属于项目业务组件 |
| GlobalData::s_pcryptRijndael_* / s_pcryptTEA_* | 自研安全组件（G7 关联） | 密码/密保加密钥匙单例，被 DB_Login 解密流程使用 |

## 7. 核心类依赖关系速览

```
                    ┌─────────────────────────────────────────────┐
                    │  CEnvironment（配置：IP/端口/服务器组/开关）     │
                    └───────────────┬─────────────────────────────┘
                                    │ 提供脚本包路径/加密标志/优先级目录
                                    ▼
                    ┌─────────────────────────────────────────────┐
  全局单例池 GlobalData（Init/Fini）│  CDataManager::init            │
  s_db_mgr/s_db_thr/s_msgq_mgr/    │   InitRDARScript + InitRDARScriptStringManager
  s_*_proxy/s_*_pool/...           │   + 各 Init*Script（InitSkillScript…）
                    │               └──────────────┬──────────────┘
                    │                              ▼
   DBThread → DBTask → DB_* 分发数组   ST*Script 表 / ServerParameterScript /
   （sig 索引 0..0x353）                Arad_Script(.rs) ← StringDictionary/IndexEntry
        │  ▲                            CompiledDNFLex/DNFLexWrapper ← FlexLexer
        ▼  │（SendResult 回队列）         ARAD::Arad_DataManager → ARAD::SCRIPT::*
   DBMgr → MySQL（分库句柄）             np_server_xml::CServerXml → TiXmlDocument（文案）
   ARAD::DATABASE::{LOGIN,CREATE,ITEM}_QUERY（arad_sp_* 存储过程）
   ARAD::Arad_Dispatcher_Manager → Arad_Dispatcher（Login_Impl/BuyItemCheck_Impl/
   Arad_DB_Charac_Dispatcher）

   横向工具：CLog / HistoryLog（日志）、CQueryCounter（查询统计）、CSyncSlangFilter（脏话）、
   DNFFLib（编码/文件）、IMethod（加密）、CQueryCounter、RwSectionLock/rwLock（同步）
```

### 证据要点（反汇编）
- `DBTask::RegistDispatcher`（0x83fbfee）：循环置零 0x353+1 个槽后逐一 `new DB_Login / DB_CreateCharac / DB_DeleteCharac / DB_UpdateCharacView / DB_LoadCharac / DB_LoadInventory / DB_LoadQuest / APSystem::DB_LoadActionPoint / DB_LoadEtc / DB_SaveCharac / DB_SaveInven / DB_SaveSkill / DB_SavePvp / DB_UpdateQuest / DB_UpdateLogin / DB_UpdateLogout / DB_UpdateChannel / DB_InsertChannel / DB_DeleteChannel / DB_AvatarItemInsert …` 填入数组。
- `DBTask::DBProcess`（0x83ff3f4）：`Stream >> userIdx`、`Stream >> sigCode`、0<=sigCode<=0x353 校验、取 `[DBTask+4+sigCode*4]` 句柄、`DBMgr::setUserIdx`（分库）、虚调 `dispatch(userIdx, sigCode, stream)`。
- `DB_Login::dispatch`（0x840f51c）：先 `DBDispatcher::dispatch`（0x83fbf7c，经 `CGameManager::getUser(userIdx, sigCode+0x7d0)` 校验用户存在）→ `Stream::GetOutBuffer<SIG_LOGIN_DATA>` → `GetAccountInfo/SaveLoginTime/GetPunishUserInfo/…` → `SendResult`。
- `DB_Login::GetAccountInfo`（0x841325e）：`DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX=1, ENUM_SERVER_GROUP=0)` 取连接，随后调用 `ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)` 等存储过程包装。
- `DB_Login::SendResult`（0x8414c6e）：`BigStreamPool::Acquire` → `CStreamGuard << sigCode << userIdx << put_binary(SIG_LOGIN_DATA)` → `MsgQueueMgr::put(队列=1, stream)` 回游戏线程。
- `CDataManager::init`（0x8358332）：遍历 `CEnvironment` 目录列表 → `SetPriorityBaseDirectory` → `GetScriptPacks` → `InitRDARScript` / `InitRDARScriptStringManager` / `InitMapEquipmentAniScript` / `sync_script::GetInstanceSyncScript` 等。

