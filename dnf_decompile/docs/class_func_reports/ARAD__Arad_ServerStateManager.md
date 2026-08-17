# ARAD__Arad_ServerStateManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## Arad_ServerStateManager

```asm
// === 081a922c ARAD::Arad_ServerStateManager::Arad_ServerStateManager  [0x081a922c-0x81a927d] ===
 81a922c:	55                   	push   %ebp
 81a922d:	89 e5                	mov    %esp,%ebp
 81a922f:	56                   	push   %esi
 81a9230:	53                   	push   %ebx
 81a9231:	83 ec 10             	sub    $0x10,%esp
 81a9234:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9237:	c6 00 00             	movb   $0x0,(%eax)
 81a923a:	8b 45 08             	mov    0x8(%ebp),%eax
 81a923d:	83 c0 04             	add    $0x4,%eax
 81a9240:	89 04 24             	mov    %eax,(%esp)
 81a9243:	e8 ca 21 f2 ff       	call   80cb412 <_ZN5MutexC1Ev>
 81a9248:	8b 45 08             	mov    0x8(%ebp),%eax
 81a924b:	83 c0 1c             	add    $0x1c,%eax
 81a924e:	89 04 24             	mov    %eax,(%esp)
 81a9251:	e8 b0 0b 00 00       	call   81a9e06 <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 81a9256:	eb 1e                	jmp    81a9276 <_ZN4ARAD23Arad_ServerStateManagerC1Ev+0x4a>
 81a9258:	89 d3                	mov    %edx,%ebx
 81a925a:	89 c6                	mov    %eax,%esi
 81a925c:	8b 45 08             	mov    0x8(%ebp),%eax
 81a925f:	83 c0 04             	add    $0x4,%eax
 81a9262:	89 04 24             	mov    %eax,(%esp)
 81a9265:	e8 c4 21 f2 ff       	call   80cb42e <_ZN5MutexD1Ev>
 81a926a:	89 f0                	mov    %esi,%eax
 81a926c:	89 da                	mov    %ebx,%edx
 81a926e:	89 04 24             	mov    %eax,(%esp)
 81a9271:	e8 da a4 93 00       	call   8ae3750 <_Unwind_Resume>
 81a9276:	83 c4 10             	add    $0x10,%esp
 81a9279:	5b                   	pop    %ebx
 81a927a:	5e                   	pop    %esi
 81a927b:	5d                   	pop    %ebp
 81a927c:	c3                   	ret
 81a927d:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::Arad_ServerStateManager @ 0x81a922c

/* ARAD::Arad_ServerStateManager::Arad_ServerStateManager() */

void __thiscall
ARAD::Arad_ServerStateManager::Arad_ServerStateManager(Arad_ServerStateManager *this)

{
  *this = (Arad_ServerStateManager)0x0;
  Mutex::Mutex((Mutex *)(this + 4));
                    /* try { // try from 081a9251 to 081a9255 has its CatchHandler @ 081a9258 */
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::map((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
         *)(this + 0x1c));
  return;
}

```

---

## attachTimer

```asm
// === 081a98d4 ARAD::Arad_ServerStateManager::attachTimer  [0x081a98d4-0x81a9919] ===
 81a98d4:	55                   	push   %ebp
 81a98d5:	89 e5                	mov    %esp,%ebp
 81a98d7:	83 ec 28             	sub    $0x28,%esp
 81a98da:	e8 9d cb f4 ff       	call   80f647c <_Z12G_TimerQueuev>
 81a98df:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81a98e6:	00 
 81a98e7:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81a98ee:	00 
 81a98ef:	c7 44 24 10 78 00 00 	movl   $0x78,0x10(%esp)
 81a98f6:	00 
 81a98f7:	c7 44 24 0c ac 00 00 	movl   $0xac,0xc(%esp)
 81a98fe:	00 
 81a98ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81a9906:	00 
 81a9907:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81a990e:	00 
 81a990f:	89 04 24             	mov    %eax,(%esp)
 81a9912:	e8 ff 74 48 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 81a9917:	c9                   	leave
 81a9918:	c3                   	ret
 81a9919:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::attachTimer @ 0x81a98d4

/* ARAD::Arad_ServerStateManager::attachTimer() */

void ARAD::Arad_ServerStateManager::attachTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xac,0x78,0,0);
  return;
}

```

---

## checkContinus

