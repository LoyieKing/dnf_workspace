# LevelUpBefore70LvEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## EndEvent

```asm
// === 0812006e LevelUpBefore70LvEvent::EndEvent  [0x0812006e-0x81200be] ===
 812006e:	55                   	push   %ebp
 812006f:	89 e5                	mov    %esp,%ebp
 8120071:	83 ec 28             	sub    $0x28,%esp
 8120074:	8b 45 08             	mov    0x8(%ebp),%eax
 8120077:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812007e:	00 
 812007f:	89 04 24             	mov    %eax,(%esp)
 8120082:	e8 5b 84 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8120087:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812008e:	00 
 812008f:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8120096:	00 
 8120097:	c7 44 24 04 10 90 b5 	movl   $0x8b59010,0x4(%esp)
 812009e:	08 
 812009f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81200a2:	89 04 24             	mov    %eax,(%esp)
 81200a5:	e8 6e f6 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81200aa:	c7 44 24 04 71 89 b5 	movl   $0x8b58971,0x4(%esp)
 81200b1:	08 
 81200b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81200b5:	89 04 24             	mov    %eax,(%esp)
 81200b8:	e8 cb f6 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81200bd:	c9                   	leave
 81200be:	c3                   	ret

```

```c
// LevelUpBefore70LvEvent::EndEvent @ 0x812006e

/* LevelUpBefore70LvEvent::EndEvent() */

void __thiscall LevelUpBefore70LvEvent::EndEvent(LevelUpBefore70LvEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"LevelUpBefore70Lv Event end!");
  return;
}

```

---

## LevelUpBefore70LvEvent

```asm
// === 0811ff60 LevelUpBefore70LvEvent::LevelUpBefore70LvEvent  [0x0811ff60-0x811ff7b] ===
 811ff60:	55                   	push   %ebp
 811ff61:	89 e5                	mov    %esp,%ebp
 811ff63:	83 ec 18             	sub    $0x18,%esp
 811ff66:	8b 45 08             	mov    0x8(%ebp),%eax
 811ff69:	89 04 24             	mov    %eax,(%esp)
 811ff6c:	e8 bb ae fe ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 811ff71:	8b 45 08             	mov    0x8(%ebp),%eax
 811ff74:	c7 00 48 90 b5 08    	movl   $0x8b59048,(%eax)
 811ff7a:	c9                   	leave
 811ff7b:	c3                   	ret

```

```c
// LevelUpBefore70LvEvent::LevelUpBefore70LvEvent @ 0x811ff60

/* LevelUpBefore70LvEvent::LevelUpBefore70LvEvent() */

void __thiscall LevelUpBefore70LvEvent::LevelUpBefore70LvEvent(LevelUpBefore70LvEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__LevelUpBefore70LvEvent_08b59048;
  return;
}

```

---

## StartEvent

```asm
// === 0811ffca LevelUpBefore70LvEvent::StartEvent  [0x0811ffca-0x812001b] ===
 811ffca:	55                   	push   %ebp
 811ffcb:	89 e5                	mov    %esp,%ebp
 811ffcd:	83 ec 28             	sub    $0x28,%esp
 811ffd0:	8b 45 08             	mov    0x8(%ebp),%eax
 811ffd3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811ffda:	00 
 811ffdb:	89 04 24             	mov    %eax,(%esp)
 811ffde:	e8 ff 84 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811ffe3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811ffea:	00 
 811ffeb:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 811fff2:	00 
 811fff3:	c7 44 24 04 24 90 b5 	movl   $0x8b59024,0x4(%esp)
 811fffa:	08 
 811fffb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811fffe:	89 04 24             	mov    %eax,(%esp)
 8120001:	e8 12 f7 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8120006:	c7 44 24 04 20 89 b5 	movl   $0x8b58920,0x4(%esp)
 812000d:	08 
 812000e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8120011:	89 04 24             	mov    %eax,(%esp)
 8120014:	e8 6f f7 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8120019:	c9                   	leave
 812001a:	c3                   	ret
 812001b:	90                   	nop

```

```c
// LevelUpBefore70LvEvent::StartEvent @ 0x811ffca

/* LevelUpBefore70LvEvent::StartEvent() */

void __thiscall LevelUpBefore70LvEvent::StartEvent(LevelUpBefore70LvEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"LevelUpBefore70Lv Event start!");
  return;
}

```

