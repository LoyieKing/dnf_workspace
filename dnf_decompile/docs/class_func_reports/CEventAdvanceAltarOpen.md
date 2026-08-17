# CEventAdvanceAltarOpen

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## EndEvent

```asm
// === 080e9534 CEventAdvanceAltarOpen::EndEvent  [0x080e9534-0x80e9584] ===
 80e9534:	55                   	push   %ebp
 80e9535:	89 e5                	mov    %esp,%ebp
 80e9537:	83 ec 28             	sub    $0x28,%esp
 80e953a:	8b 45 08             	mov    0x8(%ebp),%eax
 80e953d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80e9544:	00 
 80e9545:	89 04 24             	mov    %eax,(%esp)
 80e9548:	e8 95 ef fd ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80e954d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80e9554:	00 
 80e9555:	c7 44 24 08 94 04 00 	movl   $0x494,0x8(%esp)
 80e955c:	00 
 80e955d:	c7 44 24 04 60 14 b3 	movl   $0x8b31460,0x4(%esp)
 80e9564:	08 
 80e9565:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9568:	89 04 24             	mov    %eax,(%esp)
 80e956b:	e8 a8 61 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80e9570:	c7 44 24 04 28 08 b3 	movl   $0x8b30828,0x4(%esp)
 80e9577:	08 
 80e9578:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e957b:	89 04 24             	mov    %eax,(%esp)
 80e957e:	e8 05 62 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80e9583:	c9                   	leave
 80e9584:	c3                   	ret

```

```c
// CEventAdvanceAltarOpen::EndEvent @ 0x80e9534

/* CEventAdvanceAltarOpen::EndEvent() */

void __thiscall CEventAdvanceAltarOpen::EndEvent(CEventAdvanceAltarOpen *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void CEventAdvanceAltarOpen::EndEvent()",0x494,0);
  cMyTrace::operator()(local_1c,"CEventAdvanceAltarOpen Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 080e94dc CEventAdvanceAltarOpen::StartEvent  [0x080e94dc-0x80e94e1] ===
 80e94dc:	55                   	push   %ebp
 80e94dd:	89 e5                	mov    %esp,%ebp
 80e94df:	5d                   	pop    %ebp
 80e94e0:	c3                   	ret
 80e94e1:	90                   	nop

```

```c
// CEventAdvanceAltarOpen::StartEvent @ 0x80e94dc

/* CEventAdvanceAltarOpen::StartEvent() */

void CEventAdvanceAltarOpen::StartEvent(void)

{
  return;
}

```

---

## StartEvent_080e94e2

```asm
// === 080e94e2 CEventAdvanceAltarOpen::StartEvent  [0x080e94e2-0x80e9533] ===
 80e94e2:	55                   	push   %ebp
 80e94e3:	89 e5                	mov    %esp,%ebp
 80e94e5:	83 ec 28             	sub    $0x28,%esp
 80e94e8:	8b 45 08             	mov    0x8(%ebp),%eax
 80e94eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e94f2:	00 
 80e94f3:	89 04 24             	mov    %eax,(%esp)
 80e94f6:	e8 e7 ef fd ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80e94fb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80e9502:	00 
 80e9503:	c7 44 24 08 8e 04 00 	movl   $0x48e,0x8(%esp)
 80e950a:	00 
 80e950b:	c7 44 24 04 a0 14 b3 	movl   $0x8b314a0,0x4(%esp)
 80e9512:	08 
 80e9513:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9516:	89 04 24             	mov    %eax,(%esp)
 80e9519:	e8 fa 61 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80e951e:	c7 44 24 04 00 08 b3 	movl   $0x8b30800,0x4(%esp)
 80e9525:	08 
 80e9526:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9529:	89 04 24             	mov    %eax,(%esp)
 80e952c:	e8 57 62 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80e9531:	c9                   	leave
 80e9532:	c3                   	ret
 80e9533:	90                   	nop

```

```c
// CEventAdvanceAltarOpen::StartEvent @ 0x80e94e2

/* CEventAdvanceAltarOpen::StartEvent(Word_Param) */

void CEventAdvanceAltarOpen::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CEventAdvanceAltarOpen::StartEvent(Word_Param)",0x48e,0)
  ;
  cMyTrace::operator()(local_1c,"CEventAdvanceAltarOpen Event Start! ");
  return;
}

```

