# CClearRewardCardEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CClearRewardCardEvent

```asm
// === 0810a720 CClearRewardCardEvent::CClearRewardCardEvent  [0x0810a720-0x810a73b] ===
 810a720:	55                   	push   %ebp
 810a721:	89 e5                	mov    %esp,%ebp
 810a723:	83 ec 18             	sub    $0x18,%esp
 810a726:	8b 45 08             	mov    0x8(%ebp),%eax
 810a729:	89 04 24             	mov    %eax,(%esp)
 810a72c:	e8 fb 06 00 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 810a731:	8b 45 08             	mov    0x8(%ebp),%eax
 810a734:	c7 00 e8 9e b4 08    	movl   $0x8b49ee8,(%eax)
 810a73a:	c9                   	leave
 810a73b:	c3                   	ret

```

```c
// CClearRewardCardEvent::CClearRewardCardEvent @ 0x810a720

/* CClearRewardCardEvent::CClearRewardCardEvent() */

void __thiscall CClearRewardCardEvent::CClearRewardCardEvent(CClearRewardCardEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CClearRewardCardEvent_08b49ee8;
  return;
}

```

---

## EndEvent

```asm
// === 0810a7e2 CClearRewardCardEvent::EndEvent  [0x0810a7e2-0x810a832] ===
 810a7e2:	55                   	push   %ebp
 810a7e3:	89 e5                	mov    %esp,%ebp
 810a7e5:	83 ec 28             	sub    $0x28,%esp
 810a7e8:	8b 45 08             	mov    0x8(%ebp),%eax
 810a7eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810a7f2:	00 
 810a7f3:	89 04 24             	mov    %eax,(%esp)
 810a7f6:	e8 e7 dc fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a7fb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a802:	00 
 810a803:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 810a80a:	00 
 810a80b:	c7 44 24 04 b0 9e b4 	movl   $0x8b49eb0,0x4(%esp)
 810a812:	08 
 810a813:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a816:	89 04 24             	mov    %eax,(%esp)
 810a819:	e8 fa 4e 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a81e:	c7 44 24 04 1e 98 b4 	movl   $0x8b4981e,0x4(%esp)
 810a825:	08 
 810a826:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a829:	89 04 24             	mov    %eax,(%esp)
 810a82c:	e8 57 4f 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a831:	c9                   	leave
 810a832:	c3                   	ret

```

```c
// CClearRewardCardEvent::EndEvent @ 0x810a7e2

/* CClearRewardCardEvent::EndEvent() */

void __thiscall CClearRewardCardEvent::EndEvent(CClearRewardCardEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Clear reward card event End");
  return;
}

```

---

## StartEvent

```asm
// === 0810a78a CClearRewardCardEvent::StartEvent  [0x0810a78a-0x810a78f] ===
 810a78a:	55                   	push   %ebp
 810a78b:	89 e5                	mov    %esp,%ebp
 810a78d:	5d                   	pop    %ebp
 810a78e:	c3                   	ret
 810a78f:	90                   	nop

```

```c
// CClearRewardCardEvent::StartEvent @ 0x810a78a

/* CClearRewardCardEvent::StartEvent() */

void CClearRewardCardEvent::StartEvent(void)

{
  return;
}

```

---

## StartEvent_0810a790

```asm
// === 0810a790 CClearRewardCardEvent::StartEvent  [0x0810a790-0x810a7e1] ===
 810a790:	55                   	push   %ebp
 810a791:	89 e5                	mov    %esp,%ebp
 810a793:	83 ec 28             	sub    $0x28,%esp
 810a796:	8b 45 08             	mov    0x8(%ebp),%eax
 810a799:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810a7a0:	00 
 810a7a1:	89 04 24             	mov    %eax,(%esp)
 810a7a4:	e8 39 dd fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a7a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a7b0:	00 
 810a7b1:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 810a7b8:	00 
 810a7b9:	c7 44 24 04 b9 9e b4 	movl   $0x8b49eb9,0x4(%esp)
 810a7c0:	08 
 810a7c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a7c4:	89 04 24             	mov    %eax,(%esp)
 810a7c7:	e8 4c 4f 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a7cc:	c7 44 24 04 00 98 b4 	movl   $0x8b49800,0x4(%esp)
 810a7d3:	08 
 810a7d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a7d7:	89 04 24             	mov    %eax,(%esp)
 810a7da:	e8 a9 4f 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a7df:	c9                   	leave
 810a7e0:	c3                   	ret
 810a7e1:	90                   	nop

```

