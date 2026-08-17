# TimerNPCMoodChange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 086381e2 TimerNPCMoodChange::dispatch_sig  [0x086381e2-0x86381eb] ===
 86381e2:	55                   	push   %ebp
 86381e3:	89 e5                	mov    %esp,%ebp
 86381e5:	b8 01 00 00 00       	mov    $0x1,%eax
 86381ea:	5d                   	pop    %ebp
 86381eb:	c3                   	ret

```

```c
// TimerNPCMoodChange::dispatch_sig @ 0x86381e2

/* TimerNPCMoodChange::dispatch_sig(int, int, unsigned int) */

undefined4 TimerNPCMoodChange::dispatch_sig(int param_1,int param_2,uint param_3)

{
  return 1;
}

```

---

## registNextTimer

```asm
// === 086381ec TimerNPCMoodChange::registNextTimer  [0x086381ec-0x86381f1] ===
 86381ec:	55                   	push   %ebp
 86381ed:	89 e5                	mov    %esp,%ebp
 86381ef:	5d                   	pop    %ebp
 86381f0:	c3                   	ret
 86381f1:	90                   	nop

```

```c
// TimerNPCMoodChange::registNextTimer @ 0x86381ec

/* TimerNPCMoodChange::registNextTimer(long) */

void TimerNPCMoodChange::registNextTimer(long param_1)

{
  return;
}

```

