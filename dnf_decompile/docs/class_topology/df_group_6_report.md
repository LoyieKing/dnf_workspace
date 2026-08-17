# df_game_r G6 组拓扑还原报告：事件/活动/商城/社交域

> 分析对象：`/tmp/df_group_6_classes.txt`（645 个类路径，11331 个符号）；数据源：demangled 符号表、df_class_methods.txt、objdump 反汇编、packet_master_corpus、二进制字符串。
> 方法：以“符号→方法→调用点→字符串”交叉验证；大符号量路径先判定类/命名空间/常量组，再归入相应章节。

## 0. 总览

- 645 个类路径共 11331 个符号；其中 466 个路径带实际方法（含构造/序列化）。**行为型真类（事件/商城/活动/管理器）约 260 个**；其余为：常量/枚举/静态数组命名空间（假类，约 15 个）、ST 序列化数据结构（135）、Timer 定时器回调（119）、SIG 信号结构（36）、tag/TAG 数据结构（15）及纯数据嵌套结构。
- 本组覆盖三个子系统：**事件体系**（CEventManager + 约 50 个 C*Event + EventClassify 脚本事件 + 活动类）、**商城/现金体系**（nexon::cash SDK、Taiwan Garena 计费、CeraShop 商品/限购、Redeem_Item、private_store、secretshop）、**社交/辅助**（InformNotice 公告、SlangFilter 聊天过滤、Timer 全游戏定时器、ST 数据）。
- 关键发现：`nexon::cash::NexonCash` 全部方法在本二进制中 **0 调用点**（韩国版 SDK 死代码）；实际计费走 `Taiwan::TaiwanCash`（Garena 计费，由 `WongWork::IPG::CIPGWorker` 驱动）。

## 1. 核心类深挖（≥20 符号 + 关键管理器）

