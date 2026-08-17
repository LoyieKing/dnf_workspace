# CPCRoomFatigueEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CPCRoomFatigueEvent

```asm
// === 082675c0 CPCRoomFatigueEvent::CPCRoomFatigueEvent  [0x082675c0-0x82675db] ===
 82675c0:	55                   	push   %ebp
 82675c1:	89 e5                	mov    %esp,%ebp
 82675c3:	83 ec 18             	sub    $0x18,%esp
 82675c6:	8b 45 08             	mov    0x8(%ebp),%eax
 82675c9:	89 04 24             	mov    %eax,(%esp)
 82675cc:	e8 5b 38 ea ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 82675d1:	8b 45 08             	mov    0x8(%ebp),%eax
 82675d4:	c7 00 28 fc be 08    	movl   $0x8befc28,(%eax)
 82675da:	c9                   	leave
 82675db:	c3                   	ret

```

```c
// CPCRoomFatigueEvent::CPCRoomFatigueEvent @ 0x82675c0

/* CPCRoomFatigueEvent::CPCRoomFatigueEvent() */

void __thiscall CPCRoomFatigueEvent::CPCRoomFatigueEvent(CPCRoomFatigueEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPCRoomFatigueEvent_08befc28;
  return;
}

```

---

## EndEvent

```asm
// === 082676ce CPCRoomFatigueEvent::EndEvent  [0x082676ce-0x826771f] ===
 82676ce:	55                   	push   %ebp
 82676cf:	89 e5                	mov    %esp,%ebp
 82676d1:	83 ec 28             	sub    $0x28,%esp
 82676d4:	8b 45 08             	mov    0x8(%ebp),%eax
 82676d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82676de:	00 
 82676df:	89 04 24             	mov    %eax,(%esp)
 82676e2:	e8 fb 0d e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 82676e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82676ee:	00 
 82676ef:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 82676f6:	00 
 82676f7:	c7 44 24 04 f0 fb be 	movl   $0x8befbf0,0x4(%esp)
 82676fe:	08 
 82676ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8267702:	89 04 24             	mov    %eax,(%esp)
 8267705:	e8 0e 80 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826770a:	c7 44 24 04 5d f0 be 	movl   $0x8bef05d,0x4(%esp)
 8267711:	08 
 8267712:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8267715:	89 04 24             	mov    %eax,(%esp)
 8267718:	e8 6b 80 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826771d:	c9                   	leave
 826771e:	c3                   	ret
 826771f:	90                   	nop

```

```c
// CPCRoomFatigueEvent::EndEvent @ 0x82676ce

/* CPCRoomFatigueEvent::EndEvent() */

void __thiscall CPCRoomFatigueEvent::EndEvent(CPCRoomFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x21,0);
  cMyTrace::operator()(local_1c,"PC Room Fatigue Event End!");
  return;
}

```

---

## IsEventing

```asm
// === 08267720 CPCRoomFatigueEvent::IsEventing  [0x08267720-0x8267784] ===
 8267720:	55                   	push   %ebp
 8267721:	89 e5                	mov    %esp,%ebp
 8267723:	83 ec 18             	sub    $0x18,%esp
 8267726:	8b 45 08             	mov    0x8(%ebp),%eax
 8267729:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267730:	00 
 8267731:	89 04 24             	mov    %eax,(%esp)
 8267734:	e8 c1 0d e6 ff       	call   80c84fa <_ZNK10CEventBase10IsEventingEP5CUser>
 8267739:	83 f0 01             	xor    $0x1,%eax
 826773c:	84 c0                	test   %al,%al
 826773e:	75 06                	jne    8267746 <_ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser+0x26>
 8267740:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8267744:	75 07                	jne    826774d <_ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser+0x2d>
 8267746:	b8 01 00 00 00       	mov    $0x1,%eax
 826774b:	eb 05                	jmp    8267752 <_ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser+0x32>
 826774d:	b8 00 00 00 00       	mov    $0x0,%eax
 8267752:	84 c0                	test   %al,%al
 8267754:	74 07                	je     826775d <_ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser+0x3d>
 8267756:	b8 00 00 00 00       	mov    $0x0,%eax
 826775b:	eb 26                	jmp    8267783 <_ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser+0x63>
 826775d:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8267764:	00 
 8267765:	8b 45 0c             	mov    0xc(%ebp),%eax
 8267768:	89 04 24             	mov    %eax,(%esp)
 826776b:	e8 9e e8 e7 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 8267770:	83 f0 01             	xor    $0x1,%eax
 8267773:	84 c0                	test   %al,%al
 8267775:	74 07                	je     826777e <_ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser+0x5e>
 8267777:	b8 00 00 00 00       	mov    $0x0,%eax
 826777c:	eb 05                	jmp    8267783 <_ZNK19CPCRoomFatigueEvent10IsEventingEP5CUser+0x63>
 826777e:	b8 01 00 00 00       	mov    $0x1,%eax
 8267783:	c9                   	leave
 8267784:	c3                   	ret

```

