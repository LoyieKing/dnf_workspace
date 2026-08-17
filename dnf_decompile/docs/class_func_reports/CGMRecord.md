# CGMRecord

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## CGMRecord

```asm
// === 082990b4 CGMRecord::CGMRecord  [0x082990b4-0x82990c9] ===
 82990b4:	55                   	push   %ebp
 82990b5:	89 e5                	mov    %esp,%ebp
 82990b7:	8b 45 08             	mov    0x8(%ebp),%eax
 82990ba:	c6 00 00             	movb   $0x0,(%eax)
 82990bd:	8b 45 08             	mov    0x8(%ebp),%eax
 82990c0:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 82990c7:	5d                   	pop    %ebp
 82990c8:	c3                   	ret
 82990c9:	90                   	nop

```

```c
// CGMRecord::CGMRecord @ 0x82990b4

/* CGMRecord::CGMRecord() */

void __thiscall CGMRecord::CGMRecord(CGMRecord *this)

{
  *this = (CGMRecord)0x0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## ~CGMRecord

```asm
// === 082990ca CGMRecord::~CGMRecord  [0x082990ca-0x82990cf] ===
 82990ca:	55                   	push   %ebp
 82990cb:	89 e5                	mov    %esp,%ebp
 82990cd:	5d                   	pop    %ebp
 82990ce:	c3                   	ret
 82990cf:	90                   	nop

```

```c
// CGMRecord::~CGMRecord @ 0x82990ca

/* CGMRecord::~CGMRecord() */

void __thiscall CGMRecord::~CGMRecord(CGMRecord *this)

{
  return;
}

```