| 类名 | 符号数 | 作用 | 关键方法 | 依赖类 | 子系统 | 置信度 |
|---|---|---|---|---|---|---|
| nexon::cash（命名空间，假类） | 1183 | Nexon 现金 SDK 命名空间：内含 NexonCash/NCashImpl/TCPSocket/UDPSocket/ByteBuffer/NCashMessage/TransactionManager/Transaction/NXTransaction/UserBalance 及 4 个常量（C_ARAD_PROD_TYPE*、MAX_NEXON_ID_LENTH 等，各被引用 291 次导致计数虚高） | NexonCash::purchase/charge/gift、NCashImpl::recv_msg/send_msg、TCPSocket::connect、Transaction::execute/confirm/cancel | WongWork::IPG、CUser（间接） | 商城/现金 | 高（判为命名空间） |
| Taiwan（命名空间，假类） | 1183 | Garena/Taiwan 计费命名空间：TaiwanCash、BillTransaction、GarenaAuthData、AuthGarenaToken、9 个计费 Query 模板、7 个 Sig* 信号结构；C_ARAD_PROD_TYPE* 常量各 290 次引用造成虚高 | TaiwanCash::purchase/charge/confirm、processBilling<Taiwan::XQuery>、AuthGarenaToken::decrypt | CUser、WongWork::IPG::CIPGMgr、DBMgr | 商城/现金 | 高（判为命名空间） |
| InformNotice / InformNotice2nd / UrgentQuestLevelLimit | 978×3 | **假类**：静态 const 数组/枚举常量组（kInformNoticeBit/kInformNoticeIndex 各 489 个 rodata 符号、kBit/kIndex、kStartLvl/kEndLvl 各 489），非类 | （无方法，仅数据符号） | CCharacInformNotice、Dispatcher_InformNotice | 公告/等级限制 | 高（判为常量组） |
| nexon_packet（命名空间，假类） | 632 | Nexon 协议包命名空间：CPacketHelper/stHeader/stPacket/stLoginPacket/stLogin + 静态常量 domainString、MaxBodySize（各 316 引用虚高） | CPacketHelper::scan/padding/get_offset、stHeader::GetLength/SetLength | nexon::cash::NCashImpl | 现金协议 | 高（判为命名空间） |
| Redeem_Item（命名空间，半假类） | 937 | 赎回系统命名空间：CRedeemItem 真类 + 常量 BUY_FEE/THROW_FEE/MAX_COUNT（各 312 引用虚高）+ Inven_Item_Expand_RedeemInfo（149 引用） | CRedeemItem::RedeemItem/AddRedeemList/Send_RedeemList/loadData/_saveData | CUser、CInventory、Inven_Item | 商城/赎回 | 高 |
| Taiwan::TaiwanCash | 25 | Garena 计费客户端：购买/充值/赠送/确认/取消/余额/Cera 点，经 TCP 与 Garena 计费服务器通信 | purchase、charge、confirm、cancel、getBalance、ceraPoint、checkEntrance、checkResultCode、increaseRequest、processBilling<Taiwan::XQuery> | Taiwan::BillTransaction、Taiwan::*Query、TCPSocket(nexon::cash) | 商城/现金 | 高 |
| nexon::cash::NCashImpl | 39 | Nexon 现金协议实现：TCP 消息收发、重连、请求 ID、错误码处理；purchase/chargeCash/gift 组装协议包 | recv_msg、send_msg、set_data_header、get_data_header、reconnect、handle_cash_error、purchase、chargeCash、gift | nexon::cash::TCPSocket、ByteBuffer、NCashMessage、NXTransaction | 商城/现金 | 高 |
| nexon::cash::TCPSocket | 33 | Nexon SDK TCP socket 封装（非阻塞 poll、Nagle/Linger/非阻塞/缓冲选项、connect_nonb） | connect、connect_nonb、send、recv、pollReadEvent、setOptNagle、setOptNonBlock | （独立网络层） | 现金 SDK | 高 |
| nexon::cash::NexonCash | 16 | Nexon 现金门面（韩国版）：purchase/charge/gift/confirm/cancel/getBalance/checkCoupon/checkCafeCoupon；**本二进制 0 调用点 = 死代码** | purchase、charge、gift、confirm、cancel、getBalance、useCoupon | nexon::cash::NCashImpl、NXTransaction | 商城/现金 | 高（判为死代码） |
| private_store::CPrivateStore | 63 | 私人商店本体：建店/上架/购买/下架/移动/娃娃机（Doll）/保存/召回；对象来自 StaticPool<CPrivateStore,300> | CreatePrivateStore、AddItem、BuyItem、SellItem、EnterPrivateStore、ExitPrivateStore、SavePrivateStore、SetDollCreated、VerifyPrivateStoreItem | CUser、CInventory、private_store::CPrivateStoreMgr、CPacketBufPrivate | 私人商店 | 高 |
| private_store::CPrivateStoreMgr | 18 | 私人商店管理器：卖家/买家注册表（map<CUser*,CPrivateStore*>）、DB 加载保存、错误处理 | LoadPrivateStore、Enter、Exit、FindStoreSeller、FindStoreBuyer、FreeStoreBuyer、HandleError | CPrivateStore、StaticPool<private_store>、DB_LoadPrivateStore | 私人商店 | 高 |
| EventClassify::CEventScriptMng | 36 | **脚本事件管理器**：按 InGameEventInfoList 初始化事件实体（CEventEntity 子类），处理升级/签到/疲劳/购买奖励等事件，读写 DB 记录表 | initScriptlist、create_event_entity、is_eventing、get_pass_day、get_today_time、process_level_up_reward、send_gift_fatigue_item、send_purchase_bonus_mail、process_add_item_count_db | InGameEventInfoList、InGameEventScript、CUser、CDataManager | 事件/脚本活动 | 高 |
| LevelupSupportEventManger | 36 | 升级支援活动管理器：分步（Step）奖励表，Load 脚本、按新步骤发物品、同步角色状态 | Load、CheckNewStep、GetStepIndex、UpdateEventInfo、InsertItem、SendCharacState | LevelupSupportSciprt、EventInfo、CUser | 升级活动 | 高 |
| MultiBoxLotteryInfo | 34 | 多开宝箱抽奖信息表：抽奖单元/默认物品/Arad 默认配置（LotteryUnit/stDefaultItem/LotteryDefaultArad） | （数据表）clear + 嵌套结构 | EventClassify::CEventActionMng::getResultItemFromLottery | 抽奖活动 | 中 |
| Arad_VillageAttackRewardItem | 28 | 村庄袭击活动奖励表：普通/按排名奖励（Data/RankData），parsing 脚本 | find_reward_item、find_ranking_reward_item、parsing | village_attacked（G2）、CUser | 村庄袭击活动 | 高 |
| COnTimeEvent | 25 | 在线定时（OnTime）活动：起止时间、奖励物品、领取用户列表，DB 驱动 | StartEvent、process_set_reward_start、process_send_reward_to_user、insert_reward_user、delete_reward_user | CEventBase、DBMgr | 活动 | 高 |
| CItemLimitEdition | 25 | 商城限量版物品：价格（Cera/金币/WinPoint）、时段、账号/角色条件、销售计数、IPG no | getPriceCera、getCondCharacJob、getCondAccCreateTimeBegin、getCurSellNum、isSellComplete、makeInfoPacket | CCeraShop（G8）、CItemLimitEditionMgr、STCeraShopItem | 商城 | 高 |
| Taiwan::TaiwanCash | 25 | （同上）Garena 计费客户端 | — | — | — | 高 |
| secretshop（命名空间，半假类） | 22 | 秘密商店命名空间：CSecretShop/CSecretShopStatistic/IBuyRule 真类 + BUY_INFO/SALE_INFO 结构 + 全局引用 | CSecretShop::BuyItem、IBuyRule::SendSecretShopBuyItem | CUser、CInventory | 秘密商店 | 高 |
| eventReward | 22 | 事件奖励脚本引擎：导入奖励表、按角色生成背包/装备奖励、邮件发送、随机属性 | ImportRewardScript、importRewardTable、createCharacInvenReward、createCharacEquipReward、sendPostalReward、unsealRandomOption | CUser、CInventory、CDataManager | 事件奖励 | 高 |
| ARAD::SCRIPT::AvatarConvert | 22 | 时装转换脚本：加载转换表、校验材料、返回转换结果（ConvertResult/GetInfo） | loadScript、getConvertResult、clearScript | ARAD::SCRIPT、CUser | 时装活动 | 高 |
| SpecialItemHandler | 21 | 商城特殊物品处理器：按特殊物品类型分派到 11 种响应（礼包/仓库/点数卡/技能树/栏位扩展/Premium 等） | execute、respond_special_item_package、respond_special_item_cerapoint_giftcard、respond_special_item_premium、respond_special_item_skill_tree_style | WongWork::CCeraShop（G8）、STSpecailItem_Param/Result | 商城 | 高 |
| BingoEvent | 21 | 宾果活动事件：每日棋盘/quiz 标记、连线奖励（1 线/最大线） | StartEvent、reqBingoMark、reqBingoQuizMark、sendOneMatchLineReward、sendMaxMatchLineReward、getBingoSystem | CBingo、CEventBase | 宾果活动 | 高 |
| CAutoMarketConditionsControl | 20 | 自动市场条件控制：按服务器状态调节物品/金币掉落率与稀有度（DB+脚本） | LoadDatabase、LoadScript、ChangeItemRarity、GetItemDropRate、GetGoldDropAmountRate | CDataManager、DBMgr | 市场活动 | 高 |
| private_store::CPacketBufPrivate | 19 | 私人商店包构造器：Create/Enter/Exit/Buy/Remove/CompleteDisplay/MoveToGate 命令包与通知包 | MakeCmdpacketCreatePrivateStore、MakeCmdpacketBuyPrivateStoreItem、MakeNotipacketPrivateStoreInfo、MakeErrorReturnPacket | CPrivateStore、CUser | 私人商店 | 高 |
| SDCActiveStatusSyncCommon | 19 | SDC 主动状态同步公共计算：出血/中毒/灼烧/疾病 DoT 的伤害、时长、参数 | getBleedingDamageServer、getPoisonDamage、getBurnDamage、getActiveStatusDurationClient/Server、makeEtcParameters | SDCActiveStatusSyncServer、STSDCActiveStatusSyncData* | 状态同步 | 高 |
| CCeraShopGoods | 19 | 商城商品：Cera/金币/里程/WinPoint 价格、组/子组、相关物品、赠送/堆叠限制、徽章权重 | GetCeraPrice、GetGoldPrice、GetMileagePrice、GetItemIdx、GetRelatedItem、isGiftDisallowance_、isStackBuyable | STCeraShopItem、CItemLimitEdition、WongWork::CCeraShop（G8） | 商城 | 高 |
| GiveGrowCreatureEvent | 18 | 成长宠物赠送活动：校验活动条件、按角色发宠物、同步信息 | StartEvent、CheckEventInfo、processEvent、SendGrowthCreatureEventInfo | GrowthCreatureEvent、CUser、CEventBase | 宠物活动 | 高 |
| Event_Upgrade_Jar | 18 | 强化罐子活动：配方/NPC/概率/折扣/幸运强化券（LoadScript from Etc/EventUpgradeJar.etc） | LoadScript、GetProbability、CheckMaterialIndex、getBoosterIndex_byUpgradeCardIndex、isFortune、isNewNPC | upgrade_table_t、CUser | 强化活动 | 高 |
| Arad_OnePlusCardEvent_ItemList | 18 | OnePlusCard 活动物品列表：按地图限制查找物品（Data 条目） | find_item、is_limited_map、parsing | CDataManager | 活动 | 中 |
| nexon::cash::UDPSocket | 17 | Nexon SDK UDP socket 封装 | open、bind、recv、send、setOptNonBlock | （独立网络层） | 现金 SDK | 高 |
| Redeem_Item::CRedeemItem | 17 | 赎回系统核心：物品回收（FP 校验、可加过滤、价格）、赎回列表发送、DB 读写 | RedeemItem、AddRedeemList、GetItemPrice、Send_RedeemList、_CheckVaildIndex_N_GetIter、loadData、_saveData | CUser、CInventory、Inven_Item | 商城/赎回 | 高 |
| OneADayItemShopEvent | 17 | 一日物品商店活动：每日限购 + 任务清关记录（buyItemLog/questClearLog） | StartEvent、StartAction、delivery、isQuestId、questClearLog、buyItemLog | CEventBase、CQuestShop | 活动商店 | 高 |
| GrowthEquipEvent | 17 | 成长武器活动：赠送成长武器箱、选择/无限成长武器、同步信息 | GiftGrowthWeaponBox、SelectGrowthWeapon、SendInfinityGrowthWeapon、SendGrowthWeaponEventInfo | CUser、CEventBase | 武器活动 | 高 |
| CerashopAddRestrict::Manager | 17 | 商城限购管理器：按 IPG no 每日购买限制、加载/检查/登记/同步 | Load、CheckBuyableProduct、InputBuyInfo、IsBuyableRestrictItem、SendSyncPacket、makeSyncPacket | CerashopAddRestrict::ScriptLoader、CUser、CCeraShop（G8） | 商城 | 高 |
| CEventManager | 17 | **事件管理器**：166 槽 CEventBase* 数组；启动时 new 约 50 个事件对象；LoadEventFromDB 从 dnf_event_log 读启用事件并 TriggerEventStart | InitEventManager、LoadEventFromDB、TriggerEventStart、TriggerEventEnd、AddEvent、GetRepeatEvent、BroadcastEventInfo、eventDeliveryNotify、MakeNotiEventInfo | CEventBase、CDelivery、DBMgr、MySQL、GameWorld | 事件体系 | 高 |
| CConditionEventManager | 17 | 条件事件管理器：金卡/免费卡奖励步骤、双倍金币卡判断、错误卡检查（脚本驱动） | RequestConditionEventReward、GetConditionRewardInfo、IsDoubleGoldCard、IsFreeGoldCard、ProcessCheckStepUp、ConditionRewardSameItemCombine | CConditionEvent、stConditionEventRewardInfo、CUser | 条件活动 | 高 |
| CBingo | 17 | 宾果活动逻辑：每日棋盘/quiz 值、连线计算、重置（含测试态） | getTodayBoard、getIndexTodayBoard、calBoradMatchLine、getQuizIndex、getQuizValue、initUserData、resetBoard | BingoEvent、CUser | 宾果活动 | 高 |
| Arad_Mileage_Data | 17 | 里程（Mileage）点数表：脚本解析（Nexon/CeraShopMileage.txt）、查找默认值 | parsing、find、default_value | CDataManager、Arad_MileageProcess | 商城/里程 | 高 |
| nexon::cash::NexonCash | 16 | （同上）Nexon 现金门面，死代码 | — | — | — | 高 |
| EventClassify::CEventEntity | 16 | 脚本事件实体基类：起止时间、记录类型、事件标志、初始化数据发送 | set_event_data、is_eventing、get_event_start_time、get_db_table_name、send_init_data | InGameEventScript、CUser、PacketGuard | 事件/脚本活动 | 高 |
| EventClassify::CAttendance | 16 | 签到（出勤）事件实体：按疲劳条件/最终日条件发签到奖励邮件 | send_attend_reward_item、send_attend_final_rward_item、get_fatigue_condition、get_final_day_condition、get_mail_data | InGameEventScript、CUser | 签到活动 | 高 |
| CEventStayTime | 16 | 在线时长活动：按停留时间分档发奖励（RewardGoGoFighter 遍历全服用户） | StartEvent、RegistNextTimer、getRewardStayTime、getIntervalStayTime、dailyresetData、RewardGoGoFighter::operator() | GameWorld::ProcessAllUsers、TimerDispatcher、CUser | 在线活动 | 高 |
| CEventBase | 16 | 事件基类（虚表）：StartEvent/StartAction/deliveryStart/deliveryEnd/EndEvent 等虚槽 + 状态标志 | StartEvent、StartAction、deliveryStart、deliveryEnd、SetEventFlag、IsEventing、changeCharacName、dailyresetData | CDelivery、CUser、Word_Param | 事件体系 | 高 |
| nexon::cash::ByteBuffer | 16 | Nexon SDK 序列化缓冲（operator<</>>/wrap/length） | operator<<、operator>>、wrap、length | NCashImpl、NCashMessage | 现金 SDK | 高 |
| NewAccountLevelUpEventToJob | 15 | 新账号升级转职活动：按升级目标转职发奖励并同步 | StartEvent、processLevelUpToJob、sendNewAccountLevelUpToJobData、IsEventing | CUser、CEventBase | 升级活动 | 高 |
| LevelupSupportSciprt | 15 | 升级支援脚本（分步物品条目 ItemInfo；loadScript/clearScript） | loadScript、clearScript | LevelupSupportEventManger | 升级活动 | 高 |
| LevelupSupport2ndScript | 15 | 2nd 升级支援脚本 | loadScript、clearScript | LevelupSupport2ndEventManger | 升级活动 | 高 |
| DB_UpdateCeraShopPurchaseCount | 15 | 商城购买计数 DB 请求：select/insert/update 购买次数 | makeRequest、_selectPurchaseCount、_insertPurchaseCount、_updatePurchaseCount、dispatch | DBMgr、EventClassify::CPurchaseCashItemBonus | 商城/活动 | 高 |
| MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON | 14 | 聊天表情游戏选项保存消息（_slot_String 数组） | （数据结构） | CUser、CGameOption | 社交 | 中 |
| GrowthCreatureEvent | 14 | 成长宠物事件数据（eventCharacInfo 结构） | （数据） | GiveGrowCreatureEvent | 宠物活动 | 中 |
| GreyImage | 14 | 灰度图 alpha 缓冲（游戏内图像处理，如技能范围贴图） | init、getAlpha、setAlpha、setAlphaAsMax、sampleAlpha、reset | （图像库） | 通用工具 | 中 |
| EventNewCharacterReward | 14 | 新角色奖励活动：指定职业/经验比例奖励 | StartEvent、eventCharacterJob、eventExpRatio、isEventCharacter | CEventBase、CUser | 新角色活动 | 高 |
| CCoinRefillEvent | 14 | 硬币回充活动：按时间回充活动硬币并注册下次定时 | StartEvent、registNextRefillTimer、getNextEventTime、getLastEventTime | TimerEventCoinRefill、CEventBase | 活动 | 高 |
| Arad_GiftItem_Set | 14 | Arad 等级礼包物品集合：按等级检查发送邮件 | open、send_mail、level_check、find、str_to_enum | CUser、CDataManager | 礼包活动 | 高 |
| pc_room | 13 | PC 网吧系统：网吧用户判定、租借物品（InstanceRentalSystem）、奖励段/选择索引 | IsPcRoomUser、CheckRentableEnvironment、GetRentItemInfo、ProcessEquipItem、ProcessInsertItem、GetRewardSection | InstanceRentalSystem、EventRewardItemInfo、CUser | PC 网吧 | 高 |
| nexon::cash::TransactionManager | 13 | Nexon SDK 交易注册表（单例；vector+map 按 tx_id 管理） | instance、addTransaction、removeTransaction、getTransaction、getNextTransactionID、confirm、cancel | nexon::cash::Transaction | 现金 SDK | 高 |
| EventClassify::CUsedFatigueGiveItem | 13 | 消耗疲劳送物品事件实体（按用户类型/疲劳计数发物品） | sendEventItemFromFatigue、verifyApplyUser、get_user_type、is_eventing | InGameEventScript、CUser | 疲劳活动 | 高 |
| EventClassify::CObjectBringUp | 13 | 养成物（BringUp）活动：疲劳培养 + 材料规则验证后发奖励 | sendBringUpReward、sendEventItemFromFatigue、verifyGiveBringUpReward、verifyMaterialItemByRule | InGameEventScript、CUser | 养成活动 | 高 |
| EventClassify::CLevelUpReward | 13 | 升级奖励事件实体：按接收等级发奖励邮件/物品 | send_reward_from_recv_level、check_recv_level、is_recv_check_item、set_reward_item、do_action | InGameEventScript、CUser | 升级活动 | 高 |
| CPartyExpBonusEvent | 13 | 组队经验加成活动（getBonusRate） | StartEvent、EndEvent、getBonusRate | CEventBase | 活动 | 高 |
| CPCRoomBurningEvent | 13 | 网吧燃烧经验活动（getExpFactor/IsEventing） | StartEvent、getExpFactor、IsEventing | CEventBase | 网吧活动 | 高 |
| CDeathTowerWinPointEvent | 13 | 死亡之塔胜点活动（getBonusRate） | StartEvent、getBonusRate | CEventBase | 活动 | 高 |
| AvatarCoin | 13 | 账号级头像硬币货币（头像转盘消耗；DB member_avatar_coin） | Add、Use、BuyProcess、GetPackage、SendSyncPacket、SaveToDB、HistoryLog::AddLog/SubLog | CUser、DB_LoadInventory | 头像活动 | 高 |
| secretshop::CSecretShop | 12 | 秘密商店：抽奖 NPC/物品列表、按规则（金币/配方）购买 | BuyItem、LotteryItems、LotteryNpc、CheckLottery、GetRule、SendSecretShopItemList | secretshop::IBuyRule、CUser、CInventory | 秘密商店 | 高 |
| secretshop::CSecretShopStatistic | 12 | 秘密商店统计：展示/购买/价格记录 + 地下城/NPC 数据上报 | RecordShow、RecordBuy、RecordPrice、GetDungeonData、GetNpcPos、SendSecretShopStatistic | DBMgr、CUser | 秘密商店 | 高 |
| UsedFatigueRewardItem | 12 | 疲劳消耗奖励物品表（Data 条目/parsing/find） | parsing、find | CDataManager | 疲劳活动 | 高 |
| STCeraShopItem | 12 | 商城物品 DB 条目（Cera/金币价格、限售标志、operator==） | getCeraPrice、getGoldPrice、isLimitSaleItem、clear | CCeraShopGoods | 商城 | 高 |
| LevelupSupportEvent | 12 | 升级支援活动事件包装（Start/End 通知） | StartEvent、EndEvent | LevelupSupportEventManger、CEventBase | 升级活动 | 高 |
| LevelUpBefore70LvEvent | 12 | 70 级前升级活动（IsEventing） | StartEvent、IsEventing | CEventBase | 升级活动 | 高 |
| EventGiveMeBox | 12 | “Give Me Box”礼盒活动（kRewardItem_ 奖励表） | StartEvent、EndEvent | CEventBase | 活动 | 高 |
| EventClassify::CPurchaseCashItemBonus | 12 | 商城购买送好礼事件：目标商品计数→DB→奖励邮件 | sendPurchaseBonusReward、updateTargetGoodsCount、verifyGiveBonusReward | DB_UpdateCeraShopPurchaseCount、Inter_UpdatePurchaseCashItemBonus、stCeraShopIPGRequest_t | 商城/活动 | 高 |
| EventClassify::CAvatarDisjointRandomReward | 12 | 时装分解随机奖励事件：删除时装、随机奖励 + 统计上报 | sendRandomItemReward、deleteAvatarItem、getRewardItem、SendDisjointAvatarStatistic、SendCreateEmblemStatistic | CItem、CStatisticServerProxy、CUser | 时装活动 | 高 |
| CWeekendBonusEvent | 12 | 周末加成活动 | StartEvent、EndEvent | CEventBase | 活动 | 高 |
| CVendingMachineBonusEvent | 12 | 自动售货机奖励活动 | StartEvent、EndEvent | CEventBase、TimerVendingMachineItemNotify | 活动 | 高 |
| CUXGameLogEvent | 12 | UX 游戏日志事件（开关） | StartEvent、EndEvent | CEventBase | 日志活动 | 高 |
| CTrcOnOffEvent | 12 | TRC（反外挂）开关事件（IsEventing） | StartEvent、IsEventing | CEventBase | 安全 | 高 |
| CStopOverlabExpEvent | 12 | 停止经验重叠事件 | StartEvent、EndEvent | CEventBase | 活动 | 高 |
| CSecretShopEvent | 12 | 秘密商店活动开关事件 | StartEvent、EndEvent | CEventBase、secretshop | 秘密商店 | 高 |
| CSchoolMatchEvent | 12 | 学园祭（School Match）活动（AppendInfo 覆写） | StartEvent、AppendInfo | CEventBase | 活动 | 高 |
| CRestrictCharacCreationEvent | 12 | 角色创建限制活动（getLimitCreateCharacter） | StartEvent、getLimitCreateCharacter | CEventBase | 活动 | 高 |
| CPowerWarEvent | 12 | 势力战（Power War）活动开关（CleanupPowerWarServerMessage） | StartEvent、EndEvent、CleanupPowerWarServerMessage | CEventBase、CPowerWarVictoriousEvent | 势力战活动 | 高 |
| CPCRoomFatigueEvent | 12 | 网吧疲劳活动（IsEventing） | StartEvent、IsEventing | CEventBase | 网吧活动 | 高 |
| CMemberExpRewardEvent | 12 | 会员经验奖励活动（getMemberExpRewardRatio） | StartEvent、getMemberExpRewardRatio | CEventBase | 活动 | 高 |
| CMaxFatigueFactorEvent | 12 | 最大疲劳系数活动（getMaxFatigueFactor） | StartEvent、getMaxFatigueFactor | CEventBase | 疲劳活动 | 高 |
| CItemLimitEditionMgr | 12 | 限量版物品管理器（注册/更新/移除/通知包） | registItem、updateItem、removeItem、makeItemLimitEditionInfo、makeItemLimitEditionRemoveInfo | CItemLimitEdition、CCeraShop（G8） | 商城 | 高 |
| CFirstServerOpenEvent | 12 | 首服开放活动（IsEventing） | StartEvent、IsEventing | CEventBase | 活动 | 高 |
| CFatigueAttendance | 12 | 疲劳出勤活动 | StartEvent、EndEvent | CEventBase | 签到活动 | 高 |
| CExpDoubleEvent | 12 | 经验翻倍活动（getExpFactor） | StartEvent、getExpFactor、EndEvent | CEventBase | 活动 | 高 |
| CEventCharacterHandler | 12 | 活动角色创建器：等级/成长类型/新技能/清任务/物品生成 | _makeEventCharacter、_SetLevel、_SetGrowType、_MasterNewSkill、_SetClearedQuest、_AddItem | STEventCharacterInfo、CUser | 活动角色 | 高 |
| CCoinEventPerDay | 12 | 每日硬币活动（getCoinNoPerDay） | StartEvent、getCoinNoPerDay | CEventBase | 活动 | 高 |
| CCoinEventOnCharCreate | 12 | 建角色送硬币活动（getCoinNoOnCreateCharac） | StartEvent、getCoinNoOnCreateCharac | CEventBase | 活动 | 高 |
| CCharacterDayEvent | 12 | 角色日活动（getEventJob） | StartEvent、getEventJob | CEventBase | 活动 | 高 |
| CBurningFatigueEvent | 12 | 燃烧疲劳活动（getBonusExpRate/getRefillFatigue） | StartEvent、getBonusExpRate、getRefillFatigue | CEventBase | 疲劳活动 | 高 |
| CBurnigGoldMonsterEvent | 12 | 燃烧金币怪物活动 | StartEvent、EndEvent | CEventBase | 活动 | 高 |
| CBingoTest | 12 | 宾果测试驱动（run/calBoradMatchLine/getTimeFromString） | run、calBoradMatchLine、resetBoard、resetQuiz | CBingo | 宾果测试 | 高 |
| CAradRyosikaEvent | 12 | Arad Ryosika 活动（ApplyDatePeriod/DoEvent/SendMail） | StartEvent、DoEvent、SendMail、ApplyDatePeriod | CEventBase、CUser | 活动 | 高 |

