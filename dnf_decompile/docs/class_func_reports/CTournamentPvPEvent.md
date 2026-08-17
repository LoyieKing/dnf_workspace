# CTournamentPvPEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CTournamentPvPEvent

```asm
// === 082845cc CTournamentPvPEvent::CTournamentPvPEvent  [0x082845cc-0x82845e7] ===
 82845cc:	55                   	push   %ebp
 82845cd:	89 e5                	mov    %esp,%ebp
 82845cf:	83 ec 18             	sub    $0x18,%esp
 82845d2:	8b 45 08             	mov    0x8(%ebp),%eax
 82845d5:	89 04 24             	mov    %eax,(%esp)
 82845d8:	e8 4f 68 e8 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 82845dd:	8b 45 08             	mov    0x8(%ebp),%eax
 82845e0:	c7 00 88 cb c0 08    	movl   $0x8c0cb88,(%eax)
 82845e6:	c9                   	leave
 82845e7:	c3                   	ret

```

```c
// CTournamentPvPEvent::CTournamentPvPEvent @ 0x82845cc

/* CTournamentPvPEvent::CTournamentPvPEvent() */

void __thiscall CTournamentPvPEvent::CTournamentPvPEvent(CTournamentPvPEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CTournamentPvPEvent_08c0cb88;
  return;
}

```

---

## EndEvent

```asm
// === 0828468e CTournamentPvPEvent::EndEvent  [0x0828468e-0x82846de] ===
 828468e:	55                   	push   %ebp
 828468f:	89 e5                	mov    %esp,%ebp
 8284691:	83 ec 28             	sub    $0x28,%esp
 8284694:	8b 45 08             	mov    0x8(%ebp),%eax
 8284697:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828469e:	00 
 828469f:	89 04 24             	mov    %eax,(%esp)
 82846a2:	e8 3b 3e e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 82846a7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82846ae:	00 
 82846af:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 82846b6:	00 
 82846b7:	c7 44 24 04 50 cb c0 	movl   $0x8c0cb50,0x4(%esp)
 82846be:	08 
 82846bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82846c2:	89 04 24             	mov    %eax,(%esp)
 82846c5:	e8 4e b0 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82846ca:	c7 44 24 04 a4 c4 c0 	movl   $0x8c0c4a4,0x4(%esp)
 82846d1:	08 
 82846d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82846d5:	89 04 24             	mov    %eax,(%esp)
 82846d8:	e8 ab b0 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82846dd:	c9                   	leave
 82846de:	c3                   	ret

```

```c
// CTournamentPvPEvent::EndEvent @ 0x828468e

/* CTournamentPvPEvent::EndEvent() */

void __thiscall CTournamentPvPEvent::EndEvent(CTournamentPvPEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Tournament PvP Channel Open End");
  return;
}

```

---

## StartEvent

```asm
// === 08284636 CTournamentPvPEvent::StartEvent  [0x08284636-0x828463b] ===
 8284636:	55                   	push   %ebp
 8284637:	89 e5                	mov    %esp,%ebp
 8284639:	5d                   	pop    %ebp
 828463a:	c3                   	ret
 828463b:	90                   	nop

```

```c
// CTournamentPvPEvent::StartEvent @ 0x8284636

/* CTournamentPvPEvent::StartEvent() */

void CTournamentPvPEvent::StartEvent(void)

{
  return;
}

```

---

## StartEvent_0828463c

