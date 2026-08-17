# EventGiveMeBox

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## EndEvent

```asm
// === 08164abe EventGiveMeBox::EndEvent  [0x08164abe-0x8164b0e] ===
 8164abe:	55                   	push   %ebp
 8164abf:	89 e5                	mov    %esp,%ebp
 8164ac1:	83 ec 28             	sub    $0x28,%esp
 8164ac4:	8b 45 08             	mov    0x8(%ebp),%eax
 8164ac7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8164ace:	00 
 8164acf:	89 04 24             	mov    %eax,(%esp)
 8164ad2:	e8 0b 3a f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8164ad7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8164ade:	00 
 8164adf:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8164ae6:	00 
 8164ae7:	c7 44 24 04 80 d9 b7 	movl   $0x8b7d980,0x4(%esp)
 8164aee:	08 
 8164aef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164af2:	89 04 24             	mov    %eax,(%esp)
 8164af5:	e8 1e ac 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8164afa:	c7 44 24 04 4c cd b7 	movl   $0x8b7cd4c,0x4(%esp)
 8164b01:	08 
 8164b02:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164b05:	89 04 24             	mov    %eax,(%esp)
 8164b08:	e8 7b ac 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8164b0d:	c9                   	leave
 8164b0e:	c3                   	ret

```

```c
// EventGiveMeBox::EndEvent @ 0x8164abe

/* EventGiveMeBox::EndEvent() */

void __thiscall EventGiveMeBox::EndEvent(EventGiveMeBox *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void EventGiveMeBox::EndEvent()",0x1d,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventGiveMeBox] Event stop!");
  return;
}

```

---

## EventGiveMeBox

```asm
// === 081649b0 EventGiveMeBox::EventGiveMeBox  [0x081649b0-0x81649cb] ===
 81649b0:	55                   	push   %ebp
 81649b1:	89 e5                	mov    %esp,%ebp
 81649b3:	83 ec 18             	sub    $0x18,%esp
 81649b6:	8b 45 08             	mov    0x8(%ebp),%eax
 81649b9:	89 04 24             	mov    %eax,(%esp)
 81649bc:	e8 6b 64 fa ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81649c1:	8b 45 08             	mov    0x8(%ebp),%eax
 81649c4:	c7 00 48 da b7 08    	movl   $0x8b7da48,(%eax)
 81649ca:	c9                   	leave
 81649cb:	c3                   	ret

```

```c
// EventGiveMeBox::EventGiveMeBox @ 0x81649b0

/* EventGiveMeBox::EventGiveMeBox() */

void __thiscall EventGiveMeBox::EventGiveMeBox(EventGiveMeBox *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__EventGiveMeBox_08b7da48;
  return;
}

```

---

## StartEvent

```asm
// === 08164a1a EventGiveMeBox::StartEvent  [0x08164a1a-0x8164a6b] ===
 8164a1a:	55                   	push   %ebp
 8164a1b:	89 e5                	mov    %esp,%ebp
 8164a1d:	83 ec 28             	sub    $0x28,%esp
 8164a20:	8b 45 08             	mov    0x8(%ebp),%eax
 8164a23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8164a2a:	00 
 8164a2b:	89 04 24             	mov    %eax,(%esp)
 8164a2e:	e8 af 3a f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8164a33:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8164a3a:	00 
 8164a3b:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8164a42:	00 
 8164a43:	c7 44 24 04 00 da b7 	movl   $0x8b7da00,0x4(%esp)
 8164a4a:	08 
 8164a4b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164a4e:	89 04 24             	mov    %eax,(%esp)
 8164a51:	e8 c2 ac 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8164a56:	c7 44 24 04 24 cd b7 	movl   $0x8b7cd24,0x4(%esp)
 8164a5d:	08 
 8164a5e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164a61:	89 04 24             	mov    %eax,(%esp)
 8164a64:	e8 1f ad 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8164a69:	c9                   	leave
 8164a6a:	c3                   	ret
 8164a6b:	90                   	nop

```

```c
// EventGiveMeBox::StartEvent @ 0x8164a1a

/* EventGiveMeBox::StartEvent() */

void __thiscall EventGiveMeBox::StartEvent(EventGiveMeBox *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void EventGiveMeBox::StartEvent()",0x12,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventGiveMeBox] Event start!");
  return;
}

```

---

## StartEvent_08164a6c

