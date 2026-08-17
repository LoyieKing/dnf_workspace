# LogWriter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## LogWriter

```asm
// === 08ad3990 LogWriter::LogWriter  [0x08ad3990-0x8ad399d] ===
 8ad3990:	55                   	push   %ebp
 8ad3991:	89 e5                	mov    %esp,%ebp
 8ad3993:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3996:	c7 00 68 2b e3 08    	movl   $0x8e32b68,(%eax)
 8ad399c:	5d                   	pop    %ebp
 8ad399d:	c3                   	ret

```

```c
// LogWriter::LogWriter @ 0x8ad3990

/* LogWriter::LogWriter() */

void __thiscall LogWriter::LogWriter(LogWriter *this)

{
  *(undefined ***)this = &PTR__LogWriter_08e32b68;
  return;
}

```

---

## ~LogWriter

```asm
// === 08ad399e LogWriter::~LogWriter  [0x08ad399e-0x8ad39c3] ===
 8ad399e:	55                   	push   %ebp
 8ad399f:	89 e5                	mov    %esp,%ebp
 8ad39a1:	83 ec 18             	sub    $0x18,%esp
 8ad39a4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad39a7:	c7 00 68 2b e3 08    	movl   $0x8e32b68,(%eax)
 8ad39ad:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad39b2:	84 c0                	test   %al,%al
 8ad39b4:	74 0b                	je     8ad39c1 <_ZN9LogWriterD1Ev+0x23>
 8ad39b6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad39b9:	89 04 24             	mov    %eax,(%esp)
 8ad39bc:	e8 2f 0b c5 ff       	call   87244f0 <_ZdlPv>
 8ad39c1:	c9                   	leave
 8ad39c2:	c3                   	ret
 8ad39c3:	90                   	nop

```

```c
// LogWriter::~LogWriter @ 0x8ad399e

/* WARNING: Removing unreachable block (ram,0x08ad39b6) */
/* LogWriter::~LogWriter() */

void __thiscall LogWriter::~LogWriter(LogWriter *this)

{
  *(undefined ***)this = &PTR__LogWriter_08e32b68;
  return;
}

```

---

## ~LogWriter_08ad39c4

```asm
// === 08ad39c4 LogWriter::~LogWriter  [0x08ad39c4-0x8ad39e1] ===
 8ad39c4:	55                   	push   %ebp
 8ad39c5:	89 e5                	mov    %esp,%ebp
 8ad39c7:	83 ec 18             	sub    $0x18,%esp
 8ad39ca:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad39cd:	89 04 24             	mov    %eax,(%esp)
 8ad39d0:	e8 c9 ff ff ff       	call   8ad399e <_ZN9LogWriterD1Ev>
 8ad39d5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad39d8:	89 04 24             	mov    %eax,(%esp)
 8ad39db:	e8 10 0b c5 ff       	call   87244f0 <_ZdlPv>
 8ad39e0:	c9                   	leave
 8ad39e1:	c3                   	ret

```

```c
// LogWriter::~LogWriter @ 0x8ad39c4

/* LogWriter::~LogWriter() */

void __thiscall LogWriter::~LogWriter(LogWriter *this)

{
  ~LogWriter(this);
  operator_delete(this);
  return;
}

```

