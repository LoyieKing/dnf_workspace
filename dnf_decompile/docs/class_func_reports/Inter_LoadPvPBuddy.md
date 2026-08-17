# Inter_LoadPvPBuddy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e16f4 Inter_LoadPvPBuddy::dispatch_sig  [0x084e16f4-0x84e16fd] ===
 84e16f4:	55                   	push   %ebp
 84e16f5:	89 e5                	mov    %esp,%ebp
 84e16f7:	b8 00 00 00 00       	mov    $0x0,%eax
 84e16fc:	5d                   	pop    %ebp
 84e16fd:	c3                   	ret

```

```c
// Inter_LoadPvPBuddy::dispatch_sig @ 0x84e16f4

/* Inter_LoadPvPBuddy::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPvPBuddy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}

```