## 2. 事件体系

### 2.1 注册与触发机制（CEventManager 为核心）

**数据结构**：`CEventManager` 内含 `CEventBase* m_pEvent[0xA6]`（166 槽数组，事件 ID 即下标，`AddEvent(id, ev)` 写槽、`GetRepeatEvent(id)` 按 id 取对象，id>0xA5 返回空）。另有 CDelivery\*（+0x298）用于活动投递通知。

**注册**：`InitEventManager()` 依次 `new` 约 50 个具体 C*Event 对象并写入固定槽位（已核实：CUnlimitFatigueEvent、CMaxFatigueFactorEvent、CExpDoubleEvent、CCoinEventPerDay、CCoinEventOnCharCreate、CLeadingChannelEvent、CItemDropRatioEvent、CPCRoomBurningEvent、CGuildWarEvent、CPCRoomFatigueEvent、CReformingDanjinEvent、CCoinRefillEvent、CBurningFatigueEvent、CClearRewardCardEvent、CCeraShopBonusItemEvent、CTournamentPvPEvent、CGoldCardBlankItemEvent、CPcRoomCardBlankItemEvent、CPowerWarEvent、CPCRoomWorldDropEvent、CPartyExpBonusEvent、CStabToDeathEvent、CSchoolMatchEvent、CAutoMarketConditionsControlEvent、CVendingMachineBonusEvent、CBurnigGoldMonsterEvent、CNoNeedGoldOnGuildCreateEvent、CDeathTowerWinPointEvent、CNotApplyBalkeunEvent、CCharacterDayEvent、CRestrictCharacCreationEvent、COnTimeEvent、CBreakAwayPreventEvent、CPowerWarVictoriousEvent、CSecretShopEvent、CFatigueAttendance、CWeekendBonusEvent、CConditionEvent、CUXGameLogEvent、BlueMarbleDungeonEvent、CStopOverlabExpEvent、CEventAdvanceAltarOpen、CAradRyosikaEvent、Arad_MomijiEvent、LevelupSupportEvent、CEventStayTime、CEventCreateDnf、EventGiveMeBox 等）。

**DB 驱动启停**：`LoadEventFromDB()` 执行 `SELECT event_type, parameter1, parameter2 FROM dnf_event_log WHERE end_time=0 AND server_id IN (0,%d) AND unix_timestamp()>=start_time ORDER BY start_time`，逐行调 `TriggerEventStart(event_type)`。即：活动通过向 DB 表插入“event_type + 开始时间”行来开启。

**触发分发**：`TriggerEventStart(id, Word_Param)`：①`filterEvent(id)` 按频道类型位掩码过滤（部分事件仅特定频道生效，事件 id 2 恒禁用）；②`GetRepeatEvent(id)` 取对象；③调虚函数 `StartEvent(Word_Param)`（vtable+0x10）；④`BroadcastEventInfo()` 广播事件状态包（ENUM_NOTIPACKET_EVENT_INFO）；⑤`deliveryStart(CDelivery*)`（vtable+0x28，活动投递开启）；⑥`StartAction()`（vtable+0x14，实际动作）。`TriggerEventEnd(id)` 对称调用 `deliveryEnd`（+0x2c）与 `EndEvent`（+0x30）。`eventDeliveryNotify(id, DeliveryMsg&)` 供活动内投递消息。

**脚本事件（EventClassify）是另一条并行体系**：`CEventScriptMng::initScriptlist(InGameEventInfoList&)` → `init_evnet_entity` → 按记录类型 `create_event_entity` 生成 `CEventEntity` 子类（CAttendance/CLevelUpReward/CPurchaseCashItemBonus/CAvatarDisjointRandomReward/CUsedFatigueGiveItem/CObjectBringUp/CPcRoomPlayTime/CExchangeRandomItemReward/CAddItemCountDB/CAccountFirstLogin(+Daily)/CFatigueQuantity），各实体从 `InGameEventScript`（RDAR 脚本，如 ingame_event_script_list、EventCharacter.lst）取配置。挂钩点：`CUser::_onLevelUp`→`process_level_up_reward`；`CUser::FatigueUp`→`send_gift_fatigue_item`；`Inter_UpdatePurchaseCashItemBonus`→`send_purchase_bonus_mail`；`process_add_item_count_db` 等。

### 2.2 代表性事件类表

| 事件类 | 一句话作用（什么活动/奖励） |
|---|---|
| CCoinEventPerDay | 每日登录领活动硬币（GetCoinNoPerDay） |
| CCoinEventOnCharCreate | 创建角色送活动硬币（GetCoinNoOnCreateCharac） |
| CCoinRefillEvent | 活动硬币定时回充（TimerEventCoinRefill） |
| CExpDoubleEvent | 经验翻倍活动（GetExpFactor） |
| CMaxFatigueFactorEvent | 最大疲劳上限提升（GetMaxFatigueFactor） |
| CUnlimitFatigueEvent | 疲劳值无限制活动 |
| CFatigueBuffEvent | 疲劳 buff 活动 |
| CFatigueGiveItemEvent | 疲劳消耗送物品活动 |
| CBurningFatigueEvent | 燃烧疲劳：额外经验/回充疲劳（getBonusExpRate/getRefillFatigue） |
| CPCRoomBurningEvent | 网吧燃烧经验（getExpFactor） |
| CPCRoomFatigueEvent | 网吧疲劳活动 |
| CPCRoomPlayTimeEvent | 网吧在线时长活动 |
| CPCRoomWorldDropEvent | 网吧世界掉落活动 |
| CPcRoomCardBlankItemEvent | 网吧空卡牌物品活动 |
| CPartyExpBonusEvent | 组队经验加成（getBonusRate） |
| CMemberExpRewardEvent | 会员经验奖励（getMemberExpRewardRatio） |
| CWeekendBonusEvent | 周末加成活动 |
| CStopOverlabExpEvent | 停止经验叠加（防刷） |
| CDeathTowerWinPointEvent | 死亡之塔胜点加成（getBonusRate） |
| CItemDropRatioEvent | 物品掉落率调整 |
| CBurnigGoldMonsterEvent | 燃烧金币怪物活动 |
| CGoldCardBlankItemEvent | 金卡空白物品活动 |
| CDoubleGoldCardEvent | 金卡双倍活动 |
| CClearRewardCardEvent | 清关奖励卡活动 |
| CCeraShopBonusItemEvent | 商城购买加成（getBonusRate） |
| CEventCeraShopRewardPoint | 商城 Cera 点数回馈（SendReward） |
| CVendingMachineBonusEvent | 自动售货机奖励活动 |
| CSecretShopEvent | 秘密商店开放活动 |
| CAutoMarketConditionsControlEvent | 市场条件控制活动开关 |
| CCharacterDayEvent | 角色日（指定职业）活动 |
| CRestrictCharacCreationEvent | 限制角色创建活动（getLimitCreateCharacter） |
| CSchoolMatchEvent | 学园祭活动（AppendInfo） |
| CTournamentPvPEvent | 锦标赛 PvP 活动 |
| CIntegratedPvPServerMatchEvent | 整合 PvP 服务器匹配活动 |
| CPvPLiveEvent | PvP 直播活动 |
| CPvPExpPenaltyEvent | PvP 经验惩罚活动 |
| COnlinePreliminaryEvent | 在线预选赛活动 |
| CGuildWarEvent | 公会战活动 |
| CNoNeedGoldOnGuildCreateEvent | 建公会免金币活动 |
| CNotApplyBalkeunEvent | 不适用巴尔肯（副本减益）活动 |
| CLeadingChannelEvent | 主导频道活动 |
| CPowerWarEvent | 势力战开关活动 |
| CPowerWarVictoriousEvent | 势力战胜利奖励活动 |
| CStabToDeathEvent | 一击必杀（刺死）活动 |
| CReformingDanjinEvent | 金丹改革活动 |
| CBreakAwayPreventEvent | 防脱离（防退出惩罚）活动 |
| CBloodDungeonRewardFirstEvent | 血之地下城第一段奖励（GetGold） |
| CBloodDungeonRewardSecondEvent | 血之地下城第二段奖励（GetGold） |
| CDnFLeaguePromoteFirstEvent | DnF 联赛晋级第一阶段活动 |
| CDnFLeaguePromoteSecondEvent | DnF 联赛晋级第二阶段活动 |
| CEventAdvanceAltarOpen | 高级祭坛开放活动 |
| CAssaultOnOffEvent | 突袭模式开关活动 |
| CGmRegistEvent | GM 注册活动 |
| CUXGameLogEvent | UX 游戏日志开关 |
| CTrcOnOffEvent | TRC 反外挂开关 |
| CFirstServerOpenEvent | 首服开放活动（IsEventing） |
| CAradRyosikaEvent | Arad Ryosika（凉席）活动：期间邮件奖励 |
| Arad_MomijiEvent | Arad 红叶活动 |
| LevelupSupportEvent | 升级支援：分步发装备/物品 |
| LevelupSupport2ndEvent | 2nd 升级支援 |
| LevelUpBefore70LvEvent | 70 级前升级活动 |
| NewAccountLevelUpEventToJob | 新账号升级转职奖励 |
| EventNewCharacterReward | 新角色创建奖励（职业/经验比例） |
| EventGiveMeBox | Give Me Box 礼盒活动 |
| AttendanceEvent | 出勤签到（getRewordItem） |
| CFatigueAttendance | 疲劳出勤活动 |
| BingoEvent | 宾果：每日棋盘+quiz 连线奖励 |
| COnTimeEvent | 在线定时奖励（起止时间+物品+领取用户表） |
| CEventStayTime | 累计在线时长分档奖励 |
| Event_Upgrade_Jar | 强化罐子：概率/折扣/幸运强化券 |
| GiveGrowCreatureEvent | 送成长宠物 |
| GrowthEquipEvent | 送成长武器（无限成长） |
| OneADayItemShopEvent | 一日商店：每日限购+任务联动 |
| EventClassify::CAttendance | 脚本签到（疲劳条件/最终日奖励邮件） |
| EventClassify::CLevelUpReward | 脚本升级奖励（按接收等级） |
| EventClassify::CUsedFatigueGiveItem | 脚本消耗疲劳送物品 |
| EventClassify::CObjectBringUp | 脚本养成物培养奖励 |
| EventClassify::CPurchaseCashItemBonus | 脚本商城购买送好礼 |
| EventClassify::CAvatarDisjointRandomReward | 脚本时装分解随机奖励 |
| EventClassify::CExchangeRandomItemReward | 脚本材料交换随机奖励 |
| EventClassify::CAccountFirstLogin | 脚本账号首登奖励 |
| EventClassify::CAccountFirstLoginDaily | 脚本每日首登奖励 |
| EventClassify::CPcRoomPlayTime | 脚本网吧游玩时长奖励 |

## 3. 商城/现金体系

### 3.1 现金/计费

**Garena/Taiwan 计费（本构建实际使用）**：
1. 玩家购买商城物品 → `WongWork::CCeraShop::ProcessBuyRequest`（G8）→ 校验 `CCeraShopGoods`/`CItemLimitEdition`/`CerashopAddRestrict` → 生成 IPG 请求 `SIPGData`（`WongWork::IPG::CIPGMgr::PutIPGRequest`，编号由 `CGenUniqueNo::genIPGNo` 生成）。
2. `CIPGWorker::ProcIPGSyncForTaiwan`（IPG 计费工作线程）按请求类型调 `Taiwan::TaiwanCash`：`purchase`/`charge`/`gift`/`confirm`/`cancel`/`getBalance`/`ceraPoint`，交易记录为 `Taiwan::BillTransaction`；具体请求/响应走模板 `processBilling<Taiwan::PurchaseQuery|ChargeQuery|GiftQuery|ConfirmQuery|CancelQuery|BalanceQuery|BalancePointQuery|CeraPointQuery|EntranceQuery>`（各 Query 提供 setQuery/execQuery/getResult）。
3. 结果回包 → `CCeraShop::ProcessIPGUserData`（成功发物品）或 `_ProcessIPGError`（失败处理）；`_processCoin/_processItem/_processCreature/_processAvatarGift/_processItemGift` 处理各物品类型；特殊物品走 `CallSpecialItemHandler→SpecialItemHandler::execute`（礼包/仓库/点数卡/技能树/栏位扩展/Premium）。
4. 购买后联动：`EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount` → `DB_UpdateCeraShopPurchaseCount` → DB → `Inter_UpdatePurchaseCashItemBonus`（互通）→ `CEventScriptMng::send_purchase_bonus_mail` 发奖励；`ARAD::CeraShopPurcahseCountBonus` 脚本按累计购买数给 bonus；`Arad_MileageProcess`/`Arad_Mileage_Data` 发里程点数。
5. 玩家侧入口：`Dispatcher_BuyCeraShopItem`（含免费硬币地下城倒计时购买）、`Dispatcher_BuyCeraShopLimitItem`（限量版：_checkBuyCondition/_checkUserState）。

