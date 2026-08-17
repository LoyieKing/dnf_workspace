# yaSSL__NoCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## check

```asm
// === 08796cf0 yaSSL::NoCheck::check  [0x08796cf0-0x8796cff] ===
 8796cf0:	55                   	push   %ebp
 8796cf1:	89 e5                	mov    %esp,%ebp
 8796cf3:	5d                   	pop    %ebp
 8796cf4:	c3                   	ret
 8796cf5:	90                   	nop
 8796cf6:	8d 76 00             	lea    0x0(%esi),%esi
 8796cf9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::NoCheck::check @ 0x8796cf0

/* yaSSL::NoCheck::check(unsigned int, unsigned int) */

void yaSSL::NoCheck::check(uint param_1,uint param_2)

{
  return;
}

```

