# CUnlimitFatigueEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CUnlimitFatigueEvent

```asm
// === 08285c44 CUnlimitFatigueEvent::CUnlimitFatigueEvent  [0x08285c44-0x8285c5f] ===
 8285c44:	55                   	push   %ebp
 8285c45:	89 e5                	mov    %esp,%ebp
 8285c47:	83 ec 18             	sub    $0x18,%esp
 8285c4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8285c4d:	89 04 24             	mov    %eax,(%esp)
 8285c50:	e8 d7 51 e8 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8285c55:	8b 45 08             	mov    0x8(%ebp),%eax
 8285c58:	c7 00 68 eb c0 08    	movl   $0x8c0eb68,(%eax)
 8285c5e:	c9                   	leave
 8285c5f:	c3                   	ret

```

```c
// CUnlimitFatigueEvent::CUnlimitFatigueEvent @ 0x8285c44

/* CUnlimitFatigueEvent::CUnlimitFatigueEvent() */

void __thiscall CUnlimitFatigueEvent::CUnlimitFatigueEvent(CUnlimitFatigueEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CUnlimitFatigueEvent_08c0eb68;
  return;
}

```

---

## EndEvent

```asm
// === 08285d52 CUnlimitFatigueEvent::EndEvent  [0x08285d52-0x8285da2] ===
 8285d52:	55                   	push   %ebp
 8285d53:	89 e5                	mov    %esp,%ebp
 8285d55:	83 ec 28             	sub    $0x28,%esp
 8285d58:	8b 45 08             	mov    0x8(%ebp),%eax
 8285d5b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8285d62:	00 
 8285d63:	89 04 24             	mov    %eax,(%esp)
 8285d66:	e8 77 27 e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8285d6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8285d72:	00 
 8285d73:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8285d7a:	00 
 8285d7b:	c7 44 24 04 30 eb c0 	movl   $0x8c0eb30,0x4(%esp)
 8285d82:	08 
 8285d83:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285d86:	89 04 24             	mov    %eax,(%esp)
 8285d89:	e8 8a 99 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8285d8e:	c7 44 24 04 9d e4 c0 	movl   $0x8c0e49d,0x4(%esp)
 8285d95:	08 
 8285d96:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285d99:	89 04 24             	mov    %eax,(%esp)
 8285d9c:	e8 e7 99 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8285da1:	c9                   	leave
 8285da2:	c3                   	ret

```

```c
// CUnlimitFatigueEvent::EndEvent @ 0x8285d52

/* CUnlimitFatigueEvent::EndEvent() */

void __thiscall CUnlimitFatigueEvent::EndEvent(CUnlimitFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x20,0);
  cMyTrace::operator()(local_1c,"Unlimit Fatigue Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 08285cae CUnlimitFatigueEvent::StartEvent  [0x08285cae-0x8285cff] ===
 8285cae:	55                   	push   %ebp
 8285caf:	89 e5                	mov    %esp,%ebp
 8285cb1:	83 ec 28             	sub    $0x28,%esp
 8285cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8285cb7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8285cbe:	00 
 8285cbf:	89 04 24             	mov    %eax,(%esp)
 8285cc2:	e8 1b 28 e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8285cc7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8285cce:	00 
 8285ccf:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8285cd6:	00 
 8285cd7:	c7 44 24 04 44 eb c0 	movl   $0x8c0eb44,0x4(%esp)
 8285cde:	08 
 8285cdf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285ce2:	89 04 24             	mov    %eax,(%esp)
 8285ce5:	e8 2e 9a 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8285cea:	c7 44 24 04 80 e4 c0 	movl   $0x8c0e480,0x4(%esp)
 8285cf1:	08 
 8285cf2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285cf5:	89 04 24             	mov    %eax,(%esp)
 8285cf8:	e8 8b 9a 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8285cfd:	c9                   	leave
 8285cfe:	c3                   	ret
 8285cff:	90                   	nop

```

```c
// CUnlimitFatigueEvent::StartEvent @ 0x8285cae

/* CUnlimitFatigueEvent::StartEvent() */

void __thiscall CUnlimitFatigueEvent::StartEvent(CUnlimitFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"Unlimit Fatigue Event Start!");
  return;
}

```

---

## StartEvent_08285d00

