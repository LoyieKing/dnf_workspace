# TimerWarRoomBattlePauseCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634dd6 TimerWarRoomBattlePauseCount::dispatch_sig  [0x08634dd6-0x8634e41] ===
 8634dd6:	55                   	push   %ebp
 8634dd7:	89 e5                	mov    %esp,%ebp
 8634dd9:	83 ec 28             	sub    $0x28,%esp
 8634ddc:	e8 ad 73 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634de1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634de4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634de8:	89 04 24             	mov    %eax,(%esp)
 8634deb:	e8 e0 d7 c6 ff       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 8634df0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634df3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634df7:	75 07                	jne    8634e00 <_ZN28TimerWarRoomBattlePauseCount12dispatch_sigEiij+0x2a>
 8634df9:	b8 00 00 00 00       	mov    $0x0,%eax
 8634dfe:	eb 40                	jmp    8634e40 <_ZN28TimerWarRoomBattlePauseCount12dispatch_sigEiij+0x6a>
 8634e00:	8b 45 10             	mov    0x10(%ebp),%eax
 8634e03:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634e07:	c7 44 24 04 43 00 00 	movl   $0x43,0x4(%esp)
 8634e0e:	00 
 8634e0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634e12:	89 04 24             	mov    %eax,(%esp)
 8634e15:	e8 78 6f 00 00       	call   863bd92 <_ZN7WarRoom13CheckTimerKeyE13TIMER_MESSAGEi>
 8634e1a:	83 f0 01             	xor    $0x1,%eax
 8634e1d:	84 c0                	test   %al,%al
 8634e1f:	74 07                	je     8634e28 <_ZN28TimerWarRoomBattlePauseCount12dispatch_sigEiij+0x52>
 8634e21:	b8 00 00 00 00       	mov    $0x0,%eax
 8634e26:	eb 18                	jmp    8634e40 <_ZN28TimerWarRoomBattlePauseCount12dispatch_sigEiij+0x6a>
 8634e28:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8634e2f:	00 
 8634e30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634e33:	89 04 24             	mov    %eax,(%esp)
 8634e36:	e8 01 67 08 00       	call   86bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>
 8634e3b:	b8 01 00 00 00       	mov    $0x1,%eax
 8634e40:	c9                   	leave
 8634e41:	c3                   	ret

```

```c
// TimerWarRoomBattlePauseCount::dispatch_sig @ 0x8634dd6

/* TimerWarRoomBattlePauseCount::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomBattlePauseCount::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  WarRoom *pWVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  pWVar3 = (WarRoom *)CGameManager::GetWarRoom(iVar2);
  if (pWVar3 == (WarRoom *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = WarRoom::CheckTimerKey(pWVar3,0x43,param_3);
    if (cVar1 == '\x01') {
      WarRoom::ChangeState(pWVar3,3);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

