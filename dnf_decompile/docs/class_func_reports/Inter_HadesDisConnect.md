# Inter_HadesDisConnect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4342 Inter_HadesDisConnect::dispatch_sig  [0x084e4342-0x84e4353] ===
 84e4342:	55                   	push   %ebp
 84e4343:	89 e5                	mov    %esp,%ebp
 84e4345:	83 ec 08             	sub    $0x8,%esp
 84e4348:	e8 75 64 15 00       	call   863a7c2 <_ZN20Timer_HadesHeartBeat15registNextTimerEv>
 84e434d:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4352:	c9                   	leave
 84e4353:	c3                   	ret

```

```c
// Inter_HadesDisConnect::dispatch_sig @ 0x84e4342

/* Inter_HadesDisConnect::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_HadesDisConnect::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  Timer_HadesHeartBeat::registNextTimer();
  return 0;
}

```

