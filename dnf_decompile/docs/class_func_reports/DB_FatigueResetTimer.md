# DB_FatigueResetTimer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841abbc DB_FatigueResetTimer::dispatch  [0x0841abbc-0x841abc5] ===
 841abbc:	55                   	push   %ebp
 841abbd:	89 e5                	mov    %esp,%ebp
 841abbf:	b8 01 00 00 00       	mov    $0x1,%eax
 841abc4:	5d                   	pop    %ebp
 841abc5:	c3                   	ret

```

```c
// DB_FatigueResetTimer::dispatch @ 0x841abbc

/* DB_FatigueResetTimer::dispatch(int, int, Stream*) */

undefined4 DB_FatigueResetTimer::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

