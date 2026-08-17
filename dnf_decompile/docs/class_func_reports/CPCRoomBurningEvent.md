# CPCRoomBurningEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CPCRoomBurningEvent

```asm
// === 082671dc CPCRoomBurningEvent::CPCRoomBurningEvent  [0x082671dc-0x8267201] ===
 82671dc:	55                   	push   %ebp
 82671dd:	89 e5                	mov    %esp,%ebp
 82671df:	83 ec 18             	sub    $0x18,%esp
 82671e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82671e5:	89 04 24             	mov    %eax,(%esp)
 82671e8:	e8 3f 3c ea ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 82671ed:	8b 45 08             	mov    0x8(%ebp),%eax
 82671f0:	c7 00 48 e8 be 08    	movl   $0x8bee848,(%eax)
 82671f6:	8b 45 08             	mov    0x8(%ebp),%eax
 82671f9:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 8267200:	c9                   	leave
 8267201:	c3                   	ret

```

```c
// CPCRoomBurningEvent::CPCRoomBurningEvent @ 0x82671dc

/* CPCRoomBurningEvent::CPCRoomBurningEvent() */

void __thiscall CPCRoomBurningEvent::CPCRoomBurningEvent(CPCRoomBurningEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPCRoomBurningEvent_08bee848;
  *(undefined4 *)(this + 0xc) = 100;
  return;
}

```

---

## EndEvent

```asm
// === 0826730a CPCRoomBurningEvent::EndEvent  [0x0826730a-0x8267365] ===
 826730a:	55                   	push   %ebp
 826730b:	89 e5                	mov    %esp,%ebp
 826730d:	83 ec 28             	sub    $0x28,%esp
 8267310:	8b 45 08             	mov    0x8(%ebp),%eax
 8267313:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826731a:	00 
 826731b:	89 04 24             	mov    %eax,(%esp)
 826731e:	e8 bf 11 e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8267323:	8b 45 08             	mov    0x8(%ebp),%eax
 8267326:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 826732d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8267334:	00 
 8267335:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 826733c:	00 
 826733d:	c7 44 24 04 10 e8 be 	movl   $0x8bee810,0x4(%esp)
 8267344:	08 
 8267345:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8267348:	89 04 24             	mov    %eax,(%esp)
 826734b:	e8 c8 83 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8267350:	c7 44 24 04 7d dc be 	movl   $0x8bedc7d,0x4(%esp)
 8267357:	08 
 8267358:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826735b:	89 04 24             	mov    %eax,(%esp)
 826735e:	e8 25 84 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8267363:	c9                   	leave
 8267364:	c3                   	ret
 8267365:	90                   	nop

```

```c
// CPCRoomBurningEvent::EndEvent @ 0x826730a

/* CPCRoomBurningEvent::EndEvent() */

void __thiscall CPCRoomBurningEvent::EndEvent(CPCRoomBurningEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x24,0);
  cMyTrace::operator()(local_1c,"PC Room Burning Event End!");
  return;
}

```

---

## IsEventing

