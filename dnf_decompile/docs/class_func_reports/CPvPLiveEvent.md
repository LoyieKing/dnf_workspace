# CPvPLiveEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CPvPLiveEvent

```asm
// === 08268eb8 CPvPLiveEvent::CPvPLiveEvent  [0x08268eb8-0x8268ed3] ===
 8268eb8:	55                   	push   %ebp
 8268eb9:	89 e5                	mov    %esp,%ebp
 8268ebb:	83 ec 18             	sub    $0x18,%esp
 8268ebe:	8b 45 08             	mov    0x8(%ebp),%eax
 8268ec1:	89 04 24             	mov    %eax,(%esp)
 8268ec4:	e8 63 1f ea ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8268ec9:	8b 45 08             	mov    0x8(%ebp),%eax
 8268ecc:	c7 00 88 46 bf 08    	movl   $0x8bf4688,(%eax)
 8268ed2:	c9                   	leave
 8268ed3:	c3                   	ret

```

```c
// CPvPLiveEvent::CPvPLiveEvent @ 0x8268eb8

/* CPvPLiveEvent::CPvPLiveEvent() */

void __thiscall CPvPLiveEvent::CPvPLiveEvent(CPvPLiveEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPvPLiveEvent_08bf4688;
  return;
}

```

---

## EndEvent

```asm
// === 08268fc6 CPvPLiveEvent::EndEvent  [0x08268fc6-0x8268fe0] ===
 8268fc6:	55                   	push   %ebp
 8268fc7:	89 e5                	mov    %esp,%ebp
 8268fc9:	83 ec 18             	sub    $0x18,%esp
 8268fcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8268fcf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268fd6:	00 
 8268fd7:	89 04 24             	mov    %eax,(%esp)
 8268fda:	e8 03 f5 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268fdf:	c9                   	leave
 8268fe0:	c3                   	ret

```

```c
// CPvPLiveEvent::EndEvent @ 0x8268fc6

/* CPvPLiveEvent::EndEvent() */

void __thiscall CPvPLiveEvent::EndEvent(CPvPLiveEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## StartEvent

```asm
// === 08268f22 CPvPLiveEvent::StartEvent  [0x08268f22-0x8268f73] ===
 8268f22:	55                   	push   %ebp
 8268f23:	89 e5                	mov    %esp,%ebp
 8268f25:	83 ec 28             	sub    $0x28,%esp
 8268f28:	8b 45 08             	mov    0x8(%ebp),%eax
 8268f2b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8268f32:	00 
 8268f33:	89 04 24             	mov    %eax,(%esp)
 8268f36:	e8 a7 f5 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268f3b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268f42:	00 
 8268f43:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8268f4a:	00 
 8268f4b:	c7 44 24 04 5b 46 bf 	movl   $0x8bf465b,0x4(%esp)
 8268f52:	08 
 8268f53:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268f56:	89 04 24             	mov    %eax,(%esp)
 8268f59:	e8 ba 67 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268f5e:	c7 44 24 04 c0 3f bf 	movl   $0x8bf3fc0,0x4(%esp)
 8268f65:	08 
 8268f66:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268f69:	89 04 24             	mov    %eax,(%esp)
 8268f6c:	e8 17 68 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8268f71:	c9                   	leave
 8268f72:	c3                   	ret
 8268f73:	90                   	nop

```

```c
// CPvPLiveEvent::StartEvent @ 0x8268f22

/* CPvPLiveEvent::StartEvent() */

void __thiscall CPvPLiveEvent::StartEvent(CPvPLiveEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"CPvPLiveEvent Start!");
  return;
}

