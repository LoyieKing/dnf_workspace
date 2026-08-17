# CStabToDeathEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CStabToDeathEvent

```asm
// === 0827f508 CStabToDeathEvent::CStabToDeathEvent  [0x0827f508-0x827f523] ===
 827f508:	55                   	push   %ebp
 827f509:	89 e5                	mov    %esp,%ebp
 827f50b:	83 ec 18             	sub    $0x18,%esp
 827f50e:	8b 45 08             	mov    0x8(%ebp),%eax
 827f511:	89 04 24             	mov    %eax,(%esp)
 827f514:	e8 13 b9 e8 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 827f519:	8b 45 08             	mov    0x8(%ebp),%eax
 827f51c:	c7 00 08 97 c0 08    	movl   $0x8c09708,(%eax)
 827f522:	c9                   	leave
 827f523:	c3                   	ret

```

```c
// CStabToDeathEvent::CStabToDeathEvent @ 0x827f508

/* CStabToDeathEvent::CStabToDeathEvent() */

void __thiscall CStabToDeathEvent::CStabToDeathEvent(CStabToDeathEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CStabToDeathEvent_08c09708;
  return;
}

```

---

## EndEvent

```asm
// === 0827f616 CStabToDeathEvent::EndEvent  [0x0827f616-0x827f666] ===
 827f616:	55                   	push   %ebp
 827f617:	89 e5                	mov    %esp,%ebp
 827f619:	83 ec 28             	sub    $0x28,%esp
 827f61c:	8b 45 08             	mov    0x8(%ebp),%eax
 827f61f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827f626:	00 
 827f627:	89 04 24             	mov    %eax,(%esp)
 827f62a:	e8 b3 8e e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 827f62f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827f636:	00 
 827f637:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 827f63e:	00 
 827f63f:	c7 44 24 04 d0 96 c0 	movl   $0x8c096d0,0x4(%esp)
 827f646:	08 
 827f647:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827f64a:	89 04 24             	mov    %eax,(%esp)
 827f64d:	e8 c6 00 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827f652:	c7 44 24 04 39 90 c0 	movl   $0x8c09039,0x4(%esp)
 827f659:	08 
 827f65a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827f65d:	89 04 24             	mov    %eax,(%esp)
 827f660:	e8 23 01 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827f665:	c9                   	leave
 827f666:	c3                   	ret

```

```c
// CStabToDeathEvent::EndEvent @ 0x827f616

/* CStabToDeathEvent::EndEvent() */

void __thiscall CStabToDeathEvent::EndEvent(CStabToDeathEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1d,0);
  cMyTrace::operator()(local_1c,"CStabToDeathEvent End!");
  return;
}

```

---

## StartEvent

```asm
// === 0827f572 CStabToDeathEvent::StartEvent  [0x0827f572-0x827f5c3] ===
 827f572:	55                   	push   %ebp
 827f573:	89 e5                	mov    %esp,%ebp
 827f575:	83 ec 28             	sub    $0x28,%esp
 827f578:	8b 45 08             	mov    0x8(%ebp),%eax
 827f57b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827f582:	00 
 827f583:	89 04 24             	mov    %eax,(%esp)
 827f586:	e8 57 8f e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 827f58b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827f592:	00 
 827f593:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 827f59a:	00 
 827f59b:	c7 44 24 04 e4 96 c0 	movl   $0x8c096e4,0x4(%esp)
 827f5a2:	08 
 827f5a3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827f5a6:	89 04 24             	mov    %eax,(%esp)
 827f5a9:	e8 6a 01 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827f5ae:	c7 44 24 04 20 90 c0 	movl   $0x8c09020,0x4(%esp)
 827f5b5:	08 
 827f5b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827f5b9:	89 04 24             	mov    %eax,(%esp)
 827f5bc:	e8 c7 01 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827f5c1:	c9                   	leave
 827f5c2:	c3                   	ret
 827f5c3:	90                   	nop

```

```c
// CStabToDeathEvent::StartEvent @ 0x827f572

/* CStabToDeathEvent::StartEvent() */

void __thiscall CStabToDeathEvent::StartEvent(CStabToDeathEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x11,0);
  cMyTrace::operator()(local_1c,"CStabToDeathEvent Start!");
  return;
}

```

---

## StartEvent_0827f5c4

