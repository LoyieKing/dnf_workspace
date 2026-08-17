# DB_LoadPvPLiveEventData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843ac3e DB_LoadPvPLiveEventData::dispatch  [0x0843ac3e-0x843ac47] ===
 843ac3e:	55                   	push   %ebp
 843ac3f:	89 e5                	mov    %esp,%ebp
 843ac41:	b8 01 00 00 00       	mov    $0x1,%eax
 843ac46:	5d                   	pop    %ebp
 843ac47:	c3                   	ret

```

```c
// DB_LoadPvPLiveEventData::dispatch @ 0x843ac3e

/* DB_LoadPvPLiveEventData::dispatch(int, int, Stream*) */

undefined4 DB_LoadPvPLiveEventData::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

