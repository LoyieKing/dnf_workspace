# TimerScheduleFiveMinPerUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086341d2 TimerScheduleFiveMinPerUser::dispatch_sig  [0x086341d2-0x86342c5] ===
 86341d2:	55                   	push   %ebp
 86341d3:	89 e5                	mov    %esp,%ebp
 86341d5:	57                   	push   %edi
 86341d6:	56                   	push   %esi
 86341d7:	53                   	push   %ebx
 86341d8:	83 ec 3c             	sub    $0x3c,%esp
 86341db:	e8 ae 7f a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86341e0:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 86341e7:	00 
 86341e8:	8b 55 0c             	mov    0xc(%ebp),%edx
 86341eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86341ef:	89 04 24             	mov    %eax,(%esp)
 86341f2:	e8 ad 05 c6 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 86341f7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86341fa:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 86341fe:	75 0a                	jne    863420a <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0x38>
 8634200:	b8 00 00 00 00       	mov    $0x0,%eax
 8634205:	e9 b4 00 00 00       	jmp    86342be <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0xec>
 863420a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863420d:	89 04 24             	mov    %eax,(%esp)
 8634210:	e8 7d b4 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8634215:	3b 45 10             	cmp    0x10(%ebp),%eax
 8634218:	0f 95 c0             	setne  %al
 863421b:	84 c0                	test   %al,%al
 863421d:	74 0a                	je     8634229 <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0x57>
 863421f:	b8 00 00 00 00       	mov    $0x0,%eax
 8634224:	e9 95 00 00 00       	jmp    86342be <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0xec>
 8634229:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 863422d:	74 17                	je     8634246 <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0x74>
 863422f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634232:	89 04 24             	mov    %eax,(%esp)
 8634235:	e8 14 7a a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 863423a:	3b 45 14             	cmp    0x14(%ebp),%eax
 863423d:	74 07                	je     8634246 <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0x74>
 863423f:	b8 01 00 00 00       	mov    $0x1,%eax
 8634244:	eb 05                	jmp    863424b <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0x79>
 8634246:	b8 00 00 00 00       	mov    $0x0,%eax
 863424b:	84 c0                	test   %al,%al
 863424d:	74 07                	je     8634256 <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0x84>
 863424f:	b8 00 00 00 00       	mov    $0x0,%eax
 8634254:	eb 68                	jmp    86342be <_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij+0xec>
 8634256:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634259:	89 04 24             	mov    %eax,(%esp)
 863425c:	e8 ab ec 01 00       	call   8652f0c <_ZN5CUser14WorkPerFiveMinEv>
 8634261:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634264:	89 04 24             	mov    %eax,(%esp)
 8634267:	e8 e2 79 a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 863426c:	89 c7                	mov    %eax,%edi
 863426e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8634271:	89 04 24             	mov    %eax,(%esp)
 8634274:	e8 19 b4 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8634279:	89 c6                	mov    %eax,%esi
 863427b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863427e:	89 04 24             	mov    %eax,(%esp)
 8634281:	e8 10 4a a9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8634286:	89 c3                	mov    %eax,%ebx
 8634288:	e8 ef 21 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 863428d:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8634291:	89 74 24 14          	mov    %esi,0x14(%esp)
 8634295:	c7 44 24 10 2c 01 00 	movl   $0x12c,0x10(%esp)
 863429c:	00 
 863429d:	c7 44 24 0c 5f 00 00 	movl   $0x5f,0xc(%esp)
 86342a4:	00 
 86342a5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86342a9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86342b0:	00 
 86342b1:	89 04 24             	mov    %eax,(%esp)
 86342b4:	e8 5d cb ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86342b9:	b8 01 00 00 00       	mov    $0x1,%eax
 86342be:	83 c4 3c             	add    $0x3c,%esp
 86342c1:	5b                   	pop    %ebx
 86342c2:	5e                   	pop    %esi
 86342c3:	5f                   	pop    %edi
 86342c4:	5d                   	pop    %ebp
 86342c5:	c3                   	ret

```

```c
// TimerScheduleFiveMinPerUser::dispatch_sig @ 0x86341d2

/* TimerScheduleFiveMinPerUser::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerScheduleFiveMinPerUser::dispatch_sig
          (TimerScheduleFiveMinPerUser *this,int param_1,int param_2,uint param_3)

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
    CUser::WorkPerFiveMin((CUser *)this_00);
    uVar4 = CUserCharacInfo::getCurCharacNo(this_00);
    uVar5 = CUserCharacInfo::GetLoginTick(this_00);
    uVar6 = CUser::GetUID((CUser *)this_00);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,0,uVar6,0x5f,300,uVar5,uVar4);
  }
  return !bVar1;
}

```

