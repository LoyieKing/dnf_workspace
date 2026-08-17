# CReformingDanjinEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CReformingDanjinEvent

```asm
// === 0826e92c CReformingDanjinEvent::CReformingDanjinEvent  [0x0826e92c-0x826e947] ===
 826e92c:	55                   	push   %ebp
 826e92d:	89 e5                	mov    %esp,%ebp
 826e92f:	83 ec 18             	sub    $0x18,%esp
 826e932:	8b 45 08             	mov    0x8(%ebp),%eax
 826e935:	89 04 24             	mov    %eax,(%esp)
 826e938:	e8 ef c4 e9 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 826e93d:	8b 45 08             	mov    0x8(%ebp),%eax
 826e940:	c7 00 48 8f bf 08    	movl   $0x8bf8f48,(%eax)
 826e946:	c9                   	leave
 826e947:	c3                   	ret

```

```c
// CReformingDanjinEvent::CReformingDanjinEvent @ 0x826e92c

/* CReformingDanjinEvent::CReformingDanjinEvent() */

void __thiscall CReformingDanjinEvent::CReformingDanjinEvent(CReformingDanjinEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CReformingDanjinEvent_08bf8f48;
  return;
}

```

---

## EndEvent

```asm
// === 0826ea3a CReformingDanjinEvent::EndEvent  [0x0826ea3a-0x826ea8a] ===
 826ea3a:	55                   	push   %ebp
 826ea3b:	89 e5                	mov    %esp,%ebp
 826ea3d:	83 ec 28             	sub    $0x28,%esp
 826ea40:	8b 45 08             	mov    0x8(%ebp),%eax
 826ea43:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826ea4a:	00 
 826ea4b:	89 04 24             	mov    %eax,(%esp)
 826ea4e:	e8 8f 9a e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 826ea53:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826ea5a:	00 
 826ea5b:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 826ea62:	00 
 826ea63:	c7 44 24 04 10 8f bf 	movl   $0x8bf8f10,0x4(%esp)
 826ea6a:	08 
 826ea6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826ea6e:	89 04 24             	mov    %eax,(%esp)
 826ea71:	e8 a2 0c 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826ea76:	c7 44 24 04 7e 83 bf 	movl   $0x8bf837e,0x4(%esp)
 826ea7d:	08 
 826ea7e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826ea81:	89 04 24             	mov    %eax,(%esp)
 826ea84:	e8 ff 0c 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826ea89:	c9                   	leave
 826ea8a:	c3                   	ret

```

```c
// CReformingDanjinEvent::EndEvent @ 0x826ea3a

/* CReformingDanjinEvent::EndEvent() */

void __thiscall CReformingDanjinEvent::EndEvent(CReformingDanjinEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1f,0);
  cMyTrace::operator()(local_1c,"Reforming Danjin Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 0826e996 CReformingDanjinEvent::StartEvent  [0x0826e996-0x826e9e7] ===
 826e996:	55                   	push   %ebp
 826e997:	89 e5                	mov    %esp,%ebp
 826e999:	83 ec 28             	sub    $0x28,%esp
 826e99c:	8b 45 08             	mov    0x8(%ebp),%eax
 826e99f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826e9a6:	00 
 826e9a7:	89 04 24             	mov    %eax,(%esp)
 826e9aa:	e8 33 9b e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 826e9af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826e9b6:	00 
 826e9b7:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 826e9be:	00 
 826e9bf:	c7 44 24 04 24 8f bf 	movl   $0x8bf8f24,0x4(%esp)
 826e9c6:	08 
 826e9c7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826e9ca:	89 04 24             	mov    %eax,(%esp)
 826e9cd:	e8 46 0d 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826e9d2:	c7 44 24 04 60 83 bf 	movl   $0x8bf8360,0x4(%esp)
 826e9d9:	08 
 826e9da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826e9dd:	89 04 24             	mov    %eax,(%esp)
 826e9e0:	e8 a3 0d 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826e9e5:	c9                   	leave
 826e9e6:	c3                   	ret
 826e9e7:	90                   	nop

```

```c
// CReformingDanjinEvent::StartEvent @ 0x826e996

/* CReformingDanjinEvent::StartEvent() */

void __thiscall CReformingDanjinEvent::StartEvent(CReformingDanjinEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"Reforming Danjin Event Start!");
  return;
}

```

---

## StartEvent_0826e9e8

