# TimerScheduleTenMinPerUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086342c6 TimerScheduleTenMinPerUser::dispatch_sig  [0x086342c6-0x86343b9] ===
 86342c6:	55                   	push   %ebp
 86342c7:	89 e5                	mov    %esp,%ebp
 86342c9:	57                   	push   %edi
 86342ca:	56                   	push   %esi
 86342cb:	53                   	push   %ebx
 86342cc:	83 ec 3c             	sub    $0x3c,%esp
 86342cf:	e8 ba 7e a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86342d4:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 86342db:	00 
 86342dc:	8b 55 0c             	mov    0xc(%ebp),%edx
 86342df:	89 54 24 04          	mov    %edx,0x4(%esp)
 86342e3:	89 04 24             	mov    %eax,(%esp)
 86342e6:	e8 b9 04 c6 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 86342eb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86342ee:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 86342f2:	75 0a                	jne    86342fe <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0x38>
 86342f4:	b8 00 00 00 00       	mov    $0x0,%eax
 86342f9:	e9 b4 00 00 00       	jmp    86343b2 <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0xec>
 86342fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634301:	89 04 24             	mov    %eax,(%esp)
 8634304:	e8 89 b3 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8634309:	3b 45 10             	cmp    0x10(%ebp),%eax
 863430c:	0f 95 c0             	setne  %al
 863430f:	84 c0                	test   %al,%al
 8634311:	74 0a                	je     863431d <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0x57>
 8634313:	b8 00 00 00 00       	mov    $0x0,%eax
 8634318:	e9 95 00 00 00       	jmp    86343b2 <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0xec>
 863431d:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8634321:	74 17                	je     863433a <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0x74>
 8634323:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634326:	89 04 24             	mov    %eax,(%esp)
 8634329:	e8 20 79 a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 863432e:	3b 45 14             	cmp    0x14(%ebp),%eax
 8634331:	74 07                	je     863433a <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0x74>
 8634333:	b8 01 00 00 00       	mov    $0x1,%eax
 8634338:	eb 05                	jmp    863433f <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0x79>
 863433a:	b8 00 00 00 00       	mov    $0x0,%eax
 863433f:	84 c0                	test   %al,%al
 8634341:	74 07                	je     863434a <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0x84>
 8634343:	b8 00 00 00 00       	mov    $0x0,%eax
 8634348:	eb 68                	jmp    86343b2 <_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij+0xec>
 863434a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863434d:	89 04 24             	mov    %eax,(%esp)
 8634350:	e8 41 ee 01 00       	call   8653196 <_ZN5CUser13WorkPerTenMinEv>
 8634355:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634358:	89 04 24             	mov    %eax,(%esp)
 863435b:	e8 ee 78 a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8634360:	89 c7                	mov    %eax,%edi
 8634362:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634365:	89 04 24             	mov    %eax,(%esp)
 8634368:	e8 25 b3 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 863436d:	89 c6                	mov    %eax,%esi
 863436f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634372:	89 04 24             	mov    %eax,(%esp)
 8634375:	e8 1c 49 a9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 863437a:	89 c3                	mov    %eax,%ebx
 863437c:	e8 fb 20 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8634381:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8634385:	89 74 24 14          	mov    %esi,0x14(%esp)
 8634389:	c7 44 24 10 58 02 00 	movl   $0x258,0x10(%esp)
 8634390:	00 
 8634391:	c7 44 24 0c 60 00 00 	movl   $0x60,0xc(%esp)
 8634398:	00 
 8634399:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 863439d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86343a4:	00 
 86343a5:	89 04 24             	mov    %eax,(%esp)
 86343a8:	e8 69 ca ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86343ad:	b8 01 00 00 00       	mov    $0x1,%eax
 86343b2:	83 c4 3c             	add    $0x3c,%esp
 86343b5:	5b                   	pop    %ebx
 86343b6:	5e                   	pop    %esi
 86343b7:	5f                   	pop    %edi
 86343b8:	5d                   	pop    %ebp
 86343b9:	c3                   	ret

```

```c
// TimerScheduleTenMinPerUser::dispatch_sig @ 0x86342c6

/* TimerScheduleTenMinPerUser::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerScheduleTenMinPerUser::dispatch_sig
          (TimerScheduleTenMinPerUser *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  CUserCharacInfo *this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  
  iVar2 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    return false;
  }
  iVar2 = CUserCharacInfo::GetLoginTick(this_00);
  if (iVar2 != param_2) {
    return false;
  }
  if ((param_3 == 0) || (uVar3 = CUserCharacInfo::getCurCharacNo(this_00), uVar3 == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    CUser::WorkPerTenMin((CUser *)this_00);
    uVar4 = CUserCharacInfo::getCurCharacNo(this_00);
    uVar5 = CUserCharacInfo::GetLoginTick(this_00);
    uVar6 = CUser::GetUID((CUser *)this_00);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,0,uVar6,0x60,600,uVar5,uVar4);
  }
  return !bVar1;
}

```

