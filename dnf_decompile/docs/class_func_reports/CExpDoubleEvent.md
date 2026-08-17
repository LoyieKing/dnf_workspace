# CExpDoubleEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CExpDoubleEvent

```asm
// === 0849ac44 CExpDoubleEvent::CExpDoubleEvent  [0x0849ac44-0x849ac69] ===
 849ac44:	55                   	push   %ebp
 849ac45:	89 e5                	mov    %esp,%ebp
 849ac47:	83 ec 18             	sub    $0x18,%esp
 849ac4a:	8b 45 08             	mov    0x8(%ebp),%eax
 849ac4d:	89 04 24             	mov    %eax,(%esp)
 849ac50:	e8 d7 01 c7 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 849ac55:	8b 45 08             	mov    0x8(%ebp),%eax
 849ac58:	c7 00 48 b9 c7 08    	movl   $0x8c7b948,(%eax)
 849ac5e:	8b 45 08             	mov    0x8(%ebp),%eax
 849ac61:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 849ac68:	c9                   	leave
 849ac69:	c3                   	ret

```

```c
// CExpDoubleEvent::CExpDoubleEvent @ 0x849ac44

/* CExpDoubleEvent::CExpDoubleEvent() */

void __thiscall CExpDoubleEvent::CExpDoubleEvent(CExpDoubleEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CExpDoubleEvent_08c7b948;
  *(undefined4 *)(this + 0xc) = 100;
  return;
}

```

---

## EndEvent

```asm
// === 0849ad72 CExpDoubleEvent::EndEvent  [0x0849ad72-0x849adcc] ===
 849ad72:	55                   	push   %ebp
 849ad73:	89 e5                	mov    %esp,%ebp
 849ad75:	83 ec 28             	sub    $0x28,%esp
 849ad78:	8b 45 08             	mov    0x8(%ebp),%eax
 849ad7b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849ad82:	00 
 849ad83:	89 04 24             	mov    %eax,(%esp)
 849ad86:	e8 57 d7 c2 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 849ad8b:	8b 45 08             	mov    0x8(%ebp),%eax
 849ad8e:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 849ad95:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849ad9c:	00 
 849ad9d:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 849ada4:	00 
 849ada5:	c7 44 24 04 10 b9 c7 	movl   $0x8c7b910,0x4(%esp)
 849adac:	08 
 849adad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849adb0:	89 04 24             	mov    %eax,(%esp)
 849adb3:	e8 60 49 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849adb8:	c7 44 24 04 78 b2 c7 	movl   $0x8c7b278,0x4(%esp)
 849adbf:	08 
 849adc0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849adc3:	89 04 24             	mov    %eax,(%esp)
 849adc6:	e8 bd 49 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849adcb:	c9                   	leave
 849adcc:	c3                   	ret

```

```c
// CExpDoubleEvent::EndEvent @ 0x849ad72

/* CExpDoubleEvent::EndEvent() */

void __thiscall CExpDoubleEvent::EndEvent(CExpDoubleEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x21,0);
  cMyTrace::operator()(local_1c,"Exp Double Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 0849acb8 CExpDoubleEvent::StartEvent  [0x0849acb8-0x849ad13] ===
 849acb8:	55                   	push   %ebp
 849acb9:	89 e5                	mov    %esp,%ebp
 849acbb:	83 ec 28             	sub    $0x28,%esp
 849acbe:	8b 45 08             	mov    0x8(%ebp),%eax
 849acc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849acc8:	00 
 849acc9:	89 04 24             	mov    %eax,(%esp)
 849accc:	e8 11 d8 c2 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 849acd1:	8b 45 08             	mov    0x8(%ebp),%eax
 849acd4:	c7 40 0c 64 00 00 00 	movl   $0x64,0xc(%eax)
 849acdb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849ace2:	00 
 849ace3:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 849acea:	00 
 849aceb:	c7 44 24 04 24 b9 c7 	movl   $0x8c7b924,0x4(%esp)
 849acf2:	08 
 849acf3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849acf6:	89 04 24             	mov    %eax,(%esp)
 849acf9:	e8 1a 4a 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849acfe:	c7 44 24 04 60 b2 c7 	movl   $0x8c7b260,0x4(%esp)
 849ad05:	08 
 849ad06:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849ad09:	89 04 24             	mov    %eax,(%esp)
 849ad0c:	e8 77 4a 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849ad11:	c9                   	leave
 849ad12:	c3                   	ret
 849ad13:	90                   	nop

```

```c
// CExpDoubleEvent::StartEvent @ 0x849acb8

/* CExpDoubleEvent::StartEvent() */

void __thiscall CExpDoubleEvent::StartEvent(CExpDoubleEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"Exp Double Event Start!");
  return;
}

```

---

## StartEvent_0849ad14

