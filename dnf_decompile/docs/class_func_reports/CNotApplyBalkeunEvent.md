# CNotApplyBalkeunEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CNotApplyBalkeunEvent

```asm
// === 081b9d5c CNotApplyBalkeunEvent::CNotApplyBalkeunEvent  [0x081b9d5c-0x81b9d77] ===
 81b9d5c:	55                   	push   %ebp
 81b9d5d:	89 e5                	mov    %esp,%ebp
 81b9d5f:	83 ec 18             	sub    $0x18,%esp
 81b9d62:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9d65:	89 04 24             	mov    %eax,(%esp)
 81b9d68:	e8 bf 10 f5 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81b9d6d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9d70:	c7 00 a8 de bb 08    	movl   $0x8bbdea8,(%eax)
 81b9d76:	c9                   	leave
 81b9d77:	c3                   	ret

```

```c
// CNotApplyBalkeunEvent::CNotApplyBalkeunEvent @ 0x81b9d5c

/* CNotApplyBalkeunEvent::CNotApplyBalkeunEvent() */

void __thiscall CNotApplyBalkeunEvent::CNotApplyBalkeunEvent(CNotApplyBalkeunEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CNotApplyBalkeunEvent_08bbdea8;
  return;
}

```

---

## EndEvent

```asm
// === 081b9ed2 CNotApplyBalkeunEvent::EndEvent  [0x081b9ed2-0x81b9f40] ===
 81b9ed2:	55                   	push   %ebp
 81b9ed3:	89 e5                	mov    %esp,%ebp
 81b9ed5:	83 ec 28             	sub    $0x28,%esp
 81b9ed8:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9edb:	8b 00                	mov    (%eax),%eax
 81b9edd:	83 c0 34             	add    $0x34,%eax
 81b9ee0:	8b 10                	mov    (%eax),%edx
 81b9ee2:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9ee5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b9eec:	00 
 81b9eed:	89 04 24             	mov    %eax,(%esp)
 81b9ef0:	ff d2                	call   *%edx
 81b9ef2:	84 c0                	test   %al,%al
 81b9ef4:	74 49                	je     81b9f3f <_ZN21CNotApplyBalkeunEvent8EndEventEv+0x6d>
 81b9ef6:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9ef9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b9f00:	00 
 81b9f01:	89 04 24             	mov    %eax,(%esp)
 81b9f04:	e8 d9 e5 f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b9f09:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b9f10:	00 
 81b9f11:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 81b9f18:	00 
 81b9f19:	c7 44 24 04 e0 dd bb 	movl   $0x8bbdde0,0x4(%esp)
 81b9f20:	08 
 81b9f21:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9f24:	89 04 24             	mov    %eax,(%esp)
 81b9f27:	e8 ec 57 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b9f2c:	c7 44 24 04 ae d1 bb 	movl   $0x8bbd1ae,0x4(%esp)
 81b9f33:	08 
 81b9f34:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9f37:	89 04 24             	mov    %eax,(%esp)
 81b9f3a:	e8 49 58 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b9f3f:	c9                   	leave
 81b9f40:	c3                   	ret

```

```c
// CNotApplyBalkeunEvent::EndEvent @ 0x81b9ed2

/* CNotApplyBalkeunEvent::EndEvent() */

void __thiscall CNotApplyBalkeunEvent::EndEvent(CNotApplyBalkeunEvent *this)

{
  char cVar1;
  cMyTrace local_1c [24];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 != '\0') {
    CEventBase::SetEventFlag((CEventBase *)this,false);
    cMyTrace::cMyTrace(local_1c,"virtual void CNotApplyBalkeunEvent::EndEvent()",0x28,0);
    cMyTrace::operator()(local_1c,"Not Apply Balkeun Event End");
  }
  return;
}

```

---

## StartEvent

