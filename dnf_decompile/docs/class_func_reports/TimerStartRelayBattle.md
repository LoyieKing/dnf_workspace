# TimerStartRelayBattle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863640c TimerStartRelayBattle::dispatch_sig  [0x0863640c-0x863647d] ===
 863640c:	55                   	push   %ebp
 863640d:	89 e5                	mov    %esp,%ebp
 863640f:	83 ec 28             	sub    $0x28,%esp
 8636412:	e8 77 5d a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8636417:	c7 44 24 0c 63 00 00 	movl   $0x63,0xc(%esp)
 863641e:	00 
 863641f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8636426:	00 
 8636427:	8b 55 0c             	mov    0xc(%ebp),%edx
 863642a:	89 54 24 04          	mov    %edx,0x4(%esp)
 863642e:	89 04 24             	mov    %eax,(%esp)
 8636431:	e8 d0 ed c5 ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 8636436:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8636439:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863643d:	75 07                	jne    8636446 <_ZN21TimerStartRelayBattle12dispatch_sigEiij+0x3a>
 863643f:	b8 00 00 00 00       	mov    $0x0,%eax
 8636444:	eb 36                	jmp    863647c <_ZN21TimerStartRelayBattle12dispatch_sigEiij+0x70>
 8636446:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8636449:	05 20 06 00 00       	add    $0x620,%eax
 863644e:	89 04 24             	mov    %eax,(%esp)
 8636451:	e8 52 58 00 00       	call   863bca8 <_ZN15CRelayBattleMgr11GetTimerKeyEv>
 8636456:	3b 45 10             	cmp    0x10(%ebp),%eax
 8636459:	0f 95 c0             	setne  %al
 863645c:	84 c0                	test   %al,%al
 863645e:	74 07                	je     8636467 <_ZN21TimerStartRelayBattle12dispatch_sigEiij+0x5b>
 8636460:	b8 00 00 00 00       	mov    $0x0,%eax
 8636465:	eb 15                	jmp    863647c <_ZN21TimerStartRelayBattle12dispatch_sigEiij+0x70>
 8636467:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863646a:	05 20 06 00 00       	add    $0x620,%eax
 863646f:	89 04 24             	mov    %eax,(%esp)
 8636472:	e8 e1 7e fa ff       	call   85de358 <_ZN15CRelayBattleMgr7OnFightEv>
 8636477:	b8 01 00 00 00       	mov    $0x1,%eax
 863647c:	c9                   	leave
 863647d:	c3                   	ret

```

```c
// TimerStartRelayBattle::dispatch_sig @ 0x863640c

/* TimerStartRelayBattle::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStartRelayBattle::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  this = (CGameManager *)G_CGameManager();
  iVar1 = CGameManager::GetPvp(this,param_2,(CUser *)0x0,99);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = CRelayBattleMgr::GetTimerKey((CRelayBattleMgr *)(iVar1 + 0x620));
    if (uVar3 == param_3) {
      CRelayBattleMgr::OnFight((CRelayBattleMgr *)(iVar1 + 0x620));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