```asm
// === 0826e9e8 CReformingDanjinEvent::StartEvent  [0x0826e9e8-0x826ea39] ===
 826e9e8:	55                   	push   %ebp
 826e9e9:	89 e5                	mov    %esp,%ebp
 826e9eb:	83 ec 28             	sub    $0x28,%esp
 826e9ee:	8b 45 08             	mov    0x8(%ebp),%eax
 826e9f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826e9f8:	00 
 826e9f9:	89 04 24             	mov    %eax,(%esp)
 826e9fc:	e8 e1 9a e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 826ea01:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826ea08:	00 
 826ea09:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 826ea10:	00 
 826ea11:	c7 44 24 04 19 8f bf 	movl   $0x8bf8f19,0x4(%esp)
 826ea18:	08 
 826ea19:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826ea1c:	89 04 24             	mov    %eax,(%esp)
 826ea1f:	e8 f4 0c 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826ea24:	c7 44 24 04 60 83 bf 	movl   $0x8bf8360,0x4(%esp)
 826ea2b:	08 
 826ea2c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826ea2f:	89 04 24             	mov    %eax,(%esp)
 826ea32:	e8 51 0d 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826ea37:	c9                   	leave
 826ea38:	c3                   	ret
 826ea39:	90                   	nop

```

```c
// CReformingDanjinEvent::StartEvent @ 0x826e9e8

/* CReformingDanjinEvent::StartEvent(Word_Param) */

void CReformingDanjinEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x19,0);
  cMyTrace::operator()(local_1c,"Reforming Danjin Event Start!");
  return;
}

```

---

## ~CReformingDanjinEvent

```asm
// === 0826e948 CReformingDanjinEvent::~CReformingDanjinEvent  [0x0826e948-0x826e977] ===
 826e948:	55                   	push   %ebp
 826e949:	89 e5                	mov    %esp,%ebp
 826e94b:	83 ec 18             	sub    $0x18,%esp
 826e94e:	8b 45 08             	mov    0x8(%ebp),%eax
 826e951:	c7 00 48 8f bf 08    	movl   $0x8bf8f48,(%eax)
 826e957:	8b 45 08             	mov    0x8(%ebp),%eax
 826e95a:	89 04 24             	mov    %eax,(%esp)
 826e95d:	e8 f0 c4 e9 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 826e962:	b8 00 00 00 00       	mov    $0x0,%eax
 826e967:	84 c0                	test   %al,%al
 826e969:	74 0b                	je     826e976 <_ZN21CReformingDanjinEventD1Ev+0x2e>
 826e96b:	8b 45 08             	mov    0x8(%ebp),%eax
 826e96e:	89 04 24             	mov    %eax,(%esp)
 826e971:	e8 7a 5b 4b 00       	call   87244f0 <_ZdlPv>
 826e976:	c9                   	leave
 826e977:	c3                   	ret

```

```c
// CReformingDanjinEvent::~CReformingDanjinEvent @ 0x826e948

/* WARNING: Removing unreachable block (ram,0x0826e96b) */
/* CReformingDanjinEvent::~CReformingDanjinEvent() */

void __thiscall CReformingDanjinEvent::~CReformingDanjinEvent(CReformingDanjinEvent *this)

{
  *(undefined ***)this = &PTR__CReformingDanjinEvent_08bf8f48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CReformingDanjinEvent_0826e978

```asm
// === 0826e978 CReformingDanjinEvent::~CReformingDanjinEvent  [0x0826e978-0x826e995] ===
 826e978:	55                   	push   %ebp
 826e979:	89 e5                	mov    %esp,%ebp
 826e97b:	83 ec 18             	sub    $0x18,%esp
 826e97e:	8b 45 08             	mov    0x8(%ebp),%eax
 826e981:	89 04 24             	mov    %eax,(%esp)
 826e984:	e8 bf ff ff ff       	call   826e948 <_ZN21CReformingDanjinEventD1Ev>
 826e989:	8b 45 08             	mov    0x8(%ebp),%eax
 826e98c:	89 04 24             	mov    %eax,(%esp)
 826e98f:	e8 5c 5b 4b 00       	call   87244f0 <_ZdlPv>
 826e994:	c9                   	leave
 826e995:	c3                   	ret

```

```c
// CReformingDanjinEvent::~CReformingDanjinEvent @ 0x826e978

/* CReformingDanjinEvent::~CReformingDanjinEvent() */

void __thiscall CReformingDanjinEvent::~CReformingDanjinEvent(CReformingDanjinEvent *this)

{
  ~CReformingDanjinEvent(this);
  operator_delete(this);
  return;
}

```

