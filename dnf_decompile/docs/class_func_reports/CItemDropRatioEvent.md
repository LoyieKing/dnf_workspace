# CItemDropRatioEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CItemDropRatioEvent

```asm
// === 085331d0 CItemDropRatioEvent::CItemDropRatioEvent  [0x085331d0-0x85331f5] ===
 85331d0:	55                   	push   %ebp
 85331d1:	89 e5                	mov    %esp,%ebp
 85331d3:	83 ec 18             	sub    $0x18,%esp
 85331d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85331d9:	89 04 24             	mov    %eax,(%esp)
 85331dc:	e8 4b 7c bd ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 85331e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85331e4:	c7 00 68 93 c9 08    	movl   $0x8c99368,(%eax)
 85331ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85331ed:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 85331f4:	c9                   	leave
 85331f5:	c3                   	ret

```

```c
// CItemDropRatioEvent::CItemDropRatioEvent @ 0x85331d0

/* CItemDropRatioEvent::CItemDropRatioEvent() */

void __thiscall CItemDropRatioEvent::CItemDropRatioEvent(CItemDropRatioEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CItemDropRatioEvent_08c99368;
  *(undefined4 *)(this + 0xc) = 1;
  return;
}

```

---

## EndEvent

```asm
// === 08533340 CItemDropRatioEvent::EndEvent  [0x08533340-0x85333b0] ===
 8533340:	55                   	push   %ebp
 8533341:	89 e5                	mov    %esp,%ebp
 8533343:	83 ec 28             	sub    $0x28,%esp
 8533346:	8b 45 08             	mov    0x8(%ebp),%eax
 8533349:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8533350:	00 
 8533351:	89 04 24             	mov    %eax,(%esp)
 8533354:	e8 89 51 b9 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8533359:	8b 45 08             	mov    0x8(%ebp),%eax
 853335c:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 8533363:	e8 33 8e b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8533368:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 853336d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8533371:	89 04 24             	mov    %eax,(%esp)
 8533374:	e8 5f d4 e2 ff       	call   83607d8 <_ZN12CDataManager15SetItemDropRateEf>
 8533379:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8533380:	00 
 8533381:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8533388:	00 
 8533389:	c7 44 24 04 a0 92 c9 	movl   $0x8c992a0,0x4(%esp)
 8533390:	08 
 8533391:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8533394:	89 04 24             	mov    %eax,(%esp)
 8533397:	e8 7c c3 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 853339c:	c7 44 24 04 77 86 c9 	movl   $0x8c98677,0x4(%esp)
 85333a3:	08 
 85333a4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85333a7:	89 04 24             	mov    %eax,(%esp)
 85333aa:	e8 d9 c3 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85333af:	c9                   	leave
 85333b0:	c3                   	ret

```

```c
// CItemDropRatioEvent::EndEvent @ 0x8533340

/* CItemDropRatioEvent::EndEvent() */

void __thiscall CItemDropRatioEvent::EndEvent(CItemDropRatioEvent *this)

{
  CDataManager *this_00;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 1;
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::SetItemDropRate(this_00,1.0);
  cMyTrace::cMyTrace(local_1c,"virtual void CItemDropRatioEvent::EndEvent()",0x28,0);
  cMyTrace::operator()(local_1c,"Item Drop Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 08533244 CItemDropRatioEvent::StartEvent  [0x08533244-0x85332b5] ===
 8533244:	55                   	push   %ebp
 8533245:	89 e5                	mov    %esp,%ebp
 8533247:	83 ec 28             	sub    $0x28,%esp
 853324a:	8b 45 08             	mov    0x8(%ebp),%eax
 853324d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8533254:	00 
 8533255:	89 04 24             	mov    %eax,(%esp)
 8533258:	e8 85 52 b9 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 853325d:	8b 45 08             	mov    0x8(%ebp),%eax
 8533260:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 8533267:	e8 2f 8f b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 853326c:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 8533271:	89 54 24 04          	mov    %edx,0x4(%esp)
 8533275:	89 04 24             	mov    %eax,(%esp)
 8533278:	e8 5b d5 e2 ff       	call   83607d8 <_ZN12CDataManager15SetItemDropRateEf>
 853327d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8533284:	00 
 8533285:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 853328c:	00 
 853328d:	c7 44 24 04 20 93 c9 	movl   $0x8c99320,0x4(%esp)
 8533294:	08 
 8533295:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8533298:	89 04 24             	mov    %eax,(%esp)
 853329b:	e8 78 c4 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85332a0:	c7 44 24 04 60 86 c9 	movl   $0x8c98660,0x4(%esp)
 85332a7:	08 
 85332a8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85332ab:	89 04 24             	mov    %eax,(%esp)
 85332ae:	e8 d5 c4 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85332b3:	c9                   	leave
 85332b4:	c3                   	ret
 85332b5:	90                   	nop

```

```c
// CItemDropRatioEvent::StartEvent @ 0x8533244

/* CItemDropRatioEvent::StartEvent() */

void __thiscall CItemDropRatioEvent::StartEvent(CItemDropRatioEvent *this)

{
  CDataManager *this_00;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 1;
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::SetItemDropRate(this_00,1.0);
  cMyTrace::cMyTrace(local_1c,"virtual void CItemDropRatioEvent::StartEvent()",0x16,0);
  cMyTrace::operator()(local_1c,"Item Drop Event Start!");
  return;
}

```

---

## StartEvent_085332b6

