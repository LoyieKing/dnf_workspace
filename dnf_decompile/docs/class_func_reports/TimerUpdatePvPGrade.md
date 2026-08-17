# TimerUpdatePvPGrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 086373c6 TimerUpdatePvPGrade::dispatch_sig  [0x086373c6-0x86373f1] ===
 86373c6:	55                   	push   %ebp
 86373c7:	89 e5                	mov    %esp,%ebp
 86373c9:	83 ec 18             	sub    $0x18,%esp
 86373cc:	e8 cf 1f df ff       	call   84293a0 <_ZN17DB_UpdatePvPGrade11makeRequestEv>
 86373d1:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86373d8:	e8 c1 48 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86373dd:	05 80 51 01 00       	add    $0x15180,%eax
 86373e2:	89 04 24             	mov    %eax,(%esp)
 86373e5:	e8 08 00 00 00       	call   86373f2 <_ZN19TimerUpdatePvPGrade15registNextTimerEl>
 86373ea:	b8 01 00 00 00       	mov    $0x1,%eax
 86373ef:	c9                   	leave
 86373f0:	c3                   	ret
 86373f1:	90                   	nop

```

```c
// TimerUpdatePvPGrade::dispatch_sig @ 0x86373c6

/* TimerUpdatePvPGrade::dispatch_sig(int, int, unsigned int) */

undefined4 TimerUpdatePvPGrade::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  DB_UpdatePvPGrade::makeRequest();
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  registNextTimer(iVar1 + 0x15180);
  return 1;
}

```

---

## registNextTimer

```asm
// === 086373f2 TimerUpdatePvPGrade::registNextTimer  [0x086373f2-0x86374bb] ===
 86373f2:	55                   	push   %ebp
 86373f3:	89 e5                	mov    %esp,%ebp
 86373f5:	53                   	push   %ebx
 86373f6:	83 ec 54             	sub    $0x54,%esp
 86373f9:	e8 83 4d a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 86373fe:	89 04 24             	mov    %eax,(%esp)
 8637401:	e8 c4 36 b1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8637406:	83 f8 01             	cmp    $0x1,%eax
 8637409:	0f 95 c0             	setne  %al
 863740c:	84 c0                	test   %al,%al
 863740e:	0f 85 a1 00 00 00    	jne    86374b5 <_ZN19TimerUpdatePvPGrade15registNextTimerEl+0xc3>
 8637414:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8637417:	89 44 24 04          	mov    %eax,0x4(%esp)
 863741b:	8d 45 08             	lea    0x8(%ebp),%eax
 863741e:	89 04 24             	mov    %eax,(%esp)
 8637421:	e8 3a 6f a4 ff       	call   807e360 <localtime_r@plt>
 8637426:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 863742d:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8637434:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 863743b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863743e:	89 04 24             	mov    %eax,(%esp)
 8637441:	e8 da 73 a4 ff       	call   807e820 <mktime@plt>
 8637446:	89 45 08             	mov    %eax,0x8(%ebp)
 8637449:	8b 5d 08             	mov    0x8(%ebp),%ebx
 863744c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8637453:	e8 46 48 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8637458:	89 da                	mov    %ebx,%edx
 863745a:	29 c2                	sub    %eax,%edx
 863745c:	89 d0                	mov    %edx,%eax
 863745e:	85 c0                	test   %eax,%eax
 8637460:	7e 13                	jle    8637475 <_ZN19TimerUpdatePvPGrade15registNextTimerEl+0x83>
 8637462:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8637465:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 863746c:	e8 2d 48 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8637471:	29 c3                	sub    %eax,%ebx
 8637473:	eb 05                	jmp    863747a <_ZN19TimerUpdatePvPGrade15registNextTimerEl+0x88>
 8637475:	bb 01 00 00 00       	mov    $0x1,%ebx
 863747a:	e8 fd ef ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863747f:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8637486:	00 
 8637487:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863748e:	00 
 863748f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8637493:	c7 44 24 0c 6c 00 00 	movl   $0x6c,0xc(%esp)
 863749a:	00 
 863749b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86374a2:	00 
 86374a3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86374aa:	00 
 86374ab:	89 04 24             	mov    %eax,(%esp)
 86374ae:	e8 63 99 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86374b3:	eb 01                	jmp    86374b6 <_ZN19TimerUpdatePvPGrade15registNextTimerEl+0xc4>
 86374b5:	90                   	nop
 86374b6:	83 c4 54             	add    $0x54,%esp
 86374b9:	5b                   	pop    %ebx
 86374ba:	5d                   	pop    %ebp
 86374bb:	c3                   	ret

```

```c
// TimerUpdatePvPGrade::registNextTimer @ 0x86373f2

/* TimerUpdatePvPGrade::registNextTimer(long) */

void TimerUpdatePvPGrade::registNextTimer(long param_1)

{
  long lVar1;
  CEnvironment *this;
  int iVar2;
  time_t tVar3;
  TimerQueue *pTVar4;
  tm local_38;
  
  this = (CEnvironment *)G_CEnvironment();
  iVar2 = CEnvironment::get_channel_no(this);
  if (iVar2 == 1) {
    localtime_r(&param_1,&local_38);
    local_38.tm_hour = 2;
    local_38.tm_min = 0;
    local_38.tm_sec = 0;
    tVar3 = mktime(&local_38);
    param_1 = tVar3;
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar1 = param_1;
    if (tVar3 == iVar2 || tVar3 - iVar2 < 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar2 = lVar1 - iVar2;
    }
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x6c,iVar2,0,0);
  }
  return;
}

```

