# SecurityRestrict

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## enumToString

```asm
// === 0816d481 SecurityRestrict::enumToString  [0x0816d481-0x816d48f] ===
 816d481:	55                   	push   %ebp
 816d482:	89 e5                	mov    %esp,%ebp
 816d484:	8b 45 08             	mov    0x8(%ebp),%eax
 816d487:	8b 04 85 5c 01 37 09 	mov    0x937015c(,%eax,4),%eax
 816d48e:	5d                   	pop    %ebp
 816d48f:	c3                   	ret

```

```c
// SecurityRestrict::enumToString @ 0x816d481

/* SecurityRestrict::enumToString(SecurityRestrict::Enum) */

undefined4 SecurityRestrict::enumToString(int param_1)

{
  return *(undefined4 *)(enumStringSecurity + param_1 * 4);
}

```

