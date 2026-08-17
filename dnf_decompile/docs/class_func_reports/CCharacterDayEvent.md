# CCharacterDayEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CCharacterDayEvent

```asm
// === 0810a4c8 CCharacterDayEvent::CCharacterDayEvent  [0x0810a4c8-0x810a4ed] ===
 810a4c8:	55                   	push   %ebp
 810a4c9:	89 e5                	mov    %esp,%ebp
 810a4cb:	83 ec 18             	sub    $0x18,%esp
 810a4ce:	8b 45 08             	mov    0x8(%ebp),%eax
 810a4d1:	89 04 24             	mov    %eax,(%esp)
 810a4d4:	e8 53 09 00 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 810a4d9:	8b 45 08             	mov    0x8(%ebp),%eax
 810a4dc:	c7 00 08 8c b4 08    	movl   $0x8b48c08,(%eax)
 810a4e2:	8b 45 08             	mov    0x8(%ebp),%eax
 810a4e5:	66 c7 40 0a ff ff    	movw   $0xffff,0xa(%eax)
 810a4eb:	c9                   	leave
 810a4ec:	c3                   	ret
 810a4ed:	90                   	nop

```

```c
// CCharacterDayEvent::CCharacterDayEvent @ 0x810a4c8

/* CCharacterDayEvent::CCharacterDayEvent() */

void __thiscall CCharacterDayEvent::CCharacterDayEvent(CCharacterDayEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCharacterDayEvent_08b48c08;
  *(undefined2 *)(this + 10) = 0xffff;
  return;
}

```

---

## EndEvent

```asm
// === 0810a5ec CCharacterDayEvent::EndEvent  [0x0810a5ec-0x810a63c] ===
 810a5ec:	55                   	push   %ebp
 810a5ed:	89 e5                	mov    %esp,%ebp
 810a5ef:	83 ec 28             	sub    $0x28,%esp
 810a5f2:	8b 45 08             	mov    0x8(%ebp),%eax
 810a5f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810a5fc:	00 
 810a5fd:	89 04 24             	mov    %eax,(%esp)
 810a600:	e8 dd de fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a605:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a60c:	00 
 810a60d:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 810a614:	00 
 810a615:	c7 44 24 04 d0 8b b4 	movl   $0x8b48bd0,0x4(%esp)
 810a61c:	08 
 810a61d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a620:	89 04 24             	mov    %eax,(%esp)
 810a623:	e8 f0 50 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a628:	c7 44 24 04 3b 85 b4 	movl   $0x8b4853b,0x4(%esp)
 810a62f:	08 
 810a630:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a633:	89 04 24             	mov    %eax,(%esp)
 810a636:	e8 4d 51 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a63b:	c9                   	leave
 810a63c:	c3                   	ret

```

```c
// CCharacterDayEvent::EndEvent @ 0x810a5ec

/* CCharacterDayEvent::EndEvent() */

void __thiscall CCharacterDayEvent::EndEvent(CCharacterDayEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x25,0);
  cMyTrace::operator()(local_1c,"Character Day Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 0810a53c CCharacterDayEvent::StartEvent  [0x0810a53c-0x810a58d] ===
 810a53c:	55                   	push   %ebp
 810a53d:	89 e5                	mov    %esp,%ebp
 810a53f:	83 ec 28             	sub    $0x28,%esp
 810a542:	8b 45 08             	mov    0x8(%ebp),%eax
 810a545:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810a54c:	00 
 810a54d:	89 04 24             	mov    %eax,(%esp)
 810a550:	e8 8d df fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a555:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a55c:	00 
 810a55d:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 810a564:	00 
 810a565:	c7 44 24 04 e4 8b b4 	movl   $0x8b48be4,0x4(%esp)
 810a56c:	08 
 810a56d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a570:	89 04 24             	mov    %eax,(%esp)
 810a573:	e8 a0 51 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a578:	c7 44 24 04 20 85 b4 	movl   $0x8b48520,0x4(%esp)
 810a57f:	08 
 810a580:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a583:	89 04 24             	mov    %eax,(%esp)
 810a586:	e8 fd 51 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a58b:	c9                   	leave
 810a58c:	c3                   	ret
 810a58d:	90                   	nop

```

```c
// CCharacterDayEvent::StartEvent @ 0x810a53c

/* CCharacterDayEvent::StartEvent() */

void __thiscall CCharacterDayEvent::StartEvent(CCharacterDayEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x17,0);
  cMyTrace::operator()(local_1c,"Character Day Event Start!");
  return;
}

```

---

## StartEvent_0810a58e

