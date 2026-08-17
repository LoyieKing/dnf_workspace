# BlueMarbleDungeonEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## BlueMarbleDungeonEvent

```asm
// === 080dc470 BlueMarbleDungeonEvent::BlueMarbleDungeonEvent  [0x080dc470-0x80dc48b] ===
 80dc470:	55                   	push   %ebp
 80dc471:	89 e5                	mov    %esp,%ebp
 80dc473:	83 ec 18             	sub    $0x18,%esp
 80dc476:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc479:	89 04 24             	mov    %eax,(%esp)
 80dc47c:	e8 ab e9 02 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 80dc481:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc484:	c7 00 48 a2 b2 08    	movl   $0x8b2a248,(%eax)
 80dc48a:	c9                   	leave
 80dc48b:	c3                   	ret

```

```c
// BlueMarbleDungeonEvent::BlueMarbleDungeonEvent @ 0x80dc470

/* BlueMarbleDungeonEvent::BlueMarbleDungeonEvent() */

void __thiscall BlueMarbleDungeonEvent::BlueMarbleDungeonEvent(BlueMarbleDungeonEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__BlueMarbleDungeonEvent_08b2a248;
  return;
}

```

---

## EndEvent

```asm
// === 080dc57e BlueMarbleDungeonEvent::EndEvent  [0x080dc57e-0x80dc5ce] ===
 80dc57e:	55                   	push   %ebp
 80dc57f:	89 e5                	mov    %esp,%ebp
 80dc581:	83 ec 28             	sub    $0x28,%esp
 80dc584:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc587:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80dc58e:	00 
 80dc58f:	89 04 24             	mov    %eax,(%esp)
 80dc592:	e8 4b bf fe ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80dc597:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80dc59e:	00 
 80dc59f:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 80dc5a6:	00 
 80dc5a7:	c7 44 24 04 10 a2 b2 	movl   $0x8b2a210,0x4(%esp)
 80dc5ae:	08 
 80dc5af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80dc5b2:	89 04 24             	mov    %eax,(%esp)
 80dc5b5:	e8 5e 31 47 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80dc5ba:	c7 44 24 04 7e 9b b2 	movl   $0x8b29b7e,0x4(%esp)
 80dc5c1:	08 
 80dc5c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80dc5c5:	89 04 24             	mov    %eax,(%esp)
 80dc5c8:	e8 bb 31 47 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80dc5cd:	c9                   	leave
 80dc5ce:	c3                   	ret

```

```c
// BlueMarbleDungeonEvent::EndEvent @ 0x80dc57e

/* BlueMarbleDungeonEvent::EndEvent() */

void __thiscall BlueMarbleDungeonEvent::EndEvent(BlueMarbleDungeonEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x22,0);
  cMyTrace::operator()(local_1c,"BlueMarbleDungeonEvent End!");
  return;
}

```

---

## StartEvent

```asm
// === 080dc4da BlueMarbleDungeonEvent::StartEvent  [0x080dc4da-0x80dc52b] ===
 80dc4da:	55                   	push   %ebp
 80dc4db:	89 e5                	mov    %esp,%ebp
 80dc4dd:	83 ec 28             	sub    $0x28,%esp
 80dc4e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc4e3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80dc4ea:	00 
 80dc4eb:	89 04 24             	mov    %eax,(%esp)
 80dc4ee:	e8 ef bf fe ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80dc4f3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80dc4fa:	00 
 80dc4fb:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 80dc502:	00 
 80dc503:	c7 44 24 04 24 a2 b2 	movl   $0x8b2a224,0x4(%esp)
 80dc50a:	08 
 80dc50b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80dc50e:	89 04 24             	mov    %eax,(%esp)
 80dc511:	e8 02 32 47 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80dc516:	c7 44 24 04 60 9b b2 	movl   $0x8b29b60,0x4(%esp)
 80dc51d:	08 
 80dc51e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80dc521:	89 04 24             	mov    %eax,(%esp)
 80dc524:	e8 5f 32 47 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80dc529:	c9                   	leave
 80dc52a:	c3                   	ret
 80dc52b:	90                   	nop

```

```c
// BlueMarbleDungeonEvent::StartEvent @ 0x80dc4da

/* BlueMarbleDungeonEvent::StartEvent() */

void __thiscall BlueMarbleDungeonEvent::StartEvent(BlueMarbleDungeonEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x16,0);
  cMyTrace::operator()(local_1c,"BlueMarbleDungeonEvent Start!");
  return;
}

```

