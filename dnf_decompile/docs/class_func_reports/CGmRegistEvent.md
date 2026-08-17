# CGmRegistEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CGmRegistEvent

```asm
// === 0811cc78 CGmRegistEvent::CGmRegistEvent  [0x0811cc78-0x811cc93] ===
 811cc78:	55                   	push   %ebp
 811cc79:	89 e5                	mov    %esp,%ebp
 811cc7b:	83 ec 18             	sub    $0x18,%esp
 811cc7e:	8b 45 08             	mov    0x8(%ebp),%eax
 811cc81:	89 04 24             	mov    %eax,(%esp)
 811cc84:	e8 a3 e1 fe ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 811cc89:	8b 45 08             	mov    0x8(%ebp),%eax
 811cc8c:	c7 00 48 3e b5 08    	movl   $0x8b53e48,(%eax)
 811cc92:	c9                   	leave
 811cc93:	c3                   	ret

```

```c
// CGmRegistEvent::CGmRegistEvent @ 0x811cc78

/* CGmRegistEvent::CGmRegistEvent() */

void __thiscall CGmRegistEvent::CGmRegistEvent(CGmRegistEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CGmRegistEvent_08b53e48;
  return;
}

```

---

## EndEvent

```asm
// === 0811cd76 CGmRegistEvent::EndEvent  [0x0811cd76-0x811cdb3] ===
 811cd76:	55                   	push   %ebp
 811cd77:	89 e5                	mov    %esp,%ebp
 811cd79:	83 ec 28             	sub    $0x28,%esp
 811cd7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811cd83:	00 
 811cd84:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 811cd8b:	00 
 811cd8c:	c7 44 24 04 80 3d b5 	movl   $0x8b53d80,0x4(%esp)
 811cd93:	08 
 811cd94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cd97:	89 04 24             	mov    %eax,(%esp)
 811cd9a:	e8 79 29 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811cd9f:	c7 44 24 04 76 31 b5 	movl   $0x8b53176,0x4(%esp)
 811cda6:	08 
 811cda7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cdaa:	89 04 24             	mov    %eax,(%esp)
 811cdad:	e8 d6 29 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811cdb2:	c9                   	leave
 811cdb3:	c3                   	ret

```

```c
// CGmRegistEvent::EndEvent @ 0x811cd76

/* CGmRegistEvent::EndEvent() */

void CGmRegistEvent::EndEvent(void)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void CGmRegistEvent::EndEvent()",0x24,0);
  cMyTrace::operator()(local_1c,"CGmRegistEvent End!");
  return;
}

```

---

## StartEvent

```asm
// === 0811cce2 CGmRegistEvent::StartEvent  [0x0811cce2-0x811cd2b] ===
 811cce2:	55                   	push   %ebp
 811cce3:	89 e5                	mov    %esp,%ebp
 811cce5:	83 ec 28             	sub    $0x28,%esp
 811cce8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 811ccef:	e8 38 cb 31 00       	call   843982c <_ZN15DB_UpdateGMData11makeRequestEb>
 811ccf4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811ccfb:	00 
 811ccfc:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 811cd03:	00 
 811cd04:	c7 44 24 04 00 3e b5 	movl   $0x8b53e00,0x4(%esp)
 811cd0b:	08 
 811cd0c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cd0f:	89 04 24             	mov    %eax,(%esp)
 811cd12:	e8 01 2a 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811cd17:	c7 44 24 04 60 31 b5 	movl   $0x8b53160,0x4(%esp)
 811cd1e:	08 
 811cd1f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cd22:	89 04 24             	mov    %eax,(%esp)
 811cd25:	e8 5e 2a 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811cd2a:	c9                   	leave
 811cd2b:	c3                   	ret

```

```c
// CGmRegistEvent::StartEvent @ 0x811cce2

/* CGmRegistEvent::StartEvent() */

void CGmRegistEvent::StartEvent(void)

{
  cMyTrace local_1c [24];
  
  DB_UpdateGMData::makeRequest(true);
  cMyTrace::cMyTrace(local_1c,"virtual void CGmRegistEvent::StartEvent()",0x16,0);
  cMyTrace::operator()(local_1c,"CGmRegistEvent Start!");
  return;
}

```

---

## StartEvent_0811cd2c

