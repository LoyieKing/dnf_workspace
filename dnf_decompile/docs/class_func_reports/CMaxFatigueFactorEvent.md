# CMaxFatigueFactorEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CMaxFatigueFactorEvent

```asm
// === 081b2718 CMaxFatigueFactorEvent::CMaxFatigueFactorEvent  [0x081b2718-0x81b273d] ===
 81b2718:	55                   	push   %ebp
 81b2719:	89 e5                	mov    %esp,%ebp
 81b271b:	83 ec 18             	sub    $0x18,%esp
 81b271e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2721:	89 04 24             	mov    %eax,(%esp)
 81b2724:	e8 03 87 f5 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81b2729:	8b 45 08             	mov    0x8(%ebp),%eax
 81b272c:	c7 00 08 74 bb 08    	movl   $0x8bb7408,(%eax)
 81b2732:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2735:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 81b273c:	c9                   	leave
 81b273d:	c3                   	ret

```

```c
// CMaxFatigueFactorEvent::CMaxFatigueFactorEvent @ 0x81b2718

/* CMaxFatigueFactorEvent::CMaxFatigueFactorEvent() */

void __thiscall CMaxFatigueFactorEvent::CMaxFatigueFactorEvent(CMaxFatigueFactorEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CMaxFatigueFactorEvent_08bb7408;
  *(undefined4 *)(this + 0xc) = 100;
  return;
}

```

---

## EndEvent

```asm
// === 081b284c CMaxFatigueFactorEvent::EndEvent  [0x081b284c-0x81b28ab] ===
 81b284c:	55                   	push   %ebp
 81b284d:	89 e5                	mov    %esp,%ebp
 81b284f:	83 ec 28             	sub    $0x28,%esp
 81b2852:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2855:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b285c:	00 
 81b285d:	89 04 24             	mov    %eax,(%esp)
 81b2860:	e8 7d 5c f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b2865:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2868:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 81b286f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b2876:	00 
 81b2877:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 81b287e:	00 
 81b287f:	c7 44 24 04 d0 73 bb 	movl   $0x8bb73d0,0x4(%esp)
 81b2886:	08 
 81b2887:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b288a:	89 04 24             	mov    %eax,(%esp)
 81b288d:	e8 86 ce 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b2892:	c7 44 24 04 40 68 bb 	movl   $0x8bb6840,0x4(%esp)
 81b2899:	08 
 81b289a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b289d:	89 04 24             	mov    %eax,(%esp)
 81b28a0:	e8 e3 ce 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b28a5:	e8 de a1 f7 ff       	call   812ca88 <_ZN16CLocalChina_User16SendFatigueEventEv>
 81b28aa:	c9                   	leave
 81b28ab:	c3                   	ret

```

```c
// CMaxFatigueFactorEvent::EndEvent @ 0x81b284c

/* CMaxFatigueFactorEvent::EndEvent() */

void __thiscall CMaxFatigueFactorEvent::EndEvent(CMaxFatigueFactorEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x2a,0);
  cMyTrace::operator()(local_1c,"Max Fatigue Factor Event End!");
  CLocalChina_User::SendFatigueEvent();
  return;
}

```

---

## StartEvent

```asm
// === 081b278c CMaxFatigueFactorEvent::StartEvent  [0x081b278c-0x81b27e7] ===
 81b278c:	55                   	push   %ebp
 81b278d:	89 e5                	mov    %esp,%ebp
 81b278f:	83 ec 28             	sub    $0x28,%esp
 81b2792:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2795:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b279c:	00 
 81b279d:	89 04 24             	mov    %eax,(%esp)
 81b27a0:	e8 3d 5d f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b27a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b27a8:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 81b27af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b27b6:	00 
 81b27b7:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81b27be:	00 
 81b27bf:	c7 44 24 04 e4 73 bb 	movl   $0x8bb73e4,0x4(%esp)
 81b27c6:	08 
 81b27c7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b27ca:	89 04 24             	mov    %eax,(%esp)
 81b27cd:	e8 46 cf 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b27d2:	c7 44 24 04 20 68 bb 	movl   $0x8bb6820,0x4(%esp)
 81b27d9:	08 
 81b27da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b27dd:	89 04 24             	mov    %eax,(%esp)
 81b27e0:	e8 a3 cf 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b27e5:	c9                   	leave
 81b27e6:	c3                   	ret
 81b27e7:	90                   	nop

```

```c
// CMaxFatigueFactorEvent::StartEvent @ 0x81b278c

/* CMaxFatigueFactorEvent::StartEvent() */

void __thiscall CMaxFatigueFactorEvent::StartEvent(CMaxFatigueFactorEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x16,0);
  cMyTrace::operator()(local_1c,"Max Fatigue Factor Event Start!");
  return;
}

```

