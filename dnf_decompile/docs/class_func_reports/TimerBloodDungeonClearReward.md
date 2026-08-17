# TimerBloodDungeonClearReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08638cb4 TimerBloodDungeonClearReward::dispatch_sig  [0x08638cb4-0x8638d2b] ===
 8638cb4:	55                   	push   %ebp
 8638cb5:	89 e5                	mov    %esp,%ebp
 8638cb7:	83 ec 28             	sub    $0x28,%esp
 8638cba:	e8 cf 34 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8638cbf:	8b 55 0c             	mov    0xc(%ebp),%edx
 8638cc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638cc6:	89 04 24             	mov    %eax,(%esp)
 8638cc9:	e8 64 c2 c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8638cce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638cd1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8638cd5:	75 07                	jne    8638cde <_ZN28TimerBloodDungeonClearReward12dispatch_sigEiij+0x2a>
 8638cd7:	b8 00 00 00 00       	mov    $0x0,%eax
 8638cdc:	eb 4c                	jmp    8638d2a <_ZN28TimerBloodDungeonClearReward12dispatch_sigEiij+0x76>
 8638cde:	8b 45 10             	mov    0x10(%ebp),%eax
 8638ce1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8638ce5:	8b 45 14             	mov    0x14(%ebp),%eax
 8638ce8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638cec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638cef:	89 04 24             	mov    %eax,(%esp)
 8638cf2:	e8 ad 21 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8638cf7:	83 f0 01             	xor    $0x1,%eax
 8638cfa:	84 c0                	test   %al,%al
 8638cfc:	74 07                	je     8638d05 <_ZN28TimerBloodDungeonClearReward12dispatch_sigEiij+0x51>
 8638cfe:	b8 00 00 00 00       	mov    $0x0,%eax
 8638d03:	eb 25                	jmp    8638d2a <_ZN28TimerBloodDungeonClearReward12dispatch_sigEiij+0x76>
 8638d05:	8b 45 14             	mov    0x14(%ebp),%eax
 8638d08:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638d0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638d0f:	89 04 24             	mov    %eax,(%esp)
 8638d12:	e8 31 dd f7 ff       	call   85b6a48 <_ZN6CParty18onBloodRewardTimerE13TIMER_MESSAGE>
 8638d17:	83 f0 01             	xor    $0x1,%eax
 8638d1a:	84 c0                	test   %al,%al
 8638d1c:	74 07                	je     8638d25 <_ZN28TimerBloodDungeonClearReward12dispatch_sigEiij+0x71>
 8638d1e:	b8 00 00 00 00       	mov    $0x0,%eax
 8638d23:	eb 05                	jmp    8638d2a <_ZN28TimerBloodDungeonClearReward12dispatch_sigEiij+0x76>
 8638d25:	b8 01 00 00 00       	mov    $0x1,%eax
 8638d2a:	c9                   	leave
 8638d2b:	c3                   	ret

```

```c
// TimerBloodDungeonClearReward::dispatch_sig @ 0x8638cb4

/* TimerBloodDungeonClearReward::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerBloodDungeonClearReward::dispatch_sig
          (TimerBloodDungeonClearReward *this,int param_1,int param_2,uint param_3)

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
      cVar1 = CParty::onBloodRewardTimer(pCVar3,param_3);
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