```asm
// === 081a95dc ARAD::Arad_ServerStateManager::checkContinus  [0x081a95dc-0x81a97f7] ===
 81a95dc:	55                   	push   %ebp
 81a95dd:	89 e5                	mov    %esp,%ebp
 81a95df:	56                   	push   %esi
 81a95e0:	53                   	push   %ebx
 81a95e1:	83 ec 50             	sub    $0x50,%esp
 81a95e4:	8b 45 08             	mov    0x8(%ebp),%eax
 81a95e7:	83 c0 04             	add    $0x4,%eax
 81a95ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a95ee:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a95f1:	89 04 24             	mov    %eax,(%esp)
 81a95f4:	e8 53 be f5 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 81a95f9:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81a9600:	e8 99 26 f2 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81a9605:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81a9608:	8b 45 08             	mov    0x8(%ebp),%eax
 81a960b:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a960e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a9611:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a9615:	89 04 24             	mov    %eax,(%esp)
 81a9618:	e8 7d 08 00 00       	call   81a9e9a <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 81a961d:	83 ec 04             	sub    $0x4,%esp
 81a9620:	e9 63 01 00 00       	jmp    81a9788 <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv+0x1ac>
 81a9625:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a9628:	89 04 24             	mov    %eax,(%esp)
 81a962b:	e8 26 09 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a9630:	8b 40 06             	mov    0x6(%eax),%eax
 81a9633:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81a9636:	77 1c                	ja     81a9654 <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv+0x78>
 81a9638:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a963b:	89 04 24             	mov    %eax,(%esp)
 81a963e:	e8 13 09 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a9643:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81a9647:	66 83 f8 01          	cmp    $0x1,%ax
 81a964b:	75 07                	jne    81a9654 <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv+0x78>
 81a964d:	b8 01 00 00 00       	mov    $0x1,%eax
 81a9652:	eb 05                	jmp    81a9659 <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv+0x7d>
 81a9654:	b8 00 00 00 00       	mov    $0x0,%eax
 81a9659:	84 c0                	test   %al,%al
 81a965b:	0f 84 1c 01 00 00    	je     81a977d <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv+0x1a1>
 81a9661:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a9664:	89 04 24             	mov    %eax,(%esp)
 81a9667:	e8 ea 08 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a966c:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 81a9672:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a9675:	89 04 24             	mov    %eax,(%esp)
 81a9678:	e8 d9 08 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a967d:	8d 58 04             	lea    0x4(%eax),%ebx
 81a9680:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a9683:	89 04 24             	mov    %eax,(%esp)
 81a9686:	e8 cb 08 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a968b:	8b 00                	mov    (%eax),%eax
 81a968d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a9694:	00 
 81a9695:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81a9699:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a969d:	8b 45 08             	mov    0x8(%ebp),%eax
 81a96a0:	89 04 24             	mov    %eax,(%esp)
 81a96a3:	e8 74 03 00 00       	call   81a9a1c <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser>
 81a96a8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a96ab:	89 04 24             	mov    %eax,(%esp)
 81a96ae:	e8 a3 08 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a96b3:	8d 58 04             	lea    0x4(%eax),%ebx
 81a96b6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a96b9:	89 04 24             	mov    %eax,(%esp)
 81a96bc:	e8 95 08 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a96c1:	8b 00                	mov    (%eax),%eax
 81a96c3:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81a96ca:	00 
 81a96cb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81a96cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a96d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a96da:	00 
 81a96db:	8b 45 08             	mov    0x8(%ebp),%eax
 81a96de:	89 04 24             	mov    %eax,(%esp)
 81a96e1:	e8 14 04 00 00       	call   81a9afa <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb>
 81a96e6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a96e9:	89 04 24             	mov    %eax,(%esp)
 81a96ec:	e8 65 08 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a96f1:	8b 70 06             	mov    0x6(%eax),%esi
 81a96f4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a96f7:	89 04 24             	mov    %eax,(%esp)
 81a96fa:	e8 57 08 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a96ff:	8b 00                	mov    (%eax),%eax
 81a9701:	89 c3                	mov    %eax,%ebx
 81a9703:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a970a:	00 
 81a970b:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 81a9712:	00 
 81a9713:	c7 44 24 04 00 e7 ba 	movl   $0x8bae700,0x4(%esp)
 81a971a:	08 
 81a971b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a971e:	89 04 24             	mov    %eax,(%esp)
 81a9721:	e8 f2 5f 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81a9726:	89 74 24 10          	mov    %esi,0x10(%esp)
 81a972a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81a972e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81a9735:	00 
 81a9736:	c7 44 24 04 c4 d9 ba 	movl   $0x8bad9c4,0x4(%esp)
 81a973d:	08 
 81a973e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a9741:	89 04 24             	mov    %eax,(%esp)
 81a9744:	e8 3f 60 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81a9749:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a974c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81a9753:	00 
 81a9754:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81a9757:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a975b:	89 04 24             	mov    %eax,(%esp)
 81a975e:	e8 01 08 00 00       	call   81a9f64 <_ZNSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEppEi>
 81a9763:	83 ec 04             	sub    $0x4,%esp
 81a9766:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9769:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a976c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a976f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9773:	89 14 24             	mov    %edx,(%esp)
 81a9776:	e8 27 08 00 00       	call   81a9fa2 <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 81a977b:	eb 0b                	jmp    81a9788 <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv+0x1ac>
 81a977d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a9780:	89 04 24             	mov    %eax,(%esp)
 81a9783:	e8 34 08 00 00       	call   81a9fbc <_ZNSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEppEv>
 81a9788:	8b 45 08             	mov    0x8(%ebp),%eax
 81a978b:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a978e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a9791:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a9795:	89 04 24             	mov    %eax,(%esp)
 81a9798:	e8 23 07 00 00       	call   81a9ec0 <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 81a979d:	83 ec 04             	sub    $0x4,%esp
 81a97a0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a97a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a97a7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a97aa:	89 04 24             	mov    %eax,(%esp)
 81a97ad:	e8 90 07 00 00       	call   81a9f42 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEneERKS5_>
 81a97b2:	84 c0                	test   %al,%al
 81a97b4:	0f 85 6b fe ff ff    	jne    81a9625 <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv+0x49>
 81a97ba:	8b 45 08             	mov    0x8(%ebp),%eax
 81a97bd:	89 04 24             	mov    %eax,(%esp)
 81a97c0:	e8 0f 01 00 00       	call   81a98d4 <_ZN4ARAD23Arad_ServerStateManager11attachTimerEv>
 81a97c5:	eb 1b                	jmp    81a97e2 <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv+0x206>
 81a97c7:	89 d3                	mov    %edx,%ebx
 81a97c9:	89 c6                	mov    %eax,%esi
 81a97cb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a97ce:	89 04 24             	mov    %eax,(%esp)
 81a97d1:	e8 92 bc f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a97d6:	89 f0                	mov    %esi,%eax
 81a97d8:	89 da                	mov    %ebx,%edx
 81a97da:	89 04 24             	mov    %eax,(%esp)
 81a97dd:	e8 6e 9f 93 00       	call   8ae3750 <_Unwind_Resume>
 81a97e2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a97e5:	89 04 24             	mov    %eax,(%esp)
 81a97e8:	e8 7b bc f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a97ed:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81a97f0:	83 c4 00             	add    $0x0,%esp
 81a97f3:	5b                   	pop    %ebx
 81a97f4:	5e                   	pop    %esi
 81a97f5:	5d                   	pop    %ebp
 81a97f6:	c3                   	ret
 81a97f7:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::checkContinus @ 0x81a95dc

/* ARAD::Arad_ServerStateManager::checkContinus() */

void __thiscall ARAD::Arad_ServerStateManager::checkContinus(Arad_ServerStateManager *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  local_30 [4];
  Guard<Mutex> local_2c [4];
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  local_28 [4];
  cMyTrace local_24 [16];
  undefined4 local_14;
  uint local_10;
  
  Guard<Mutex>::Guard(local_2c,(Mutex *)(this + 4));
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 081a9618 to 081a97c4 has its CatchHandler @ 081a97c7 */
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::begin(local_30);
  do {
    std::
    map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
    ::end(local_28);
    cVar3 = std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30,(_Rb_tree_iterator *)local_28);
    if (cVar3 == '\0') {
      attachTimer();
      Guard<Mutex>::~Guard(local_2c);
      return;
    }
    iVar4 = std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
            ::operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
    if (local_10 < *(uint *)(iVar4 + 6)) {
LAB_081a9654:
      bVar2 = false;
    }
    else {
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      if (*(short *)(iVar4 + 4) != 1) goto LAB_081a9654;
      bVar2 = true;
    }
    if (bVar2) {
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      *(undefined2 *)(iVar4 + 4) = 0;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      puVar5 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
               operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                           *)local_30);
      sendEffectPacket(this,*puVar5,iVar4 + 4,0);
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      puVar5 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
               operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                           *)local_30);
      saveServerState(this,1,*puVar5,iVar4 + 4,0);
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      uVar6 = *(undefined4 *)(iVar4 + 6);
      puVar5 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
               operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                           *)local_30);
      uVar1 = *puVar5;
      cMyTrace::cMyTrace(local_24,"void ARAD::Arad_ServerStateManager::checkContinus()",0x56,0);
      cMyTrace::operator()
                (local_24,"[SERVER_STAT] delete server stat. (category:%d, code:%d, end:%u)",1,uVar1
                 ,uVar6);
      uVar6 = 0;
      std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
      operator++((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                  *)&local_14,(int)local_30);
      std::
      map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
      ::erase((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
               *)(this + 0x1c),local_14,uVar6);
    }
    else {
      std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
      operator++((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                  *)local_30);
    }
  } while( true );
}

```

---

## deleteState

