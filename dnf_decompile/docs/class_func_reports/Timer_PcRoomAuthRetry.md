# Timer_PcRoomAuthRetry

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08639924 Timer_PcRoomAuthRetry::dispatch_sig  [0x08639924-0x86399cf] ===
 8639924:	55                   	push   %ebp
 8639925:	89 e5                	mov    %esp,%ebp
 8639927:	83 ec 28             	sub    $0x28,%esp
 863992a:	e8 5f 28 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863992f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8639936:	00 
 8639937:	8b 55 0c             	mov    0xc(%ebp),%edx
 863993a:	89 54 24 04          	mov    %edx,0x4(%esp)
 863993e:	89 04 24             	mov    %eax,(%esp)
 8639941:	e8 5e ae c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8639946:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8639949:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863994d:	75 07                	jne    8639956 <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0x32>
 863994f:	b8 00 00 00 00       	mov    $0x0,%eax
 8639954:	eb 78                	jmp    86399ce <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0xaa>
 8639956:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8639959:	89 04 24             	mov    %eax,(%esp)
 863995c:	e8 1b 0a aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8639961:	0f b7 c0             	movzwl %ax,%eax
 8639964:	3b 45 10             	cmp    0x10(%ebp),%eax
 8639967:	0f 95 c0             	setne  %al
 863996a:	84 c0                	test   %al,%al
 863996c:	74 07                	je     8639975 <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0x51>
 863996e:	b8 00 00 00 00       	mov    $0x0,%eax
 8639973:	eb 59                	jmp    86399ce <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0xaa>
 8639975:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8639978:	89 04 24             	mov    %eax,(%esp)
 863997b:	e8 b2 6a ae ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8639980:	85 c0                	test   %eax,%eax
 8639982:	0f 94 c0             	sete   %al
 8639985:	84 c0                	test   %al,%al
 8639987:	74 07                	je     8639990 <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0x6c>
 8639989:	b8 00 00 00 00       	mov    $0x0,%eax
 863998e:	eb 3e                	jmp    86399ce <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0xaa>
 8639990:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8639993:	89 04 24             	mov    %eax,(%esp)
 8639996:	e8 b3 22 a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 863999b:	3b 45 14             	cmp    0x14(%ebp),%eax
 863999e:	0f 95 c0             	setne  %al
 86399a1:	84 c0                	test   %al,%al
 86399a3:	74 07                	je     86399ac <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0x88>
 86399a5:	b8 00 00 00 00       	mov    $0x0,%eax
 86399aa:	eb 22                	jmp    86399ce <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0xaa>
 86399ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86399af:	89 04 24             	mov    %eax,(%esp)
 86399b2:	e8 9d 24 00 00       	call   863be54 <_ZNK5CUser13getPcRoomAuthEv>
 86399b7:	83 f0 01             	xor    $0x1,%eax
 86399ba:	84 c0                	test   %al,%al
 86399bc:	74 0b                	je     86399c9 <_ZN21Timer_PcRoomAuthRetry12dispatch_sigEiij+0xa5>
 86399be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86399c1:	89 04 24             	mov    %eax,(%esp)
 86399c4:	e8 63 7b 04 00       	call   868152c <_ZN5CUser23SendLoginToPCRoomServerEv>
 86399c9:	b8 01 00 00 00       	mov    $0x1,%eax
 86399ce:	c9                   	leave
 86399cf:	c3                   	ret

```

```c
// Timer_PcRoomAuthRetry::dispatch_sig @ 0x8639924

/* Timer_PcRoomAuthRetry::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_PcRoomAuthRetry::dispatch_sig
          (Timer_PcRoomAuthRetry *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(this_00);
    if ((uVar4 & 0xffff) == param_2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this_00);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this_00);
        if (uVar4 == param_3) {
          cVar1 = CUser::getPcRoomAuth(this_00);
          if (cVar1 != '\x01') {
            CUser::SendLoginToPCRoomServer(this_00);
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## registNextTimer

```asm
// === 086399d0 Timer_PcRoomAuthRetry::registNextTimer  [0x086399d0-0x8639a11] ===
 86399d0:	55                   	push   %ebp
 86399d1:	89 e5                	mov    %esp,%ebp
 86399d3:	83 ec 28             	sub    $0x28,%esp
 86399d6:	e8 a1 ca ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86399db:	8b 55 14             	mov    0x14(%ebp),%edx
 86399de:	89 54 24 18          	mov    %edx,0x18(%esp)
 86399e2:	8b 55 10             	mov    0x10(%ebp),%edx
 86399e5:	89 54 24 14          	mov    %edx,0x14(%esp)
 86399e9:	8b 55 08             	mov    0x8(%ebp),%edx
 86399ec:	89 54 24 10          	mov    %edx,0x10(%esp)
 86399f0:	c7 44 24 0c 92 00 00 	movl   $0x92,0xc(%esp)
 86399f7:	00 
 86399f8:	8b 55 0c             	mov    0xc(%ebp),%edx
 86399fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 86399ff:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8639a06:	00 
 8639a07:	89 04 24             	mov    %eax,(%esp)
 8639a0a:	e8 07 74 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8639a0f:	c9                   	leave
 8639a10:	c3                   	ret
 8639a11:	90                   	nop

```

```c
// Timer_PcRoomAuthRetry::registNextTimer @ 0x86399d0

/* Timer_PcRoomAuthRetry::registNextTimer(long, int, int, unsigned int) */

void Timer_PcRoomAuthRetry::registNextTimer(long param_1,int param_2,int param_3,uint param_4)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x92,param_1,param_3,param_4);
  return;
}

```