```asm
// === 0827f5c4 CStabToDeathEvent::StartEvent  [0x0827f5c4-0x827f615] ===
 827f5c4:	55                   	push   %ebp
 827f5c5:	89 e5                	mov    %esp,%ebp
 827f5c7:	83 ec 28             	sub    $0x28,%esp
 827f5ca:	8b 45 08             	mov    0x8(%ebp),%eax
 827f5cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827f5d4:	00 
 827f5d5:	89 04 24             	mov    %eax,(%esp)
 827f5d8:	e8 05 8f e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 827f5dd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827f5e4:	00 
 827f5e5:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 827f5ec:	00 
 827f5ed:	c7 44 24 04 d9 96 c0 	movl   $0x8c096d9,0x4(%esp)
 827f5f4:	08 
 827f5f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827f5f8:	89 04 24             	mov    %eax,(%esp)
 827f5fb:	e8 18 01 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827f600:	c7 44 24 04 20 90 c0 	movl   $0x8c09020,0x4(%esp)
 827f607:	08 
 827f608:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827f60b:	89 04 24             	mov    %eax,(%esp)
 827f60e:	e8 75 01 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827f613:	c9                   	leave
 827f614:	c3                   	ret
 827f615:	90                   	nop

```

```c
// CStabToDeathEvent::StartEvent @ 0x827f5c4

/* CStabToDeathEvent::StartEvent(Word_Param) */

void CStabToDeathEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x17,0);
  cMyTrace::operator()(local_1c,"CStabToDeathEvent Start!");
  return;
}

```

---

## ~CStabToDeathEvent

```asm
// === 0827f524 CStabToDeathEvent::~CStabToDeathEvent  [0x0827f524-0x827f553] ===
 827f524:	55                   	push   %ebp
 827f525:	89 e5                	mov    %esp,%ebp
 827f527:	83 ec 18             	sub    $0x18,%esp
 827f52a:	8b 45 08             	mov    0x8(%ebp),%eax
 827f52d:	c7 00 08 97 c0 08    	movl   $0x8c09708,(%eax)
 827f533:	8b 45 08             	mov    0x8(%ebp),%eax
 827f536:	89 04 24             	mov    %eax,(%esp)
 827f539:	e8 14 b9 e8 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 827f53e:	b8 00 00 00 00       	mov    $0x0,%eax
 827f543:	84 c0                	test   %al,%al
 827f545:	74 0b                	je     827f552 <_ZN17CStabToDeathEventD1Ev+0x2e>
 827f547:	8b 45 08             	mov    0x8(%ebp),%eax
 827f54a:	89 04 24             	mov    %eax,(%esp)
 827f54d:	e8 9e 4f 4a 00       	call   87244f0 <_ZdlPv>
 827f552:	c9                   	leave
 827f553:	c3                   	ret

```

```c
// CStabToDeathEvent::~CStabToDeathEvent @ 0x827f524

/* WARNING: Removing unreachable block (ram,0x0827f547) */
/* CStabToDeathEvent::~CStabToDeathEvent() */

void __thiscall CStabToDeathEvent::~CStabToDeathEvent(CStabToDeathEvent *this)

{
  *(undefined ***)this = &PTR__CStabToDeathEvent_08c09708;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CStabToDeathEvent_0827f554

```asm
// === 0827f554 CStabToDeathEvent::~CStabToDeathEvent  [0x0827f554-0x827f571] ===
 827f554:	55                   	push   %ebp
 827f555:	89 e5                	mov    %esp,%ebp
 827f557:	83 ec 18             	sub    $0x18,%esp
 827f55a:	8b 45 08             	mov    0x8(%ebp),%eax
 827f55d:	89 04 24             	mov    %eax,(%esp)
 827f560:	e8 bf ff ff ff       	call   827f524 <_ZN17CStabToDeathEventD1Ev>
 827f565:	8b 45 08             	mov    0x8(%ebp),%eax
 827f568:	89 04 24             	mov    %eax,(%esp)
 827f56b:	e8 80 4f 4a 00       	call   87244f0 <_ZdlPv>
 827f570:	c9                   	leave
 827f571:	c3                   	ret

```

```c
// CStabToDeathEvent::~CStabToDeathEvent @ 0x827f554

/* CStabToDeathEvent::~CStabToDeathEvent() */

void __thiscall CStabToDeathEvent::~CStabToDeathEvent(CStabToDeathEvent *this)

{
  ~CStabToDeathEvent(this);
  operator_delete(this);
  return;
}

```

