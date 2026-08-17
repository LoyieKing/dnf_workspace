# DB_DeletePvPBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843a9ac DB_DeletePvPBuddy::dispatch  [0x0843a9ac-0x843a9b5] ===
 843a9ac:	55                   	push   %ebp
 843a9ad:	89 e5                	mov    %esp,%ebp
 843a9af:	b8 01 00 00 00       	mov    $0x1,%eax
 843a9b4:	5d                   	pop    %ebp
 843a9b5:	c3                   	ret

```

```c
// DB_DeletePvPBuddy::dispatch @ 0x843a9ac

/* DB_DeletePvPBuddy::dispatch(int, int, Stream*) */

undefined4 DB_DeletePvPBuddy::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