```asm
// === 081a93d4 ARAD::Arad_ServerStateManager::deleteState  [0x081a93d4-0x81a94ff] ===
 81a93d4:	55                   	push   %ebp
 81a93d5:	89 e5                	mov    %esp,%ebp
 81a93d7:	56                   	push   %esi
 81a93d8:	53                   	push   %ebx
 81a93d9:	83 ec 40             	sub    $0x40,%esp
 81a93dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81a93df:	83 c0 04             	add    $0x4,%eax
 81a93e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a93e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a93e9:	89 04 24             	mov    %eax,(%esp)
 81a93ec:	e8 5b c0 f5 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 81a93f1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a93f4:	89 04 24             	mov    %eax,(%esp)
 81a93f7:	e8 56 d2 fd ff       	call   8186652 <_ZN22AradServerStateMessageC1Ev>
 81a93fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a93ff:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81a9402:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a9406:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a940a:	8b 45 08             	mov    0x8(%ebp),%eax
 81a940d:	89 04 24             	mov    %eax,(%esp)
 81a9410:	e8 15 08 00 00       	call   81a9c2a <_ZN4ARAD23Arad_ServerStateManager9findStateE23ENUM_GLOBAL_EFFECT_ARADR22AradServerStateMessage>
 81a9415:	84 c0                	test   %al,%al
 81a9417:	0f 84 d0 00 00 00    	je     81a94ed <_ZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARAD+0x119>
 81a941d:	66 c7 45 d8 00 00    	movw   $0x0,-0x28(%ebp)
 81a9423:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9426:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a942d:	00 
 81a942e:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81a9431:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a9435:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9439:	8b 45 08             	mov    0x8(%ebp),%eax
 81a943c:	89 04 24             	mov    %eax,(%esp)
 81a943f:	e8 d8 05 00 00       	call   81a9a1c <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser>
 81a9444:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9447:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81a944e:	00 
 81a944f:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81a9452:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a9456:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a945a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a9461:	00 
 81a9462:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9465:	89 04 24             	mov    %eax,(%esp)
 81a9468:	e8 8d 06 00 00       	call   81a9afa <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb>
 81a946d:	8b 75 da             	mov    -0x26(%ebp),%esi
 81a9470:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9473:	89 c3                	mov    %eax,%ebx
 81a9475:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a947c:	00 
 81a947d:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 81a9484:	00 
 81a9485:	c7 44 24 04 40 e7 ba 	movl   $0x8bae740,0x4(%esp)
 81a948c:	08 
 81a948d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a9490:	89 04 24             	mov    %eax,(%esp)
 81a9493:	e8 80 62 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81a9498:	89 74 24 10          	mov    %esi,0x10(%esp)
 81a949c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81a94a0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81a94a7:	00 
 81a94a8:	c7 44 24 04 c4 d9 ba 	movl   $0x8bad9c4,0x4(%esp)
 81a94af:	08 
 81a94b0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a94b3:	89 04 24             	mov    %eax,(%esp)
 81a94b6:	e8 cd 62 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81a94bb:	8b 45 08             	mov    0x8(%ebp),%eax
 81a94be:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a94c1:	8d 45 0c             	lea    0xc(%ebp),%eax
 81a94c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a94c8:	89 14 24             	mov    %edx,(%esp)
 81a94cb:	e8 b0 09 00 00       	call   81a9e80 <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEE5eraseERS5_>
 81a94d0:	eb 1b                	jmp    81a94ed <_ZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARAD+0x119>
 81a94d2:	89 d3                	mov    %edx,%ebx
 81a94d4:	89 c6                	mov    %eax,%esi
 81a94d6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a94d9:	89 04 24             	mov    %eax,(%esp)
 81a94dc:	e8 87 bf f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a94e1:	89 f0                	mov    %esi,%eax
 81a94e3:	89 da                	mov    %ebx,%edx
 81a94e5:	89 04 24             	mov    %eax,(%esp)
 81a94e8:	e8 63 a2 93 00       	call   8ae3750 <_Unwind_Resume>
 81a94ed:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a94f0:	89 04 24             	mov    %eax,(%esp)
 81a94f3:	e8 70 bf f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a94f8:	83 c4 40             	add    $0x40,%esp
 81a94fb:	5b                   	pop    %ebx
 81a94fc:	5e                   	pop    %esi
 81a94fd:	5d                   	pop    %ebp
 81a94fe:	c3                   	ret
 81a94ff:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::deleteState @ 0x81a93d4

/* ARAD::Arad_ServerStateManager::deleteState(ENUM_GLOBAL_EFFECT_ARAD) */

void __thiscall
ARAD::Arad_ServerStateManager::deleteState(Arad_ServerStateManager *this,undefined4 param_2)

{
  char cVar1;
  undefined2 local_2c;
  undefined4 local_2a;
  Guard<Mutex> local_20 [4];
  cMyTrace local_1c [16];
  
  Guard<Mutex>::Guard(local_20,(Mutex *)(this + 4));
  AradServerStateMessage::AradServerStateMessage((AradServerStateMessage *)&local_2c);
                    /* try { // try from 081a9410 to 081a94cf has its CatchHandler @ 081a94d2 */
  cVar1 = findState(this,param_2,&local_2c);
  if (cVar1 != '\0') {
    local_2c = 0;
    sendEffectPacket(this,param_2,&local_2c,0);
    saveServerState(this,1,param_2,&local_2c,0);
    cMyTrace::cMyTrace(local_1c,
                       "void ARAD::Arad_ServerStateManager::deleteState(ENUM_GLOBAL_EFFECT_ARAD)",
                       0x38,0);
    cMyTrace::operator()
              (local_1c,"[SERVER_STAT] delete server stat. (category:%d, code:%d, end:%u)",1,param_2
               ,local_2a);
    std::
    map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
    ::erase(this + 0x1c);
  }
  Guard<Mutex>::~Guard(local_20);
  return;
}

```

---

## findState

