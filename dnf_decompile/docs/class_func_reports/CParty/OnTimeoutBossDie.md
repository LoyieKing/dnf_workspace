# OnTimeoutBossDie

`_ZN6CParty16OnTimeoutBossDieEij`

`CParty::OnTimeoutBossDie(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085aa5d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085aa5d4  _ZN6CParty16OnTimeoutBossDieEij
#           CParty::OnTimeoutBossDie(int, unsigned int)
# range [0x085aa5d4, 0x085aab83]
085aa5d4 +0x000:  push   %ebp
085aa5d5 +0x001:  mov    %esp,%ebp
085aa5d7 +0x003:  push   %esi
085aa5d8 +0x004:  push   %ebx
085aa5d9 +0x005:  sub    $0xac0,%esp
085aa5df +0x00b:  mov    0x8(%ebp),%eax
085aa5e2 +0x00e:  mov    0xc48(%eax),%eax
085aa5e8 +0x014:  cmp    0xc(%ebp),%eax
085aa5eb +0x017:  je     085aa5f7 <+0x23>
085aa5ed +0x019:  mov    $0x0,%ebx
085aa5f2 +0x01e:  jmp    085aab78 <+0x5a4>
085aa5f7 +0x023:  mov    0x10(%ebp),%eax
085aa5fa +0x026:  mov    %eax,0x4(%esp)
085aa5fe +0x02a:  mov    0x8(%ebp),%eax
085aa601 +0x02d:  mov    %eax,(%esp)
085aa604 +0x030:  call   0859acc2 <_ZN6CParty15GetMemberSlotNoEj>  ; CParty::GetMemberSlotNo(unsigned int)
085aa609 +0x035:  mov    %eax,-0x10(%ebp)
085aa60c +0x038:  cmpl   $0x0,-0x10(%ebp)
085aa610 +0x03c:  jne    085aa61c <+0x48>
085aa612 +0x03e:  mov    $0x0,%ebx
085aa617 +0x043:  jmp    085aab78 <+0x5a4>
085aa61c +0x048:  mov    0x8(%ebp),%eax
085aa61f +0x04b:  mov    0xcac(%eax),%eax
085aa625 +0x051:  test   %eax,%eax
085aa627 +0x053:  je     085aa645 <+0x71>
085aa629 +0x055:  mov    0x8(%ebp),%eax
085aa62c +0x058:  mov    0xcac(%eax),%eax
085aa632 +0x05e:  mov    %eax,(%esp)
085aa635 +0x061:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
085aa63a +0x066:  test   %al,%al
085aa63c +0x068:  je     085aa645 <+0x71>
085aa63e +0x06a:  mov    $0x1,%eax
085aa643 +0x06f:  jmp    085aa64a <+0x76>
085aa645 +0x071:  mov    $0x0,%eax
085aa64a +0x076:  test   %al,%al
085aa64c +0x078:  je     085aa675 <+0xa1>
085aa64e +0x07a:  mov    -0x10(%ebp),%eax
085aa651 +0x07d:  mov    %eax,0x4(%esp)
085aa655 +0x081:  mov    0x8(%ebp),%eax
085aa658 +0x084:  mov    %eax,(%esp)
085aa65b +0x087:  call   085a277a <_ZN6CParty16get_party_seatnoEP5CUser>  ; CParty::get_party_seatno(CUser*)
085aa660 +0x08c:  mov    0x8(%ebp),%edx
085aa663 +0x08f:  add    $0xb24,%edx
085aa669 +0x095:  mov    %eax,0x4(%esp)
085aa66d +0x099:  mov    %edx,(%esp)
085aa670 +0x09c:  call   082a43cc <_GLOBAL__I__ZN4CLog5this_E+0x7f3>  ; global constructors keyed to CLog::this_+0x7f3
085aa675 +0x0a1:  lea    -0x40(%ebp),%eax
085aa678 +0x0a4:  mov    %eax,(%esp)
085aa67b +0x0a7:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085aa680 +0x0ac:  mov    0x8(%ebp),%eax
085aa683 +0x0af:  add    $0xb24,%eax
085aa688 +0x0b4:  mov    %eax,(%esp)
085aa68b +0x0b7:  call   085bf0a2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x600>  ; global constructors keyed to CParty::cMember::cMember()+0x600
085aa690 +0x0bc:  lea    -0x44(%ebp),%edx
085aa693 +0x0bf:  mov    %eax,0x4(%esp)
085aa697 +0x0c3:  mov    %edx,(%esp)
085aa69a +0x0c6:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
085aa69f +0x0cb:  sub    $0x4,%esp
085aa6a2 +0x0ce:  jmp    085aa73f <+0x16b>
085aa6a7 +0x0d3:  lea    -0xaa4(%ebp),%eax
085aa6ad +0x0d9:  mov    %eax,(%esp)
085aa6b0 +0x0dc:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
085aa6b5 +0x0e1:  lea    -0x44(%ebp),%eax
085aa6b8 +0x0e4:  mov    %eax,(%esp)
085aa6bb +0x0e7:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
085aa6c0 +0x0ec:  add    $0x4,%eax
085aa6c3 +0x0ef:  mov    %eax,0x4(%esp)
085aa6c7 +0x0f3:  lea    -0xaa4(%ebp),%eax
085aa6cd +0x0f9:  mov    %eax,(%esp)
085aa6d0 +0x0fc:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
085aa6d5 +0x101:  mov    -0xa78(%ebp),%eax
085aa6db +0x107:  test   %eax,%eax
085aa6dd +0x109:  je     085aa714 <+0x140>
085aa6df +0x10b:  lea    -0xaa4(%ebp),%eax
085aa6e5 +0x111:  add    $0x4,%eax
085aa6e8 +0x114:  mov    %eax,0x4(%esp)
085aa6ec +0x118:  lea    -0x40(%ebp),%eax
085aa6ef +0x11b:  mov    %eax,(%esp)
085aa6f2 +0x11e:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085aa6f7 +0x123:  jmp    085aa714 <+0x140>
085aa6f9 +0x125:  mov    %edx,%ebx
085aa6fb +0x127:  mov    %eax,%esi
085aa6fd +0x129:  lea    -0xaa4(%ebp),%eax
085aa703 +0x12f:  mov    %eax,(%esp)
085aa706 +0x132:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
085aa70b +0x137:  mov    %esi,%eax
085aa70d +0x139:  mov    %ebx,%edx
085aa70f +0x13b:  jmp    085aab52 <+0x57e>
085aa714 +0x140:  lea    -0xaa4(%ebp),%eax
085aa71a +0x146:  mov    %eax,(%esp)
085aa71d +0x149:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
085aa722 +0x14e:  lea    -0x30(%ebp),%eax
085aa725 +0x151:  movl   $0x0,0x8(%esp)
085aa72d +0x159:  lea    -0x44(%ebp),%edx
085aa730 +0x15c:  mov    %edx,0x4(%esp)
085aa734 +0x160:  mov    %eax,(%esp)
085aa737 +0x163:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
085aa73c +0x168:  sub    $0x4,%esp
085aa73f +0x16b:  mov    0x8(%ebp),%eax
085aa742 +0x16e:  add    $0xb24,%eax
085aa747 +0x173:  mov    %eax,(%esp)
085aa74a +0x176:  call   085bf0a2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x600>  ; global constructors keyed to CParty::cMember::cMember()+0x600
085aa74f +0x17b:  lea    -0x34(%ebp),%edx
085aa752 +0x17e:  mov    %eax,0x4(%esp)
085aa756 +0x182:  mov    %edx,(%esp)
085aa759 +0x185:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
085aa75e +0x18a:  sub    $0x4,%esp
085aa761 +0x18d:  lea    -0x34(%ebp),%eax
085aa764 +0x190:  mov    %eax,0x4(%esp)
085aa768 +0x194:  lea    -0x44(%ebp),%eax
085aa76b +0x197:  mov    %eax,(%esp)
085aa76e +0x19a:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
085aa773 +0x19f:  test   %al,%al
085aa775 +0x1a1:  jne    085aa6a7 <+0xd3>
085aa77b +0x1a7:  movb   $0x0,-0x9(%ebp)
085aa77f +0x1ab:  lea    -0x48(%ebp),%eax
085aa782 +0x1ae:  lea    -0x40(%ebp),%edx
085aa785 +0x1b1:  mov    %edx,0x4(%esp)
085aa789 +0x1b5:  mov    %eax,(%esp)
085aa78c +0x1b8:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085aa791 +0x1bd:  sub    $0x4,%esp
085aa794 +0x1c0:  jmp    085aab1c <+0x548>
085aa799 +0x1c5:  movl   $0xa3f,0x8(%esp)
085aa7a1 +0x1cd:  movl   $0x0,0x4(%esp)
085aa7a9 +0x1d5:  lea    -0xaa4(%ebp),%eax
085aa7af +0x1db:  mov    %eax,(%esp)
085aa7b2 +0x1de:  call   0807dcc0 <_init+0x5b8>
085aa7b7 +0x1e3:  lea    -0x48(%ebp),%eax
085aa7ba +0x1e6:  mov    %eax,(%esp)
085aa7bd +0x1e9:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085aa7c2 +0x1ee:  mov    %eax,%ebx
085aa7c4 +0x1f0:  mov    0x8(%ebp),%eax
085aa7c7 +0x1f3:  add    $0xb24,%eax
085aa7cc +0x1f8:  mov    %eax,(%esp)
085aa7cf +0x1fb:  call   085bf0a2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x600>  ; global constructors keyed to CParty::cMember::cMember()+0x600
085aa7d4 +0x200:  lea    -0x4c(%ebp),%edx
085aa7d7 +0x203:  mov    %ebx,0x8(%esp)
085aa7db +0x207:  mov    %eax,0x4(%esp)
085aa7df +0x20b:  mov    %edx,(%esp)
085aa7e2 +0x20e:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
085aa7e7 +0x213:  sub    $0x4,%esp
085aa7ea +0x216:  mov    0x8(%ebp),%eax
085aa7ed +0x219:  add    $0xb24,%eax
085aa7f2 +0x21e:  mov    %eax,(%esp)
085aa7f5 +0x221:  call   085bf0a2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x600>  ; global constructors keyed to CParty::cMember::cMember()+0x600
085aa7fa +0x226:  lea    -0x28(%ebp),%edx
085aa7fd +0x229:  mov    %eax,0x4(%esp)
085aa801 +0x22d:  mov    %edx,(%esp)
085aa804 +0x230:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
085aa809 +0x235:  sub    $0x4,%esp
085aa80c +0x238:  lea    -0x28(%ebp),%eax
085aa80f +0x23b:  mov    %eax,0x4(%esp)
085aa813 +0x23f:  lea    -0x4c(%ebp),%eax
085aa816 +0x242:  mov    %eax,(%esp)
085aa819 +0x245:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
085aa81e +0x24a:  test   %al,%al
085aa820 +0x24c:  je     085aa83e <+0x26a>
085aa822 +0x24e:  lea    -0x4c(%ebp),%eax
085aa825 +0x251:  mov    %eax,(%esp)
085aa828 +0x254:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
085aa82d +0x259:  add    $0x3c,%eax
085aa830 +0x25c:  mov    %eax,(%esp)
085aa833 +0x25f:  call   085bedb0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x30e>  ; global constructors keyed to CParty::cMember::cMember()+0x30e
085aa838 +0x264:  mov    %eax,-0x8a(%ebp)
085aa83e +0x26a:  lea    -0x48(%ebp),%eax
085aa841 +0x26d:  mov    %eax,(%esp)
085aa844 +0x270:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085aa849 +0x275:  mov    (%eax),%eax
085aa84b +0x277:  movl   $0x0,0x14(%esp)
085aa853 +0x27f:  lea    -0xaa4(%ebp),%edx
085aa859 +0x285:  mov    %edx,0x10(%esp)
085aa85d +0x289:  movl   $0xffff,0xc(%esp)
085aa865 +0x291:  mov    %eax,0x8(%esp)
085aa869 +0x295:  mov    -0x10(%ebp),%eax
085aa86c +0x298:  mov    %eax,0x4(%esp)
085aa870 +0x29c:  mov    0x8(%ebp),%eax
085aa873 +0x29f:  mov    %eax,(%esp)
085aa876 +0x2a2:  call   085a27e8 <_ZN6CParty12kill_monsterEP5CUseritRK15MSG_MONSTER_DIEPi>  ; CParty::kill_monster(CUser*, int, unsigned short, MSG_MONSTER_DIE const&, int*)
085aa87b +0x2a7:  xor    $0x1,%eax
085aa87e +0x2aa:  test   %al,%al
085aa880 +0x2ac:  je     085aaafb <+0x527>
085aa886 +0x2b2:  lea    -0x48(%ebp),%eax
085aa889 +0x2b5:  mov    %eax,(%esp)
085aa88c +0x2b8:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085aa891 +0x2bd:  mov    (%eax),%ebx
085aa893 +0x2bf:  movl   $0x0,0xc(%esp)
085aa89b +0x2c7:  movl   $0x22ce,0x8(%esp)
085aa8a3 +0x2cf:  movl   $&_ZZN6CParty16OnTimeoutBossDieEijE19__PRETTY_FUNCTION__,0x4(%esp)
085aa8ab +0x2d7:  lea    -0x24(%ebp),%eax
085aa8ae +0x2da:  mov    %eax,(%esp)
085aa8b1 +0x2dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085aa8b6 +0x2e2:  mov    %ebx,0x8(%esp)
085aa8ba +0x2e6:  movl   $"KILLBOSS2 server - monster id(%d) failed",0x4(%esp)
085aa8c2 +0x2ee:  lea    -0x24(%ebp),%eax
085aa8c5 +0x2f1:  mov    %eax,(%esp)
085aa8c8 +0x2f4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085aa8cd +0x2f9:  mov    0x8(%ebp),%eax
085aa8d0 +0x2fc:  mov    0xcd8(%eax),%eax
085aa8d6 +0x302:  cmp    $0x1,%eax
085aa8d9 +0x305:  jne    085aa9d4 <+0x400>
085aa8df +0x30b:  movl   $0x2,0x4(%esp)
085aa8e7 +0x313:  mov    0x8(%ebp),%eax
085aa8ea +0x316:  mov    %eax,(%esp)
085aa8ed +0x319:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085aa8f2 +0x31e:  movl   $0x15,0x4(%esp)
085aa8fa +0x326:  mov    0x8(%ebp),%eax
085aa8fd +0x329:  mov    %eax,(%esp)
085aa900 +0x32c:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085aa905 +0x331:  mov    %eax,%esi
085aa907 +0x333:  mov    0x8(%ebp),%eax
085aa90a +0x336:  mov    %eax,(%esp)
085aa90d +0x339:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085aa912 +0x33e:  mov    %eax,%ebx
085aa914 +0x340:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085aa919 +0x345:  movl   $0x0,0x18(%esp)
085aa921 +0x34d:  mov    %esi,0x14(%esp)
085aa925 +0x351:  movl   $0x3c,0x10(%esp)
085aa92d +0x359:  movl   $0x15,0xc(%esp)
085aa935 +0x361:  mov    %ebx,0x8(%esp)
085aa939 +0x365:  movl   $0x1,0x4(%esp)
085aa941 +0x36d:  mov    %eax,(%esp)
085aa944 +0x370:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085aa949 +0x375:  movl   $0x1,0x4(%esp)
085aa951 +0x37d:  mov    0x8(%ebp),%eax
085aa954 +0x380:  mov    %eax,(%esp)
085aa957 +0x383:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085aa95c +0x388:  lea    -0x58(%ebp),%eax
085aa95f +0x38b:  mov    %eax,(%esp)
085aa962 +0x38e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085aa967 +0x393:  movl   $0xfe,0x8(%esp)
085aa96f +0x39b:  movl   $0x0,0x4(%esp)
085aa977 +0x3a3:  lea    -0x58(%ebp),%eax
085aa97a +0x3a6:  mov    %eax,(%esp)
085aa97d +0x3a9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085aa982 +0x3ae:  movl   $0x1,0x4(%esp)
085aa98a +0x3b6:  lea    -0x58(%ebp),%eax
085aa98d +0x3b9:  mov    %eax,(%esp)
085aa990 +0x3bc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085aa995 +0x3c1:  lea    -0x58(%ebp),%eax
085aa998 +0x3c4:  mov    %eax,0x4(%esp)
085aa99c +0x3c8:  mov    0x8(%ebp),%eax
085aa99f +0x3cb:  mov    %eax,(%esp)
085aa9a2 +0x3ce:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085aa9a7 +0x3d3:  mov    $0x1,%ebx
085aa9ac +0x3d8:  lea    -0x58(%ebp),%eax
085aa9af +0x3db:  mov    %eax,(%esp)
085aa9b2 +0x3de:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085aa9b7 +0x3e3:  jmp    085aab6d <+0x599>
085aa9bc +0x3e8:  mov    %edx,%ebx
085aa9be +0x3ea:  mov    %eax,%esi
085aa9c0 +0x3ec:  lea    -0x58(%ebp),%eax
085aa9c3 +0x3ef:  mov    %eax,(%esp)
085aa9c6 +0x3f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085aa9cb +0x3f7:  mov    %esi,%eax
085aa9cd +0x3f9:  mov    %ebx,%edx
085aa9cf +0x3fb:  jmp    085aab52 <+0x57e>
085aa9d4 +0x400:  mov    0x8(%ebp),%eax
085aa9d7 +0x403:  mov    0xcac(%eax),%eax
085aa9dd +0x409:  movzbl 0x89f(%eax),%eax
085aa9e4 +0x410:  test   %al,%al
085aa9e6 +0x412:  jle    085aaa87 <+0x4b3>
085aa9ec +0x418:  mov    0x8(%ebp),%eax
085aa9ef +0x41b:  mov    0xcac(%eax),%ebx
085aa9f5 +0x421:  mov    0x8(%ebp),%eax
085aa9f8 +0x424:  add    $0xdd0,%eax
085aa9fd +0x429:  mov    %eax,(%esp)
085aaa00 +0x42c:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
085aaa05 +0x431:  cwtl
085aaa06 +0x432:  mov    0x8(%ebp),%edx
085aaa09 +0x435:  lea    0xddc(%edx),%ecx
085aaa0f +0x43b:  mov    %ebx,0x10(%esp)
085aaa13 +0x43f:  mov    0x8(%ebp),%edx
085aaa16 +0x442:  mov    %edx,0xc(%esp)
085aaa1a +0x446:  mov    %eax,0x8(%esp)
085aaa1e +0x44a:  movl   $0x1,0x4(%esp)
085aaa26 +0x452:  mov    %ecx,(%esp)
085aaa29 +0x455:  call   08306fc4 <_ZN13CBattle_Field21CBloodClearRewardData18onFinishBloodRoundEbsP6CPartyPK8CDungeon>  ; CBattle_Field::CBloodClearRewardData::onFinishBloodRound(bool, short, CParty*, CDungeon const*)
085aaa2e +0x45a:  movl   $0x22,0x4(%esp)
085aaa36 +0x462:  mov    0x8(%ebp),%eax
085aaa39 +0x465:  mov    %eax,(%esp)
085aaa3c +0x468:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085aaa41 +0x46d:  mov    %eax,%esi
085aaa43 +0x46f:  mov    0x8(%ebp),%eax
085aaa46 +0x472:  mov    %eax,(%esp)
085aaa49 +0x475:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085aaa4e +0x47a:  mov    %eax,%ebx
085aaa50 +0x47c:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085aaa55 +0x481:  movl   $0x22,0x18(%esp)
085aaa5d +0x489:  mov    %esi,0x14(%esp)
085aaa61 +0x48d:  movl   $0x5,0x10(%esp)
085aaa69 +0x495:  movl   $0x22,0xc(%esp)
085aaa71 +0x49d:  mov    %ebx,0x8(%esp)
085aaa75 +0x4a1:  movl   $0x1,0x4(%esp)
085aaa7d +0x4a9:  mov    %eax,(%esp)
085aaa80 +0x4ac:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085aaa85 +0x4b1:  jmp    085aaaf4 <+0x520>
085aaa87 +0x4b3:  lea    -0x64(%ebp),%eax
085aaa8a +0x4b6:  mov    %eax,(%esp)
085aaa8d +0x4b9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085aaa92 +0x4be:  movl   $0x1f,0x8(%esp)
085aaa9a +0x4c6:  movl   $0x0,0x4(%esp)
085aaaa2 +0x4ce:  lea    -0x64(%ebp),%eax
085aaaa5 +0x4d1:  mov    %eax,(%esp)
085aaaa8 +0x4d4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085aaaad +0x4d9:  movl   $0x1,0x4(%esp)
085aaab5 +0x4e1:  lea    -0x64(%ebp),%eax
085aaab8 +0x4e4:  mov    %eax,(%esp)
085aaabb +0x4e7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085aaac0 +0x4ec:  lea    -0x64(%ebp),%eax
085aaac3 +0x4ef:  mov    %eax,0x4(%esp)
085aaac7 +0x4f3:  mov    0x8(%ebp),%eax
085aaaca +0x4f6:  mov    %eax,(%esp)
085aaacd +0x4f9:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085aaad2 +0x4fe:  jmp    085aaae9 <+0x515>
085aaad4 +0x500:  mov    %edx,%ebx
085aaad6 +0x502:  mov    %eax,%esi
085aaad8 +0x504:  lea    -0x64(%ebp),%eax
085aaadb +0x507:  mov    %eax,(%esp)
085aaade +0x50a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085aaae3 +0x50f:  mov    %esi,%eax
085aaae5 +0x511:  mov    %ebx,%edx
085aaae7 +0x513:  jmp    085aab52 <+0x57e>
085aaae9 +0x515:  lea    -0x64(%ebp),%eax
085aaaec +0x518:  mov    %eax,(%esp)
085aaaef +0x51b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085aaaf4 +0x520:  mov    $0x1,%ebx
085aaaf9 +0x525:  jmp    085aab6d <+0x599>
085aaafb +0x527:  movb   $0x1,-0x9(%ebp)
085aaaff +0x52b:  lea    -0x14(%ebp),%eax
085aab02 +0x52e:  movl   $0x0,0x8(%esp)
085aab0a +0x536:  lea    -0x48(%ebp),%edx
085aab0d +0x539:  mov    %edx,0x4(%esp)
085aab11 +0x53d:  mov    %eax,(%esp)
085aab14 +0x540:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
085aab19 +0x545:  sub    $0x4,%esp
085aab1c +0x548:  lea    -0x2c(%ebp),%eax
085aab1f +0x54b:  lea    -0x40(%ebp),%edx
085aab22 +0x54e:  mov    %edx,0x4(%esp)
085aab26 +0x552:  mov    %eax,(%esp)
085aab29 +0x555:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085aab2e +0x55a:  sub    $0x4,%esp
085aab31 +0x55d:  lea    -0x2c(%ebp),%eax
085aab34 +0x560:  mov    %eax,0x4(%esp)
085aab38 +0x564:  lea    -0x48(%ebp),%eax
085aab3b +0x567:  mov    %eax,(%esp)
085aab3e +0x56a:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
085aab43 +0x56f:  test   %al,%al
085aab45 +0x571:  jne    085aa799 <+0x1c5>
085aab4b +0x577:  mov    $0x1,%ebx
085aab50 +0x57c:  jmp    085aab6d <+0x599>
085aab52 +0x57e:  mov    %edx,%ebx
085aab54 +0x580:  mov    %eax,%esi
085aab56 +0x582:  lea    -0x40(%ebp),%eax
085aab59 +0x585:  mov    %eax,(%esp)
085aab5c +0x588:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085aab61 +0x58d:  mov    %esi,%eax
085aab63 +0x58f:  mov    %ebx,%edx
085aab65 +0x591:  mov    %eax,(%esp)
085aab68 +0x594:  call   08ae3750 <_Unwind_Resume>
085aab6d +0x599:  lea    -0x40(%ebp),%eax
085aab70 +0x59c:  mov    %eax,(%esp)
085aab73 +0x59f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085aab78 +0x5a4:  mov    %ebx,%eax
085aab7a +0x5a6:  lea    -0x8(%ebp),%esp
085aab7d +0x5a9:  add    $0x0,%esp
085aab80 +0x5ac:  pop    %ebx
085aab81 +0x5ad:  pop    %esi
085aab82 +0x5ae:  pop    %ebp
085aab83 +0x5af:  ret
```

