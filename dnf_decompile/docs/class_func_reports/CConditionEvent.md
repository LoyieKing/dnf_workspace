# CConditionEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CConditionEvent

```asm
// === 08184970 CConditionEvent::CConditionEvent  [0x08184970-0x818498b] ===
 8184970:	55                   	push   %ebp
 8184971:	89 e5                	mov    %esp,%ebp
 8184973:	83 ec 18             	sub    $0x18,%esp
 8184976:	8b 45 08             	mov    0x8(%ebp),%eax
 8184979:	89 04 24             	mov    %eax,(%esp)
 818497c:	e8 ab 64 f8 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8184981:	8b 45 08             	mov    0x8(%ebp),%eax
 8184984:	c7 00 c8 e5 b8 08    	movl   $0x8b8e5c8,(%eax)
 818498a:	c9                   	leave
 818498b:	c3                   	ret

```

```c
// CConditionEvent::CConditionEvent @ 0x8184970

/* CConditionEvent::CConditionEvent() */

void __thiscall CConditionEvent::CConditionEvent(CConditionEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CConditionEvent_08b8e5c8;
  return;
}

```

---

## EndEvent

```asm
// === 08184928 CConditionEvent::EndEvent  [0x08184928-0x818496f] ===
 8184928:	55                   	push   %ebp
 8184929:	89 e5                	mov    %esp,%ebp
 818492b:	83 ec 28             	sub    $0x28,%esp
 818492e:	c7 44 24 10 f8 d8 b8 	movl   $0x8b8d8f8,0x10(%esp)
 8184935:	08 
 8184936:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 818493d:	00 
 818493e:	c7 44 24 08 40 e5 b8 	movl   $0x8b8e540,0x8(%esp)
 8184945:	08 
 8184946:	c7 44 24 04 18 d9 b8 	movl   $0x8b8d918,0x4(%esp)
 818494d:	08 
 818494e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8184955:	e8 b0 f2 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818495a:	8b 45 08             	mov    0x8(%ebp),%eax
 818495d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8184964:	00 
 8184965:	89 04 24             	mov    %eax,(%esp)
 8184968:	e8 75 3b f4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 818496d:	c9                   	leave
 818496e:	c3                   	ret
 818496f:	90                   	nop

```

```c
// CConditionEvent::EndEvent @ 0x8184928

/* CConditionEvent::EndEvent() */

void __thiscall CConditionEvent::EndEvent(CConditionEvent *this)

{
  LogManager::logFormat
            (1,"localjapan/Arad_ConditionEvent.cpp","virtual void CConditionEvent::EndEvent()",0x17,
             "[CConditionEvent] End Event.");
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## StartEvent

```asm
// === 081848bc CConditionEvent::StartEvent  [0x081848bc-0x818490d] ===
 81848bc:	55                   	push   %ebp
 81848bd:	89 e5                	mov    %esp,%ebp
 81848bf:	83 ec 28             	sub    $0x28,%esp
 81848c2:	8b 45 08             	mov    0x8(%ebp),%eax
 81848c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81848cc:	00 
 81848cd:	89 04 24             	mov    %eax,(%esp)
 81848d0:	e8 0d 3c f4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81848d5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81848dc:	00 
 81848dd:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 81848e4:	00 
 81848e5:	c7 44 24 04 80 e5 b8 	movl   $0x8b8e580,0x4(%esp)
 81848ec:	08 
 81848ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81848f0:	89 04 24             	mov    %eax,(%esp)
 81848f3:	e8 20 ae 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81848f8:	c7 44 24 04 e0 d8 b8 	movl   $0x8b8d8e0,0x4(%esp)
 81848ff:	08 
 8184900:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8184903:	89 04 24             	mov    %eax,(%esp)
 8184906:	e8 7d ae 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818490b:	c9                   	leave
 818490c:	c3                   	ret
 818490d:	90                   	nop

```

```c
// CConditionEvent::StartEvent @ 0x81848bc

/* CConditionEvent::StartEvent() */

