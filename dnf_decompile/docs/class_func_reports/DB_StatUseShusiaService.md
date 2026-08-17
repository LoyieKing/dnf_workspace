# DB_StatUseShusiaService

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841bce4 DB_StatUseShusiaService::dispatch  [0x0841bce4-0x841bced] ===
 841bce4:	55                   	push   %ebp
 841bce5:	89 e5                	mov    %esp,%ebp
 841bce7:	b8 01 00 00 00       	mov    $0x1,%eax
 841bcec:	5d                   	pop    %ebp
 841bced:	c3                   	ret

```

```c
// DB_StatUseShusiaService::dispatch @ 0x841bce4

/* DB_StatUseShusiaService::dispatch(int, int, Stream*) */

undefined4 DB_StatUseShusiaService::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

