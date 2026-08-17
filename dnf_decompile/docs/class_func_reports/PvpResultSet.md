# PvpResultSet

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Clear

```asm
// === 085d5f6a PvpResultSet::Clear  [0x085d5f6a-0x85d5f7d] ===
 85d5f6a:	55                   	push   %ebp
 85d5f6b:	89 e5                	mov    %esp,%ebp
 85d5f6d:	83 ec 04             	sub    $0x4,%esp
 85d5f70:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f73:	89 04 24             	mov    %eax,(%esp)
 85d5f76:	e8 45 fe ff ff       	call   85d5dc0 <_ZN13PvpResultType5ClearEv>
 85d5f7b:	c9                   	leave
 85d5f7c:	c3                   	ret
 85d5f7d:	90                   	nop

```

```c
// PvpResultSet::Clear @ 0x85d5f6a

/* PvpResultSet::Clear() */

void __thiscall PvpResultSet::Clear(PvpResultSet *this)

{
  PvpResultType::Clear((PvpResultType *)this);
  return;
}

```

---

## PvpResultSet

```asm
// === 085d5f42 PvpResultSet::PvpResultSet  [0x085d5f42-0x85d5f55] ===
 85d5f42:	55                   	push   %ebp
 85d5f43:	89 e5                	mov    %esp,%ebp
 85d5f45:	83 ec 04             	sub    $0x4,%esp
 85d5f48:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f4b:	89 04 24             	mov    %eax,(%esp)
 85d5f4e:	e8 87 f9 ff ff       	call   85d58da <_ZN13PvpResultTypeC1Ev>
 85d5f53:	c9                   	leave
 85d5f54:	c3                   	ret
 85d5f55:	90                   	nop

```

```c
// PvpResultSet::PvpResultSet @ 0x85d5f42

/* PvpResultSet::PvpResultSet() */

void __thiscall PvpResultSet::PvpResultSet(PvpResultSet *this)

{
  PvpResultType::PvpResultType((PvpResultType *)this);
  return;
}

```

---

## ~PvpResultSet

```asm
// === 085d5f56 PvpResultSet::~PvpResultSet  [0x085d5f56-0x85d5f69] ===
 85d5f56:	55                   	push   %ebp
 85d5f57:	89 e5                	mov    %esp,%ebp
 85d5f59:	83 ec 04             	sub    $0x4,%esp
 85d5f5c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f5f:	89 04 24             	mov    %eax,(%esp)
 85d5f62:	e8 79 f9 ff ff       	call   85d58e0 <_ZN13PvpResultTypeD1Ev>
 85d5f67:	c9                   	leave
 85d5f68:	c3                   	ret
 85d5f69:	90                   	nop

```

```c
// PvpResultSet::~PvpResultSet @ 0x85d5f56

/* PvpResultSet::~PvpResultSet() */

void __thiscall PvpResultSet::~PvpResultSet(PvpResultSet *this)

{
  PvpResultType::~PvpResultType((PvpResultType *)this);
  return;
}

```