```asm
// === 081a9c2a ARAD::Arad_ServerStateManager::findState  [0x081a9c2a-0x81a9cc4] ===
 81a9c2a:	55                   	push   %ebp
 81a9c2b:	89 e5                	mov    %esp,%ebp
 81a9c2d:	83 ec 28             	sub    $0x28,%esp
 81a9c30:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9c33:	8d 48 1c             	lea    0x1c(%eax),%ecx
 81a9c36:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9c39:	8d 55 0c             	lea    0xc(%ebp),%edx
 81a9c3c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a9c40:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a9c44:	89 04 24             	mov    %eax,(%esp)
 81a9c47:	e8 88 04 00 00       	call   81aa0d4 <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 81a9c4c:	83 ec 04             	sub    $0x4,%esp
 81a9c4f:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9c52:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a9c55:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a9c58:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a9c5c:	89 04 24             	mov    %eax,(%esp)
 81a9c5f:	e8 5c 02 00 00       	call   81a9ec0 <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 81a9c64:	83 ec 04             	sub    $0x4,%esp
 81a9c67:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a9c6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9c6e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9c71:	89 04 24             	mov    %eax,(%esp)
 81a9c74:	e8 c9 02 00 00       	call   81a9f42 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEneERKS5_>
 81a9c79:	84 c0                	test   %al,%al
 81a9c7b:	74 26                	je     81a9ca3 <_ZN4ARAD23Arad_ServerStateManager9findStateE23ENUM_GLOBAL_EFFECT_ARADR22AradServerStateMessage+0x79>
 81a9c7d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9c80:	89 04 24             	mov    %eax,(%esp)
 81a9c83:	e8 ce 02 00 00       	call   81a9f56 <_ZNKSt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEptEv>
 81a9c88:	8b 55 10             	mov    0x10(%ebp),%edx
 81a9c8b:	8b 48 04             	mov    0x4(%eax),%ecx
 81a9c8e:	89 0a                	mov    %ecx,(%edx)
 81a9c90:	8b 48 08             	mov    0x8(%eax),%ecx
 81a9c93:	89 4a 04             	mov    %ecx,0x4(%edx)
 81a9c96:	8b 40 0c             	mov    0xc(%eax),%eax
 81a9c99:	89 42 08             	mov    %eax,0x8(%edx)
 81a9c9c:	b8 01 00 00 00       	mov    $0x1,%eax
 81a9ca1:	eb 20                	jmp    81a9cc3 <_ZN4ARAD23Arad_ServerStateManager9findStateE23ENUM_GLOBAL_EFFECT_ARADR22AradServerStateMessage+0x99>
 81a9ca3:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 81a9caa:	00 
 81a9cab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a9cb2:	00 
 81a9cb3:	8b 45 10             	mov    0x10(%ebp),%eax
 81a9cb6:	89 04 24             	mov    %eax,(%esp)
 81a9cb9:	e8 02 40 ed ff       	call   807dcc0 <memset@plt>
 81a9cbe:	b8 00 00 00 00       	mov    $0x0,%eax
 81a9cc3:	c9                   	leave
 81a9cc4:	c3                   	ret

```

```c
// ARAD::Arad_ServerStateManager::findState @ 0x81a9c2a

/* ARAD::Arad_ServerStateManager::findState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage&) */

bool __thiscall
ARAD::Arad_ServerStateManager::findState(undefined4 this,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>> local_14 [4];
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  local_10 [12];
  
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::find(local_14);
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    memset(param_3,0,0xc);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
            ::operator->(local_14);
    *param_3 = *(undefined4 *)(iVar2 + 4);
    param_3[1] = *(undefined4 *)(iVar2 + 8);
    param_3[2] = *(undefined4 *)(iVar2 + 0xc);
  }
  return cVar1 != '\0';
}

```

---

## insertState

```asm
// === 081a92ca ARAD::Arad_ServerStateManager::insertState  [0x081a92ca-0x81a936d] ===
 81a92ca:	55                   	push   %ebp
 81a92cb:	89 e5                	mov    %esp,%ebp
 81a92cd:	56                   	push   %esi
 81a92ce:	53                   	push   %ebx
 81a92cf:	83 ec 20             	sub    $0x20,%esp
 81a92d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81a92d5:	83 c0 04             	add    $0x4,%eax
 81a92d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a92dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a92df:	89 04 24             	mov    %eax,(%esp)
 81a92e2:	e8 65 c1 f5 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 81a92e7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81a92ee:	eb 3e                	jmp    81a932e <_ZN4ARAD23Arad_ServerStateManager11insertStateEPN4arad14SigServerStateE+0x64>
 81a92f0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81a92f3:	89 d0                	mov    %edx,%eax
 81a92f5:	c1 e0 02             	shl    $0x2,%eax
 81a92f8:	01 d0                	add    %edx,%eax
 81a92fa:	c1 e0 02             	shl    $0x2,%eax
 81a92fd:	03 45 0c             	add    0xc(%ebp),%eax
 81a9300:	8d 58 0d             	lea    0xd(%eax),%ebx
 81a9303:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81a9306:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 81a9309:	89 d0                	mov    %edx,%eax
 81a930b:	c1 e0 02             	shl    $0x2,%eax
 81a930e:	01 d0                	add    %edx,%eax
 81a9310:	c1 e0 02             	shl    $0x2,%eax
 81a9313:	8b 44 08 09          	mov    0x9(%eax,%ecx,1),%eax
 81a9317:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81a931b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a931f:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9322:	89 04 24             	mov    %eax,(%esp)
 81a9325:	e8 f0 05 00 00       	call   81a991a <_ZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage>
 81a932a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81a932e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9331:	8b 40 01             	mov    0x1(%eax),%eax
 81a9334:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81a9337:	0f 9f c0             	setg   %al
 81a933a:	84 c0                	test   %al,%al
 81a933c:	75 b2                	jne    81a92f0 <_ZN4ARAD23Arad_ServerStateManager11insertStateEPN4arad14SigServerStateE+0x26>
 81a933e:	eb 1b                	jmp    81a935b <_ZN4ARAD23Arad_ServerStateManager11insertStateEPN4arad14SigServerStateE+0x91>
 81a9340:	89 d3                	mov    %edx,%ebx
 81a9342:	89 c6                	mov    %eax,%esi
 81a9344:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9347:	89 04 24             	mov    %eax,(%esp)
 81a934a:	e8 19 c1 f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a934f:	89 f0                	mov    %esi,%eax
 81a9351:	89 da                	mov    %ebx,%edx
 81a9353:	89 04 24             	mov    %eax,(%esp)
 81a9356:	e8 f5 a3 93 00       	call   8ae3750 <_Unwind_Resume>
 81a935b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a935e:	89 04 24             	mov    %eax,(%esp)
 81a9361:	e8 02 c1 f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a9366:	83 c4 20             	add    $0x20,%esp
 81a9369:	5b                   	pop    %ebx
 81a936a:	5e                   	pop    %esi
 81a936b:	5d                   	pop    %ebp
 81a936c:	c3                   	ret
 81a936d:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::insertState @ 0x81a92ca

/* ARAD::Arad_ServerStateManager::insertState(arad::SigServerState*) */

void __thiscall
ARAD::Arad_ServerStateManager::insertState(Arad_ServerStateManager *this,SigServerState *param_1)

{
  Guard<Mutex> local_14 [4];
  int local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(this + 4));
  for (local_10 = 0; local_10 < *(int *)(param_1 + 1); local_10 = local_10 + 1) {
                    /* try { // try from 081a9325 to 081a9329 has its CatchHandler @ 081a9340 */
    insertStateNoSync(this,*(undefined4 *)(param_1 + local_10 * 0x14 + 9),
                      param_1 + local_10 * 0x14 + 0xd);
  }
  Guard<Mutex>::~Guard(local_14);
  return;
}

```

---

## insertStateNoSync

