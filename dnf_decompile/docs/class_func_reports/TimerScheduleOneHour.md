# TimerScheduleOneHour

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634104 TimerScheduleOneHour::dispatch_sig  [0x08634104-0x863414d] ===
 8634104:	55                   	push   %ebp
 8634105:	89 e5                	mov    %esp,%ebp
 8634107:	83 ec 28             	sub    $0x28,%esp
 863410a:	e8 6d 23 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 863410f:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8634116:	00 
 8634117:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863411e:	00 
 863411f:	c7 44 24 10 10 0e 00 	movl   $0xe10,0x10(%esp)
 8634126:	00 
 8634127:	c7 44 24 0c 56 00 00 	movl   $0x56,0xc(%esp)
 863412e:	00 
 863412f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8634136:	00 
 8634137:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863413e:	00 
 863413f:	89 04 24             	mov    %eax,(%esp)
 8634142:	e8 cf cc ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8634147:	b8 01 00 00 00       	mov    $0x1,%eax
 863414c:	c9                   	leave
 863414d:	c3                   	ret

```

```c
// TimerScheduleOneHour::dispatch_sig @ 0x8634104

/* TimerScheduleOneHour::dispatch_sig(int, int, unsigned int) */

undefined4 TimerScheduleOneHour::dispatch_sig(int param_1,int param_2,uint param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x56,0xe10,0,0);
  return 1;
}

```

