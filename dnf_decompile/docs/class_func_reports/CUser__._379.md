# CUser__._379

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## reset

```asm
// === 086454d8 CUser::._379::reset  [0x086454d8-0x8645504] ===
 86454d8:	55                   	push   %ebp
 86454d9:	89 e5                	mov    %esp,%ebp
 86454db:	8b 45 08             	mov    0x8(%ebp),%eax
 86454de:	c6 00 00             	movb   $0x0,(%eax)
 86454e1:	8b 45 08             	mov    0x8(%ebp),%eax
 86454e4:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 86454e8:	8b 45 08             	mov    0x8(%ebp),%eax
 86454eb:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 86454f2:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86454f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86454fc:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8645503:	5d                   	pop    %ebp
 8645504:	c3                   	ret

```

```c
// CUser::._379::reset @ 0x86454d8

/* CUser::._379::reset() */

void __thiscall CUser::._379::reset(__379 *this)

{
  *this = (__379)0x0;
  this[1] = (__379)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

