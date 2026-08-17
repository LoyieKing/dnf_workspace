# CLeadingChannelEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CLeadingChannelEvent

```asm
// === 0811fd64 CLeadingChannelEvent::CLeadingChannelEvent  [0x0811fd64-0x811fd89] ===
 811fd64:	55                   	push   %ebp
 811fd65:	89 e5                	mov    %esp,%ebp
 811fd67:	83 ec 18             	sub    $0x18,%esp
 811fd6a:	8b 45 08             	mov    0x8(%ebp),%eax
 811fd6d:	89 04 24             	mov    %eax,(%esp)
 811fd70:	e8 b7 b0 fe ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 811fd75:	8b 45 08             	mov    0x8(%ebp),%eax
 811fd78:	c7 00 a8 88 b5 08    	movl   $0x8b588a8,(%eax)
 811fd7e:	8b 45 08             	mov    0x8(%ebp),%eax
 811fd81:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 811fd88:	c9                   	leave
 811fd89:	c3                   	ret

```

```c
// CLeadingChannelEvent::CLeadingChannelEvent @ 0x811fd64

/* CLeadingChannelEvent::CLeadingChannelEvent() */

void __thiscall CLeadingChannelEvent::CLeadingChannelEvent(CLeadingChannelEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CLeadingChannelEvent_08b588a8;
  *(undefined4 *)(this + 0xc) = 100;
  return;
}

```

---

## EndEvent

```asm
// === 0811fe92 CLeadingChannelEvent::EndEvent  [0x0811fe92-0x811feec] ===
 811fe92:	55                   	push   %ebp
 811fe93:	89 e5                	mov    %esp,%ebp
 811fe95:	83 ec 28             	sub    $0x28,%esp
 811fe98:	8b 45 08             	mov    0x8(%ebp),%eax
 811fe9b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811fea2:	00 
 811fea3:	89 04 24             	mov    %eax,(%esp)
 811fea6:	e8 37 86 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811feab:	8b 45 08             	mov    0x8(%ebp),%eax
 811feae:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 811feb5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811febc:	00 
 811febd:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 811fec4:	00 
 811fec5:	c7 44 24 04 70 88 b5 	movl   $0x8b58870,0x4(%esp)
 811fecc:	08 
 811fecd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811fed0:	89 04 24             	mov    %eax,(%esp)
 811fed3:	e8 40 f8 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811fed8:	c7 44 24 04 dd 81 b5 	movl   $0x8b581dd,0x4(%esp)
 811fedf:	08 
 811fee0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811fee3:	89 04 24             	mov    %eax,(%esp)
 811fee6:	e8 9d f8 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811feeb:	c9                   	leave
 811feec:	c3                   	ret

```

```c
// CLeadingChannelEvent::EndEvent @ 0x811fe92

/* CLeadingChannelEvent::EndEvent() */

void __thiscall CLeadingChannelEvent::EndEvent(CLeadingChannelEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x23,0);
  cMyTrace::operator()(local_1c,"Leading Channel Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 0811fdd8 CLeadingChannelEvent::StartEvent  [0x0811fdd8-0x811fe33] ===
 811fdd8:	55                   	push   %ebp
 811fdd9:	89 e5                	mov    %esp,%ebp
 811fddb:	83 ec 28             	sub    $0x28,%esp
 811fdde:	8b 45 08             	mov    0x8(%ebp),%eax
 811fde1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811fde8:	00 
 811fde9:	89 04 24             	mov    %eax,(%esp)
 811fdec:	e8 f1 86 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811fdf1:	8b 45 08             	mov    0x8(%ebp),%eax
 811fdf4:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 811fdfb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811fe02:	00 
 811fe03:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 811fe0a:	00 
 811fe0b:	c7 44 24 04 84 88 b5 	movl   $0x8b58884,0x4(%esp)
 811fe12:	08 
 811fe13:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811fe16:	89 04 24             	mov    %eax,(%esp)
 811fe19:	e8 fa f8 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811fe1e:	c7 44 24 04 c0 81 b5 	movl   $0x8b581c0,0x4(%esp)
 811fe25:	08 
 811fe26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811fe29:	89 04 24             	mov    %eax,(%esp)
 811fe2c:	e8 57 f9 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811fe31:	c9                   	leave
 811fe32:	c3                   	ret
 811fe33:	90                   	nop

```

```c
// CLeadingChannelEvent::StartEvent @ 0x811fdd8

/* CLeadingChannelEvent::StartEvent() */

void __thiscall CLeadingChannelEvent::StartEvent(CLeadingChannelEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"Leading Channel Event Start!");
  return;
}

```

---

## StartEvent_0811fe34

