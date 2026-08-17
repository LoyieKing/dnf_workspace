# DB_LoadPowerWarInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08437756 DB_LoadPowerWarInfo::dispatch  [0x08437756-0x8437763] ===
 8437756:	55                   	push   %ebp
 8437757:	89 e5                	mov    %esp,%ebp
 8437759:	83 ec 40             	sub    $0x40,%esp
 843775c:	b8 01 00 00 00       	mov    $0x1,%eax
 8437761:	c9                   	leave
 8437762:	c3                   	ret
 8437763:	90                   	nop

```

```c
// DB_LoadPowerWarInfo::dispatch @ 0x8437756

/* DB_LoadPowerWarInfo::dispatch(int, int, Stream*) */

undefined4 DB_LoadPowerWarInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

