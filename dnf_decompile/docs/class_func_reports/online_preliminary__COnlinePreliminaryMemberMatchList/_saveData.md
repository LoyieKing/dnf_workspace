# _saveData

`_ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser`

`online_preliminary::COnlinePreliminaryMemberMatchList::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x08586510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586510  _ZN18online_preliminary33COnlinePreliminaryMemberMatchList9_saveDataEP5CUser
#           online_preliminary::COnlinePreliminaryMemberMatchList::_saveData(CUser*)
# range [0x08586510, 0x08586847]
08586510 +0x000:  push   %ebp
08586511 +0x001:  mov    %esp,%ebp
08586513 +0x003:  push   %esi
08586514 +0x004:  push   %ebx
08586515 +0x005:  sub    $0x40,%esp
08586518 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0858651d +0x00d:  movl   $0x82,0x8(%esp)
08586525 +0x015:  movl   $"OnlinePreliminaryData.cpp",0x4(%esp)
0858652d +0x01d:  mov    %eax,(%esp)
08586530 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08586535 +0x025:  movl   $0x1,0x8(%esp)
0858653d +0x02d:  mov    %eax,0x4(%esp)
08586541 +0x031:  lea    -0x20(%ebp),%eax
08586544 +0x034:  mov    %eax,(%esp)
08586547 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0858654c +0x03c:  lea    -0x20(%ebp),%eax
0858654f +0x03f:  mov    %eax,(%esp)
08586552 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08586557 +0x047:  movl   $0x1eb,0x4(%esp)
0858655f +0x04f:  mov    %eax,(%esp)
08586562 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08586567 +0x057:  mov    0xc(%ebp),%eax
0858656a +0x05a:  mov    %eax,(%esp)
0858656d +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08586572 +0x062:  mov    %eax,%ebx
08586574 +0x064:  lea    -0x20(%ebp),%eax
08586577 +0x067:  mov    %eax,(%esp)
0858657a +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0858657f +0x06f:  mov    %ebx,0x4(%esp)
08586583 +0x073:  mov    %eax,(%esp)
08586586 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0858658b +0x07b:  lea    -0x20(%ebp),%eax
0858658e +0x07e:  mov    %eax,(%esp)
08586591 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08586596 +0x086:  mov    %eax,(%esp)
08586599 +0x089:  call   08586cb4 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x3fc>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x3fc
0858659e +0x08e:  mov    %eax,-0x14(%ebp)
085865a1 +0x091:  mov    0xc(%ebp),%eax
085865a4 +0x094:  mov    %eax,(%esp)
085865a7 +0x097:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085865ac +0x09c:  mov    %eax,%edx
085865ae +0x09e:  mov    -0x14(%ebp),%eax
085865b1 +0x0a1:  mov    %dx,(%eax)
085865b4 +0x0a4:  mov    0xc(%ebp),%eax
085865b7 +0x0a7:  mov    %eax,(%esp)
085865ba +0x0aa:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085865bf +0x0af:  mov    -0x14(%ebp),%edx
085865c2 +0x0b2:  mov    %eax,0x4(%edx)
085865c5 +0x0b5:  mov    -0x14(%ebp),%eax
085865c8 +0x0b8:  movl   $0x0,0x8(%eax)
085865cf +0x0bf:  mov    0x8(%ebp),%eax
085865d2 +0x0c2:  lea    0x8(%eax),%edx
085865d5 +0x0c5:  lea    -0x24(%ebp),%eax
085865d8 +0x0c8:  mov    %edx,0x4(%esp)
085865dc +0x0cc:  mov    %eax,(%esp)
085865df +0x0cf:  call   08586cca <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x412>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x412
085865e4 +0x0d4:  sub    $0x4,%esp
085865e7 +0x0d7:  jmp    085867a2 <+0x292>
085865ec +0x0dc:  lea    -0x24(%ebp),%eax
085865ef +0x0df:  mov    %eax,(%esp)
085865f2 +0x0e2:  call   08586a72 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1ba>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1ba
085865f7 +0x0e7:  mov    %eax,-0x10(%ebp)
085865fa +0x0ea:  lea    -0x24(%ebp),%eax
085865fd +0x0ed:  mov    %eax,(%esp)
08586600 +0x0f0:  call   08586a72 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1ba>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1ba
08586605 +0x0f5:  add    $0x8,%eax
08586608 +0x0f8:  mov    %eax,-0xc(%ebp)
0858660b +0x0fb:  mov    -0xc(%ebp),%eax
0858660e +0x0fe:  movzbl 0x4(%eax),%eax
08586612 +0x102:  xor    $0x1,%eax
08586615 +0x105:  test   %al,%al
08586617 +0x107:  jne    08586796 <+0x286>
0858661d +0x10d:  mov    -0xc(%ebp),%eax
08586620 +0x110:  movb   $0x0,0x4(%eax)
08586624 +0x114:  mov    -0x14(%ebp),%eax
08586627 +0x117:  mov    0x8(%eax),%edx
0858662a +0x11a:  mov    -0x10(%ebp),%eax
0858662d +0x11d:  movzwl (%eax),%ebx
08586630 +0x120:  mov    -0x14(%ebp),%ecx
08586633 +0x123:  mov    %edx,%eax
08586635 +0x125:  add    %eax,%eax
08586637 +0x127:  add    %edx,%eax
08586639 +0x129:  shl    $0x2,%eax
0858663c +0x12c:  mov    %bx,0xc(%eax,%ecx,1)
08586641 +0x131:  mov    -0x14(%ebp),%eax
08586644 +0x134:  mov    0x8(%eax),%edx
08586647 +0x137:  mov    -0x10(%ebp),%eax
0858664a +0x13a:  mov    0x4(%eax),%ecx
0858664d +0x13d:  mov    -0x14(%ebp),%ebx
08586650 +0x140:  mov    %edx,%eax
08586652 +0x142:  add    %eax,%eax
08586654 +0x144:  add    %edx,%eax
08586656 +0x146:  shl    $0x2,%eax
08586659 +0x149:  lea    (%ebx,%eax,1),%eax
0858665c +0x14c:  add    $0x10,%eax
0858665f +0x14f:  mov    %ecx,(%eax)
08586661 +0x151:  mov    -0x14(%ebp),%eax
08586664 +0x154:  mov    0x8(%eax),%edx
08586667 +0x157:  mov    -0xc(%ebp),%eax
0858666a +0x15a:  mov    (%eax),%ecx
0858666c +0x15c:  mov    -0x14(%ebp),%ebx
0858666f +0x15f:  mov    %edx,%eax
08586671 +0x161:  add    %eax,%eax
08586673 +0x163:  add    %edx,%eax
08586675 +0x165:  shl    $0x2,%eax
08586678 +0x168:  lea    (%ebx,%eax,1),%eax
0858667b +0x16b:  add    $0x14,%eax
0858667e +0x16e:  mov    %ecx,(%eax)
08586680 +0x170:  mov    -0x14(%ebp),%eax
08586683 +0x173:  mov    0x8(%eax),%eax
08586686 +0x176:  lea    0x1(%eax),%edx
08586689 +0x179:  mov    -0x14(%ebp),%eax
0858668c +0x17c:  mov    %edx,0x8(%eax)
0858668f +0x17f:  mov    -0x14(%ebp),%eax
08586692 +0x182:  mov    0x8(%eax),%eax
08586695 +0x185:  cmp    $0x64,%eax
08586698 +0x188:  jne    08586797 <+0x287>
0858669e +0x18e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085866a3 +0x193:  lea    -0x20(%ebp),%edx
085866a6 +0x196:  mov    %edx,0x8(%esp)
085866aa +0x19a:  movl   $0x2,0x4(%esp)
085866b2 +0x1a2:  mov    %eax,(%esp)
085866b5 +0x1a5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085866ba +0x1aa:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085866bf +0x1af:  movl   $0x9d,0x8(%esp)
085866c7 +0x1b7:  movl   $"OnlinePreliminaryData.cpp",0x4(%esp)
085866cf +0x1bf:  mov    %eax,(%esp)
085866d2 +0x1c2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085866d7 +0x1c7:  movl   $0x1,0x8(%esp)
085866df +0x1cf:  mov    %eax,0x4(%esp)
085866e3 +0x1d3:  lea    -0x2c(%ebp),%eax
085866e6 +0x1d6:  mov    %eax,(%esp)
085866e9 +0x1d9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085866ee +0x1de:  lea    -0x2c(%ebp),%eax
085866f1 +0x1e1:  mov    %eax,(%esp)
085866f4 +0x1e4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085866f9 +0x1e9:  movl   $0x1e7,0x4(%esp)
08586701 +0x1f1:  mov    %eax,(%esp)
08586704 +0x1f4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08586709 +0x1f9:  mov    0xc(%ebp),%eax
0858670c +0x1fc:  mov    %eax,(%esp)
0858670f +0x1ff:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08586714 +0x204:  mov    %eax,%ebx
08586716 +0x206:  lea    -0x2c(%ebp),%eax
08586719 +0x209:  mov    %eax,(%esp)
0858671c +0x20c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08586721 +0x211:  mov    %ebx,0x4(%esp)
08586725 +0x215:  mov    %eax,(%esp)
08586728 +0x218:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0858672d +0x21d:  lea    -0x2c(%ebp),%eax
08586730 +0x220:  mov    %eax,(%esp)
08586733 +0x223:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08586738 +0x228:  mov    %eax,(%esp)
0858673b +0x22b:  call   08586cb4 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x3fc>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x3fc
08586740 +0x230:  mov    %eax,-0x14(%ebp)
08586743 +0x233:  mov    0xc(%ebp),%eax
08586746 +0x236:  mov    %eax,(%esp)
08586749 +0x239:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0858674e +0x23e:  mov    %eax,%edx
08586750 +0x240:  mov    -0x14(%ebp),%eax
08586753 +0x243:  mov    %dx,(%eax)
08586756 +0x246:  mov    0xc(%ebp),%eax
08586759 +0x249:  mov    %eax,(%esp)
0858675c +0x24c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08586761 +0x251:  mov    -0x14(%ebp),%edx
08586764 +0x254:  mov    %eax,0x4(%edx)
08586767 +0x257:  mov    -0x14(%ebp),%eax
0858676a +0x25a:  movl   $0x0,0x8(%eax)
08586771 +0x261:  lea    -0x2c(%ebp),%eax
08586774 +0x264:  mov    %eax,(%esp)
08586777 +0x267:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0858677c +0x26c:  jmp    08586797 <+0x287>
0858677e +0x26e:  mov    %edx,%ebx
08586780 +0x270:  mov    %eax,%esi
08586782 +0x272:  lea    -0x2c(%ebp),%eax
08586785 +0x275:  mov    %eax,(%esp)
08586788 +0x278:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0858678d +0x27d:  mov    %esi,%eax
0858678f +0x27f:  mov    %ebx,%edx
08586791 +0x281:  jmp    0858682c <+0x31c>
08586796 +0x286:  nop
08586797 +0x287:  lea    -0x24(%ebp),%eax
0858679a +0x28a:  mov    %eax,(%esp)
0858679d +0x28d:  call   08586cf0 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x438>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x438
085867a2 +0x292:  mov    0x8(%ebp),%eax
085867a5 +0x295:  lea    0x8(%eax),%edx
085867a8 +0x298:  lea    -0x18(%ebp),%eax
085867ab +0x29b:  mov    %edx,0x4(%esp)
085867af +0x29f:  mov    %eax,(%esp)
085867b2 +0x2a2:  call   08586a38 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x180>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x180
085867b7 +0x2a7:  sub    $0x4,%esp
085867ba +0x2aa:  lea    -0x18(%ebp),%eax
085867bd +0x2ad:  mov    %eax,0x4(%esp)
085867c1 +0x2b1:  lea    -0x24(%ebp),%eax
085867c4 +0x2b4:  mov    %eax,(%esp)
085867c7 +0x2b7:  call   08586a5e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1a6>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1a6
085867cc +0x2bc:  test   %al,%al
085867ce +0x2be:  jne    085865ec <+0xdc>
085867d4 +0x2c4:  mov    -0x14(%ebp),%eax
085867d7 +0x2c7:  mov    0x8(%eax),%eax
085867da +0x2ca:  test   %eax,%eax
085867dc +0x2cc:  je     085867fc <+0x2ec>
085867de +0x2ce:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085867e3 +0x2d3:  lea    -0x20(%ebp),%edx
085867e6 +0x2d6:  mov    %edx,0x8(%esp)
085867ea +0x2da:  movl   $0x2,0x4(%esp)
085867f2 +0x2e2:  mov    %eax,(%esp)
085867f5 +0x2e5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085867fa +0x2ea:  jmp    08586810 <+0x300>
085867fc +0x2ec:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08586801 +0x2f1:  lea    -0x20(%ebp),%edx
08586804 +0x2f4:  mov    %edx,0x4(%esp)
08586808 +0x2f8:  mov    %eax,(%esp)
0858680b +0x2fb:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08586810 +0x300:  mov    $0x1,%ebx
08586815 +0x305:  lea    -0x20(%ebp),%eax
08586818 +0x308:  mov    %eax,(%esp)
0858681b +0x30b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08586820 +0x310:  mov    %ebx,%eax
08586822 +0x312:  lea    -0x8(%ebp),%esp
08586825 +0x315:  add    $0x0,%esp
08586828 +0x318:  pop    %ebx
08586829 +0x319:  pop    %esi
0858682a +0x31a:  pop    %ebp
0858682b +0x31b:  ret
0858682c +0x31c:  mov    %edx,%ebx
0858682e +0x31e:  mov    %eax,%esi
08586830 +0x320:  lea    -0x20(%ebp),%eax
08586833 +0x323:  mov    %eax,(%esp)
08586836 +0x326:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0858683b +0x32b:  mov    %esi,%eax
0858683d +0x32d:  mov    %ebx,%edx
0858683f +0x32f:  mov    %eax,(%esp)
08586842 +0x332:  call   08ae3750 <_Unwind_Resume>
08586847 +0x337:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::_saveData @ 0x8586510

/* online_preliminary::COnlinePreliminaryMemberMatchList::_saveData(CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::_saveData
          (COnlinePreliminaryMemberMatchList *this,CUser *param_1)

{
  char cVar1;
  undefined2 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_30 [8];
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  local_28 [4];
  CStreamGuard local_24 [8];
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  local_1c [4];
  SIG_ONLINE_PRELIMINARY_MEMBER_MATCH_LIST *local_18;
  undefined2 *local_14;
  undefined4 *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryData.cpp",0x82)
  ;
  CStreamGuard::CStreamGuard(local_24,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08586562 to 085866d6 has its CatchHandler @ 0858682c */
  CStreamGuard::operator<<(pCVar4,0x1eb);
  iVar5 = CUser::GetUID(param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar4,iVar5);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_18 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_MEMBER_MATCH_LIST>(pCVar4);
  uVar2 = CUser::GetServerGroup(param_1);
  *(undefined2 *)local_18 = uVar2;
  uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_18 + 4) = uVar6;
  *(undefined4 *)(local_18 + 8) = 0;
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::begin(local_28);
  while( true ) {
    std::
    map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator!=((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_28,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    local_14 = (undefined2 *)
               std::
               _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
               ::operator->((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                             *)local_28);
    iVar5 = std::
            _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator->((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_28);
    local_10 = (undefined4 *)(iVar5 + 8);
    if (*(char *)(iVar5 + 0xc) == '\x01') {
      *(undefined1 *)(iVar5 + 0xc) = 0;
      *(undefined2 *)(local_18 + *(int *)(local_18 + 8) * 0xc + 0xc) = *local_14;
      *(undefined4 *)(local_18 + *(int *)(local_18 + 8) * 0xc + 0x10) =
           *(undefined4 *)(local_14 + 2);
      *(undefined4 *)(local_18 + *(int *)(local_18 + 8) * 0xc + 0x14) = *local_10;
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      if (*(int *)(local_18 + 8) == 100) {
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
        pSVar3 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryData.cpp",0x9d);
        CStreamGuard::CStreamGuard(local_30,pSVar3,true);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 08586704 to 0858673f has its CatchHandler @ 0858677e */
        CStreamGuard::operator<<(pCVar4,0x1e7);
        iVar5 = CUser::GetUID(param_1);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_30);
        CStreamGuard::operator<<(pCVar4,iVar5);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_30);
        local_18 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_MEMBER_MATCH_LIST>(pCVar4);
        uVar2 = CUser::GetServerGroup(param_1);
        *(undefined2 *)local_18 = uVar2;
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        *(undefined4 *)(local_18 + 4) = uVar6;
        *(undefined4 *)(local_18 + 8) = 0;
                    /* try { // try from 08586777 to 0858677b has its CatchHandler @ 0858682c */
        CStreamGuard::~CStreamGuard(local_30);
      }
    }
                    /* try { // try from 0858679d to 0858680f has its CatchHandler @ 0858682c */
    std::
    _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
    ::operator++((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                  *)local_28);
  }
  if (*(int *)(local_18 + 8) == 0) {
    StreamPool::Free(GlobalData::s_stream_pool,local_24);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
  }
  CStreamGuard::~CStreamGuard(local_24);
  return 1;
}
```
