# CTrcOnOffEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CTrcOnOffEvent

```asm
// === 08285a44 CTrcOnOffEvent::CTrcOnOffEvent  [0x08285a44-0x8285a5f] ===
 8285a44:	55                   	push   %ebp
 8285a45:	89 e5                	mov    %esp,%ebp
 8285a47:	83 ec 18             	sub    $0x18,%esp
 8285a4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8285a4d:	89 04 24             	mov    %eax,(%esp)
 8285a50:	e8 d7 53 e8 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8285a55:	8b 45 08             	mov    0x8(%ebp),%eax
 8285a58:	c7 00 28 e4 c0 08    	movl   $0x8c0e428,(%eax)
 8285a5e:	c9                   	leave
 8285a5f:	c3                   	ret

```

```c
// CTrcOnOffEvent::CTrcOnOffEvent @ 0x8285a44

/* CTrcOnOffEvent::CTrcOnOffEvent() */

void __thiscall CTrcOnOffEvent::CTrcOnOffEvent(CTrcOnOffEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CTrcOnOffEvent_08c0e428;
  return;
}

```

---

## EndEvent

```asm
// === 08285b52 CTrcOnOffEvent::EndEvent  [0x08285b52-0x8285ba3] ===
 8285b52:	55                   	push   %ebp
 8285b53:	89 e5                	mov    %esp,%ebp
 8285b55:	83 ec 28             	sub    $0x28,%esp
 8285b58:	8b 45 08             	mov    0x8(%ebp),%eax
 8285b5b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8285b62:	00 
 8285b63:	89 04 24             	mov    %eax,(%esp)
 8285b66:	e8 77 29 e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8285b6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8285b72:	00 
 8285b73:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 8285b7a:	00 
 8285b7b:	c7 44 24 04 f0 e3 c0 	movl   $0x8c0e3f0,0x4(%esp)
 8285b82:	08 
 8285b83:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285b86:	89 04 24             	mov    %eax,(%esp)
 8285b89:	e8 8a 9b 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8285b8e:	c7 44 24 04 56 d8 c0 	movl   $0x8c0d856,0x4(%esp)
 8285b95:	08 
 8285b96:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285b99:	89 04 24             	mov    %eax,(%esp)
 8285b9c:	e8 e7 9b 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8285ba1:	c9                   	leave
 8285ba2:	c3                   	ret
 8285ba3:	90                   	nop

```

```c
// CTrcOnOffEvent::EndEvent @ 0x8285b52

/* CTrcOnOffEvent::EndEvent() */

void __thiscall CTrcOnOffEvent::EndEvent(CTrcOnOffEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1f,0);
  cMyTrace::operator()(local_1c,"Trc On Off Event Event End!");
  return;
}

```

---

## IsEventing

```asm
// === 08285ba4 CTrcOnOffEvent::IsEventing  [0x08285ba4-0x8285bd1] ===
 8285ba4:	55                   	push   %ebp
 8285ba5:	89 e5                	mov    %esp,%ebp
 8285ba7:	83 ec 18             	sub    $0x18,%esp
 8285baa:	8b 45 08             	mov    0x8(%ebp),%eax
 8285bad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8285bb4:	00 
 8285bb5:	89 04 24             	mov    %eax,(%esp)
 8285bb8:	e8 3d 29 e4 ff       	call   80c84fa <_ZNK10CEventBase10IsEventingEP5CUser>
 8285bbd:	83 f0 01             	xor    $0x1,%eax
 8285bc0:	84 c0                	test   %al,%al
 8285bc2:	74 07                	je     8285bcb <_ZNK14CTrcOnOffEvent10IsEventingEP5CUser+0x27>
 8285bc4:	b8 00 00 00 00       	mov    $0x0,%eax
 8285bc9:	eb 05                	jmp    8285bd0 <_ZNK14CTrcOnOffEvent10IsEventingEP5CUser+0x2c>
 8285bcb:	b8 01 00 00 00       	mov    $0x1,%eax
 8285bd0:	c9                   	leave
 8285bd1:	c3                   	ret

```

```c
// CTrcOnOffEvent::IsEventing @ 0x8285ba4

/* CTrcOnOffEvent::IsEventing(CUser*) const */

bool CTrcOnOffEvent::IsEventing(CUser *param_1)

{
  char cVar1;
  
  cVar1 = CEventBase::IsEventing(param_1);
  return cVar1 == '\x01';
}

```

---

## StartEvent

```asm
// === 08285aae CTrcOnOffEvent::StartEvent  [0x08285aae-0x8285aff] ===
 8285aae:	55                   	push   %ebp
 8285aaf:	89 e5                	mov    %esp,%ebp
 8285ab1:	83 ec 28             	sub    $0x28,%esp
 8285ab4:	8b 45 08             	mov    0x8(%ebp),%eax
 8285ab7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8285abe:	00 
 8285abf:	89 04 24             	mov    %eax,(%esp)
 8285ac2:	e8 1b 2a e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8285ac7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8285ace:	00 
 8285acf:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8285ad6:	00 
 8285ad7:	c7 44 24 04 04 e4 c0 	movl   $0x8c0e404,0x4(%esp)
 8285ade:	08 
 8285adf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285ae2:	89 04 24             	mov    %eax,(%esp)
 8285ae5:	e8 2e 9c 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8285aea:	c7 44 24 04 20 d8 c0 	movl   $0x8c0d820,0x4(%esp)
 8285af1:	08 
 8285af2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285af5:	89 04 24             	mov    %eax,(%esp)
 8285af8:	e8 8b 9c 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8285afd:	c9                   	leave
 8285afe:	c3                   	ret
 8285aff:	90                   	nop

```