```asm
// === 08267366 CPCRoomBurningEvent::IsEventing  [0x08267366-0x82673ca] ===
 8267366:	55                   	push   %ebp
 8267367:	89 e5                	mov    %esp,%ebp
 8267369:	83 ec 18             	sub    $0x18,%esp
 826736c:	8b 45 08             	mov    0x8(%ebp),%eax
 826736f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8267376:	00 
 8267377:	89 04 24             	mov    %eax,(%esp)
 826737a:	e8 7b 11 e6 ff       	call   80c84fa <_ZNK10CEventBase10IsEventingEP5CUser>
 826737f:	83 f0 01             	xor    $0x1,%eax
 8267382:	84 c0                	test   %al,%al
 8267384:	75 06                	jne    826738c <_ZNK19CPCRoomBurningEvent10IsEventingEP5CUser+0x26>
 8267386:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826738a:	75 07                	jne    8267393 <_ZNK19CPCRoomBurningEvent10IsEventingEP5CUser+0x2d>
 826738c:	b8 01 00 00 00       	mov    $0x1,%eax
 8267391:	eb 05                	jmp    8267398 <_ZNK19CPCRoomBurningEvent10IsEventingEP5CUser+0x32>
 8267393:	b8 00 00 00 00       	mov    $0x0,%eax
 8267398:	84 c0                	test   %al,%al
 826739a:	74 07                	je     82673a3 <_ZNK19CPCRoomBurningEvent10IsEventingEP5CUser+0x3d>
 826739c:	b8 00 00 00 00       	mov    $0x0,%eax
 82673a1:	eb 26                	jmp    82673c9 <_ZNK19CPCRoomBurningEvent10IsEventingEP5CUser+0x63>
 82673a3:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 82673aa:	00 
 82673ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 82673ae:	89 04 24             	mov    %eax,(%esp)
 82673b1:	e8 58 ec e7 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 82673b6:	83 f0 01             	xor    $0x1,%eax
 82673b9:	84 c0                	test   %al,%al
 82673bb:	74 07                	je     82673c4 <_ZNK19CPCRoomBurningEvent10IsEventingEP5CUser+0x5e>
 82673bd:	b8 00 00 00 00       	mov    $0x0,%eax
 82673c2:	eb 05                	jmp    82673c9 <_ZNK19CPCRoomBurningEvent10IsEventingEP5CUser+0x63>
 82673c4:	b8 01 00 00 00       	mov    $0x1,%eax
 82673c9:	c9                   	leave
 82673ca:	c3                   	ret

```

```c
// CPCRoomBurningEvent::IsEventing @ 0x8267366

/* CPCRoomBurningEvent::IsEventing(CUser*) const */

undefined4 __thiscall CPCRoomBurningEvent::IsEventing(CPCRoomBurningEvent *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = CEventBase::IsEventing((CUser *)this);
  if ((cVar2 == '\x01') && (param_1 != (CUser *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = CUser::isAffectedPremium(param_1,0xc);
    if (cVar2 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## StartEvent

```asm
// === 08267250 CPCRoomBurningEvent::StartEvent  [0x08267250-0x82672ab] ===
 8267250:	55                   	push   %ebp
 8267251:	89 e5                	mov    %esp,%ebp
 8267253:	83 ec 28             	sub    $0x28,%esp
 8267256:	8b 45 08             	mov    0x8(%ebp),%eax
 8267259:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8267260:	00 
 8267261:	89 04 24             	mov    %eax,(%esp)
 8267264:	e8 79 12 e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8267269:	8b 45 08             	mov    0x8(%ebp),%eax
 826726c:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 8267273:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826727a:	00 
 826727b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8267282:	00 
 8267283:	c7 44 24 04 24 e8 be 	movl   $0x8bee824,0x4(%esp)
 826728a:	08 
 826728b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826728e:	89 04 24             	mov    %eax,(%esp)
 8267291:	e8 82 84 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8267296:	c7 44 24 04 60 dc be 	movl   $0x8bedc60,0x4(%esp)
 826729d:	08 
 826729e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82672a1:	89 04 24             	mov    %eax,(%esp)
 82672a4:	e8 df 84 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82672a9:	c9                   	leave
 82672aa:	c3                   	ret
 82672ab:	90                   	nop

```

```c
// CPCRoomBurningEvent::StartEvent @ 0x8267250

/* CPCRoomBurningEvent::StartEvent() */

void __thiscall CPCRoomBurningEvent::StartEvent(CPCRoomBurningEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x14,0);
  cMyTrace::operator()(local_1c,"PC Room Burning Event Start!");
  return;
}

