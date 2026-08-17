# CCeraShopBonusItemEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CCeraShopBonusItemEvent

```asm
// === 0810a2dc CCeraShopBonusItemEvent::CCeraShopBonusItemEvent  [0x0810a2dc-0x810a2f7] ===
 810a2dc:	55                   	push   %ebp
 810a2dd:	89 e5                	mov    %esp,%ebp
 810a2df:	83 ec 18             	sub    $0x18,%esp
 810a2e2:	8b 45 08             	mov    0x8(%ebp),%eax
 810a2e5:	89 04 24             	mov    %eax,(%esp)
 810a2e8:	e8 3f 0b 00 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 810a2ed:	8b 45 08             	mov    0x8(%ebp),%eax
 810a2f0:	c7 00 a8 84 b4 08    	movl   $0x8b484a8,(%eax)
 810a2f6:	c9                   	leave
 810a2f7:	c3                   	ret

```

```c
// CCeraShopBonusItemEvent::CCeraShopBonusItemEvent @ 0x810a2dc

/* CCeraShopBonusItemEvent::CCeraShopBonusItemEvent() */

void __thiscall CCeraShopBonusItemEvent::CCeraShopBonusItemEvent(CCeraShopBonusItemEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCeraShopBonusItemEvent_08b484a8;
  return;
}

```

---

## EndEvent

```asm
// === 0810a406 CCeraShopBonusItemEvent::EndEvent  [0x0810a406-0x810a456] ===
 810a406:	55                   	push   %ebp
 810a407:	89 e5                	mov    %esp,%ebp
 810a409:	83 ec 28             	sub    $0x28,%esp
 810a40c:	8b 45 08             	mov    0x8(%ebp),%eax
 810a40f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810a416:	00 
 810a417:	89 04 24             	mov    %eax,(%esp)
 810a41a:	e8 c3 e0 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a41f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a426:	00 
 810a427:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 810a42e:	00 
 810a42f:	c7 44 24 04 70 84 b4 	movl   $0x8b48470,0x4(%esp)
 810a436:	08 
 810a437:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a43a:	89 04 24             	mov    %eax,(%esp)
 810a43d:	e8 d6 52 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a442:	c7 44 24 04 c8 7d b4 	movl   $0x8b47dc8,0x4(%esp)
 810a449:	08 
 810a44a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a44d:	89 04 24             	mov    %eax,(%esp)
 810a450:	e8 33 53 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a455:	c9                   	leave
 810a456:	c3                   	ret

```

```c
// CCeraShopBonusItemEvent::EndEvent @ 0x810a406

/* CCeraShopBonusItemEvent::EndEvent() */

void __thiscall CCeraShopBonusItemEvent::EndEvent(CCeraShopBonusItemEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x26,0);
  cMyTrace::operator()(local_1c,"Cera shop bonus item event End");
  return;
}

```

---

## StartEvent

```asm
// === 0810a346 CCeraShopBonusItemEvent::StartEvent  [0x0810a346-0x810a34b] ===
 810a346:	55                   	push   %ebp
 810a347:	89 e5                	mov    %esp,%ebp
 810a349:	5d                   	pop    %ebp
 810a34a:	c3                   	ret
 810a34b:	90                   	nop

```

```c
// CCeraShopBonusItemEvent::StartEvent @ 0x810a346

/* CCeraShopBonusItemEvent::StartEvent() */

void CCeraShopBonusItemEvent::StartEvent(void)

{
  return;
}

```

---

## StartEvent_0810a34c

```asm
// === 0810a34c CCeraShopBonusItemEvent::StartEvent  [0x0810a34c-0x810a405] ===
 810a34c:	55                   	push   %ebp
 810a34d:	89 e5                	mov    %esp,%ebp
 810a34f:	53                   	push   %ebx
 810a350:	83 ec 34             	sub    $0x34,%esp
 810a353:	8b 45 08             	mov    0x8(%ebp),%eax
 810a356:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810a35d:	00 
 810a35e:	89 04 24             	mov    %eax,(%esp)
 810a361:	e8 7c e1 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a366:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 810a36a:	66 85 c0             	test   %ax,%ax
 810a36d:	74 0a                	je     810a379 <_ZN23CCeraShopBonusItemEvent10StartEventE10Word_Param+0x2d>
 810a36f:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 810a373:	66 3d e8 03          	cmp    $0x3e8,%ax
 810a377:	76 43                	jbe    810a3bc <_ZN23CCeraShopBonusItemEvent10StartEventE10Word_Param+0x70>
 810a379:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 810a37d:	0f b7 d8             	movzwl %ax,%ebx
 810a380:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a387:	00 
 810a388:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 810a38f:	00 
 810a390:	c7 44 24 04 79 84 b4 	movl   $0x8b48479,0x4(%esp)
 810a397:	08 
 810a398:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810a39b:	89 04 24             	mov    %eax,(%esp)
 810a39e:	e8 75 53 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a3a3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810a3a7:	c7 44 24 04 60 7d b4 	movl   $0x8b47d60,0x4(%esp)
 810a3ae:	08 
 810a3af:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810a3b2:	89 04 24             	mov    %eax,(%esp)
 810a3b5:	e8 ce 53 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a3ba:	eb 43                	jmp    810a3ff <_ZN23CCeraShopBonusItemEvent10StartEventE10Word_Param+0xb3>
 810a3bc:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 810a3c0:	0f b7 d0             	movzwl %ax,%edx
 810a3c3:	8b 45 08             	mov    0x8(%ebp),%eax
 810a3c6:	89 50 0c             	mov    %edx,0xc(%eax)
 810a3c9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a3d0:	00 
 810a3d1:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 810a3d8:	00 
 810a3d9:	c7 44 24 04 79 84 b4 	movl   $0x8b48479,0x4(%esp)
 810a3e0:	08 
 810a3e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a3e4:	89 04 24             	mov    %eax,(%esp)
 810a3e7:	e8 2c 53 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a3ec:	c7 44 24 04 a4 7d b4 	movl   $0x8b47da4,0x4(%esp)
 810a3f3:	08 
 810a3f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a3f7:	89 04 24             	mov    %eax,(%esp)
 810a3fa:	e8 89 53 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a3ff:	83 c4 34             	add    $0x34,%esp
 810a402:	5b                   	pop    %ebx
 810a403:	5d                   	pop    %ebp
 810a404:	c3                   	ret
 810a405:	90                   	nop

```

