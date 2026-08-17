# CNoNeedGoldOnGuildCreateEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CNoNeedGoldOnGuildCreateEvent

```asm
// === 081b9b8c CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent  [0x081b9b8c-0x81b9ba7] ===
 81b9b8c:	55                   	push   %ebp
 81b9b8d:	89 e5                	mov    %esp,%ebp
 81b9b8f:	83 ec 18             	sub    $0x18,%esp
 81b9b92:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9b95:	89 04 24             	mov    %eax,(%esp)
 81b9b98:	e8 8f 12 f5 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81b9b9d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9ba0:	c7 00 c8 d0 bb 08    	movl   $0x8bbd0c8,(%eax)
 81b9ba6:	c9                   	leave
 81b9ba7:	c3                   	ret

```

```c
// CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent @ 0x81b9b8c

/* CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent() */

void __thiscall
CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CNoNeedGoldOnGuildCreateEvent_08bbd0c8;
  return;
}

```

---

## EndEvent

```asm
// === 081b9c9a CNoNeedGoldOnGuildCreateEvent::EndEvent  [0x081b9c9a-0x81b9cea] ===
 81b9c9a:	55                   	push   %ebp
 81b9c9b:	89 e5                	mov    %esp,%ebp
 81b9c9d:	83 ec 28             	sub    $0x28,%esp
 81b9ca0:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9ca3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b9caa:	00 
 81b9cab:	89 04 24             	mov    %eax,(%esp)
 81b9cae:	e8 2f e8 f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b9cb3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b9cba:	00 
 81b9cbb:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81b9cc2:	00 
 81b9cc3:	c7 44 24 04 90 d0 bb 	movl   $0x8bbd090,0x4(%esp)
 81b9cca:	08 
 81b9ccb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9cce:	89 04 24             	mov    %eax,(%esp)
 81b9cd1:	e8 42 5a 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b9cd6:	c7 44 24 04 ec c9 bb 	movl   $0x8bbc9ec,0x4(%esp)
 81b9cdd:	08 
 81b9cde:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9ce1:	89 04 24             	mov    %eax,(%esp)
 81b9ce4:	e8 9f 5a 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b9ce9:	c9                   	leave
 81b9cea:	c3                   	ret

```

```c
// CNoNeedGoldOnGuildCreateEvent::EndEvent @ 0x81b9c9a

/* CNoNeedGoldOnGuildCreateEvent::EndEvent() */

void __thiscall CNoNeedGoldOnGuildCreateEvent::EndEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"No Need Money On Guild Create Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 081b9bf6 CNoNeedGoldOnGuildCreateEvent::StartEvent  [0x081b9bf6-0x81b9c47] ===
 81b9bf6:	55                   	push   %ebp
 81b9bf7:	89 e5                	mov    %esp,%ebp
 81b9bf9:	83 ec 28             	sub    $0x28,%esp
 81b9bfc:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9bff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b9c06:	00 
 81b9c07:	89 04 24             	mov    %eax,(%esp)
 81b9c0a:	e8 d3 e8 f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b9c0f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b9c16:	00 
 81b9c17:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81b9c1e:	00 
 81b9c1f:	c7 44 24 04 a4 d0 bb 	movl   $0x8bbd0a4,0x4(%esp)
 81b9c26:	08 
 81b9c27:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9c2a:	89 04 24             	mov    %eax,(%esp)
 81b9c2d:	e8 e6 5a 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b9c32:	c7 44 24 04 c0 c9 bb 	movl   $0x8bbc9c0,0x4(%esp)
 81b9c39:	08 
 81b9c3a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9c3d:	89 04 24             	mov    %eax,(%esp)
 81b9c40:	e8 43 5b 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b9c45:	c9                   	leave
 81b9c46:	c3                   	ret
 81b9c47:	90                   	nop

```

```c
// CNoNeedGoldOnGuildCreateEvent::StartEvent @ 0x81b9bf6

/* CNoNeedGoldOnGuildCreateEvent::StartEvent() */

void __thiscall CNoNeedGoldOnGuildCreateEvent::StartEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"No Need Money On Guild Create Event Start!");
  return;
}

```

---