void __thiscall CConditionEvent::StartEvent(CConditionEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CConditionEvent::StartEvent()",0xd,0);
  cMyTrace::operator()(local_1c,"[ConditionEvent] Start!");
  return;
}

```

---

## StartEvent_0818490e

```asm
// === 0818490e CConditionEvent::StartEvent  [0x0818490e-0x8184927] ===
 818490e:	55                   	push   %ebp
 818490f:	89 e5                	mov    %esp,%ebp
 8184911:	83 ec 18             	sub    $0x18,%esp
 8184914:	8b 45 08             	mov    0x8(%ebp),%eax
 8184917:	8b 00                	mov    (%eax),%eax
 8184919:	83 c0 08             	add    $0x8,%eax
 818491c:	8b 10                	mov    (%eax),%edx
 818491e:	8b 45 08             	mov    0x8(%ebp),%eax
 8184921:	89 04 24             	mov    %eax,(%esp)
 8184924:	ff d2                	call   *%edx
 8184926:	c9                   	leave
 8184927:	c3                   	ret

```

```c
// CConditionEvent::StartEvent @ 0x818490e

/* CConditionEvent::StartEvent(Word_Param) */

void CConditionEvent::StartEvent(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

```

---

## ~CConditionEvent

```asm
// === 0818498c CConditionEvent::~CConditionEvent  [0x0818498c-0x81849bb] ===
 818498c:	55                   	push   %ebp
 818498d:	89 e5                	mov    %esp,%ebp
 818498f:	83 ec 18             	sub    $0x18,%esp
 8184992:	8b 45 08             	mov    0x8(%ebp),%eax
 8184995:	c7 00 c8 e5 b8 08    	movl   $0x8b8e5c8,(%eax)
 818499b:	8b 45 08             	mov    0x8(%ebp),%eax
 818499e:	89 04 24             	mov    %eax,(%esp)
 81849a1:	e8 ac 64 f8 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81849a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81849ab:	84 c0                	test   %al,%al
 81849ad:	74 0b                	je     81849ba <_ZN15CConditionEventD1Ev+0x2e>
 81849af:	8b 45 08             	mov    0x8(%ebp),%eax
 81849b2:	89 04 24             	mov    %eax,(%esp)
 81849b5:	e8 36 fb 59 00       	call   87244f0 <_ZdlPv>
 81849ba:	c9                   	leave
 81849bb:	c3                   	ret

```

```c
// CConditionEvent::~CConditionEvent @ 0x818498c

/* WARNING: Removing unreachable block (ram,0x081849af) */
/* CConditionEvent::~CConditionEvent() */

void __thiscall CConditionEvent::~CConditionEvent(CConditionEvent *this)

{
  *(undefined ***)this = &PTR__CConditionEvent_08b8e5c8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CConditionEvent_081849bc

```asm
// === 081849bc CConditionEvent::~CConditionEvent  [0x081849bc-0x81849d9] ===
 81849bc:	55                   	push   %ebp
 81849bd:	89 e5                	mov    %esp,%ebp
 81849bf:	83 ec 18             	sub    $0x18,%esp
 81849c2:	8b 45 08             	mov    0x8(%ebp),%eax
 81849c5:	89 04 24             	mov    %eax,(%esp)
 81849c8:	e8 bf ff ff ff       	call   818498c <_ZN15CConditionEventD1Ev>
 81849cd:	8b 45 08             	mov    0x8(%ebp),%eax
 81849d0:	89 04 24             	mov    %eax,(%esp)
 81849d3:	e8 18 fb 59 00       	call   87244f0 <_ZdlPv>
 81849d8:	c9                   	leave
 81849d9:	c3                   	ret

```

```c
// CConditionEvent::~CConditionEvent @ 0x81849bc

/* CConditionEvent::~CConditionEvent() */

void __thiscall CConditionEvent::~CConditionEvent(CConditionEvent *this)

{
  ~CConditionEvent(this);
  operator_delete(this);
  return;
}

```

