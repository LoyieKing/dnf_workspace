# CBreakAwayPreventEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CBreakAwayPreventEvent

```asm
// === 08109dbc CBreakAwayPreventEvent::CBreakAwayPreventEvent  [0x08109dbc-0x8109dd7] ===
 8109dbc:	55                   	push   %ebp
 8109dbd:	89 e5                	mov    %esp,%ebp
 8109dbf:	83 ec 18             	sub    $0x18,%esp
 8109dc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8109dc5:	89 04 24             	mov    %eax,(%esp)
 8109dc8:	e8 5f 10 00 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8109dcd:	8b 45 08             	mov    0x8(%ebp),%eax
 8109dd0:	c7 00 a8 6f b4 08    	movl   $0x8b46fa8,(%eax)
 8109dd6:	c9                   	leave
 8109dd7:	c3                   	ret

```

```c
// CBreakAwayPreventEvent::CBreakAwayPreventEvent @ 0x8109dbc

/* CBreakAwayPreventEvent::CBreakAwayPreventEvent() */

void __thiscall CBreakAwayPreventEvent::CBreakAwayPreventEvent(CBreakAwayPreventEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CBreakAwayPreventEvent_08b46fa8;
  return;
}

```

---

## EndEvent

```asm
// === 08109ed6 CBreakAwayPreventEvent::EndEvent  [0x08109ed6-0x8109f32] ===
 8109ed6:	55                   	push   %ebp
 8109ed7:	89 e5                	mov    %esp,%ebp
 8109ed9:	83 ec 28             	sub    $0x28,%esp
 8109edc:	8b 45 08             	mov    0x8(%ebp),%eax
 8109edf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8109ee6:	00 
 8109ee7:	89 04 24             	mov    %eax,(%esp)
 8109eea:	e8 f3 e5 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8109eef:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8109ef6:	e8 25 ea 32 00       	call   8438920 <_ZN27DB_LoadBreakAwayPreventData11makeRequestEb>
 8109efb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8109f02:	00 
 8109f03:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 8109f0a:	00 
 8109f0b:	c7 44 24 04 70 6f b4 	movl   $0x8b46f70,0x4(%esp)
 8109f12:	08 
 8109f13:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109f16:	89 04 24             	mov    %eax,(%esp)
 8109f19:	e8 fa 57 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8109f1e:	c7 44 24 04 fe 63 b4 	movl   $0x8b463fe,0x4(%esp)
 8109f25:	08 
 8109f26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109f29:	89 04 24             	mov    %eax,(%esp)
 8109f2c:	e8 57 58 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8109f31:	c9                   	leave
 8109f32:	c3                   	ret

```

```c
// CBreakAwayPreventEvent::EndEvent @ 0x8109ed6

/* CBreakAwayPreventEvent::EndEvent() */

void __thiscall CBreakAwayPreventEvent::EndEvent(CBreakAwayPreventEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  DB_LoadBreakAwayPreventData::makeRequest(false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x23,0);
  cMyTrace::operator()(local_1c,"CBreakAwayPreventEvent End!");
  return;
}

```

---

## StartEvent

```asm
// === 08109e26 CBreakAwayPreventEvent::StartEvent  [0x08109e26-0x8109e77] ===
 8109e26:	55                   	push   %ebp
 8109e27:	89 e5                	mov    %esp,%ebp
 8109e29:	83 ec 28             	sub    $0x28,%esp
 8109e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8109e2f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8109e36:	00 
 8109e37:	89 04 24             	mov    %eax,(%esp)
 8109e3a:	e8 a3 e6 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8109e3f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8109e46:	00 
 8109e47:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8109e4e:	00 
 8109e4f:	c7 44 24 04 84 6f b4 	movl   $0x8b46f84,0x4(%esp)
 8109e56:	08 
 8109e57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109e5a:	89 04 24             	mov    %eax,(%esp)
 8109e5d:	e8 b6 58 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8109e62:	c7 44 24 04 e0 63 b4 	movl   $0x8b463e0,0x4(%esp)
 8109e69:	08 
 8109e6a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109e6d:	89 04 24             	mov    %eax,(%esp)
 8109e70:	e8 13 59 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8109e75:	c9                   	leave
 8109e76:	c3                   	ret
 8109e77:	90                   	nop

```

```c
// CBreakAwayPreventEvent::StartEvent @ 0x8109e26

/* CBreakAwayPreventEvent::StartEvent() */

void __thiscall CBreakAwayPreventEvent::StartEvent(CBreakAwayPreventEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x14,0);
  cMyTrace::operator()(local_1c,"CBreakAwayPreventEvent Start!");
  return;
}

```

---

## StartEvent_08109e78

