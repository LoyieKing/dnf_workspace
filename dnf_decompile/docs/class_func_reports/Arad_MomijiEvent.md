# Arad_MomijiEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Arad_MomijiEvent

```asm
// === 0819e738 Arad_MomijiEvent::Arad_MomijiEvent  [0x0819e738-0x819e753] ===
 819e738:	55                   	push   %ebp
 819e739:	89 e5                	mov    %esp,%ebp
 819e73b:	83 ec 18             	sub    $0x18,%esp
 819e73e:	8b 45 08             	mov    0x8(%ebp),%eax
 819e741:	89 04 24             	mov    %eax,(%esp)
 819e744:	e8 e3 c6 f6 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 819e749:	8b 45 08             	mov    0x8(%ebp),%eax
 819e74c:	c7 00 08 8c ba 08    	movl   $0x8ba8c08,(%eax)
 819e752:	c9                   	leave
 819e753:	c3                   	ret

```

```c
// Arad_MomijiEvent::Arad_MomijiEvent @ 0x819e738

/* Arad_MomijiEvent::Arad_MomijiEvent() */

void __thiscall Arad_MomijiEvent::Arad_MomijiEvent(Arad_MomijiEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__Arad_MomijiEvent_08ba8c08;
  return;
}

```

---

## EndEvent

```asm
// === 0819e80e Arad_MomijiEvent::EndEvent  [0x0819e80e-0x819e85e] ===
 819e80e:	55                   	push   %ebp
 819e80f:	89 e5                	mov    %esp,%ebp
 819e811:	83 ec 28             	sub    $0x28,%esp
 819e814:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819e81b:	00 
 819e81c:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 819e823:	00 
 819e824:	c7 44 24 04 80 8b ba 	movl   $0x8ba8b80,0x4(%esp)
 819e82b:	08 
 819e82c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819e82f:	89 04 24             	mov    %eax,(%esp)
 819e832:	e8 e1 0e 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 819e837:	c7 44 24 04 5c 7f ba 	movl   $0x8ba7f5c,0x4(%esp)
 819e83e:	08 
 819e83f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819e842:	89 04 24             	mov    %eax,(%esp)
 819e845:	e8 3e 0f 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 819e84a:	8b 45 08             	mov    0x8(%ebp),%eax
 819e84d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819e854:	00 
 819e855:	89 04 24             	mov    %eax,(%esp)
 819e858:	e8 85 9c f2 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 819e85d:	c9                   	leave
 819e85e:	c3                   	ret

```

```c
// Arad_MomijiEvent::EndEvent @ 0x819e80e

/* Arad_MomijiEvent::EndEvent() */

void __thiscall Arad_MomijiEvent::EndEvent(Arad_MomijiEvent *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void Arad_MomijiEvent::EndEvent()",0x1f,0);
  cMyTrace::operator()(local_1c,"[MOMIJI_EVENT] Event End.");
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## StartEvent

```asm
// === 0819e7a2 Arad_MomijiEvent::StartEvent  [0x0819e7a2-0x819e7f3] ===
 819e7a2:	55                   	push   %ebp
 819e7a3:	89 e5                	mov    %esp,%ebp
 819e7a5:	83 ec 28             	sub    $0x28,%esp
 819e7a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819e7af:	00 
 819e7b0:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 819e7b7:	00 
 819e7b8:	c7 44 24 04 c0 8b ba 	movl   $0x8ba8bc0,0x4(%esp)
 819e7bf:	08 
 819e7c0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819e7c3:	89 04 24             	mov    %eax,(%esp)
 819e7c6:	e8 4d 0f 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 819e7cb:	c7 44 24 04 40 7f ba 	movl   $0x8ba7f40,0x4(%esp)
 819e7d2:	08 
 819e7d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819e7d6:	89 04 24             	mov    %eax,(%esp)
 819e7d9:	e8 aa 0f 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 819e7de:	8b 45 08             	mov    0x8(%ebp),%eax
 819e7e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e7e8:	00 
 819e7e9:	89 04 24             	mov    %eax,(%esp)
 819e7ec:	e8 f1 9c f2 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 819e7f1:	c9                   	leave
 819e7f2:	c3                   	ret
 819e7f3:	90                   	nop

```

```c
// Arad_MomijiEvent::StartEvent @ 0x819e7a2

/* Arad_MomijiEvent::StartEvent() */