```c
// CClearRewardCardEvent::StartEvent @ 0x810a790

/* CClearRewardCardEvent::StartEvent(Word_Param) */

void CClearRewardCardEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"Clear reward card event Start");
  return;
}

```

---

## ~CClearRewardCardEvent

```asm
// === 0810a73c CClearRewardCardEvent::~CClearRewardCardEvent  [0x0810a73c-0x810a76b] ===
 810a73c:	55                   	push   %ebp
 810a73d:	89 e5                	mov    %esp,%ebp
 810a73f:	83 ec 18             	sub    $0x18,%esp
 810a742:	8b 45 08             	mov    0x8(%ebp),%eax
 810a745:	c7 00 e8 9e b4 08    	movl   $0x8b49ee8,(%eax)
 810a74b:	8b 45 08             	mov    0x8(%ebp),%eax
 810a74e:	89 04 24             	mov    %eax,(%esp)
 810a751:	e8 fc 06 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 810a756:	b8 00 00 00 00       	mov    $0x0,%eax
 810a75b:	84 c0                	test   %al,%al
 810a75d:	74 0b                	je     810a76a <_ZN21CClearRewardCardEventD1Ev+0x2e>
 810a75f:	8b 45 08             	mov    0x8(%ebp),%eax
 810a762:	89 04 24             	mov    %eax,(%esp)
 810a765:	e8 86 9d 61 00       	call   87244f0 <_ZdlPv>
 810a76a:	c9                   	leave
 810a76b:	c3                   	ret

```

```c
// CClearRewardCardEvent::~CClearRewardCardEvent @ 0x810a73c

/* WARNING: Removing unreachable block (ram,0x0810a75f) */
/* CClearRewardCardEvent::~CClearRewardCardEvent() */

void __thiscall CClearRewardCardEvent::~CClearRewardCardEvent(CClearRewardCardEvent *this)

{
  *(undefined ***)this = &PTR__CClearRewardCardEvent_08b49ee8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CClearRewardCardEvent_0810a76c

```asm
// === 0810a76c CClearRewardCardEvent::~CClearRewardCardEvent  [0x0810a76c-0x810a789] ===
 810a76c:	55                   	push   %ebp
 810a76d:	89 e5                	mov    %esp,%ebp
 810a76f:	83 ec 18             	sub    $0x18,%esp
 810a772:	8b 45 08             	mov    0x8(%ebp),%eax
 810a775:	89 04 24             	mov    %eax,(%esp)
 810a778:	e8 bf ff ff ff       	call   810a73c <_ZN21CClearRewardCardEventD1Ev>
 810a77d:	8b 45 08             	mov    0x8(%ebp),%eax
 810a780:	89 04 24             	mov    %eax,(%esp)
 810a783:	e8 68 9d 61 00       	call   87244f0 <_ZdlPv>
 810a788:	c9                   	leave
 810a789:	c3                   	ret

```

```c
// CClearRewardCardEvent::~CClearRewardCardEvent @ 0x810a76c

/* CClearRewardCardEvent::~CClearRewardCardEvent() */

void __thiscall CClearRewardCardEvent::~CClearRewardCardEvent(CClearRewardCardEvent *this)

{
  ~CClearRewardCardEvent(this);
  operator_delete(this);
  return;
}

```

