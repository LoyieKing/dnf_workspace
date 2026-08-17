# advancealtar__Timer_StageControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## RegistTimerCheckFinsh

```asm
// === 0812f850 advancealtar::Timer_StageControl::RegistTimerCheckFinsh  [0x0812f850-0x812f89b] ===
 812f850:	55                   	push   %ebp
 812f851:	89 e5                	mov    %esp,%ebp
 812f853:	83 ec 28             	sub    $0x28,%esp
 812f856:	e8 21 6c fc ff       	call   80f647c <_Z12G_TimerQueuev>
 812f85b:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 812f862:	00 
 812f863:	c7 44 24 18 a7 00 00 	movl   $0xa7,0x18(%esp)
 812f86a:	00 
 812f86b:	c7 44 24 10 88 13 00 	movl   $0x1388,0x10(%esp)
 812f872:	00 
 812f873:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 812f87a:	00 
 812f87b:	c7 44 24 0c a7 00 00 	movl   $0xa7,0xc(%esp)
 812f882:	00 
 812f883:	8b 55 08             	mov    0x8(%ebp),%edx
 812f886:	89 54 24 08          	mov    %edx,0x8(%esp)
 812f88a:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 812f891:	00 
 812f892:	89 04 24             	mov    %eax,(%esp)
 812f895:	e8 c6 15 50 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 812f89a:	c9                   	leave
 812f89b:	c3                   	ret

```

```c
// advancealtar::Timer_StageControl::RegistTimerCheckFinsh @ 0x812f850

/* advancealtar::Timer_StageControl::RegistTimerCheckFinsh(int) */

void advancealtar::Timer_StageControl::RegistTimerCheckFinsh(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,param_1,0xa7,5000,0,0xa7,0);
  return;
}

```

---

## RegistTimerClearReward

```asm
// === 0812f89c advancealtar::Timer_StageControl::RegistTimerClearReward  [0x0812f89c-0x812f8eb] ===
 812f89c:	55                   	push   %ebp
 812f89d:	89 e5                	mov    %esp,%ebp
 812f89f:	53                   	push   %ebx
 812f8a0:	83 ec 24             	sub    $0x24,%esp
 812f8a3:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 812f8a6:	e8 d1 6b fc ff       	call   80f647c <_Z12G_TimerQueuev>
 812f8ab:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 812f8af:	c7 44 24 18 a8 00 00 	movl   $0xa8,0x18(%esp)
 812f8b6:	00 
 812f8b7:	c7 44 24 10 b8 0b 00 	movl   $0xbb8,0x10(%esp)
 812f8be:	00 
 812f8bf:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 812f8c6:	00 
 812f8c7:	c7 44 24 0c a8 00 00 	movl   $0xa8,0xc(%esp)
 812f8ce:	00 
 812f8cf:	8b 55 08             	mov    0x8(%ebp),%edx
 812f8d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 812f8d6:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 812f8dd:	00 
 812f8de:	89 04 24             	mov    %eax,(%esp)
 812f8e1:	e8 7a 15 50 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 812f8e6:	83 c4 24             	add    $0x24,%esp
 812f8e9:	5b                   	pop    %ebx
 812f8ea:	5d                   	pop    %ebp
 812f8eb:	c3                   	ret

```

```c
// advancealtar::Timer_StageControl::RegistTimerClearReward @ 0x812f89c

/* advancealtar::Timer_StageControl::RegistTimerClearReward(int, advancealtar::StageEndType::T) */

void advancealtar::Timer_StageControl::RegistTimerClearReward(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,param_1,0xa8,3000,0,0xa8,param_2);
  return;
}

```

---

## RegistTimerEPLP

```asm
// === 0812f8ec advancealtar::Timer_StageControl::RegistTimerEPLP  [0x0812f8ec-0x812f955] ===
 812f8ec:	55                   	push   %ebp
 812f8ed:	89 e5                	mov    %esp,%ebp
 812f8ef:	57                   	push   %edi
 812f8f0:	56                   	push   %esi
 812f8f1:	53                   	push   %ebx
 812f8f2:	83 ec 3c             	sub    $0x3c,%esp
 812f8f5:	c7 45 e4 e8 03 00 00 	movl   $0x3e8,-0x1c(%ebp)
 812f8fc:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 812f900:	75 07                	jne    812f909 <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE+0x1d>
 812f902:	c7 45 e4 e8 03 00 00 	movl   $0x3e8,-0x1c(%ebp)
 812f909:	8b 7d 0c             	mov    0xc(%ebp),%edi
 812f90c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812f90f:	89 c3                	mov    %eax,%ebx
 812f911:	89 c6                	mov    %eax,%esi
 812f913:	c1 fe 1f             	sar    $0x1f,%esi
 812f916:	e8 61 6b fc ff       	call   80f647c <_Z12G_TimerQueuev>
 812f91b:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 812f91f:	c7 44 24 18 a9 00 00 	movl   $0xa9,0x18(%esp)
 812f926:	00 
 812f927:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 812f92b:	89 74 24 14          	mov    %esi,0x14(%esp)
 812f92f:	c7 44 24 0c a9 00 00 	movl   $0xa9,0xc(%esp)
 812f936:	00 
 812f937:	8b 55 08             	mov    0x8(%ebp),%edx
 812f93a:	89 54 24 08          	mov    %edx,0x8(%esp)
 812f93e:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 812f945:	00 
 812f946:	89 04 24             	mov    %eax,(%esp)
 812f949:	e8 12 15 50 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 812f94e:	83 c4 3c             	add    $0x3c,%esp
 812f951:	5b                   	pop    %ebx
 812f952:	5e                   	pop    %esi
 812f953:	5f                   	pop    %edi
 812f954:	5d                   	pop    %ebp
 812f955:	c3                   	ret

```

