# gain_exp_sp

`_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib`

`CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866a3fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866a3fe  _ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib
#           CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
# range [0x0866a3fe, 0x0866a99b]
0866a3fe +0x000:  push   %ebp
0866a3ff +0x001:  mov    %esp,%ebp
0866a401 +0x003:  push   %edi
0866a402 +0x004:  push   %esi
0866a403 +0x005:  push   %ebx
0866a404 +0x006:  sub    $0x6c,%esp
0866a407 +0x009:  mov    0x20(%ebp),%eax
0866a40a +0x00c:  mov    %al,-0x4c(%ebp)
0866a40d +0x00f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0866a412 +0x014:  mov    0x1a8(%eax),%eax
0866a418 +0x01a:  cmp    $0x2,%eax
0866a41b +0x01d:  sete   %al
0866a41e +0x020:  test   %al,%al
0866a420 +0x022:  je     0866a43e <+0x40>
0866a422 +0x024:  mov    0x8(%ebp),%eax
0866a425 +0x027:  mov    %eax,(%esp)
0866a428 +0x02a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a42d +0x02f:  cmp    $0x31,%eax
0866a430 +0x032:  setg   %al
0866a433 +0x035:  test   %al,%al
0866a435 +0x037:  je     0866a43e <+0x40>
0866a437 +0x039:  movl   $0x0,0xc(%ebp)
0866a43e +0x040:  cmpl   $0x0,0xc(%ebp)
0866a442 +0x044:  jns    0866a44b <+0x4d>
0866a444 +0x046:  movl   $0x0,0xc(%ebp)
0866a44b +0x04d:  cmpl   $0x1,0x18(%ebp)
0866a44f +0x051:  je     0866a457 <+0x59>
0866a451 +0x053:  cmpl   $0x2,0x18(%ebp)
0866a455 +0x057:  jne    0866a46e <+0x70>
0866a457 +0x059:  mov    0x8(%ebp),%eax
0866a45a +0x05c:  mov    0x8e068(%eax),%eax
0866a460 +0x062:  mov    %eax,%edx
0866a462 +0x064:  add    0xc(%ebp),%edx
0866a465 +0x067:  mov    0x8(%ebp),%eax
0866a468 +0x06a:  mov    %edx,0x8e068(%eax)
0866a46e +0x070:  mov    0x8(%ebp),%eax
0866a471 +0x073:  mov    0x8e05c(%eax),%eax
0866a477 +0x079:  mov    %eax,%edx
0866a479 +0x07b:  add    0xc(%ebp),%edx
0866a47c +0x07e:  mov    0x8(%ebp),%eax
0866a47f +0x081:  mov    %edx,0x8e05c(%eax)
0866a485 +0x087:  mov    0xc(%ebp),%eax
0866a488 +0x08a:  mov    %eax,0x4(%esp)
0866a48c +0x08e:  mov    0x8(%ebp),%eax
0866a48f +0x091:  mov    %eax,(%esp)
0866a492 +0x094:  call   0869729a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3aef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3aef
0866a497 +0x099:  movb   $0x0,-0x29(%ebp)
0866a49b +0x09d:  mov    0x8(%ebp),%eax
0866a49e +0x0a0:  mov    %eax,(%esp)
0866a4a1 +0x0a3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a4a6 +0x0a8:  cmp    $0x54,%eax
0866a4a9 +0x0ab:  setle  %al
0866a4ac +0x0ae:  test   %al,%al
0866a4ae +0x0b0:  je     0866a58f <+0x191>
0866a4b4 +0x0b6:  mov    0x1c(%ebp),%eax
0866a4b7 +0x0b9:  mov    %eax,0x14(%esp)
0866a4bb +0x0bd:  mov    0x18(%ebp),%eax
0866a4be +0x0c0:  mov    %eax,0x10(%esp)
0866a4c2 +0x0c4:  mov    0x14(%ebp),%eax
0866a4c5 +0x0c7:  mov    %eax,0xc(%esp)
0866a4c9 +0x0cb:  mov    0x10(%ebp),%eax
0866a4cc +0x0ce:  mov    %eax,0x8(%esp)
0866a4d0 +0x0d2:  mov    0xc(%ebp),%eax
0866a4d3 +0x0d5:  mov    %eax,0x4(%esp)
0866a4d7 +0x0d9:  mov    0x8(%ebp),%eax
0866a4da +0x0dc:  mov    %eax,(%esp)
0866a4dd +0x0df:  call   08662aea <_ZN5CUser15_check_level_upEiRiS0_13eExpAddReasoni>  ; CUser::_check_level_up(int, int&, int&, eExpAddReason, int)
0866a4e2 +0x0e4:  mov    %al,-0x29(%ebp)
0866a4e5 +0x0e7:  mov    0x8(%ebp),%eax
0866a4e8 +0x0ea:  mov    %eax,(%esp)
0866a4eb +0x0ed:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866a4f0 +0x0f2:  movl   $0x0,0x4(%esp)
0866a4f8 +0x0fa:  mov    %eax,(%esp)
0866a4fb +0x0fd:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866a500 +0x102:  mov    %eax,-0x28(%ebp)
0866a503 +0x105:  mov    0x10(%ebp),%eax
0866a506 +0x108:  mov    (%eax),%eax
0866a508 +0x10a:  mov    %eax,0x4(%esp)
0866a50c +0x10e:  mov    0x8(%ebp),%eax
0866a50f +0x111:  mov    %eax,(%esp)
0866a512 +0x114:  call   0866a9a0 <_ZN5CUser7gain_spEi>  ; CUser::gain_sp(int)
0866a517 +0x119:  mov    0x8(%ebp),%eax
0866a51a +0x11c:  mov    %eax,(%esp)
0866a51d +0x11f:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866a522 +0x124:  movl   $0x2,0x4(%esp)
0866a52a +0x12c:  mov    %eax,(%esp)
0866a52d +0x12f:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866a532 +0x134:  mov    %eax,-0x24(%ebp)
0866a535 +0x137:  mov    0x14(%ebp),%eax
0866a538 +0x13a:  mov    (%eax),%eax
0866a53a +0x13c:  mov    %eax,0x4(%esp)
0866a53e +0x140:  mov    0x8(%ebp),%eax
0866a541 +0x143:  mov    %eax,(%esp)
0866a544 +0x146:  call   0866aad2 <_ZN5CUser8gain_sfpEi>  ; CUser::gain_sfp(int)
0866a549 +0x14b:  mov    0x10(%ebp),%eax
0866a54c +0x14e:  mov    (%eax),%eax
0866a54e +0x150:  movl   $0x0,0xc(%esp)
0866a556 +0x158:  mov    %eax,0x8(%esp)
0866a55a +0x15c:  mov    -0x28(%ebp),%eax
0866a55d +0x15f:  mov    %eax,0x4(%esp)
0866a561 +0x163:  mov    0x8(%ebp),%eax
0866a564 +0x166:  mov    %eax,(%esp)
0866a567 +0x169:  call   0866ac0e <_ZN5CUser14history_log_spEii12eSPAddReason>  ; CUser::history_log_sp(int, int, eSPAddReason)
0866a56c +0x16e:  mov    0x14(%ebp),%eax
0866a56f +0x171:  mov    (%eax),%eax
0866a571 +0x173:  movl   $0x0,0xc(%esp)
0866a579 +0x17b:  mov    %eax,0x8(%esp)
0866a57d +0x17f:  mov    -0x24(%ebp),%eax
0866a580 +0x182:  mov    %eax,0x4(%esp)
0866a584 +0x186:  mov    0x8(%ebp),%eax
0866a587 +0x189:  mov    %eax,(%esp)
0866a58a +0x18c:  call   0866acd0 <_ZN5CUser15history_log_sfpEii12eSPAddReason>  ; CUser::history_log_sfp(int, int, eSPAddReason)
0866a58f +0x191:  lea    -0x48(%ebp),%eax
0866a592 +0x194:  mov    %eax,(%esp)
0866a595 +0x197:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866a59a +0x19c:  cmpb   $0x0,-0x29(%ebp)
0866a59e +0x1a0:  je     0866a7ee <+0x3f0>
0866a5a4 +0x1a6:  mov    0x8(%ebp),%eax
0866a5a7 +0x1a9:  mov    %eax,(%esp)
0866a5aa +0x1ac:  call   0868ff04 <_ZN5CUser21CalcurateUserMaxLevelEv>  ; CUser::CalcurateUserMaxLevel()
0866a5af +0x1b1:  mov    0x8(%ebp),%eax
0866a5b2 +0x1b4:  mov    %eax,(%esp)
0866a5b5 +0x1b7:  call   086467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>  ; CUserCharacInfo::GetCurCharacMaxEquipLevel() const
0866a5ba +0x1bc:  test   %eax,%eax
0866a5bc +0x1be:  je     0866a5e1 <+0x1e3>
0866a5be +0x1c0:  mov    0x8(%ebp),%eax
0866a5c1 +0x1c3:  mov    %eax,(%esp)
0866a5c4 +0x1c6:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a5c9 +0x1cb:  mov    %eax,%ebx
0866a5cb +0x1cd:  mov    0x8(%ebp),%eax
0866a5ce +0x1d0:  mov    %eax,(%esp)
0866a5d1 +0x1d3:  call   086467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>  ; CUserCharacInfo::GetCurCharacMaxEquipLevel() const
0866a5d6 +0x1d8:  cmp    %eax,%ebx
0866a5d8 +0x1da:  jne    0866a5e1 <+0x1e3>
0866a5da +0x1dc:  mov    $0x1,%eax
0866a5df +0x1e1:  jmp    0866a5e6 <+0x1e8>
0866a5e1 +0x1e3:  mov    $0x0,%eax
0866a5e6 +0x1e8:  test   %al,%al
0866a5e8 +0x1ea:  je     0866a5fd <+0x1ff>
0866a5ea +0x1ec:  mov    0x8(%ebp),%eax
0866a5ed +0x1ef:  movl   $0x0,0x4(%esp)
0866a5f5 +0x1f7:  mov    %eax,(%esp)
0866a5f8 +0x1fa:  call   086467c2 <_ZN15CUserCharacInfo25SetCurCharacMaxEquipLevelEi>  ; CUserCharacInfo::SetCurCharacMaxEquipLevel(int)
0866a5fd +0x1ff:  mov    0x8(%ebp),%eax
0866a600 +0x202:  mov    %eax,(%esp)
0866a603 +0x205:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0866a608 +0x20a:  mov    %eax,(%esp)
0866a60b +0x20d:  call   086ad178 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv>  ; UserQuest::ResetUrgentQuestWaitingList()
0866a610 +0x212:  lea    -0x48(%ebp),%ebx
0866a613 +0x215:  mov    0x8(%ebp),%eax
0866a616 +0x218:  mov    %eax,(%esp)
0866a619 +0x21b:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866a61e +0x220:  mov    %ebx,0x4(%esp)
0866a622 +0x224:  mov    %eax,(%esp)
0866a625 +0x227:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0866a62a +0x22c:  mov    0x8(%ebp),%eax
0866a62d +0x22f:  add    $0x796f4,%eax
0866a632 +0x234:  mov    %eax,(%esp)
0866a635 +0x237:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0866a63a +0x23c:  lea    -0x48(%ebp),%eax
0866a63d +0x23f:  mov    %eax,0x4(%esp)
0866a641 +0x243:  mov    0x8(%ebp),%eax
0866a644 +0x246:  mov    %eax,(%esp)
0866a647 +0x249:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866a64c +0x24e:  mov    0x8(%ebp),%eax
0866a64f +0x251:  mov    %eax,(%esp)
0866a652 +0x254:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a657 +0x259:  cmp    $0x55,%eax
0866a65a +0x25c:  sete   %al
0866a65d +0x25f:  test   %al,%al
0866a65f +0x261:  je     0866a66c <+0x26e>
0866a661 +0x263:  mov    0x8(%ebp),%eax
0866a664 +0x266:  mov    %eax,(%esp)
0866a667 +0x269:  call   08696386 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2bdb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2bdb
0866a66c +0x26e:  mov    0x8(%ebp),%eax
0866a66f +0x271:  mov    %eax,(%esp)
0866a672 +0x274:  call   0867cd20 <_ZN5CUser21_UpdateUserInfo4GuildEv>  ; CUser::_UpdateUserInfo4Guild()
0866a677 +0x279:  mov    0x8(%ebp),%eax
0866a67a +0x27c:  mov    %eax,(%esp)
0866a67d +0x27f:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0866a682 +0x284:  movsbl %al,%eax
0866a685 +0x287:  mov    %eax,-0x54(%ebp)
0866a688 +0x28a:  mov    0x8(%ebp),%eax
0866a68b +0x28d:  mov    %eax,(%esp)
0866a68e +0x290:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a693 +0x295:  movswl %ax,%edi
0866a696 +0x298:  movl   $0xffffffff,0x4(%esp)
0866a69e +0x2a0:  mov    0x8(%ebp),%eax
0866a6a1 +0x2a3:  mov    %eax,(%esp)
0866a6a4 +0x2a6:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0866a6a9 +0x2ab:  mov    %eax,%esi
0866a6ab +0x2ad:  mov    0x8(%ebp),%eax
0866a6ae +0x2b0:  mov    %eax,(%esp)
0866a6b1 +0x2b3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0866a6b6 +0x2b8:  mov    %eax,%ebx
0866a6b8 +0x2ba:  mov    0x8(%ebp),%eax
0866a6bb +0x2bd:  mov    %eax,(%esp)
0866a6be +0x2c0:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0866a6c3 +0x2c5:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0866a6c9 +0x2cb:  mov    %eax,0x4(%esp)
0866a6cd +0x2cf:  mov    %edx,(%esp)
0866a6d0 +0x2d2:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0866a6d5 +0x2d7:  mov    -0x54(%ebp),%edx
0866a6d8 +0x2da:  mov    %edx,0x10(%esp)
0866a6dc +0x2de:  mov    %edi,0xc(%esp)
0866a6e0 +0x2e2:  mov    %esi,0x8(%esp)
0866a6e4 +0x2e6:  mov    %ebx,0x4(%esp)
0866a6e8 +0x2ea:  mov    %eax,(%esp)
0866a6eb +0x2ed:  call   0846da9a <_ZN17CGuildServerProxy21SendCharLevelGrowTypeEjjss>  ; CGuildServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short)
0866a6f0 +0x2f2:  mov    0x8(%ebp),%eax
0866a6f3 +0x2f5:  mov    %eax,(%esp)
0866a6f6 +0x2f8:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0866a6fb +0x2fd:  movsbl %al,%eax
0866a6fe +0x300:  mov    %eax,-0x50(%ebp)
0866a701 +0x303:  mov    0x8(%ebp),%eax
0866a704 +0x306:  mov    %eax,(%esp)
0866a707 +0x309:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a70c +0x30e:  movswl %ax,%edi
0866a70f +0x311:  movl   $0xffffffff,0x4(%esp)
0866a717 +0x319:  mov    0x8(%ebp),%eax
0866a71a +0x31c:  mov    %eax,(%esp)
0866a71d +0x31f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0866a722 +0x324:  mov    %eax,%esi
0866a724 +0x326:  mov    0x8(%ebp),%eax
0866a727 +0x329:  mov    %eax,(%esp)
0866a72a +0x32c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0866a72f +0x331:  mov    %eax,%ebx
0866a731 +0x333:  mov    0x8(%ebp),%eax
0866a734 +0x336:  mov    %eax,(%esp)
0866a737 +0x339:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0866a73c +0x33e:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
0866a742 +0x344:  mov    %eax,0x4(%esp)
0866a746 +0x348:  mov    %edx,(%esp)
0866a749 +0x34b:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0866a74e +0x350:  mov    -0x50(%ebp),%edx
0866a751 +0x353:  mov    %edx,0x10(%esp)
0866a755 +0x357:  mov    %edi,0xc(%esp)
0866a759 +0x35b:  mov    %esi,0x8(%esp)
0866a75d +0x35f:  mov    %ebx,0x4(%esp)
0866a761 +0x363:  mov    %eax,(%esp)
0866a764 +0x366:  call   08470c04 <_ZN19CMonitorServerProxy21SendCharLevelGrowTypeEjjss>  ; CMonitorServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short)
0866a769 +0x36b:  mov    0x8(%ebp),%eax
0866a76c +0x36e:  mov    %eax,(%esp)
0866a76f +0x371:  call   0868b552 <_ZN5CUser25VerifyPresentAvengerTitleEv>  ; CUser::VerifyPresentAvengerTitle()
0866a774 +0x376:  xor    $0x1,%eax
0866a777 +0x379:  test   %al,%al
0866a779 +0x37b:  je     0866a7e3 <+0x3e5>
0866a77b +0x37d:  mov    0x8(%ebp),%eax
0866a77e +0x380:  mov    %eax,(%esp)
0866a781 +0x383:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866a786 +0x388:  mov    %eax,%esi
0866a788 +0x38a:  mov    0x8(%ebp),%eax
0866a78b +0x38d:  mov    %eax,(%esp)
0866a78e +0x390:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0866a793 +0x395:  movl   $0x0,0x4(%esp)
0866a79b +0x39d:  mov    %eax,(%esp)
0866a79e +0x3a0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0866a7a3 +0x3a5:  mov    %eax,%ebx
0866a7a5 +0x3a7:  movl   $0x0,0xc(%esp)
0866a7ad +0x3af:  movl   $0x5046,0x8(%esp)
0866a7b5 +0x3b7:  movl   $&_ZZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonibE19__PRETTY_FUNCTION__,0x4(%esp)
0866a7bd +0x3bf:  lea    -0x3c(%ebp),%eax
0866a7c0 +0x3c2:  mov    %eax,(%esp)
0866a7c3 +0x3c5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0866a7c8 +0x3ca:  mov    %esi,0xc(%esp)
0866a7cc +0x3ce:  mov    %ebx,0x8(%esp)
0866a7d0 +0x3d2:  movl   $"CUser::VerifyPresentAvengerTitle() m_id(%s), charac_no(%u)",0x4(%esp)
0866a7d8 +0x3da:  lea    -0x3c(%ebp),%eax
0866a7db +0x3dd:  mov    %eax,(%esp)
0866a7de +0x3e0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0866a7e3 +0x3e5:  mov    0x8(%ebp),%eax
0866a7e6 +0x3e8:  mov    %eax,(%esp)
0866a7e9 +0x3eb:  call   0868e596 <_ZN5CUser25AddCurCharacMercenaryInfoEv>  ; CUser::AddCurCharacMercenaryInfo()
0866a7ee +0x3f0:  mov    0x8(%ebp),%eax
0866a7f1 +0x3f3:  mov    0x8cfc4(%eax),%eax
0866a7f7 +0x3f9:  cmp    $0x5,%eax
0866a7fa +0x3fc:  je     0866a834 <+0x436>
0866a7fc +0x3fe:  mov    0x8(%ebp),%eax
0866a7ff +0x401:  mov    0x8cfc4(%eax),%eax
0866a805 +0x407:  cmp    $0x8,%eax
0866a808 +0x40a:  je     0866a834 <+0x436>
0866a80a +0x40c:  mov    0x8(%ebp),%eax
0866a80d +0x40f:  mov    0x8cfc4(%eax),%eax
0866a813 +0x415:  cmp    $0x7,%eax
0866a816 +0x418:  je     0866a834 <+0x436>
0866a818 +0x41a:  mov    0x8(%ebp),%eax
0866a81b +0x41d:  mov    0x8cfc4(%eax),%eax
0866a821 +0x423:  cmp    $0xa,%eax
0866a824 +0x426:  je     0866a834 <+0x436>
0866a826 +0x428:  mov    0x8(%ebp),%eax
0866a829 +0x42b:  mov    0x8cfc4(%eax),%eax
0866a82f +0x431:  cmp    $0xc,%eax
0866a832 +0x434:  jne    0866a8b1 <+0x4b3>
0866a834 +0x436:  movzbl -0x4c(%ebp),%eax
0866a838 +0x43a:  xor    $0x1,%eax
0866a83b +0x43d:  test   %al,%al
0866a83d +0x43f:  je     0866a877 <+0x479>
0866a83f +0x441:  movl   $0x0,0xc(%esp)
0866a847 +0x449:  movl   $0x25,0x8(%esp)
0866a84f +0x451:  movl   $0x1,0x4(%esp)
0866a857 +0x459:  mov    0x8(%ebp),%eax
0866a85a +0x45c:  mov    %eax,(%esp)
0866a85d +0x45f:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866a862 +0x464:  mov    0x8(%ebp),%eax
0866a865 +0x467:  movl   $0x0,0x4(%esp)
0866a86d +0x46f:  mov    %eax,(%esp)
0866a870 +0x472:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
0866a875 +0x477:  jmp    0866a8a0 <+0x4a2>
0866a877 +0x479:  cmpb   $0x0,-0x29(%ebp)
0866a87b +0x47d:  je     0866a8a0 <+0x4a2>
0866a87d +0x47f:  movl   $0x0,0xc(%esp)
0866a885 +0x487:  movl   $0x25,0x8(%esp)
0866a88d +0x48f:  movl   $0x1,0x4(%esp)
0866a895 +0x497:  mov    0x8(%ebp),%eax
0866a898 +0x49a:  mov    %eax,(%esp)
0866a89b +0x49d:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866a8a0 +0x4a2:  cmpb   $0x0,-0x29(%ebp)
0866a8a4 +0x4a6:  je     0866a8b1 <+0x4b3>
0866a8a6 +0x4a8:  mov    0x8(%ebp),%eax
0866a8a9 +0x4ab:  mov    %eax,(%esp)
0866a8ac +0x4ae:  call   0868d780 <_ZN5CUser33decide_growth_power_reward_systemEv>  ; CUser::decide_growth_power_reward_system()
0866a8b1 +0x4b3:  cmpb   $0x0,-0x29(%ebp)
0866a8b5 +0x4b7:  je     0866a920 <+0x522>
0866a8b7 +0x4b9:  mov    0x8(%ebp),%eax
0866a8ba +0x4bc:  mov    %eax,(%esp)
0866a8bd +0x4bf:  call   085bfc78 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x11d6>  ; global constructors keyed to CParty::cMember::cMember()+0x11d6
0866a8c2 +0x4c4:  mov    %eax,%ebx
0866a8c4 +0x4c6:  mov    0x8(%ebp),%eax
0866a8c7 +0x4c9:  mov    %eax,(%esp)
0866a8ca +0x4cc:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a8cf +0x4d1:  mov    &_ZN10GlobalData14s_statisticMgrE,%edx
0866a8d5 +0x4d7:  mov    %ebx,0x8(%esp)
0866a8d9 +0x4db:  mov    %eax,0x4(%esp)
0866a8dd +0x4df:  mov    %edx,(%esp)
0866a8e0 +0x4e2:  call   0860ecc6 <_ZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEii>  ; CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay(int, int)
0866a8e5 +0x4e7:  mov    0x8(%ebp),%eax
0866a8e8 +0x4ea:  mov    %eax,(%esp)
0866a8eb +0x4ed:  call   086969fe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3253>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3253
0866a8f0 +0x4f2:  mov    0x8(%ebp),%eax
0866a8f3 +0x4f5:  mov    %eax,(%esp)
0866a8f6 +0x4f8:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0866a8fb +0x4fd:  mov    %eax,0x4(%esp)
0866a8ff +0x501:  mov    0x8(%ebp),%eax
0866a902 +0x504:  mov    %eax,(%esp)
0866a905 +0x507:  call   0849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>  ; expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)
0866a90a +0x50c:  mov    0x8(%ebp),%eax
0866a90d +0x50f:  mov    %eax,(%esp)
0866a910 +0x512:  call   08689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>  ; CUser::ReCalcChattingEmoticon()
0866a915 +0x517:  mov    0x8(%ebp),%eax
0866a918 +0x51a:  mov    %eax,(%esp)
0866a91b +0x51d:  call   08689b90 <_ZN5CUser20SendChattingEmoticonEv>  ; CUser::SendChattingEmoticon()
0866a920 +0x522:  cmpb   $0x0,-0x29(%ebp)
0866a924 +0x526:  je     0866a96c <+0x56e>
0866a926 +0x528:  movl   $0x55,-0x20(%ebp)
0866a92d +0x52f:  movl   $0x50,-0x1c(%ebp)
0866a934 +0x536:  mov    0x8(%ebp),%eax
0866a937 +0x539:  mov    %eax,(%esp)
0866a93a +0x53c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a93f +0x541:  cmp    $0x55,%eax
0866a942 +0x544:  sete   %al
0866a945 +0x547:  test   %al,%al
0866a947 +0x549:  je     0866a96c <+0x56e>
0866a949 +0x54b:  movl   $0x0,0xc(%esp)
0866a951 +0x553:  movl   $0x0,0x8(%esp)
0866a959 +0x55b:  movl   $0x21,0x4(%esp)
0866a961 +0x563:  mov    0x8(%ebp),%eax
0866a964 +0x566:  mov    %eax,(%esp)
0866a967 +0x569:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
0866a96c +0x56e:  movzbl -0x29(%ebp),%ebx
0866a970 +0x572:  lea    -0x48(%ebp),%eax
0866a973 +0x575:  mov    %eax,(%esp)
0866a976 +0x578:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866a97b +0x57d:  mov    %ebx,%eax
0866a97d +0x57f:  add    $0x6c,%esp
0866a980 +0x582:  pop    %ebx
0866a981 +0x583:  pop    %esi
0866a982 +0x584:  pop    %edi
0866a983 +0x585:  pop    %ebp
0866a984 +0x586:  ret
0866a985 +0x587:  mov    %edx,%ebx
0866a987 +0x589:  mov    %eax,%esi
0866a989 +0x58b:  lea    -0x48(%ebp),%eax
0866a98c +0x58e:  mov    %eax,(%esp)
0866a98f +0x591:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866a994 +0x596:  mov    %esi,%eax
0866a996 +0x598:  mov    %ebx,%edx
0866a998 +0x59a:  mov    %eax,(%esp)
0866a99b +0x59d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::gain_exp_sp @ 0x866a3fe

/* CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool) */

char __thiscall
CUser::gain_exp_sp(CUser *this,int param_1,int *param_2,int *param_3,int param_5,undefined4 param_6,
                  char param_7)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  SkillSlot *pSVar5;
  int iVar6;
  UserQuest *pUVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  CGuildServerProxy *this_00;
  CMonitorServerProxy *this_01;
  undefined4 uVar11;
  PacketGuard local_4c [12];
  cMyTrace local_40 [19];
  char local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar4 = G_CEnvironment();
  if (*(int *)(iVar4 + 0x1a8) == 2) {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (0x31 < iVar4) {
      param_1 = 0;
    }
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if ((param_5 == 1) || (param_5 == 2)) {
    *(int *)(this + 0x8e068) = *(int *)(this + 0x8e068) + param_1;
  }
  *(int *)(this + 0x8e05c) = *(int *)(this + 0x8e05c) + param_1;
  incPlayExpAdd(this,param_1);
  local_2d = '\0';
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (iVar4 < 0x55) {
    local_2d = _check_level_up(this,param_1,param_2,param_3,param_5,param_6);
    pSVar5 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    local_2c = SkillSlot::get_remain_sp_at_index(pSVar5,0);
    gain_sp(this,*param_2);
    pSVar5 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    local_28 = SkillSlot::get_remain_sfp_at_index(pSVar5,2);
    gain_sfp(this,*param_3);
    history_log_sp(this,local_2c,*param_2,0);
    history_log_sfp(this,local_28,*param_3,0);
  }
  PacketGuard::PacketGuard(local_4c);
  if (local_2d == '\0') goto LAB_0866a7ee;
                    /* try { // try from 0866a5aa to 0866a96b has its CatchHandler @ 0866a985 */
  CalcurateUserMaxLevel(this);
  iVar4 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)this);
  if (iVar4 == 0) {
LAB_0866a5e1:
    bVar1 = false;
  }
  else {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    iVar6 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)this);
    if (iVar4 != iVar6) goto LAB_0866a5e1;
    bVar1 = true;
  }
  if (bVar1) {
    CUserCharacInfo::SetCurCharacMaxEquipLevel((CUserCharacInfo *)this,0);
  }
  pUVar7 = (UserQuest *)getCurCharacQuestW(this);
  UserQuest::ResetUrgentQuestWaitingList(pUVar7);
  pUVar7 = (UserQuest *)getCurCharacQuestR(this);
  UserQuest::get_quest_info(pUVar7,(char *)local_4c);
  CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
  Send(this,local_4c);
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (iVar4 == 0x55) {
    CUserCharacInfo::resetCharacFatigueGrownUpBuff((CUserCharacInfo *)this);
  }
  _UpdateUserInfo4Guild(this);
  cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
  sVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  uVar8 = get_charac_no(this,-1);
  uVar9 = get_acc_id(this);
  uVar10 = GetServerGroup(this);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar10)
  ;
  CGuildServerProxy::SendCharLevelGrowType(this_00,uVar9,uVar8,sVar3,(short)cVar2);
  cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
  sVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  uVar8 = get_charac_no(this,-1);
  uVar9 = get_acc_id(this);
  uVar10 = GetServerGroup(this);
  this_01 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar10);
  CMonitorServerProxy::SendCharLevelGrowType(this_01,uVar9,uVar8,sVar3,(short)cVar2);
  cVar2 = VerifyPresentAvengerTitle(this);
  if (cVar2 != '\x01') {
    uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar8 = get_acc_id(this);
    uVar11 = NumberToString(uVar8,0);
    cMyTrace::cMyTrace(local_40,"bool CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)"
                       ,0x5046,0);
    cMyTrace::operator()
              (local_40,"CUser::VerifyPresentAvengerTitle() m_id(%s), charac_no(%u)",uVar11,uVar10);
  }
  AddCurCharacMercenaryInfo(this);
LAB_0866a7ee:
  if ((((*(int *)(this + 0x8cfc4) == 5) || (*(int *)(this + 0x8cfc4) == 8)) ||
      (*(int *)(this + 0x8cfc4) == 7)) ||
     ((*(int *)(this + 0x8cfc4) == 10 || (*(int *)(this + 0x8cfc4) == 0xc)))) {
    if (param_7 == '\x01') {
      if (local_2d != '\0') {
        SendNotiPacket(this,1,0x25,0);
      }
    }
    else {
      SendNotiPacket(this,1,0x25,0);
      CUserCharacInfo::set_charac_fatigue_buf_bonus_exp((CUserCharacInfo *)this,0);
    }
    if (local_2d != '\0') {
      decide_growth_power_reward_system(this);
    }
  }
  if (local_2d != '\0') {
    iVar4 = CUserCharacInfo::GetCurCharacDungeonPlayCount((CUserCharacInfo *)this);
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay(GlobalData::s_statisticMgr,iVar6,iVar4);
    CUserCharacInfo::ResetCurCharacDungeonPlayCount((CUserCharacInfo *)this);
    iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
    expert_job::CExpertJob::IncreaseExpertJobExp(this,iVar4);
    ReCalcChattingEmoticon(this);
    SendChattingEmoticon(this);
  }
  if (local_2d != '\0') {
    local_24 = 0x55;
    local_20 = 0x50;
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (iVar4 == 0x55) {
      APSystem::CUserProc::ClearActionAndSendtoUser(this,0x21,0,0);
    }
  }
  cVar2 = local_2d;
  PacketGuard::~PacketGuard(local_4c);
  return cVar2;
}
```
