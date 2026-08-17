# COnlinePreliminaryEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## COnlinePreliminaryEvent

```asm
// === 081bb490 COnlinePreliminaryEvent::COnlinePreliminaryEvent  [0x081bb490-0x81bb4ab] ===
 81bb490:	55                   	push   %ebp
 81bb491:	89 e5                	mov    %esp,%ebp
 81bb493:	83 ec 18             	sub    $0x18,%esp
 81bb496:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb499:	89 04 24             	mov    %eax,(%esp)
 81bb49c:	e8 8b f9 f4 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81bb4a1:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb4a4:	c7 00 68 f9 bb 08    	movl   $0x8bbf968,(%eax)
 81bb4aa:	c9                   	leave
 81bb4ab:	c3                   	ret

```

```c
// COnlinePreliminaryEvent::COnlinePreliminaryEvent @ 0x81bb490

/* COnlinePreliminaryEvent::COnlinePreliminaryEvent() */

void __thiscall COnlinePreliminaryEvent::COnlinePreliminaryEvent(COnlinePreliminaryEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__COnlinePreliminaryEvent_08bbf968;
  return;
}

```

---

## EndEvent

```asm
// === 081bb5e2 COnlinePreliminaryEvent::EndEvent  [0x081bb5e2-0x81bb61f] ===
 81bb5e2:	55                   	push   %ebp
 81bb5e3:	89 e5                	mov    %esp,%ebp
 81bb5e5:	83 ec 18             	sub    $0x18,%esp
 81bb5e8:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb5eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81bb5f2:	00 
 81bb5f3:	89 04 24             	mov    %eax,(%esp)
 81bb5f6:	e8 e7 ce f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81bb5fb:	e8 a7 ed f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81bb600:	89 04 24             	mov    %eax,(%esp)
 81bb603:	e8 18 b5 f5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81bb608:	83 f8 0e             	cmp    $0xe,%eax
 81bb60b:	0f 94 c0             	sete   %al
 81bb60e:	84 c0                	test   %al,%al
 81bb610:	74 0c                	je     81bb61e <_ZN23COnlinePreliminaryEvent8EndEventEv+0x3c>
 81bb612:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81bb619:	e8 bc 52 3a 00       	call   85608da <_ZN18online_preliminary18COnlinePreliminary12SetMatchAbleEb>
 81bb61e:	c9                   	leave
 81bb61f:	c3                   	ret

```

```c
// COnlinePreliminaryEvent::EndEvent @ 0x81bb5e2

/* COnlinePreliminaryEvent::EndEvent() */

void __thiscall COnlinePreliminaryEvent::EndEvent(COnlinePreliminaryEvent *this)

{
  GameWorld *this_00;
  int iVar1;
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 == 0xe) {
    online_preliminary::COnlinePreliminary::SetMatchAble(false);
  }
  return;
}

```

---

## StartEvent

```asm
// === 081bb4fa COnlinePreliminaryEvent::StartEvent  [0x081bb4fa-0x81bb56d] ===
 81bb4fa:	55                   	push   %ebp
 81bb4fb:	89 e5                	mov    %esp,%ebp
 81bb4fd:	83 ec 28             	sub    $0x28,%esp
 81bb500:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb503:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81bb50a:	00 
 81bb50b:	89 04 24             	mov    %eax,(%esp)
 81bb50e:	e8 cf cf f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81bb513:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bb51a:	00 
 81bb51b:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 81bb522:	00 
 81bb523:	c7 44 24 04 20 f9 bb 	movl   $0x8bbf920,0x4(%esp)
 81bb52a:	08 
 81bb52b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb52e:	89 04 24             	mov    %eax,(%esp)
 81bb531:	e8 e2 41 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81bb536:	c7 44 24 04 c0 ec bb 	movl   $0x8bbecc0,0x4(%esp)
 81bb53d:	08 
 81bb53e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb541:	89 04 24             	mov    %eax,(%esp)
 81bb544:	e8 3f 42 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81bb549:	e8 59 ee f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81bb54e:	89 04 24             	mov    %eax,(%esp)
 81bb551:	e8 ca b5 f5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81bb556:	83 f8 0e             	cmp    $0xe,%eax
 81bb559:	0f 94 c0             	sete   %al
 81bb55c:	84 c0                	test   %al,%al
 81bb55e:	74 0c                	je     81bb56c <_ZN23COnlinePreliminaryEvent10StartEventEv+0x72>
 81bb560:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81bb567:	e8 6e 53 3a 00       	call   85608da <_ZN18online_preliminary18COnlinePreliminary12SetMatchAbleEb>
 81bb56c:	c9                   	leave
 81bb56d:	c3                   	ret

```

```c
// COnlinePreliminaryEvent::StartEvent @ 0x81bb4fa

/* COnlinePreliminaryEvent::StartEvent() */

void __thiscall COnlinePreliminaryEvent::StartEvent(COnlinePreliminaryEvent *this)

{
  GameWorld *this_00;
  int iVar1;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void COnlinePreliminaryEvent::StartEvent()",0x15,0);
  cMyTrace::operator()(local_1c,"COnlinePreliminaryEvent Start!");
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 == 0xe) {
    online_preliminary::COnlinePreliminary::SetMatchAble(true);
  }
  return;
}

```

---

## StartEvent_081bb56e

