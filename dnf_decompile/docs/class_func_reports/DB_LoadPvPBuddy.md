# DB_LoadPvPBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843a998 DB_LoadPvPBuddy::dispatch  [0x0843a998-0x843a9a1] ===
 843a998:	55                   	push   %ebp
 843a999:	89 e5                	mov    %esp,%ebp
 843a99b:	b8 01 00 00 00       	mov    $0x1,%eax
 843a9a0:	5d                   	pop    %ebp
 843a9a1:	c3                   	ret

```

```c
// DB_LoadPvPBuddy::dispatch @ 0x843a998

/* DB_LoadPvPBuddy::dispatch(int, int, Stream*) */

undefined4 DB_LoadPvPBuddy::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

