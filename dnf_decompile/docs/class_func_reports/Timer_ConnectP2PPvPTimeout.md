# Timer_ConnectP2PPvPTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08639834 Timer_ConnectP2PPvPTimeout::dispatch_sig  [0x08639834-0x86398a7] ===
 8639834:	55                   	push   %ebp
 8639835:	89 e5                	mov    %esp,%ebp
 8639837:	83 ec 28             	sub    $0x28,%esp
 863983a:	e8 4f 29 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863983f:	c7 44 24 0c 3b 00 00 	movl   $0x3b,0xc(%esp)
 8639846:	00 
 8639847:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863984e:	00 
 863984f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8639852:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639856:	89 04 24             	mov    %eax,(%esp)
 8639859:	e8 a8 b9 c5 ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 863985e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8639861:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8639865:	75 07                	jne    863986e <_ZN26Timer_ConnectP2PPvPTimeout12dispatch_sigEiij+0x3a>
 8639867:	b8 00 00 00 00       	mov    $0x0,%eax
 863986c:	eb 38                	jmp    86398a6 <_ZN26Timer_ConnectP2PPvPTimeout12dispatch_sigEiij+0x72>
 863986e:	8b 45 10             	mov    0x10(%ebp),%eax
 8639871:	89 44 24 08          	mov    %eax,0x8(%esp)
 8639875:	c7 44 24 04 3b 00 00 	movl   $0x3b,0x4(%esp)
 863987c:	00 
 863987d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8639880:	89 04 24             	mov    %eax,(%esp)
 8639883:	e8 44 24 00 00       	call   863bccc <_ZN8PvP_Room13CheckTimerKeyE13TIMER_MESSAGEi>
 8639888:	83 f0 01             	xor    $0x1,%eax
 863988b:	84 c0                	test   %al,%al
 863988d:	74 07                	je     8639896 <_ZN26Timer_ConnectP2PPvPTimeout12dispatch_sigEiij+0x62>
 863988f:	b8 00 00 00 00       	mov    $0x0,%eax
 8639894:	eb 10                	jmp    86398a6 <_ZN26Timer_ConnectP2PPvPTimeout12dispatch_sigEiij+0x72>
 8639896:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8639899:	89 04 24             	mov    %eax,(%esp)
 863989c:	e8 55 46 fa ff       	call   85ddef6 <_ZN8PvP_Room22OnConnectP2PPvPTimeoutEv>
 86398a1:	b8 01 00 00 00       	mov    $0x1,%eax
 86398a6:	c9                   	leave
 86398a7:	c3                   	ret

```

```c
// Timer_ConnectP2PPvPTimeout::dispatch_sig @ 0x8639834

/* Timer_ConnectP2PPvPTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_ConnectP2PPvPTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CGameManager *this;
  PvP_Room *this_00;
  undefined4 uVar2;
  
  this = (CGameManager *)G_CGameManager();
  this_00 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x3b);
  if (this_00 == (PvP_Room *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = PvP_Room::CheckTimerKey(this_00,0x3b,param_3);
    if (cVar1 == '\x01') {
      PvP_Room::OnConnectP2PPvPTimeout(this_00);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

