# TimerSetPlayResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08636398 TimerSetPlayResult::dispatch_sig  [0x08636398-0x863640b] ===
 8636398:	55                   	push   %ebp
 8636399:	89 e5                	mov    %esp,%ebp
 863639b:	83 ec 28             	sub    $0x28,%esp
 863639e:	e8 eb 5d a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86363a3:	8b 55 0c             	mov    0xc(%ebp),%edx
 86363a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86363aa:	89 04 24             	mov    %eax,(%esp)
 86363ad:	e8 80 eb c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86363b2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86363b5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86363b9:	75 07                	jne    86363c2 <_ZN18TimerSetPlayResult12dispatch_sigEiij+0x2a>
 86363bb:	b8 00 00 00 00       	mov    $0x0,%eax
 86363c0:	eb 47                	jmp    8636409 <_ZN18TimerSetPlayResult12dispatch_sigEiij+0x71>
 86363c2:	8b 45 10             	mov    0x10(%ebp),%eax
 86363c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 86363c9:	c7 44 24 04 29 00 00 	movl   $0x29,0x4(%esp)
 86363d0:	00 
 86363d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86363d4:	89 04 24             	mov    %eax,(%esp)
 86363d7:	e8 c8 4a f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86363dc:	83 f0 01             	xor    $0x1,%eax
 86363df:	84 c0                	test   %al,%al
 86363e1:	74 07                	je     86363ea <_ZN18TimerSetPlayResult12dispatch_sigEiij+0x52>
 86363e3:	b8 00 00 00 00       	mov    $0x0,%eax
 86363e8:	eb 1f                	jmp    8636409 <_ZN18TimerSetPlayResult12dispatch_sigEiij+0x71>
 86363ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86363ed:	89 04 24             	mov    %eax,(%esp)
 86363f0:	e8 8b f3 b0 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 86363f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86363f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86363fc:	89 04 24             	mov    %eax,(%esp)
 86363ff:	e8 0e c0 f7 ff       	call   85b2412 <_ZN6CParty13SetPlayResultEP5CUser>
 8636404:	b8 01 00 00 00       	mov    $0x1,%eax
 8636409:	c9                   	leave
 863640a:	c3                   	ret
 863640b:	90                   	nop

```

```c
// TimerSetPlayResult::dispatch_sig @ 0x8636398

/* TimerSetPlayResult::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSetPlayResult::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this;
  undefined4 uVar3;
  CUser *pCVar4;
  
  iVar2 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar2);
  if (this == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this,0x29,param_3);
    if (cVar1 == '\x01') {
      pCVar4 = (CUser *)CParty::getManager(this);
      CParty::SetPlayResult(this,pCVar4);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

