# DB_InsertPvPBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843a9a2 DB_InsertPvPBuddy::dispatch  [0x0843a9a2-0x843a9ab] ===
 843a9a2:	55                   	push   %ebp
 843a9a3:	89 e5                	mov    %esp,%ebp
 843a9a5:	b8 01 00 00 00       	mov    $0x1,%eax
 843a9aa:	5d                   	pop    %ebp
 843a9ab:	c3                   	ret

```

```c
// DB_InsertPvPBuddy::dispatch @ 0x843a9a2

/* DB_InsertPvPBuddy::dispatch(int, int, Stream*) */

undefined4 DB_InsertPvPBuddy::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