---

## StartEvent_080dc52c

```asm
// === 080dc52c BlueMarbleDungeonEvent::StartEvent  [0x080dc52c-0x80dc57d] ===
 80dc52c:	55                   	push   %ebp
 80dc52d:	89 e5                	mov    %esp,%ebp
 80dc52f:	83 ec 28             	sub    $0x28,%esp
 80dc532:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc535:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80dc53c:	00 
 80dc53d:	89 04 24             	mov    %eax,(%esp)
 80dc540:	e8 9d bf fe ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80dc545:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80dc54c:	00 
 80dc54d:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 80dc554:	00 
 80dc555:	c7 44 24 04 19 a2 b2 	movl   $0x8b2a219,0x4(%esp)
 80dc55c:	08 
 80dc55d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80dc560:	89 04 24             	mov    %eax,(%esp)
 80dc563:	e8 b0 31 47 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80dc568:	c7 44 24 04 60 9b b2 	movl   $0x8b29b60,0x4(%esp)
 80dc56f:	08 
 80dc570:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80dc573:	89 04 24             	mov    %eax,(%esp)
 80dc576:	e8 0d 32 47 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80dc57b:	c9                   	leave
 80dc57c:	c3                   	ret
 80dc57d:	90                   	nop

```

```c
// BlueMarbleDungeonEvent::StartEvent @ 0x80dc52c

/* BlueMarbleDungeonEvent::StartEvent(Word_Param) */

void BlueMarbleDungeonEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1c,0);
  cMyTrace::operator()(local_1c,"BlueMarbleDungeonEvent Start!");
  return;
}

```

---

## ~BlueMarbleDungeonEvent

```asm
// === 080dc48c BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent  [0x080dc48c-0x80dc4bb] ===
 80dc48c:	55                   	push   %ebp
 80dc48d:	89 e5                	mov    %esp,%ebp
 80dc48f:	83 ec 18             	sub    $0x18,%esp
 80dc492:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc495:	c7 00 48 a2 b2 08    	movl   $0x8b2a248,(%eax)
 80dc49b:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc49e:	89 04 24             	mov    %eax,(%esp)
 80dc4a1:	e8 ac e9 02 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 80dc4a6:	b8 00 00 00 00       	mov    $0x0,%eax
 80dc4ab:	84 c0                	test   %al,%al
 80dc4ad:	74 0b                	je     80dc4ba <_ZN22BlueMarbleDungeonEventD1Ev+0x2e>
 80dc4af:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc4b2:	89 04 24             	mov    %eax,(%esp)
 80dc4b5:	e8 36 80 64 00       	call   87244f0 <_ZdlPv>
 80dc4ba:	c9                   	leave
 80dc4bb:	c3                   	ret

```

```c
// BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent @ 0x80dc48c

/* WARNING: Removing unreachable block (ram,0x080dc4af) */
/* BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent() */

void __thiscall BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent(BlueMarbleDungeonEvent *this)

{
  *(undefined ***)this = &PTR__BlueMarbleDungeonEvent_08b2a248;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~BlueMarbleDungeonEvent_080dc4bc

```asm
// === 080dc4bc BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent  [0x080dc4bc-0x80dc4d9] ===
 80dc4bc:	55                   	push   %ebp
 80dc4bd:	89 e5                	mov    %esp,%ebp
 80dc4bf:	83 ec 18             	sub    $0x18,%esp
 80dc4c2:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc4c5:	89 04 24             	mov    %eax,(%esp)
 80dc4c8:	e8 bf ff ff ff       	call   80dc48c <_ZN22BlueMarbleDungeonEventD1Ev>
 80dc4cd:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc4d0:	89 04 24             	mov    %eax,(%esp)
 80dc4d3:	e8 18 80 64 00       	call   87244f0 <_ZdlPv>
 80dc4d8:	c9                   	leave
 80dc4d9:	c3                   	ret

```

```c
// BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent @ 0x80dc4bc

/* BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent() */

void __thiscall BlueMarbleDungeonEvent::~BlueMarbleDungeonEvent(BlueMarbleDungeonEvent *this)

{
  ~BlueMarbleDungeonEvent(this);
  operator_delete(this);
  return;
}

```

