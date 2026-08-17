# TimerBossDieTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863647e TimerBossDieTimeout::dispatch_sig  [0x0863647e-0x86364c3] ===
 863647e:	55                   	push   %ebp
 863647f:	89 e5                	mov    %esp,%ebp
 8636481:	83 ec 28             	sub    $0x28,%esp
 8636484:	e8 05 5d a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8636489:	8b 55 0c             	mov    0xc(%ebp),%edx
 863648c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8636490:	89 04 24             	mov    %eax,(%esp)
 8636493:	e8 9a ea c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8636498:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863649b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863649f:	75 07                	jne    86364a8 <_ZN19TimerBossDieTimeout12dispatch_sigEiij+0x2a>
 86364a1:	b8 00 00 00 00       	mov    $0x0,%eax
 86364a6:	eb 19                	jmp    86364c1 <_ZN19TimerBossDieTimeout12dispatch_sigEiij+0x43>
 86364a8:	8b 45 14             	mov    0x14(%ebp),%eax
 86364ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 86364af:	8b 45 10             	mov    0x10(%ebp),%eax
 86364b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86364b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86364b9:	89 04 24             	mov    %eax,(%esp)
 86364bc:	e8 13 41 f7 ff       	call   85aa5d4 <_ZN6CParty16OnTimeoutBossDieEij>
 86364c1:	c9                   	leave
 86364c2:	c3                   	ret
 86364c3:	90                   	nop

```

```c
// TimerBossDieTimeout::dispatch_sig @ 0x863647e

/* TimerBossDieTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerBossDieTimeout::dispatch_sig(TimerBossDieTimeout *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  CParty *this_00;
  undefined4 uVar2;
  
  iVar1 = G_CGameManager();
  this_00 = (CParty *)CGameManager::GetParty(iVar1);
  if (this_00 == (CParty *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CParty::OnTimeoutBossDie(this_00,param_2,param_3);
  }
  return uVar2;
}

```

