# Timer_RoutingItemWait

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086398a8 Timer_RoutingItemWait::dispatch_sig  [0x086398a8-0x8639923] ===
 86398a8:	55                   	push   %ebp
 86398a9:	89 e5                	mov    %esp,%ebp
 86398ab:	83 ec 28             	sub    $0x28,%esp
 86398ae:	e8 db 28 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86398b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 86398b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86398ba:	89 04 24             	mov    %eax,(%esp)
 86398bd:	e8 70 b6 c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86398c2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86398c5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86398c9:	75 07                	jne    86398d2 <_ZN21Timer_RoutingItemWait12dispatch_sigEiij+0x2a>
 86398cb:	b8 00 00 00 00       	mov    $0x0,%eax
 86398d0:	eb 4f                	jmp    8639921 <_ZN21Timer_RoutingItemWait12dispatch_sigEiij+0x79>
 86398d2:	8b 45 10             	mov    0x10(%ebp),%eax
 86398d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 86398d9:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 86398e0:	00 
 86398e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86398e4:	89 04 24             	mov    %eax,(%esp)
 86398e7:	e8 b8 15 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86398ec:	83 f0 01             	xor    $0x1,%eax
 86398ef:	84 c0                	test   %al,%al
 86398f1:	74 07                	je     86398fa <_ZN21Timer_RoutingItemWait12dispatch_sigEiij+0x52>
 86398f3:	b8 00 00 00 00       	mov    $0x0,%eax
 86398f8:	eb 27                	jmp    8639921 <_ZN21Timer_RoutingItemWait12dispatch_sigEiij+0x79>
 86398fa:	e8 8f 28 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86398ff:	89 04 24             	mov    %eax,(%esp)
 8639902:	e8 bd f6 c5 ff       	call   8298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>
 8639907:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863990a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863990d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639911:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8639914:	89 04 24             	mov    %eax,(%esp)
 8639917:	e8 c2 12 fd ff       	call   860abde <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty>
 863991c:	b8 01 00 00 00       	mov    $0x1,%eax
 8639921:	c9                   	leave
 8639922:	c3                   	ret
 8639923:	90                   	nop

```

```c
// Timer_RoutingItemWait::dispatch_sig @ 0x86398a8

/* Timer_RoutingItemWait::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_RoutingItemWait::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  undefined4 uVar4;
  CGameManager *this;
  CSpecialItemRoutingManager *this_00;
  
  iVar2 = G_CGameManager();
  pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
  if (pCVar3 == (CParty *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(pCVar3,0x2b,param_3);
    if (cVar1 == '\x01') {
      this = (CGameManager *)G_CGameManager();
      this_00 = (CSpecialItemRoutingManager *)CGameManager::GetSpecialItemRoutingManager(this);
      CSpecialItemRoutingManager::ProcessTimeOut(this_00,pCVar3);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