```asm
// === 081a991a ARAD::Arad_ServerStateManager::insertStateNoSync  [0x081a991a-0x81a9a1b] ===
 81a991a:	55                   	push   %ebp
 81a991b:	89 e5                	mov    %esp,%ebp
 81a991d:	56                   	push   %esi
 81a991e:	53                   	push   %ebx
 81a991f:	83 ec 40             	sub    $0x40,%esp
 81a9922:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a9925:	89 04 24             	mov    %eax,(%esp)
 81a9928:	e8 25 cd fd ff       	call   8186652 <_ZN22AradServerStateMessageC1Ev>
 81a992d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9930:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81a9933:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a9937:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a993b:	8b 45 08             	mov    0x8(%ebp),%eax
 81a993e:	89 04 24             	mov    %eax,(%esp)
 81a9941:	e8 e4 02 00 00       	call   81a9c2a <_ZN4ARAD23Arad_ServerStateManager9findStateE23ENUM_GLOBAL_EFFECT_ARADR22AradServerStateMessage>
 81a9946:	84 c0                	test   %al,%al
 81a9948:	0f 85 c5 00 00 00    	jne    81a9a13 <_ZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage+0xf9>
 81a994e:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9951:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a9954:	8d 45 0c             	lea    0xc(%ebp),%eax
 81a9957:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a995b:	89 14 24             	mov    %edx,(%esp)
 81a995e:	e8 77 06 00 00       	call   81a9fda <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 81a9963:	8b 55 10             	mov    0x10(%ebp),%edx
 81a9966:	8b 0a                	mov    (%edx),%ecx
 81a9968:	89 08                	mov    %ecx,(%eax)
 81a996a:	8b 4a 04             	mov    0x4(%edx),%ecx
 81a996d:	89 48 04             	mov    %ecx,0x4(%eax)
 81a9970:	8b 52 08             	mov    0x8(%edx),%edx
 81a9973:	89 50 08             	mov    %edx,0x8(%eax)
 81a9976:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9979:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81a9980:	00 
 81a9981:	8b 55 10             	mov    0x10(%ebp),%edx
 81a9984:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a9988:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a998c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a9993:	00 
 81a9994:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9997:	89 04 24             	mov    %eax,(%esp)
 81a999a:	e8 5b 01 00 00       	call   81a9afa <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb>
 81a999f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a99a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a99a9:	00 
 81a99aa:	8b 55 10             	mov    0x10(%ebp),%edx
 81a99ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a99b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a99b5:	8b 45 08             	mov    0x8(%ebp),%eax
 81a99b8:	89 04 24             	mov    %eax,(%esp)
 81a99bb:	e8 5c 00 00 00       	call   81a9a1c <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser>
 81a99c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81a99c3:	8b 70 02             	mov    0x2(%eax),%esi
 81a99c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a99c9:	89 c3                	mov    %eax,%ebx
 81a99cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a99d2:	00 
 81a99d3:	c7 44 24 08 88 00 00 	movl   $0x88,0x8(%esp)
 81a99da:	00 
 81a99db:	c7 44 24 04 80 e6 ba 	movl   $0x8bae680,0x4(%esp)
 81a99e2:	08 
 81a99e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a99e6:	89 04 24             	mov    %eax,(%esp)
 81a99e9:	e8 2a 5d 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81a99ee:	89 74 24 10          	mov    %esi,0x10(%esp)
 81a99f2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81a99f6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81a99fd:	00 
 81a99fe:	c7 44 24 04 30 da ba 	movl   $0x8bada30,0x4(%esp)
 81a9a05:	08 
 81a9a06:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a9a09:	89 04 24             	mov    %eax,(%esp)
 81a9a0c:	e8 77 5d 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81a9a11:	eb 01                	jmp    81a9a14 <_ZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage+0xfa>
 81a9a13:	90                   	nop
 81a9a14:	83 c4 40             	add    $0x40,%esp
 81a9a17:	5b                   	pop    %ebx
 81a9a18:	5e                   	pop    %esi
 81a9a19:	5d                   	pop    %ebp
 81a9a1a:	c3                   	ret
 81a9a1b:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::insertStateNoSync @ 0x81a991a

/* ARAD::Arad_ServerStateManager::insertStateNoSync(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage
   const&) */

void __thiscall
ARAD::Arad_ServerStateManager::insertStateNoSync
          (Arad_ServerStateManager *this,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  AradServerStateMessage local_28 [12];
  cMyTrace local_1c [16];
  
  AradServerStateMessage::AradServerStateMessage(local_28);
  cVar3 = findState(this,param_2,local_28);
  if (cVar3 == '\0') {
    puVar4 = (undefined4 *)
             std::
             map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
             ::operator[]((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
                           *)(this + 0x1c),(ENUM_GLOBAL_EFFECT_ARAD *)&param_2);
    *puVar4 = *param_3;
    puVar4[1] = param_3[1];
    puVar4[2] = param_3[2];
    saveServerState(this,1,param_2,param_3,1);
    sendEffectPacket(this,param_2,param_3,0);
    uVar2 = param_2;
    uVar1 = *(undefined4 *)((int)param_3 + 2);
    cMyTrace::cMyTrace(local_1c,
                       "void ARAD::Arad_ServerStateManager::insertStateNoSync(ENUM_GLOBAL_EFFECT_ARAD, const AradServerStateMessage&)"
                       ,0x88,0);
    cMyTrace::operator()
              (local_1c,"[SERVER_STAT] apply server stat. (category:%d, code:%d, end:%u)",1,uVar2,
               uVar1);
  }
  return;
}

```

---

## insertState_081a936e

