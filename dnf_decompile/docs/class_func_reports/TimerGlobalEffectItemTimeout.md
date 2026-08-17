# TimerGlobalEffectItemTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08637ec2 TimerGlobalEffectItemTimeout::dispatch_sig  [0x08637ec2-0x8637ef5] ===
 8637ec2:	55                   	push   %ebp
 8637ec3:	89 e5                	mov    %esp,%ebp
 8637ec5:	83 ec 18             	sub    $0x18,%esp
 8637ec8:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8637ecf:	e8 ca 3d a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8637ed4:	89 c1                	mov    %eax,%ecx
 8637ed6:	8b 55 10             	mov    0x10(%ebp),%edx
 8637ed9:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 8637ede:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8637ee2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8637ee6:	89 04 24             	mov    %eax,(%esp)
 8637ee9:	e8 a6 fb e7 ff       	call   84b7a94 <_ZN20CGlobalEffectManager12checkTimeoutEjj>
 8637eee:	b8 01 00 00 00       	mov    $0x1,%eax
 8637ef3:	c9                   	leave
 8637ef4:	c3                   	ret
 8637ef5:	90                   	nop

```

```c
// TimerGlobalEffectItemTimeout::dispatch_sig @ 0x8637ec2

/* TimerGlobalEffectItemTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerGlobalEffectItemTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CGlobalEffectManager::checkTimeout(GlobalData::s_globalEffectManager_,param_3,uVar1);
  return 1;
}

```

---

## registTimer

```asm
// === 08637ef6 TimerGlobalEffectItemTimeout::registTimer  [0x08637ef6-0x8637f3f] ===
 8637ef6:	55                   	push   %ebp
 8637ef7:	89 e5                	mov    %esp,%ebp
 8637ef9:	56                   	push   %esi
 8637efa:	53                   	push   %ebx
 8637efb:	83 ec 20             	sub    $0x20,%esp
 8637efe:	8b 75 08             	mov    0x8(%ebp),%esi
 8637f01:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8637f04:	e8 73 e5 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637f09:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8637f10:	00 
 8637f11:	89 74 24 14          	mov    %esi,0x14(%esp)
 8637f15:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8637f19:	c7 44 24 0c 78 00 00 	movl   $0x78,0xc(%esp)
 8637f20:	00 
 8637f21:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8637f28:	00 
 8637f29:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8637f30:	00 
 8637f31:	89 04 24             	mov    %eax,(%esp)
 8637f34:	e8 dd 8e ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8637f39:	83 c4 20             	add    $0x20,%esp
 8637f3c:	5b                   	pop    %ebx
 8637f3d:	5e                   	pop    %esi
 8637f3e:	5d                   	pop    %ebp
 8637f3f:	c3                   	ret

```

```c
// TimerGlobalEffectItemTimeout::registTimer @ 0x8637ef6

/* TimerGlobalEffectItemTimeout::registTimer(unsigned int, unsigned int) */

void TimerGlobalEffectItemTimeout::registTimer(uint param_1,uint param_2)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x78,param_2,param_1,0);
  return;
}

```

