# CharacterRestrict

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## enumToString

```asm
// === 0816d472 CharacterRestrict::enumToString  [0x0816d472-0x816d480] ===
 816d472:	55                   	push   %ebp
 816d473:	89 e5                	mov    %esp,%ebp
 816d475:	8b 45 08             	mov    0x8(%ebp),%eax
 816d478:	8b 04 85 4c 01 37 09 	mov    0x937014c(,%eax,4),%eax
 816d47f:	5d                   	pop    %ebp
 816d480:	c3                   	ret

```

```c
// CharacterRestrict::enumToString @ 0x816d472

/* CharacterRestrict::enumToString(CharacterRestrict::Enum) */

undefined4 CharacterRestrict::enumToString(int param_1)

{
  return *(undefined4 *)(enumStringCharacters + param_1 * 4);
}

```

