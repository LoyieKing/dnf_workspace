# dispatch_sig

`_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci`

`Inter_PcroomResponse::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PcroomResponse` | `0x084db452` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084db452  _ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci
#           Inter_PcroomResponse::dispatch_sig(CUser*, char*, int)
# range [0x084db452, 0x084db877]
084db452 +0x000:  push   %ebp
084db453 +0x001:  mov    %esp,%ebp
084db455 +0x003:  push   %edi
084db456 +0x004:  push   %esi
084db457 +0x005:  push   %ebx
084db458 +0x006:  sub    $0x47c,%esp
084db45e +0x00c:  mov    0x10(%ebp),%eax
084db461 +0x00f:  mov    %eax,-0x30(%ebp)
084db464 +0x012:  mov    0xc(%ebp),%eax
084db467 +0x015:  mov    %eax,(%esp)
084db46a +0x018:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084db46f +0x01d:  test   %eax,%eax
084db471 +0x01f:  sete   %al
084db474 +0x022:  test   %al,%al
084db476 +0x024:  je     084db482 <+0x30>
084db478 +0x026:  mov    $0x4404,%eax
084db47d +0x02b:  jmp    084db86c <+0x41a>
084db482 +0x030:  mov    0xc(%ebp),%eax
084db485 +0x033:  mov    %eax,(%esp)
084db488 +0x036:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084db48d +0x03b:  test   %eax,%eax
084db48f +0x03d:  setne  %al
084db492 +0x040:  test   %al,%al
084db494 +0x042:  je     084db4a9 <+0x57>
084db496 +0x044:  movl   $0x1,0x4(%esp)
084db49e +0x04c:  mov    0xc(%ebp),%eax
084db4a1 +0x04f:  mov    %eax,(%esp)
084db4a4 +0x052:  call   084ec834 <_GLOBAL__I__Z7getUserj+0x37e6>  ; global constructors keyed to getUser(unsigned int)+0x37e6
084db4a9 +0x057:  mov    -0x30(%ebp),%eax
084db4ac +0x05a:  mov    0x12(%eax),%eax
084db4af +0x05d:  mov    %eax,0x4(%esp)
084db4b3 +0x061:  mov    0xc(%ebp),%eax
084db4b6 +0x064:  mov    %eax,(%esp)
084db4b9 +0x067:  call   084ec766 <_GLOBAL__I__Z7getUserj+0x3718>  ; global constructors keyed to getUser(unsigned int)+0x3718
084db4be +0x06c:  movb   $0x0,-0x2b(%ebp)
084db4c2 +0x070:  mov    -0x30(%ebp),%eax
084db4c5 +0x073:  movzbl 0x1c(%eax),%eax
084db4c9 +0x077:  cmp    $0x7,%al
084db4cb +0x079:  jne    084db566 <+0x114>
084db4d1 +0x07f:  mov    -0x30(%ebp),%eax
084db4d4 +0x082:  movzbl 0x1a(%eax),%eax
084db4d8 +0x086:  cmp    $0x3,%al
084db4da +0x088:  je     084db566 <+0x114>
084db4e0 +0x08e:  mov    -0x30(%ebp),%eax
084db4e3 +0x091:  movzbl 0x1d(%eax),%eax
084db4e7 +0x095:  cmp    $0x1,%al
084db4e9 +0x097:  jne    084db566 <+0x114>
084db4eb +0x099:  movl   $0x0,0xc(%esp)
084db4f3 +0x0a1:  movl   $0x1,0x8(%esp)
084db4fb +0x0a9:  movl   $0x3c,0x4(%esp)
084db503 +0x0b1:  mov    0xc(%ebp),%eax
084db506 +0x0b4:  mov    %eax,(%esp)
084db509 +0x0b7:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084db50e +0x0bc:  mov    0xc(%ebp),%eax
084db511 +0x0bf:  mov    %eax,(%esp)
084db514 +0x0c2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084db519 +0x0c7:  mov    %eax,%esi
084db51b +0x0c9:  mov    0xc(%ebp),%eax
084db51e +0x0cc:  mov    %eax,(%esp)
084db521 +0x0cf:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084db526 +0x0d4:  mov    %eax,%ebx
084db528 +0x0d6:  movl   $0x0,0xc(%esp)
084db530 +0x0de:  movl   $0x4479,0x8(%esp)
084db538 +0x0e6:  movl   $&_ZZN20Inter_PcroomResponse12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084db540 +0x0ee:  lea    -0x50(%ebp),%eax
084db543 +0x0f1:  mov    %eax,(%esp)
084db546 +0x0f4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084db54b +0x0f9:  mov    %esi,0xc(%esp)
084db54f +0x0fd:  mov    %ebx,0x8(%esp)
084db553 +0x101:  movl   $"SecuritySystem user ban ip login(%s,%u)",0x4(%esp)
084db55b +0x109:  lea    -0x50(%ebp),%eax
084db55e +0x10c:  mov    %eax,(%esp)
084db561 +0x10f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084db566 +0x114:  movb   $0x0,-0x2a(%ebp)
084db56a +0x118:  movb   $0x1,-0x29(%ebp)
084db56e +0x11c:  mov    -0x30(%ebp),%eax
084db571 +0x11f:  movzbl 0x1a(%eax),%eax
084db575 +0x123:  movzbl %al,%eax
084db578 +0x126:  cmp    $0x1,%eax
084db57b +0x129:  je     084db5be <+0x16c>
084db57d +0x12b:  cmp    $0x1,%eax
084db580 +0x12e:  jg     084db588 <+0x136>
084db582 +0x130:  test   %eax,%eax
084db584 +0x132:  je     084db594 <+0x142>
084db586 +0x134:  jmp    084db5c5 <+0x173>
084db588 +0x136:  cmp    $0x2,%eax
084db58b +0x139:  je     084db5c1 <+0x16f>
084db58d +0x13b:  cmp    $0x3,%eax
084db590 +0x13e:  je     084db5a5 <+0x153>
084db592 +0x140:  jmp    084db5c5 <+0x173>
084db594 +0x142:  mov    -0x30(%ebp),%eax
084db597 +0x145:  movzbl 0x1b(%eax),%eax
084db59b +0x149:  cmp    $0x2,%al
084db59d +0x14b:  jne    084db5c4 <+0x172>
084db59f +0x14d:  movb   $0x1,-0x2a(%ebp)
084db5a3 +0x151:  jmp    084db5c5 <+0x173>
084db5a5 +0x153:  movb   $0x1,-0x2a(%ebp)
084db5a9 +0x157:  mov    -0x30(%ebp),%eax
084db5ac +0x15a:  movzbl 0x1b(%eax),%eax
084db5b0 +0x15e:  movzbl %al,%eax
084db5b3 +0x161:  cmp    $0x1,%eax
084db5b6 +0x164:  jne    084db5c5 <+0x173>
084db5b8 +0x166:  movb   $0x0,-0x29(%ebp)
084db5bc +0x16a:  jmp    084db5c5 <+0x173>
084db5be +0x16c:  nop
084db5bf +0x16d:  jmp    084db5c5 <+0x173>
084db5c1 +0x16f:  nop
084db5c2 +0x170:  jmp    084db5c5 <+0x173>
084db5c4 +0x172:  nop
084db5c5 +0x173:  cmpb   $0x0,-0x2a(%ebp)
084db5c9 +0x177:  je     084db810 <+0x3be>
084db5cf +0x17d:  mov    -0x30(%ebp),%eax
084db5d2 +0x180:  movzbl 0x1b(%eax),%eax
084db5d6 +0x184:  movzbl %al,%esi
084db5d9 +0x187:  mov    -0x30(%ebp),%eax
084db5dc +0x18a:  movzbl 0x1a(%eax),%eax
084db5e0 +0x18e:  movzbl %al,%ebx
084db5e3 +0x191:  movl   $0x0,0xc(%esp)
084db5eb +0x199:  movl   $0x44ec,0x8(%esp)
084db5f3 +0x1a1:  movl   $&_ZZN20Inter_PcroomResponse12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084db5fb +0x1a9:  lea    -0x40(%ebp),%eax
084db5fe +0x1ac:  mov    %eax,(%esp)
084db601 +0x1af:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084db606 +0x1b4:  mov    %esi,0xc(%esp)
084db60a +0x1b8:  mov    %ebx,0x8(%esp)
084db60e +0x1bc:  movl   $"Inter_PcroomResponse::dispatch_sig() forbidden ip (%d), %d)",0x4(%esp)
084db616 +0x1c4:  lea    -0x40(%ebp),%eax
084db619 +0x1c7:  mov    %eax,(%esp)
084db61c +0x1ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084db621 +0x1cf:  lea    -0x5c(%ebp),%eax
084db624 +0x1d2:  mov    %eax,(%esp)
084db627 +0x1d5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084db62c +0x1da:  movl   $0xe9,0x8(%esp)
084db634 +0x1e2:  movl   $0x0,0x4(%esp)
084db63c +0x1ea:  lea    -0x5c(%ebp),%eax
084db63f +0x1ed:  mov    %eax,(%esp)
084db642 +0x1f0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084db647 +0x1f5:  movl   $0x1,0x4(%esp)
084db64f +0x1fd:  lea    -0x5c(%ebp),%eax
084db652 +0x200:  mov    %eax,(%esp)
084db655 +0x203:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084db65a +0x208:  movl   $0x5,0x4(%esp)
084db662 +0x210:  lea    -0x5c(%ebp),%eax
084db665 +0x213:  mov    %eax,(%esp)
084db668 +0x216:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084db66d +0x21b:  mov    -0x30(%ebp),%eax
084db670 +0x21e:  movzbl 0x1b(%eax),%eax
084db674 +0x222:  movzbl %al,%eax
084db677 +0x225:  mov    %eax,0x4(%esp)
084db67b +0x229:  movl   $&g_nexonMsgTable,(%esp)
084db682 +0x230:  call   0858010c <_ZN14CNexonMsgTable16GetMessageStringEi>  ; CNexonMsgTable::GetMessageString(int)
084db687 +0x235:  mov    %eax,-0x28(%ebp)
084db68a +0x238:  lea    -0x45d(%ebp),%edx
084db690 +0x23e:  mov    $0x401,%ebx
084db695 +0x243:  mov    $0x0,%eax
084db69a +0x248:  mov    %edx,%ecx
084db69c +0x24a:  and    $0x1,%ecx
084db69f +0x24d:  test   %ecx,%ecx
084db6a1 +0x24f:  je     084db6ab <+0x259>
084db6a3 +0x251:  mov    %al,(%edx)
084db6a5 +0x253:  add    $0x1,%edx
084db6a8 +0x256:  sub    $0x1,%ebx
084db6ab +0x259:  mov    %edx,%ecx
084db6ad +0x25b:  and    $0x2,%ecx
084db6b0 +0x25e:  test   %ecx,%ecx
084db6b2 +0x260:  je     084db6bd <+0x26b>
084db6b4 +0x262:  mov    %ax,(%edx)
084db6b7 +0x265:  add    $0x2,%edx
084db6ba +0x268:  sub    $0x2,%ebx
084db6bd +0x26b:  mov    %ebx,%ecx
084db6bf +0x26d:  shr    $0x2,%ecx
084db6c2 +0x270:  mov    %edx,%edi
084db6c4 +0x272:  rep stos %eax,%es:(%edi)
084db6c6 +0x274:  mov    %edi,%edx
084db6c8 +0x276:  mov    %ebx,%ecx
084db6ca +0x278:  and    $0x2,%ecx
084db6cd +0x27b:  test   %ecx,%ecx
084db6cf +0x27d:  je     084db6d7 <+0x285>
084db6d1 +0x27f:  mov    %ax,(%edx)
084db6d4 +0x282:  add    $0x2,%edx
084db6d7 +0x285:  mov    %ebx,%ecx
084db6d9 +0x287:  and    $0x1,%ecx
084db6dc +0x28a:  test   %ecx,%ecx
084db6de +0x28c:  je     084db6e5 <+0x293>
084db6e0 +0x28e:  mov    %al,(%edx)
084db6e2 +0x290:  add    $0x1,%edx
084db6e5 +0x293:  movl   $0x0,0xc(%esp)
084db6ed +0x29b:  mov    -0x28(%ebp),%eax
084db6f0 +0x29e:  mov    %eax,0x8(%esp)
084db6f4 +0x2a2:  movl   $0x4,0x4(%esp)
084db6fc +0x2aa:  movl   $&g_scriptStringManager_,(%esp)
084db703 +0x2b1:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084db708 +0x2b6:  movl   $0x400,0x8(%esp)
084db710 +0x2be:  mov    %eax,0x4(%esp)
084db714 +0x2c2:  lea    -0x45d(%ebp),%eax
084db71a +0x2c8:  mov    %eax,(%esp)
084db71d +0x2cb:  call   0807d8d0 <_init+0x1c8>
084db722 +0x2d0:  lea    -0x45d(%ebp),%eax
084db728 +0x2d6:  mov    %eax,(%esp)
084db72b +0x2d9:  call   0807e3b0 <_init+0xca8>
084db730 +0x2de:  mov    %eax,-0x24(%ebp)
084db733 +0x2e1:  mov    -0x24(%ebp),%eax
084db736 +0x2e4:  mov    %eax,0x4(%esp)
084db73a +0x2e8:  lea    -0x5c(%ebp),%eax
084db73d +0x2eb:  mov    %eax,(%esp)
084db740 +0x2ee:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084db745 +0x2f3:  mov    -0x24(%ebp),%eax
084db748 +0x2f6:  mov    %eax,0x8(%esp)
084db74c +0x2fa:  lea    -0x45d(%ebp),%eax
084db752 +0x300:  mov    %eax,0x4(%esp)
084db756 +0x304:  lea    -0x5c(%ebp),%eax
084db759 +0x307:  mov    %eax,(%esp)
084db75c +0x30a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084db761 +0x30f:  movzbl -0x29(%ebp),%eax
084db765 +0x313:  mov    %eax,0x4(%esp)
084db769 +0x317:  lea    -0x5c(%ebp),%eax
084db76c +0x31a:  mov    %eax,(%esp)
084db76f +0x31d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084db774 +0x322:  movl   $0x1,0x4(%esp)
084db77c +0x32a:  lea    -0x5c(%ebp),%eax
084db77f +0x32d:  mov    %eax,(%esp)
084db782 +0x330:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084db787 +0x335:  lea    -0x5c(%ebp),%eax
084db78a +0x338:  mov    %eax,0x4(%esp)
084db78e +0x33c:  mov    0xc(%ebp),%eax
084db791 +0x33f:  mov    %eax,(%esp)
084db794 +0x342:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084db799 +0x347:  mov    0xc(%ebp),%eax
084db79c +0x34a:  mov    %eax,(%esp)
084db79f +0x34d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084db7a4 +0x352:  mov    %eax,%esi
084db7a6 +0x354:  mov    0xc(%ebp),%eax
084db7a9 +0x357:  mov    %eax,(%esp)
084db7ac +0x35a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084db7b1 +0x35f:  mov    %eax,%ebx
084db7b3 +0x361:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
084db7b8 +0x366:  movl   $0x0,0x18(%esp)
084db7c0 +0x36e:  mov    %esi,0x14(%esp)
084db7c4 +0x372:  movl   $0x78,0x10(%esp)
084db7cc +0x37a:  movl   $0x84,0xc(%esp)
084db7d4 +0x382:  mov    %ebx,0x8(%esp)
084db7d8 +0x386:  movl   $0x0,0x4(%esp)
084db7e0 +0x38e:  mov    %eax,(%esp)
084db7e3 +0x391:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
084db7e8 +0x396:  jmp    084db805 <+0x3b3>
084db7ea +0x398:  mov    %edx,%ebx
084db7ec +0x39a:  mov    %eax,%esi
084db7ee +0x39c:  lea    -0x5c(%ebp),%eax
084db7f1 +0x39f:  mov    %eax,(%esp)
084db7f4 +0x3a2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084db7f9 +0x3a7:  mov    %esi,%eax
084db7fb +0x3a9:  mov    %ebx,%edx
084db7fd +0x3ab:  mov    %eax,(%esp)
084db800 +0x3ae:  call   08ae3750 <_Unwind_Resume>
084db805 +0x3b3:  lea    -0x5c(%ebp),%eax
084db808 +0x3b6:  mov    %eax,(%esp)
084db80b +0x3b9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084db810 +0x3be:  mov    -0x30(%ebp),%eax
084db813 +0x3c1:  mov    0x12(%eax),%eax
084db816 +0x3c4:  test   %eax,%eax
084db818 +0x3c6:  je     084db84b <+0x3f9>
084db81a +0x3c8:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084db821 +0x3cf:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084db826 +0x3d4:  mov    %eax,-0x20(%ebp)
084db829 +0x3d7:  mov    -0x30(%ebp),%eax
084db82c +0x3da:  mov    0x16(%eax),%eax
084db82f +0x3dd:  mov    %eax,-0x1c(%ebp)
084db832 +0x3e0:  mov    -0x1c(%ebp),%edx
084db835 +0x3e3:  mov    -0x20(%ebp),%eax
084db838 +0x3e6:  mov    %edx,0x8(%esp)
084db83c +0x3ea:  mov    %eax,0x4(%esp)
084db840 +0x3ee:  mov    0xc(%ebp),%eax
084db843 +0x3f1:  mov    %eax,(%esp)
084db846 +0x3f4:  call   086b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>  ; WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long)
084db84b +0x3f9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084db850 +0x3fe:  mov    %eax,(%esp)
084db853 +0x401:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084db858 +0x406:  mov    0xc(%ebp),%edx
084db85b +0x409:  mov    %edx,0x4(%esp)
084db85f +0x40d:  mov    %eax,(%esp)
084db862 +0x410:  call   0810c3a4 <_ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser>  ; EventClassify::CEventScriptMng::send_pc_room_play_init_time(CUser*)
084db867 +0x415:  mov    $0x0,%eax
084db86c +0x41a:  add    $0x47c,%esp
084db872 +0x420:  pop    %ebx
084db873 +0x421:  pop    %esi
084db874 +0x422:  pop    %edi
084db875 +0x423:  pop    %ebp
084db876 +0x424:  ret
084db877 +0x425:  nop
```

## 反编译 C

```c
// Inter_PcroomResponse::dispatch_sig @ 0x84db452

