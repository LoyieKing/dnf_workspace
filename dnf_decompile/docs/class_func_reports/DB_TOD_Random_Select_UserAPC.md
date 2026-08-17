# DB_TOD_Random_Select_UserAPC

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084400b8 DB_TOD_Random_Select_UserAPC::dispatch  [0x084400b8-0x84400c7] ===
 84400b8:	55                   	push   %ebp
 84400b9:	89 e5                	mov    %esp,%ebp
 84400bb:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 84400c1:	b8 01 00 00 00       	mov    $0x1,%eax
 84400c6:	c9                   	leave
 84400c7:	c3                   	ret

```

```c
// DB_TOD_Random_Select_UserAPC::dispatch @ 0x84400b8

/* DB_TOD_Random_Select_UserAPC::dispatch(int, int, Stream*) */

undefined4 DB_TOD_Random_Select_UserAPC::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

