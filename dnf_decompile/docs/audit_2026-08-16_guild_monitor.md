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

## dbmw 补审（dbmw_diff_audit，覆盖 b8 未审的 ~99 个函数）

### A 类（真实语义 bug，已修）
- `CDBManager::SendGuildCoinByMail`：ORIG 做 `tm_hour += 1; tm_min = 0;
  tm_sec = 0`（下一小时整点）；OURS 做 `tm_mday += 1; tm_hour = 0;
  tm_min = 0`（明天+清时分，秒残留）。已修（注意此前的 6f4f3d22 只修了
  AwardGuildCoinByMail，两个函数需分别核对）。

### 其余 98 个
全部逐项核实为编译器形态（栈槽/帧、寄存器、分支镜像、imul↔shl+add 缩放寻址、
`empty()`↔`size()==0`、make_pair 标准差异、内联拷贝↔memcpy、异常清理差异），
字符串/调用/常量/字段偏移无差异。

## guild 补审（guild_diff_audit2，167/167 全覆盖）

- 无新增真实语义 bug；上一轮 A 类修复复核一致。
- 5 处"错误函数名"异常串（OnGuildCargoUpgrade→OnGuildApplyOriginalPowerSide、
  OnNoticeGuildWarPointChange→OnNoticeGuildWarEnd、OnRequestGuildMasterDelegate→
  OnRequestGuildSecede、OnDBMWGuildJoin→OnReplyGuildInvite、
  OnSetGuildMemberGradeFromWeb→OnSetGuildMemberGrade）经 ORIG 二进制逐字节核实为
  复制粘贴 bug，OURS 复刻正确，非差异。
- 四重信号（字符串差集/调用集合差/单侧常量/call 实参字段装载 290 处）+ 人工深核，
  其余全部为编译器形态（帧移、同址分解、min/clamp/abs 等价、分支镜像、CSE、
  异常清理顺序），无需再改源码。

## 审计覆盖汇总（截至 2026-08-16）

| 服务 | 非 identical | 覆盖 | 真实 bug 修复 |
|---|---|---|---|
| dbmw | 133 | b8(34) + 补审(99) = 133/133 | 12（含 SendGuildCoinByMail） |
| guild | 167 | 两轮 = 167/167 | 3（sendGuildBoardData/SaveDBPowerWarRank/ChatMsg throw 等） |
| monitor | 156 | 全量 156/156 | 2（delDB/setMinIPCount） |
| statics | 26 | 语义验证文档 26/26 | 4 + 22 SEMANTIC_EQ |

四个服务全部完成全覆盖审计，源码可修复的真实语义差异均已修复并提交；
剩余全部为编译器版本形态（ORIG 为 4.1.2-52/4.4.4-13/4.4.6-3/4.4.7-1 混合产物），
现有编译器组合已穷尽，无法在源码/TU 编译器层面继续消除。

## 通用结论
- 剩余 DIFF/NEAR 绝大多数为编译器形态：CSE、栈槽/帧尺寸、分支方向镜像
  （xor+je/jne、jbe/ja）、寄存器分配、异常 landing pad 摆放、跳转目标偏移、
  `{0}` 只清 N/4（4.4.6/4.4.7 -O0 怪癖）、__FUNCTION__ 槽 vs 字面量、
  memset 内联 vs call、浮点比较指令形态。
- 编译器组合已穷尽：c6(4.4.7)/c6446r(4.4.6-3)/c6444r(4.4.4-13)/c5(4.1.2) 及
  逐 TU 混合；dbmw 全量 c6444r=362、DNFPacketTranslater TU 切 c5=283，均劣于
  当前配置（monitor c6446r、dbmw c6+局部 c6446r、guild 混合）。
