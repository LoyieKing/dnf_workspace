# CIntegratedPvPServerMatchEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CIntegratedPvPServerMatchEvent

```asm
// === 0811d438 CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent  [0x0811d438-0x811d453] ===
 811d438:	55                   	push   %ebp
 811d439:	89 e5                	mov    %esp,%ebp
 811d43b:	83 ec 18             	sub    $0x18,%esp
 811d43e:	8b 45 08             	mov    0x8(%ebp),%eax
 811d441:	89 04 24             	mov    %eax,(%esp)
 811d444:	e8 e3 d9 fe ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 811d449:	8b 45 08             	mov    0x8(%ebp),%eax
 811d44c:	c7 00 e8 5a b5 08    	movl   $0x8b55ae8,(%eax)
 811d452:	c9                   	leave
 811d453:	c3                   	ret

```

```c
// CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent @ 0x811d438

/* CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent() */

void __thiscall
CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent(CIntegratedPvPServerMatchEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CIntegratedPvPServerMatchEvent_08b55ae8;
  return;
}

```

---

## EndEvent

```asm
// === 0811d546 CIntegratedPvPServerMatchEvent::EndEvent  [0x0811d546-0x811d560] ===
 811d546:	55                   	push   %ebp
 811d547:	89 e5                	mov    %esp,%ebp
 811d549:	83 ec 18             	sub    $0x18,%esp
 811d54c:	8b 45 08             	mov    0x8(%ebp),%eax
 811d54f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d556:	00 
 811d557:	89 04 24             	mov    %eax,(%esp)
 811d55a:	e8 83 af fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811d55f:	c9                   	leave
 811d560:	c3                   	ret

```

```c
// CIntegratedPvPServerMatchEvent::EndEvent @ 0x811d546

/* CIntegratedPvPServerMatchEvent::EndEvent() */

void __thiscall CIntegratedPvPServerMatchEvent::EndEvent(CIntegratedPvPServerMatchEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## StartEvent

```asm
// === 0811d4a2 CIntegratedPvPServerMatchEvent::StartEvent  [0x0811d4a2-0x811d4f3] ===
 811d4a2:	55                   	push   %ebp
 811d4a3:	89 e5                	mov    %esp,%ebp
 811d4a5:	83 ec 28             	sub    $0x28,%esp
 811d4a8:	8b 45 08             	mov    0x8(%ebp),%eax
 811d4ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811d4b2:	00 
 811d4b3:	89 04 24             	mov    %eax,(%esp)
 811d4b6:	e8 27 b0 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811d4bb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811d4c2:	00 
 811d4c3:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 811d4ca:	00 
 811d4cb:	c7 44 24 04 bb 5a b5 	movl   $0x8b55abb,0x4(%esp)
 811d4d2:	08 
 811d4d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d4d6:	89 04 24             	mov    %eax,(%esp)
 811d4d9:	e8 3a 22 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811d4de:	c7 44 24 04 00 54 b5 	movl   $0x8b55400,0x4(%esp)
 811d4e5:	08 
 811d4e6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d4e9:	89 04 24             	mov    %eax,(%esp)
 811d4ec:	e8 97 22 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811d4f1:	c9                   	leave
 811d4f2:	c3                   	ret
 811d4f3:	90                   	nop

```

```c
// CIntegratedPvPServerMatchEvent::StartEvent @ 0x811d4a2

/* CIntegratedPvPServerMatchEvent::StartEvent() */

void __thiscall CIntegratedPvPServerMatchEvent::StartEvent(CIntegratedPvPServerMatchEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"CIntegratedPvPServerMatchEvent Start!");
  return;
}