```asm
// === 081b9dc6 CNotApplyBalkeunEvent::StartEvent  [0x081b9dc6-0x81b9e4b] ===
 81b9dc6:	55                   	push   %ebp
 81b9dc7:	89 e5                	mov    %esp,%ebp
 81b9dc9:	53                   	push   %ebx
 81b9dca:	83 ec 24             	sub    $0x24,%esp
 81b9dcd:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9dd0:	8b 00                	mov    (%eax),%eax
 81b9dd2:	83 c0 34             	add    $0x34,%eax
 81b9dd5:	8b 10                	mov    (%eax),%edx
 81b9dd7:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9dda:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b9de1:	00 
 81b9de2:	89 04 24             	mov    %eax,(%esp)
 81b9de5:	ff d2                	call   *%edx
 81b9de7:	83 f0 01             	xor    $0x1,%eax
 81b9dea:	84 c0                	test   %al,%al
 81b9dec:	74 58                	je     81b9e46 <_ZN21CNotApplyBalkeunEvent10StartEventEv+0x80>
 81b9dee:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9df1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b9df8:	00 
 81b9df9:	89 04 24             	mov    %eax,(%esp)
 81b9dfc:	e8 e1 e6 f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b9e01:	e8 7b 23 f1 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81b9e06:	8b 98 b0 01 00 00    	mov    0x1b0(%eax),%ebx
 81b9e0c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b9e13:	00 
 81b9e14:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81b9e1b:	00 
 81b9e1c:	c7 44 24 04 60 de bb 	movl   $0x8bbde60,0x4(%esp)
 81b9e23:	08 
 81b9e24:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9e27:	89 04 24             	mov    %eax,(%esp)
 81b9e2a:	e8 e9 58 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b9e2f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81b9e33:	c7 44 24 04 84 d1 bb 	movl   $0x8bbd184,0x4(%esp)
 81b9e3a:	08 
 81b9e3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9e3e:	89 04 24             	mov    %eax,(%esp)
 81b9e41:	e8 42 59 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b9e46:	83 c4 24             	add    $0x24,%esp
 81b9e49:	5b                   	pop    %ebx
 81b9e4a:	5d                   	pop    %ebp
 81b9e4b:	c3                   	ret

```

```c
// CNotApplyBalkeunEvent::StartEvent @ 0x81b9dc6

/* CNotApplyBalkeunEvent::StartEvent() */

void __thiscall CNotApplyBalkeunEvent::StartEvent(CNotApplyBalkeunEvent *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  cMyTrace local_1c [20];
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar2 != '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    iVar3 = G_CEnvironment();
    uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_1c,"virtual void CNotApplyBalkeunEvent::StartEvent()",0x16,0);
    cMyTrace::operator()(local_1c,"Not Apply Balkeun Event Start! server(%d)",uVar1);
  }
  return;
}

```

---

## StartEvent_081b9e4c

```asm
// === 081b9e4c CNotApplyBalkeunEvent::StartEvent  [0x081b9e4c-0x81b9ed1] ===
 81b9e4c:	55                   	push   %ebp
 81b9e4d:	89 e5                	mov    %esp,%ebp
 81b9e4f:	53                   	push   %ebx
 81b9e50:	83 ec 24             	sub    $0x24,%esp
 81b9e53:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9e56:	8b 00                	mov    (%eax),%eax
 81b9e58:	83 c0 34             	add    $0x34,%eax
 81b9e5b:	8b 10                	mov    (%eax),%edx
 81b9e5d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9e60:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b9e67:	00 
 81b9e68:	89 04 24             	mov    %eax,(%esp)
 81b9e6b:	ff d2                	call   *%edx
 81b9e6d:	83 f0 01             	xor    $0x1,%eax
 81b9e70:	84 c0                	test   %al,%al
 81b9e72:	74 58                	je     81b9ecc <_ZN21CNotApplyBalkeunEvent10StartEventE10Word_Param+0x80>
 81b9e74:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9e77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b9e7e:	00 
 81b9e7f:	89 04 24             	mov    %eax,(%esp)
 81b9e82:	e8 5b e6 f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b9e87:	e8 f5 22 f1 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81b9e8c:	8b 98 b0 01 00 00    	mov    0x1b0(%eax),%ebx
 81b9e92:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b9e99:	00 
 81b9e9a:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 81b9ea1:	00 
 81b9ea2:	c7 44 24 04 20 de bb 	movl   $0x8bbde20,0x4(%esp)
 81b9ea9:	08 
 81b9eaa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9ead:	89 04 24             	mov    %eax,(%esp)
 81b9eb0:	e8 63 58 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b9eb5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81b9eb9:	c7 44 24 04 84 d1 bb 	movl   $0x8bbd184,0x4(%esp)
 81b9ec0:	08 
 81b9ec1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b9ec4:	89 04 24             	mov    %eax,(%esp)
 81b9ec7:	e8 bc 58 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b9ecc:	83 c4 24             	add    $0x24,%esp
 81b9ecf:	5b                   	pop    %ebx
 81b9ed0:	5d                   	pop    %ebp
 81b9ed1:	c3                   	ret

```

