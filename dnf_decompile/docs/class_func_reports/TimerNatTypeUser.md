# TimerNatTypeUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08635cd0 TimerNatTypeUser::RegistNextTimer  [0x08635cd0-0x8635d1f] ===
 8635cd0:	55                   	push   %ebp
 8635cd1:	89 e5                	mov    %esp,%ebp
 8635cd3:	83 ec 38             	sub    $0x38,%esp
 8635cd6:	c7 45 f4 10 0e 00 00 	movl   $0xe10,-0xc(%ebp)
 8635cdd:	e8 9a 07 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8635ce2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8635ce9:	00 
 8635cea:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8635cf1:	00 
 8635cf2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8635cf5:	89 54 24 10          	mov    %edx,0x10(%esp)
 8635cf9:	c7 44 24 0c 5b 00 00 	movl   $0x5b,0xc(%esp)
 8635d00:	00 
 8635d01:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8635d08:	00 
 8635d09:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8635d10:	00 
 8635d11:	89 04 24             	mov    %eax,(%esp)
 8635d14:	e8 fd b0 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8635d19:	b8 01 00 00 00       	mov    $0x1,%eax
 8635d1e:	c9                   	leave
 8635d1f:	c3                   	ret

```

```c
// TimerNatTypeUser::RegistNextTimer @ 0x8635cd0

/* TimerNatTypeUser::RegistNextTimer() */

undefined4 TimerNatTypeUser::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x5b,0xe10,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08635caa TimerNatTypeUser::dispatch_sig  [0x08635caa-0x8635ccf] ===
 8635caa:	55                   	push   %ebp
 8635cab:	89 e5                	mov    %esp,%ebp
 8635cad:	83 ec 18             	sub    $0x18,%esp
 8635cb0:	e8 f2 46 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8635cb5:	89 04 24             	mov    %eax,(%esp)
 8635cb8:	e8 39 76 09 00       	call   86cd2f6 <_ZN9GameWorld17UpdateNatTypeUserEv>
 8635cbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8635cc0:	89 04 24             	mov    %eax,(%esp)
 8635cc3:	e8 08 00 00 00       	call   8635cd0 <_ZN16TimerNatTypeUser15RegistNextTimerEv>
 8635cc8:	b8 01 00 00 00       	mov    $0x1,%eax
 8635ccd:	c9                   	leave
 8635cce:	c3                   	ret
 8635ccf:	90                   	nop

```

```c
// TimerNatTypeUser::dispatch_sig @ 0x8635caa

/* TimerNatTypeUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerNatTypeUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  G_GameWorld();
  GameWorld::UpdateNatTypeUser();
  RegistNextTimer();
  return 1;
}

```

