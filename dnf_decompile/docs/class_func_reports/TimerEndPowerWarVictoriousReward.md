# TimerEndPowerWarVictoriousReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086394ce TimerEndPowerWarVictoriousReward::dispatch_sig  [0x086394ce-0x86394ef] ===
 86394ce:	55                   	push   %ebp
 86394cf:	89 e5                	mov    %esp,%ebp
 86394d1:	83 ec 18             	sub    $0x18,%esp
 86394d4:	a1 30 f7 41 09       	mov    0x941f730,%eax
 86394d9:	c7 44 24 04 35 00 00 	movl   $0x35,0x4(%esp)
 86394e0:	00 
 86394e1:	89 04 24             	mov    %eax,(%esp)
 86394e4:	e8 77 c8 ad ff       	call   8115d60 <_ZN13CEventManager15TriggerEventEndEi>
 86394e9:	b8 01 00 00 00       	mov    $0x1,%eax
 86394ee:	c9                   	leave
 86394ef:	c3                   	ret

```

```c
// TimerEndPowerWarVictoriousReward::dispatch_sig @ 0x86394ce

/* TimerEndPowerWarVictoriousReward::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEndPowerWarVictoriousReward::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CEventManager::TriggerEventEnd(GlobalData::s_event_manager,0x35);
  return 1;
}

```