**nexon::cash SDK（韩国版，本二进制死代码）**：`nexon::cash` 命名空间内为完整 Nexon 现金 SDK：`TCPSocket`/`UDPSocket`（socket 封装）、`ByteBuffer`（序列化）、`NCashMessage`（帧）、`NCashImpl`（协议实现）、`NexonCash`（门面）、`TransactionManager`/`Transaction`/`NXTransaction`/`UserBalance`（交易管理）。核实：`NexonCash` 全部方法在本二进制 **无任何调用点**（0 处 call），仅 `NexonCash::purchase→NCashImpl::purchase` 自调用；`TransactionManager` 亦仅被 SDK 内部使用。→ 该 SDK 为跨构建编译保留，实际运营走 Taiwan 计费。`nexon_packet` 命名空间的 stHeader/stPacket/stLoginPacket/CPacketHelper 即该 SDK 的登录/长度协议辅助。

### 3.2 CeraShop 商品/限购/限量

- `CCeraShopGoods`（G6 侧数据结构，逻辑在 G8 `WongWork::CCeraShop`）：每商品含 Cera/金币/里程/WinPoint 四价格、组/子组索引、相关物品、赠送/堆叠/Cera 点禁用标志、徽章权重；以 `std::unordered_map<int, CCeraShopGoods*>` 按物品索引注册，数据来自 `STCeraShopItem`（DB 行）。
- `CItemLimitEdition` + `CItemLimitEditionMgr`：限量版商品（IPG no、价格、起止时间、账号/角色创建时间/职业/等级条件、总销量/当前销量、限量时装类型选择）；Mgr 维护 `unordered_map<uint, CItemLimitEdition*>` 并生成加入/移除通知包。
- `CerashopAddRestrict`（+ Manager/ScriptLoader/UserInfo/InfoDaily/DBInputData）：每日每 IPG no 购买限制：脚本加载（LoadScript/LoadScriptDaily）→ 管理器 Load/LoadProcess → `CheckBuyableProduct`/`InputBuyInfo`/`UpdateBuyableRestrictItem`，并通过 `SendSyncPacket/makeSyncPacket` 在服务器间同步。
- `DB_UpdateCeraShopPurchaseCount`/`DB_StatisticCeraShopGiftLog`/`DB_LogCeraShopError`/`Inter_CeraShopPurchaseCount`：购买计数、赠送日志、错误日志的 DB 与互通分发器。

### 3.3 赎回（Redeem_Item）

`Redeem_Item::CRedeemItem`（CUser 内嵌）：把物品按表回收换取 Cera/金币/经验，支持背包扩容赎回（`Inven_Item_Expand_RedeemInfo` 列表）；`AddRedeemList`（FP 物品过滤 `_isFPItem`、可加过滤 `isAddableFilter`）、`RedeemItem`（按价回收）、`GetItemPrice`、`Send_RedeemList`（发客户端）、`loadData`/`_saveData`（DB：SIG_REDEEMINFO_LIST_TO_DB）。常量 BUY_FEE/THROW_FEE/MAX_COUNT 定义费率与数量上限（各 312 引用）。

### 3.4 私人商店（private_store）

`CPrivateStore` 对象池化（`StaticPool<private_store::CPrivateStore,300>`）；`CPrivateStoreMgr` 维护卖家 map 与买家注册表，负责创建/进入/退出/购买/移除/保存（DB：E_SAVE_PRIVATE_STORE）与错误处理；`CPacketBufPrivate` 生成全部 CMD/NOTI 包（Create/Enter/Exit/Buy/Remove/CompleteDisplay/MoveToGate/ForceRemove/Info/Item）；位置系统（CPrivateStorePos/PrivateStoreZone/IUserPos）、娃娃机（SetDollCreated/CheckPrivateStoreDoll/GetDollItemID）、广播（CBroadcastPrivate）与字符控制器（CCharacterControllerPrivate）配套；客户端命令分发器（Dispatcher_CreatePrivateStore 等）位于其他组。

### 3.5 秘密商店（secretshop）

`CSecretShop`：打开后从 NPC 列表/物品列表抽奖（LotteryNpc/LotteryItems/CheckLottery），玩家按 `IBuyRule` 购买（`CBuyItembyGold` 金币规则、`CBuyItembyRecipe` 配方规则；CheckLimit/InsertItemIntoInventory/LogCubeStatistic/LogValueStatistic/SendSecretShopBuyItem）；`CSecretShopStatistic` 记录展示/购买/价格并上报；数据：SECRET_SHOP_DATA/SHOPPER/SECRET_SHOP_INFO/RETAILER/SALE_INFO/BUY_INFO。

## 4. 假类/常量组（不是类）

| 名称 | 符号数 | 判定 | 成员构成（从 df_class_methods/demangled 核实） |
|---|---|---|---|
| nexon::cash | 1183 | 命名空间 | NexonCash/NCashImpl/TCPSocket/UDPSocket/ByteBuffer/NCashMessage/TransactionManager/Transaction/NXTransaction/UserBalance + 常量 MAX_NEXON_ID_LENTH、C_ARAD_PROD_TYPE*、INVALID_SOCKET、_MAX_PATH（各 291 引用） |
| Taiwan | 1183 | 命名空间 | TaiwanCash/BillTransaction/GarenaAuthData/AuthGarenaToken/9 个 Query/7 个 Sig*/4 个 Dispatcher + 常量 MAX_GARENA_ID_LENTH、C_ARAD_PROD_TYPE*（各 290 引用） |
| InformNotice | 978 | 常量数组组 | kInformNoticeIndex、kInformNoticeBit 静态 const 数组（各 489 个 rodata 符号，每翻译单元一份）；真实实现类为 CCharacInformNotice/Dispatcher_InformNotice/DB_Save*（另列） |
| InformNotice2nd | 978 | 常量数组组 | kIndex、kBit 静态 const 数组（各 489 rodata 符号） |
| UrgentQuestLevelLimit | 978 | 常量数组组 | kStartLvl、kEndLvl 静态 const 数组（各 489 rodata 符号，紧急任务等级限制表） |
| nexon_packet | 632 | 命名空间 | CPacketHelper/stHeader/stPacket/stLoginPacket/stLogin + 常量 domainString、MaxBodySize（各 316 引用） |
| Redeem_Item | 937 | 命名空间 | 真类 CRedeemItem + 常量 BUY_FEE/THROW_FEE/MAX_COUNT（各 312 引用）+ 结构 Inven_Item_Expand_RedeemInfo（149 引用） |
| private_store | 39 | 命名空间/静态区 | 全局 GetInstancePrivateStoreMgr、g_CharacterController、g_ErrorGenerator、SIG_PRIVATE_STORE*、MaxItemSlotCount、PrivateStoreItem* |
| secretshop | 22 | 命名空间 | 全局 BUY_INFO*/SALE_INFO*/CBuyItembyGold*/CBuyItembyRecipe* 引用 + 结构 |
| ARAD | 38 | 命名空间 | Arad_InterfaceGameScript 工厂（FN_DeleteGameScript/CheckAccountItem）、ENUM_INTERNALPACKET_JPN、SSendEffect、PurcahseBonus*、工具函数（inet_a2n/encryptAES/limitValue/send_mail/uint32Time 等） |
| EventClassify | 1 | 命名空间标签 | 仅 CEventEntity*&& 引用符号；真实类为 CEventScriptMng 等子类 |
| TAG_CHARAC_DATA/ETC/INVEN | 3×3 | 数据结构 | clear() 的 DB 标签结构（角色/ETC/背包快照） |
| UPGRADEJAR | 1 | 静态工具 | doNothing 单符号（Event_Upgrade_Jar 辅助） |
| GrowthWeaponEvent | 2 | 标签 | 仅构造符号（GrowthEquipEvent 子数据标签） |

## 5. 模板实例

本组直接出现的模板实例很少（大部分 StaticPool/DynamicPool 在 G4）：
- `private_store::COperator<int>`（1 符号）：private_store 池化/查找用 int 运算符模板实例。
- `StaticPool<private_store::CPrivateStore, 300>`：CPrivateStore 对象池（在 G4 核心类清单的 StaticPool<private_store> 条目下，本报告在私人商店节说明）。
- `Taiwan::TaiwanCash::processBilling<Taiwan::XQuery>`（9 个模板实例）：计费查询模板，每个 Query 类一套 setQuery/execQuery/getResult。
- `EventClassify::CEventEntity` 系列为类层次而非模板；`std::list<Redeem_Item::Inven_Item_Expand_RedeemInfo>`、`std::map<int,std::list<CEventBase*>>`（事件投递）等标准容器实例不单列。

## 6. 长尾类（<20 符号，逐类一句话；置信度列）

长尾共 551 个类路径。以下按类别分表。

### 6.1 事件/活动类长尾

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| Arad_MomijiEvent | 10 | Arad 红叶（Momiji）活动事件 | 高 |
| Arad_OnePlusCardEvent_ItemList::Data | 5 | OnePlusCard 活动物品列表条目 | 高 |
| AttendanceEvent | 11 | 出勤签到事件（StartEvent/EndEvent/getRewordItem） | 高 |
| CAssaultOnOffEvent | 10 | 突袭模式开关活动 | 高 |
| CAutoMarketConditionsControlEvent | 10 | 市场条件控制活动开关 | 高 |
| CBloodDungeonRewardFirstEvent | 11 | 血之地下城第一段奖励（GetGold） | 高 |
| CBloodDungeonRewardSecondEvent | 11 | 血之地下城第二段奖励（GetGold） | 高 |
| CBreakAwayPreventEvent | 11 | 防脱离（防退出惩罚）活动 | 高 |
| CCeraShopBonusItemEvent | 11 | 商城购买加成（getBonusRate） | 高 |
| CClearRewardCardEvent | 10 | 清关奖励卡活动 | 高 |
| CConditionEvent | 10 | 条件事件（金卡/免费卡活动包装；由 CConditionEventManager 驱动） | 高 |
| CDnFLeaguePromoteFirstEvent | 10 | DnF 联赛晋级第一阶段活动 | 高 |
| CDnFLeaguePromoteSecondEvent | 10 | DnF 联赛晋级第二阶段活动 | 高 |
| CDoubleGoldCardEvent | 10 | 金卡双倍活动 | 高 |
| CEventAdvanceAltarOpen | 10 | 高级祭坛开放活动 | 高 |
| CEventCeraShopRewardPoint | 11 | 商城 Cera 点数回馈（SendReward） | 高 |
| CEventStayTime::RewardGoGoFighter | 4 | 在线时长奖励发放函数对象 | 高 |
| CEventTable | 9 | 事件表：事件 ID↔CEventBase 映射（Insert/Verify/GetEventBase） | 高 |
| CFatigueBuffEvent | 10 | 疲劳 buff 活动 | 高 |
| CFatigueGiveItemEvent | 10 | 疲劳消耗送物品活动 | 高 |
| CGmRegistEvent | 11 | GM 注册活动 | 高 |
| CGoldCardBlankItemEvent | 10 | 金卡空白物品活动 | 高 |
| CGuildWarEvent | 11 | 公会战活动 | 高 |
| CIntegratedPvPServerMatchEvent | 10 | 整合 PvP 服务器匹配活动 | 高 |
| CLeadingChannelEvent | 11 | 主导频道活动 | 高 |
| CNoNeedGoldOnGuildCreateEvent | 11 | 建公会免金币活动 | 高 |
| CNotApplyBalkeunEvent | 11 | 不适用巴尔肯（副本减益）活动 | 高 |
| COnlinePreliminaryEvent | 10 | 在线预选赛活动 | 高 |
| CPCRoomPlayTimeEvent | 11 | 网吧在线时长活动 | 高 |
| CPCRoomWorldDropEvent | 10 | 网吧世界掉落活动 | 高 |
| CPcRoomCardBlankItemEvent | 10 | 网吧空卡牌物品活动 | 高 |
| CPowerWarVictoriousEvent | 11 | 势力战胜利奖励活动 | 高 |
| CPvPExpPenaltyEvent | 10 | PvP 经验惩罚活动 | 高 |
| CPvPLiveEvent | 10 | PvP 直播活动 | 高 |
| CReformingDanjinEvent | 11 | 金丹改革活动 | 高 |
| CServerEvent | 10 | 服务器全局事件（AddExpRate/SubExpRate/TurnOnEvent/TurnOffEvent + 区间/频率） | 高 |
| CStabToDeathEvent | 11 | 一击必杀（刺死）活动 | 高 |
| CTournamentPvPEvent | 10 | 锦标赛 PvP 活动 | 高 |
| CUnlimitFatigueEvent | 11 | 疲劳值无限制活动 | 高 |
| ChattingEmoticon_byEvent | 8 | 按事件开放的表情（isUsable + 起始/结束数组下标） | 高 |
| CheckStayTimeEvent | 8 | 在线时长查询分发器（sendStayTimeData） | 高 |
| EventClassify | 1 | EventClassify 命名空间标签（真实类见 CEventScriptMng/CEventEntity 家族） | 高 |
| EventClassify::CAccountFirstLogin | 9 | 账号首登事件（do_action 发首登奖励邮件） | 高 |
| EventClassify::CAccountFirstLoginDaily | 7 | 每日首登事件（do_action） | 高 |
| EventClassify::CAddItemCountDB | 9 | 物品/任务计数 DB 事件（is_event_item/is_event_quest） | 高 |
| EventClassify::CEventActionMng | 6 | 事件动作执行器（抽奖取物品、发邮件/金币/时装/硬币） | 高 |
| EventClassify::CExchangeRandomItemReward | 11 | 材料交换随机奖励事件（删除材料→随机奖励） | 高 |
| EventClassify::CFatigueQuantity | 8 | 疲劳数量事件（按用户类型/DB 表） | 高 |
| EventClassify::CPcRoomPlayTime | 11 | 网吧游玩时长事件（verifyUserPcRoomPlayEvent/processEventPcRoomPlayTime） | 高 |
| GrowthCreatureEvent::eventCharacInfo | 4 | 成长宠物事件角色信息 | 高 |
| GrowthWeaponEvent | 2 | 成长武器事件标签 | 高 |
| InformNoticeData | 5 | 公告数据（客户端展示用，含 kInformNoticeIndex/Bit 引用） | 高 |
| InformNoticeData2nd | 5 | 2nd 公告数据 | 高 |
| InterCheckStayTimeEvent | 7 | 在线时长查询互通分发器（dispatch_sig） | 高 |
| LevelupSupport2ndEvent | 10 | 2nd 升级支援事件 | 高 |
| LevelupSupport2ndEventManger | 8 | 2nd 升级支援管理器 | 高 |
| LevelupSupportEventManger::EventInfo | 4 | 升级支援事件分步奖励条目结构 | 高 |
| PresentResponceScriptEvent | 8 | 礼物响应脚本事件数据（clear/operator=） | 高 |
| ResetStayTimeEvent | 7 | 在线时长重置分发器（dispatch） | 高 |
| StackablePackage::EventProcessManager | 9 | 可堆叠礼包事件处理 | 高 |
| StackablePackage::EventProcessManager::EventProcessManagerImpl | 4 | 可堆叠礼包事件处理管理实现 | 高 |
| StackablePackage::EventProcessor | 2 | 可堆叠礼包事件处理器接口（GetEventId/GetEventType） | 高 |
| StackablePackage::FindControllableEventProcessor | 3 | 按条件查找可控事件处理器（函数对象） | 高 |
| Taiwan::SigStayTimeEvent | 2 | Taiwan 内部信号：在线时长事件 | 高 |
| nexon::cash::NCashMessage | 9 | Nexon 现金 SDK：TCP 消息帧（encode/decode_header, body） | 高 |
| nexon::cash::Transaction | 8 | Nexon 现金 SDK：单笔交易（execute/confirm/cancel/expired/getUser/id） | 高 |
| nexon::cash::UserBalance | 5 | Nexon 现金 SDK：用户余额+挂起交易集合（balance/addNewTransaction） | 高 |
| private_store | 39 | private_store 命名空间：全局单例/静态（GetInstancePrivateStoreMgr/g_CharacterController/g_ErrorGenerator/SIG_PRIVATE_STORE*） | 高 |
| seriaRoomDecoEventSoundInfo | 8 | 赛丽亚房间装饰事件音效 | 高 |

