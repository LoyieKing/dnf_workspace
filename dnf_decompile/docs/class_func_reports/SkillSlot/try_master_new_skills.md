# try_master_new_skills

`_ZN9SkillSlot21try_master_new_skillsEiiiiii`

`SkillSlot::try_master_new_skills(int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08607460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08607460  _ZN9SkillSlot21try_master_new_skillsEiiiiii
#           SkillSlot::try_master_new_skills(int, int, int, int, int, int)
# range [0x08607460, 0x086078f3]
08607460 +0x000:  push   %ebp
08607461 +0x001:  mov    %esp,%ebp
08607463 +0x003:  push   %ebx
08607464 +0x004:  sub    $0x74,%esp
08607467 +0x007:  movl   $0x0,-0x2c(%ebp)
0860746e +0x00e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08607473 +0x013:  mov    0xc(%ebp),%edx
08607476 +0x016:  mov    %edx,0x8(%esp)
0860747a +0x01a:  mov    0x14(%ebp),%edx
0860747d +0x01d:  mov    %edx,0x4(%esp)
08607481 +0x021:  mov    %eax,(%esp)
08607484 +0x024:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08607489 +0x029:  mov    %eax,-0x2c(%ebp)
0860748c +0x02c:  cmpl   $0x0,-0x2c(%ebp)
08607490 +0x030:  jne    0860749c <+0x3c>
08607492 +0x032:  mov    $0xffffffff,%eax
08607497 +0x037:  jmp    086078ef <+0x48f>
0860749c +0x03c:  mov    -0x2c(%ebp),%eax
0860749f +0x03f:  mov    %eax,(%esp)
086074a2 +0x042:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
086074a7 +0x047:  mov    %eax,-0x28(%ebp)
086074aa +0x04a:  mov    0x8(%ebp),%eax
086074ad +0x04d:  mov    (%eax),%eax
086074af +0x04f:  test   %eax,%eax
086074b1 +0x051:  jne    086074bd <+0x5d>
086074b3 +0x053:  mov    $0xfffffffc,%eax
086074b8 +0x058:  jmp    086078ef <+0x48f>
086074bd +0x05d:  mov    0x8(%ebp),%eax
086074c0 +0x060:  lea    0x376(%eax),%edx
086074c6 +0x066:  movl   $0x1,0x10(%esp)
086074ce +0x06e:  mov    -0x28(%ebp),%eax
086074d1 +0x071:  mov    %eax,0xc(%esp)
086074d5 +0x075:  mov    0xc(%ebp),%eax
086074d8 +0x078:  mov    %eax,0x8(%esp)
086074dc +0x07c:  mov    %edx,0x4(%esp)
086074e0 +0x080:  mov    0x8(%ebp),%eax
086074e3 +0x083:  mov    %eax,(%esp)
086074e6 +0x086:  call   08607dba <_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib>  ; SkillSlot::get_skillslot_no(_Mastered_skill*, int, int, bool) const
086074eb +0x08b:  mov    %eax,-0x24(%ebp)
086074ee +0x08e:  movl   $0x0,-0x1c(%ebp)
086074f5 +0x095:  cmpl   $0xffffffff,-0x24(%ebp)
086074f9 +0x099:  je     0860752e <+0xce>
086074fb +0x09b:  mov    -0x24(%ebp),%edx
086074fe +0x09e:  mov    0x8(%ebp),%eax
08607501 +0x0a1:  add    $0x1b8,%edx
08607507 +0x0a7:  movzbl 0x7(%eax,%edx,2),%eax
0860750c +0x0ac:  movsbl %al,%eax
0860750f +0x0af:  mov    %eax,-0x1c(%ebp)
08607512 +0x0b2:  mov    -0x24(%ebp),%edx
08607515 +0x0b5:  mov    0x8(%ebp),%eax
08607518 +0x0b8:  add    $0x1b8,%edx
0860751e +0x0be:  movzbl 0x7(%eax,%edx,2),%eax
08607523 +0x0c3:  movsbl %al,%eax
08607526 +0x0c6:  add    0x20(%ebp),%eax
08607529 +0x0c9:  mov    %eax,-0x20(%ebp)
0860752c +0x0cc:  jmp    0860753b <+0xdb>
0860752e +0x0ce:  movl   $0x0,-0x1c(%ebp)
08607535 +0x0d5:  mov    0x20(%ebp),%eax
08607538 +0x0d8:  mov    %eax,-0x20(%ebp)
0860753b +0x0db:  movb   $0x0,-0x15(%ebp)
0860753f +0x0df:  mov    0x1c(%ebp),%eax
08607542 +0x0e2:  mov    %eax,0x8(%esp)
08607546 +0x0e6:  mov    0x18(%ebp),%eax
08607549 +0x0e9:  mov    %eax,0x4(%esp)
0860754d +0x0ed:  mov    -0x2c(%ebp),%eax
08607550 +0x0f0:  mov    %eax,(%esp)
08607553 +0x0f3:  call   083504ec <_ZNK6CSkill11IsStealableEii>  ; CSkill::IsStealable(int, int) const
08607558 +0x0f8:  test   %al,%al
0860755a +0x0fa:  je     086075c0 <+0x160>
0860755c +0x0fc:  mov    0x8(%ebp),%eax
0860755f +0x0ff:  mov    (%eax),%eax
08607561 +0x101:  mov    %eax,(%esp)
08607564 +0x104:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
08607569 +0x109:  movl   $0x163,0x4(%esp)
08607571 +0x111:  mov    %eax,(%esp)
08607574 +0x114:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
08607579 +0x119:  xor    $0x1,%eax
0860757c +0x11c:  test   %al,%al
0860757e +0x11e:  jmp    0860759b <+0x13b>
08607580 +0x120:  mov    0x8(%ebp),%eax
08607583 +0x123:  mov    (%eax),%eax
08607585 +0x125:  mov    %eax,(%esp)
08607588 +0x128:  call   086627e0 <_ZNK5CUser29is_clear_stealingSkillMissionEv>  ; CUser::is_clear_stealingSkillMission() const
0860758d +0x12d:  xor    $0x1,%eax
08607590 +0x130:  test   %al,%al
08607592 +0x132:  je     0860759b <+0x13b>
08607594 +0x134:  mov    $0x1,%eax
08607599 +0x139:  jmp    086075a0 <+0x140>
0860759b +0x13b:  mov    $0x0,%eax
086075a0 +0x140:  test   %al,%al
086075a2 +0x142:  je     086075ae <+0x14e>
086075a4 +0x144:  mov    $0xffffffff,%eax
086075a9 +0x149:  jmp    086078ef <+0x48f>
086075ae +0x14e:  movb   $0x1,-0x15(%ebp)
086075b2 +0x152:  mov    -0x2c(%ebp),%eax
086075b5 +0x155:  mov    %eax,(%esp)
086075b8 +0x158:  call   0860934a <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x1d>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x1d
086075bd +0x15d:  sub    %eax,0x10(%ebp)
086075c0 +0x160:  mov    0x8(%ebp),%eax
086075c3 +0x163:  mov    (%eax),%eax
086075c5 +0x165:  mov    %eax,(%esp)
086075c8 +0x168:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
086075cd +0x16d:  mov    %eax,(%esp)
086075d0 +0x170:  call   08609398 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x6b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x6b
086075d5 +0x175:  movzwl %ax,%eax
086075d8 +0x178:  add    %eax,0x10(%ebp)
086075db +0x17b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086075e0 +0x180:  mov    %eax,(%esp)
086075e3 +0x183:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
086075e8 +0x188:  test   %al,%al
086075ea +0x18a:  je     0860764e <+0x1ee>
086075ec +0x18c:  mov    -0x2c(%ebp),%eax
086075ef +0x18f:  mov    0x198(%eax),%ebx
086075f5 +0x195:  mov    0x8(%ebp),%eax
086075f8 +0x198:  mov    (%eax),%eax
086075fa +0x19a:  mov    %eax,(%esp)
086075fd +0x19d:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08607602 +0x1a2:  cmp    %eax,%ebx
08607604 +0x1a4:  setg   %al
08607607 +0x1a7:  test   %al,%al
08607609 +0x1a9:  je     08607615 <+0x1b5>
0860760b +0x1ab:  mov    $0xfffffffd,%eax
08607610 +0x1b0:  jmp    086078ef <+0x48f>
08607615 +0x1b5:  mov    -0x20(%ebp),%eax
08607618 +0x1b8:  mov    %eax,0x10(%esp)
0860761c +0x1bc:  mov    0x1c(%ebp),%eax
0860761f +0x1bf:  mov    %eax,0xc(%esp)
08607623 +0x1c3:  mov    0x18(%ebp),%eax
08607626 +0x1c6:  mov    %eax,0x8(%esp)
0860762a +0x1ca:  movl   $0x46,0x4(%esp)
08607632 +0x1d2:  mov    -0x2c(%ebp),%eax
08607635 +0x1d5:  mov    %eax,(%esp)
08607638 +0x1d8:  call   0835039e <_ZNK6CSkill9can_learnEiiii>  ; CSkill::can_learn(int, int, int, int) const
0860763d +0x1dd:  xor    $0x1,%eax
08607640 +0x1e0:  test   %al,%al
08607642 +0x1e2:  je     08607686 <+0x226>
08607644 +0x1e4:  mov    $0xfffffffd,%eax
08607649 +0x1e9:  jmp    086078ef <+0x48f>
0860764e +0x1ee:  mov    -0x20(%ebp),%eax
08607651 +0x1f1:  mov    %eax,0x10(%esp)
08607655 +0x1f5:  mov    0x1c(%ebp),%eax
08607658 +0x1f8:  mov    %eax,0xc(%esp)
0860765c +0x1fc:  mov    0x18(%ebp),%eax
0860765f +0x1ff:  mov    %eax,0x8(%esp)
08607663 +0x203:  mov    0x10(%ebp),%eax
08607666 +0x206:  mov    %eax,0x4(%esp)
0860766a +0x20a:  mov    -0x2c(%ebp),%eax
0860766d +0x20d:  mov    %eax,(%esp)
08607670 +0x210:  call   0835039e <_ZNK6CSkill9can_learnEiiii>  ; CSkill::can_learn(int, int, int, int) const
08607675 +0x215:  xor    $0x1,%eax
08607678 +0x218:  test   %al,%al
0860767a +0x21a:  je     08607686 <+0x226>
0860767c +0x21c:  mov    $0xfffffffd,%eax
08607681 +0x221:  jmp    086078ef <+0x48f>
08607686 +0x226:  mov    0x1c(%ebp),%eax
08607689 +0x229:  mov    %eax,0x8(%esp)
0860768d +0x22d:  mov    0x18(%ebp),%eax
08607690 +0x230:  mov    %eax,0x4(%esp)
08607694 +0x234:  mov    -0x2c(%ebp),%eax
08607697 +0x237:  mov    %eax,(%esp)
0860769a +0x23a:  call   083505be <_ZNK6CSkill27get_second_growtype_fitnessEii>  ; CSkill::get_second_growtype_fitness(int, int) const
0860769f +0x23f:  mov    %eax,-0x14(%ebp)
086076a2 +0x242:  cmpl   $0x0,-0x14(%ebp)
086076a6 +0x246:  jne    086076bd <+0x25d>
086076a8 +0x248:  mov    0x18(%ebp),%eax
086076ab +0x24b:  mov    %eax,0x4(%esp)
086076af +0x24f:  mov    -0x2c(%ebp),%eax
086076b2 +0x252:  mov    %eax,(%esp)
086076b5 +0x255:  call   08609378 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x4b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x4b
086076ba +0x25a:  mov    %eax,-0x14(%ebp)
086076bd +0x25d:  mov    -0x20(%ebp),%eax
086076c0 +0x260:  mov    %eax,0x8(%esp)
086076c4 +0x264:  mov    -0x1c(%ebp),%eax
086076c7 +0x267:  mov    %eax,0x4(%esp)
086076cb +0x26b:  mov    -0x2c(%ebp),%eax
086076ce +0x26e:  mov    %eax,(%esp)
086076d1 +0x271:  call   0835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>  ; CSkill::get_need_sp_sfp_for_level(int, int) const
086076d6 +0x276:  mov    %eax,-0x10(%ebp)
086076d9 +0x279:  cmpl   $0x0,-0x10(%ebp)
086076dd +0x27d:  jns    086076e9 <+0x289>
086076df +0x27f:  mov    $0xfffffffc,%eax
086076e4 +0x284:  jmp    086078ef <+0x48f>
086076e9 +0x289:  cmpl   $0x0,-0x14(%ebp)
086076ed +0x28d:  jle    08607717 <+0x2b7>
086076ef +0x28f:  mov    $0x64,%eax
086076f4 +0x294:  sub    -0x14(%ebp),%eax
086076f7 +0x297:  mov    %eax,%ecx
086076f9 +0x299:  imul   -0x10(%ebp),%ecx
086076fd +0x29d:  mov    $0x51eb851f,%edx
08607702 +0x2a2:  mov    %ecx,%eax
08607704 +0x2a4:  imul   %edx
08607706 +0x2a6:  sar    $0x5,%edx
08607709 +0x2a9:  mov    %ecx,%eax
0860770b +0x2ab:  sar    $0x1f,%eax
0860770e +0x2ae:  mov    %edx,%ecx
08607710 +0x2b0:  sub    %eax,%ecx
08607712 +0x2b2:  mov    %ecx,%eax
08607714 +0x2b4:  mov    %eax,-0x10(%ebp)
08607717 +0x2b7:  cmpb   $0x0,-0x15(%ebp)
0860771b +0x2bb:  je     0860773a <+0x2da>
0860771d +0x2bd:  mov    -0x2c(%ebp),%eax
08607720 +0x2c0:  mov    %eax,(%esp)
08607723 +0x2c3:  call   08609358 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x2b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x2b
08607728 +0x2c8:  mov    %eax,0x4(%esp)
0860772c +0x2cc:  mov    -0x10(%ebp),%eax
0860772f +0x2cf:  mov    %eax,(%esp)
08607732 +0x2d2:  call   08a9afa2 <_Z22getSkillSpendSPOnStealii>  ; getSkillSpendSPOnSteal(int, int)
08607737 +0x2d7:  mov    %eax,-0x10(%ebp)
0860773a +0x2da:  cmpl   $0x0,-0x10(%ebp)
0860773e +0x2de:  jns    08607747 <+0x2e7>
08607740 +0x2e0:  movl   $0x0,-0x10(%ebp)
08607747 +0x2e7:  mov    -0x2c(%ebp),%eax
0860774a +0x2ea:  mov    %eax,(%esp)
0860774d +0x2ed:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
08607752 +0x2f2:  test   %al,%al
08607754 +0x2f4:  je     08607766 <+0x306>
08607756 +0x2f6:  mov    0x8(%ebp),%eax
08607759 +0x2f9:  mov    %eax,(%esp)
0860775c +0x2fc:  call   08607f1c <_ZN9SkillSlot19get_temp_remain_sfpEv>  ; SkillSlot::get_temp_remain_sfp()
08607761 +0x301:  mov    %eax,-0xc(%ebp)
08607764 +0x304:  jmp    08607774 <+0x314>
08607766 +0x306:  mov    0x8(%ebp),%eax
08607769 +0x309:  mov    %eax,(%esp)
0860776c +0x30c:  call   08607efe <_ZN9SkillSlot18get_temp_remain_spEv>  ; SkillSlot::get_temp_remain_sp()
08607771 +0x311:  mov    %eax,-0xc(%ebp)
08607774 +0x314:  cmpl   $0x0,-0xc(%ebp)
08607778 +0x318:  jne    08607784 <+0x324>
0860777a +0x31a:  mov    $0xffffffff,%eax
0860777f +0x31f:  jmp    086078ef <+0x48f>
08607784 +0x324:  mov    -0xc(%ebp),%eax
08607787 +0x327:  mov    (%eax),%eax
08607789 +0x329:  cmp    -0x10(%ebp),%eax
0860778c +0x32c:  jge    08607798 <+0x338>
0860778e +0x32e:  mov    $0xfffffffe,%eax
08607793 +0x333:  jmp    086078ef <+0x48f>
08607798 +0x338:  lea    -0x44(%ebp),%eax
0860779b +0x33b:  mov    %eax,(%esp)
0860779e +0x33e:  call   086093e6 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xb9>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xb9
086077a3 +0x343:  mov    -0x2c(%ebp),%eax
086077a6 +0x346:  lea    0x18(%eax),%edx
086077a9 +0x349:  lea    -0x4c(%ebp),%eax
086077ac +0x34c:  mov    %edx,0x4(%esp)
086077b0 +0x350:  mov    %eax,(%esp)
086077b3 +0x353:  call   083ab684 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x45650>  ; global constructors keyed to CServerEvent::m_nExpRate+0x45650
086077b8 +0x358:  sub    $0x4,%esp
086077bb +0x35b:  mov    -0x4c(%ebp),%eax
086077be +0x35e:  mov    %eax,-0x44(%ebp)
086077c1 +0x361:  jmp    0860783a <+0x3da>
086077c3 +0x363:  lea    -0x44(%ebp),%eax
086077c6 +0x366:  mov    %eax,(%esp)
086077c9 +0x369:  call   086093f4 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xc7>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xc7
086077ce +0x36e:  mov    (%eax),%edx
086077d0 +0x370:  mov    %edx,-0x40(%ebp)
086077d3 +0x373:  mov    0x4(%eax),%edx
086077d6 +0x376:  mov    %edx,-0x3c(%ebp)
086077d9 +0x379:  mov    0x8(%eax),%eax
086077dc +0x37c:  mov    %eax,-0x38(%ebp)
086077df +0x37f:  mov    -0x38(%ebp),%ecx
086077e2 +0x382:  mov    -0x3c(%ebp),%edx
086077e5 +0x385:  mov    -0x40(%ebp),%eax
086077e8 +0x388:  mov    0x8(%ebp),%ebx
086077eb +0x38b:  add    $0x376,%ebx
086077f1 +0x391:  mov    %ecx,0x10(%esp)
086077f5 +0x395:  mov    %edx,0xc(%esp)
086077f9 +0x399:  mov    %eax,0x8(%esp)
086077fd +0x39d:  mov    %ebx,0x4(%esp)
08607801 +0x3a1:  mov    0x8(%ebp),%eax
08607804 +0x3a4:  mov    %eax,(%esp)
08607807 +0x3a7:  call   08608014 <_ZNK9SkillSlot20check_skill_masteredEP15_Mastered_skilliii>  ; SkillSlot::check_skill_mastered(_Mastered_skill*, int, int, int) const
0860780c +0x3ac:  xor    $0x1,%eax
0860780f +0x3af:  test   %al,%al
08607811 +0x3b1:  je     0860781d <+0x3bd>
08607813 +0x3b3:  mov    $0xfffffffd,%eax
08607818 +0x3b8:  jmp    086078ef <+0x48f>
0860781d +0x3bd:  lea    -0x30(%ebp),%eax
08607820 +0x3c0:  movl   $0x0,0x8(%esp)
08607828 +0x3c8:  lea    -0x44(%ebp),%edx
0860782b +0x3cb:  mov    %edx,0x4(%esp)
0860782f +0x3cf:  mov    %eax,(%esp)
08607832 +0x3d2:  call   08609402 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0xd5>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0xd5
08607837 +0x3d7:  sub    $0x4,%esp
0860783a +0x3da:  mov    -0x2c(%ebp),%eax
0860783d +0x3dd:  lea    0x18(%eax),%edx
08607840 +0x3e0:  lea    -0x34(%ebp),%eax
08607843 +0x3e3:  mov    %edx,0x4(%esp)
08607847 +0x3e7:  mov    %eax,(%esp)
0860784a +0x3ea:  call   083ab6aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x45676>  ; global constructors keyed to CServerEvent::m_nExpRate+0x45676
0860784f +0x3ef:  sub    $0x4,%esp
08607852 +0x3f2:  lea    -0x34(%ebp),%eax
08607855 +0x3f5:  mov    %eax,0x4(%esp)
08607859 +0x3f9:  lea    -0x44(%ebp),%eax
0860785c +0x3fc:  mov    %eax,(%esp)
0860785f +0x3ff:  call   083d65d0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7059c>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7059c
08607864 +0x404:  test   %al,%al
08607866 +0x406:  jne    086077c3 <+0x363>
0860786c +0x40c:  cmpl   $0xffffffff,-0x24(%ebp)
08607870 +0x410:  je     0860789b <+0x43b>
08607872 +0x412:  mov    -0x24(%ebp),%ecx
08607875 +0x415:  mov    -0x20(%ebp),%eax
08607878 +0x418:  mov    %eax,%edx
0860787a +0x41a:  mov    0x8(%ebp),%eax
0860787d +0x41d:  add    $0x1b8,%ecx
08607883 +0x423:  mov    %dl,0x7(%eax,%ecx,2)
08607887 +0x427:  mov    -0xc(%ebp),%eax
0860788a +0x42a:  mov    (%eax),%eax
0860788c +0x42c:  mov    %eax,%edx
0860788e +0x42e:  sub    -0x10(%ebp),%edx
08607891 +0x431:  mov    -0xc(%ebp),%eax
08607894 +0x434:  mov    %edx,(%eax)
08607896 +0x436:  mov    -0x24(%ebp),%eax
08607899 +0x439:  jmp    086078ef <+0x48f>
0860789b +0x43b:  mov    -0xc(%ebp),%eax
0860789e +0x43e:  mov    (%eax),%eax
086078a0 +0x440:  mov    %eax,%edx
086078a2 +0x442:  sub    -0x10(%ebp),%edx
086078a5 +0x445:  mov    -0xc(%ebp),%eax
086078a8 +0x448:  mov    %edx,(%eax)
086078aa +0x44a:  mov    -0x2c(%ebp),%eax
086078ad +0x44d:  mov    %eax,(%esp)
086078b0 +0x450:  call   08609366 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x39>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x39
086078b5 +0x455:  movzbl %al,%eax
086078b8 +0x458:  mov    0x8(%ebp),%edx
086078bb +0x45b:  lea    0x376(%edx),%ecx
086078c1 +0x461:  mov    0x20(%ebp),%edx
086078c4 +0x464:  mov    %edx,0x14(%esp)
086078c8 +0x468:  mov    %eax,0x10(%esp)
086078cc +0x46c:  mov    -0x28(%ebp),%eax
086078cf +0x46f:  mov    %eax,0xc(%esp)
086078d3 +0x473:  mov    0xc(%ebp),%eax
086078d6 +0x476:  mov    %eax,0x8(%esp)
086078da +0x47a:  mov    %ecx,0x4(%esp)
086078de +0x47e:  mov    0x8(%ebp),%eax
086078e1 +0x481:  mov    %eax,(%esp)
086078e4 +0x484:  call   086080a4 <_ZN9SkillSlot12insert_skillEP15_Mastered_skilliibi>  ; SkillSlot::insert_skill(_Mastered_skill*, int, int, bool, int)
086078e9 +0x489:  mov    %eax,-0x24(%ebp)
086078ec +0x48c:  mov    -0x24(%ebp),%eax
086078ef +0x48f:  mov    -0x4(%ebp),%ebx
086078f2 +0x492:  leave
086078f3 +0x493:  ret
```

