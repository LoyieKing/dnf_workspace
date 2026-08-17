# CPvPExpPenaltyEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CPvPExpPenaltyEvent

```asm
// === 08268d1c CPvPExpPenaltyEvent::CPvPExpPenaltyEvent  [0x08268d1c-0x8268d37] ===
 8268d1c:	55                   	push   %ebp
 8268d1d:	89 e5                	mov    %esp,%ebp
 8268d1f:	83 ec 18             	sub    $0x18,%esp
 8268d22:	8b 45 08             	mov    0x8(%ebp),%eax
 8268d25:	89 04 24             	mov    %eax,(%esp)
 8268d28:	e8 ff 20 ea ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8268d2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8268d30:	c7 00 48 3f bf 08    	movl   $0x8bf3f48,(%eax)
 8268d36:	c9                   	leave
 8268d37:	c3                   	ret

```

```c
// CPvPExpPenaltyEvent::CPvPExpPenaltyEvent @ 0x8268d1c

/* CPvPExpPenaltyEvent::CPvPExpPenaltyEvent() */

void __thiscall CPvPExpPenaltyEvent::CPvPExpPenaltyEvent(CPvPExpPenaltyEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPvPExpPenaltyEvent_08bf3f48;
  return;
}

```

---

## EndEvent

```asm
// === 08268e2a CPvPExpPenaltyEvent::EndEvent  [0x08268e2a-0x8268e44] ===
 8268e2a:	55                   	push   %ebp
 8268e2b:	89 e5                	mov    %esp,%ebp
 8268e2d:	83 ec 18             	sub    $0x18,%esp
 8268e30:	8b 45 08             	mov    0x8(%ebp),%eax
 8268e33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268e3a:	00 
 8268e3b:	89 04 24             	mov    %eax,(%esp)
 8268e3e:	e8 9f f6 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268e43:	c9                   	leave
 8268e44:	c3                   	ret

```

```c
// CPvPExpPenaltyEvent::EndEvent @ 0x8268e2a

/* CPvPExpPenaltyEvent::EndEvent() */

void __thiscall CPvPExpPenaltyEvent::EndEvent(CPvPExpPenaltyEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## StartEvent

```asm
// === 08268d86 CPvPExpPenaltyEvent::StartEvent  [0x08268d86-0x8268dd7] ===
 8268d86:	55                   	push   %ebp
 8268d87:	89 e5                	mov    %esp,%ebp
 8268d89:	83 ec 28             	sub    $0x28,%esp
 8268d8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8268d8f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8268d96:	00 
 8268d97:	89 04 24             	mov    %eax,(%esp)
 8268d9a:	e8 43 f7 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268d9f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268da6:	00 
 8268da7:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8268dae:	00 
 8268daf:	c7 44 24 04 1b 3f bf 	movl   $0x8bf3f1b,0x4(%esp)
 8268db6:	08 
 8268db7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268dba:	89 04 24             	mov    %eax,(%esp)
 8268dbd:	e8 56 69 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268dc2:	c7 44 24 04 80 38 bf 	movl   $0x8bf3880,0x4(%esp)
 8268dc9:	08 
 8268dca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268dcd:	89 04 24             	mov    %eax,(%esp)
 8268dd0:	e8 b3 69 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8268dd5:	c9                   	leave
 8268dd6:	c3                   	ret
 8268dd7:	90                   	nop

```

```c
// CPvPExpPenaltyEvent::StartEvent @ 0x8268d86

/* CPvPExpPenaltyEvent::StartEvent() */

void __thiscall CPvPExpPenaltyEvent::StartEvent(CPvPExpPenaltyEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"CPvPExpPenaltyEvent Start!");
  return;
}

