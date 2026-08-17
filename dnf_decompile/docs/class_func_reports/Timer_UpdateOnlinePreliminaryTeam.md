# Timer_UpdateOnlinePreliminaryTeam

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863977e Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer  [0x0863977e-0x86397cd] ===
 863977e:	55                   	push   %ebp
 863977f:	89 e5                	mov    %esp,%ebp
 8639781:	83 ec 38             	sub    $0x38,%esp
 8639784:	c7 45 f4 58 02 00 00 	movl   $0x258,-0xc(%ebp)
 863978b:	e8 ec cc ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8639790:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8639797:	00 
 8639798:	8b 55 08             	mov    0x8(%ebp),%edx
 863979b:	89 54 24 14          	mov    %edx,0x14(%esp)
 863979f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86397a2:	89 54 24 10          	mov    %edx,0x10(%esp)
 86397a6:	c7 44 24 0c 8f 00 00 	movl   $0x8f,0xc(%esp)
 86397ad:	00 
 86397ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86397b5:	00 
 86397b6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86397bd:	00 
 86397be:	89 04 24             	mov    %eax,(%esp)
 86397c1:	e8 50 76 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86397c6:	b8 01 00 00 00       	mov    $0x1,%eax
 86397cb:	c9                   	leave
 86397cc:	c3                   	ret
 86397cd:	90                   	nop

```

```c
// Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer @ 0x863977e

/* Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer(int) */

undefined4 Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer(int param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x8f,600,param_1,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08639722 Timer_UpdateOnlinePreliminaryTeam::dispatch_sig  [0x08639722-0x863977d] ===
 8639722:	55                   	push   %ebp
 8639723:	89 e5                	mov    %esp,%ebp
 8639725:	83 ec 28             	sub    $0x28,%esp
 8639728:	a1 88 f7 41 09       	mov    0x941f788,%eax
 863972d:	8b 55 10             	mov    0x10(%ebp),%edx
 8639730:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639734:	89 04 24             	mov    %eax,(%esp)
 8639737:	e8 22 f0 f4 ff       	call   858875e <_ZN18online_preliminary25COnlinePreliminaryTeamMgr8FindTeamEi>
 863973c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863973f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8639743:	74 2b                	je     8639770 <_ZN33Timer_UpdateOnlinePreliminaryTeam12dispatch_sigEiij+0x4e>
 8639745:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8639748:	89 04 24             	mov    %eax,(%esp)
 863974b:	e8 10 f6 f4 ff       	call   8588d60 <_ZN18online_preliminary22COnlinePreliminaryTeam8saveDataEv>
 8639750:	8b 45 10             	mov    0x10(%ebp),%eax
 8639753:	89 04 24             	mov    %eax,(%esp)
 8639756:	e8 23 00 00 00       	call   863977e <_ZN33Timer_UpdateOnlinePreliminaryTeam15RegistNextTimerEi>
 863975b:	88 45 f7             	mov    %al,-0x9(%ebp)
 863975e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8639762:	83 f0 01             	xor    $0x1,%eax
 8639765:	84 c0                	test   %al,%al
 8639767:	74 0e                	je     8639777 <_ZN33Timer_UpdateOnlinePreliminaryTeam12dispatch_sigEiij+0x55>
 8639769:	b8 00 00 00 00       	mov    $0x0,%eax
 863976e:	eb 0c                	jmp    863977c <_ZN33Timer_UpdateOnlinePreliminaryTeam12dispatch_sigEiij+0x5a>
 8639770:	b8 00 00 00 00       	mov    $0x0,%eax
 8639775:	eb 05                	jmp    863977c <_ZN33Timer_UpdateOnlinePreliminaryTeam12dispatch_sigEiij+0x5a>
 8639777:	b8 01 00 00 00       	mov    $0x1,%eax
 863977c:	c9                   	leave
 863977d:	c3                   	ret

```

```c
// Timer_UpdateOnlinePreliminaryTeam::dispatch_sig @ 0x8639722

/* Timer_UpdateOnlinePreliminaryTeam::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_UpdateOnlinePreliminaryTeam::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  COnlinePreliminaryTeam *this;
  undefined4 uVar2;
  
  this = (COnlinePreliminaryTeam *)
         online_preliminary::COnlinePreliminaryTeamMgr::FindTeam
                   (GlobalData::s_onlinePreliminaryTeamMgr);
  if (this == (COnlinePreliminaryTeam *)0x0) {
    uVar2 = 0;
  }
  else {
    online_preliminary::COnlinePreliminaryTeam::saveData(this);
    cVar1 = RegistNextTimer(param_3);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