```asm
// === 0811cd2c CGmRegistEvent::StartEvent  [0x0811cd2c-0x811cd75] ===
 811cd2c:	55                   	push   %ebp
 811cd2d:	89 e5                	mov    %esp,%ebp
 811cd2f:	83 ec 28             	sub    $0x28,%esp
 811cd32:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 811cd39:	e8 ee ca 31 00       	call   843982c <_ZN15DB_UpdateGMData11makeRequestEb>
 811cd3e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811cd45:	00 
 811cd46:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 811cd4d:	00 
 811cd4e:	c7 44 24 04 c0 3d b5 	movl   $0x8b53dc0,0x4(%esp)
 811cd55:	08 
 811cd56:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cd59:	89 04 24             	mov    %eax,(%esp)
 811cd5c:	e8 b7 29 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811cd61:	c7 44 24 04 60 31 b5 	movl   $0x8b53160,0x4(%esp)
 811cd68:	08 
 811cd69:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811cd6c:	89 04 24             	mov    %eax,(%esp)
 811cd6f:	e8 14 2a 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811cd74:	c9                   	leave
 811cd75:	c3                   	ret

```

```c
// CGmRegistEvent::StartEvent @ 0x811cd2c

/* CGmRegistEvent::StartEvent(Word_Param) */

void CGmRegistEvent::StartEvent(void)

{
  cMyTrace local_1c [24];
  
  DB_UpdateGMData::makeRequest(true);
  cMyTrace::cMyTrace(local_1c,"virtual void CGmRegistEvent::StartEvent(Word_Param)",0x1d,0);
  cMyTrace::operator()(local_1c,"CGmRegistEvent Start!");
  return;
}

```

---

## ~CGmRegistEvent

```asm
// === 0811cc94 CGmRegistEvent::~CGmRegistEvent  [0x0811cc94-0x811ccc3] ===
 811cc94:	55                   	push   %ebp
 811cc95:	89 e5                	mov    %esp,%ebp
 811cc97:	83 ec 18             	sub    $0x18,%esp
 811cc9a:	8b 45 08             	mov    0x8(%ebp),%eax
 811cc9d:	c7 00 48 3e b5 08    	movl   $0x8b53e48,(%eax)
 811cca3:	8b 45 08             	mov    0x8(%ebp),%eax
 811cca6:	89 04 24             	mov    %eax,(%esp)
 811cca9:	e8 a4 e1 fe ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 811ccae:	b8 00 00 00 00       	mov    $0x0,%eax
 811ccb3:	84 c0                	test   %al,%al
 811ccb5:	74 0b                	je     811ccc2 <_ZN14CGmRegistEventD1Ev+0x2e>
 811ccb7:	8b 45 08             	mov    0x8(%ebp),%eax
 811ccba:	89 04 24             	mov    %eax,(%esp)
 811ccbd:	e8 2e 78 60 00       	call   87244f0 <_ZdlPv>
 811ccc2:	c9                   	leave
 811ccc3:	c3                   	ret

```

```c
// CGmRegistEvent::~CGmRegistEvent @ 0x811cc94

/* WARNING: Removing unreachable block (ram,0x0811ccb7) */
/* CGmRegistEvent::~CGmRegistEvent() */

void __thiscall CGmRegistEvent::~CGmRegistEvent(CGmRegistEvent *this)

{
  *(undefined ***)this = &PTR__CGmRegistEvent_08b53e48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CGmRegistEvent_0811ccc4

```asm
// === 0811ccc4 CGmRegistEvent::~CGmRegistEvent  [0x0811ccc4-0x811cce1] ===
 811ccc4:	55                   	push   %ebp
 811ccc5:	89 e5                	mov    %esp,%ebp
 811ccc7:	83 ec 18             	sub    $0x18,%esp
 811ccca:	8b 45 08             	mov    0x8(%ebp),%eax
 811cccd:	89 04 24             	mov    %eax,(%esp)
 811ccd0:	e8 bf ff ff ff       	call   811cc94 <_ZN14CGmRegistEventD1Ev>
 811ccd5:	8b 45 08             	mov    0x8(%ebp),%eax
 811ccd8:	89 04 24             	mov    %eax,(%esp)
 811ccdb:	e8 10 78 60 00       	call   87244f0 <_ZdlPv>
 811cce0:	c9                   	leave
 811cce1:	c3                   	ret

```

```c
// CGmRegistEvent::~CGmRegistEvent @ 0x811ccc4

/* CGmRegistEvent::~CGmRegistEvent() */

void __thiscall CGmRegistEvent::~CGmRegistEvent(CGmRegistEvent *this)

{
  ~CGmRegistEvent(this);
  operator_delete(this);
  return;
}

```