```asm
// === 0828463c CTournamentPvPEvent::StartEvent  [0x0828463c-0x828468d] ===
 828463c:	55                   	push   %ebp
 828463d:	89 e5                	mov    %esp,%ebp
 828463f:	83 ec 28             	sub    $0x28,%esp
 8284642:	8b 45 08             	mov    0x8(%ebp),%eax
 8284645:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828464c:	00 
 828464d:	89 04 24             	mov    %eax,(%esp)
 8284650:	e8 8d 3e e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8284655:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 828465c:	00 
 828465d:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8284664:	00 
 8284665:	c7 44 24 04 59 cb c0 	movl   $0x8c0cb59,0x4(%esp)
 828466c:	08 
 828466d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8284670:	89 04 24             	mov    %eax,(%esp)
 8284673:	e8 a0 b0 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8284678:	c7 44 24 04 80 c4 c0 	movl   $0x8c0c480,0x4(%esp)
 828467f:	08 
 8284680:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8284683:	89 04 24             	mov    %eax,(%esp)
 8284686:	e8 fd b0 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 828468b:	c9                   	leave
 828468c:	c3                   	ret
 828468d:	90                   	nop

```

```c
// CTournamentPvPEvent::StartEvent @ 0x828463c

/* CTournamentPvPEvent::StartEvent(Word_Param) */

void CTournamentPvPEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"Tournament PvP Channel Open Start");
  return;
}

```

---

## ~CTournamentPvPEvent

```asm
// === 082845e8 CTournamentPvPEvent::~CTournamentPvPEvent  [0x082845e8-0x8284617] ===
 82845e8:	55                   	push   %ebp
 82845e9:	89 e5                	mov    %esp,%ebp
 82845eb:	83 ec 18             	sub    $0x18,%esp
 82845ee:	8b 45 08             	mov    0x8(%ebp),%eax
 82845f1:	c7 00 88 cb c0 08    	movl   $0x8c0cb88,(%eax)
 82845f7:	8b 45 08             	mov    0x8(%ebp),%eax
 82845fa:	89 04 24             	mov    %eax,(%esp)
 82845fd:	e8 50 68 e8 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8284602:	b8 00 00 00 00       	mov    $0x0,%eax
 8284607:	84 c0                	test   %al,%al
 8284609:	74 0b                	je     8284616 <_ZN19CTournamentPvPEventD1Ev+0x2e>
 828460b:	8b 45 08             	mov    0x8(%ebp),%eax
 828460e:	89 04 24             	mov    %eax,(%esp)
 8284611:	e8 da fe 49 00       	call   87244f0 <_ZdlPv>
 8284616:	c9                   	leave
 8284617:	c3                   	ret

```

```c
// CTournamentPvPEvent::~CTournamentPvPEvent @ 0x82845e8

/* WARNING: Removing unreachable block (ram,0x0828460b) */
/* CTournamentPvPEvent::~CTournamentPvPEvent() */

void __thiscall CTournamentPvPEvent::~CTournamentPvPEvent(CTournamentPvPEvent *this)

{
  *(undefined ***)this = &PTR__CTournamentPvPEvent_08c0cb88;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CTournamentPvPEvent_08284618

```asm
// === 08284618 CTournamentPvPEvent::~CTournamentPvPEvent  [0x08284618-0x8284635] ===
 8284618:	55                   	push   %ebp
 8284619:	89 e5                	mov    %esp,%ebp
 828461b:	83 ec 18             	sub    $0x18,%esp
 828461e:	8b 45 08             	mov    0x8(%ebp),%eax
 8284621:	89 04 24             	mov    %eax,(%esp)
 8284624:	e8 bf ff ff ff       	call   82845e8 <_ZN19CTournamentPvPEventD1Ev>
 8284629:	8b 45 08             	mov    0x8(%ebp),%eax
 828462c:	89 04 24             	mov    %eax,(%esp)
 828462f:	e8 bc fe 49 00       	call   87244f0 <_ZdlPv>
 8284634:	c9                   	leave
 8284635:	c3                   	ret

```

```c
// CTournamentPvPEvent::~CTournamentPvPEvent @ 0x8284618

/* CTournamentPvPEvent::~CTournamentPvPEvent() */

void __thiscall CTournamentPvPEvent::~CTournamentPvPEvent(CTournamentPvPEvent *this)

{
  ~CTournamentPvPEvent(this);
  operator_delete(this);
  return;
}

```