```asm
// === 0849ad14 CExpDoubleEvent::StartEvent  [0x0849ad14-0x849ad71] ===
 849ad14:	55                   	push   %ebp
 849ad15:	89 e5                	mov    %esp,%ebp
 849ad17:	83 ec 28             	sub    $0x28,%esp
 849ad1a:	8b 45 08             	mov    0x8(%ebp),%eax
 849ad1d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ad24:	00 
 849ad25:	89 04 24             	mov    %eax,(%esp)
 849ad28:	e8 b5 d7 c2 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 849ad2d:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 849ad31:	0f b7 d0             	movzwl %ax,%edx
 849ad34:	8b 45 08             	mov    0x8(%ebp),%eax
 849ad37:	89 50 0c             	mov    %edx,0xc(%eax)
 849ad3a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849ad41:	00 
 849ad42:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 849ad49:	00 
 849ad4a:	c7 44 24 04 19 b9 c7 	movl   $0x8c7b919,0x4(%esp)
 849ad51:	08 
 849ad52:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849ad55:	89 04 24             	mov    %eax,(%esp)
 849ad58:	e8 bb 49 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849ad5d:	c7 44 24 04 60 b2 c7 	movl   $0x8c7b260,0x4(%esp)
 849ad64:	08 
 849ad65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849ad68:	89 04 24             	mov    %eax,(%esp)
 849ad6b:	e8 18 4a 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849ad70:	c9                   	leave
 849ad71:	c3                   	ret

```

```c
// CExpDoubleEvent::StartEvent @ 0x849ad14

/* CExpDoubleEvent::StartEvent(Word_Param) */

void __thiscall CExpDoubleEvent::StartEvent(CExpDoubleEvent *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1a,0);
  cMyTrace::operator()(local_1c,"Exp Double Event Start!");
  return;
}

```

---

## ~CExpDoubleEvent

```asm
// === 0849ac6a CExpDoubleEvent::~CExpDoubleEvent  [0x0849ac6a-0x849ac99] ===
 849ac6a:	55                   	push   %ebp
 849ac6b:	89 e5                	mov    %esp,%ebp
 849ac6d:	83 ec 18             	sub    $0x18,%esp
 849ac70:	8b 45 08             	mov    0x8(%ebp),%eax
 849ac73:	c7 00 48 b9 c7 08    	movl   $0x8c7b948,(%eax)
 849ac79:	8b 45 08             	mov    0x8(%ebp),%eax
 849ac7c:	89 04 24             	mov    %eax,(%esp)
 849ac7f:	e8 ce 01 c7 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 849ac84:	b8 00 00 00 00       	mov    $0x0,%eax
 849ac89:	84 c0                	test   %al,%al
 849ac8b:	74 0b                	je     849ac98 <_ZN15CExpDoubleEventD1Ev+0x2e>
 849ac8d:	8b 45 08             	mov    0x8(%ebp),%eax
 849ac90:	89 04 24             	mov    %eax,(%esp)
 849ac93:	e8 58 98 28 00       	call   87244f0 <_ZdlPv>
 849ac98:	c9                   	leave
 849ac99:	c3                   	ret

```

```c
// CExpDoubleEvent::~CExpDoubleEvent @ 0x849ac6a

/* WARNING: Removing unreachable block (ram,0x0849ac8d) */
/* CExpDoubleEvent::~CExpDoubleEvent() */

void __thiscall CExpDoubleEvent::~CExpDoubleEvent(CExpDoubleEvent *this)

{
  *(undefined ***)this = &PTR__CExpDoubleEvent_08c7b948;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CExpDoubleEvent_0849ac9a

```asm
// === 0849ac9a CExpDoubleEvent::~CExpDoubleEvent  [0x0849ac9a-0x849acb7] ===
 849ac9a:	55                   	push   %ebp
 849ac9b:	89 e5                	mov    %esp,%ebp
 849ac9d:	83 ec 18             	sub    $0x18,%esp
 849aca0:	8b 45 08             	mov    0x8(%ebp),%eax
 849aca3:	89 04 24             	mov    %eax,(%esp)
 849aca6:	e8 bf ff ff ff       	call   849ac6a <_ZN15CExpDoubleEventD1Ev>
 849acab:	8b 45 08             	mov    0x8(%ebp),%eax
 849acae:	89 04 24             	mov    %eax,(%esp)
 849acb1:	e8 3a 98 28 00       	call   87244f0 <_ZdlPv>
 849acb6:	c9                   	leave
 849acb7:	c3                   	ret

```

```c
// CExpDoubleEvent::~CExpDoubleEvent @ 0x849ac9a

/* CExpDoubleEvent::~CExpDoubleEvent() */

void __thiscall CExpDoubleEvent::~CExpDoubleEvent(CExpDoubleEvent *this)

{
  ~CExpDoubleEvent(this);
  operator_delete(this);
  return;
}

```