```

---

## StartEvent_082672ac

```asm
// === 082672ac CPCRoomBurningEvent::StartEvent  [0x082672ac-0x8267309] ===
 82672ac:	55                   	push   %ebp
 82672ad:	89 e5                	mov    %esp,%ebp
 82672af:	83 ec 28             	sub    $0x28,%esp
 82672b2:	8b 45 08             	mov    0x8(%ebp),%eax
 82672b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82672bc:	00 
 82672bd:	89 04 24             	mov    %eax,(%esp)
 82672c0:	e8 1d 12 e6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 82672c5:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 82672c9:	0f b7 d0             	movzwl %ax,%edx
 82672cc:	8b 45 08             	mov    0x8(%ebp),%eax
 82672cf:	89 50 0c             	mov    %edx,0xc(%eax)
 82672d2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82672d9:	00 
 82672da:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 82672e1:	00 
 82672e2:	c7 44 24 04 19 e8 be 	movl   $0x8bee819,0x4(%esp)
 82672e9:	08 
 82672ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82672ed:	89 04 24             	mov    %eax,(%esp)
 82672f0:	e8 23 84 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82672f5:	c7 44 24 04 60 dc be 	movl   $0x8bedc60,0x4(%esp)
 82672fc:	08 
 82672fd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8267300:	89 04 24             	mov    %eax,(%esp)
 8267303:	e8 80 84 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8267308:	c9                   	leave
 8267309:	c3                   	ret

```

```c
// CPCRoomBurningEvent::StartEvent @ 0x82672ac

/* CPCRoomBurningEvent::StartEvent(Word_Param) */

void __thiscall CPCRoomBurningEvent::StartEvent(CPCRoomBurningEvent *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1c,0);
  cMyTrace::operator()(local_1c,"PC Room Burning Event Start!");
  return;
}

```

---

## ~CPCRoomBurningEvent

```asm
// === 08267202 CPCRoomBurningEvent::~CPCRoomBurningEvent  [0x08267202-0x8267231] ===
 8267202:	55                   	push   %ebp
 8267203:	89 e5                	mov    %esp,%ebp
 8267205:	83 ec 18             	sub    $0x18,%esp
 8267208:	8b 45 08             	mov    0x8(%ebp),%eax
 826720b:	c7 00 48 e8 be 08    	movl   $0x8bee848,(%eax)
 8267211:	8b 45 08             	mov    0x8(%ebp),%eax
 8267214:	89 04 24             	mov    %eax,(%esp)
 8267217:	e8 36 3c ea ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 826721c:	b8 00 00 00 00       	mov    $0x0,%eax
 8267221:	84 c0                	test   %al,%al
 8267223:	74 0b                	je     8267230 <_ZN19CPCRoomBurningEventD1Ev+0x2e>
 8267225:	8b 45 08             	mov    0x8(%ebp),%eax
 8267228:	89 04 24             	mov    %eax,(%esp)
 826722b:	e8 c0 d2 4b 00       	call   87244f0 <_ZdlPv>
 8267230:	c9                   	leave
 8267231:	c3                   	ret

```

```c
// CPCRoomBurningEvent::~CPCRoomBurningEvent @ 0x8267202

/* WARNING: Removing unreachable block (ram,0x08267225) */
/* CPCRoomBurningEvent::~CPCRoomBurningEvent() */

void __thiscall CPCRoomBurningEvent::~CPCRoomBurningEvent(CPCRoomBurningEvent *this)

{
  *(undefined ***)this = &PTR__CPCRoomBurningEvent_08bee848;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CPCRoomBurningEvent_08267232

```asm
// === 08267232 CPCRoomBurningEvent::~CPCRoomBurningEvent  [0x08267232-0x826724f] ===
 8267232:	55                   	push   %ebp
 8267233:	89 e5                	mov    %esp,%ebp
 8267235:	83 ec 18             	sub    $0x18,%esp
 8267238:	8b 45 08             	mov    0x8(%ebp),%eax
 826723b:	89 04 24             	mov    %eax,(%esp)
 826723e:	e8 bf ff ff ff       	call   8267202 <_ZN19CPCRoomBurningEventD1Ev>
 8267243:	8b 45 08             	mov    0x8(%ebp),%eax
 8267246:	89 04 24             	mov    %eax,(%esp)
 8267249:	e8 a2 d2 4b 00       	call   87244f0 <_ZdlPv>
 826724e:	c9                   	leave
 826724f:	c3                   	ret

```

```c
// CPCRoomBurningEvent::~CPCRoomBurningEvent @ 0x8267232

/* CPCRoomBurningEvent::~CPCRoomBurningEvent() */

void __thiscall CPCRoomBurningEvent::~CPCRoomBurningEvent(CPCRoomBurningEvent *this)

{
  ~CPCRoomBurningEvent(this);
  operator_delete(this);
  return;
}

```