### 6.2 Timer 定时器回调（119）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| TImerWarRoomTimeBomb | 6 | WarRoom 定时炸弹计时器（房间超时） | 高 |
| TimerAssaultSuperPowerState | 6 | 定时器回调（dispatch_sig）——Assault Super Power State 相关 | 高 |
| TimerAvatarExpire | 8 | 定时器回调（dispatch_sig）——Avatar Expire 相关 | 高 |
| TimerBloodCrazyMonster | 6 | 定时器回调（dispatch_sig）——Blood Crazy Monster 相关 | 高 |
| TimerBloodDungeonClearReward | 6 | 定时器回调（dispatch_sig）——Blood Dungeon Clear Reward 相关 | 高 |
| TimerBloodPhaseRegister0 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 0 相关 | 高 |
| TimerBloodPhaseRegister1 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 1 相关 | 高 |
| TimerBloodPhaseRegister2 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 2 相关 | 高 |
| TimerBloodPhaseRegister3 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 3 相关 | 高 |
| TimerBloodPhaseRegister4 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 4 相关 | 高 |
| TimerBloodPhaseRegister5 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 5 相关 | 高 |
| TimerBloodPhaseRegister6 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 6 相关 | 高 |
| TimerBloodPhaseRegister7 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 7 相关 | 高 |
| TimerBloodPhaseRegister8 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 8 相关 | 高 |
| TimerBloodPhaseRegister9 | 6 | 定时器回调（dispatch_sig）——Blood Phase Register 9 相关 | 高 |
| TimerBloodSmallRoundRegister | 6 | 定时器回调（dispatch_sig）——Blood Small Round Register 相关 | 高 |
| TimerBossDieTimeout | 6 | 定时器回调（dispatch_sig）——Boss Die Timeout 相关 | 高 |
| TimerCardSelect | 6 | 定时器回调（dispatch_sig）——Card Select 相关 | 高 |
| TimerCheckConn | 7 | 定时器回调（dispatch_sig）——Check Conn 相关 | 高 |
| TimerCheckForcedDisconnect | 7 | 定时器回调（dispatch_sig）——Check Forced Disconnect 相关 | 高 |
| TimerCheckHumanCertifyTimeout | 6 | 定时器回调（dispatch_sig）——Check Human Certify Timeout 相关 | 高 |
| TimerCheckMailTimeOut | 6 | 定时器回调（dispatch_sig）——Check Mail Time Out 相关 | 高 |
| TimerCheckPaidPCRoomTerm | 6 | 定时器回调（dispatch_sig）——Check Paid P C Room Term 相关 | 高 |
| TimerCheckPowerWarAbuser | 7 | 定时器回调（dispatch_sig）——Check Power War Abuser 相关 | 高 |
| TimerCheckPvPRoomUser | 6 | 定时器回调（dispatch_sig）——Check Pv P Room User 相关 | 高 |
| TimerCheckRecvPvpEndResult | 6 | 定时器回调（dispatch_sig）——Check Recv Pvp End Result 相关 | 高 |
| TimerClearDungeonCardSelectRight | 6 | 定时器回调（dispatch_sig）——Clear Dungeon Card Select Right 相关 | 高 |
| TimerClearDungeonReward | 6 | 定时器回调（dispatch_sig）——Clear Dungeon Reward 相关 | 高 |
| TimerClearDungeonScoreScoll | 6 | 定时器回调（dispatch_sig）——Clear Dungeon Score Scoll 相关 | 高 |
| TimerCloseAssault | 7 | 定时器回调（dispatch_sig）——Close Assault 相关 | 高 |
| TimerCompleteLoadAfterAssaultTimeout | 7 | 定时器回调（dispatch_sig）——Complete Load After Assault Timeout 相关 | 高 |
| TimerCompleteLoadAssaultTimeout | 7 | 定时器回调（dispatch_sig）——Complete Load Assault Timeout 相关 | 高 |
| TimerConnectMonitorServer | 7 | 定时器回调（dispatch_sig）——Connect Monitor Server 相关 | 高 |
| TimerConnectP2PAfterAssaultTimeout | 7 | 定时器回调（dispatch_sig）——Connect P 2 P After Assault Timeout 相关 | 高 |
| TimerConnectP2PAssaultTimeout | 7 | 定时器回调（dispatch_sig）——Connect P 2 P Assault Timeout 相关 | 高 |
| TimerCreature | 6 | 定时器回调（dispatch_sig）——Creature 相关 | 高 |
| TimerDBUpdate | 6 | 定时器回调（dispatch_sig）——D B Update 相关 | 高 |
| TimerDeathTower | 6 | 定时器回调（dispatch_sig）——Death Tower 相关 | 高 |
| TimerDeathTowerTopRankerReload | 7 | 定时器回调（dispatch_sig）——Death Tower Top Ranker Reload 相关 | 高 |
| TimerDetectDisconnect | 7 | 定时器回调（dispatch_sig）——Detect Disconnect 相关 | 高 |
| TimerDispatcher | 6 | 定时器回调（dispatch_sig）——Dispatcher 相关 | 高 |
| TimerDungeonClear | 6 | 定时器回调（dispatch_sig）——Dungeon Clear 相关 | 高 |
| TimerDungeonDataStatistic | 7 | 定时器回调（dispatch_sig）——Dungeon Data Statistic 相关 | 高 |
| TimerDungeonFail | 6 | 定时器回调（dispatch_sig）——Dungeon Fail 相关 | 高 |
| TimerEPLPCommandWait | 6 | 定时器回调（dispatch_sig）——E P L P Command Wait 相关 | 高 |
| TimerEPLPReturnVillage | 6 | 定时器回调（dispatch_sig）——E P L P Return Village 相关 | 高 |
| TimerElevatorDungeon | 6 | 定时器回调（dispatch_sig）——Elevator Dungeon 相关 | 高 |
| TimerEndAssault | 7 | 定时器回调（dispatch_sig）——End Assault 相关 | 高 |
| TimerEndPowerWarVictoriousReward | 6 | 定时器回调（dispatch_sig）——End Power War Victorious Reward 相关 | 高 |
| TimerEntry | 5 | 定时器回调（dispatch_sig）——Entry 相关 | 高 |
| TimerEventChristmas | 6 | 圣诞活动定时器（dispatch_sig） | 高 |
| TimerEventCoinRefill | 7 | 金币回充事件定时器（CCoinRefillEvent 注册） | 高 |
| TimerFatigueReset | 9 | 定时器回调（dispatch_sig）——Fatigue Reset 相关 | 高 |
| TimerFinishItemEffect | 7 | 定时器回调（dispatch_sig）——Finish Item Effect 相关 | 高 |
| TimerForbidChat | 7 | 定时器回调（dispatch_sig）——Forbid Chat 相关 | 高 |
| TimerForbidMove | 7 | 定时器回调（dispatch_sig）——Forbid Move 相关 | 高 |
| TimerGeneratePowerUp | 11 | 定时器回调（dispatch_sig）——Generate Power Up 相关 | 高 |
| TimerGeneratePowerUpNotiTime | 8 | 定时器回调（dispatch_sig）——Generate Power Up Noti Time 相关 | 高 |
| TimerGlobalEffectItemBegin | 7 | 定时器回调（dispatch_sig）——Global Effect Item Begin 相关 | 高 |
| TimerGlobalEffectItemTimeout | 7 | 定时器回调（dispatch_sig）——Global Effect Item Timeout 相关 | 高 |
| TimerInsertUserPlayTime | 7 | 定时器回调（dispatch_sig）——Insert User Play Time 相关 | 高 |
| TimerItemUnlockWaiting | 6 | 定时器回调（dispatch_sig）——Item Unlock Waiting 相关 | 高 |
| TimerLightServerNotice | 7 | 定时器回调（dispatch_sig）——Light Server Notice 相关 | 高 |
| TimerMapLoading | 6 | 定时器回调（dispatch_sig）——Map Loading 相关 | 高 |
| TimerNPCMoodChange | 7 | 定时器回调（dispatch_sig）——N P C Mood Change 相关 | 高 |
| TimerNatType | 7 | 定时器回调（dispatch_sig）——Nat Type 相关 | 高 |
| TimerNatTypeUser | 7 | 定时器回调（dispatch_sig）——Nat Type User 相关 | 高 |
| TimerNotResponseUserTimeout | 7 | 定时器回调（dispatch_sig）——Not Response User Timeout 相关 | 高 |
| TimerPVPWalkOutLackUser | 6 | 定时器回调（dispatch_sig）——P V P Walk Out Lack User 相关 | 高 |
| TimerPartyWalkOutLackUser | 6 | 定时器回调（dispatch_sig）——Party Walk Out Lack User 相关 | 高 |
| TimerPremiumServiceOver | 6 | 定时器回调（dispatch_sig）——Premium Service Over 相关 | 高 |
| TimerPremiumServiceStart | 6 | 定时器回调（dispatch_sig）——Premium Service Start 相关 | 高 |
| TimerPremiumServiceUpdate | 6 | 定时器回调（dispatch_sig）——Premium Service Update 相关 | 高 |
| TimerPvPDieUserRevive0 | 6 | 定时器回调（dispatch_sig）——Pv P Die User Revive 0 相关 | 高 |
| TimerPvPDieUserRevive1 | 6 | 定时器回调（dispatch_sig）——Pv P Die User Revive 1 相关 | 高 |
| TimerPvPDieUserRevive2 | 6 | 定时器回调（dispatch_sig）——Pv P Die User Revive 2 相关 | 高 |
| TimerPvPDieUserRevive3 | 6 | 定时器回调（dispatch_sig）——Pv P Die User Revive 3 相关 | 高 |
| TimerPvPDieUserRevive4 | 6 | 定时器回调（dispatch_sig）——Pv P Die User Revive 4 相关 | 高 |
| TimerPvPDieUserRevive5 | 6 | 定时器回调（dispatch_sig）——Pv P Die User Revive 5 相关 | 高 |
| TimerPvPDieUserRevive6 | 6 | 定时器回调（dispatch_sig）——Pv P Die User Revive 6 相关 | 高 |
| TimerPvPDieUserRevive7 | 6 | 定时器回调（dispatch_sig）——Pv P Die User Revive 7 相关 | 高 |
| TimerPvpRankRes | 1 | 定时器回调（dispatch_sig）——Pvp Rank Res 相关 | 高 |
| TimerQueryCounter | 7 | 定时器回调（dispatch_sig）——Query Counter 相关 | 高 |
| TimerRefreshPowerWarProcessInfo | 7 | 定时器回调（dispatch_sig）——Refresh Power War Process Info 相关 | 高 |
| TimerRequestExit | 6 | 定时器回调（dispatch_sig）——Request Exit 相关 | 高 |
| TimerRevivalCharac | 6 | 定时器回调（dispatch_sig）——Revival Charac 相关 | 高 |
| TimerSaveLogGamechannel | 6 | 定时器回调（dispatch_sig）——Save Log Gamechannel 相关 | 高 |
| TimerScheduleFiveMinPerUser | 6 | 定时器回调（dispatch_sig）——Schedule Five Min Per User 相关 | 高 |
| TimerScheduleGuildWarEnd | 6 | 定时器回调（dispatch_sig）——Schedule Guild War End 相关 | 高 |
| TimerScheduleOneHour | 6 | 定时器回调（dispatch_sig）——Schedule One Hour 相关 | 高 |
| TimerScheduleTenMinPerUser | 6 | 定时器回调（dispatch_sig）——Schedule Ten Min Per User 相关 | 高 |
| TimerScheduleTenSecond | 7 | 定时器回调（dispatch_sig）——Schedule Ten Second 相关 | 高 |
| TimerSetPlayResult | 6 | 定时器回调（dispatch_sig）——Set Play Result 相关 | 高 |
| TimerSetPunishUser | 6 | 定时器回调（dispatch_sig）——Set Punish User 相关 | 高 |
| TimerSetResult | 6 | 定时器回调（dispatch_sig）——Set Result 相关 | 高 |
| TimerSetTradePunishUser | 6 | 定时器回调（dispatch_sig）——Set Trade Punish User 相关 | 高 |
| TimerSig | 5 | 定时器回调（dispatch_sig）——Sig 相关 | 高 |
| TimerStamina | 6 | 定时器回调（dispatch_sig）——Stamina 相关 | 高 |
| TimerStartExpEventAfterVillageAttack | 6 | 村庄袭击后经验事件开启定时器 | 高 |
| TimerStartMatching | 7 | 定时器回调（dispatch_sig）——Start Matching 相关 | 高 |
| TimerStartRelayBattle | 6 | 定时器回调（dispatch_sig）——Start Relay Battle 相关 | 高 |
| TimerStartVillageAttacked | 6 | 定时器回调（dispatch_sig）——Start Village Attacked 相关 | 高 |
| TimerStatisticLevel | 8 | 定时器回调（dispatch_sig）——Statistic Level 相关 | 高 |
| TimerStatisticsDetailChannelInfo | 8 | 定时器回调（dispatch_sig）——Statistics Detail Channel Info 相关 | 高 |
| TimerStatisticsLog | 8 | 定时器回调（dispatch_sig）——Statistics Log 相关 | 高 |
| TimerUltimateNextRoundStart | 6 | 定时器回调（dispatch_sig）——Ultimate Next Round Start 相关 | 高 |
| TimerUpdateCompoundEmblemStatics | 8 | 定时器回调（dispatch_sig）——Update Compound Emblem Statics 相关 | 高 |
| TimerUpdateItemGenerateStatistics | 7 | 定时器回调（dispatch_sig）——Update Item Generate Statistics 相关 | 高 |
| TimerUpdatePvPGrade | 7 | 定时器回调（dispatch_sig）——Update Pv P Grade 相关 | 高 |
| TimerVendingMachineItemNotify | 7 | 定时器回调（dispatch_sig）——Vending Machine Item Notify 相关 | 高 |
| TimerVillageAttackedPlayTimeout | 6 | 定时器回调（dispatch_sig）——Village Attacked Play Timeout 相关 | 高 |
| TimerVillageMonsterRegen | 6 | 定时器回调（dispatch_sig）——Village Monster Regen 相关 | 高 |
| TimerVillageMonsterUpdateRate | 6 | 定时器回调（dispatch_sig）——Village Monster Update Rate 相关 | 高 |
| TimerWarRoomBattlePauseCount | 6 | 定时器回调（dispatch_sig）——War Room Battle Pause Count 相关 | 高 |
| TimerWarRoomChangeHost | 6 | 定时器回调（dispatch_sig）——War Room Change Host 相关 | 高 |
| TimerWarRoomCheckFail | 6 | 定时器回调（dispatch_sig）——War Room Check Fail 相关 | 高 |
| TimerWarRoomReadyLockCount | 6 | 定时器回调（dispatch_sig）——War Room Ready Lock Count 相关 | 高 |
| TimerWarRoomResultCount | 6 | 定时器回调（dispatch_sig）——War Room Result Count 相关 | 高 |
| TimerWarRoomWaitCount | 6 | 定时器回调（dispatch_sig）——War Room Wait Count 相关 | 高 |