```asm
// === 0811fe34 CLeadingChannelEvent::StartEvent  [0x0811fe34-0x811fe91] ===
 811fe34:	55                   	push   %ebp
 811fe35:	89 e5                	mov    %esp,%ebp
 811fe37:	83 ec 28             	sub    $0x28,%esp
 811fe3a:	8b 45 08             	mov    0x8(%ebp),%eax
 811fe3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811fe44:	00 
 811fe45:	89 04 24             	mov    %eax,(%esp)
 811fe48:	e8 95 86 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811fe4d:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 811fe51:	0f b7 d0             	movzwl %ax,%edx
 811fe54:	8b 45 08             	mov    0x8(%ebp),%eax
 811fe57:	89 50 0c             	mov    %edx,0xc(%eax)
 811fe5a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811fe61:	00 
 811fe62:	c7 44 24 08 1b 00 00 	movl   $0x1b,0x8(%esp)
 811fe69:	00 
 811fe6a:	c7 44 24 04 79 88 b5 	movl   $0x8b58879,0x4(%esp)
 811fe71:	08 
 811fe72:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811fe75:	89 04 24             	mov    %eax,(%esp)
 811fe78:	e8 9b f8 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811fe7d:	c7 44 24 04 c0 81 b5 	movl   $0x8b581c0,0x4(%esp)
 811fe84:	08 
 811fe85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811fe88:	89 04 24             	mov    %eax,(%esp)
 811fe8b:	e8 f8 f8 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811fe90:	c9                   	leave
 811fe91:	c3                   	ret

```

```c
// CLeadingChannelEvent::StartEvent @ 0x811fe34

/* CLeadingChannelEvent::StartEvent(Word_Param) */

void __thiscall CLeadingChannelEvent::StartEvent(CLeadingChannelEvent *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1b,0);
  cMyTrace::operator()(local_1c,"Leading Channel Event Start!");
  return;
}

```

---

## ~CLeadingChannelEvent

```asm
// === 0811fd8a CLeadingChannelEvent::~CLeadingChannelEvent  [0x0811fd8a-0x811fdb9] ===
 811fd8a:	55                   	push   %ebp
 811fd8b:	89 e5                	mov    %esp,%ebp
 811fd8d:	83 ec 18             	sub    $0x18,%esp
 811fd90:	8b 45 08             	mov    0x8(%ebp),%eax
 811fd93:	c7 00 a8 88 b5 08    	movl   $0x8b588a8,(%eax)
 811fd99:	8b 45 08             	mov    0x8(%ebp),%eax
 811fd9c:	89 04 24             	mov    %eax,(%esp)
 811fd9f:	e8 ae b0 fe ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 811fda4:	b8 00 00 00 00       	mov    $0x0,%eax
 811fda9:	84 c0                	test   %al,%al
 811fdab:	74 0b                	je     811fdb8 <_ZN20CLeadingChannelEventD1Ev+0x2e>
 811fdad:	8b 45 08             	mov    0x8(%ebp),%eax
 811fdb0:	89 04 24             	mov    %eax,(%esp)
 811fdb3:	e8 38 47 60 00       	call   87244f0 <_ZdlPv>
 811fdb8:	c9                   	leave
 811fdb9:	c3                   	ret

```

```c
// CLeadingChannelEvent::~CLeadingChannelEvent @ 0x811fd8a

/* WARNING: Removing unreachable block (ram,0x0811fdad) */
/* CLeadingChannelEvent::~CLeadingChannelEvent() */

void __thiscall CLeadingChannelEvent::~CLeadingChannelEvent(CLeadingChannelEvent *this)

{
  *(undefined ***)this = &PTR__CLeadingChannelEvent_08b588a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CLeadingChannelEvent_0811fdba

```asm
// === 0811fdba CLeadingChannelEvent::~CLeadingChannelEvent  [0x0811fdba-0x811fdd7] ===
 811fdba:	55                   	push   %ebp
 811fdbb:	89 e5                	mov    %esp,%ebp
 811fdbd:	83 ec 18             	sub    $0x18,%esp
 811fdc0:	8b 45 08             	mov    0x8(%ebp),%eax
 811fdc3:	89 04 24             	mov    %eax,(%esp)
 811fdc6:	e8 bf ff ff ff       	call   811fd8a <_ZN20CLeadingChannelEventD1Ev>
 811fdcb:	8b 45 08             	mov    0x8(%ebp),%eax
 811fdce:	89 04 24             	mov    %eax,(%esp)
 811fdd1:	e8 1a 47 60 00       	call   87244f0 <_ZdlPv>
 811fdd6:	c9                   	leave
 811fdd7:	c3                   	ret

```

```c
// CLeadingChannelEvent::~CLeadingChannelEvent @ 0x811fdba

/* CLeadingChannelEvent::~CLeadingChannelEvent() */

void __thiscall CLeadingChannelEvent::~CLeadingChannelEvent(CLeadingChannelEvent *this)

{
  ~CLeadingChannelEvent(this);
  operator_delete(this);
  return;
}

```

