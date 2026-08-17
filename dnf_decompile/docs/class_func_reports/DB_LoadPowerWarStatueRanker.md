# DB_LoadPowerWarStatueRanker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08434878 DB_LoadPowerWarStatueRanker::dispatch  [0x08434878-0x8434885] ===
 8434878:	55                   	push   %ebp
 8434879:	89 e5                	mov    %esp,%ebp
 843487b:	83 ec 40             	sub    $0x40,%esp
 843487e:	b8 01 00 00 00       	mov    $0x1,%eax
 8434883:	c9                   	leave
 8434884:	c3                   	ret
 8434885:	90                   	nop

```

```c
// DB_LoadPowerWarStatueRanker::dispatch @ 0x8434878

/* DB_LoadPowerWarStatueRanker::dispatch(int, int, Stream*) */

undefined4 DB_LoadPowerWarStatueRanker::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

