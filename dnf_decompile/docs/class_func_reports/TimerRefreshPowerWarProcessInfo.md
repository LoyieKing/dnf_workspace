# TimerRefreshPowerWarProcessInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 086382d8 TimerRefreshPowerWarProcessInfo::dispatch_sig  [0x086382d8-0x8638315] ===
 86382d8:	55                   	push   %ebp
 86382d9:	89 e5                	mov    %esp,%ebp
 86382db:	83 ec 18             	sub    $0x18,%esp
 86382de:	a1 50 be 40 09       	mov    0x940be50,%eax
 86382e3:	89 04 24             	mov    %eax,(%esp)
 86382e6:	e8 25 76 e4 ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 86382eb:	84 c0                	test   %al,%al
 86382ed:	74 20                	je     863830f <_ZN31TimerRefreshPowerWarProcessInfo12dispatch_sigEiij+0x37>
 86382ef:	e8 b3 20 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86382f4:	89 04 24             	mov    %eax,(%esp)
 86382f7:	e8 f8 6a 09 00       	call   86cedf4 <_ZN9GameWorld28OnRefreshPowerWarProcessInfoEv>
 86382fc:	e8 9a 3e a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8638301:	8b 80 58 a6 00 00    	mov    0xa658(%eax),%eax
 8638307:	89 04 24             	mov    %eax,(%esp)
 863830a:	e8 07 00 00 00       	call   8638316 <_ZN31TimerRefreshPowerWarProcessInfo15registNextTimerEl>
 863830f:	b8 01 00 00 00       	mov    $0x1,%eax
 8638314:	c9                   	leave
 8638315:	c3                   	ret

```

```c
// TimerRefreshPowerWarProcessInfo::dispatch_sig @ 0x86382d8

/* TimerRefreshPowerWarProcessInfo::dispatch_sig(int, int, unsigned int) */

undefined4 TimerRefreshPowerWarProcessInfo::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  GameWorld *this;
  int iVar2;
  
  cVar1 = CPowerManager::IsPowerWarEventOn();
  if (cVar1 != '\0') {
    this = (GameWorld *)G_GameWorld();
    GameWorld::OnRefreshPowerWarProcessInfo(this);
    iVar2 = G_CDataManager();
    registNextTimer(*(long *)(iVar2 + 0xa658));
  }
  return 1;
}

```

---

## registNextTimer

```asm
// === 08638316 TimerRefreshPowerWarProcessInfo::registNextTimer  [0x08638316-0x8638359] ===
 8638316:	55                   	push   %ebp
 8638317:	89 e5                	mov    %esp,%ebp
 8638319:	83 ec 28             	sub    $0x28,%esp
 863831c:	e8 5b e1 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8638321:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8638328:	00 
 8638329:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8638330:	00 
 8638331:	8b 55 08             	mov    0x8(%ebp),%edx
 8638334:	89 54 24 10          	mov    %edx,0x10(%esp)
 8638338:	c7 44 24 0c 7b 00 00 	movl   $0x7b,0xc(%esp)
 863833f:	00 
 8638340:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8638347:	00 
 8638348:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863834f:	00 
 8638350:	89 04 24             	mov    %eax,(%esp)
 8638353:	e8 be 8a ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8638358:	c9                   	leave
 8638359:	c3                   	ret

```

```c
// TimerRefreshPowerWarProcessInfo::registNextTimer @ 0x8638316

/* TimerRefreshPowerWarProcessInfo::registNextTimer(long) */

void TimerRefreshPowerWarProcessInfo::registNextTimer(long param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,0,0,0x7b,param_1,0,0);
  return;
}

```