```

---

## StartEvent_08268dd8

```asm
// === 08268dd8 CPvPExpPenaltyEvent::StartEvent  [0x08268dd8-0x8268e29] ===
 8268dd8:	55                   	push   %ebp
 8268dd9:	89 e5                	mov    %esp,%ebp
 8268ddb:	83 ec 28             	sub    $0x28,%esp
 8268dde:	8b 45 08             	mov    0x8(%ebp),%eax
 8268de1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8268de8:	00 
 8268de9:	89 04 24             	mov    %eax,(%esp)
 8268dec:	e8 f1 f6 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268df1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268df8:	00 
 8268df9:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8268e00:	00 
 8268e01:	c7 44 24 04 10 3f bf 	movl   $0x8bf3f10,0x4(%esp)
 8268e08:	08 
 8268e09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268e0c:	89 04 24             	mov    %eax,(%esp)
 8268e0f:	e8 04 69 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268e14:	c7 44 24 04 80 38 bf 	movl   $0x8bf3880,0x4(%esp)
 8268e1b:	08 
 8268e1c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268e1f:	89 04 24             	mov    %eax,(%esp)
 8268e22:	e8 61 69 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8268e27:	c9                   	leave
 8268e28:	c3                   	ret
 8268e29:	90                   	nop

```

```c
// CPvPExpPenaltyEvent::StartEvent @ 0x8268dd8

/* CPvPExpPenaltyEvent::StartEvent(Word_Param) */

void CPvPExpPenaltyEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"CPvPExpPenaltyEvent Start!");
  return;
}

```

---

## ~CPvPExpPenaltyEvent

```asm
// === 08268d38 CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent  [0x08268d38-0x8268d67] ===
 8268d38:	55                   	push   %ebp
 8268d39:	89 e5                	mov    %esp,%ebp
 8268d3b:	83 ec 18             	sub    $0x18,%esp
 8268d3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8268d41:	c7 00 48 3f bf 08    	movl   $0x8bf3f48,(%eax)
 8268d47:	8b 45 08             	mov    0x8(%ebp),%eax
 8268d4a:	89 04 24             	mov    %eax,(%esp)
 8268d4d:	e8 00 21 ea ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8268d52:	b8 00 00 00 00       	mov    $0x0,%eax
 8268d57:	84 c0                	test   %al,%al
 8268d59:	74 0b                	je     8268d66 <_ZN19CPvPExpPenaltyEventD1Ev+0x2e>
 8268d5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8268d5e:	89 04 24             	mov    %eax,(%esp)
 8268d61:	e8 8a b7 4b 00       	call   87244f0 <_ZdlPv>
 8268d66:	c9                   	leave
 8268d67:	c3                   	ret

```

```c
// CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent @ 0x8268d38

/* WARNING: Removing unreachable block (ram,0x08268d5b) */
/* CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent() */

void __thiscall CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent(CPvPExpPenaltyEvent *this)

{
  *(undefined ***)this = &PTR__CPvPExpPenaltyEvent_08bf3f48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CPvPExpPenaltyEvent_08268d68

```asm
// === 08268d68 CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent  [0x08268d68-0x8268d85] ===
 8268d68:	55                   	push   %ebp
 8268d69:	89 e5                	mov    %esp,%ebp
 8268d6b:	83 ec 18             	sub    $0x18,%esp
 8268d6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8268d71:	89 04 24             	mov    %eax,(%esp)
 8268d74:	e8 bf ff ff ff       	call   8268d38 <_ZN19CPvPExpPenaltyEventD1Ev>
 8268d79:	8b 45 08             	mov    0x8(%ebp),%eax
 8268d7c:	89 04 24             	mov    %eax,(%esp)
 8268d7f:	e8 6c b7 4b 00       	call   87244f0 <_ZdlPv>
 8268d84:	c9                   	leave
 8268d85:	c3                   	ret

```

```c
// CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent @ 0x8268d68

/* CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent() */

void __thiscall CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent(CPvPExpPenaltyEvent *this)

{
  ~CPvPExpPenaltyEvent(this);
  operator_delete(this);
  return;
}

```