```

---

## StartEvent_08268f74

```asm
// === 08268f74 CPvPLiveEvent::StartEvent  [0x08268f74-0x8268fc5] ===
 8268f74:	55                   	push   %ebp
 8268f75:	89 e5                	mov    %esp,%ebp
 8268f77:	83 ec 28             	sub    $0x28,%esp
 8268f7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8268f7d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8268f84:	00 
 8268f85:	89 04 24             	mov    %eax,(%esp)
 8268f88:	e8 55 f5 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268f8d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268f94:	00 
 8268f95:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 8268f9c:	00 
 8268f9d:	c7 44 24 04 50 46 bf 	movl   $0x8bf4650,0x4(%esp)
 8268fa4:	08 
 8268fa5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268fa8:	89 04 24             	mov    %eax,(%esp)
 8268fab:	e8 68 67 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268fb0:	c7 44 24 04 c0 3f bf 	movl   $0x8bf3fc0,0x4(%esp)
 8268fb7:	08 
 8268fb8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268fbb:	89 04 24             	mov    %eax,(%esp)
 8268fbe:	e8 c5 67 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8268fc3:	c9                   	leave
 8268fc4:	c3                   	ret
 8268fc5:	90                   	nop

```

```c
// CPvPLiveEvent::StartEvent @ 0x8268f74

/* CPvPLiveEvent::StartEvent(Word_Param) */

void CPvPLiveEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x19,0);
  cMyTrace::operator()(local_1c,"CPvPLiveEvent Start!");
  return;
}

```

---

## ~CPvPLiveEvent

```asm
// === 08268ed4 CPvPLiveEvent::~CPvPLiveEvent  [0x08268ed4-0x8268f03] ===
 8268ed4:	55                   	push   %ebp
 8268ed5:	89 e5                	mov    %esp,%ebp
 8268ed7:	83 ec 18             	sub    $0x18,%esp
 8268eda:	8b 45 08             	mov    0x8(%ebp),%eax
 8268edd:	c7 00 88 46 bf 08    	movl   $0x8bf4688,(%eax)
 8268ee3:	8b 45 08             	mov    0x8(%ebp),%eax
 8268ee6:	89 04 24             	mov    %eax,(%esp)
 8268ee9:	e8 64 1f ea ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8268eee:	b8 00 00 00 00       	mov    $0x0,%eax
 8268ef3:	84 c0                	test   %al,%al
 8268ef5:	74 0b                	je     8268f02 <_ZN13CPvPLiveEventD1Ev+0x2e>
 8268ef7:	8b 45 08             	mov    0x8(%ebp),%eax
 8268efa:	89 04 24             	mov    %eax,(%esp)
 8268efd:	e8 ee b5 4b 00       	call   87244f0 <_ZdlPv>
 8268f02:	c9                   	leave
 8268f03:	c3                   	ret

```

```c
// CPvPLiveEvent::~CPvPLiveEvent @ 0x8268ed4

/* WARNING: Removing unreachable block (ram,0x08268ef7) */
/* CPvPLiveEvent::~CPvPLiveEvent() */

void __thiscall CPvPLiveEvent::~CPvPLiveEvent(CPvPLiveEvent *this)

{
  *(undefined ***)this = &PTR__CPvPLiveEvent_08bf4688;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CPvPLiveEvent_08268f04

```asm
// === 08268f04 CPvPLiveEvent::~CPvPLiveEvent  [0x08268f04-0x8268f21] ===
 8268f04:	55                   	push   %ebp
 8268f05:	89 e5                	mov    %esp,%ebp
 8268f07:	83 ec 18             	sub    $0x18,%esp
 8268f0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8268f0d:	89 04 24             	mov    %eax,(%esp)
 8268f10:	e8 bf ff ff ff       	call   8268ed4 <_ZN13CPvPLiveEventD1Ev>
 8268f15:	8b 45 08             	mov    0x8(%ebp),%eax
 8268f18:	89 04 24             	mov    %eax,(%esp)
 8268f1b:	e8 d0 b5 4b 00       	call   87244f0 <_ZdlPv>
 8268f20:	c9                   	leave
 8268f21:	c3                   	ret

```

```c
// CPvPLiveEvent::~CPvPLiveEvent @ 0x8268f04

/* CPvPLiveEvent::~CPvPLiveEvent() */

void __thiscall CPvPLiveEvent::~CPvPLiveEvent(CPvPLiveEvent *this)

{
  ~CPvPLiveEvent(this);
  operator_delete(this);
  return;
}

```