```c
// CNotApplyBalkeunEvent::StartEvent @ 0x81b9e4c

/* CNotApplyBalkeunEvent::StartEvent(Word_Param) */

void CNotApplyBalkeunEvent::StartEvent(CEventBase *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  cMyTrace local_1c [20];
  
  cVar2 = (**(code **)(*(int *)param_1 + 0x34))(param_1,0);
  if (cVar2 != '\x01') {
    CEventBase::SetEventFlag(param_1,true);
    iVar3 = G_CEnvironment();
    uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_1c,"virtual void CNotApplyBalkeunEvent::StartEvent(Word_Param)",0x1f,0)
    ;
    cMyTrace::operator()(local_1c,"Not Apply Balkeun Event Start! server(%d)",uVar1);
  }
  return;
}

```

---

## ~CNotApplyBalkeunEvent

```asm
// === 081b9d78 CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent  [0x081b9d78-0x81b9da7] ===
 81b9d78:	55                   	push   %ebp
 81b9d79:	89 e5                	mov    %esp,%ebp
 81b9d7b:	83 ec 18             	sub    $0x18,%esp
 81b9d7e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9d81:	c7 00 a8 de bb 08    	movl   $0x8bbdea8,(%eax)
 81b9d87:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9d8a:	89 04 24             	mov    %eax,(%esp)
 81b9d8d:	e8 c0 10 f5 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81b9d92:	b8 00 00 00 00       	mov    $0x0,%eax
 81b9d97:	84 c0                	test   %al,%al
 81b9d99:	74 0b                	je     81b9da6 <_ZN21CNotApplyBalkeunEventD1Ev+0x2e>
 81b9d9b:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9d9e:	89 04 24             	mov    %eax,(%esp)
 81b9da1:	e8 4a a7 56 00       	call   87244f0 <_ZdlPv>
 81b9da6:	c9                   	leave
 81b9da7:	c3                   	ret

```

```c
// CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent @ 0x81b9d78

/* WARNING: Removing unreachable block (ram,0x081b9d9b) */
/* CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent() */

void __thiscall CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent(CNotApplyBalkeunEvent *this)

{
  *(undefined ***)this = &PTR__CNotApplyBalkeunEvent_08bbdea8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CNotApplyBalkeunEvent_081b9da8

```asm
// === 081b9da8 CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent  [0x081b9da8-0x81b9dc5] ===
 81b9da8:	55                   	push   %ebp
 81b9da9:	89 e5                	mov    %esp,%ebp
 81b9dab:	83 ec 18             	sub    $0x18,%esp
 81b9dae:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9db1:	89 04 24             	mov    %eax,(%esp)
 81b9db4:	e8 bf ff ff ff       	call   81b9d78 <_ZN21CNotApplyBalkeunEventD1Ev>
 81b9db9:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9dbc:	89 04 24             	mov    %eax,(%esp)
 81b9dbf:	e8 2c a7 56 00       	call   87244f0 <_ZdlPv>
 81b9dc4:	c9                   	leave
 81b9dc5:	c3                   	ret

```

```c
// CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent @ 0x81b9da8

/* CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent() */

void __thiscall CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent(CNotApplyBalkeunEvent *this)

{
  ~CNotApplyBalkeunEvent(this);
  operator_delete(this);
  return;
}

```

