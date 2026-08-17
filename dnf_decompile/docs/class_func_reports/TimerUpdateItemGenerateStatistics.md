# TimerUpdateItemGenerateStatistics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 086372d4 TimerUpdateItemGenerateStatistics::dispatch_sig  [0x086372d4-0x8637317] ===
 86372d4:	55                   	push   %ebp
 86372d5:	89 e5                	mov    %esp,%ebp
 86372d7:	83 ec 18             	sub    $0x18,%esp
 86372da:	e8 bc 4e a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86372df:	89 04 24             	mov    %eax,(%esp)
 86372e2:	e8 03 34 b1 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 86372e7:	c7 44 24 04 6b 00 00 	movl   $0x6b,0x4(%esp)
 86372ee:	00 
 86372ef:	89 04 24             	mov    %eax,(%esp)
 86372f2:	e8 2b d0 ef ff       	call   8534322 <_ZN8WongWork17CItemGeneratorMgr12onTimerEventEi>
 86372f7:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86372fe:	e8 9b 49 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8637303:	05 80 51 01 00       	add    $0x15180,%eax
 8637308:	89 04 24             	mov    %eax,(%esp)
 863730b:	e8 08 00 00 00       	call   8637318 <_ZN33TimerUpdateItemGenerateStatistics15registNextTimerEl>
 8637310:	b8 01 00 00 00       	mov    $0x1,%eax
 8637315:	c9                   	leave
 8637316:	c3                   	ret
 8637317:	90                   	nop

```

```c
// TimerUpdateItemGenerateStatistics::dispatch_sig @ 0x86372d4

/* TimerUpdateItemGenerateStatistics::dispatch_sig(int, int, unsigned int) */

undefined4 TimerUpdateItemGenerateStatistics::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CDataManager *this;
  CItemGeneratorMgr *this_00;
  int iVar1;
  
  this = (CDataManager *)G_CDataManager();
  this_00 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(this);
  WongWork::CItemGeneratorMgr::onTimerEvent(this_00,0x6b);
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  registNextTimer(iVar1 + 0x15180);
  return 1;
}

```

---

## registNextTimer

```asm
// === 08637318 TimerUpdateItemGenerateStatistics::registNextTimer  [0x08637318-0x86373c5] ===
 8637318:	55                   	push   %ebp
 8637319:	89 e5                	mov    %esp,%ebp
 863731b:	53                   	push   %ebx
 863731c:	83 ec 64             	sub    $0x64,%esp
 863731f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8637322:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637326:	8d 45 08             	lea    0x8(%ebp),%eax
 8637329:	89 04 24             	mov    %eax,(%esp)
 863732c:	e8 2f 70 a4 ff       	call   807e360 <localtime_r@plt>
 8637331:	c7 45 cc 17 00 00 00 	movl   $0x17,-0x34(%ebp)
 8637338:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 863733f:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8637346:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8637349:	89 04 24             	mov    %eax,(%esp)
 863734c:	e8 cf 74 a4 ff       	call   807e820 <mktime@plt>
 8637351:	89 45 08             	mov    %eax,0x8(%ebp)
 8637354:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8637357:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 863735e:	e8 3b 49 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8637363:	89 da                	mov    %ebx,%edx
 8637365:	29 c2                	sub    %eax,%edx
 8637367:	89 d0                	mov    %edx,%eax
 8637369:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863736c:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8637373:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8637376:	89 44 24 04          	mov    %eax,0x4(%esp)
 863737a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 863737d:	89 04 24             	mov    %eax,(%esp)
 8637380:	e8 93 6e a5 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8637385:	8b 18                	mov    (%eax),%ebx
 8637387:	e8 f0 f0 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863738c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8637393:	00 
 8637394:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863739b:	00 
 863739c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86373a0:	c7 44 24 0c 6b 00 00 	movl   $0x6b,0xc(%esp)
 86373a7:	00 
 86373a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86373af:	00 
 86373b0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86373b7:	00 
 86373b8:	89 04 24             	mov    %eax,(%esp)
 86373bb:	e8 56 9a ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86373c0:	83 c4 64             	add    $0x64,%esp
 86373c3:	5b                   	pop    %ebx
 86373c4:	5d                   	pop    %ebp
 86373c5:	c3                   	ret

```

```c
// TimerUpdateItemGenerateStatistics::registNextTimer @ 0x8637318

/* TimerUpdateItemGenerateStatistics::registNextTimer(long) */

void TimerUpdateItemGenerateStatistics::registNextTimer(long param_1)

{
  int iVar1;
  time_t tVar2;
  int *piVar3;
  TimerQueue *pTVar4;
  tm local_40;
  int local_14 [3];
  
  localtime_r(&param_1,&local_40);
  local_40.tm_hour = 0x17;
  local_40.tm_min = 0;
  local_40.tm_sec = 0;
  tVar2 = mktime(&local_40);
  param_1 = tVar2;
  local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14[0] = tVar2 - local_14[0];
  local_14[1] = 1;
  piVar3 = std::max<int>(local_14 + 1,local_14);
  iVar1 = *piVar3;
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,2,0,0x6b,iVar1,0,0);
  return;
}

```

