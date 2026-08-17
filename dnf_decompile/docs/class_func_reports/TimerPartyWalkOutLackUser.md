# TimerPartyWalkOutLackUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08633e14 TimerPartyWalkOutLackUser::dispatch_sig  [0x08633e14-0x8633e85] ===
 8633e14:	55                   	push   %ebp
 8633e15:	89 e5                	mov    %esp,%ebp
 8633e17:	83 ec 28             	sub    $0x28,%esp
 8633e1a:	e8 6f 83 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633e1f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8633e22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633e26:	89 04 24             	mov    %eax,(%esp)
 8633e29:	e8 04 11 c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8633e2e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8633e31:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8633e35:	75 07                	jne    8633e3e <_ZN25TimerPartyWalkOutLackUser12dispatch_sigEiij+0x2a>
 8633e37:	b8 00 00 00 00       	mov    $0x0,%eax
 8633e3c:	eb 46                	jmp    8633e84 <_ZN25TimerPartyWalkOutLackUser12dispatch_sigEiij+0x70>
 8633e3e:	8b 45 10             	mov    0x10(%ebp),%eax
 8633e41:	89 44 24 08          	mov    %eax,0x8(%esp)
 8633e45:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 8633e4c:	00 
 8633e4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633e50:	89 04 24             	mov    %eax,(%esp)
 8633e53:	e8 4c 70 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8633e58:	83 f0 01             	xor    $0x1,%eax
 8633e5b:	84 c0                	test   %al,%al
 8633e5d:	74 07                	je     8633e66 <_ZN25TimerPartyWalkOutLackUser12dispatch_sigEiij+0x52>
 8633e5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8633e64:	eb 1e                	jmp    8633e84 <_ZN25TimerPartyWalkOutLackUser12dispatch_sigEiij+0x70>
 8633e66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633e69:	89 04 24             	mov    %eax,(%esp)
 8633e6c:	e8 a1 ff f7 ff       	call   85b3e12 <_ZN6CParty22OnTimerWalkOutLackUserEv>
 8633e71:	83 f0 01             	xor    $0x1,%eax
 8633e74:	84 c0                	test   %al,%al
 8633e76:	74 07                	je     8633e7f <_ZN25TimerPartyWalkOutLackUser12dispatch_sigEiij+0x6b>
 8633e78:	b8 00 00 00 00       	mov    $0x0,%eax
 8633e7d:	eb 05                	jmp    8633e84 <_ZN25TimerPartyWalkOutLackUser12dispatch_sigEiij+0x70>
 8633e7f:	b8 01 00 00 00       	mov    $0x1,%eax
 8633e84:	c9                   	leave
 8633e85:	c3                   	ret

```

```c
// TimerPartyWalkOutLackUser::dispatch_sig @ 0x8633e14

/* TimerPartyWalkOutLackUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerPartyWalkOutLackUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar2);
  if (this == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this,0xf,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::OnTimerWalkOutLackUser(this);
      if (cVar1 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

