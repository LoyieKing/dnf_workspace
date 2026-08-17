# TimerCheckPowerWarAbuser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0863825c TimerCheckPowerWarAbuser::dispatch_sig  [0x0863825c-0x8638293] ===
 863825c:	55                   	push   %ebp
 863825d:	89 e5                	mov    %esp,%ebp
 863825f:	83 ec 18             	sub    $0x18,%esp
 8638262:	a1 50 be 40 09       	mov    0x940be50,%eax
 8638267:	89 04 24             	mov    %eax,(%esp)
 863826a:	e8 a1 76 e4 ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 863826f:	84 c0                	test   %al,%al
 8638271:	74 19                	je     863828c <_ZN24TimerCheckPowerWarAbuser12dispatch_sigEiij+0x30>
 8638273:	e8 2f 21 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8638278:	89 04 24             	mov    %eax,(%esp)
 863827b:	e8 b6 6c 09 00       	call   86cef36 <_ZN9GameWorld23OnBanAbuserFromPowerWarEv>
 8638280:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 8638287:	e8 08 00 00 00       	call   8638294 <_ZN24TimerCheckPowerWarAbuser15registNextTimerEl>
 863828c:	b8 01 00 00 00       	mov    $0x1,%eax
 8638291:	c9                   	leave
 8638292:	c3                   	ret
 8638293:	90                   	nop

```

```c
// TimerCheckPowerWarAbuser::dispatch_sig @ 0x863825c

/* TimerCheckPowerWarAbuser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckPowerWarAbuser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  GameWorld *this;
  
  cVar1 = CPowerManager::IsPowerWarEventOn();
  if (cVar1 != '\0') {
    this = (GameWorld *)G_GameWorld();
    GameWorld::OnBanAbuserFromPowerWar(this);
    registNextTimer(0x3c);
  }
  return 1;
}

```

---

## registNextTimer

```asm
// === 08638294 TimerCheckPowerWarAbuser::registNextTimer  [0x08638294-0x86382d7] ===
 8638294:	55                   	push   %ebp
 8638295:	89 e5                	mov    %esp,%ebp
 8638297:	83 ec 28             	sub    $0x28,%esp
 863829a:	e8 dd e1 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863829f:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86382a6:	00 
 86382a7:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86382ae:	00 
 86382af:	8b 55 08             	mov    0x8(%ebp),%edx
 86382b2:	89 54 24 10          	mov    %edx,0x10(%esp)
 86382b6:	c7 44 24 0c 80 00 00 	movl   $0x80,0xc(%esp)
 86382bd:	00 
 86382be:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86382c5:	00 
 86382c6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86382cd:	00 
 86382ce:	89 04 24             	mov    %eax,(%esp)
 86382d1:	e8 40 8b ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86382d6:	c9                   	leave
 86382d7:	c3                   	ret

```

```c
// TimerCheckPowerWarAbuser::registNextTimer @ 0x8638294

/* TimerCheckPowerWarAbuser::registNextTimer(long) */

void TimerCheckPowerWarAbuser::registNextTimer(long param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x80,param_1,0,0);
  return;
}

```

