# CRestrictCharacCreationEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CRestrictCharacCreationEvent

```asm
// === 08273c44 CRestrictCharacCreationEvent::CRestrictCharacCreationEvent  [0x08273c44-0x8273c69] ===
 8273c44:	55                   	push   %ebp
 8273c45:	89 e5                	mov    %esp,%ebp
 8273c47:	83 ec 18             	sub    $0x18,%esp
 8273c4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8273c4d:	89 04 24             	mov    %eax,(%esp)
 8273c50:	e8 d7 71 e9 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8273c55:	8b 45 08             	mov    0x8(%ebp),%eax
 8273c58:	c7 00 a8 b7 bf 08    	movl   $0x8bfb7a8,(%eax)
 8273c5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8273c61:	c7 40 0c 02 00 00 00 	movl   $0x2,0xc(%eax)
 8273c68:	c9                   	leave
 8273c69:	c3                   	ret

```

```c
// CRestrictCharacCreationEvent::CRestrictCharacCreationEvent @ 0x8273c44

/* CRestrictCharacCreationEvent::CRestrictCharacCreationEvent() */

void __thiscall
CRestrictCharacCreationEvent::CRestrictCharacCreationEvent(CRestrictCharacCreationEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CRestrictCharacCreationEvent_08bfb7a8;
  *(undefined4 *)(this + 0xc) = 2;
  return;
}

```

---

## EndEvent

```asm
// === 08273d68 CRestrictCharacCreationEvent::EndEvent  [0x08273d68-0x8273db9] ===
 8273d68:	55                   	push   %ebp
 8273d69:	89 e5                	mov    %esp,%ebp
 8273d6b:	83 ec 28             	sub    $0x28,%esp
 8273d6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8273d71:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8273d78:	00 
 8273d79:	89 04 24             	mov    %eax,(%esp)
 8273d7c:	e8 61 47 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8273d81:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8273d88:	00 
 8273d89:	c7 44 24 08 2b 00 00 	movl   $0x2b,0x8(%esp)
 8273d90:	00 
 8273d91:	c7 44 24 04 70 b7 bf 	movl   $0x8bfb770,0x4(%esp)
 8273d98:	08 
 8273d99:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8273d9c:	89 04 24             	mov    %eax,(%esp)
 8273d9f:	e8 74 b9 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8273da4:	c7 44 24 04 c4 b0 bf 	movl   $0x8bfb0c4,0x4(%esp)
 8273dab:	08 
 8273dac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8273daf:	89 04 24             	mov    %eax,(%esp)
 8273db2:	e8 d1 b9 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8273db7:	c9                   	leave
 8273db8:	c3                   	ret
 8273db9:	90                   	nop

```

```c
// CRestrictCharacCreationEvent::EndEvent @ 0x8273d68

/* CRestrictCharacCreationEvent::EndEvent() */

void __thiscall CRestrictCharacCreationEvent::EndEvent(CRestrictCharacCreationEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x2b,0);
  cMyTrace::operator()(local_1c,"Restrict Character Creation End!");
  return;
}

```

---

## StartEvent

```asm
// === 08273cb8 CRestrictCharacCreationEvent::StartEvent  [0x08273cb8-0x8273d09] ===
 8273cb8:	55                   	push   %ebp
 8273cb9:	89 e5                	mov    %esp,%ebp
 8273cbb:	83 ec 28             	sub    $0x28,%esp
 8273cbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8273cc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8273cc8:	00 
 8273cc9:	89 04 24             	mov    %eax,(%esp)
 8273ccc:	e8 11 48 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8273cd1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8273cd8:	00 
 8273cd9:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8273ce0:	00 
 8273ce1:	c7 44 24 04 84 b7 bf 	movl   $0x8bfb784,0x4(%esp)
 8273ce8:	08 
 8273ce9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8273cec:	89 04 24             	mov    %eax,(%esp)
 8273cef:	e8 24 ba 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8273cf4:	c7 44 24 04 a0 b0 bf 	movl   $0x8bfb0a0,0x4(%esp)
 8273cfb:	08 
 8273cfc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8273cff:	89 04 24             	mov    %eax,(%esp)
 8273d02:	e8 81 ba 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8273d07:	c9                   	leave
 8273d08:	c3                   	ret
 8273d09:	90                   	nop

```

```c
// CRestrictCharacCreationEvent::StartEvent @ 0x8273cb8

/* CRestrictCharacCreationEvent::StartEvent() */

void __thiscall CRestrictCharacCreationEvent::StartEvent(CRestrictCharacCreationEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x17,0);
  cMyTrace::operator()(local_1c,"Restrict Character Creation Start!");
  return;
}

```

---

## StartEvent_08273d0a

```asm
// === 08273d0a CRestrictCharacCreationEvent::StartEvent  [0x08273d0a-0x8273d67] ===
 8273d0a:	55                   	push   %ebp
 8273d0b:	89 e5                	mov    %esp,%ebp
 8273d0d:	83 ec 28             	sub    $0x28,%esp
 8273d10:	8b 45 08             	mov    0x8(%ebp),%eax
 8273d13:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8273d1a:	00 
 8273d1b:	89 04 24             	mov    %eax,(%esp)
 8273d1e:	e8 bf 47 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8273d23:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 8273d27:	0f b7 d0             	movzwl %ax,%edx
 8273d2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8273d2d:	89 50 0c             	mov    %edx,0xc(%eax)
 8273d30:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8273d37:	00 
 8273d38:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 8273d3f:	00 
 8273d40:	c7 44 24 04 79 b7 bf 	movl   $0x8bfb779,0x4(%esp)
 8273d47:	08 
 8273d48:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8273d4b:	89 04 24             	mov    %eax,(%esp)
 8273d4e:	e8 c5 b9 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8273d53:	c7 44 24 04 a0 b0 bf 	movl   $0x8bfb0a0,0x4(%esp)
 8273d5a:	08 
 8273d5b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8273d5e:	89 04 24             	mov    %eax,(%esp)
 8273d61:	e8 22 ba 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8273d66:	c9                   	leave
 8273d67:	c3                   	ret

```