/* Inter_PcroomResponse::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PcroomResponse::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  CDataManager *this;
  CEventScriptMng *this_00;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_461;
  char local_460 [1024];
  PacketGuard local_60 [12];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  undefined1 local_2f;
  char local_2e;
  byte local_2d;
  char *local_2c;
  size_t local_28;
  long local_24;
  long local_20;
  
  bVar11 = 0;
  local_34 = param_3;
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 0) {
    uVar4 = 0x4404;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      CUser::setPcRoomAuth((CUser *)param_2,true);
    }
    CUser::SetPCRoomNo((CUser *)param_2,*(uint *)(local_34 + 0x12));
    local_2f = 0;
    if (((*(char *)(local_34 + 0x1c) == '\a') && (*(char *)(local_34 + 0x1a) != '\x03')) &&
       (*(char *)(local_34 + 0x1d) == '\x01')) {
      CUser::DisConnSig((CUser *)param_2,0x3c,1,0);
      uVar4 = CUser::get_acc_id((CUser *)param_2);
      uVar5 = CUser::get_acc_name((CUser *)param_2);
      cMyTrace::cMyTrace(local_54,
                         "virtual int Inter_PcroomResponse::dispatch_sig(CUser*, char*, int)",0x4479
                         ,0);
      cMyTrace::operator()(local_54,"SecuritySystem user ban ip login(%s,%u)",uVar5,uVar4);
    }
    local_2e = '\0';
    local_2d = 1;
    bVar1 = *(byte *)(local_34 + 0x1a);
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if ((bVar1 == 0) && (*(char *)(local_34 + 0x1b) == '\x02')) {
          local_2e = '\x01';
        }
      }
      else if (((bVar1 != 2) && (bVar1 == 3)) &&
              (local_2e = '\x01', *(char *)(local_34 + 0x1b) == '\x01')) {
        local_2d = 0;
      }
    }
    if (local_2e != '\0') {
      bVar1 = *(byte *)(local_34 + 0x1b);
      bVar2 = *(byte *)(local_34 + 0x1a);
      cMyTrace::cMyTrace(local_44,
                         "virtual int Inter_PcroomResponse::dispatch_sig(CUser*, char*, int)",0x44ec
                         ,0);
      cMyTrace::operator()
                (local_44,"Inter_PcroomResponse::dispatch_sig() forbidden ip (%d), %d)",(uint)bVar2,
                 (uint)bVar1);
      PacketGuard::PacketGuard(local_60);
                    /* try { // try from 084db642 to 084db7e7 has its CatchHandler @ 084db7ea */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,0xe9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,5);
      local_2c = (char *)CNexonMsgTable::GetMessageString(0x945b8e4);
      pcVar8 = &local_461;
      uVar9 = 0x401;
      bVar10 = ((uint)pcVar8 & 1) != 0;
      if (bVar10) {
        local_461 = '\0';
        pcVar8 = local_460;
        uVar9 = 0x400;
      }
      if (((uint)pcVar8 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
        uVar9 = uVar9 - 2;
      }
      for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      }
      if ((uVar9 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      if (!bVar10) {
        *pcVar8 = '\0';
      }
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,local_2c,
                                  (bool *)0x0);
      strncpy(&local_461,pcVar8,0x400);
      local_28 = strlen(&local_461);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_28);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_60,&local_461,local_28);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(uint)local_2d);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      CUser::Send((CUser *)param_2,local_60);
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar5 = CUser::GetUID((CUser *)param_2);
      pTVar6 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar6,0,uVar5,0x84,0x78,uVar4,0);
      PacketGuard::~PacketGuard(local_60);
    }
    if (*(int *)(local_34 + 0x12) != 0) {
      local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_20 = *(long *)(local_34 + 0x16);
      WongWork::CHandlePremium::handleSetUserPCRoom((CUser *)param_2,local_24,local_20);
    }
    this = (CDataManager *)G_CDataManager();
    this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
    EventClassify::CEventScriptMng::send_pc_room_play_init_time(this_00,(CUser *)param_2);
    uVar4 = 0;
  }
  return uVar4;
}
```