```asm
// === 081a936e ARAD::Arad_ServerStateManager::insertState  [0x081a936e-0x81a93d3] ===
 81a936e:	55                   	push   %ebp
 81a936f:	89 e5                	mov    %esp,%ebp
 81a9371:	56                   	push   %esi
 81a9372:	53                   	push   %ebx
 81a9373:	83 ec 20             	sub    $0x20,%esp
 81a9376:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9379:	83 c0 04             	add    $0x4,%eax
 81a937c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9380:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a9383:	89 04 24             	mov    %eax,(%esp)
 81a9386:	e8 c1 c0 f5 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 81a938b:	8b 45 10             	mov    0x10(%ebp),%eax
 81a938e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a9392:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9395:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9399:	8b 45 08             	mov    0x8(%ebp),%eax
 81a939c:	89 04 24             	mov    %eax,(%esp)
 81a939f:	e8 76 05 00 00       	call   81a991a <_ZN4ARAD23Arad_ServerStateManager17insertStateNoSyncE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage>
 81a93a4:	eb 1b                	jmp    81a93c1 <_ZN4ARAD23Arad_ServerStateManager11insertStateE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage+0x53>
 81a93a6:	89 d3                	mov    %edx,%ebx
 81a93a8:	89 c6                	mov    %eax,%esi
 81a93aa:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a93ad:	89 04 24             	mov    %eax,(%esp)
 81a93b0:	e8 b3 c0 f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a93b5:	89 f0                	mov    %esi,%eax
 81a93b7:	89 da                	mov    %ebx,%edx
 81a93b9:	89 04 24             	mov    %eax,(%esp)
 81a93bc:	e8 8f a3 93 00       	call   8ae3750 <_Unwind_Resume>
 81a93c1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a93c4:	89 04 24             	mov    %eax,(%esp)
 81a93c7:	e8 9c c0 f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a93cc:	83 c4 20             	add    $0x20,%esp
 81a93cf:	5b                   	pop    %ebx
 81a93d0:	5e                   	pop    %esi
 81a93d1:	5d                   	pop    %ebp
 81a93d2:	c3                   	ret
 81a93d3:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::insertState @ 0x81a936e

/* ARAD::Arad_ServerStateManager::insertState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage
   const&) */

void __thiscall
ARAD::Arad_ServerStateManager::insertState
          (Arad_ServerStateManager *this,undefined4 param_2,undefined4 param_3)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
                    /* try { // try from 081a939f to 081a93a3 has its CatchHandler @ 081a93a6 */
  insertStateNoSync(this,param_2,param_3);
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## loadServerState

```asm
// === 081a97f8 ARAD::Arad_ServerStateManager::loadServerState  [0x081a97f8-0x81a98d3] ===
 81a97f8:	55                   	push   %ebp
 81a97f9:	89 e5                	mov    %esp,%ebp
 81a97fb:	56                   	push   %esi
 81a97fc:	53                   	push   %ebx
 81a97fd:	81 ec b0 01 00 00    	sub    $0x1b0,%esp
 81a9803:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 81a9809:	89 04 24             	mov    %eax,(%esp)
 81a980c:	e8 11 cf fd ff       	call   8186722 <_ZN4arad14SigServerStateC1Ev>
 81a9811:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81a9816:	c7 44 24 08 6a 00 00 	movl   $0x6a,0x8(%esp)
 81a981d:	00 
 81a981e:	c7 44 24 04 08 da ba 	movl   $0x8bada08,0x4(%esp)
 81a9825:	08 
 81a9826:	89 04 24             	mov    %eax,(%esp)
 81a9829:	e8 58 62 0e 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81a982e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81a9835:	00 
 81a9836:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a983a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a983d:	89 04 24             	mov    %eax,(%esp)
 81a9840:	e8 e1 f3 f1 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81a9845:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 81a984c:	ff 
 81a984d:	c7 44 24 04 29 00 00 	movl   $0x29,0x4(%esp)
 81a9854:	00 
 81a9855:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9858:	89 04 24             	mov    %eax,(%esp)
 81a985b:	e8 56 df fe ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 81a9860:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9863:	89 04 24             	mov    %eax,(%esp)
 81a9866:	e8 e3 f3 f1 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81a986b:	c7 44 24 08 95 01 00 	movl   $0x195,0x8(%esp)
 81a9872:	00 
 81a9873:	8d 95 5b fe ff ff    	lea    -0x1a5(%ebp),%edx
 81a9879:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a987d:	89 04 24             	mov    %eax,(%esp)
 81a9880:	e8 cd 4d f3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 81a9885:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81a988a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81a988d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a9891:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81a9898:	00 
 81a9899:	89 04 24             	mov    %eax,(%esp)
 81a989c:	e8 3d 77 3c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81a98a1:	eb 1b                	jmp    81a98be <_ZN4ARAD23Arad_ServerStateManager15loadServerStateEv+0xc6>
 81a98a3:	89 d3                	mov    %edx,%ebx
 81a98a5:	89 c6                	mov    %eax,%esi
 81a98a7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a98aa:	89 04 24             	mov    %eax,(%esp)
 81a98ad:	e8 20 30 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81a98b2:	89 f0                	mov    %esi,%eax
 81a98b4:	89 da                	mov    %ebx,%edx
 81a98b6:	89 04 24             	mov    %eax,(%esp)
 81a98b9:	e8 92 9e 93 00       	call   8ae3750 <_Unwind_Resume>
 81a98be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a98c1:	89 04 24             	mov    %eax,(%esp)
 81a98c4:	e8 09 30 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81a98c9:	81 c4 b0 01 00 00    	add    $0x1b0,%esp
 81a98cf:	5b                   	pop    %ebx
 81a98d0:	5e                   	pop    %esi
 81a98d1:	5d                   	pop    %ebp
 81a98d2:	c3                   	ret
 81a98d3:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::loadServerState @ 0x81a97f8

/* ARAD::Arad_ServerStateManager::loadServerState() */

void ARAD::Arad_ServerStateManager::loadServerState(void)

{
  Stream *pSVar1;
  CStreamGuard *this;
  SigServerState local_1a9 [405];
  CStreamGuard local_14 [8];
  
  arad::SigServerState::SigServerState(local_1a9);
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_ServerStateManager.cpp",
                               0x6a);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
                    /* try { // try from 081a985b to 081a98a0 has its CatchHandler @ 081a98a3 */
  DISPATCHER::make_internal_stream_jpn(local_14,0x29,0xffffffff);
  this = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(this,local_1a9,0x195);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## saveServerState

```asm
// === 081a9afa ARAD::Arad_ServerStateManager::saveServerState  [0x081a9afa-0x81a9c29] ===
 81a9afa:	55                   	push   %ebp
 81a9afb:	89 e5                	mov    %esp,%ebp
 81a9afd:	56                   	push   %esi
 81a9afe:	53                   	push   %ebx
 81a9aff:	81 ec d0 01 00 00    	sub    $0x1d0,%esp
 81a9b05:	8b 45 18             	mov    0x18(%ebp),%eax
 81a9b08:	88 85 54 fe ff ff    	mov    %al,-0x1ac(%ebp)
 81a9b0e:	e8 6e 26 f2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81a9b13:	89 04 24             	mov    %eax,(%esp)
 81a9b16:	e8 af 0f fa ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 81a9b1b:	83 f8 0a             	cmp    $0xa,%eax
 81a9b1e:	0f 95 c0             	setne  %al
 81a9b21:	84 c0                	test   %al,%al
 81a9b23:	0f 85 f6 00 00 00    	jne    81a9c1f <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb+0x125>
 81a9b29:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 81a9b2f:	89 04 24             	mov    %eax,(%esp)
 81a9b32:	e8 eb cb fd ff       	call   8186722 <_ZN4arad14SigServerStateC1Ev>
 81a9b37:	8b 4d 10             	mov    0x10(%ebp),%ecx
 81a9b3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81a9b3d:	0f b6 85 54 fe ff ff 	movzbl -0x1ac(%ebp),%eax
 81a9b44:	8b 5d 14             	mov    0x14(%ebp),%ebx
 81a9b47:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81a9b4b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81a9b4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a9b53:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9b57:	8d 85 5b fe ff ff    	lea    -0x1a5(%ebp),%eax
 81a9b5d:	89 04 24             	mov    %eax,(%esp)
 81a9b60:	e8 bd 01 00 00       	call   81a9d22 <_ZN4arad14SigServerState3setEbiiRK22AradServerStateMessage>
 81a9b65:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81a9b6a:	c7 44 24 08 b2 00 00 	movl   $0xb2,0x8(%esp)
 81a9b71:	00 
 81a9b72:	c7 44 24 04 08 da ba 	movl   $0x8bada08,0x4(%esp)
 81a9b79:	08 
 81a9b7a:	89 04 24             	mov    %eax,(%esp)
 81a9b7d:	e8 04 5f 0e 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81a9b82:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81a9b89:	00 
 81a9b8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9b8e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9b91:	89 04 24             	mov    %eax,(%esp)
 81a9b94:	e8 8d f0 f1 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81a9b99:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 81a9ba0:	ff 
 81a9ba1:	c7 44 24 04 2a 00 00 	movl   $0x2a,0x4(%esp)
 81a9ba8:	00 
 81a9ba9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9bac:	89 04 24             	mov    %eax,(%esp)
 81a9baf:	e8 02 dc fe ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 81a9bb4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9bb7:	89 04 24             	mov    %eax,(%esp)
 81a9bba:	e8 8f f0 f1 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81a9bbf:	c7 44 24 08 95 01 00 	movl   $0x195,0x8(%esp)
 81a9bc6:	00 
 81a9bc7:	8d 95 5b fe ff ff    	lea    -0x1a5(%ebp),%edx
 81a9bcd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a9bd1:	89 04 24             	mov    %eax,(%esp)
 81a9bd4:	e8 79 4a f3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 81a9bd9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81a9bde:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81a9be1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a9be5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81a9bec:	00 
 81a9bed:	89 04 24             	mov    %eax,(%esp)
 81a9bf0:	e8 e9 73 3c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81a9bf5:	eb 1b                	jmp    81a9c12 <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb+0x118>
 81a9bf7:	89 d3                	mov    %edx,%ebx
 81a9bf9:	89 c6                	mov    %eax,%esi
 81a9bfb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9bfe:	89 04 24             	mov    %eax,(%esp)
 81a9c01:	e8 cc 2c 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81a9c06:	89 f0                	mov    %esi,%eax
 81a9c08:	89 da                	mov    %ebx,%edx
 81a9c0a:	89 04 24             	mov    %eax,(%esp)
 81a9c0d:	e8 3e 9b 93 00       	call   8ae3750 <_Unwind_Resume>
 81a9c12:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9c15:	89 04 24             	mov    %eax,(%esp)
 81a9c18:	e8 b5 2c 47 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81a9c1d:	eb 01                	jmp    81a9c20 <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb+0x126>
 81a9c1f:	90                   	nop
 81a9c20:	81 c4 d0 01 00 00    	add    $0x1d0,%esp
 81a9c26:	5b                   	pop    %ebx
 81a9c27:	5e                   	pop    %esi
 81a9c28:	5d                   	pop    %ebp
 81a9c29:	c3                   	ret

```

