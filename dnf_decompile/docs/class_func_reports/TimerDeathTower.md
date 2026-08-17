# TimerDeathTower

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086377cc TimerDeathTower::dispatch_sig  [0x086377cc-0x8637815] ===
 86377cc:	55                   	push   %ebp
 86377cd:	89 e5                	mov    %esp,%ebp
 86377cf:	83 ec 28             	sub    $0x28,%esp
 86377d2:	e8 b7 49 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86377d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 86377da:	89 54 24 04          	mov    %edx,0x4(%esp)
 86377de:	89 04 24             	mov    %eax,(%esp)
 86377e1:	e8 d6 df c5 ff       	call   82957bc <_ZN12CGameManager13getDeathTowerEi>
 86377e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86377e9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86377ed:	75 07                	jne    86377f6 <_ZN15TimerDeathTower12dispatch_sigEiij+0x2a>
 86377ef:	b8 00 00 00 00       	mov    $0x0,%eax
 86377f4:	eb 1e                	jmp    8637814 <_ZN15TimerDeathTower12dispatch_sigEiij+0x48>
 86377f6:	8b 45 10             	mov    0x10(%ebp),%eax
 86377f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 86377fd:	8b 45 14             	mov    0x14(%ebp),%eax
 8637800:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637804:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637807:	89 04 24             	mov    %eax,(%esp)
 863780a:	e8 9f b2 e2 ff       	call   8462aae <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj>
 863780f:	b8 01 00 00 00       	mov    $0x1,%eax
 8637814:	c9                   	leave
 8637815:	c3                   	ret

```

```c
// TimerDeathTower::dispatch_sig @ 0x86377cc

/* TimerDeathTower::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerDeathTower::dispatch_sig(TimerDeathTower *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  CDeathTower *pCVar2;
  
  iVar1 = G_CGameManager();
  pCVar2 = (CDeathTower *)CGameManager::getDeathTower(iVar1);
  if (pCVar2 != (CDeathTower *)0x0) {
    WongWork::CDeathTower::onTimer(pCVar2,param_3,param_2);
  }
  return pCVar2 != (CDeathTower *)0x0;
}

```