```asm
// === 08164a6c EventGiveMeBox::StartEvent  [0x08164a6c-0x8164abd] ===
 8164a6c:	55                   	push   %ebp
 8164a6d:	89 e5                	mov    %esp,%ebp
 8164a6f:	83 ec 28             	sub    $0x28,%esp
 8164a72:	8b 45 08             	mov    0x8(%ebp),%eax
 8164a75:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8164a7c:	00 
 8164a7d:	89 04 24             	mov    %eax,(%esp)
 8164a80:	e8 5d 3a f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8164a85:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8164a8c:	00 
 8164a8d:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8164a94:	00 
 8164a95:	c7 44 24 04 c0 d9 b7 	movl   $0x8b7d9c0,0x4(%esp)
 8164a9c:	08 
 8164a9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164aa0:	89 04 24             	mov    %eax,(%esp)
 8164aa3:	e8 70 ac 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8164aa8:	c7 44 24 04 24 cd b7 	movl   $0x8b7cd24,0x4(%esp)
 8164aaf:	08 
 8164ab0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164ab3:	89 04 24             	mov    %eax,(%esp)
 8164ab6:	e8 cd ac 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8164abb:	c9                   	leave
 8164abc:	c3                   	ret
 8164abd:	90                   	nop

```

```c
// EventGiveMeBox::StartEvent @ 0x8164a6c

/* EventGiveMeBox::StartEvent(Word_Param) */

void EventGiveMeBox::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void EventGiveMeBox::StartEvent(Word_Param)",0x17,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventGiveMeBox] Event start!");
  return;
}

```

---

## ~EventGiveMeBox

```asm
// === 081649cc EventGiveMeBox::~EventGiveMeBox  [0x081649cc-0x81649fb] ===
 81649cc:	55                   	push   %ebp
 81649cd:	89 e5                	mov    %esp,%ebp
 81649cf:	83 ec 18             	sub    $0x18,%esp
 81649d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81649d5:	c7 00 48 da b7 08    	movl   $0x8b7da48,(%eax)
 81649db:	8b 45 08             	mov    0x8(%ebp),%eax
 81649de:	89 04 24             	mov    %eax,(%esp)
 81649e1:	e8 6c 64 fa ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81649e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81649eb:	84 c0                	test   %al,%al
 81649ed:	74 0b                	je     81649fa <_ZN14EventGiveMeBoxD1Ev+0x2e>
 81649ef:	8b 45 08             	mov    0x8(%ebp),%eax
 81649f2:	89 04 24             	mov    %eax,(%esp)
 81649f5:	e8 f6 fa 5b 00       	call   87244f0 <_ZdlPv>
 81649fa:	c9                   	leave
 81649fb:	c3                   	ret

```

```c
// EventGiveMeBox::~EventGiveMeBox @ 0x81649cc

/* WARNING: Removing unreachable block (ram,0x081649ef) */
/* EventGiveMeBox::~EventGiveMeBox() */

void __thiscall EventGiveMeBox::~EventGiveMeBox(EventGiveMeBox *this)

{
  *(undefined ***)this = &PTR__EventGiveMeBox_08b7da48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~EventGiveMeBox_081649fc

```asm
// === 081649fc EventGiveMeBox::~EventGiveMeBox  [0x081649fc-0x8164a19] ===
 81649fc:	55                   	push   %ebp
 81649fd:	89 e5                	mov    %esp,%ebp
 81649ff:	83 ec 18             	sub    $0x18,%esp
 8164a02:	8b 45 08             	mov    0x8(%ebp),%eax
 8164a05:	89 04 24             	mov    %eax,(%esp)
 8164a08:	e8 bf ff ff ff       	call   81649cc <_ZN14EventGiveMeBoxD1Ev>
 8164a0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8164a10:	89 04 24             	mov    %eax,(%esp)
 8164a13:	e8 d8 fa 5b 00       	call   87244f0 <_ZdlPv>
 8164a18:	c9                   	leave
 8164a19:	c3                   	ret

```

```c
// EventGiveMeBox::~EventGiveMeBox @ 0x81649fc

/* EventGiveMeBox::~EventGiveMeBox() */

void __thiscall EventGiveMeBox::~EventGiveMeBox(EventGiveMeBox *this)

{
  ~EventGiveMeBox(this);
  operator_delete(this);
  return;
}

```

