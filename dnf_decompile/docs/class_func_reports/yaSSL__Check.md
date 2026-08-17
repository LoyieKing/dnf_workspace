# yaSSL__Check

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## check

```asm
// === 08796ce0 yaSSL::Check::check  [0x08796ce0-0x8796cef] ===
 8796ce0:	55                   	push   %ebp
 8796ce1:	89 e5                	mov    %esp,%ebp
 8796ce3:	5d                   	pop    %ebp
 8796ce4:	c3                   	ret
 8796ce5:	90                   	nop
 8796ce6:	8d 76 00             	lea    0x0(%esi),%esi
 8796ce9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Check::check @ 0x8796ce0

/* yaSSL::Check::check(unsigned int, unsigned int) */

void yaSSL::Check::check(uint param_1,uint param_2)

{
  return;
}

```

