# CAutoMarketConditionsControlEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CAutoMarketConditionsControlEvent

```asm
// === 08109c14 CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent  [0x08109c14-0x8109c2f] ===
 8109c14:	55                   	push   %ebp
 8109c15:	89 e5                	mov    %esp,%ebp
 8109c17:	83 ec 18             	sub    $0x18,%esp
 8109c1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8109c1d:	89 04 24             	mov    %eax,(%esp)
 8109c20:	e8 07 12 00 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8109c25:	8b 45 08             	mov    0x8(%ebp),%eax
 8109c28:	c7 00 48 63 b4 08    	movl   $0x8b46348,(%eax)
 8109c2e:	c9                   	leave
 8109c2f:	c3                   	ret

```

```c
// CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent @ 0x8109c14

/* CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent() */

void __thiscall
CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent
          (CAutoMarketConditionsControlEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CAutoMarketConditionsControlEvent_08b46348;
  return;
}

```

---

## EndEvent

```asm
// === 08109cf8 CAutoMarketConditionsControlEvent::EndEvent  [0x08109cf8-0x8109d48] ===
 8109cf8:	55                   	push   %ebp
 8109cf9:	89 e5                	mov    %esp,%ebp
 8109cfb:	83 ec 28             	sub    $0x28,%esp
 8109cfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8109d01:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8109d08:	00 
 8109d09:	89 04 24             	mov    %eax,(%esp)
 8109d0c:	e8 d1 e7 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8109d11:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8109d18:	00 
 8109d19:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 8109d20:	00 
 8109d21:	c7 44 24 04 10 63 b4 	movl   $0x8b46310,0x4(%esp)
 8109d28:	08 
 8109d29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109d2c:	89 04 24             	mov    %eax,(%esp)
 8109d2f:	e8 e4 59 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8109d34:	c7 44 24 04 8c 57 b4 	movl   $0x8b4578c,0x4(%esp)
 8109d3b:	08 
 8109d3c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109d3f:	89 04 24             	mov    %eax,(%esp)
 8109d42:	e8 41 5a 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8109d47:	c9                   	leave
 8109d48:	c3                   	ret

```

```c
// CAutoMarketConditionsControlEvent::EndEvent @ 0x8109cf8

/* CAutoMarketConditionsControlEvent::EndEvent() */

void __thiscall CAutoMarketConditionsControlEvent::EndEvent(CAutoMarketConditionsControlEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1f,0);
  cMyTrace::operator()(local_1c,"CAutoMarketConditionsControlEvent End!");
  return;
}

```

---

## StartEvent

```asm
// === 08109c7e CAutoMarketConditionsControlEvent::StartEvent  [0x08109c7e-0x8109ccf] ===
 8109c7e:	55                   	push   %ebp
 8109c7f:	89 e5                	mov    %esp,%ebp
 8109c81:	83 ec 28             	sub    $0x28,%esp
 8109c84:	8b 45 08             	mov    0x8(%ebp),%eax
 8109c87:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8109c8e:	00 
 8109c8f:	89 04 24             	mov    %eax,(%esp)
 8109c92:	e8 4b e8 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8109c97:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8109c9e:	00 
 8109c9f:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8109ca6:	00 
 8109ca7:	c7 44 24 04 19 63 b4 	movl   $0x8b46319,0x4(%esp)
 8109cae:	08 
 8109caf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109cb2:	89 04 24             	mov    %eax,(%esp)
 8109cb5:	e8 5e 5a 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8109cba:	c7 44 24 04 60 57 b4 	movl   $0x8b45760,0x4(%esp)
 8109cc1:	08 
 8109cc2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8109cc5:	89 04 24             	mov    %eax,(%esp)
 8109cc8:	e8 bb 5a 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8109ccd:	c9                   	leave
 8109cce:	c3                   	ret
 8109ccf:	90                   	nop

```

```c
// CAutoMarketConditionsControlEvent::StartEvent @ 0x8109c7e

/* CAutoMarketConditionsControlEvent::StartEvent() */

void __thiscall
CAutoMarketConditionsControlEvent::StartEvent(CAutoMarketConditionsControlEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"CAutoMarketConditionsControlEvent Start!");
  return;
}

```

