# CFirstServerOpenEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CFirstServerOpenEvent

```asm
// === 0811ca78 CFirstServerOpenEvent::CFirstServerOpenEvent  [0x0811ca78-0x811ca93] ===
 811ca78:	55                   	push   %ebp
 811ca79:	89 e5                	mov    %esp,%ebp
 811ca7b:	83 ec 18             	sub    $0x18,%esp
 811ca7e:	8b 45 08             	mov    0x8(%ebp),%eax
 811ca81:	89 04 24             	mov    %eax,(%esp)
 811ca84:	e8 a3 e3 fe ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 811ca89:	8b 45 08             	mov    0x8(%ebp),%eax
 811ca8c:	c7 00 e8 30 b5 08    	movl   $0x8b530e8,(%eax)
 811ca92:	c9                   	leave
 811ca93:	c3                   	ret

```

```c
// CFirstServerOpenEvent::CFirstServerOpenEvent @ 0x811ca78

/* CFirstServerOpenEvent::CFirstServerOpenEvent() */

void __thiscall CFirstServerOpenEvent::CFirstServerOpenEvent(CFirstServerOpenEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CFirstServerOpenEvent_08b530e8;
  return;
}

```

---

## EndEvent

```asm
// === 0811cb86 CFirstServerOpenEvent::EndEvent  [0x0811cb86-0x811cbd7] ===
 811cb86:	55                   	push   %ebp
 811cb87:	89 e5                	mov    %esp,%ebp
 811cb89:	83 ec 28             	sub    $0x28,%esp
 811cb8c:	8b 45 08             	mov    0x8(%ebp),%eax
 811cb8f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811cb96:	00 
 811cb97:	89 04 24             	mov    %eax,(%esp)
 811cb9a:	e8 43 b9 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811cb9f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811cba6:	00 
 811cba7:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 811cbae:	00 
 811cbaf:	c7 44 24 04 b0 30 b5 	movl   $0x8b530b0,0x4(%esp)
 811cbb6:	08 
 811cbb7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cbba:	89 04 24             	mov    %eax,(%esp)
 811cbbd:	e8 56 2b 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811cbc2:	c7 44 24 04 1f 25 b5 	movl   $0x8b5251f,0x4(%esp)
 811cbc9:	08 
 811cbca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cbcd:	89 04 24             	mov    %eax,(%esp)
 811cbd0:	e8 b3 2b 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811cbd5:	c9                   	leave
 811cbd6:	c3                   	ret
 811cbd7:	90                   	nop

```

```c
// CFirstServerOpenEvent::EndEvent @ 0x811cb86

/* CFirstServerOpenEvent::EndEvent() */

void __thiscall CFirstServerOpenEvent::EndEvent(CFirstServerOpenEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x34,0);
  cMyTrace::operator()(local_1c,"First Server Open Event End!");
  return;
}

```

---

## IsEventing

```asm
// === 0811cbd8 CFirstServerOpenEvent::IsEventing  [0x0811cbd8-0x811cc05] ===
 811cbd8:	55                   	push   %ebp
 811cbd9:	89 e5                	mov    %esp,%ebp
 811cbdb:	83 ec 18             	sub    $0x18,%esp
 811cbde:	8b 45 08             	mov    0x8(%ebp),%eax
 811cbe1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811cbe8:	00 
 811cbe9:	89 04 24             	mov    %eax,(%esp)
 811cbec:	e8 09 b9 fa ff       	call   80c84fa <_ZNK10CEventBase10IsEventingEP5CUser>
 811cbf1:	83 f0 01             	xor    $0x1,%eax
 811cbf4:	84 c0                	test   %al,%al
 811cbf6:	74 07                	je     811cbff <_ZN21CFirstServerOpenEvent10IsEventingEP5CUser+0x27>
 811cbf8:	b8 00 00 00 00       	mov    $0x0,%eax
 811cbfd:	eb 05                	jmp    811cc04 <_ZN21CFirstServerOpenEvent10IsEventingEP5CUser+0x2c>
 811cbff:	b8 01 00 00 00       	mov    $0x1,%eax
 811cc04:	c9                   	leave
 811cc05:	c3                   	ret

```

```c
// CFirstServerOpenEvent::IsEventing @ 0x811cbd8

/* CFirstServerOpenEvent::IsEventing(CUser*) */

bool CFirstServerOpenEvent::IsEventing(CUser *param_1)

{
  char cVar1;
  
  cVar1 = CEventBase::IsEventing(param_1);
  return cVar1 == '\x01';
}

```

---

## StartEvent

```asm
// === 0811cae2 CFirstServerOpenEvent::StartEvent  [0x0811cae2-0x811cb33] ===
 811cae2:	55                   	push   %ebp
 811cae3:	89 e5                	mov    %esp,%ebp
 811cae5:	83 ec 28             	sub    $0x28,%esp
 811cae8:	8b 45 08             	mov    0x8(%ebp),%eax
 811caeb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811caf2:	00 
 811caf3:	89 04 24             	mov    %eax,(%esp)
 811caf6:	e8 e7 b9 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811cafb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811cb02:	00 
 811cb03:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 811cb0a:	00 
 811cb0b:	c7 44 24 04 c4 30 b5 	movl   $0x8b530c4,0x4(%esp)
 811cb12:	08 
 811cb13:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cb16:	89 04 24             	mov    %eax,(%esp)
 811cb19:	e8 fa 2b 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811cb1e:	c7 44 24 04 00 25 b5 	movl   $0x8b52500,0x4(%esp)
 811cb25:	08 
 811cb26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cb29:	89 04 24             	mov    %eax,(%esp)
 811cb2c:	e8 57 2c 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811cb31:	c9                   	leave
 811cb32:	c3                   	ret
 811cb33:	90                   	nop

```