```c
// CTrcOnOffEvent::StartEvent @ 0x8285aae

/* CTrcOnOffEvent::StartEvent() */

void __thiscall CTrcOnOffEvent::StartEvent(CTrcOnOffEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"Trc On Off Event Start!");
  return;
}

```

---

## StartEvent_08285b00

```asm
// === 08285b00 CTrcOnOffEvent::StartEvent  [0x08285b00-0x8285b51] ===
 8285b00:	55                   	push   %ebp
 8285b01:	89 e5                	mov    %esp,%ebp
 8285b03:	83 ec 28             	sub    $0x28,%esp
 8285b06:	8b 45 08             	mov    0x8(%ebp),%eax
 8285b09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8285b10:	00 
 8285b11:	89 04 24             	mov    %eax,(%esp)
 8285b14:	e8 c9 29 e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8285b19:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8285b20:	00 
 8285b21:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 8285b28:	00 
 8285b29:	c7 44 24 04 f9 e3 c0 	movl   $0x8c0e3f9,0x4(%esp)
 8285b30:	08 
 8285b31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285b34:	89 04 24             	mov    %eax,(%esp)
 8285b37:	e8 dc 9b 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8285b3c:	c7 44 24 04 38 d8 c0 	movl   $0x8c0d838,0x4(%esp)
 8285b43:	08 
 8285b44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285b47:	89 04 24             	mov    %eax,(%esp)
 8285b4a:	e8 39 9c 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8285b4f:	c9                   	leave
 8285b50:	c3                   	ret
 8285b51:	90                   	nop

```

```c
// CTrcOnOffEvent::StartEvent @ 0x8285b00

/* CTrcOnOffEvent::StartEvent(Word_Param) */

void CTrcOnOffEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x19,0);
  cMyTrace::operator()(local_1c,"Trc On Off Event Event Start!");
  return;
}

```

---

## ~CTrcOnOffEvent

```asm
// === 08285a60 CTrcOnOffEvent::~CTrcOnOffEvent  [0x08285a60-0x8285a8f] ===
 8285a60:	55                   	push   %ebp
 8285a61:	89 e5                	mov    %esp,%ebp
 8285a63:	83 ec 18             	sub    $0x18,%esp
 8285a66:	8b 45 08             	mov    0x8(%ebp),%eax
 8285a69:	c7 00 28 e4 c0 08    	movl   $0x8c0e428,(%eax)
 8285a6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8285a72:	89 04 24             	mov    %eax,(%esp)
 8285a75:	e8 d8 53 e8 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8285a7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8285a7f:	84 c0                	test   %al,%al
 8285a81:	74 0b                	je     8285a8e <_ZN14CTrcOnOffEventD1Ev+0x2e>
 8285a83:	8b 45 08             	mov    0x8(%ebp),%eax
 8285a86:	89 04 24             	mov    %eax,(%esp)
 8285a89:	e8 62 ea 49 00       	call   87244f0 <_ZdlPv>
 8285a8e:	c9                   	leave
 8285a8f:	c3                   	ret

```

```c
// CTrcOnOffEvent::~CTrcOnOffEvent @ 0x8285a60

/* WARNING: Removing unreachable block (ram,0x08285a83) */
/* CTrcOnOffEvent::~CTrcOnOffEvent() */

void __thiscall CTrcOnOffEvent::~CTrcOnOffEvent(CTrcOnOffEvent *this)

{
  *(undefined ***)this = &PTR__CTrcOnOffEvent_08c0e428;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CTrcOnOffEvent_08285a90

```asm
// === 08285a90 CTrcOnOffEvent::~CTrcOnOffEvent  [0x08285a90-0x8285aad] ===
 8285a90:	55                   	push   %ebp
 8285a91:	89 e5                	mov    %esp,%ebp
 8285a93:	83 ec 18             	sub    $0x18,%esp
 8285a96:	8b 45 08             	mov    0x8(%ebp),%eax
 8285a99:	89 04 24             	mov    %eax,(%esp)
 8285a9c:	e8 bf ff ff ff       	call   8285a60 <_ZN14CTrcOnOffEventD1Ev>
 8285aa1:	8b 45 08             	mov    0x8(%ebp),%eax
 8285aa4:	89 04 24             	mov    %eax,(%esp)
 8285aa7:	e8 44 ea 49 00       	call   87244f0 <_ZdlPv>
 8285aac:	c9                   	leave
 8285aad:	c3                   	ret

```

```c
// CTrcOnOffEvent::~CTrcOnOffEvent @ 0x8285a90

/* CTrcOnOffEvent::~CTrcOnOffEvent() */

void __thiscall CTrcOnOffEvent::~CTrcOnOffEvent(CTrcOnOffEvent *this)

{
  ~CTrcOnOffEvent(this);
  operator_delete(this);
  return;
}

```

