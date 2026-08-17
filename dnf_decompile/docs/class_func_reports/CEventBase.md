# CEventBase

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CEventBase

```asm
// === 0810ae2c CEventBase::CEventBase  [0x0810ae2c-0x810ae51] ===
 810ae2c:	55                   	push   %ebp
 810ae2d:	89 e5                	mov    %esp,%ebp
 810ae2f:	83 ec 18             	sub    $0x18,%esp
 810ae32:	8b 45 08             	mov    0x8(%ebp),%eax
 810ae35:	c7 00 e8 ba b4 08    	movl   $0x8b4bae8,(%eax)
 810ae3b:	8b 45 08             	mov    0x8(%ebp),%eax
 810ae3e:	83 c0 04             	add    $0x4,%eax
 810ae41:	89 04 24             	mov    %eax,(%esp)
 810ae44:	e8 c7 00 00 00       	call   810af10 <_ZN9stADDINFOC1Ev>
 810ae49:	8b 45 08             	mov    0x8(%ebp),%eax
 810ae4c:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 810ae50:	c9                   	leave
 810ae51:	c3                   	ret

```

```c
// CEventBase::CEventBase @ 0x810ae2c

/* CEventBase::CEventBase() */

void __thiscall CEventBase::CEventBase(CEventBase *this)

{
  *(undefined ***)this = &PTR__CEventBase_08b4bae8;
  stADDINFO::stADDINFO((stADDINFO *)(this + 4));
  this[8] = (CEventBase)0x0;
  return;
}

```

---

## changeCharacName

```asm
// === 0810ae96 CEventBase::changeCharacName  [0x0810ae96-0x810ae9b] ===
 810ae96:	55                   	push   %ebp
 810ae97:	89 e5                	mov    %esp,%ebp
 810ae99:	5d                   	pop    %ebp
 810ae9a:	c3                   	ret
 810ae9b:	90                   	nop

```

```c
// CEventBase::changeCharacName @ 0x810ae96

/* CEventBase::changeCharacName(CUser*, int, char*, int) */

void CEventBase::changeCharacName(CUser *param_1,int param_2,char *param_3,int param_4)

{
  return;
}

```

---

## dailyresetData

```asm
// === 0810ae9c CEventBase::dailyresetData  [0x0810ae9c-0x810aea1] ===
 810ae9c:	55                   	push   %ebp
 810ae9d:	89 e5                	mov    %esp,%ebp
 810ae9f:	5d                   	pop    %ebp
 810aea0:	c3                   	ret
 810aea1:	90                   	nop

```

```c
// CEventBase::dailyresetData @ 0x810ae9c

/* CEventBase::dailyresetData() */

void CEventBase::dailyresetData(void)

{
  return;
}

```

---

## delivery

```asm
// === 0810aeae CEventBase::delivery  [0x0810aeae-0x810aeb2] ===
 810aeae:	55                   	push   %ebp
 810aeaf:	89 e5                	mov    %esp,%ebp
 810aeb1:	5d                   	pop    %ebp
 810aeb2:	c3                   	ret

```

```c
// CEventBase::delivery @ 0x810aeae

/* CEventBase::delivery(DeliveryMsg&) */

void CEventBase::delivery(DeliveryMsg *param_1)

{
  return;
}

```

---

## deliveryEnd

```asm
// === 0810aea8 CEventBase::deliveryEnd  [0x0810aea8-0x810aead] ===
 810aea8:	55                   	push   %ebp
 810aea9:	89 e5                	mov    %esp,%ebp
 810aeab:	5d                   	pop    %ebp
 810aeac:	c3                   	ret
 810aead:	90                   	nop

```

```c
// CEventBase::deliveryEnd @ 0x810aea8

/* CEventBase::deliveryEnd(CDelivery*) */

void CEventBase::deliveryEnd(CDelivery *param_1)

{
  return;
}

```

---

## deliveryStart

```asm
// === 0810aea2 CEventBase::deliveryStart  [0x0810aea2-0x810aea7] ===
 810aea2:	55                   	push   %ebp
 810aea3:	89 e5                	mov    %esp,%ebp
 810aea5:	5d                   	pop    %ebp
 810aea6:	c3                   	ret
 810aea7:	90                   	nop

```

```c
// CEventBase::deliveryStart @ 0x810aea2

/* CEventBase::deliveryStart(CDelivery*) */

void CEventBase::deliveryStart(CDelivery *param_1)

{
  return;
}

```

---

## ~CEventBase

```asm
// === 0810ae52 CEventBase::~CEventBase  [0x0810ae52-0x810ae77] ===
 810ae52:	55                   	push   %ebp
 810ae53:	89 e5                	mov    %esp,%ebp
 810ae55:	83 ec 18             	sub    $0x18,%esp
 810ae58:	8b 45 08             	mov    0x8(%ebp),%eax
 810ae5b:	c7 00 e8 ba b4 08    	movl   $0x8b4bae8,(%eax)
 810ae61:	b8 00 00 00 00       	mov    $0x0,%eax
 810ae66:	84 c0                	test   %al,%al
 810ae68:	74 0b                	je     810ae75 <_ZN10CEventBaseD1Ev+0x23>
 810ae6a:	8b 45 08             	mov    0x8(%ebp),%eax
 810ae6d:	89 04 24             	mov    %eax,(%esp)
 810ae70:	e8 7b 96 61 00       	call   87244f0 <_ZdlPv>
 810ae75:	c9                   	leave
 810ae76:	c3                   	ret
 810ae77:	90                   	nop

```

```c
// CEventBase::~CEventBase @ 0x810ae52

/* WARNING: Removing unreachable block (ram,0x0810ae6a) */
/* CEventBase::~CEventBase() */

void __thiscall CEventBase::~CEventBase(CEventBase *this)

{
  *(undefined ***)this = &PTR__CEventBase_08b4bae8;
  return;
}

```

---

## ~CEventBase_0810ae78

```asm
// === 0810ae78 CEventBase::~CEventBase  [0x0810ae78-0x810ae95] ===
 810ae78:	55                   	push   %ebp
 810ae79:	89 e5                	mov    %esp,%ebp
 810ae7b:	83 ec 18             	sub    $0x18,%esp
 810ae7e:	8b 45 08             	mov    0x8(%ebp),%eax
 810ae81:	89 04 24             	mov    %eax,(%esp)
 810ae84:	e8 c9 ff ff ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 810ae89:	8b 45 08             	mov    0x8(%ebp),%eax
 810ae8c:	89 04 24             	mov    %eax,(%esp)
 810ae8f:	e8 5c 96 61 00       	call   87244f0 <_ZdlPv>
 810ae94:	c9                   	leave
 810ae95:	c3                   	ret

```

```c
// CEventBase::~CEventBase @ 0x810ae78

/* CEventBase::~CEventBase() */

void __thiscall CEventBase::~CEventBase(CEventBase *this)

{
  ~CEventBase(this);
  operator_delete(this);
  return;
}

```

