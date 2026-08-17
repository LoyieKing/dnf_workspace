# RestrictCategory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## enumToString

```asm
// === 0816d454 RestrictCategory::enumToString  [0x0816d454-0x816d462] ===
 816d454:	55                   	push   %ebp
 816d455:	89 e5                	mov    %esp,%ebp
 816d457:	8b 45 08             	mov    0x8(%ebp),%eax
 816d45a:	8b 04 85 a0 00 37 09 	mov    0x93700a0(,%eax,4),%eax
 816d461:	5d                   	pop    %ebp
 816d462:	c3                   	ret

```

```c
// RestrictCategory::enumToString @ 0x816d454

/* RestrictCategory::enumToString(RestrictCategory::Enum) */

undefined4 RestrictCategory::enumToString(int param_1)

{
  return *(undefined4 *)(enumStringRestrict + param_1 * 4);
}

```

