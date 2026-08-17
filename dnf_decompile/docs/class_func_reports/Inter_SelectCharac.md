# Inter_SelectCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c528a Inter_SelectCharac::dispatch_sig  [0x084c528a-0x84c5293] ===
 84c528a:	55                   	push   %ebp
 84c528b:	89 e5                	mov    %esp,%ebp
 84c528d:	b8 00 00 00 00       	mov    $0x0,%eax
 84c5292:	5d                   	pop    %ebp
 84c5293:	c3                   	ret

```

```c
// Inter_SelectCharac::dispatch_sig @ 0x84c528a

/* Inter_SelectCharac::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SelectCharac::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}

```