```c
// CRestrictCharacCreationEvent::StartEvent @ 0x8273d0a

/* CRestrictCharacCreationEvent::StartEvent(Word_Param) */

void __thiscall
CRestrictCharacCreationEvent::StartEvent(CRestrictCharacCreationEvent *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x23,0);
  cMyTrace::operator()(local_1c,"Restrict Character Creation Start!");
  return;
}

```

---

## getLimitCreateCharacter

```asm
// === 08273dba CRestrictCharacCreationEvent::getLimitCreateCharacter  [0x08273dba-0x8273de9] ===
 8273dba:	55                   	push   %ebp
 8273dbb:	89 e5                	mov    %esp,%ebp
 8273dbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8273dc0:	8b 40 0c             	mov    0xc(%eax),%eax
 8273dc3:	85 c0                	test   %eax,%eax
 8273dc5:	74 07                	je     8273dce <_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi+0x14>
 8273dc7:	83 f8 01             	cmp    $0x1,%eax
 8273dca:	74 0f                	je     8273ddb <_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi+0x21>
 8273dcc:	eb 15                	jmp    8273de3 <_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi+0x29>
 8273dce:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8273dd2:	75 0e                	jne    8273de2 <_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi+0x28>
 8273dd4:	b8 07 00 00 00       	mov    $0x7,%eax
 8273dd9:	eb 0d                	jmp    8273de8 <_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi+0x2e>
 8273ddb:	b8 08 00 00 00       	mov    $0x8,%eax
 8273de0:	eb 06                	jmp    8273de8 <_ZNK28CRestrictCharacCreationEvent23getLimitCreateCharacterEi+0x2e>
 8273de2:	90                   	nop
 8273de3:	b8 00 00 00 00       	mov    $0x0,%eax
 8273de8:	5d                   	pop    %ebp
 8273de9:	c3                   	ret

```

```c
// CRestrictCharacCreationEvent::getLimitCreateCharacter @ 0x8273dba

/* CRestrictCharacCreationEvent::getLimitCreateCharacter(int) const */

undefined4 __thiscall
CRestrictCharacCreationEvent::getLimitCreateCharacter
          (CRestrictCharacCreationEvent *this,int param_1)

{
  if (*(int *)(this + 0xc) == 0) {
    if (param_1 == 0) {
      return 7;
    }
  }
  else if (*(int *)(this + 0xc) == 1) {
    return 8;
  }
  return 0;
}

```

---

## ~CRestrictCharacCreationEvent

```asm
// === 08273c6a CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent  [0x08273c6a-0x8273c99] ===
 8273c6a:	55                   	push   %ebp
 8273c6b:	89 e5                	mov    %esp,%ebp
 8273c6d:	83 ec 18             	sub    $0x18,%esp
 8273c70:	8b 45 08             	mov    0x8(%ebp),%eax
 8273c73:	c7 00 a8 b7 bf 08    	movl   $0x8bfb7a8,(%eax)
 8273c79:	8b 45 08             	mov    0x8(%ebp),%eax
 8273c7c:	89 04 24             	mov    %eax,(%esp)
 8273c7f:	e8 ce 71 e9 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8273c84:	b8 00 00 00 00       	mov    $0x0,%eax
 8273c89:	84 c0                	test   %al,%al
 8273c8b:	74 0b                	je     8273c98 <_ZN28CRestrictCharacCreationEventD1Ev+0x2e>
 8273c8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8273c90:	89 04 24             	mov    %eax,(%esp)
 8273c93:	e8 58 08 4b 00       	call   87244f0 <_ZdlPv>
 8273c98:	c9                   	leave
 8273c99:	c3                   	ret

```

```c
// CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent @ 0x8273c6a

/* WARNING: Removing unreachable block (ram,0x08273c8d) */
/* CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent() */

void __thiscall
CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent(CRestrictCharacCreationEvent *this)

{
  *(undefined ***)this = &PTR__CRestrictCharacCreationEvent_08bfb7a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CRestrictCharacCreationEvent_08273c9a

```asm
// === 08273c9a CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent  [0x08273c9a-0x8273cb7] ===
 8273c9a:	55                   	push   %ebp
 8273c9b:	89 e5                	mov    %esp,%ebp
 8273c9d:	83 ec 18             	sub    $0x18,%esp
 8273ca0:	8b 45 08             	mov    0x8(%ebp),%eax
 8273ca3:	89 04 24             	mov    %eax,(%esp)
 8273ca6:	e8 bf ff ff ff       	call   8273c6a <_ZN28CRestrictCharacCreationEventD1Ev>
 8273cab:	8b 45 08             	mov    0x8(%ebp),%eax
 8273cae:	89 04 24             	mov    %eax,(%esp)
 8273cb1:	e8 3a 08 4b 00       	call   87244f0 <_ZdlPv>
 8273cb6:	c9                   	leave
 8273cb7:	c3                   	ret

```

```c
// CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent @ 0x8273c9a

/* CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent() */

void __thiscall
CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent(CRestrictCharacCreationEvent *this)

{
  ~CRestrictCharacCreationEvent(this);
  operator_delete(this);
  return;
}

```

