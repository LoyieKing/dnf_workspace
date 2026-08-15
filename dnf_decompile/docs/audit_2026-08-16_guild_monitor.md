# guild / monitor 审计结论存档（2026-08-16）

## guild（水位 168 → 167，DIFF 151 / NEAR 16）

### A 类（真实语义 bug，已修）
- `CGuildBoard::sendGuildBoardData`：分页循环写错对象——OURS 的
  memcpy/m_guildKey/m_writerCharNo/memcpy(m_char) 写 `replyR`（不发送），
  ORIG 全部写 `reply`（发送对象）。修复：4 处 `replyR.m_boards[i]` → `reply.m_boards[i]`。
- `CPowerManager::SaveDBPowerWarRank`：guild rank 循环 ORIG 把 `&pkt+0xc`（包内
  m_c）直接作为 `int&` 传 `GetAllGuildRankingInfo` 回写真实排行数；OURS 写局部
  count、包 m_c 恒 0。修复：`*(int*)&guildPkt.m_c` 作参数。
- `OnNoticeGuildChatMsg`：ORIG 在字段检查失败时抛第二个异常
  （"packet->m_uCharID && ..."）；OURS 缺。已补。
- `OnNoticeGuildMailArrive` / `OnNoticeGuildWarPointChange`：OURS catch 块多
  printf/puts（ORIG 只有 CMyFileLog）。已删。MailArrive → IDENTICAL_AE。

### B 类（形态逼近，已做）
- 5 处日志名字面量 → `__FUNCTION__`（OnIncreaseGuildExp / OnGuildCargoPushItem /
  OnDBLoadReplyGuildBoardOpen×3）。
- OnDBLoadReplyGuildBoardOpen：else 包裹改 early-return，去 charNo/guildKey 局部、
  加 userMgr 局部（逼近 ORIG 槽位）。
- OnSetGuildMemberGrade：dbPkt 路径双 GetGameServer+null guard → 单次调用。
- SaveDBPowerWarRank 末尾：`users[i]` → `users.at(i)`。
- CGuildWar::SameRankWork：`memcpy(&maxIt,&it2,4)` → `maxIt = it2;`。
- CGuild::InsertGuildMember：`if (r.second==0){log;return 0;} return 1` 反转为
  `if (r.second!=0) return 1; log; return 0;`（消除 xor）。

## monitor（水位 157 → 156，DIFF 144 / NEAR 12）

### A 类（真实语义 bug，已修）
- `CBuddyHandle::delDB`：it==end 返回 0x12 → ORIG 0x15。NEAR → IDENTICAL_AE。
- `CIPCounter::setMinIPCount`：ORIG 无条件写 m_option（count<=200 写 count、
  >200 写 200）；OURS 只在 >200 分支写。已改为 clamp 后无条件写（剩余寄存器
  形态，c6444r/c6446r/c5 均生成内存比较，ORIG 为寄存器比较，无法复刻）。
- `UpdateHuntingPoint`：去冗余清零、if/else 反转（hp!=0 在前）、复刻 total=1
  死变量、日志 __FUNCTION__。

### B 类（已核实为形态，未修/不可靠）
- OnInnerPacketLogin/Logout：c6446r 对重复 Get_ServerHandler() 做 CSE（ORIG 每次
  重调），源码每次重赋值无法阻止，已确认。
- OnCallMemberList / OnVillageMonsterFightResult / OnNoticeCharLiveOnTenMin /
  OnNoticeOtherChannelChatMsg(+HyperLink) / OnRegisterToBlackList：帧差 0x10 来自
  局部物化/条件合一（ORIG 逐条早退），改法不保证翻越。
- 大量函数已双向核实无真实语义差异：OnLogin、OnLogout、OnGameServerRegist、
  OnPayTaxToUpper、OnAddBuddyDBReply/OnDelBuddyDBReply、onItemLimitEditionSellEnd/
  LoadDataRpy、onSocialEventReward*、OnWebEmergencyPatchMessage、OnLogoutComplete、
  OnGMRequestMid、OnMonitorFindFactoryHubUser、OnQueryBuddyInfoDBReply、
  onRequestCharacTowerUpdateRank、GetSchoolCount、GetFrameCountInfo、MsgDecode、
  CPeer::parsing/send_packet、CleanTcpSendPacketQ、NoticeMemberLogin_Out、
  CTask_ChristmasEvent::_DoExecute、CUdpHandler::SendToClient（0x61/0x60 边界镜像）、
  QueryCashMemoryBlackList、setLoadTerm/setOption（NEAR 仅栈槽）。

## 通用结论
- 剩余 DIFF/NEAR 绝大多数为编译器形态：CSE、栈槽/帧尺寸、分支方向镜像
  （xor+je/jne、jbe/ja）、寄存器分配、异常 landing pad 摆放、跳转目标偏移、
  `{0}` 只清 N/4（4.4.6/4.4.7 -O0 怪癖）、__FUNCTION__ 槽 vs 字面量、
  memset 内联 vs call、浮点比较指令形态。
- 编译器组合已穷尽：c6(4.4.7)/c6446r(4.4.6-3)/c6444r(4.4.4-13)/c5(4.1.2) 及
  逐 TU 混合；dbmw 全量 c6444r=362、DNFPacketTranslater TU 切 c5=283，均劣于
  当前配置（monitor c6446r、dbmw c6+局部 c6446r、guild 混合）。