```

---

## StartEvent_0811d4f4

```asm
// === 0811d4f4 CIntegratedPvPServerMatchEvent::StartEvent  [0x0811d4f4-0x811d545] ===
 811d4f4:	55                   	push   %ebp
 811d4f5:	89 e5                	mov    %esp,%ebp
 811d4f7:	83 ec 28             	sub    $0x28,%esp
 811d4fa:	8b 45 08             	mov    0x8(%ebp),%eax
 811d4fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811d504:	00 
 811d505:	89 04 24             	mov    %eax,(%esp)
 811d508:	e8 d5 af fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811d50d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811d514:	00 
 811d515:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 811d51c:	00 
 811d51d:	c7 44 24 04 b0 5a b5 	movl   $0x8b55ab0,0x4(%esp)
 811d524:	08 
 811d525:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d528:	89 04 24             	mov    %eax,(%esp)
 811d52b:	e8 e8 21 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811d530:	c7 44 24 04 00 54 b5 	movl   $0x8b55400,0x4(%esp)
 811d537:	08 
 811d538:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d53b:	89 04 24             	mov    %eax,(%esp)
 811d53e:	e8 45 22 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811d543:	c9                   	leave
 811d544:	c3                   	ret
 811d545:	90                   	nop

```

```c
// CIntegratedPvPServerMatchEvent::StartEvent @ 0x811d4f4

/* CIntegratedPvPServerMatchEvent::StartEvent(Word_Param) */

void CIntegratedPvPServerMatchEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"CIntegratedPvPServerMatchEvent Start!");
  return;
}

```

---

## ~CIntegratedPvPServerMatchEvent

```asm
// === 0811d454 CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent  [0x0811d454-0x811d483] ===
 811d454:	55                   	push   %ebp
 811d455:	89 e5                	mov    %esp,%ebp
 811d457:	83 ec 18             	sub    $0x18,%esp
 811d45a:	8b 45 08             	mov    0x8(%ebp),%eax
 811d45d:	c7 00 e8 5a b5 08    	movl   $0x8b55ae8,(%eax)
 811d463:	8b 45 08             	mov    0x8(%ebp),%eax
 811d466:	89 04 24             	mov    %eax,(%esp)
 811d469:	e8 e4 d9 fe ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 811d46e:	b8 00 00 00 00       	mov    $0x0,%eax
 811d473:	84 c0                	test   %al,%al
 811d475:	74 0b                	je     811d482 <_ZN30CIntegratedPvPServerMatchEventD1Ev+0x2e>
 811d477:	8b 45 08             	mov    0x8(%ebp),%eax
 811d47a:	89 04 24             	mov    %eax,(%esp)
 811d47d:	e8 6e 70 60 00       	call   87244f0 <_ZdlPv>
 811d482:	c9                   	leave
 811d483:	c3                   	ret

```

```c
// CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent @ 0x811d454

/* WARNING: Removing unreachable block (ram,0x0811d477) */
/* CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent() */

void __thiscall
CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent
          (CIntegratedPvPServerMatchEvent *this)

{
  *(undefined ***)this = &PTR__CIntegratedPvPServerMatchEvent_08b55ae8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CIntegratedPvPServerMatchEvent_0811d484

```asm
// === 0811d484 CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent  [0x0811d484-0x811d4a1] ===
 811d484:	55                   	push   %ebp
 811d485:	89 e5                	mov    %esp,%ebp
 811d487:	83 ec 18             	sub    $0x18,%esp
 811d48a:	8b 45 08             	mov    0x8(%ebp),%eax
 811d48d:	89 04 24             	mov    %eax,(%esp)
 811d490:	e8 bf ff ff ff       	call   811d454 <_ZN30CIntegratedPvPServerMatchEventD1Ev>
 811d495:	8b 45 08             	mov    0x8(%ebp),%eax
 811d498:	89 04 24             	mov    %eax,(%esp)
 811d49b:	e8 50 70 60 00       	call   87244f0 <_ZdlPv>
 811d4a0:	c9                   	leave
 811d4a1:	c3                   	ret

```

```c
// CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent @ 0x811d484

/* CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent() */

void __thiscall
CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent
          (CIntegratedPvPServerMatchEvent *this)

{
  ~CIntegratedPvPServerMatchEvent(this);
  operator_delete(this);
  return;
}

```