## StartEvent_081b9c48

```asm
// === 081b9c48 CNoNeedGoldOnGuildCreateEvent::StartEvent  [0x081b9c48-0x81b9c99] ===
 81b9c48:	55                   	push   %ebp
 81b9c49:	89 e5                	mov    %esp,%ebp
 81b9c4b:	83 ec 28             	sub    $0x28,%esp
 81b9c4e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9c51:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b9c58:	00 
 81b9c59:	89 04 24             	mov    %eax,(%esp)
 81b9c5c:	e8 81 e8 f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b9c61:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b9c68:	00 
 81b9c69:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 81b9c70:	00 
 81b9c71:	c7 44 24 04 99 d0 bb 	movl   $0x8bbd099,0x4(%esp)
 81b9c78:	08 
 81b9c79:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9c7c:	89 04 24             	mov    %eax,(%esp)
 81b9c7f:	e8 94 5a 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b9c84:	c7 44 24 04 c0 c9 bb 	movl   $0x8bbc9c0,0x4(%esp)
 81b9c8b:	08 
 81b9c8c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9c8f:	89 04 24             	mov    %eax,(%esp)
 81b9c92:	e8 f1 5a 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b9c97:	c9                   	leave
 81b9c98:	c3                   	ret
 81b9c99:	90                   	nop

```

```c
// CNoNeedGoldOnGuildCreateEvent::StartEvent @ 0x81b9c48

/* CNoNeedGoldOnGuildCreateEvent::StartEvent(Word_Param) */

void CNoNeedGoldOnGuildCreateEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"No Need Money On Guild Create Event Start!");
  return;
}

```

---

## ~CNoNeedGoldOnGuildCreateEvent

```asm
// === 081b9ba8 CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent  [0x081b9ba8-0x81b9bd7] ===
 81b9ba8:	55                   	push   %ebp
 81b9ba9:	89 e5                	mov    %esp,%ebp
 81b9bab:	83 ec 18             	sub    $0x18,%esp
 81b9bae:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9bb1:	c7 00 c8 d0 bb 08    	movl   $0x8bbd0c8,(%eax)
 81b9bb7:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9bba:	89 04 24             	mov    %eax,(%esp)
 81b9bbd:	e8 90 12 f5 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81b9bc2:	b8 00 00 00 00       	mov    $0x0,%eax
 81b9bc7:	84 c0                	test   %al,%al
 81b9bc9:	74 0b                	je     81b9bd6 <_ZN29CNoNeedGoldOnGuildCreateEventD1Ev+0x2e>
 81b9bcb:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9bce:	89 04 24             	mov    %eax,(%esp)
 81b9bd1:	e8 1a a9 56 00       	call   87244f0 <_ZdlPv>
 81b9bd6:	c9                   	leave
 81b9bd7:	c3                   	ret

```

```c
// CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent @ 0x81b9ba8

/* WARNING: Removing unreachable block (ram,0x081b9bcb) */
/* CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent() */

void __thiscall
CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  *(undefined ***)this = &PTR__CNoNeedGoldOnGuildCreateEvent_08bbd0c8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CNoNeedGoldOnGuildCreateEvent_081b9bd8

```asm
// === 081b9bd8 CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent  [0x081b9bd8-0x81b9bf5] ===
 81b9bd8:	55                   	push   %ebp
 81b9bd9:	89 e5                	mov    %esp,%ebp
 81b9bdb:	83 ec 18             	sub    $0x18,%esp
 81b9bde:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9be1:	89 04 24             	mov    %eax,(%esp)
 81b9be4:	e8 bf ff ff ff       	call   81b9ba8 <_ZN29CNoNeedGoldOnGuildCreateEventD1Ev>
 81b9be9:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9bec:	89 04 24             	mov    %eax,(%esp)
 81b9bef:	e8 fc a8 56 00       	call   87244f0 <_ZdlPv>
 81b9bf4:	c9                   	leave
 81b9bf5:	c3                   	ret

```

```c
// CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent @ 0x81b9bd8

/* CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent() */

void __thiscall
CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  ~CNoNeedGoldOnGuildCreateEvent(this);
  operator_delete(this);
  return;
}

```