```asm
// === 0810a58e CCharacterDayEvent::StartEvent  [0x0810a58e-0x810a5eb] ===
 810a58e:	55                   	push   %ebp
 810a58f:	89 e5                	mov    %esp,%ebp
 810a591:	83 ec 28             	sub    $0x28,%esp
 810a594:	8b 45 08             	mov    0x8(%ebp),%eax
 810a597:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810a59e:	00 
 810a59f:	89 04 24             	mov    %eax,(%esp)
 810a5a2:	e8 3b df fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a5a7:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 810a5ab:	89 c2                	mov    %eax,%edx
 810a5ad:	8b 45 08             	mov    0x8(%ebp),%eax
 810a5b0:	66 89 50 0a          	mov    %dx,0xa(%eax)
 810a5b4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a5bb:	00 
 810a5bc:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 810a5c3:	00 
 810a5c4:	c7 44 24 04 d9 8b b4 	movl   $0x8b48bd9,0x4(%esp)
 810a5cb:	08 
 810a5cc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a5cf:	89 04 24             	mov    %eax,(%esp)
 810a5d2:	e8 41 51 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a5d7:	c7 44 24 04 20 85 b4 	movl   $0x8b48520,0x4(%esp)
 810a5de:	08 
 810a5df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a5e2:	89 04 24             	mov    %eax,(%esp)
 810a5e5:	e8 9e 51 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a5ea:	c9                   	leave
 810a5eb:	c3                   	ret

```

```c
// CCharacterDayEvent::StartEvent @ 0x810a58e

/* CCharacterDayEvent::StartEvent(Word_Param) */

void __thiscall CCharacterDayEvent::StartEvent(CCharacterDayEvent *this,undefined2 param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined2 *)(this + 10) = param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1f,0);
  cMyTrace::operator()(local_1c,"Character Day Event Start!");
  return;
}

```

---

## ~CCharacterDayEvent

```asm
// === 0810a4ee CCharacterDayEvent::~CCharacterDayEvent  [0x0810a4ee-0x810a51d] ===
 810a4ee:	55                   	push   %ebp
 810a4ef:	89 e5                	mov    %esp,%ebp
 810a4f1:	83 ec 18             	sub    $0x18,%esp
 810a4f4:	8b 45 08             	mov    0x8(%ebp),%eax
 810a4f7:	c7 00 08 8c b4 08    	movl   $0x8b48c08,(%eax)
 810a4fd:	8b 45 08             	mov    0x8(%ebp),%eax
 810a500:	89 04 24             	mov    %eax,(%esp)
 810a503:	e8 4a 09 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 810a508:	b8 00 00 00 00       	mov    $0x0,%eax
 810a50d:	84 c0                	test   %al,%al
 810a50f:	74 0b                	je     810a51c <_ZN18CCharacterDayEventD1Ev+0x2e>
 810a511:	8b 45 08             	mov    0x8(%ebp),%eax
 810a514:	89 04 24             	mov    %eax,(%esp)
 810a517:	e8 d4 9f 61 00       	call   87244f0 <_ZdlPv>
 810a51c:	c9                   	leave
 810a51d:	c3                   	ret

```

```c
// CCharacterDayEvent::~CCharacterDayEvent @ 0x810a4ee

/* WARNING: Removing unreachable block (ram,0x0810a511) */
/* CCharacterDayEvent::~CCharacterDayEvent() */

void __thiscall CCharacterDayEvent::~CCharacterDayEvent(CCharacterDayEvent *this)

{
  *(undefined ***)this = &PTR__CCharacterDayEvent_08b48c08;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CCharacterDayEvent_0810a51e

```asm
// === 0810a51e CCharacterDayEvent::~CCharacterDayEvent  [0x0810a51e-0x810a53b] ===
 810a51e:	55                   	push   %ebp
 810a51f:	89 e5                	mov    %esp,%ebp
 810a521:	83 ec 18             	sub    $0x18,%esp
 810a524:	8b 45 08             	mov    0x8(%ebp),%eax
 810a527:	89 04 24             	mov    %eax,(%esp)
 810a52a:	e8 bf ff ff ff       	call   810a4ee <_ZN18CCharacterDayEventD1Ev>
 810a52f:	8b 45 08             	mov    0x8(%ebp),%eax
 810a532:	89 04 24             	mov    %eax,(%esp)
 810a535:	e8 b6 9f 61 00       	call   87244f0 <_ZdlPv>
 810a53a:	c9                   	leave
 810a53b:	c3                   	ret

```

```c
// CCharacterDayEvent::~CCharacterDayEvent @ 0x810a51e

/* CCharacterDayEvent::~CCharacterDayEvent() */

void __thiscall CCharacterDayEvent::~CCharacterDayEvent(CCharacterDayEvent *this)

{
  ~CCharacterDayEvent(this);
  operator_delete(this);
  return;
}

```

