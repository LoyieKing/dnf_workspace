# DB_SuicideWhenQueueIsEmpty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841b206 DB_SuicideWhenQueueIsEmpty::dispatch  [0x0841b206-0x841b20f] ===
 841b206:	55                   	push   %ebp
 841b207:	89 e5                	mov    %esp,%ebp
 841b209:	b8 01 00 00 00       	mov    $0x1,%eax
 841b20e:	5d                   	pop    %ebp
 841b20f:	c3                   	ret

```

```c
// DB_SuicideWhenQueueIsEmpty::dispatch @ 0x841b206

/* DB_SuicideWhenQueueIsEmpty::dispatch(int, int, Stream*) */

undefined4 DB_SuicideWhenQueueIsEmpty::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

