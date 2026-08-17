# MobileRestrict

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## enumToString

```asm
// === 0816d463 MobileRestrict::enumToString  [0x0816d463-0x816d471] ===
 816d463:	55                   	push   %ebp
 816d464:	89 e5                	mov    %esp,%ebp
 816d466:	8b 45 08             	mov    0x8(%ebp),%eax
 816d469:	8b 04 85 c0 00 37 09 	mov    0x93700c0(,%eax,4),%eax
 816d470:	5d                   	pop    %ebp
 816d471:	c3                   	ret

```

```c
// MobileRestrict::enumToString @ 0x816d463

/* MobileRestrict::enumToString(MobileRestrict::Enum) */

undefined4 MobileRestrict::enumToString(int param_1)

{
  return *(undefined4 *)(enumStringMobiles + param_1 * 4);
}

```