### 6.3 ST 数据/包结构（135）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| ST3rdChronicleDestructionResult | 4 | 第三编年史破坏结果数据（ST 序列化/脚本结构） | 中 |
| STAICharacterCustomSkillLevel | 2 | AICharacter自定义技能等级数据（ST 序列化/脚本结构） | 中 |
| STAICharacterEquipmentData | 2 | AICharacter装备数据（ST 序列化/脚本结构） | 中 |
| STAICharacterItemData | 2 | AICharacter物品数据（ST 序列化/脚本结构） | 中 |
| STAICharacterMapArrangeData | 8 | AICharacter地图布置数据（ST 序列化/脚本结构） | 中 |
| STAICharacterSkillCorrection | 4 | AICharacter技能修正数据（ST 序列化/脚本结构） | 中 |
| STAICharacterSkillData | 2 | AICharacter技能数据（ST 序列化/脚本结构） | 中 |
| STAdvanceAltarEntranceData | 2 | 高级祭坛入口数据（ST 序列化/脚本结构） | 中 |
| STAdvanceAltarLayerStatData | 2 | 高级祭坛层统计数据（ST 序列化/脚本结构） | 中 |
| STAgitUpgradeInfo | 5 | 基地升级信息（ST 序列化/脚本结构） | 中 |
| STAncientRareAvatarCube | 7 | 远古稀有时装魔盒数据（ST 序列化/脚本结构） | 中 |
| STAssignAnimation | 7 | 分配动画数据（ST 序列化/脚本结构） | 中 |
| STAssignBloodPhaseTime | 5 | 血条阶段时间数据（ST 序列化/脚本结构） | 中 |
| STAssignBloodSystem | 5 | 分配血条系统数据（ST 序列化/脚本结构） | 中 |
| STAssignDefensePhaseTime | 5 | 防御阶段时间数据（ST 序列化/脚本结构） | 中 |
| STAssignDefenseSystem | 5 | 分配防御系统数据（ST 序列化/脚本结构） | 中 |
| STAssignItem | 4 | 分配物品数据（ST 序列化/脚本结构） | 中 |
| STAssignMonster | 8 | 分配怪物数据（ST 序列化/脚本结构） | 中 |
| STAssignPassiveObject | 3 | 分配被动对象数据（ST 序列化/脚本结构） | 中 |
| STAssignSpecialPassiveObj | 7 | 分配特殊被动对象数据（ST 序列化/脚本结构） | 中 |
| STAtkSuper | 5 | 超级攻击数据（ST 序列化/脚本结构） | 中 |
| STAttackMethod | 5 | 攻击方式数据（ST 序列化/脚本结构） | 中 |
| STAttackedMonster | 2 | 被攻击怪物数据（ST 序列化/脚本结构） | 中 |
| STAvatarAbilityVariation | 5 | 时装能力变异数据（ST 序列化/脚本结构） | 中 |
| STAvatarHiddenAbilityVariation | 6 | 时装隐藏能力变异数据（ST 序列化/脚本结构） | 中 |
| STBreakAwayMemberData | 1 | 破离成员数据（ST 序列化/脚本结构） | 中 |
| STBreakAwayRewards | 4 | 破离奖励数据（ST 序列化/脚本结构） | 中 |
| STBreakAwaySection | 4 | 破离区域数据（ST 序列化/脚本结构） | 中 |
| STBuff | 3 | Buff数据（ST 序列化/脚本结构） | 中 |
| STChangeStatusRate | 2 | 状态变化率数据（ST 序列化/脚本结构） | 中 |
| STCheckRuleData | 2 | 规则检查数据（ST 序列化/脚本结构） | 中 |
| STComputeDamageVariable | 2 | 伤害计算变量数据（ST 序列化/脚本结构） | 中 |
| STCoolTime | 8 | 冷却时间数据（ST 序列化/脚本结构） | 中 |
| STCounterAttack | 5 | 反击数据（ST 序列化/脚本结构） | 中 |
| STDBConnInfo | 2 | DB 连接信息（ST 序列化/脚本结构） | 中 |
| STDash | 5 | 冲刺数据（ST 序列化/脚本结构） | 中 |
| STDeadTowerData | 5 | 死亡之塔数据（ST 序列化/脚本结构） | 中 |
| STDeadTowerDialog | 8 | 死亡之塔对话框数据（ST 序列化/脚本结构） | 中 |
| STDialog | 8 | 对话框数据（ST 序列化/脚本结构） | 中 |
| STDifficulty | 5 | 难度数据（ST 序列化/脚本结构） | 中 |
| STDungeonInoutCnt | 2 | 地下城进出次数数据（ST 序列化/脚本结构） | 中 |
| STDungeonInoutTime | 2 | 地下城进出时间数据（ST 序列化/脚本结构） | 中 |
| STEnchantSystemData | 5 | 附魔系统数据（ST 序列化/脚本结构） | 中 |
| STEnchantSystemMapData | 6 | 附魔系统映射数据（ST 序列化/脚本结构） | 中 |
| STEnchantSystemMapKey | 5 | 附魔系统映射键数据（ST 序列化/脚本结构） | 中 |
| STEnchantedSkillOption | 1 | 附魔技能选项数据（ST 序列化/脚本结构） | 中 |
| STEquipmentPartSetData | 7 | 装备部件套装数据（ST 序列化/脚本结构） | 中 |
| STEquipmentPartSetPiece | 7 | 装备部件套装件数据（ST 序列化/脚本结构） | 中 |
| STEquipmentStatInfo | 3 | 装备属性信息（ST 序列化/脚本结构） | 中 |
| STEventCharacterInfo | 7 | 活动角色信息（CEventCharacterHandler 用） | 高 |
| STEventCharacterInfo_level | 6 | 活动角色等级信息 | 高 |
| STEventCharacterItem | 2 | 活动角色物品 | 高 |
| STEventSuper | 5 | 事件超级数据（clear） | 高 |
| STExpReward | 4 | 经验奖励数据（ST 序列化/脚本结构） | 中 |
| STGainedEachExpData | 2 | 各段获得经验数据（ST 序列化/脚本结构） | 中 |
| STGameUserInfo | 2 | 游戏用户信息（ST 序列化/脚本结构） | 中 |
| STGrowthPowerData | 7 | 成长力量数据（ST 序列化/脚本结构） | 中 |
| STGrowthType | 2 | 成长类型数据（ST 序列化/脚本结构） | 中 |
| STGuildAgitDBInfo | 2 | 公会基地 DB 信息（ST 序列化/脚本结构） | 中 |
| STGuildBoardDBInfo | 2 | 公会公告板 DB 信息（ST 序列化/脚本结构） | 中 |
| STGuildDBInfoOnly | 2 | 公会 DB 信息（ST 序列化/脚本结构） | 中 |
| STGuildMemberCharacData | 2 | 公会成员角色数据（ST 序列化/脚本结构） | 中 |
| STGuildProxy | 4 | 公会代理数据（ST 序列化/脚本结构） | 中 |
| STGuildSkill | 2 | 公会技能数据（ST 序列化/脚本结构） | 中 |
| STGuildStorageUpgradeInfo | 5 | 公会仓库升级信息（ST 序列化/脚本结构） | 中 |
| STHellPartyGroupOrder | 6 | 地狱队伍组顺序数据（ST 序列化/脚本结构） | 中 |
| STHold | 5 | 抓取数据（ST 序列化/脚本结构） | 中 |
| STInitialTarget | 7 | 初始目标数据（ST 序列化/脚本结构） | 中 |
| STJumpAttack | 5 | 跳跃攻击数据（ST 序列化/脚本结构） | 中 |
| STKeyCommand | 5 | 按键指令数据（ST 序列化/脚本结构） | 中 |
| STKeyCommandUnit | 8 | 按键指令单元数据（ST 序列化/脚本结构） | 中 |
| STKillMonsterData | 2 | 击杀怪物数据（ST 序列化/脚本结构） | 中 |
| STMonsterEquipment | 6 | 怪物装备数据（ST 序列化/脚本结构） | 中 |
| STMonsterParameterCategory | 6 | 怪物参数类别数据（ST 序列化/脚本结构） | 中 |
| STMonsterTypeSpawnProb | 5 | 怪物类型生成概率数据（ST 序列化/脚本结构） | 中 |
| STMosterAttackReady | 8 | MosterAttackReady数据（ST 序列化/脚本结构） | 中 |
| STNameList | 4 | 名单数据（ST 序列化/脚本结构） | 中 |
| STNamedMonsterMapPos | 4 | 命名怪物地图位置数据（ST 序列化/脚本结构） | 中 |
| STPacketLog | 5 | 包日志数据（ST 序列化/脚本结构） | 中 |
| STPassiveFeatureData | 5 | 被动特性数据（ST 序列化/脚本结构） | 中 |
| STPassiveObjectAddEffect | 5 | 被动对象附加效果数据（ST 序列化/脚本结构） | 中 |
| STPassiveObjectAdditionalParticleInfo | 3 | 被动对象附加粒子信息（ST 序列化/脚本结构） | 中 |
| STPassiveObjectDestroy | 5 | 被动对象销毁数据（ST 序列化/脚本结构） | 中 |
| STPassiveObjectInStackable | 4 | 堆叠包内被动对象数据（ST 序列化/脚本结构） | 中 |
| STPowerWarCharacData | 2 | 势力战角色数据（ST 序列化/脚本结构） | 中 |
| STPowerWarStatueRankerInfo | 2 | 势力战雕像排名信息（ST 序列化/脚本结构） | 中 |
| STPremiumItemData | 2 | Premium 物品数据（ST 序列化/脚本结构） | 中 |
| STPvPBuddyDBInfo | 2 | PvP 好友 DB 信息（ST 序列化/脚本结构） | 中 |
| STPvPGuild | 2 | PvP 公会数据（ST 序列化/脚本结构） | 中 |
| STQuestAnimation | 7 | 任务动画数据（ST 序列化/脚本结构） | 中 |
| STQuestShopBuyParam | 5 | 任务商店购买参数数据（ST 序列化/脚本结构） | 中 |
| STQuestShopParam | 5 | 任务商店参数数据（ST 序列化/脚本结构） | 中 |
| STRDCharacterStatus | 4 | RD 角色状态（ST 序列化/脚本结构） | 中 |
| STRDCharacterStatusClient | 1 | RD 角色状态（客户端）数据（ST 序列化/脚本结构） | 中 |
| STRDCharacterStatusRate | 3 | RD 角色状态率数据（ST 序列化/脚本结构） | 中 |
| STRecovery | 3 | 恢复数据（ST 序列化/脚本结构） | 中 |
| STResultItemCnt | 4 | 结果物品数量数据（ST 序列化/脚本结构） | 中 |
| STRewardData | 2 | 奖励数据（ST 序列化/脚本结构） | 中 |
| STRewardDataKey | 3 | 奖励数据键数据（ST 序列化/脚本结构） | 中 |
| STRewardDataList | 6 | 奖励数据列表数据（ST 序列化/脚本结构） | 中 |
| STRidableSkill | 7 | 骑乘技能数据（ST 序列化/脚本结构） | 中 |
| STRidableSkillExplain | 7 | 骑乘技能说明数据（ST 序列化/脚本结构） | 中 |
| STRivalMapData | 4 | 对手地图数据（ST 序列化/脚本结构） | 中 |
| STSDCActiveStatusSyncDataCLONG | 1 | SDC 主动状态同步数据（发送/CLONG 形式） | 中 |
| STSDCActiveStatusSyncDataSend | 1 | SDC 主动状态同步数据（发送/CLONG 形式） | 中 |
| STScriptFileList | 8 | 脚本文件列表 | 中 |
| STSecondGrowTypeFitness | 3 | 第二成长类型适合度数据（ST 序列化/脚本结构） | 中 |
| STSecondGrowTypeInfo | 5 | 第二成长类型信息（ST 序列化/脚本结构） | 中 |
| STSkillCommandData | 2 | 技能指令数据（ST 序列化/脚本结构） | 中 |
| STSkillCommandData::STCommand | 2 | 技能指令条目数据（ST 序列化/脚本结构） | 中 |
| STSpecailItem_Param | 2 | 商城特殊物品处理参数（SpecialItemHandler 输入） | 中 |
| STSpecailItem_Result | 2 | 商城特殊物品处理结果（SpecialItemHandler 输出） | 中 |
| STSpecialMonsterDrop | 3 | 特殊怪物掉落数据（ST 序列化/脚本结构） | 中 |
| STStackablePackageData | 4 | 堆叠礼包数据（ST 序列化/脚本结构） | 中 |
| STStatChange | 5 | 属性变化数据（ST 序列化/脚本结构） | 中 |
| STStatChangeVector | 6 | 属性变化向量数据（ST 序列化/脚本结构） | 中 |
| STStatusGenerate | 6 | 状态生成数据（ST 序列化/脚本结构） | 中 |
| STStatusRecovery | 3 | 状态恢复数据（ST 序列化/脚本结构） | 中 |
| STSummon | 8 | 召唤数据（ST 序列化/脚本结构） | 中 |
| STSummonApc | 3 | 召唤 APC数据（ST 序列化/脚本结构） | 中 |
| STSummonInfo | 5 | 召唤信息（ST 序列化/脚本结构） | 中 |
| STSummonMonster | 3 | 召唤怪物数据（ST 序列化/脚本结构） | 中 |
| STTeleportData | 2 | 传送数据（ST 序列化/脚本结构） | 中 |
| STThrowAttack | 8 | 投掷攻击数据（ST 序列化/脚本结构） | 中 |
| STTowerDialog | 8 | 塔对话框数据（ST 序列化/脚本结构） | 中 |
| STTowerFullDialog | 5 | 塔完整对话框数据（ST 序列化/脚本结构） | 中 |
| STUdateItemParam | 5 | UdateItemParam数据（ST 序列化/脚本结构） | 中 |
| STUltimateRewardProb | 2 | 终极奖励概率数据（ST 序列化/脚本结构） | 中 |
| STWarRoomData | 6 | WarRoom 数据（ST 序列化/脚本结构） | 中 |
| STWarp | 5 | 传送门数据（ST 序列化/脚本结构） | 中 |
| STWorldmapPattern | 5 | 世界地图模式数据（ST 序列化/脚本结构） | 中 |
| STWorldmapPattern2ND | 2 | 第二世界地图模式数据（ST 序列化/脚本结构） | 中 |
| ST_Guild_War_Rank_Info | 2 | _Guild_War_Rank_Info数据（ST 序列化/脚本结构） | 中 |
| ST_TrainingQuest_Select_Prob | 4 | _TrainingQuest_Select_Prob数据（ST 序列化/脚本结构） | 中 |

