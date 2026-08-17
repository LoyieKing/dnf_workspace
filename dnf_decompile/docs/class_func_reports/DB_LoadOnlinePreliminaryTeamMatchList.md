# DB_LoadOnlinePreliminaryTeamMatchList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843bac6 DB_LoadOnlinePreliminaryTeamMatchList::dispatch  [0x0843bac6-0x843bacf] ===
 843bac6:	55                   	push   %ebp
 843bac7:	89 e5                	mov    %esp,%ebp
 843bac9:	b8 01 00 00 00       	mov    $0x1,%eax
 843bace:	5d                   	pop    %ebp
 843bacf:	c3                   	ret

```

```c
// DB_LoadOnlinePreliminaryTeamMatchList::dispatch @ 0x843bac6

/* DB_LoadOnlinePreliminaryTeamMatchList::dispatch(int, int, Stream*) */

undefined4 DB_LoadOnlinePreliminaryTeamMatchList::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