```asm
// === 081bb56e COnlinePreliminaryEvent::StartEvent  [0x081bb56e-0x81bb5e1] ===
 81bb56e:	55                   	push   %ebp
 81bb56f:	89 e5                	mov    %esp,%ebp
 81bb571:	83 ec 28             	sub    $0x28,%esp
 81bb574:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb577:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81bb57e:	00 
 81bb57f:	89 04 24             	mov    %eax,(%esp)
 81bb582:	e8 5b cf f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81bb587:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bb58e:	00 
 81bb58f:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 81bb596:	00 
 81bb597:	c7 44 24 04 e0 f8 bb 	movl   $0x8bbf8e0,0x4(%esp)
 81bb59e:	08 
 81bb59f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb5a2:	89 04 24             	mov    %eax,(%esp)
 81bb5a5:	e8 6e 41 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81bb5aa:	c7 44 24 04 c0 ec bb 	movl   $0x8bbecc0,0x4(%esp)
 81bb5b1:	08 
 81bb5b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb5b5:	89 04 24             	mov    %eax,(%esp)
 81bb5b8:	e8 cb 41 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81bb5bd:	e8 e5 ed f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81bb5c2:	89 04 24             	mov    %eax,(%esp)
 81bb5c5:	e8 56 b5 f5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81bb5ca:	83 f8 0e             	cmp    $0xe,%eax
 81bb5cd:	0f 94 c0             	sete   %al
 81bb5d0:	84 c0                	test   %al,%al
 81bb5d2:	74 0c                	je     81bb5e0 <_ZN23COnlinePreliminaryEvent10StartEventE10Word_Param+0x72>
 81bb5d4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81bb5db:	e8 fa 52 3a 00       	call   85608da <_ZN18online_preliminary18COnlinePreliminary12SetMatchAbleEb>
 81bb5e0:	c9                   	leave
 81bb5e1:	c3                   	ret

```

```c
// COnlinePreliminaryEvent::StartEvent @ 0x81bb56e

/* COnlinePreliminaryEvent::StartEvent(Word_Param) */

void COnlinePreliminaryEvent::StartEvent(CEventBase *param_1)

{
  GameWorld *this;
  int iVar1;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void COnlinePreliminaryEvent::StartEvent(Word_Param)",0x1f,0)
  ;
  cMyTrace::operator()(local_1c,"COnlinePreliminaryEvent Start!");
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if (iVar1 == 0xe) {
    online_preliminary::COnlinePreliminary::SetMatchAble(true);
  }
  return;
}

```

---

## ~COnlinePreliminaryEvent

```asm
// === 081bb4ac COnlinePreliminaryEvent::~COnlinePreliminaryEvent  [0x081bb4ac-0x81bb4db] ===
 81bb4ac:	55                   	push   %ebp
 81bb4ad:	89 e5                	mov    %esp,%ebp
 81bb4af:	83 ec 18             	sub    $0x18,%esp
 81bb4b2:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb4b5:	c7 00 68 f9 bb 08    	movl   $0x8bbf968,(%eax)
 81bb4bb:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb4be:	89 04 24             	mov    %eax,(%esp)
 81bb4c1:	e8 8c f9 f4 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81bb4c6:	b8 00 00 00 00       	mov    $0x0,%eax
 81bb4cb:	84 c0                	test   %al,%al
 81bb4cd:	74 0b                	je     81bb4da <_ZN23COnlinePreliminaryEventD1Ev+0x2e>
 81bb4cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb4d2:	89 04 24             	mov    %eax,(%esp)
 81bb4d5:	e8 16 90 56 00       	call   87244f0 <_ZdlPv>
 81bb4da:	c9                   	leave
 81bb4db:	c3                   	ret

```

```c
// COnlinePreliminaryEvent::~COnlinePreliminaryEvent @ 0x81bb4ac

/* WARNING: Removing unreachable block (ram,0x081bb4cf) */
/* COnlinePreliminaryEvent::~COnlinePreliminaryEvent() */

void __thiscall COnlinePreliminaryEvent::~COnlinePreliminaryEvent(COnlinePreliminaryEvent *this)

{
  *(undefined ***)this = &PTR__COnlinePreliminaryEvent_08bbf968;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~COnlinePreliminaryEvent_081bb4dc

```asm
// === 081bb4dc COnlinePreliminaryEvent::~COnlinePreliminaryEvent  [0x081bb4dc-0x81bb4f9] ===
 81bb4dc:	55                   	push   %ebp
 81bb4dd:	89 e5                	mov    %esp,%ebp
 81bb4df:	83 ec 18             	sub    $0x18,%esp
 81bb4e2:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb4e5:	89 04 24             	mov    %eax,(%esp)
 81bb4e8:	e8 bf ff ff ff       	call   81bb4ac <_ZN23COnlinePreliminaryEventD1Ev>
 81bb4ed:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb4f0:	89 04 24             	mov    %eax,(%esp)
 81bb4f3:	e8 f8 8f 56 00       	call   87244f0 <_ZdlPv>
 81bb4f8:	c9                   	leave
 81bb4f9:	c3                   	ret

```

```c
// COnlinePreliminaryEvent::~COnlinePreliminaryEvent @ 0x81bb4dc

/* COnlinePreliminaryEvent::~COnlinePreliminaryEvent() */

void __thiscall COnlinePreliminaryEvent::~COnlinePreliminaryEvent(COnlinePreliminaryEvent *this)

{
  ~COnlinePreliminaryEvent(this);
  operator_delete(this);
  return;
}

```

