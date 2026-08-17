# DB_UpdatePvPLiveEventData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843ac48 DB_UpdatePvPLiveEventData::dispatch  [0x0843ac48-0x843ac51] ===
 843ac48:	55                   	push   %ebp
 843ac49:	89 e5                	mov    %esp,%ebp
 843ac4b:	b8 01 00 00 00       	mov    $0x1,%eax
 843ac50:	5d                   	pop    %ebp
 843ac51:	c3                   	ret

```

```c
// DB_UpdatePvPLiveEventData::dispatch @ 0x843ac48

/* DB_UpdatePvPLiveEventData::dispatch(int, int, Stream*) */

undefined4 DB_UpdatePvPLiveEventData::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