### 6.4 SIG 信号结构（36）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| SIG_ATTENDANCE_EVENT | 2 | 签到事件互通/DB 信号负载 | 高 |
| SIG_AVATAR_INSERT | 2 | 时装入库信号负载（set/setJewelSocket） | 高 |
| SIG_BEST_CLEAR_TIME | 2 | 最佳通关时间信号负载 | 高 |
| SIG_BEST_CLEAR_TIME_DATA | 2 | 最佳通关时间数据信号负载 | 高 |
| SIG_BEST_CLEAR_TIME_DIFFICULTY | 2 | 最佳通关时间（难度）信号负载 | 高 |
| SIG_BINGO_EVENT | 1 | 宾果事件互通信号负载（clear） | 高 |
| SIG_BOOSTER_GAGE_DATA | 2 | Booster 计量条数据信号负载 | 高 |
| SIG_BREAK_AWAY_PREVENT_REWARD_MANAGER | 2 | 防脱离奖励管理器信号负载 | 高 |
| SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER | 2 | 防脱离系统管理器信号负载 | 高 |
| SIG_CERASHOP_ERROR_LOG | 2 | 商城错误日志信号负载 | 高 |
| SIG_COMBO_SKILL | 3 | 连招技能信号负载（reset） | 高 |
| SIG_EVENT_STAGE_LOG | 2 | 活动阶段日志信号负载 | 高 |
| SIG_GIVE_GROWTH_CREATURE_EVENT | 3 | 成长宠物赠送事件信号（eventCharacInfo 负载） | 高 |
| SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo | 2 | 成长宠物赠送事件角色信息负载 | 高 |
| SIG_ITEM_DICTIONARY_FLAG | 2 | 物品图鉴标记信号负载 | 高 |
| SIG_ITEM_MAKING_SKILL | 2 | 物品制作技能信号负载 | 高 |
| SIG_LETTER_INFO | 2 | 信件信息信号负载 | 高 |
| SIG_LOAD_CHARAC | 2 | 角色加载信号负载 | 高 |
| SIG_LOAD_ETC | 4 | ETC 数据加载信号负载 | 高 |
| SIG_LOAD_INVENTORY | 2 | 背包加载信号负载 | 高 |
| SIG_LOAD_KILL_MONSTER_INFO | 2 | 击杀怪物信息加载信号负载 | 高 |
| SIG_LOAD_PREMIUM_LETHE | 2 | Premium 遗忘水（Lethe）加载信号负载 | 高 |
| SIG_LOAD_QUEST | 2 | 任务加载信号负载 | 高 |
| SIG_LOAD_SKILL | 2 | 技能加载信号负载 | 高 |
| SIG_POSTAL_CREATURE_TEMP_PERIOD | 2 | 邮件宠物临时期限信号负载 | 高 |
| SIG_QUEST_SHOP_DATA | 2 | 任务商店数据信号负载 | 高 |
| SIG_REDEEMINFO_LIST_TO_DB | 2 | 赎回列表写库信号负载 | 高 |
| SIG_REQUEST_PVP_MISSION_LIST | 2 | PvP 任务列表请求信号负载 | 高 |
| SIG_REQUEST_TOD_USER_STATE | 2 | 死亡之塔用户状态请求信号负载 | 高 |
| SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFO | 2 | 连续物品信息读写信号负载 | 高 |
| SIG_SAVE_DIMENSION_RENT_INFO | 3 | 次元租借信息保存信号负载 | 高 |
| SIG_SAVE_DIMENSION_RENT_ITEM | 3 | 次元租借物品保存信号负载 | 高 |
| SIG_SAVE_EXPAND_EQUIPSLOT | 2 | 扩展装备槽保存信号负载 | 高 |
| SIG_SAVE_PC_ROOM_PLAY_TIME | 2 | 网吧游玩时长保存信号负载 | 高 |
| SIG_SAVE_PC_ROOM_RENT_INFO | 3 | 网吧租借信息保存信号负载 | 高 |
| SIG_SAVE_PC_ROOM_RENT_ITEM | 3 | 网吧租借物品保存信号负载 | 高 |

### 6.5 tag/TAG/st_ 数据结构（15）

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| TAG_CHARAC_DATA | 3 | 角色数据标签 | 高 |
| TAG_CHARAC_ETC_DATA | 3 | 角色 ETC 数据 DB 标签结构 | 高 |
| TAG_CHARAC_INVEN_DATA | 3 | 角色背包数据 DB 标签结构 | 高 |
| st_crature_id_item_id | 2 | 生物 ID+物品 ID 结构 | 高 |
| tagCS_CHECK_SCRIPT_VERSION | 2 | CS 脚本版本检查数据 | 高 |
| tagCS_GET_SCRIPT | 2 | CS 脚本获取数据 | 高 |
| tagCS_UPDATE_CHANNEL_INFO | 2 | CS 频道信息更新数据 | 高 |
| tagCharacVisibleFlag | 3 | 角色可见标志 | 高 |
| tagCompoundAvatar | 8 | 复合时装（Compound Avatar）数据 | 高 |
| tagCompoundAvatarTable | 5 | 复合时装表 | 高 |
| tagPackageItemSelection | 2 | 礼包物品选择数据 | 高 |
| tagPacketHeader | 6 | 包头部（setCategory/setPacketID/getSize/setSize） | 高 |
| tagRecommendNewbieOption | 5 | 新手推荐选项 | 高 |
| tagRecommendNewbieOptionTable | 1 | 新手推荐选项表 | 高 |
| tagRepairItemInfo | 4 | 修理物品信息 | 高 |

### 6.6 其它杂项

