# generateRewardExp

`_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE`

`WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPlayData` | `0x08462538` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08462538  _ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE
#           WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)
# range [0x08462538, 0x08462a25]
08462538 +0x000:  push   %ebp
08462539 +0x001:  mov    %esp,%ebp
0846253b +0x003:  push   %esi
0846253c +0x004:  push   %ebx
0846253d +0x005:  sub    $0x130,%esp
08462543 +0x00b:  mov    0xc(%ebp),%eax
08462546 +0x00e:  mov    %eax,0x4(%esp)
0846254a +0x012:  mov    0x18(%ebp),%eax
0846254d +0x015:  mov    %eax,(%esp)
08462550 +0x018:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08462555 +0x01d:  mov    %eax,-0x18(%ebp)
08462558 +0x020:  movl   $0x0,-0x1c(%ebp)
0846255f +0x027:  mov    0x1c(%ebp),%eax
08462562 +0x02a:  mov    %eax,(%esp)
08462565 +0x02d:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0846256a +0x032:  mov    %eax,(%esp)
0846256d +0x035:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
08462572 +0x03a:  test   %al,%al
08462574 +0x03c:  je     084625eb <+0xb3>
08462576 +0x03e:  mov    0x10(%ebp),%eax
08462579 +0x041:  imul   0x14(%ebp),%eax
0846257d +0x045:  mov    $0x0,%edx
08462582 +0x04a:  mov    %eax,-0xd8(%ebp)
08462588 +0x050:  mov    %edx,-0xd4(%ebp)
0846258e +0x056:  fildll -0xd8(%ebp)
08462594 +0x05c:  fstps  -0xe4(%ebp)
0846259a +0x062:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0846259f +0x067:  mov    0x10(%ebp),%edx
084625a2 +0x06a:  add    $0x1464,%edx
084625a8 +0x070:  flds   0xc(%eax,%edx,4)
084625ac +0x074:  fmuls  -0xe4(%ebp)
084625b2 +0x07a:  fnstcw -0xda(%ebp)
084625b8 +0x080:  movzwl -0xda(%ebp),%eax
084625bf +0x087:  mov    $0xc,%ah
084625c1 +0x089:  mov    %ax,-0xdc(%ebp)
084625c8 +0x090:  fldcw  -0xdc(%ebp)
084625ce +0x096:  fistpll -0xd8(%ebp)
084625d4 +0x09c:  fldcw  -0xda(%ebp)
084625da +0x0a2:  mov    -0xd8(%ebp),%eax
084625e0 +0x0a8:  mov    -0xd4(%ebp),%edx
084625e6 +0x0ae:  mov    %eax,-0x1c(%ebp)
084625e9 +0x0b1:  jmp    0846265e <+0x126>
084625eb +0x0b3:  mov    0x10(%ebp),%eax
084625ee +0x0b6:  imul   0x14(%ebp),%eax
084625f2 +0x0ba:  mov    $0x0,%edx
084625f7 +0x0bf:  mov    %eax,-0xd8(%ebp)
084625fd +0x0c5:  mov    %edx,-0xd4(%ebp)
08462603 +0x0cb:  fildll -0xd8(%ebp)
08462609 +0x0d1:  fstps  -0xe0(%ebp)
0846260f +0x0d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08462614 +0x0dc:  mov    0x10(%ebp),%edx
08462617 +0x0df:  add    $0x15f4,%edx
0846261d +0x0e5:  flds   0xc(%eax,%edx,4)
08462621 +0x0e9:  fmuls  -0xe0(%ebp)
08462627 +0x0ef:  fnstcw -0xda(%ebp)
0846262d +0x0f5:  movzwl -0xda(%ebp),%eax
08462634 +0x0fc:  mov    $0xc,%ah
08462636 +0x0fe:  mov    %ax,-0xdc(%ebp)
0846263d +0x105:  fldcw  -0xdc(%ebp)
08462643 +0x10b:  fistpll -0xd8(%ebp)
08462649 +0x111:  fldcw  -0xda(%ebp)
0846264f +0x117:  mov    -0xd8(%ebp),%eax
08462655 +0x11d:  mov    -0xd4(%ebp),%edx
0846265b +0x123:  mov    %eax,-0x1c(%ebp)
0846265e +0x126:  mov    -0x1c(%ebp),%eax
08462661 +0x129:  cmp    $0x10c8e0,%eax
08462666 +0x12e:  jbe    084626bf <+0x187>
08462668 +0x130:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0846266d +0x135:  mov    0x10(%ebp),%edx
08462670 +0x138:  add    $0x1464,%edx
08462676 +0x13e:  flds   0xc(%eax,%edx,4)
0846267a +0x142:  mov    -0x1c(%ebp),%eax
0846267d +0x145:  fstpl  0x20(%esp)
08462681 +0x149:  mov    0x14(%ebp),%edx
08462684 +0x14c:  mov    %edx,0x1c(%esp)
08462688 +0x150:  mov    0x10(%ebp),%edx
0846268b +0x153:  mov    %edx,0x18(%esp)
0846268f +0x157:  mov    %eax,0x14(%esp)
08462693 +0x15b:  movl   $"BLOOD_LOG : EROOR DEATHTOWER REWARD EXP(%u), LAST STAGE(%d), BASE EXP(%u), EXP WEIGHT(%f)\n",0x10(%esp)
0846269b +0x163:  movl   $0x2ff,0xc(%esp)
084626a3 +0x16b:  movl   $&_ZZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrEE19__PRETTY_FUNCTION__,0x8(%esp)
084626ab +0x173:  movl   $"DeathTower.cpp",0x4(%esp)
084626b3 +0x17b:  movl   $0x1,(%esp)
084626ba +0x182:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084626bf +0x187:  lea    -0x64(%ebp),%eax
084626c2 +0x18a:  mov    %eax,(%esp)
084626c5 +0x18d:  call   0814a800 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x59f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x59f
084626ca +0x192:  lea    -0xc4(%ebp),%eax
084626d0 +0x198:  mov    %eax,(%esp)
084626d3 +0x19b:  call   0814a8b8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x657>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x657
084626d8 +0x1a0:  mov    0x18(%ebp),%eax
084626db +0x1a3:  mov    %eax,(%esp)
084626de +0x1a6:  call   0814a9c2 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x761>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x761
084626e3 +0x1ab:  fstps  -0xbc(%ebp)
084626e9 +0x1b1:  mov    -0x18(%ebp),%eax
084626ec +0x1b4:  mov    %eax,0x4(%esp)
084626f0 +0x1b8:  mov    0x18(%ebp),%eax
084626f3 +0x1bb:  mov    %eax,(%esp)
084626f6 +0x1be:  call   0814a9e2 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x781>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x781
084626fb +0x1c3:  fstps  -0xb8(%ebp)
08462701 +0x1c9:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08462706 +0x1ce:  movl   $0x8,0x4(%esp)
0846270e +0x1d6:  mov    %eax,(%esp)
08462711 +0x1d9:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08462716 +0x1de:  mov    (%eax),%edx
08462718 +0x1e0:  add    $0x34,%edx
0846271b +0x1e3:  mov    (%edx),%ecx
0846271d +0x1e5:  mov    -0x18(%ebp),%edx
08462720 +0x1e8:  mov    %edx,0x4(%esp)
08462724 +0x1ec:  mov    %eax,(%esp)
08462727 +0x1ef:  call   *%ecx
08462729 +0x1f1:  test   %al,%al
0846272b +0x1f3:  je     08462775 <+0x23d>
0846272d +0x1f5:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08462732 +0x1fa:  movl   $0x8,0x4(%esp)
0846273a +0x202:  mov    %eax,(%esp)
0846273d +0x205:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08462742 +0x20a:  mov    %eax,(%esp)
08462745 +0x20d:  call   0814aae4 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x883>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x883
0846274a +0x212:  mov    %eax,%ecx
0846274c +0x214:  mov    $0x51eb851f,%edx
08462751 +0x219:  mov    %ecx,%eax
08462753 +0x21b:  imul   %edx
08462755 +0x21d:  sar    $0x5,%edx
08462758 +0x220:  mov    %ecx,%eax
0846275a +0x222:  sar    $0x1f,%eax
0846275d +0x225:  mov    %edx,%ecx
0846275f +0x227:  sub    %eax,%ecx
08462761 +0x229:  mov    %ecx,%eax
08462763 +0x22b:  mov    %eax,-0xcc(%ebp)
08462769 +0x231:  fildl  -0xcc(%ebp)
0846276f +0x237:  fstps  -0xb4(%ebp)
08462775 +0x23d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0846277a +0x242:  movl   $0x3,0x4(%esp)
08462782 +0x24a:  mov    %eax,(%esp)
08462785 +0x24d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0846278a +0x252:  mov    (%eax),%edx
0846278c +0x254:  add    $0x34,%edx
0846278f +0x257:  mov    (%edx),%edx
08462791 +0x259:  movl   $0x0,0x4(%esp)
08462799 +0x261:  mov    %eax,(%esp)
0846279c +0x264:  call   *%edx
0846279e +0x266:  test   %al,%al
084627a0 +0x268:  je     084627d9 <+0x2a1>
084627a2 +0x26a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084627a7 +0x26f:  movl   $0x3,0x4(%esp)
084627af +0x277:  mov    %eax,(%esp)
084627b2 +0x27a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084627b7 +0x27f:  mov    %eax,(%esp)
084627ba +0x282:  call   0814aad8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x877>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x877
084627bf +0x287:  mov    %eax,-0xcc(%ebp)
084627c5 +0x28d:  fildl  -0xcc(%ebp)
084627cb +0x293:  flds   ""
084627d1 +0x299:  fdivrp %st,%st(1)
084627d3 +0x29b:  fstps  -0xb0(%ebp)
084627d9 +0x2a1:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084627de +0x2a6:  movl   $0xf,0x4(%esp)
084627e6 +0x2ae:  mov    %eax,(%esp)
084627e9 +0x2b1:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084627ee +0x2b6:  mov    %eax,-0x14(%ebp)
084627f1 +0x2b9:  mov    -0x14(%ebp),%eax
084627f4 +0x2bc:  mov    (%eax),%eax
084627f6 +0x2be:  add    $0x34,%eax
084627f9 +0x2c1:  mov    (%eax),%edx
084627fb +0x2c3:  mov    -0x14(%ebp),%eax
084627fe +0x2c6:  movl   $0x0,0x4(%esp)
08462806 +0x2ce:  mov    %eax,(%esp)
08462809 +0x2d1:  call   *%edx
0846280b +0x2d3:  test   %al,%al
0846280d +0x2d5:  je     08462832 <+0x2fa>
0846280f +0x2d7:  mov    -0x18(%ebp),%eax
08462812 +0x2da:  mov    %eax,(%esp)
08462815 +0x2dd:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
0846281a +0x2e2:  movzwl %ax,%eax
0846281d +0x2e5:  mov    %eax,0x4(%esp)
08462821 +0x2e9:  mov    -0x14(%ebp),%eax
08462824 +0x2ec:  mov    %eax,(%esp)
08462827 +0x2ef:  call   0810a0ec <_ZNK20CBurningFatigueEvent15getBonusExpRateEt>  ; CBurningFatigueEvent::getBonusExpRate(unsigned short) const
0846282c +0x2f4:  mov    %eax,-0xa8(%ebp)
08462832 +0x2fa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08462837 +0x2ff:  mov    %eax,(%esp)
0846283a +0x302:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
0846283f +0x307:  mov    %eax,-0xc(%ebp)
08462842 +0x30a:  mov    0x1c(%ebp),%eax
08462845 +0x30d:  mov    %eax,(%esp)
08462848 +0x310:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0846284d +0x315:  mov    %eax,(%esp)
08462850 +0x318:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08462855 +0x31d:  mov    %eax,%esi
08462857 +0x31f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0846285c +0x324:  mov    %eax,(%esp)
0846285f +0x327:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08462864 +0x32c:  mov    %eax,%ebx
08462866 +0x32e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0846286b +0x333:  mov    0x378(%eax),%eax
08462871 +0x339:  movzbl %al,%eax
08462874 +0x33c:  mov    %esi,0xc(%esp)
08462878 +0x340:  mov    %ebx,0x8(%esp)
0846287c +0x344:  mov    %eax,0x4(%esp)
08462880 +0x348:  mov    -0xc(%ebp),%eax
08462883 +0x34b:  mov    %eax,(%esp)
08462886 +0x34e:  call   088dce3c <_ZNK16channel_script_t12getBonusRateEhjj>  ; channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const
0846288b +0x353:  fstps  -0xa4(%ebp)
08462891 +0x359:  mov    -0x18(%ebp),%eax
08462894 +0x35c:  mov    %eax,(%esp)
08462897 +0x35f:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
0846289c +0x364:  test   %al,%al
0846289e +0x366:  je     084628cd <+0x395>
084628a0 +0x368:  mov    -0x18(%ebp),%eax
084628a3 +0x36b:  mov    %eax,(%esp)
084628a6 +0x36e:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
084628ab +0x373:  mov    %eax,(%esp)
084628ae +0x376:  call   0814aa08 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7a7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7a7
084628b3 +0x37b:  mov    %eax,-0xcc(%ebp)
084628b9 +0x381:  fildl  -0xcc(%ebp)
084628bf +0x387:  flds   ""
084628c5 +0x38d:  fdivrp %st,%st(1)
084628c7 +0x38f:  fstps  -0xa0(%ebp)
084628cd +0x395:  call   0814a6e0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x47f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x47f
084628d2 +0x39a:  mov    %eax,-0xcc(%ebp)
084628d8 +0x3a0:  fildl  -0xcc(%ebp)
084628de +0x3a6:  flds   ""
084628e4 +0x3ac:  fdivrp %st,%st(1)
084628e6 +0x3ae:  fstps  -0x9c(%ebp)
084628ec +0x3b4:  mov    -0x1c(%ebp),%eax
084628ef +0x3b7:  mov    %eax,0xc(%esp)
084628f3 +0x3bb:  mov    -0x18(%ebp),%eax
084628f6 +0x3be:  mov    %eax,0x8(%esp)
084628fa +0x3c2:  movl   $0x0,0x4(%esp)
08462902 +0x3ca:  mov    0x18(%ebp),%eax
08462905 +0x3cd:  mov    %eax,(%esp)
08462908 +0x3d0:  call   085ada30 <_ZN6CParty20CalcurateManageBonusEN15ManageBonusType1TEP5CUserj>  ; CParty::CalcurateManageBonus(ManageBonusType::T, CUser*, unsigned int)
0846290d +0x3d5:  fstps  -0x88(%ebp)
08462913 +0x3db:  lea    -0x64(%ebp),%eax
08462916 +0x3de:  mov    %eax,0x10(%esp)
0846291a +0x3e2:  lea    -0xc4(%ebp),%eax
08462920 +0x3e8:  mov    %eax,0xc(%esp)
08462924 +0x3ec:  lea    -0x1c(%ebp),%eax
08462927 +0x3ef:  mov    %eax,0x8(%esp)
0846292b +0x3f3:  mov    -0x18(%ebp),%eax
0846292e +0x3f6:  mov    %eax,0x4(%esp)
08462932 +0x3fa:  mov    0x18(%ebp),%eax
08462935 +0x3fd:  mov    %eax,(%esp)
08462938 +0x400:  call   085ad278 <_ZN6CParty22getClearRewardBonusExpEP5CUserRjRK27stClearRewardExpParameter_tR23stClearRewardBonusExp_t>  ; CParty::getClearRewardBonusExp(CUser*, unsigned int&, stClearRewardExpParameter_t const&, stClearRewardBonusExp_t&)
0846293d +0x405:  mov    %eax,-0x10(%ebp)
08462940 +0x408:  cmpl   $0x10c8e0,-0x10(%ebp)
08462947 +0x40f:  jbe    08462a09 <+0x4d1>
0846294d +0x415:  mov    -0x10(%ebp),%eax
08462950 +0x418:  mov    %eax,0x14(%esp)
08462954 +0x41c:  movl   $"BLOOD_LOG : EROOR DEATHTOWER CLEAR REWARD EXP(%u)\n",0x10(%esp)
0846295c +0x424:  movl   $0x324,0xc(%esp)
08462964 +0x42c:  movl   $&_ZZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrEE19__PRETTY_FUNCTION__,0x8(%esp)
0846296c +0x434:  movl   $"DeathTower.cpp",0x4(%esp)
08462974 +0x43c:  movl   $0x1,(%esp)
0846297b +0x443:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08462980 +0x448:  mov    -0xa8(%ebp),%eax
08462986 +0x44e:  flds   -0x9c(%ebp)
0846298c +0x454:  flds   -0xa0(%ebp)
08462992 +0x45a:  flds   -0xa4(%ebp)
08462998 +0x460:  flds   -0xb0(%ebp)
0846299e +0x466:  flds   -0xb4(%ebp)
084629a4 +0x46c:  flds   -0xb8(%ebp)
084629aa +0x472:  flds   -0xbc(%ebp)
084629b0 +0x478:  fxch   %st(6)
084629b2 +0x47a:  mov    %eax,0x4c(%esp)
084629b6 +0x47e:  fstpl  0x44(%esp)
084629ba +0x482:  fxch   %st(4)
084629bc +0x484:  fstpl  0x3c(%esp)
084629c0 +0x488:  fxch   %st(2)
084629c2 +0x48a:  fstpl  0x34(%esp)
084629c6 +0x48e:  fstpl  0x2c(%esp)
084629ca +0x492:  fstpl  0x24(%esp)
084629ce +0x496:  fstpl  0x1c(%esp)
084629d2 +0x49a:  fstpl  0x14(%esp)
084629d6 +0x49e:  movl   $"BLOOD_LOG : DEATHTOWER EXP PARAMETER : %f, %f, %f, %f, %f, %f, %f, %d\n",0x10(%esp)
084629de +0x4a6:  movl   $0x32e,0xc(%esp)
084629e6 +0x4ae:  movl   $&_ZZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrEE19__PRETTY_FUNCTION__,0x8(%esp)
084629ee +0x4b6:  movl   $"DeathTower.cpp",0x4(%esp)
084629f6 +0x4be:  movl   $0x1,(%esp)
084629fd +0x4c5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08462a02 +0x4ca:  movl   $0x10c8e0,-0x10(%ebp)
08462a09 +0x4d1:  mov    0xc(%ebp),%edx
08462a0c +0x4d4:  mov    0x8(%ebp),%eax
08462a0f +0x4d7:  lea    0x26c(%edx),%ecx
08462a15 +0x4dd:  mov    -0x10(%ebp),%edx
08462a18 +0x4e0:  mov    %edx,0x8(%eax,%ecx,4)
08462a1c +0x4e4:  add    $0x130,%esp
08462a22 +0x4ea:  pop    %ebx
08462a23 +0x4eb:  pop    %esi
08462a24 +0x4ec:  pop    %ebp
08462a25 +0x4ed:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPlayData::generateRewardExp @ 0x8462538

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*,
   WongWork::CDeathTower::CDungeonMgr&) */