```c
// ARAD::Arad_ServerStateManager::saveServerState @ 0x81a9afa

/* ARAD::Arad_ServerStateManager::saveServerState(ENUM_NOTIFY_EVENT_CATEGORY,
   ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, bool) */

void __thiscall
ARAD::Arad_ServerStateManager::saveServerState
          (undefined4 this,int param_2,int param_3,AradServerStateMessage *param_4,bool param_5)

{
  CEnvironment *this_00;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *this_01;
  SigServerState local_1a9 [405];
  CStreamGuard local_14 [8];
  
  this_00 = (CEnvironment *)G_CEnvironment();
  iVar1 = CEnvironment::get_channel_no(this_00);
  if (iVar1 == 10) {
    arad::SigServerState::SigServerState(local_1a9);
    arad::SigServerState::set(local_1a9,param_5,param_2,param_3,param_4);
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_ServerStateManager.cpp",
                                 0xb2);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
                    /* try { // try from 081a9baf to 081a9bf4 has its CatchHandler @ 081a9bf7 */
    DISPATCHER::make_internal_stream_jpn(local_14,0x2a,0xffffffff);
    this_01 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(this_01,local_1a9,0x195);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}

```

---

## sendEffectPacket

```asm
// === 081a9a1c ARAD::Arad_ServerStateManager::sendEffectPacket  [0x081a9a1c-0x81a9af9] ===
 81a9a1c:	55                   	push   %ebp
 81a9a1d:	89 e5                	mov    %esp,%ebp
 81a9a1f:	56                   	push   %esi
 81a9a20:	53                   	push   %ebx
 81a9a21:	83 ec 20             	sub    $0x20,%esp
 81a9a24:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9a27:	89 04 24             	mov    %eax,(%esp)
 81a9a2a:	e8 1d 43 3e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81a9a2f:	c7 44 24 08 1a 02 00 	movl   $0x21a,0x8(%esp)
 81a9a36:	00 
 81a9a37:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a9a3e:	00 
 81a9a3f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9a42:	89 04 24             	mov    %eax,(%esp)
 81a9a45:	e8 b2 1e f2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81a9a4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a9a51:	00 
 81a9a52:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9a55:	89 04 24             	mov    %eax,(%esp)
 81a9a58:	e8 df 1e f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81a9a5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9a60:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9a64:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9a67:	89 04 24             	mov    %eax,(%esp)
 81a9a6a:	e8 cd 1e f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81a9a6f:	8b 45 10             	mov    0x10(%ebp),%eax
 81a9a72:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 81a9a79:	00 
 81a9a7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9a7e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9a81:	89 04 24             	mov    %eax,(%esp)
 81a9a84:	e8 7f 44 f7 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 81a9a89:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81a9a90:	00 
 81a9a91:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9a94:	89 04 24             	mov    %eax,(%esp)
 81a9a97:	e8 bc 1e f2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81a9a9c:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 81a9aa0:	75 16                	jne    81a9ab8 <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser+0x9c>
 81a9aa2:	e8 00 09 f3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81a9aa7:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81a9aaa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a9aae:	89 04 24             	mov    %eax,(%esp)
 81a9ab1:	e8 5e f1 51 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81a9ab6:	eb 2f                	jmp    81a9ae7 <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser+0xcb>
 81a9ab8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9abb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9abf:	8b 45 14             	mov    0x14(%ebp),%eax
 81a9ac2:	89 04 24             	mov    %eax,(%esp)
 81a9ac5:	e8 f0 ea 49 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81a9aca:	eb 1b                	jmp    81a9ae7 <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser+0xcb>
 81a9acc:	89 d3                	mov    %edx,%ebx
 81a9ace:	89 c6                	mov    %eax,%esi
 81a9ad0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9ad3:	89 04 24             	mov    %eax,(%esp)
 81a9ad6:	e8 a5 43 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81a9adb:	89 f0                	mov    %esi,%eax
 81a9add:	89 da                	mov    %ebx,%edx
 81a9adf:	89 04 24             	mov    %eax,(%esp)
 81a9ae2:	e8 69 9c 93 00       	call   8ae3750 <_Unwind_Resume>
 81a9ae7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9aea:	89 04 24             	mov    %eax,(%esp)
 81a9aed:	e8 8e 43 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81a9af2:	83 c4 20             	add    $0x20,%esp
 81a9af5:	5b                   	pop    %ebx
 81a9af6:	5e                   	pop    %esi
 81a9af7:	5d                   	pop    %ebp
 81a9af8:	c3                   	ret
 81a9af9:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::sendEffectPacket @ 0x81a9a1c

/* ARAD::Arad_ServerStateManager::sendEffectPacket(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage
   const&, CUser*) */

void __thiscall
ARAD::Arad_ServerStateManager::sendEffectPacket
          (undefined4 this,int param_2,char *param_3,CUser *param_4)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081a9a45 to 081a9ac9 has its CatchHandler @ 081a9acc */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x21a);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_18,param_3,0xc);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  if (param_4 == (CUser *)0x0) {
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_18);
  }
  else {
    CUser::Send(param_4,local_18);
  }
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## sendState

```asm
// === 081a9500 ARAD::Arad_ServerStateManager::sendState  [0x081a9500-0x81a95db] ===
 81a9500:	55                   	push   %ebp
 81a9501:	89 e5                	mov    %esp,%ebp
 81a9503:	56                   	push   %esi
 81a9504:	53                   	push   %ebx
 81a9505:	83 ec 30             	sub    $0x30,%esp
 81a9508:	8b 45 08             	mov    0x8(%ebp),%eax
 81a950b:	83 c0 04             	add    $0x4,%eax
 81a950e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9512:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a9515:	89 04 24             	mov    %eax,(%esp)
 81a9518:	e8 2f bf f5 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 81a951d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a9520:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a9524:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9527:	89 04 24             	mov    %eax,(%esp)
 81a952a:	e8 7d 08 00 00       	call   81a9dac <_ZN4ARAD11SSendEffectC1EP5CUser>
 81a952f:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9532:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a9535:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a9538:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a953c:	89 04 24             	mov    %eax,(%esp)
 81a953f:	e8 7c 09 00 00       	call   81a9ec0 <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 81a9544:	83 ec 04             	sub    $0x4,%esp
 81a9547:	8b 45 08             	mov    0x8(%ebp),%eax
 81a954a:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a954d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a9550:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a9554:	89 04 24             	mov    %eax,(%esp)
 81a9557:	e8 3e 09 00 00       	call   81a9e9a <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 81a955c:	83 ec 04             	sub    $0x4,%esp
 81a955f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a9562:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81a9565:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a9569:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81a956c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a9570:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81a9573:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a9577:	89 04 24             	mov    %eax,(%esp)
 81a957a:	e8 66 09 00 00       	call   81a9ee5 <_ZSt8for_eachISt17_Rb_tree_iteratorISt4pairIK23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageEEN4ARAD11SSendEffectEET0_T_SA_S9_>
 81a957f:	83 ec 04             	sub    $0x4,%esp
 81a9582:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a9585:	89 04 24             	mov    %eax,(%esp)
 81a9588:	e8 2d 08 00 00       	call   81a9dba <_ZN4ARAD11SSendEffectD1Ev>
 81a958d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a9590:	89 04 24             	mov    %eax,(%esp)
 81a9593:	e8 22 08 00 00       	call   81a9dba <_ZN4ARAD11SSendEffectD1Ev>
 81a9598:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a959b:	89 04 24             	mov    %eax,(%esp)
 81a959e:	e8 c5 be f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a95a3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81a95a6:	83 c4 00             	add    $0x0,%esp
 81a95a9:	5b                   	pop    %ebx
 81a95aa:	5e                   	pop    %esi
 81a95ab:	5d                   	pop    %ebp
 81a95ac:	c3                   	ret
 81a95ad:	89 d3                	mov    %edx,%ebx
 81a95af:	89 c6                	mov    %eax,%esi
 81a95b1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a95b4:	89 04 24             	mov    %eax,(%esp)
 81a95b7:	e8 fe 07 00 00       	call   81a9dba <_ZN4ARAD11SSendEffectD1Ev>
 81a95bc:	89 f0                	mov    %esi,%eax
 81a95be:	89 da                	mov    %ebx,%edx
 81a95c0:	89 d3                	mov    %edx,%ebx
 81a95c2:	89 c6                	mov    %eax,%esi
 81a95c4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a95c7:	89 04 24             	mov    %eax,(%esp)
 81a95ca:	e8 99 be f5 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 81a95cf:	89 f0                	mov    %esi,%eax
 81a95d1:	89 da                	mov    %ebx,%edx
 81a95d3:	89 04 24             	mov    %eax,(%esp)
 81a95d6:	e8 75 a1 93 00       	call   8ae3750 <_Unwind_Resume>
 81a95db:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::sendState @ 0x81a9500