---

## StartEvent_0812001c

```asm
// === 0812001c LevelUpBefore70LvEvent::StartEvent  [0x0812001c-0x812006d] ===
 812001c:	55                   	push   %ebp
 812001d:	89 e5                	mov    %esp,%ebp
 812001f:	83 ec 28             	sub    $0x28,%esp
 8120022:	8b 45 08             	mov    0x8(%ebp),%eax
 8120025:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812002c:	00 
 812002d:	89 04 24             	mov    %eax,(%esp)
 8120030:	e8 ad 84 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8120035:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812003c:	00 
 812003d:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8120044:	00 
 8120045:	c7 44 24 04 19 90 b5 	movl   $0x8b59019,0x4(%esp)
 812004c:	08 
 812004d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8120050:	89 04 24             	mov    %eax,(%esp)
 8120053:	e8 c0 f6 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8120058:	c7 44 24 04 40 89 b5 	movl   $0x8b58940,0x4(%esp)
 812005f:	08 
 8120060:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8120063:	89 04 24             	mov    %eax,(%esp)
 8120066:	e8 1d f7 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812006b:	c9                   	leave
 812006c:	c3                   	ret
 812006d:	90                   	nop

```

```c
// LevelUpBefore70LvEvent::StartEvent @ 0x812001c

/* LevelUpBefore70LvEvent::StartEvent(Word_Param) */

void LevelUpBefore70LvEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"LevelUpBefore70Lv Event start! [monitor request]");
  return;
}

```

---

## ~LevelUpBefore70LvEvent

```asm
// === 0811ff7c LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent  [0x0811ff7c-0x811ffab] ===
 811ff7c:	55                   	push   %ebp
 811ff7d:	89 e5                	mov    %esp,%ebp
 811ff7f:	83 ec 18             	sub    $0x18,%esp
 811ff82:	8b 45 08             	mov    0x8(%ebp),%eax
 811ff85:	c7 00 48 90 b5 08    	movl   $0x8b59048,(%eax)
 811ff8b:	8b 45 08             	mov    0x8(%ebp),%eax
 811ff8e:	89 04 24             	mov    %eax,(%esp)
 811ff91:	e8 bc ae fe ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 811ff96:	b8 00 00 00 00       	mov    $0x0,%eax
 811ff9b:	84 c0                	test   %al,%al
 811ff9d:	74 0b                	je     811ffaa <_ZN22LevelUpBefore70LvEventD1Ev+0x2e>
 811ff9f:	8b 45 08             	mov    0x8(%ebp),%eax
 811ffa2:	89 04 24             	mov    %eax,(%esp)
 811ffa5:	e8 46 45 60 00       	call   87244f0 <_ZdlPv>
 811ffaa:	c9                   	leave
 811ffab:	c3                   	ret

```

```c
// LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent @ 0x811ff7c

/* WARNING: Removing unreachable block (ram,0x0811ff9f) */
/* LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent() */

void __thiscall LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent(LevelUpBefore70LvEvent *this)

{
  *(undefined ***)this = &PTR__LevelUpBefore70LvEvent_08b59048;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~LevelUpBefore70LvEvent_0811ffac

```asm
// === 0811ffac LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent  [0x0811ffac-0x811ffc9] ===
 811ffac:	55                   	push   %ebp
 811ffad:	89 e5                	mov    %esp,%ebp
 811ffaf:	83 ec 18             	sub    $0x18,%esp
 811ffb2:	8b 45 08             	mov    0x8(%ebp),%eax
 811ffb5:	89 04 24             	mov    %eax,(%esp)
 811ffb8:	e8 bf ff ff ff       	call   811ff7c <_ZN22LevelUpBefore70LvEventD1Ev>
 811ffbd:	8b 45 08             	mov    0x8(%ebp),%eax
 811ffc0:	89 04 24             	mov    %eax,(%esp)
 811ffc3:	e8 28 45 60 00       	call   87244f0 <_ZdlPv>
 811ffc8:	c9                   	leave
 811ffc9:	c3                   	ret

```

```c
// LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent @ 0x811ffac

/* LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent() */

void __thiscall LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent(LevelUpBefore70LvEvent *this)

{
  ~LevelUpBefore70LvEvent(this);
  operator_delete(this);
  return;
}

```