void __thiscall
WongWork::CDeathTower::CPlayData::generateRewardExp
          (CPlayData *this,int param_1,int param_2,uint param_3,CParty *param_4,CDungeonMgr *param_5
          )

{
  double dVar1;
  char cVar2;
  ushort uVar3;
  CDungeon *pCVar4;
  int iVar5;
  int *piVar6;
  CPCRoomBurningEvent *this_00;
  CExpDoubleEvent *this_01;
  CDataManager *this_02;
  uint uVar7;
  CEnvironment *this_03;
  uint uVar8;
  CUserPremium *this_04;
  longdouble lVar9;
  ulonglong local_dc;
  stClearRewardExpParameter_t local_c8 [8];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_8c;
  stClearRewardBonusExp_t local_68 [72];
  uint local_20;
  CUser *local_1c;
  CBurningFatigueEvent *local_18;
  uint local_14;
  channel_script_t *local_10;
  
  local_1c = (CUser *)CParty::get_user(param_4,param_1);
  local_20 = 0;
  pCVar4 = (CDungeon *)CDungeonMgr::getDungeon(param_5);
  cVar2 = CDungeon::limitOfStackableItemInTower(pCVar4);
  if (cVar2 == '\0') {
    local_dc = (ulonglong)(param_2 * param_3);
    iVar5 = G_CDataManager();
    local_dc._0_4_ =
         (uint)(longlong)ROUND(*(float *)(iVar5 + 0xc + (param_2 + 0x15f4) * 4) * (float)local_dc);
    local_20 = (uint)local_dc;
  }
  else {
    local_dc = (ulonglong)(param_2 * param_3);
    iVar5 = G_CDataManager();
    local_dc._0_4_ =
         (uint)(longlong)ROUND(*(float *)(iVar5 + 0xc + (param_2 + 0x1464) * 4) * (float)local_dc);
    local_20 = (uint)local_dc;
  }
  if (1100000 < local_20) {
    iVar5 = G_CDataManager();
    dVar1 = (double)*(float *)(iVar5 + 0xc + (param_2 + 0x1464) * 4);
    LogManager::logFormat
              (1,"DeathTower.cpp",
               "void WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)"
               ,0x2ff,
               "BLOOD_LOG : EROOR DEATHTOWER REWARD EXP(%u), LAST STAGE(%d), BASE EXP(%u), EXP WEIGHT(%f)\n"
               ,local_20,param_2,param_3,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  }
  stClearRewardBonusExp_t::stClearRewardBonusExp_t(local_68);
  stClearRewardExpParameter_t::stClearRewardExpParameter_t(local_c8);
  lVar9 = (longdouble)CParty::getAvatarBonus(param_4);
  local_c0 = (float)lVar9;
  lVar9 = (longdouble)CParty::getCreatureBonus(param_4,local_1c);
  local_bc = (float)lVar9;
  piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
  cVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,local_1c);
  if (cVar2 != '\0') {
    this_00 = (CPCRoomBurningEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,8);
    iVar5 = CPCRoomBurningEvent::GetExpFactor(this_00);
    local_b8 = (float)(iVar5 / 100);
  }
  piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
  cVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,0);
  if (cVar2 != '\0') {
    this_01 = (CExpDoubleEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
    iVar5 = CExpDoubleEvent::GetExpFactor(this_01);
    local_b4 = (float)iVar5 / _DAT_08c640b8;
  }
  local_18 = (CBurningFatigueEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
  cVar2 = (**(code **)(*(int *)local_18 + 0x34))(local_18,0);
  if (cVar2 != '\0') {
    uVar3 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)local_1c);
    local_ac = CBurningFatigueEvent::getBonusExpRate(local_18,uVar3);
  }
  this_02 = (CDataManager *)G_CDataManager();
  local_10 = (channel_script_t *)CDataManager::GetChannelScript(this_02);
  pCVar4 = (CDungeon *)CDungeonMgr::getDungeon(param_5);
  uVar7 = CDungeon::get_index(pCVar4);
  this_03 = (CEnvironment *)G_CEnvironment();
  uVar8 = CEnvironment::get_channel_no(this_03);
  iVar5 = G_CEnvironment();
  lVar9 = (longdouble)
          channel_script_t::getBonusRate(local_10,(uchar)*(undefined4 *)(iVar5 + 0x378),uVar8,uVar7)
  ;
  local_a8 = (float)lVar9;
  cVar2 = CUser::IsHavePremiumAdvantage(local_1c);
  if (cVar2 != '\0') {
    this_04 = (CUserPremium *)CUser::GetPremiumInfo(local_1c);
    iVar5 = CUserPremium::GetAdvantageExpRate(this_04);
    local_a4 = (float)iVar5 / _DAT_08c640b8;
  }
  iVar5 = CServerEvent::GetExpRate();
  local_a0 = (float)iVar5 / _DAT_08c640b8;
  lVar9 = (longdouble)CParty::CalcurateManageBonus(param_4,0,local_1c,local_20);
  local_8c = (float)lVar9;
  local_14 = CParty::getClearRewardBonusExp(param_4,local_1c,&local_20,local_c8,local_68);
  if (1100000 < local_14) {
    LogManager::logFormat
              (1,"DeathTower.cpp",
               "void WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)"
               ,0x324,"BLOOD_LOG : EROOR DEATHTOWER CLEAR REWARD EXP(%u)\n",local_14);
    LogManager::logFormat
              (1,"DeathTower.cpp",
               "void WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)"
               ,0x32e,"BLOOD_LOG : DEATHTOWER EXP PARAMETER : %f, %f, %f, %f, %f, %f, %f, %d\n",
               (double)local_c0,SUB84((double)local_bc,0),(int)((ulonglong)(double)local_bc >> 0x20)
               ,SUB84((double)local_b8,0),(int)((ulonglong)(double)local_b8 >> 0x20),
               (double)local_b4,(double)local_a8,(double)local_a4,(double)local_a0,local_ac);
    local_14 = 1100000;
  }
  *(uint *)(this + (param_1 + 0x26c) * 4 + 8) = local_14;
  return;
}
```