/* ARAD::Arad_ServerStateManager::sendState(CUser*) */

void __thiscall
ARAD::Arad_ServerStateManager::sendState(Arad_ServerStateManager *this,CUser *param_1)

{
  Guard<Mutex> local_20 [4];
  SSendEffect local_1c [4];
  SSendEffect local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  Guard<Mutex>::Guard(local_20,(Mutex *)(this + 4));
  SSendEffect::SSendEffect(local_18,param_1);
                    /* try { // try from 081a953f to 081a957e has its CatchHandler @ 081a95ad */
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::end((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
         *)&local_14);
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::begin((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>,ARAD::SSendEffect>
            (local_1c,local_10,local_14,local_18);
  SSendEffect::~SSendEffect(local_1c);
  SSendEffect::~SSendEffect(local_18);
  Guard<Mutex>::~Guard(local_20);
  return;
}

```

---

## ~Arad_ServerStateManager

```asm
// === 081a927e ARAD::Arad_ServerStateManager::~Arad_ServerStateManager  [0x081a927e-0x81a92c9] ===
 81a927e:	55                   	push   %ebp
 81a927f:	89 e5                	mov    %esp,%ebp
 81a9281:	56                   	push   %esi
 81a9282:	53                   	push   %ebx
 81a9283:	83 ec 10             	sub    $0x10,%esp
 81a9286:	8b 45 08             	mov    0x8(%ebp),%eax
 81a9289:	83 c0 1c             	add    $0x1c,%eax
 81a928c:	89 04 24             	mov    %eax,(%esp)
 81a928f:	e8 5e 0b 00 00       	call   81a9df2 <_ZNSt3mapI23ENUM_GLOBAL_EFFECT_ARAD22AradServerStateMessageSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 81a9294:	eb 1e                	jmp    81a92b4 <_ZN4ARAD23Arad_ServerStateManagerD1Ev+0x36>
 81a9296:	89 d3                	mov    %edx,%ebx
 81a9298:	89 c6                	mov    %eax,%esi
 81a929a:	8b 45 08             	mov    0x8(%ebp),%eax
 81a929d:	83 c0 04             	add    $0x4,%eax
 81a92a0:	89 04 24             	mov    %eax,(%esp)
 81a92a3:	e8 86 21 f2 ff       	call   80cb42e <_ZN5MutexD1Ev>
 81a92a8:	89 f0                	mov    %esi,%eax
 81a92aa:	89 da                	mov    %ebx,%edx
 81a92ac:	89 04 24             	mov    %eax,(%esp)
 81a92af:	e8 9c a4 93 00       	call   8ae3750 <_Unwind_Resume>
 81a92b4:	8b 45 08             	mov    0x8(%ebp),%eax
 81a92b7:	83 c0 04             	add    $0x4,%eax
 81a92ba:	89 04 24             	mov    %eax,(%esp)
 81a92bd:	e8 6c 21 f2 ff       	call   80cb42e <_ZN5MutexD1Ev>
 81a92c2:	83 c4 10             	add    $0x10,%esp
 81a92c5:	5b                   	pop    %ebx
 81a92c6:	5e                   	pop    %esi
 81a92c7:	5d                   	pop    %ebp
 81a92c8:	c3                   	ret
 81a92c9:	90                   	nop

```

```c
// ARAD::Arad_ServerStateManager::~Arad_ServerStateManager @ 0x81a927e

/* ARAD::Arad_ServerStateManager::~Arad_ServerStateManager() */

void __thiscall
ARAD::Arad_ServerStateManager::~Arad_ServerStateManager(Arad_ServerStateManager *this)

{
                    /* try { // try from 081a928f to 081a9293 has its CatchHandler @ 081a9296 */
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::~map((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
          *)(this + 0x1c));
  Mutex::~Mutex((Mutex *)(this + 4));
  return;
}

```