## 反编译 C

```c
// CParty::OnTimeoutBossDie @ 0x85aa5d4

/* CParty::OnTimeoutBossDie(int, unsigned int) */

undefined4 __thiscall CParty::OnTimeoutBossDie(CParty *this,int param_1,uint param_2)

{
  CDungeon *pCVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  TimerQueue *pTVar9;
  undefined4 uVar10;
  map_monster local_aa8 [4];
  int aiStack_aa4 [10];
  int local_a7c;
  undefined4 local_8e;
  PacketGuard local_68 [12];
  PacketGuard local_5c [12];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_50 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_4c [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_48 [4];
  vector<int,std::allocator<int>> local_44 [12];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_34 [4];
  __normal_iterator local_30 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_2c [4];
  cMyTrace local_28 [16];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  CUser *local_14;
  undefined1 local_d;
  
  if (*(int *)(this + 0xc48) == param_1) {
    local_14 = (CUser *)GetMemberSlotNo(this,param_2);
    if (local_14 == (CUser *)0x0) {
      uVar10 = 0;
    }
    else {
      if ((*(int *)(this + 0xcac) == 0) ||
         (cVar2 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0xcac)), cVar2 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar5 = get_party_seatno(this,local_14);
        CBattle_Field::SetCurSeatNo((CBattle_Field *)(this + 0xb24),iVar5);
      }
      std::vector<int,std::allocator<int>>::vector(local_44);
                    /* try { // try from 085aa68b to 085aa6b4 has its CatchHandler @ 085aab52 */
      CBattle_Field::GetMonsterMap((CBattle_Field *)(this + 0xb24));
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      begin(local_48);
      while( true ) {
        CBattle_Field::GetMonsterMap((CBattle_Field *)(this + 0xb24));
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        end(local_38);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_48,
                           (_Rb_tree_iterator *)local_38);
        if (cVar2 == '\0') break;
        map_monster::map_monster(local_aa8);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_48);
                    /* try { // try from 085aa6d0 to 085aa6f6 has its CatchHandler @ 085aa6f9 */
        map_monster::operator=(local_aa8,(map_monster *)(iVar5 + 4));
        if (local_a7c != 0) {
          std::vector<int,std::allocator<int>>::push_back(local_44,aiStack_aa4);
        }
                    /* try { // try from 085aa71d to 085aa966 has its CatchHandler @ 085aab52 */
        map_monster::~map_monster(local_aa8);
        std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_34,(int)local_48)
        ;
      }
      local_d = 0;
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar3 = __gnu_cxx::operator!=(local_4c,local_30);
        if (!bVar3) break;
        memset(local_aa8,0,0xa3f);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*(local_4c)
        ;
        CBattle_Field::GetMonsterMap((CBattle_Field *)(this + 0xb24));
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        find((int *)local_50);
        CBattle_Field::GetMonsterMap((CBattle_Field *)(this + 0xb24));
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        end(local_2c);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                          (local_50,(_Rb_tree_iterator *)local_2c);
        if (cVar2 != '\0') {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->(local_50);
          local_8e = ActiveStaticInfo::getHpMax((ActiveStaticInfo *)(iVar5 + 0x3c));
        }
        piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_4c);
        cVar2 = kill_monster(this,local_14,*piVar6,0xffff,(MSG_MONSTER_DIE *)local_aa8,(int *)0x0);
        if (cVar2 != '\x01') {
          puVar7 = (undefined4 *)
                   __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                   operator*(local_4c);
          uVar10 = *puVar7;
          cMyTrace::cMyTrace(local_28,
                             "bool CParty::OnTimeoutBossDie(int, memberIdentificationNumber_t)",
                             0x22ce,0);
          cMyTrace::operator()(local_28,"KILLBOSS2 server - monster id(%d) failed",uVar10);
          if (*(int *)(this + 0xcd8) == 1) {
            SetEPLPState(this,'\x02');
            uVar10 = gen_timer_key(this,0x15);
            uVar8 = GetPartyIndex(this);
            pTVar9 = (TimerQueue *)G_TimerQueue();
            TimerQueue::InsertTimer(pTVar9,1,uVar8,0x15,0x3c,uVar10,0);
            set_state(this,'\x01');
            PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 085aa97d to 085aa9a6 has its CatchHandler @ 085aa9bc */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0xfe);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
            send_to_party(this,local_5c);
                    /* try { // try from 085aa9b2 to 085aa9b6 has its CatchHandler @ 085aab52 */
            PacketGuard::~PacketGuard(local_5c);
          }
          else if (*(char *)(*(int *)(this + 0xcac) + 0x89f) < '\x01') {
            PacketGuard::PacketGuard(local_68);
                    /* try { // try from 085aaaa8 to 085aaad1 has its CatchHandler @ 085aaad4 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,0,0x1f);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
            send_to_party(this,local_68);
                    /* try { // try from 085aaaef to 085aab42 has its CatchHandler @ 085aab52 */
            PacketGuard::~PacketGuard(local_68);
          }
          else {
            pCVar1 = *(CDungeon **)(this + 0xcac);
            sVar4 = CBattle_Field::CBloodRound::getBloodRoundOrder((CBloodRound *)(this + 0xdd0));
                    /* try { // try from 085aaa29 to 085aaa91 has its CatchHandler @ 085aab52 */
            CBattle_Field::CBloodClearRewardData::onFinishBloodRound
                      ((CBloodClearRewardData *)(this + 0xddc),true,sVar4,this,pCVar1);
            uVar10 = gen_timer_key(this,0x22);
            uVar8 = GetPartyIndex(this);
            pTVar9 = (TimerQueue *)G_TimerQueue();
            TimerQueue::InsertTimer(pTVar9,1,uVar8,0x22,5,uVar10,0x22);
          }
          break;
        }
        local_d = 1;
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_18,(int)local_4c);
      }
      uVar10 = 1;
      std::vector<int,std::allocator<int>>::~vector(local_44);
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}
```