```c
// CFirstServerOpenEvent::StartEvent @ 0x811cae2

/* CFirstServerOpenEvent::StartEvent() */

void __thiscall CFirstServerOpenEvent::StartEvent(CFirstServerOpenEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x20,0);
  cMyTrace::operator()(local_1c,"First Server Open Event Start!");
  return;
}

```

---

## StartEvent_0811cb34

```asm
// === 0811cb34 CFirstServerOpenEvent::StartEvent  [0x0811cb34-0x811cb85] ===
 811cb34:	55                   	push   %ebp
 811cb35:	89 e5                	mov    %esp,%ebp
 811cb37:	83 ec 28             	sub    $0x28,%esp
 811cb3a:	8b 45 08             	mov    0x8(%ebp),%eax
 811cb3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811cb44:	00 
 811cb45:	89 04 24             	mov    %eax,(%esp)
 811cb48:	e8 95 b9 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811cb4d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811cb54:	00 
 811cb55:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 811cb5c:	00 
 811cb5d:	c7 44 24 04 b9 30 b5 	movl   $0x8b530b9,0x4(%esp)
 811cb64:	08 
 811cb65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cb68:	89 04 24             	mov    %eax,(%esp)
 811cb6b:	e8 a8 2b 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811cb70:	c7 44 24 04 00 25 b5 	movl   $0x8b52500,0x4(%esp)
 811cb77:	08 
 811cb78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cb7b:	89 04 24             	mov    %eax,(%esp)
 811cb7e:	e8 05 2c 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811cb83:	c9                   	leave
 811cb84:	c3                   	ret
 811cb85:	90                   	nop

```

```c
// CFirstServerOpenEvent::StartEvent @ 0x811cb34

/* CFirstServerOpenEvent::StartEvent(Word_Param) */

void CFirstServerOpenEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x2e,0);
  cMyTrace::operator()(local_1c,"First Server Open Event Start!");
  return;
}

```

---

## ~CFirstServerOpenEvent

```asm
// === 0811ca94 CFirstServerOpenEvent::~CFirstServerOpenEvent  [0x0811ca94-0x811cac3] ===
 811ca94:	55                   	push   %ebp
 811ca95:	89 e5                	mov    %esp,%ebp
 811ca97:	83 ec 18             	sub    $0x18,%esp
 811ca9a:	8b 45 08             	mov    0x8(%ebp),%eax
 811ca9d:	c7 00 e8 30 b5 08    	movl   $0x8b530e8,(%eax)
 811caa3:	8b 45 08             	mov    0x8(%ebp),%eax
 811caa6:	89 04 24             	mov    %eax,(%esp)
 811caa9:	e8 a4 e3 fe ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 811caae:	b8 00 00 00 00       	mov    $0x0,%eax
 811cab3:	84 c0                	test   %al,%al
 811cab5:	74 0b                	je     811cac2 <_ZN21CFirstServerOpenEventD1Ev+0x2e>
 811cab7:	8b 45 08             	mov    0x8(%ebp),%eax
 811caba:	89 04 24             	mov    %eax,(%esp)
 811cabd:	e8 2e 7a 60 00       	call   87244f0 <_ZdlPv>
 811cac2:	c9                   	leave
 811cac3:	c3                   	ret

```

```c
// CFirstServerOpenEvent::~CFirstServerOpenEvent @ 0x811ca94

/* WARNING: Removing unreachable block (ram,0x0811cab7) */
/* CFirstServerOpenEvent::~CFirstServerOpenEvent() */

void __thiscall CFirstServerOpenEvent::~CFirstServerOpenEvent(CFirstServerOpenEvent *this)

{
  *(undefined ***)this = &PTR__CFirstServerOpenEvent_08b530e8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CFirstServerOpenEvent_0811cac4

```asm
// === 0811cac4 CFirstServerOpenEvent::~CFirstServerOpenEvent  [0x0811cac4-0x811cae1] ===
 811cac4:	55                   	push   %ebp
 811cac5:	89 e5                	mov    %esp,%ebp
 811cac7:	83 ec 18             	sub    $0x18,%esp
 811caca:	8b 45 08             	mov    0x8(%ebp),%eax
 811cacd:	89 04 24             	mov    %eax,(%esp)
 811cad0:	e8 bf ff ff ff       	call   811ca94 <_ZN21CFirstServerOpenEventD1Ev>
 811cad5:	8b 45 08             	mov    0x8(%ebp),%eax
 811cad8:	89 04 24             	mov    %eax,(%esp)
 811cadb:	e8 10 7a 60 00       	call   87244f0 <_ZdlPv>
 811cae0:	c9                   	leave
 811cae1:	c3                   	ret

```

```c
// CFirstServerOpenEvent::~CFirstServerOpenEvent @ 0x811cac4

/* CFirstServerOpenEvent::~CFirstServerOpenEvent() */

void __thiscall CFirstServerOpenEvent::~CFirstServerOpenEvent(CFirstServerOpenEvent *this)

{
  ~CFirstServerOpenEvent(this);
  operator_delete(this);
  return;
}

```

