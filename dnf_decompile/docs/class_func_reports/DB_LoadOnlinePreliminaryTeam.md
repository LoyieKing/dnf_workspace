# DB_LoadOnlinePreliminaryTeam

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843bab2 DB_LoadOnlinePreliminaryTeam::dispatch  [0x0843bab2-0x843babb] ===
 843bab2:	55                   	push   %ebp
 843bab3:	89 e5                	mov    %esp,%ebp
 843bab5:	b8 01 00 00 00       	mov    $0x1,%eax
 843baba:	5d                   	pop    %ebp
 843babb:	c3                   	ret

```

```c
// DB_LoadOnlinePreliminaryTeam::dispatch @ 0x843bab2

/* DB_LoadOnlinePreliminaryTeam::dispatch(int, int, Stream*) */

undefined4 DB_LoadOnlinePreliminaryTeam::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

