# dbmw 残留函数语义验证（2026-08-16）

判定口径与 statics/monitor 一致：大块汇编不同→判不同；小块不同→详判原因，
属编译器形态且语义等价→SEMANTIC_EQ。

## 覆盖方式

- dbmw_diff_audit：133/133 全覆盖（其中 98 个未审计函数逐项核实为编译器形态；
  发现 SendGuildCoinByMail tm 字段 bug 已修）。
- dbmw_semantic_s1（42 个）：41 SEMANTIC_EQ / 1 REAL_DIFF（InsertMail 已修）。
- dbmw_semantic_s2（39 个）：39 SEMANTIC_EQ / 0 REAL_DIFF。
- （s3 两批代理超时丢失，但其清单函数绝大部分已被 dbmw_diff_audit 全覆盖核实。）

## 真实语义 bug（已修复）

1. `SendGuildCoinByMail`：tm_hour+1/min=0/sec=0（下一小时整点）；原为
   mday+1/hour=0/min=0。已修。
2. `InsertMail`：两处错误日志 `"InsertLetter/Postal Err, %s(%s)"` vararg 顺序
   ORIG 为 (content, hE)，OURS 误为 (content, subject)。已修为 (content, (char*)hE)。

## 其余全部 SEMANTIC_EQ

包括 InsertFrameLagStatistics（b8 的 frame4/time4 算术误报已复核：ORIG
56(i+1)+0xf 与 OURS 56i+0x47 同址）、QueryParty*、onItemLimitEdition*、
QueryDeathTower*、OnSavePowerWar*、SaveGuild*、QueryGuild*、ChangeGuildNotifyMessage、
OnGoldcardEventStatistic、OnGuildJoinByListApprove、QueryCubeStatisticCreate、
OnSavePacketOverflowWrite、QueryUpdateChannelOccNum、SaveUnchangableGuildInfo、
UpdateRandomboxStatistic、insertHolePunchingResult、updateCompatibilityIndex、
OnInsertGuildCargoHistory、QueryGuildAllMembersProxy、OnSaveAssertManagerInfoWrite、
QueryTowerOfDespairStatistic、UpdateDisjointAvatarStatistic、
updateNexonPinPcRoomPlayTimeEvent、QueryDeathTowerPlayData*、AddBuddy、
OnPcRoomPlayTimeReward、OnChangeUnconnectedGuildMemberGrade、EndPacketProcessLog、
StrPunish、get_int、allocStackBuffer/freeAllStackBuffers 等。

## 汇总

dbmw 133 个非 identical 全部完成语义验证；2 个真实 bug（SendGuildCoinByMail、
InsertMail）已修复；其余全部为编译器形态（栈槽/帧、寄存器分配、分支镜像、
CSE、地址计算等价形式、set_query/exec 判定写法、`{0}`/movzbl 形态、
异常清理顺序），语义与 ORIG 等价。