| 类名 | 符号数 | 作用 | 置信度 |
|---|---|---|---|
| ARAD | 38 | ARAD 工具命名空间（Arad_InterfaceGameScript 工厂、PurcahseBonus、SSendEffect、工具函数） | 高 |
| ARAD::CeraShopPurcahseCountBonus | 10 | 商城累计购买奖励 | 高 |
| ARAD::SCRIPT::AvatarConvert::ConvertResult | 4 | 时装转换结果结构 | 高 |
| ARAD::SCRIPT::AvatarConvert::GetInfo | 2 | 时装转换信息结构 | 高 |
| Arad_GiftItem_Set::Data | 6 | Arad 礼包物品集合条目 | 高 |
| Arad_MileageProcess | 8 | 里程购买流程（BuyMileageItem/BuySuccess/BuyFail/GiveMileage） | 高 |
| Arad_Mileage_Data::Data | 4 | 里程（Mileage）点数脚本数据条目 | 高 |
| Arad_VillageAttackRewardItem::Data | 7 | 村庄袭击活动奖励数据条目 | 高 |
| Arad_VillageAttackRewardItem::RankData | 4 | 村庄袭击活动按排名奖励条目 | 高 |
| AvatarCoin::HistoryLog | 2 | 头像硬币流水日志（AddLog/SubLog） | 高 |
| CerashopAddRestrict | 8 | 商城限购（每日每 IPG no 限制） | 高 |
| CerashopAddRestrict::DBInputData | 2 | 商城限购 DB 输入数据 | 高 |
| CerashopAddRestrict::InfoDaily | 2 | 商城限购每日信息 | 高 |
| CerashopAddRestrict::ScriptLoader | 9 | 限购脚本加载 | 高 |
| CerashopAddRestrict::UserInfo | 4 | 商城限购用户信息 | 高 |
| DB_LogCeraShopError | 6 | 商城错误日志 DB 分发器 | 高 |
| DB_StatisticCeraShopGiftLog | 7 | 商城赠送日志统计 DB 分发器 | 高 |
| Dispatcher_BuyCeraShopItem | 10 | 客户端“购买商城物品”命令分发器（含免费硬币地下城倒计时） | 高 |
| Dispatcher_BuyCeraShopLimitItem | 11 | 客户端“购买限量版商城物品”命令分发器（_checkBuyCondition/_checkUserState） | 高 |
| InformNotice | 978 | 公告常量数组组（kInformNoticeIndex/kInformNoticeBit），见第 4 节假类 | 高 |
| InformNotice2nd | 978 | 公告常量数组组（kIndex/kBit），见第 4 节假类 | 高 |
| Inter_CeraShopPurchaseCount | 7 | 商城购买计数互通（inter-server）分发器 | 高 |
| LevelupSupport2ndScript::ItemInfo | 4 | 2nd 升级支援脚本物品条目 | 高 |
| LevelupSupportSciprt::ItemInfo | 4 | 升级支援脚本单步物品条目 | 高 |
| MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String | 7 | 聊天表情槽位字符串 | 高 |
| MultiBoxLotteryInfo::LotteryDefaultArad | 4 | Arad 默认抽奖配置 | 高 |
| MultiBoxLotteryInfo::LotteryUnit | 8 | 多开宝箱抽奖单位条目 | 高 |
| MultiBoxLotteryInfo::stDefaultItem | 4 | 多开宝箱默认物品结构 | 高 |
| MultiBoxLotteryInfo::stDefaultItemInfo | 4 | 多开宝箱默认物品信息条目 | 高 |
| Redeem_Item::Inven_Item_Expand_RedeemInfo | 2 | 赎回系统：背包扩容赎回条目（list 元素） | 高 |
| SBlock | 5 | 位块（operator^=，异或块操作） | 高 |
| SDCActiveStatusSyncServer | 5 | SDC 主动状态服务端脚本加载 | 高 |
| SECRET_SHOP_STATISTIC_DATA | 2 | 秘密商店统计数据负载 | 高 |
| SKILL_USING_VALIDATE_INFO | 2 | 技能使用校验信息（反外挂） | 高 |
| SK_IP | 2 | IP 键结构（反外挂计数） | 高 |
| SPOBJ_ACTION_DATAS | 5 | 被动对象动作数据（getActionType） | 高 |
| SPremiumInfo | 4 | Premium 信息结构 | 高 |
| SPremiumOverEquipableInfo | 2 | Premium 超限可装备信息 | 高 |
| SPremiumReturnItemInfo | 2 | Premium 返还物品信息 | 高 |
| SaveServiceRestrictPolicy | 7 | 服务限制策略保存分发器 | 高 |
| ScanBotByDllParam | 5 | 扫挂 Dll 参数（反外挂） | 高 |
| ScanBotByDrvParam | 5 | 扫挂驱动参数（反外挂） | 高 |
| ScriptHashParam | 5 | 脚本哈希校验参数 | 高 |
| ScriptValue | 5 | 脚本值容器 | 高 |
| SecKillMonsterInfo | 4 | 秒杀怪物信息（活动） | 高 |
| SectionLock | 9 | 临界区/段锁（enter/leave/tryEnter/isTaken） | 高 |
| SecuCardRpyParam | 5 | 密保卡回复参数 | 高 |
| SecurityRestrict | 2 | 安全限制枚举字符串映射 | 高 |
| SendMercenaryCompetitionResult | 5 | 佣兵竞技结果发送 | 高 |
| SendMercenaryReturnResult | 5 | 佣兵返回结果发送 | 高 |
| SendingAPC_Info | 10 | 死亡之塔 APC 发送信息（角色名/编号/数据） | 高 |
| Server_Envir | 4 | 服务器环境信息 | 高 |
| ServicePolicy | 5 | 服务策略（Init/ServicePolicy） | 高 |
| SimpleInfo | 2 | 简单信息结构 | 高 |
| Skill | 6 | 技能数据（Reset/operator+=） | 高 |
| SkillLevelFeature | 8 | 技能等级特性数据 | 高 |
| SkillShopGuideTextData | 7 | 技能商店引导文本数据 | 高 |
| SkillUseItem | 5 | 技能使用物品数据 | 高 |
| SlangFilter | 9 | 聊天脏话过滤器（Flex 词法 + is_clean） | 高 |
| SlangNameData | 4 | 脏话姓名数据条目 | 高 |
| SlangNode | 8 | 脏话词典 Trie 节点（AddChild/FindChild/EndNode） | 高 |
| SlotBound | 2 | 槽位绑定 | 高 |
| SlotBoundKey | 3 | 槽位绑定键（operator<） | 高 |
| SmallStream | 5 | 小型流对象 | 高 |
| SmallStreamPool | 9 | 小型流（SmallStream）对象池 | 高 |
| SpeedCtrlPassiveObjInfo | 4 | 速度控制被动对象信息 | 高 |
| SpinLock | 8 | 自旋锁（enter/leave/tryEnter/isTakenByCurrentThread） | 高 |
| StackableItemData | 5 | 可堆叠礼包物品数据 | 高 |
| StackablePackage | 8 | 可堆叠礼包：EVENT_TYPE 枚举 + 事件处理器注册表 | 高 |
| StatChangeInfo | 2 | 状态变化信息 | 高 |
| StaticStartPos | 4 | 静态出生点 | 高 |
| Statuepredicate | 3 | 雕像谓词函数对象 | 高 |
| Store | 7 | NPC 商店（user_buy_item/user_sell_item/repair_equip/GetSellItemPrice） | 高 |
| StreamPool | 10 | Stream 对象池（Acquire/Free/Remain/Size） | 高 |
| StrikerDirectionType | 4 | Striker 方向类型（isType/setType） | 高 |
| StrikerSkill | 7 | Striker 技能数据 | 高 |
| StrikerSkillAddCommand | 3 | Striker 技能附加命令 | 高 |
| StrikerSkillDataUp | 7 | Striker 技能升级数据 | 高 |
| StringData | 7 | 引用计数字符串缓冲（create/incRef/decRef/getBuffer） | 高 |
| TOD_Layer | 10 | 死亡之塔层数对象（GetLayer/increaseLayer/resetLayer） | 高 |
| TSearchByCategory_ | 2 | 按类别搜索函数对象 | 高 |
| TSearchByItemId_ | 2 | 按物品 ID 搜索函数对象 | 高 |
| T_Rect | 5 | 矩形（float 版） | 高 |
| TagSkillPenalty | 6 | Tag 技能惩罚数据 | 高 |
| Taiwan::AuthGarenaToken | 5 | Garena 登录令牌解密（openSSLRSA_/decrypt/init） | 高 |
| Taiwan::BalancePointQuery | 6 | Garena 计费查询：余额点数 | 高 |
| Taiwan::BalanceQuery | 6 | Garena 计费查询：余额 | 高 |
| Taiwan::BillTransaction | 1 | Garena 计费交易记录（init 初始化交易参数） | 高 |
| Taiwan::CancelQuery | 6 | Garena 计费查询：取消 | 高 |
| Taiwan::CeraPointQuery | 6 | Garena 计费查询：Cera 点数 | 高 |
| Taiwan::ChargeQuery | 6 | Garena 计费查询：充值 | 高 |
| Taiwan::ConfirmQuery | 6 | Garena 计费查询：确认 | 高 |
| Taiwan::EntranceQuery | 5 | Garena 计费查询：入口检查 | 高 |
| Taiwan::GarenaAuthData | 8 | CUser 内嵌 Garena 认证数据（uid/uname/时间戳/GCA 类型/手机认证） | 高 |
| Taiwan::GiftQuery | 6 | Garena 计费查询：赠送 | 高 |
| Taiwan::PurchaseQuery | 6 | Garena 计费查询模板实例：购买 | 高 |
| Taiwan::SigLoadGeolocation | 3 | Taiwan 内部信号：加载地理位置 | 高 |
| Taiwan::SigLoadHeroMissionData | 3 | Taiwan 内部信号：加载英雄任务数据 | 高 |
| Taiwan::SigLoadRestrictPolicy | 3 | Taiwan 内部信号：加载限制策略 | 高 |
| Taiwan::SigSaveHeroMissionData | 3 | Taiwan 内部信号：保存英雄任务数据 | 高 |
| Taiwan::SigUpdateExitTime | 2 | Taiwan 内部信号：更新退出时间 | 高 |
| TaiwanDBDispatcher | 9 | Taiwan 计费/DB 分发表（addDispatcher/getDispatcher/init） | 高 |
| TaiwanDBDispatcher::FnDelete | 1 | Taiwan DB 分发器删除函数对象 | 高 |
| TaiwanInterfaceDBDispatcher | 6 | Taiwan 接口层 DB 分发器（getCode） | 高 |
| TaiwanInterfaceInterDispatcher | 6 | Taiwan 接口层互通分发器（getCode） | 高 |
| TaiwanInternalDispatcher | 9 | Taiwan 内部（计费服务器）分发表 | 高 |
| TaiwanInternalDispatcher::FnDelete | 1 | Taiwan 内部分发器删除函数对象 | 高 |
| TaiwanInternalPack | 1 | Taiwan 内部包标签 | 高 |
| TeamInfo | 5 | 队伍信息容器（add/del/refresh） | 高 |
| TeamInfoSecond | 5 | 第二队伍信息容器 | 高 |
| TempParam | 5 | 临时参数容器 | 高 |
| TileIndexInfo | 3 | 瓦片索引信息（reset） | 高 |
| TimeLog_ | 1 | 时间日志辅助（setTime） | 高 |
| TotalMission | 8 | 英雄任务“累计”类型处理器（processMission/rewardMission） | 高 |
| TournamentMonster | 5 | 锦标赛（PvP 联赛）怪物数据 | 高 |
| TournamentRewardItem | 4 | 锦标赛奖励物品 | 高 |
| TournamentRewardItemRate | 6 | 锦标赛奖励物品概率 | 高 |
| TournamentRewardRate | 2 | 锦标赛奖励概率 | 高 |
| TournamentRewardType | 3 | 锦标赛奖励类型枚举 | 高 |
| TournamentStartPos | 4 | 锦标赛起始位置 | 高 |
| TowerOfDespairStatistic_Key | 2 | 死亡之塔统计键 | 高 |
| TowerOfDespair_APC_Mgr | 9 | 死亡之塔 APC 管理器（按层发送/重置 APC 信息） | 高 |
| TownPath | 8 | 城镇路径数据 | 高 |
| TradeSlot | 3 | 交易槽位状态 | 高 |
| UPGRADEJAR | 1 | Event_Upgrade_Jar 辅助命名空间（doNothing） | 高 |
| Uncopyable | 4 | 禁止拷贝基类 | 高 |
| UpgradeSeparateInfo | 8 | 强化分离计数+交易限制状态 | 高 |
| UrgentQuestLevelLimit | 978 | 紧急任务等级限制常量数组组（kStartLvl/kEndLvl），见第 4 节假类 | 高 |
| UseCoinDungeonDiff | 2 | 使用硬币地下城差异参数结构 | 高 |
| UseCubeMission | 8 | 英雄任务“使用魔盒”类型处理器 | 高 |
| UseFatigueMission | 8 | 英雄任务“消耗疲劳”类型处理器 | 高 |
| UsedFatigueRewardItem::Data | 4 | 疲劳值消耗奖励物品条目 | 高 |
| User_Teleport | 7 | 用户传送规则检查（check_rule/set_teleport_data） | 高 |
| nexon_packet::CPacketHelper | 5 | Nexon 协议包辅助（scan/padding/get_offset） | 高 |
| nexon_packet::stHeader | 4 | Nexon 协议头部（GetLength/SetLength） | 高 |
| nexon_packet::stLoginPacket | 3 | Nexon 登录包（ReadPacket→stLogin） | 高 |
| nexon_packet::stPacket | 3 | Nexon 协议包（GetLength） | 高 |
| private_store::CBroadcastPrivate | 1 | 私人商店广播（Send） | 高 |
| private_store::CCharacterControllerPrivate | 5 | 私人商店角色控制（GetStartPoint/MoveCharacterStartPoint） | 高 |
| private_store::CErrorGeneratorPrivate | 4 | 私人商店错误生成器 | 高 |
| private_store::CErrorHandler | 2 | 私人商店错误处理（Set/Do） | 高 |
| private_store::COperator<int> | 1 | 私人商店 int 运算符模板实例（池化/查找辅助） | 高 |
| private_store::CPrivateStorePos | 8 | 私人商店位置（include/put_object_info） | 高 |
| private_store::IBuyer | 2 | 私人商店买家接口 | 高 |
| private_store::ISeller | 2 | 私人商店卖家接口 | 高 |
| private_store::IUserPos | 2 | 私人商店用户位置接口 | 高 |
| private_store::PrivateStoreItem | 5 | 私人商店上架物品（状态/重置） | 高 |
| private_store::PrivateStorePos | 5 | 私人商店位置数据 | 高 |
| private_store::PrivateStoreZone | 2 | 私人商店区域 | 高 |
| saveQuestNotifyParam | 5 | 任务通知保存参数 | 高 |
| script_tag | 2 | 脚本标签（isTypeString/isCloseString 字符串解析） | 高 |
| secretshop::BUY_INFO | 5 | 秘密商店购买信息结构（operator==） | 高 |
| secretshop::CBuyItembyGold | 3 | 按金币购买规则实现 | 高 |
| secretshop::CBuyItembyRecipe | 3 | 按配方购买规则实现 | 高 |
| secretshop::IBuyRule | 7 | 秘密商店购买规则接口（CheckLimit/InsertItemIntoInventory/Log*Statistic/SendSecretShopBuyItem） | 高 |
| secretshop::RETAILER | 6 | 秘密商店零售商（GetSaleInfo/clear） | 高 |
| secretshop::SALE_INFO | 5 | 秘密商店出售信息结构（operator==） | 高 |
| secretshop::SECRET_SHOP_DATA | 8 | 秘密商店数据（IsOpen/IsCompleteBuy/SetBuying） | 高 |
| secretshop::SECRET_SHOP_INFO | 6 | 秘密商店信息（GetSaleInfo/clear） | 高 |
| secretshop::SHOPPER | 7 | 秘密商店购物者（BuyItem/GetBuyInfo） | 高 |
| select_base_item | 2 | 基础物品选择结构 | 高 |
| selectiveGrowCreatureInfo | 3 | 选择性成长宠物信息（活动） | 高 |
| seriaDecoObjectInfo | 7 | 赛丽亚房间装饰物体信息 | 高 |
| seriaRoomDecoAniInfo | 7 | 赛丽亚房间装饰动画信息 | 高 |
| seriaRoomDecoRewardInfo | 4 | 赛丽亚房间装饰奖励信息 | 高 |
| seriaRoom_AniDeco | 2 | 赛丽亚房间动画装饰数据 | 高 |
| server_utility | 1 | 服务器工具函数（get_rand_int） | 高 |
| stCeraShopBonusInfo_t | 7 | 商城奖励信息结构（BonusWeight 等） | 高 |
| stCeraShopBonusItemInfo_t | 2 | 商城奖励物品信息结构 | 高 |
| statistc_proxy | 1 | 统计代理（add） | 高 |
| str_index_to_itemgroup | 6 | 字符串索引→物品组映射 | 高 |
| tyIPCounters | 4 | IP 计数器表（反外挂） | 高 |
| upgrade_info_t | 4 | 强化信息记录 | 高 |
| upgrade_table_t | 9 | 强化表（GetPenaltyType/get_upgrade_info + MachineFrameInfo） | 高 |
| upgrade_table_t::MachineFrameInfo | 2 | 强化表机器框架信息 | 高 |
| useCharacterJobFatigue | 5 | 按职业疲劳值礼物脚本数据（UseJobFatigueGiftScript） | 高 |
| useCharacterJobFatigue::fatigueMatchGift | 6 | 职业疲劳匹配礼物条目 | 高 |
| user_gold_info | 4 | 用户金币信息结构 | 高 |

## 7. 核心类依赖关系速览

```
事件域:
  dnf_event_log(DB) --> CEventManager::LoadEventFromDB --> TriggerEventStart(id)
      --> CEventBase::StartEvent / deliveryStart / StartAction (vtable)
      --> C*Event(约50个具体事件, 槽位数组 m_pEvent[id])
      --> BroadcastEventInfo(ENUM_NOTIPACKET_EVENT_INFO)
  ingame_event_script_list(RDAR脚本) --> CEventScriptMng::initScriptlist
      --> CEventEntity 子类(CAttendance/CLevelUpReward/CPurchaseCashItemBonus/...)
      <-- CUser::_onLevelUp / CUser::FatigueUp / Inter_UpdatePurchaseCashItemBonus
      --> DB_UpdateInGameEventHistory / EventClassify::CEventActionMng(发奖动作)

现金/商城域:
  Dispatcher_BuyCeraShopItem --> WongWork::CCeraShop::ProcessBuyRequest(G8)
      --> CCeraShopGoods/CItemLimitEdition/CerashopAddRestrict 校验
      --> CIPGMgr::PutIPGRequest(SIPGData) --> CIPGWorker::ProcIPGSyncForTaiwan
      --> Taiwan::TaiwanCash.purchase/charge/confirm/cancel (BillTransaction+*Query)
      --> 回包 --> CCeraShop::ProcessIPGUserData / SpecialItemHandler::execute
      --> EventClassify::CPurchaseCashItemBonus --> DB_UpdateCeraShopPurchaseCount
      --> Inter_UpdatePurchaseCashItemBonus --> send_purchase_bonus_mail
  nexon::cash SDK(NexonCash/NCashImpl/TCPSocket/...): 编译保留, 0 外部调用(死代码)
  Redeem_Item::CRedeemItem <--> CUser/CInventory(物品回收换Cera)
  private_store::CPrivateStore(StaticPool<300>) <-- CPrivateStoreMgr(卖家map)
      --> CPacketBufPrivate(包) / DB_Load/SavePrivateStore / Dispatcher_*(他组)
  secretshop::CSecretShop --> IBuyRule(CBuyItembyGold/Recipe) --> CUser/CInventory

社交/公告域:
  kInformNoticeBit/Index(常量数组) --> CCharacInformNotice(CUser内嵌)
      <-- Dispatcher_InformNotice / DB_SaveInformNotice / InformNoticeData
  SlangFilter/SlangNode: 聊天脏话过滤
  Timer*(119): 注册到中央定时器系统, dispatch_sig 回调各子系统
```
