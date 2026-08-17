# CGoldCardBlankItemEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CGoldCardBlankItemEvent

```asm
// === 0811ce24 CGoldCardBlankItemEvent::CGoldCardBlankItemEvent  [0x0811ce24-0x811ce3f] ===
 811ce24:	55                   	push   %ebp
 811ce25:	89 e5                	mov    %esp,%ebp
 811ce27:	83 ec 18             	sub    $0x18,%esp
 811ce2a:	8b 45 08             	mov    0x8(%ebp),%eax
 811ce2d:	89 04 24             	mov    %eax,(%esp)
 811ce30:	e8 f7 df fe ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 811ce35:	8b 45 08             	mov    0x8(%ebp),%eax
 811ce38:	c7 00 a8 45 b5 08    	movl   $0x8b545a8,(%eax)
 811ce3e:	c9                   	leave
 811ce3f:	c3                   	ret

```

```c
// CGoldCardBlankItemEvent::CGoldCardBlankItemEvent @ 0x811ce24

/* CGoldCardBlankItemEvent::CGoldCardBlankItemEvent() */

void __thiscall CGoldCardBlankItemEvent::CGoldCardBlankItemEvent(CGoldCardBlankItemEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CGoldCardBlankItemEvent_08b545a8;
  return;
}

```

---

## EndEvent

```asm
// === 0811cee6 CGoldCardBlankItemEvent::EndEvent  [0x0811cee6-0x811cf36] ===
 811cee6:	55                   	push   %ebp
 811cee7:	89 e5                	mov    %esp,%ebp
 811cee9:	83 ec 28             	sub    $0x28,%esp
 811ceec:	8b 45 08             	mov    0x8(%ebp),%eax
 811ceef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811cef6:	00 
 811cef7:	89 04 24             	mov    %eax,(%esp)
 811cefa:	e8 e3 b5 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811ceff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811cf06:	00 
 811cf07:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 811cf0e:	00 
 811cf0f:	c7 44 24 04 70 45 b5 	movl   $0x8b54570,0x4(%esp)
 811cf16:	08 
 811cf17:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cf1a:	89 04 24             	mov    %eax,(%esp)
 811cf1d:	e8 f6 27 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811cf22:	c7 44 24 04 c4 3e b5 	movl   $0x8b53ec4,0x4(%esp)
 811cf29:	08 
 811cf2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cf2d:	89 04 24             	mov    %eax,(%esp)
 811cf30:	e8 53 28 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811cf35:	c9                   	leave
 811cf36:	c3                   	ret

```

```c
// CGoldCardBlankItemEvent::EndEvent @ 0x811cee6

/* CGoldCardBlankItemEvent::EndEvent() */

void __thiscall CGoldCardBlankItemEvent::EndEvent(CGoldCardBlankItemEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Gold Card Blank Item Event End");
  return;
}

```

---

## StartEvent

```asm
// === 0811ce8e CGoldCardBlankItemEvent::StartEvent  [0x0811ce8e-0x811ce93] ===
 811ce8e:	55                   	push   %ebp
 811ce8f:	89 e5                	mov    %esp,%ebp
 811ce91:	5d                   	pop    %ebp
 811ce92:	c3                   	ret
 811ce93:	90                   	nop

```

```c
// CGoldCardBlankItemEvent::StartEvent @ 0x811ce8e

/* CGoldCardBlankItemEvent::StartEvent() */

void CGoldCardBlankItemEvent::StartEvent(void)

{
  return;
}

```

---

## StartEvent_0811ce94