---

## StartEvent_081b27e8

```asm
// === 081b27e8 CMaxFatigueFactorEvent::StartEvent  [0x081b27e8-0x81b284b] ===
 81b27e8:	55                   	push   %ebp
 81b27e9:	89 e5                	mov    %esp,%ebp
 81b27eb:	83 ec 28             	sub    $0x28,%esp
 81b27ee:	8b 45 08             	mov    0x8(%ebp),%eax
 81b27f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b27f8:	00 
 81b27f9:	89 04 24             	mov    %eax,(%esp)
 81b27fc:	e8 e1 5c f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b2801:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 81b2805:	0f b7 d0             	movzwl %ax,%edx
 81b2808:	8b 45 08             	mov    0x8(%ebp),%eax
 81b280b:	89 50 0c             	mov    %edx,0xc(%eax)
 81b280e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b2815:	00 
 81b2816:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81b281d:	00 
 81b281e:	c7 44 24 04 d9 73 bb 	movl   $0x8bb73d9,0x4(%esp)
 81b2825:	08 
 81b2826:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b2829:	89 04 24             	mov    %eax,(%esp)
 81b282c:	e8 e7 ce 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b2831:	c7 44 24 04 20 68 bb 	movl   $0x8bb6820,0x4(%esp)
 81b2838:	08 
 81b2839:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b283c:	89 04 24             	mov    %eax,(%esp)
 81b283f:	e8 44 cf 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b2844:	e8 3f a2 f7 ff       	call   812ca88 <_ZN16CLocalChina_User16SendFatigueEventEv>
 81b2849:	c9                   	leave
 81b284a:	c3                   	ret
 81b284b:	90                   	nop

```

```c
// CMaxFatigueFactorEvent::StartEvent @ 0x81b27e8

/* CMaxFatigueFactorEvent::StartEvent(Word_Param) */

void __thiscall CMaxFatigueFactorEvent::StartEvent(CMaxFatigueFactorEvent *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Max Fatigue Factor Event Start!");
  CLocalChina_User::SendFatigueEvent();
  return;
}

```

---

## ~CMaxFatigueFactorEvent

```asm
// === 081b273e CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent  [0x081b273e-0x81b276d] ===
 81b273e:	55                   	push   %ebp
 81b273f:	89 e5                	mov    %esp,%ebp
 81b2741:	83 ec 18             	sub    $0x18,%esp
 81b2744:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2747:	c7 00 08 74 bb 08    	movl   $0x8bb7408,(%eax)
 81b274d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2750:	89 04 24             	mov    %eax,(%esp)
 81b2753:	e8 fa 86 f5 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81b2758:	b8 00 00 00 00       	mov    $0x0,%eax
 81b275d:	84 c0                	test   %al,%al
 81b275f:	74 0b                	je     81b276c <_ZN22CMaxFatigueFactorEventD1Ev+0x2e>
 81b2761:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2764:	89 04 24             	mov    %eax,(%esp)
 81b2767:	e8 84 1d 57 00       	call   87244f0 <_ZdlPv>
 81b276c:	c9                   	leave
 81b276d:	c3                   	ret

```

```c
// CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent @ 0x81b273e

/* WARNING: Removing unreachable block (ram,0x081b2761) */
/* CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent() */

void __thiscall CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent(CMaxFatigueFactorEvent *this)

{
  *(undefined ***)this = &PTR__CMaxFatigueFactorEvent_08bb7408;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CMaxFatigueFactorEvent_081b276e

```asm
// === 081b276e CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent  [0x081b276e-0x81b278b] ===
 81b276e:	55                   	push   %ebp
 81b276f:	89 e5                	mov    %esp,%ebp
 81b2771:	83 ec 18             	sub    $0x18,%esp
 81b2774:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2777:	89 04 24             	mov    %eax,(%esp)
 81b277a:	e8 bf ff ff ff       	call   81b273e <_ZN22CMaxFatigueFactorEventD1Ev>
 81b277f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2782:	89 04 24             	mov    %eax,(%esp)
 81b2785:	e8 66 1d 57 00       	call   87244f0 <_ZdlPv>
 81b278a:	c9                   	leave
 81b278b:	c3                   	ret

```

```c
// CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent @ 0x81b276e

/* CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent() */

void __thiscall CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent(CMaxFatigueFactorEvent *this)

{
  ~CMaxFatigueFactorEvent(this);
  operator_delete(this);
  return;
}

```