```c
// advancealtar::Timer_StageControl::RegistTimerEPLP @ 0x812f8ec

/* advancealtar::Timer_StageControl::RegistTimerEPLP(int, advancealtar::StageEndType::T) */

void advancealtar::Timer_StageControl::RegistTimerEPLP(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,param_1,0xa9,1000,0,0xa9,param_2);
  return;
}

```

---

## RegistTimerEPLPReturnVillage

```asm
// === 0812f956 advancealtar::Timer_StageControl::RegistTimerEPLPReturnVillage  [0x0812f956-0x812f9a1] ===
 812f956:	55                   	push   %ebp
 812f957:	89 e5                	mov    %esp,%ebp
 812f959:	83 ec 28             	sub    $0x28,%esp
 812f95c:	e8 1b 6b fc ff       	call   80f647c <_Z12G_TimerQueuev>
 812f961:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 812f968:	00 
 812f969:	c7 44 24 18 aa 00 00 	movl   $0xaa,0x18(%esp)
 812f970:	00 
 812f971:	c7 44 24 10 50 c3 00 	movl   $0xc350,0x10(%esp)
 812f978:	00 
 812f979:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 812f980:	00 
 812f981:	c7 44 24 0c aa 00 00 	movl   $0xaa,0xc(%esp)
 812f988:	00 
 812f989:	8b 55 08             	mov    0x8(%ebp),%edx
 812f98c:	89 54 24 08          	mov    %edx,0x8(%esp)
 812f990:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 812f997:	00 
 812f998:	89 04 24             	mov    %eax,(%esp)
 812f99b:	e8 c0 14 50 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 812f9a0:	c9                   	leave
 812f9a1:	c3                   	ret

```

```c
// advancealtar::Timer_StageControl::RegistTimerEPLPReturnVillage @ 0x812f956

/* advancealtar::Timer_StageControl::RegistTimerEPLPReturnVillage(int) */

void advancealtar::Timer_StageControl::RegistTimerEPLPReturnVillage(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,param_1,0xaa,50000,0,0xaa,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0812f806 advancealtar::Timer_StageControl::dispatch_sig  [0x0812f806-0x812f84f] ===
 812f806:	55                   	push   %ebp
 812f807:	89 e5                	mov    %esp,%ebp
 812f809:	83 ec 28             	sub    $0x28,%esp
 812f80c:	e8 7d c9 f9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 812f811:	8b 55 0c             	mov    0xc(%ebp),%edx
 812f814:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f818:	89 04 24             	mov    %eax,(%esp)
 812f81b:	e8 18 64 16 00       	call   8295c38 <_ZN12CGameManager15getAdvanceAltarEi>
 812f820:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812f823:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812f827:	75 07                	jne    812f830 <_ZN12advancealtar18Timer_StageControl12dispatch_sigEiij+0x2a>
 812f829:	b8 00 00 00 00       	mov    $0x0,%eax
 812f82e:	eb 1e                	jmp    812f84e <_ZN12advancealtar18Timer_StageControl12dispatch_sigEiij+0x48>
 812f830:	8b 45 10             	mov    0x10(%ebp),%eax
 812f833:	8b 55 14             	mov    0x14(%ebp),%edx
 812f836:	89 54 24 08          	mov    %edx,0x8(%esp)
 812f83a:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f83e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812f841:	89 04 24             	mov    %eax,(%esp)
 812f844:	e8 b1 03 00 00       	call   812fbfa <_ZN12advancealtar12StageControl7onTimerE13TIMER_MESSAGENS_12StageEndType1TE>
 812f849:	b8 01 00 00 00       	mov    $0x1,%eax
 812f84e:	c9                   	leave
 812f84f:	c3                   	ret

```

```c
// advancealtar::Timer_StageControl::dispatch_sig @ 0x812f806

/* advancealtar::Timer_StageControl::dispatch_sig(int, int, unsigned int) */

bool __thiscall
advancealtar::Timer_StageControl::dispatch_sig
          (Timer_StageControl *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  StageControl *pSVar2;
  
  iVar1 = G_CGameManager();
  pSVar2 = (StageControl *)CGameManager::getAdvanceAltar(iVar1);
  if (pSVar2 != (StageControl *)0x0) {
    StageControl::onTimer(pSVar2,param_2,param_3);
  }
  return pSVar2 != (StageControl *)0x0;
}

```

