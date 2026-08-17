# TimerGlobalEffectItemBegin

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08637e56 TimerGlobalEffectItemBegin::dispatch_sig  [0x08637e56-0x8637e77] ===
 8637e56:	55                   	push   %ebp
 8637e57:	89 e5                	mov    %esp,%ebp
 8637e59:	83 ec 18             	sub    $0x18,%esp
 8637e5c:	8b 55 10             	mov    0x10(%ebp),%edx
 8637e5f:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 8637e64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8637e68:	89 04 24             	mov    %eax,(%esp)
 8637e6b:	e8 e0 fd e7 ff       	call   84b7c50 <_ZN20CGlobalEffectManager19beginReservedEffectEj>
 8637e70:	b8 01 00 00 00       	mov    $0x1,%eax
 8637e75:	c9                   	leave
 8637e76:	c3                   	ret
 8637e77:	90                   	nop

```

```c
// TimerGlobalEffectItemBegin::dispatch_sig @ 0x8637e56

/* TimerGlobalEffectItemBegin::dispatch_sig(int, int, unsigned int) */

undefined4 TimerGlobalEffectItemBegin::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGlobalEffectManager::beginReservedEffect(GlobalData::s_globalEffectManager_,param_3);
  return 1;
}

```

---

## registTimer

```asm
// === 08637e78 TimerGlobalEffectItemBegin::registTimer  [0x08637e78-0x8637ec1] ===
 8637e78:	55                   	push   %ebp
 8637e79:	89 e5                	mov    %esp,%ebp
 8637e7b:	56                   	push   %esi
 8637e7c:	53                   	push   %ebx
 8637e7d:	83 ec 20             	sub    $0x20,%esp
 8637e80:	8b 75 08             	mov    0x8(%ebp),%esi
 8637e83:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8637e86:	e8 f1 e5 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637e8b:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8637e92:	00 
 8637e93:	89 74 24 14          	mov    %esi,0x14(%esp)
 8637e97:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8637e9b:	c7 44 24 0c 77 00 00 	movl   $0x77,0xc(%esp)
 8637ea2:	00 
 8637ea3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8637eaa:	00 
 8637eab:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8637eb2:	00 
 8637eb3:	89 04 24             	mov    %eax,(%esp)
 8637eb6:	e8 5b 8f ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8637ebb:	83 c4 20             	add    $0x20,%esp
 8637ebe:	5b                   	pop    %ebx
 8637ebf:	5e                   	pop    %esi
 8637ec0:	5d                   	pop    %ebp
 8637ec1:	c3                   	ret

```

```c
// TimerGlobalEffectItemBegin::registTimer @ 0x8637e78

/* TimerGlobalEffectItemBegin::registTimer(unsigned int, unsigned int) */

void TimerGlobalEffectItemBegin::registTimer(uint param_1,uint param_2)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x77,param_2,param_1,0);
  return;
}

```