## 反编译 C

```c
// SkillSlot::try_master_new_skills @ 0x8607460

/* WARNING: Removing unreachable block (ram,0x086075a4) */
/* SkillSlot::try_master_new_skills(int, int, int, int, int, int) */

int __thiscall
SkillSlot::try_master_new_skills
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UserQuest *this_00;
  CUserPremium *this_01;
  uint uVar4;
  GameWorld *this_02;
  int iVar5;
  int *piVar6;
  _List_const_iterator<_pre_skill> local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  _List_const_iterator local_38 [4];
  _List_const_iterator<_pre_skill> local_34 [4];
  CSkill *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_19;
  int local_18;
  int local_14;
  int *local_10;
  
  local_30 = (CSkill *)0x0;
  iVar3 = G_CDataManager();
  local_30 = (CSkill *)CDataManager::find_skill(iVar3,param_3);
  if (local_30 == (CSkill *)0x0) {
    local_28 = -1;
  }
  else {
    local_2c = CSkill::get_group(local_30);
    if (*(int *)this == 0) {
      local_28 = -4;
    }
    else {
      local_28 = get_skillslot_no(this,(_Mastered_skill *)(this + 0x376),param_1,local_2c,true);
      if (local_28 == -1) {
        local_20 = 0;
        local_24 = param_6;
      }
      else {
        local_20 = (int)(char)this[(local_28 + 0x1b8) * 2 + 7];
        local_24 = (char)this[(local_28 + 0x1b8) * 2 + 7] + param_6;
      }
      local_19 = '\0';
      cVar1 = CSkill::IsStealable(local_30,param_4,param_5);
      if (cVar1 != '\0') {
        this_00 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)this);
        UserQuest::isClearQuest(this_00,0x163);
        local_19 = '\x01';
        iVar3 = CSkill::GetStealLevelPenalty(local_30);
        param_2 = param_2 - iVar3;
      }
      this_01 = (CUserPremium *)CUser::GetPremiumInfo(*(CUser **)this);
      uVar4 = WongWork::CUserPremium::getOverSkillLevel(this_01);
      this_02 = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsPvPSkilTreeChannel(this_02);
      if (cVar1 == '\0') {
        cVar1 = CSkill::can_learn(local_30,param_2 + (uVar4 & 0xffff),param_4,param_5,local_24);
        if (cVar1 != '\x01') {
          return -3;
        }
      }
      else {
        iVar3 = *(int *)(local_30 + 0x198);
        iVar5 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)this);
        if (iVar5 < iVar3) {
          return -3;
        }
        cVar1 = CSkill::can_learn(local_30,0x46,param_4,param_5,local_24);
        if (cVar1 != '\x01') {
          return -3;
        }
      }
      local_18 = CSkill::get_second_growtype_fitness(local_30,param_4,param_5);
      if (local_18 == 0) {
        local_18 = CSkill::get_fitness(local_30,param_4);
      }
      local_14 = CSkill::get_need_sp_sfp_for_level(local_30,local_20,local_24);
      if (local_14 < 0) {
        local_28 = -4;
      }
      else {
        if (0 < local_18) {
          local_14 = ((100 - local_18) * local_14) / 100;
        }
        if (local_19 != '\0') {
          iVar3 = CSkill::GetStealSPPenalty(local_30);
          local_14 = getSkillSpendSPOnSteal(local_14,iVar3);
        }
        if (local_14 < 0) {
          local_14 = 0;
        }
        cVar1 = CSkill::IsSpecialSkill(local_30);
        if (cVar1 == '\0') {
          local_10 = (int *)get_temp_remain_sp(this);
        }
        else {
          local_10 = (int *)get_temp_remain_sfp(this);
        }
        if (local_10 == (int *)0x0) {
          local_28 = -1;
        }
        else if (*local_10 < local_14) {
          local_28 = -2;
        }
        else {
          std::_List_const_iterator<_pre_skill>::_List_const_iterator(local_48);
          std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
          while( true ) {
            std::list<_pre_skill,std::allocator<_pre_skill>>::end();
            cVar1 = std::_List_const_iterator<_pre_skill>::operator!=(local_48,local_38);
            if (cVar1 == '\0') break;
            piVar6 = (int *)std::_List_const_iterator<_pre_skill>::operator*(local_48);
            local_44 = *piVar6;
            local_40 = piVar6[1];
            local_3c = piVar6[2];
            cVar1 = check_skill_mastered
                              (this,(_Mastered_skill *)(this + 0x376),local_44,local_40,local_3c);
            if (cVar1 != '\x01') {
              return -3;
            }
            std::_List_const_iterator<_pre_skill>::operator++(local_34,(int)local_48);
          }
          if (local_28 == -1) {
            *local_10 = *local_10 - local_14;
            bVar2 = (bool)CSkill::is_active_skill(local_30);
            local_28 = insert_skill(this,(_Mastered_skill *)(this + 0x376),param_1,local_2c,bVar2,
                                    param_6);
          }
          else {
            this[(local_28 + 0x1b8) * 2 + 7] = SUB41(local_24,0);
            *local_10 = *local_10 - local_14;
          }
        }
      }
    }
  }
  return local_28;
}
```