```c
// CCeraShopBonusItemEvent::StartEvent @ 0x810a34c

/* CCeraShopBonusItemEvent::StartEvent(Word_Param) */

void __thiscall CCeraShopBonusItemEvent::StartEvent(CCeraShopBonusItemEvent *this,ushort param_2)

{
  cMyTrace local_2c [16];
  cMyTrace local_1c [20];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  if ((param_2 == 0) || (1000 < param_2)) {
    cMyTrace::cMyTrace(local_2c,"StartEvent",0x1a,0);
    cMyTrace::operator()
              (local_2c,"Can not start Cera shop bonus item event. Bonus rate is too big(%d)",
               (uint)param_2);
  }
  else {
    *(uint *)(this + 0xc) = (uint)param_2;
    cMyTrace::cMyTrace(local_1c,"StartEvent",0x20,0);
    cMyTrace::operator()(local_1c,"Cera shop bonus item event Start");
  }
  return;
}

```

---

## ~CCeraShopBonusItemEvent

```asm
// === 0810a2f8 CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent  [0x0810a2f8-0x810a327] ===
 810a2f8:	55                   	push   %ebp
 810a2f9:	89 e5                	mov    %esp,%ebp
 810a2fb:	83 ec 18             	sub    $0x18,%esp
 810a2fe:	8b 45 08             	mov    0x8(%ebp),%eax
 810a301:	c7 00 a8 84 b4 08    	movl   $0x8b484a8,(%eax)
 810a307:	8b 45 08             	mov    0x8(%ebp),%eax
 810a30a:	89 04 24             	mov    %eax,(%esp)
 810a30d:	e8 40 0b 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 810a312:	b8 00 00 00 00       	mov    $0x0,%eax
 810a317:	84 c0                	test   %al,%al
 810a319:	74 0b                	je     810a326 <_ZN23CCeraShopBonusItemEventD1Ev+0x2e>
 810a31b:	8b 45 08             	mov    0x8(%ebp),%eax
 810a31e:	89 04 24             	mov    %eax,(%esp)
 810a321:	e8 ca a1 61 00       	call   87244f0 <_ZdlPv>
 810a326:	c9                   	leave
 810a327:	c3                   	ret

```

```c
// CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent @ 0x810a2f8

/* WARNING: Removing unreachable block (ram,0x0810a31b) */
/* CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent() */

void __thiscall CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent(CCeraShopBonusItemEvent *this)

{
  *(undefined ***)this = &PTR__CCeraShopBonusItemEvent_08b484a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CCeraShopBonusItemEvent_0810a328

```asm
// === 0810a328 CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent  [0x0810a328-0x810a345] ===
 810a328:	55                   	push   %ebp
 810a329:	89 e5                	mov    %esp,%ebp
 810a32b:	83 ec 18             	sub    $0x18,%esp
 810a32e:	8b 45 08             	mov    0x8(%ebp),%eax
 810a331:	89 04 24             	mov    %eax,(%esp)
 810a334:	e8 bf ff ff ff       	call   810a2f8 <_ZN23CCeraShopBonusItemEventD1Ev>
 810a339:	8b 45 08             	mov    0x8(%ebp),%eax
 810a33c:	89 04 24             	mov    %eax,(%esp)
 810a33f:	e8 ac a1 61 00       	call   87244f0 <_ZdlPv>
 810a344:	c9                   	leave
 810a345:	c3                   	ret

```

```c
// CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent @ 0x810a328

/* CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent() */

void __thiscall CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent(CCeraShopBonusItemEvent *this)

{
  ~CCeraShopBonusItemEvent(this);
  operator_delete(this);
  return;
}

```