```asm
// === 0811ce94 CGoldCardBlankItemEvent::StartEvent  [0x0811ce94-0x811cee5] ===
 811ce94:	55                   	push   %ebp
 811ce95:	89 e5                	mov    %esp,%ebp
 811ce97:	83 ec 28             	sub    $0x28,%esp
 811ce9a:	8b 45 08             	mov    0x8(%ebp),%eax
 811ce9d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811cea4:	00 
 811cea5:	89 04 24             	mov    %eax,(%esp)
 811cea8:	e8 35 b6 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811cead:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811ceb4:	00 
 811ceb5:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 811cebc:	00 
 811cebd:	c7 44 24 04 79 45 b5 	movl   $0x8b54579,0x4(%esp)
 811cec4:	08 
 811cec5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cec8:	89 04 24             	mov    %eax,(%esp)
 811cecb:	e8 48 28 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811ced0:	c7 44 24 04 a0 3e b5 	movl   $0x8b53ea0,0x4(%esp)
 811ced7:	08 
 811ced8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cedb:	89 04 24             	mov    %eax,(%esp)
 811cede:	e8 a5 28 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811cee3:	c9                   	leave
 811cee4:	c3                   	ret
 811cee5:	90                   	nop

```

```c
// CGoldCardBlankItemEvent::StartEvent @ 0x811ce94

/* CGoldCardBlankItemEvent::StartEvent(Word_Param) */

void CGoldCardBlankItemEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"Gold Card Blank Item Event Start");
  return;
}

```

---

## ~CGoldCardBlankItemEvent

```asm
// === 0811ce40 CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent  [0x0811ce40-0x811ce6f] ===
 811ce40:	55                   	push   %ebp
 811ce41:	89 e5                	mov    %esp,%ebp
 811ce43:	83 ec 18             	sub    $0x18,%esp
 811ce46:	8b 45 08             	mov    0x8(%ebp),%eax
 811ce49:	c7 00 a8 45 b5 08    	movl   $0x8b545a8,(%eax)
 811ce4f:	8b 45 08             	mov    0x8(%ebp),%eax
 811ce52:	89 04 24             	mov    %eax,(%esp)
 811ce55:	e8 f8 df fe ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 811ce5a:	b8 00 00 00 00       	mov    $0x0,%eax
 811ce5f:	84 c0                	test   %al,%al
 811ce61:	74 0b                	je     811ce6e <_ZN23CGoldCardBlankItemEventD1Ev+0x2e>
 811ce63:	8b 45 08             	mov    0x8(%ebp),%eax
 811ce66:	89 04 24             	mov    %eax,(%esp)
 811ce69:	e8 82 76 60 00       	call   87244f0 <_ZdlPv>
 811ce6e:	c9                   	leave
 811ce6f:	c3                   	ret

```

```c
// CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent @ 0x811ce40

/* WARNING: Removing unreachable block (ram,0x0811ce63) */
/* CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent() */

void __thiscall CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent(CGoldCardBlankItemEvent *this)

{
  *(undefined ***)this = &PTR__CGoldCardBlankItemEvent_08b545a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CGoldCardBlankItemEvent_0811ce70

```asm
// === 0811ce70 CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent  [0x0811ce70-0x811ce8d] ===
 811ce70:	55                   	push   %ebp
 811ce71:	89 e5                	mov    %esp,%ebp
 811ce73:	83 ec 18             	sub    $0x18,%esp
 811ce76:	8b 45 08             	mov    0x8(%ebp),%eax
 811ce79:	89 04 24             	mov    %eax,(%esp)
 811ce7c:	e8 bf ff ff ff       	call   811ce40 <_ZN23CGoldCardBlankItemEventD1Ev>
 811ce81:	8b 45 08             	mov    0x8(%ebp),%eax
 811ce84:	89 04 24             	mov    %eax,(%esp)
 811ce87:	e8 64 76 60 00       	call   87244f0 <_ZdlPv>
 811ce8c:	c9                   	leave
 811ce8d:	c3                   	ret

```

```c
// CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent @ 0x811ce70

/* CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent() */

void __thiscall CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent(CGoldCardBlankItemEvent *this)

{
  ~CGoldCardBlankItemEvent(this);
  operator_delete(this);
  return;
}

```