```asm
// === 08285d00 CUnlimitFatigueEvent::StartEvent  [0x08285d00-0x8285d51] ===
 8285d00:	55                   	push   %ebp
 8285d01:	89 e5                	mov    %esp,%ebp
 8285d03:	83 ec 28             	sub    $0x28,%esp
 8285d06:	8b 45 08             	mov    0x8(%ebp),%eax
 8285d09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8285d10:	00 
 8285d11:	89 04 24             	mov    %eax,(%esp)
 8285d14:	e8 c9 27 e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8285d19:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8285d20:	00 
 8285d21:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 8285d28:	00 
 8285d29:	c7 44 24 04 39 eb c0 	movl   $0x8c0eb39,0x4(%esp)
 8285d30:	08 
 8285d31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285d34:	89 04 24             	mov    %eax,(%esp)
 8285d37:	e8 dc 99 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8285d3c:	c7 44 24 04 80 e4 c0 	movl   $0x8c0e480,0x4(%esp)
 8285d43:	08 
 8285d44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285d47:	89 04 24             	mov    %eax,(%esp)
 8285d4a:	e8 39 9a 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8285d4f:	c9                   	leave
 8285d50:	c3                   	ret
 8285d51:	90                   	nop

```

```c
// CUnlimitFatigueEvent::StartEvent @ 0x8285d00

/* CUnlimitFatigueEvent::StartEvent(Word_Param) */

void CUnlimitFatigueEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x19,0);
  cMyTrace::operator()(local_1c,"Unlimit Fatigue Event Start!");
  return;
}

```

---

## ~CUnlimitFatigueEvent

```asm
// === 08285c60 CUnlimitFatigueEvent::~CUnlimitFatigueEvent  [0x08285c60-0x8285c8f] ===
 8285c60:	55                   	push   %ebp
 8285c61:	89 e5                	mov    %esp,%ebp
 8285c63:	83 ec 18             	sub    $0x18,%esp
 8285c66:	8b 45 08             	mov    0x8(%ebp),%eax
 8285c69:	c7 00 68 eb c0 08    	movl   $0x8c0eb68,(%eax)
 8285c6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8285c72:	89 04 24             	mov    %eax,(%esp)
 8285c75:	e8 d8 51 e8 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8285c7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8285c7f:	84 c0                	test   %al,%al
 8285c81:	74 0b                	je     8285c8e <_ZN20CUnlimitFatigueEventD1Ev+0x2e>
 8285c83:	8b 45 08             	mov    0x8(%ebp),%eax
 8285c86:	89 04 24             	mov    %eax,(%esp)
 8285c89:	e8 62 e8 49 00       	call   87244f0 <_ZdlPv>
 8285c8e:	c9                   	leave
 8285c8f:	c3                   	ret

```

```c
// CUnlimitFatigueEvent::~CUnlimitFatigueEvent @ 0x8285c60

/* WARNING: Removing unreachable block (ram,0x08285c83) */
/* CUnlimitFatigueEvent::~CUnlimitFatigueEvent() */

void __thiscall CUnlimitFatigueEvent::~CUnlimitFatigueEvent(CUnlimitFatigueEvent *this)

{
  *(undefined ***)this = &PTR__CUnlimitFatigueEvent_08c0eb68;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CUnlimitFatigueEvent_08285c90

```asm
// === 08285c90 CUnlimitFatigueEvent::~CUnlimitFatigueEvent  [0x08285c90-0x8285cad] ===
 8285c90:	55                   	push   %ebp
 8285c91:	89 e5                	mov    %esp,%ebp
 8285c93:	83 ec 18             	sub    $0x18,%esp
 8285c96:	8b 45 08             	mov    0x8(%ebp),%eax
 8285c99:	89 04 24             	mov    %eax,(%esp)
 8285c9c:	e8 bf ff ff ff       	call   8285c60 <_ZN20CUnlimitFatigueEventD1Ev>
 8285ca1:	8b 45 08             	mov    0x8(%ebp),%eax
 8285ca4:	89 04 24             	mov    %eax,(%esp)
 8285ca7:	e8 44 e8 49 00       	call   87244f0 <_ZdlPv>
 8285cac:	c9                   	leave
 8285cad:	c3                   	ret

```

```c
// CUnlimitFatigueEvent::~CUnlimitFatigueEvent @ 0x8285c90

/* CUnlimitFatigueEvent::~CUnlimitFatigueEvent() */

void __thiscall CUnlimitFatigueEvent::~CUnlimitFatigueEvent(CUnlimitFatigueEvent *this)

{
  ~CUnlimitFatigueEvent(this);
  operator_delete(this);
  return;
}

```