```asm
// === 08109e78 CBreakAwayPreventEvent::StartEvent  [0x08109e78-0x8109ed5] ===
 8109e78:	55                   	push   %ebp
 8109e79:	89 e5                	mov    %esp,%ebp
 8109e7b:	83 ec 28             	sub    $0x28,%esp
 8109e7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8109e81:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8109e88:	00 
 8109e89:	89 04 24             	mov    %eax,(%esp)
 8109e8c:	e8 51 e6 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8109e91:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8109e98:	e8 83 ea 32 00       	call   8438920 <_ZN27DB_LoadBreakAwayPreventData11makeRequestEb>
 8109e9d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8109ea4:	00 
 8109ea5:	c7 44 24 08 1b 00 00 	movl   $0x1b,0x8(%esp)
 8109eac:	00 
 8109ead:	c7 44 24 04 79 6f b4 	movl   $0x8b46f79,0x4(%esp)
 8109eb4:	08 
 8109eb5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109eb8:	89 04 24             	mov    %eax,(%esp)
 8109ebb:	e8 58 58 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8109ec0:	c7 44 24 04 e0 63 b4 	movl   $0x8b463e0,0x4(%esp)
 8109ec7:	08 
 8109ec8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109ecb:	89 04 24             	mov    %eax,(%esp)
 8109ece:	e8 b5 58 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8109ed3:	c9                   	leave
 8109ed4:	c3                   	ret
 8109ed5:	90                   	nop

```

```c
// CBreakAwayPreventEvent::StartEvent @ 0x8109e78

/* CBreakAwayPreventEvent::StartEvent(Word_Param) */

void CBreakAwayPreventEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  DB_LoadBreakAwayPreventData::makeRequest(true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1b,0);
  cMyTrace::operator()(local_1c,"CBreakAwayPreventEvent Start!");
  return;
}

```

---

## ~CBreakAwayPreventEvent

```asm
// === 08109dd8 CBreakAwayPreventEvent::~CBreakAwayPreventEvent  [0x08109dd8-0x8109e07] ===
 8109dd8:	55                   	push   %ebp
 8109dd9:	89 e5                	mov    %esp,%ebp
 8109ddb:	83 ec 18             	sub    $0x18,%esp
 8109dde:	8b 45 08             	mov    0x8(%ebp),%eax
 8109de1:	c7 00 a8 6f b4 08    	movl   $0x8b46fa8,(%eax)
 8109de7:	8b 45 08             	mov    0x8(%ebp),%eax
 8109dea:	89 04 24             	mov    %eax,(%esp)
 8109ded:	e8 60 10 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8109df2:	b8 00 00 00 00       	mov    $0x0,%eax
 8109df7:	84 c0                	test   %al,%al
 8109df9:	74 0b                	je     8109e06 <_ZN22CBreakAwayPreventEventD1Ev+0x2e>
 8109dfb:	8b 45 08             	mov    0x8(%ebp),%eax
 8109dfe:	89 04 24             	mov    %eax,(%esp)
 8109e01:	e8 ea a6 61 00       	call   87244f0 <_ZdlPv>
 8109e06:	c9                   	leave
 8109e07:	c3                   	ret

```

```c
// CBreakAwayPreventEvent::~CBreakAwayPreventEvent @ 0x8109dd8

/* WARNING: Removing unreachable block (ram,0x08109dfb) */
/* CBreakAwayPreventEvent::~CBreakAwayPreventEvent() */

void __thiscall CBreakAwayPreventEvent::~CBreakAwayPreventEvent(CBreakAwayPreventEvent *this)

{
  *(undefined ***)this = &PTR__CBreakAwayPreventEvent_08b46fa8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CBreakAwayPreventEvent_08109e08

```asm
// === 08109e08 CBreakAwayPreventEvent::~CBreakAwayPreventEvent  [0x08109e08-0x8109e25] ===
 8109e08:	55                   	push   %ebp
 8109e09:	89 e5                	mov    %esp,%ebp
 8109e0b:	83 ec 18             	sub    $0x18,%esp
 8109e0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8109e11:	89 04 24             	mov    %eax,(%esp)
 8109e14:	e8 bf ff ff ff       	call   8109dd8 <_ZN22CBreakAwayPreventEventD1Ev>
 8109e19:	8b 45 08             	mov    0x8(%ebp),%eax
 8109e1c:	89 04 24             	mov    %eax,(%esp)
 8109e1f:	e8 cc a6 61 00       	call   87244f0 <_ZdlPv>
 8109e24:	c9                   	leave
 8109e25:	c3                   	ret

```

```c
// CBreakAwayPreventEvent::~CBreakAwayPreventEvent @ 0x8109e08

/* CBreakAwayPreventEvent::~CBreakAwayPreventEvent() */

void __thiscall CBreakAwayPreventEvent::~CBreakAwayPreventEvent(CBreakAwayPreventEvent *this)

{
  ~CBreakAwayPreventEvent(this);
  operator_delete(this);
  return;
}

```