void __thiscall Arad_MomijiEvent::StartEvent(Arad_MomijiEvent *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void Arad_MomijiEvent::StartEvent()",0x14,0);
  cMyTrace::operator()(local_1c,"[MOMIJI_EVENT] Event Start.");
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}

```

---

## StartEvent_0819e7f4

```asm
// === 0819e7f4 Arad_MomijiEvent::StartEvent  [0x0819e7f4-0x819e80d] ===
 819e7f4:	55                   	push   %ebp
 819e7f5:	89 e5                	mov    %esp,%ebp
 819e7f7:	83 ec 18             	sub    $0x18,%esp
 819e7fa:	8b 45 08             	mov    0x8(%ebp),%eax
 819e7fd:	8b 00                	mov    (%eax),%eax
 819e7ff:	83 c0 08             	add    $0x8,%eax
 819e802:	8b 10                	mov    (%eax),%edx
 819e804:	8b 45 08             	mov    0x8(%ebp),%eax
 819e807:	89 04 24             	mov    %eax,(%esp)
 819e80a:	ff d2                	call   *%edx
 819e80c:	c9                   	leave
 819e80d:	c3                   	ret

```

```c
// Arad_MomijiEvent::StartEvent @ 0x819e7f4

/* Arad_MomijiEvent::StartEvent(Word_Param) */

void Arad_MomijiEvent::StartEvent(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

```

---

## ~Arad_MomijiEvent

```asm
// === 0819e754 Arad_MomijiEvent::~Arad_MomijiEvent  [0x0819e754-0x819e783] ===
 819e754:	55                   	push   %ebp
 819e755:	89 e5                	mov    %esp,%ebp
 819e757:	83 ec 18             	sub    $0x18,%esp
 819e75a:	8b 45 08             	mov    0x8(%ebp),%eax
 819e75d:	c7 00 08 8c ba 08    	movl   $0x8ba8c08,(%eax)
 819e763:	8b 45 08             	mov    0x8(%ebp),%eax
 819e766:	89 04 24             	mov    %eax,(%esp)
 819e769:	e8 e4 c6 f6 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 819e76e:	b8 00 00 00 00       	mov    $0x0,%eax
 819e773:	84 c0                	test   %al,%al
 819e775:	74 0b                	je     819e782 <_ZN16Arad_MomijiEventD1Ev+0x2e>
 819e777:	8b 45 08             	mov    0x8(%ebp),%eax
 819e77a:	89 04 24             	mov    %eax,(%esp)
 819e77d:	e8 6e 5d 58 00       	call   87244f0 <_ZdlPv>
 819e782:	c9                   	leave
 819e783:	c3                   	ret

```

```c
// Arad_MomijiEvent::~Arad_MomijiEvent @ 0x819e754

/* WARNING: Removing unreachable block (ram,0x0819e777) */
/* Arad_MomijiEvent::~Arad_MomijiEvent() */

void __thiscall Arad_MomijiEvent::~Arad_MomijiEvent(Arad_MomijiEvent *this)

{
  *(undefined ***)this = &PTR__Arad_MomijiEvent_08ba8c08;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~Arad_MomijiEvent_0819e784

```asm
// === 0819e784 Arad_MomijiEvent::~Arad_MomijiEvent  [0x0819e784-0x819e7a1] ===
 819e784:	55                   	push   %ebp
 819e785:	89 e5                	mov    %esp,%ebp
 819e787:	83 ec 18             	sub    $0x18,%esp
 819e78a:	8b 45 08             	mov    0x8(%ebp),%eax
 819e78d:	89 04 24             	mov    %eax,(%esp)
 819e790:	e8 bf ff ff ff       	call   819e754 <_ZN16Arad_MomijiEventD1Ev>
 819e795:	8b 45 08             	mov    0x8(%ebp),%eax
 819e798:	89 04 24             	mov    %eax,(%esp)
 819e79b:	e8 50 5d 58 00       	call   87244f0 <_ZdlPv>
 819e7a0:	c9                   	leave
 819e7a1:	c3                   	ret

```

```c
// Arad_MomijiEvent::~Arad_MomijiEvent @ 0x819e784

/* Arad_MomijiEvent::~Arad_MomijiEvent() */

void __thiscall Arad_MomijiEvent::~Arad_MomijiEvent(Arad_MomijiEvent *this)

{
  ~Arad_MomijiEvent(this);
  operator_delete(this);
  return;
}

```

