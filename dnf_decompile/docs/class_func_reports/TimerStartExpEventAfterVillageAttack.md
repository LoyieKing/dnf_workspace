# TimerStartExpEventAfterVillageAttack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863949e TimerStartExpEventAfterVillageAttack::dispatch_sig  [0x0863949e-0x86394cd] ===
 863949e:	55                   	push   %ebp
 863949f:	89 e5                	mov    %esp,%ebp
 86394a1:	83 ec 28             	sub    $0x28,%esp
 86394a4:	66 c7 45 f4 64 00    	movw   $0x64,-0xc(%ebp)
 86394aa:	a1 30 f7 41 09       	mov    0x941f730,%eax
 86394af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86394b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 86394b6:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86394bd:	00 
 86394be:	89 04 24             	mov    %eax,(%esp)
 86394c1:	e8 00 c8 ad ff       	call   8115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>
 86394c6:	b8 01 00 00 00       	mov    $0x1,%eax
 86394cb:	c9                   	leave
 86394cc:	c3                   	ret
 86394cd:	90                   	nop

```

```c
// TimerStartExpEventAfterVillageAttack::dispatch_sig @ 0x863949e

/* TimerStartExpEventAfterVillageAttack::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStartExpEventAfterVillageAttack::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CEventManager::TriggerEventStart(GlobalData::s_event_manager,3,100);
  return 1;
}

```

