# CountinuousItemOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## CountinuousItemOption

```asm
// === 0898c770 CountinuousItemOption::CountinuousItemOption  [0x0898c770-0x898c783] ===
 898c770:	55                   	push   %ebp
 898c771:	89 e5                	mov    %esp,%ebp
 898c773:	83 ec 18             	sub    $0x18,%esp
 898c776:	8b 45 08             	mov    0x8(%ebp),%eax
 898c779:	89 04 24             	mov    %eax,(%esp)
 898c77c:	e8 03 00 00 00       	call   898c784 <_ZN21CountinuousItemOption5clearEv>
 898c781:	c9                   	leave
 898c782:	c3                   	ret
 898c783:	90                   	nop

```

```c
// CountinuousItemOption::CountinuousItemOption @ 0x898c770

/* CountinuousItemOption::CountinuousItemOption() */

void __thiscall CountinuousItemOption::CountinuousItemOption(CountinuousItemOption *this)

{
  clear(this);
  return;
}

```

---

## clear

```asm
// === 0898c784 CountinuousItemOption::clear  [0x0898c784-0x898c79c] ===
 898c784:	55                   	push   %ebp
 898c785:	89 e5                	mov    %esp,%ebp
 898c787:	8b 45 08             	mov    0x8(%ebp),%eax
 898c78a:	c6 00 00             	movb   $0x0,(%eax)
 898c78d:	8b 45 08             	mov    0x8(%ebp),%eax
 898c790:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 898c794:	8b 45 08             	mov    0x8(%ebp),%eax
 898c797:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 898c79b:	5d                   	pop    %ebp
 898c79c:	c3                   	ret

```

```c
// CountinuousItemOption::clear @ 0x898c784

/* CountinuousItemOption::clear() */

void __thiscall CountinuousItemOption::clear(CountinuousItemOption *this)

{
  *this = (CountinuousItemOption)0x0;
  this[1] = (CountinuousItemOption)0x0;
  this[2] = (CountinuousItemOption)0x0;
  return;
}

```