```asm
// === 085332b6 CItemDropRatioEvent::StartEvent  [0x085332b6-0x853333f] ===
 85332b6:	55                   	push   %ebp
 85332b7:	89 e5                	mov    %esp,%ebp
 85332b9:	83 ec 38             	sub    $0x38,%esp
 85332bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85332bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85332c6:	00 
 85332c7:	89 04 24             	mov    %eax,(%esp)
 85332ca:	e8 13 52 b9 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 85332cf:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 85332d3:	0f b7 d0             	movzwl %ax,%edx
 85332d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85332d9:	89 50 0c             	mov    %edx,0xc(%eax)
 85332dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85332df:	8b 40 0c             	mov    0xc(%eax),%eax
 85332e2:	ba 00 00 00 00       	mov    $0x0,%edx
 85332e7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85332ea:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 85332ed:	df 6d e0             	fildll -0x20(%ebp)
 85332f0:	d9 5d dc             	fstps  -0x24(%ebp)
 85332f3:	e8 a3 8e b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85332f8:	d9 45 dc             	flds   -0x24(%ebp)
 85332fb:	d9 5c 24 04          	fstps  0x4(%esp)
 85332ff:	89 04 24             	mov    %eax,(%esp)
 8533302:	e8 d1 d4 e2 ff       	call   83607d8 <_ZN12CDataManager15SetItemDropRateEf>
 8533307:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 853330e:	00 
 853330f:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 8533316:	00 
 8533317:	c7 44 24 04 e0 92 c9 	movl   $0x8c992e0,0x4(%esp)
 853331e:	08 
 853331f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8533322:	89 04 24             	mov    %eax,(%esp)
 8533325:	e8 ee c3 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 853332a:	c7 44 24 04 60 86 c9 	movl   $0x8c98660,0x4(%esp)
 8533331:	08 
 8533332:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8533335:	89 04 24             	mov    %eax,(%esp)
 8533338:	e8 4b c4 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 853333d:	c9                   	leave
 853333e:	c3                   	ret
 853333f:	90                   	nop

```

```c
// CItemDropRatioEvent::StartEvent @ 0x85332b6

/* CItemDropRatioEvent::StartEvent(Word_Param) */

void __thiscall CItemDropRatioEvent::StartEvent(CItemDropRatioEvent *this,ushort param_2)

{
  uint uVar1;
  CDataManager *this_00;
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  uVar1 = *(uint *)(this + 0xc);
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::SetItemDropRate(this_00,(float)uVar1);
  cMyTrace::cMyTrace(local_1c,"virtual void CItemDropRatioEvent::StartEvent(Word_Param)",0x1f,0);
  cMyTrace::operator()(local_1c,"Item Drop Event Start!");
  return;
}

```

---

## ~CItemDropRatioEvent

```asm
// === 085331f6 CItemDropRatioEvent::~CItemDropRatioEvent  [0x085331f6-0x8533225] ===
 85331f6:	55                   	push   %ebp
 85331f7:	89 e5                	mov    %esp,%ebp
 85331f9:	83 ec 18             	sub    $0x18,%esp
 85331fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85331ff:	c7 00 68 93 c9 08    	movl   $0x8c99368,(%eax)
 8533205:	8b 45 08             	mov    0x8(%ebp),%eax
 8533208:	89 04 24             	mov    %eax,(%esp)
 853320b:	e8 42 7c bd ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8533210:	b8 00 00 00 00       	mov    $0x0,%eax
 8533215:	84 c0                	test   %al,%al
 8533217:	74 0b                	je     8533224 <_ZN19CItemDropRatioEventD1Ev+0x2e>
 8533219:	8b 45 08             	mov    0x8(%ebp),%eax
 853321c:	89 04 24             	mov    %eax,(%esp)
 853321f:	e8 cc 12 1f 00       	call   87244f0 <_ZdlPv>
 8533224:	c9                   	leave
 8533225:	c3                   	ret

```

```c
// CItemDropRatioEvent::~CItemDropRatioEvent @ 0x85331f6

/* WARNING: Removing unreachable block (ram,0x08533219) */
/* CItemDropRatioEvent::~CItemDropRatioEvent() */

void __thiscall CItemDropRatioEvent::~CItemDropRatioEvent(CItemDropRatioEvent *this)

{
  *(undefined ***)this = &PTR__CItemDropRatioEvent_08c99368;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CItemDropRatioEvent_08533226

```asm
// === 08533226 CItemDropRatioEvent::~CItemDropRatioEvent  [0x08533226-0x8533243] ===
 8533226:	55                   	push   %ebp
 8533227:	89 e5                	mov    %esp,%ebp
 8533229:	83 ec 18             	sub    $0x18,%esp
 853322c:	8b 45 08             	mov    0x8(%ebp),%eax
 853322f:	89 04 24             	mov    %eax,(%esp)
 8533232:	e8 bf ff ff ff       	call   85331f6 <_ZN19CItemDropRatioEventD1Ev>
 8533237:	8b 45 08             	mov    0x8(%ebp),%eax
 853323a:	89 04 24             	mov    %eax,(%esp)
 853323d:	e8 ae 12 1f 00       	call   87244f0 <_ZdlPv>
 8533242:	c9                   	leave
 8533243:	c3                   	ret

```

```c
// CItemDropRatioEvent::~CItemDropRatioEvent @ 0x8533226

/* CItemDropRatioEvent::~CItemDropRatioEvent() */

void __thiscall CItemDropRatioEvent::~CItemDropRatioEvent(CItemDropRatioEvent *this)

{
  ~CItemDropRatioEvent(this);
  operator_delete(this);
  return;
}

```

