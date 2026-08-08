# df_monitor_r 还原进度

更新：2026-08-09

## 当前水位（统一严格口径，compare_monitor.py）

| 指标 | 数值 |
|---|---:|
| 应用函数 | 1,827 |
| IDENTICAL（严格：保留常量/偏移/rodata，仅归一化跳转目标） | 252 |
| NEAR（助记符同、操作数异） | 163 |
| DIFF（助记符/结构异） | 787 |
| EMPTY/MISSING | 625 |

更新（同日第二批）：IDENTICAL 254 / NEAR 163 / DIFF 788 / MISSING **622**。
新增 OnCallMemberList（341B 会员列表）、OnNotifyNewMail/OnNotifyAuctionMail
（含 catch(...) 日志 0xb66/0x137e）、OnRegisterGM_mid、
OnMonitorFullLevelBroadCast。

工作流已优化：全量比对 0.5s（签名缓存），单函数 diff 0.2s
（diff_func.py）；批量疑似差异分类器 /tmp/mon_classify.py 秒级排序全部 DIFF。

## 本批次完成（会员进出家族）

- CUserManager：DelSchoolNo（417B）、FindUser_CharNo/FindUser_CharName 实现；
  5 个 map 成员改 const-key（mangled IKj/IKSs 与原版一致）。
- CMember：补 m_key@+0 字段（原版 GetMemberKey 读 +0）；ctor/dtor 按反编译；
  GetMemberKey/IsAbleToRegisterMember/SetMemberRegisterFlag/
  GetUpperMemberExpLevel/GetConnLowerMemberCnt/InsertUpperMember/
  InsertLowerMember/IsAlreadyMemberMember/DeleteUpper(Lower)Member/
  GetUpperMember_CharId/FindLowerMember 实现；m_registerTime/m_dayHourTime 改 uint。
- CUser：字段 getter（GetUniqCharNo/GetDBID/GetLevel/GetIdByChannel/
  GetCharName/GetGameServer）+ 会员判定方法族。
- CMemberManager：InsertMember 改 int；RegisterMember/SaveMemberOnConnect/
  SaveMemberOnUnConnect/CreateMemberInJoin/CheckMemberEnter/CheckEmptyMember/
  IsAlreadyMemberMember/GetMemberExpLevel。
- CPacketTranslater：m_pclApp 静态 + attach；OnRequestMemberEnter（496B）、
  OnMemberEnterReply（746B）、OnMemberSecede（359B）；4 个 Send 辅助；
  6 个 Packet_Monitor_* 包类（0x4b7/0x4b8/0x4b9/0x4ba/0x4bb/0x4bc）。
- 其它：CMemberExpTbl::GetMemberExpLevel 双版本、CGMAccounts::isGM、
  CApplication::GetGMAccounts、village_attacked::ClearDungeonCloseTime。
- 构建脚本：增量编译增加头文件依赖检查（.h 变更触发重编）。

## 大函数核验结论（逐个对照 Ghidra 反编译，语义等价）

| 函数 | 状态 | 结论 |
|---|---|---|
| CApplication::Load (1111B) | DIFF | 语义/日志行号/分支一致；残留 rodata 地址 + -O0 块序 |
| CSignalTranslator::init_signal (1063B) | NEAR | 操作数差异全部为链接地址，结构逐条一致 |
| CUdpNetworkThread::dispatch (524B) | DIFF | 消息/行号/三级错误分支一致；Not-Ready 抛异常位置不同 |
| CServerHandler::Load (354B) | DIFF | 0xff/0xc8/0xca 校验、0x5d/0x6f 重载日志一致 |
| CServerHandler::Process (330B) | DIFF | 心跳计数、掉线清理、DBMW 重连 0xdc/0x124/0x13d 一致 |
| CApplication::Free (317B) | DIFF | 析构/释放序列一致，虚析构调用形态差异 |
| CPeer::parsing (290B) | DIFF | 全部分支/日志一致；原版 0x10e 段 try/catch+printf 为死代码 |
| CMemberManager::MemerMemLogin (289B) | DIFF | 三段抛异常 + 日志 0x20c/0x21a 一致 |
| CUserManager::GetSchoolCount/AddSchoolNo/DelSchoolNo | NEAR/DIFF | 逻辑一致，栈布局差异 |

## 关键事实备忘

- 0x46/0x55 语义（auction/point）：0x46=70=AUCTION_ITEM_LV_MAX（DWARF 枚举
  const_value 70）；0x55=85 是 auction 构建硬编码字面量（DWARF 无命名常量）。
  -DPOINT_SERVER 走 70（4 处），auction 走 85。
- 其它二进制类复用：guild 的 CUserManager（0x4c）等布局与 monitor 不同，不能
  直接搬；共享库（CMyFileLog/CGuard/CDNFException/PacketHeader/
  DNFFunctionLib）与写法惯例可复用；monitor 布局一律以 nm/反编译为准。
- CPacketTranslater 剩余 123 个 handler 仍为空桩（累计约 2.2 万字节）；
  OnLogout/OnCharLogin/OnReplyUserInfo/OnLogin/OnNoticeOtherChannelChatMsg
  依赖 CLoginLogoutStatistics/CBuddyRegisterManager/exchange_server 等
  辅助函数，需分批实现。
