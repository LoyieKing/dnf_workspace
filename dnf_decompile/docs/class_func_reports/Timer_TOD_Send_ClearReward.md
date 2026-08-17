# Timer_TOD_Send_ClearReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863a89e Timer_TOD_Send_ClearReward::dispatch_sig  [0x0863a89e-0x863a915] ===
 863a89e:	55                   	push   %ebp
 863a89f:	89 e5                	mov    %esp,%ebp
 863a8a1:	83 ec 28             	sub    $0x28,%esp
 863a8a4:	e8 e5 18 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863a8a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 863a8ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 863a8b0:	89 04 24             	mov    %eax,(%esp)
 863a8b3:	e8 7a a6 c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 863a8b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863a8bb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863a8bf:	75 07                	jne    863a8c8 <_ZN26Timer_TOD_Send_ClearReward12dispatch_sigEiij+0x2a>
 863a8c1:	b8 00 00 00 00       	mov    $0x0,%eax
 863a8c6:	eb 4c                	jmp    863a914 <_ZN26Timer_TOD_Send_ClearReward12dispatch_sigEiij+0x76>
 863a8c8:	8b 45 10             	mov    0x10(%ebp),%eax
 863a8cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 863a8cf:	8b 45 14             	mov    0x14(%ebp),%eax
 863a8d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a8d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a8d9:	89 04 24             	mov    %eax,(%esp)
 863a8dc:	e8 c3 05 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 863a8e1:	83 f0 01             	xor    $0x1,%eax
 863a8e4:	84 c0                	test   %al,%al
 863a8e6:	74 07                	je     863a8ef <_ZN26Timer_TOD_Send_ClearReward12dispatch_sigEiij+0x51>
 863a8e8:	b8 00 00 00 00       	mov    $0x0,%eax
 863a8ed:	eb 25                	jmp    863a914 <_ZN26Timer_TOD_Send_ClearReward12dispatch_sigEiij+0x76>
 863a8ef:	8b 45 14             	mov    0x14(%ebp),%eax
 863a8f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a8f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a8f9:	89 04 24             	mov    %eax,(%esp)
 863a8fc:	e8 05 00 f8 ff       	call   85ba906 <_ZN6CParty16OnTODRewardTimerE13TIMER_MESSAGE>
 863a901:	83 f0 01             	xor    $0x1,%eax
 863a904:	84 c0                	test   %al,%al
 863a906:	74 07                	je     863a90f <_ZN26Timer_TOD_Send_ClearReward12dispatch_sigEiij+0x71>
 863a908:	b8 00 00 00 00       	mov    $0x0,%eax
 863a90d:	eb 05                	jmp    863a914 <_ZN26Timer_TOD_Send_ClearReward12dispatch_sigEiij+0x76>
 863a90f:	b8 01 00 00 00       	mov    $0x1,%eax
 863a914:	c9                   	leave
 863a915:	c3                   	ret

```

```c
// Timer_TOD_Send_ClearReward::dispatch_sig @ 0x863a89e

/* Timer_TOD_Send_ClearReward::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_TOD_Send_ClearReward::dispatch_sig
          (Timer_TOD_Send_ClearReward *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
  if (pCVar3 == (CParty *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(pCVar3,param_3,param_2);
    if (cVar1 == '\x01') {
      cVar1 = CParty::OnTODRewardTimer(pCVar3,param_3);
      if (cVar1 == '\x01') {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

