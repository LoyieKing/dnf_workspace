# CPcRoomCardBlankItemEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CPcRoomCardBlankItemEvent

```asm
// === 0826743c CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent  [0x0826743c-0x8267457] ===
 826743c:	55                   	push   %ebp
 826743d:	89 e5                	mov    %esp,%ebp
 826743f:	83 ec 18             	sub    $0x18,%esp
 8267442:	8b 45 08             	mov    0x8(%ebp),%eax
 8267445:	89 04 24             	mov    %eax,(%esp)
 8267448:	e8 df 39 ea ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 826744d:	8b 45 08             	mov    0x8(%ebp),%eax
 8267450:	c7 00 c8 ef be 08    	movl   $0x8beefc8,(%eax)
 8267456:	c9                   	leave
 8267457:	c3                   	ret

```

```c
// CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent @ 0x826743c

/* CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent() */

void __thiscall
CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent(CPcRoomCardBlankItemEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPcRoomCardBlankItemEvent_08beefc8;
  return;
}

```

---

## EndEvent

```asm
// === 082674fe CPcRoomCardBlankItemEvent::EndEvent  [0x082674fe-0x826754e] ===
 82674fe:	55                   	push   %ebp
 82674ff:	89 e5                	mov    %esp,%ebp
 8267501:	83 ec 28             	sub    $0x28,%esp
 8267504:	8b 45 08             	mov    0x8(%ebp),%eax
 8267507:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826750e:	00 
 826750f:	89 04 24             	mov    %eax,(%esp)
 8267512:	e8 cb 0f e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8267517:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826751e:	00 
 826751f:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8267526:	00 
 8267527:	c7 44 24 04 90 ef be 	movl   $0x8beef90,0x4(%esp)
 826752e:	08 
 826752f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8267532:	89 04 24             	mov    %eax,(%esp)
 8267535:	e8 de 81 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826753a:	c7 44 24 04 e4 e8 be 	movl   $0x8bee8e4,0x4(%esp)
 8267541:	08 
 8267542:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8267545:	89 04 24             	mov    %eax,(%esp)
 8267548:	e8 3b 82 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826754d:	c9                   	leave
 826754e:	c3                   	ret

```

```c
// CPcRoomCardBlankItemEvent::EndEvent @ 0x82674fe

/* CPcRoomCardBlankItemEvent::EndEvent() */

void __thiscall CPcRoomCardBlankItemEvent::EndEvent(CPcRoomCardBlankItemEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Pc Room Card Blank Item Event End");
  return;
}

```

---

## StartEvent

```asm
// === 082674a6 CPcRoomCardBlankItemEvent::StartEvent  [0x082674a6-0x82674ab] ===
 82674a6:	55                   	push   %ebp
 82674a7:	89 e5                	mov    %esp,%ebp
 82674a9:	5d                   	pop    %ebp
 82674aa:	c3                   	ret
 82674ab:	90                   	nop

```

```c
// CPcRoomCardBlankItemEvent::StartEvent @ 0x82674a6

/* CPcRoomCardBlankItemEvent::StartEvent() */

void CPcRoomCardBlankItemEvent::StartEvent(void)

{
  return;
}

```

---

## StartEvent_082674ac

```asm
// === 082674ac CPcRoomCardBlankItemEvent::StartEvent  [0x082674ac-0x82674fd] ===
 82674ac:	55                   	push   %ebp
 82674ad:	89 e5                	mov    %esp,%ebp
 82674af:	83 ec 28             	sub    $0x28,%esp
 82674b2:	8b 45 08             	mov    0x8(%ebp),%eax
 82674b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82674bc:	00 
 82674bd:	89 04 24             	mov    %eax,(%esp)
 82674c0:	e8 1d 10 e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 82674c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82674cc:	00 
 82674cd:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 82674d4:	00 
 82674d5:	c7 44 24 04 99 ef be 	movl   $0x8beef99,0x4(%esp)
 82674dc:	08 
 82674dd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82674e0:	89 04 24             	mov    %eax,(%esp)
 82674e3:	e8 30 82 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82674e8:	c7 44 24 04 c0 e8 be 	movl   $0x8bee8c0,0x4(%esp)
 82674ef:	08 
 82674f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82674f3:	89 04 24             	mov    %eax,(%esp)
 82674f6:	e8 8d 82 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82674fb:	c9                   	leave
 82674fc:	c3                   	ret
 82674fd:	90                   	nop

```

```c
// CPcRoomCardBlankItemEvent::StartEvent @ 0x82674ac

/* CPcRoomCardBlankItemEvent::StartEvent(Word_Param) */

void CPcRoomCardBlankItemEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"Pc Room Card Blank Item Event Start");
  return;
}

```

---

## ~CPcRoomCardBlankItemEvent

```asm
// === 08267458 CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent  [0x08267458-0x8267487] ===
 8267458:	55                   	push   %ebp
 8267459:	89 e5                	mov    %esp,%ebp
 826745b:	83 ec 18             	sub    $0x18,%esp
 826745e:	8b 45 08             	mov    0x8(%ebp),%eax
 8267461:	c7 00 c8 ef be 08    	movl   $0x8beefc8,(%eax)
 8267467:	8b 45 08             	mov    0x8(%ebp),%eax
 826746a:	89 04 24             	mov    %eax,(%esp)
 826746d:	e8 e0 39 ea ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8267472:	b8 00 00 00 00       	mov    $0x0,%eax
 8267477:	84 c0                	test   %al,%al
 8267479:	74 0b                	je     8267486 <_ZN25CPcRoomCardBlankItemEventD1Ev+0x2e>
 826747b:	8b 45 08             	mov    0x8(%ebp),%eax
 826747e:	89 04 24             	mov    %eax,(%esp)
 8267481:	e8 6a d0 4b 00       	call   87244f0 <_ZdlPv>
 8267486:	c9                   	leave
 8267487:	c3                   	ret

```

```c
// CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent @ 0x8267458

/* WARNING: Removing unreachable block (ram,0x0826747b) */
/* CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent() */

void __thiscall
CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent(CPcRoomCardBlankItemEvent *this)

{
  *(undefined ***)this = &PTR__CPcRoomCardBlankItemEvent_08beefc8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CPcRoomCardBlankItemEvent_08267488

```asm
// === 08267488 CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent  [0x08267488-0x82674a5] ===
 8267488:	55                   	push   %ebp
 8267489:	89 e5                	mov    %esp,%ebp
 826748b:	83 ec 18             	sub    $0x18,%esp
 826748e:	8b 45 08             	mov    0x8(%ebp),%eax
 8267491:	89 04 24             	mov    %eax,(%esp)
 8267494:	e8 bf ff ff ff       	call   8267458 <_ZN25CPcRoomCardBlankItemEventD1Ev>
 8267499:	8b 45 08             	mov    0x8(%ebp),%eax
 826749c:	89 04 24             	mov    %eax,(%esp)
 826749f:	e8 4c d0 4b 00       	call   87244f0 <_ZdlPv>
 82674a4:	c9                   	leave
 82674a5:	c3                   	ret

```

```c
// CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent @ 0x8267488

/* CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent() */

void __thiscall
CPcRoomCardBlankItemEvent::~CPcRoomCardBlankItemEvent(CPcRoomCardBlankItemEvent *this)

{
  ~CPcRoomCardBlankItemEvent(this);
  operator_delete(this);
  return;
}

```