---

## StartEvent_08109cd0

```asm
// === 08109cd0 CAutoMarketConditionsControlEvent::StartEvent  [0x08109cd0-0x8109cf7] ===
 8109cd0:	55                   	push   %ebp
 8109cd1:	89 e5                	mov    %esp,%ebp
 8109cd3:	83 ec 18             	sub    $0x18,%esp
 8109cd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8109cd9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8109ce0:	00 
 8109ce1:	89 04 24             	mov    %eax,(%esp)
 8109ce4:	e8 f9 e7 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8109ce9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8109cf0:	e8 e5 9d 32 00       	call   8433ada <_ZN34DB_LoadAutoMarketConditionsControl11makeRequestEb>
 8109cf5:	c9                   	leave
 8109cf6:	c3                   	ret
 8109cf7:	90                   	nop

```

```c
// CAutoMarketConditionsControlEvent::StartEvent @ 0x8109cd0

/* CAutoMarketConditionsControlEvent::StartEvent(Word_Param) */

void CAutoMarketConditionsControlEvent::StartEvent(CEventBase *param_1)

{
  CEventBase::SetEventFlag(param_1,true);
  DB_LoadAutoMarketConditionsControl::makeRequest(true);
  return;
}

```

---

## ~CAutoMarketConditionsControlEvent

```asm
// === 08109c30 CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent  [0x08109c30-0x8109c5f] ===
 8109c30:	55                   	push   %ebp
 8109c31:	89 e5                	mov    %esp,%ebp
 8109c33:	83 ec 18             	sub    $0x18,%esp
 8109c36:	8b 45 08             	mov    0x8(%ebp),%eax
 8109c39:	c7 00 48 63 b4 08    	movl   $0x8b46348,(%eax)
 8109c3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8109c42:	89 04 24             	mov    %eax,(%esp)
 8109c45:	e8 08 12 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8109c4a:	b8 00 00 00 00       	mov    $0x0,%eax
 8109c4f:	84 c0                	test   %al,%al
 8109c51:	74 0b                	je     8109c5e <_ZN33CAutoMarketConditionsControlEventD1Ev+0x2e>
 8109c53:	8b 45 08             	mov    0x8(%ebp),%eax
 8109c56:	89 04 24             	mov    %eax,(%esp)
 8109c59:	e8 92 a8 61 00       	call   87244f0 <_ZdlPv>
 8109c5e:	c9                   	leave
 8109c5f:	c3                   	ret

```

```c
// CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent @ 0x8109c30

/* WARNING: Removing unreachable block (ram,0x08109c53) */
/* CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent() */

void __thiscall
CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent
          (CAutoMarketConditionsControlEvent *this)

{
  *(undefined ***)this = &PTR__CAutoMarketConditionsControlEvent_08b46348;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CAutoMarketConditionsControlEvent_08109c60

```asm
// === 08109c60 CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent  [0x08109c60-0x8109c7d] ===
 8109c60:	55                   	push   %ebp
 8109c61:	89 e5                	mov    %esp,%ebp
 8109c63:	83 ec 18             	sub    $0x18,%esp
 8109c66:	8b 45 08             	mov    0x8(%ebp),%eax
 8109c69:	89 04 24             	mov    %eax,(%esp)
 8109c6c:	e8 bf ff ff ff       	call   8109c30 <_ZN33CAutoMarketConditionsControlEventD1Ev>
 8109c71:	8b 45 08             	mov    0x8(%ebp),%eax
 8109c74:	89 04 24             	mov    %eax,(%esp)
 8109c77:	e8 74 a8 61 00       	call   87244f0 <_ZdlPv>
 8109c7c:	c9                   	leave
 8109c7d:	c3                   	ret

```

```c
// CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent @ 0x8109c60

/* CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent() */

void __thiscall
CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent
          (CAutoMarketConditionsControlEvent *this)

{
  ~CAutoMarketConditionsControlEvent(this);
  operator_delete(this);
  return;
}

```

