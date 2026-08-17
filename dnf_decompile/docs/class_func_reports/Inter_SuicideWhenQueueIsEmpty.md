# Inter_SuicideWhenQueueIsEmpty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cf550 Inter_SuicideWhenQueueIsEmpty::dispatch_sig  [0x084cf550-0x84cf559] ===
 84cf550:	55                   	push   %ebp
 84cf551:	89 e5                	mov    %esp,%ebp
 84cf553:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf558:	5d                   	pop    %ebp
 84cf559:	c3                   	ret

```

```c
// Inter_SuicideWhenQueueIsEmpty::dispatch_sig @ 0x84cf550

/* Inter_SuicideWhenQueueIsEmpty::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SuicideWhenQueueIsEmpty::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}

```