```c
// CPCRoomFatigueEvent::IsEventing @ 0x8267720

/* CPCRoomFatigueEvent::IsEventing(CUser*) const */

undefined4 __thiscall CPCRoomFatigueEvent::IsEventing(CPCRoomFatigueEvent *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = CEventBase::IsEventing((CUser *)this);
  if ((cVar2 == '\x01') && (param_1 != (CUser *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = CUser::isAffectedPremium(param_1,0xc);
    if (cVar2 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## StartEvent

```asm
// === 0826762a CPCRoomFatigueEvent::StartEvent  [0x0826762a-0x826767b] ===
 826762a:	55                   	push   %ebp
 826762b:	89 e5                	mov    %esp,%ebp
 826762d:	83 ec 28             	sub    $0x28,%esp
 8267630:	8b 45 08             	mov    0x8(%ebp),%eax
 8267633:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826763a:	00 
 826763b:	89 04 24             	mov    %eax,(%esp)
 826763e:	e8 9f 0e e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8267643:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826764a:	00 
 826764b:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8267652:	00 
 8267653:	c7 44 24 04 04 fc be 	movl   $0x8befc04,0x4(%esp)
 826765a:	08 
 826765b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826765e:	89 04 24             	mov    %eax,(%esp)
 8267661:	e8 b2 80 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8267666:	c7 44 24 04 40 f0 be 	movl   $0x8bef040,0x4(%esp)
 826766d:	08 
 826766e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8267671:	89 04 24             	mov    %eax,(%esp)
 8267674:	e8 0f 81 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8267679:	c9                   	leave
 826767a:	c3                   	ret
 826767b:	90                   	nop

```

```c
// CPCRoomFatigueEvent::StartEvent @ 0x826762a

/* CPCRoomFatigueEvent::StartEvent() */

void __thiscall CPCRoomFatigueEvent::StartEvent(CPCRoomFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"PC Room Fatigue Event Start!");
  return;
}

```

---

## StartEvent_0826767c

```asm
// === 0826767c CPCRoomFatigueEvent::StartEvent  [0x0826767c-0x82676cd] ===
 826767c:	55                   	push   %ebp
 826767d:	89 e5                	mov    %esp,%ebp
 826767f:	83 ec 28             	sub    $0x28,%esp
 8267682:	8b 45 08             	mov    0x8(%ebp),%eax
 8267685:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826768c:	00 
 826768d:	89 04 24             	mov    %eax,(%esp)
 8267690:	e8 4d 0e e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8267695:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826769c:	00 
 826769d:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 82676a4:	00 
 82676a5:	c7 44 24 04 f9 fb be 	movl   $0x8befbf9,0x4(%esp)
 82676ac:	08 
 82676ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82676b0:	89 04 24             	mov    %eax,(%esp)
 82676b3:	e8 60 80 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82676b8:	c7 44 24 04 40 f0 be 	movl   $0x8bef040,0x4(%esp)
 82676bf:	08 
 82676c0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82676c3:	89 04 24             	mov    %eax,(%esp)
 82676c6:	e8 bd 80 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82676cb:	c9                   	leave
 82676cc:	c3                   	ret
 82676cd:	90                   	nop

```

```c
// CPCRoomFatigueEvent::StartEvent @ 0x826767c

/* CPCRoomFatigueEvent::StartEvent(Word_Param) */

void CPCRoomFatigueEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1a,0);
  cMyTrace::operator()(local_1c,"PC Room Fatigue Event Start!");
  return;
}

```

---

## ~CPCRoomFatigueEvent

```asm
// === 082675dc CPCRoomFatigueEvent::~CPCRoomFatigueEvent  [0x082675dc-0x826760b] ===
 82675dc:	55                   	push   %ebp
 82675dd:	89 e5                	mov    %esp,%ebp
 82675df:	83 ec 18             	sub    $0x18,%esp
 82675e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82675e5:	c7 00 28 fc be 08    	movl   $0x8befc28,(%eax)
 82675eb:	8b 45 08             	mov    0x8(%ebp),%eax
 82675ee:	89 04 24             	mov    %eax,(%esp)
 82675f1:	e8 5c 38 ea ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 82675f6:	b8 00 00 00 00       	mov    $0x0,%eax
 82675fb:	84 c0                	test   %al,%al
 82675fd:	74 0b                	je     826760a <_ZN19CPCRoomFatigueEventD1Ev+0x2e>
 82675ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8267602:	89 04 24             	mov    %eax,(%esp)
 8267605:	e8 e6 ce 4b 00       	call   87244f0 <_ZdlPv>
 826760a:	c9                   	leave
 826760b:	c3                   	ret

```

```c
// CPCRoomFatigueEvent::~CPCRoomFatigueEvent @ 0x82675dc

/* WARNING: Removing unreachable block (ram,0x082675ff) */
/* CPCRoomFatigueEvent::~CPCRoomFatigueEvent() */

void __thiscall CPCRoomFatigueEvent::~CPCRoomFatigueEvent(CPCRoomFatigueEvent *this)

{
  *(undefined ***)this = &PTR__CPCRoomFatigueEvent_08befc28;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CPCRoomFatigueEvent_0826760c

```asm
// === 0826760c CPCRoomFatigueEvent::~CPCRoomFatigueEvent  [0x0826760c-0x8267629] ===
 826760c:	55                   	push   %ebp
 826760d:	89 e5                	mov    %esp,%ebp
 826760f:	83 ec 18             	sub    $0x18,%esp
 8267612:	8b 45 08             	mov    0x8(%ebp),%eax
 8267615:	89 04 24             	mov    %eax,(%esp)
 8267618:	e8 bf ff ff ff       	call   82675dc <_ZN19CPCRoomFatigueEventD1Ev>
 826761d:	8b 45 08             	mov    0x8(%ebp),%eax
 8267620:	89 04 24             	mov    %eax,(%esp)
 8267623:	e8 c8 ce 4b 00       	call   87244f0 <_ZdlPv>
 8267628:	c9                   	leave
 8267629:	c3                   	ret

```

```c
// CPCRoomFatigueEvent::~CPCRoomFatigueEvent @ 0x826760c

/* CPCRoomFatigueEvent::~CPCRoomFatigueEvent() */

void __thiscall CPCRoomFatigueEvent::~CPCRoomFatigueEvent(CPCRoomFatigueEvent *this)

{
  ~CPCRoomFatigueEvent(this);
  operator_delete(this);
  return;
}

```

