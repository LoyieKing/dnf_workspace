# DB_LoadOnlinePreliminaryMember

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843ba94 DB_LoadOnlinePreliminaryMember::dispatch  [0x0843ba94-0x843ba9d] ===
 843ba94:	55                   	push   %ebp
 843ba95:	89 e5                	mov    %esp,%ebp
 843ba97:	b8 01 00 00 00       	mov    $0x1,%eax
 843ba9c:	5d                   	pop    %ebp
 843ba9d:	c3                   	ret

```

```c
// DB_LoadOnlinePreliminaryMember::dispatch @ 0x843ba94

/* DB_LoadOnlinePreliminaryMember::dispatch(int, int, Stream*) */

undefined4 DB_LoadOnlinePreliminaryMember::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

