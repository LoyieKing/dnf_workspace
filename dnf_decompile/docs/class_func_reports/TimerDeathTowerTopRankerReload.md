# TimerDeathTowerTopRankerReload

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08637816 TimerDeathTowerTopRankerReload::dispatch_sig  [0x08637816-0x8637853] ===
 8637816:	55                   	push   %ebp
 8637817:	89 e5                	mov    %esp,%ebp
 8637819:	83 ec 18             	sub    $0x18,%esp
 863781c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8637823:	e8 e8 30 df ff       	call   842a910 <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb>
 8637828:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 863782f:	e8 dc 30 df ff       	call   842a910 <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb>
 8637834:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 863783b:	e8 5e 44 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8637840:	05 80 51 01 00       	add    $0x15180,%eax
 8637845:	89 04 24             	mov    %eax,(%esp)
 8637848:	e8 07 00 00 00       	call   8637854 <_ZN30TimerDeathTowerTopRankerReload15registNextTimerEl>
 863784d:	b8 01 00 00 00       	mov    $0x1,%eax
 8637852:	c9                   	leave
 8637853:	c3                   	ret

```

```c
// TimerDeathTowerTopRankerReload::dispatch_sig @ 0x8637816

/* TimerDeathTowerTopRankerReload::dispatch_sig(int, int, unsigned int) */

undefined4 TimerDeathTowerTopRankerReload::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  DB_DeathTowerLoadTopRanker::makeRequest(false);
  DB_DeathTowerLoadTopRanker::makeRequest(true);
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  registNextTimer(iVar1 + 0x15180);
  return 1;
}

```

---

## registNextTimer

```asm
// === 08637854 TimerDeathTowerTopRankerReload::registNextTimer  [0x08637854-0x8637935] ===
 8637854:	55                   	push   %ebp
 8637855:	89 e5                	mov    %esp,%ebp
 8637857:	53                   	push   %ebx
 8637858:	83 ec 64             	sub    $0x64,%esp
 863785b:	8b 45 08             	mov    0x8(%ebp),%eax
 863785e:	85 c0                	test   %eax,%eax
 8637860:	75 22                	jne    8637884 <_ZN30TimerDeathTowerTopRankerReload15registNextTimerEl+0x30>
 8637862:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8637869:	e8 30 44 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 863786e:	89 c3                	mov    %eax,%ebx
 8637870:	c7 04 24 2c 01 00 00 	movl   $0x12c,(%esp)
 8637877:	e8 0b a3 07 00       	call   86b1b87 <_Z12get_rand_inti>
 863787c:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 863787f:	89 45 08             	mov    %eax,0x8(%ebp)
 8637882:	eb 40                	jmp    86378c4 <_ZN30TimerDeathTowerTopRankerReload15registNextTimerEl+0x70>
 8637884:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8637887:	89 44 24 04          	mov    %eax,0x4(%esp)
 863788b:	8d 45 08             	lea    0x8(%ebp),%eax
 863788e:	89 04 24             	mov    %eax,(%esp)
 8637891:	e8 ca 6a a4 ff       	call   807e360 <localtime_r@plt>
 8637896:	c7 45 cc 04 00 00 00 	movl   $0x4,-0x34(%ebp)
 863789d:	c7 04 24 2c 01 00 00 	movl   $0x12c,(%esp)
 86378a4:	e8 de a2 07 00       	call   86b1b87 <_Z12get_rand_inti>
 86378a9:	83 c0 1e             	add    $0x1e,%eax
 86378ac:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86378af:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 86378b6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86378b9:	89 04 24             	mov    %eax,(%esp)
 86378bc:	e8 5f 6f a4 ff       	call   807e820 <mktime@plt>
 86378c1:	89 45 08             	mov    %eax,0x8(%ebp)
 86378c4:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86378c7:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86378ce:	e8 cb 43 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86378d3:	89 da                	mov    %ebx,%edx
 86378d5:	29 c2                	sub    %eax,%edx
 86378d7:	89 d0                	mov    %edx,%eax
 86378d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86378dc:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 86378e3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86378e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86378ea:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86378ed:	89 04 24             	mov    %eax,(%esp)
 86378f0:	e8 23 69 a5 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 86378f5:	8b 18                	mov    (%eax),%ebx
 86378f7:	e8 80 eb ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86378fc:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8637903:	00 
 8637904:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863790b:	00 
 863790c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8637910:	c7 44 24 0c 73 00 00 	movl   $0x73,0xc(%esp)
 8637917:	00 
 8637918:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863791f:	00 
 8637920:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8637927:	00 
 8637928:	89 04 24             	mov    %eax,(%esp)
 863792b:	e8 e6 94 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8637930:	83 c4 64             	add    $0x64,%esp
 8637933:	5b                   	pop    %ebx
 8637934:	5d                   	pop    %ebp
 8637935:	c3                   	ret

```

```c
// TimerDeathTowerTopRankerReload::registNextTimer @ 0x8637854

/* TimerDeathTowerTopRankerReload::registNextTimer(long) */

void TimerDeathTowerTopRankerReload::registNextTimer(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  TimerQueue *pTVar5;
  tm local_40;
  int local_14 [3];
  
  if (param_1 == 0) {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar3 = get_rand_int(300);
    param_1 = iVar2 + iVar3;
  }
  else {
    localtime_r(&param_1,&local_40);
    local_40.tm_hour = 4;
    local_40.tm_min = get_rand_int(300);
    local_40.tm_min = local_40.tm_min + 0x1e;
    local_40.tm_sec = 0;
    param_1 = mktime(&local_40);
  }
  lVar1 = param_1;
  local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14[0] = lVar1 - local_14[0];
  local_14[1] = 1;
  piVar4 = std::max<int>(local_14 + 1,local_14);
  iVar2 = *piVar4;
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,6,0,0x73,iVar2,0,0);
  return;
}

```

