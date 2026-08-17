# TimerSetResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08633c58 TimerSetResult::dispatch_sig  [0x08633c58-0x8633cbb] ===
 8633c58:	55                   	push   %ebp
 8633c59:	89 e5                	mov    %esp,%ebp
 8633c5b:	83 ec 28             	sub    $0x28,%esp
 8633c5e:	e8 2b 85 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633c63:	8b 55 0c             	mov    0xc(%ebp),%edx
 8633c66:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633c6a:	89 04 24             	mov    %eax,(%esp)
 8633c6d:	e8 c0 12 c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8633c72:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8633c75:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8633c79:	75 07                	jne    8633c82 <_ZN14TimerSetResult12dispatch_sigEiij+0x2a>
 8633c7b:	b8 00 00 00 00       	mov    $0x0,%eax
 8633c80:	eb 38                	jmp    8633cba <_ZN14TimerSetResult12dispatch_sigEiij+0x62>
 8633c82:	8b 45 10             	mov    0x10(%ebp),%eax
 8633c85:	89 44 24 08          	mov    %eax,0x8(%esp)
 8633c89:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8633c90:	00 
 8633c91:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633c94:	89 04 24             	mov    %eax,(%esp)
 8633c97:	e8 08 72 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8633c9c:	83 f0 01             	xor    $0x1,%eax
 8633c9f:	84 c0                	test   %al,%al
 8633ca1:	74 07                	je     8633caa <_ZN14TimerSetResult12dispatch_sigEiij+0x52>
 8633ca3:	b8 00 00 00 00       	mov    $0x0,%eax
 8633ca8:	eb 10                	jmp    8633cba <_ZN14TimerSetResult12dispatch_sigEiij+0x62>
 8633caa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633cad:	89 04 24             	mov    %eax,(%esp)
 8633cb0:	e8 33 ea f7 ff       	call   85b26e8 <_ZN6CParty22forced_set_play_resultEv>
 8633cb5:	b8 01 00 00 00       	mov    $0x1,%eax
 8633cba:	c9                   	leave
 8633cbb:	c3                   	ret

```

```c
// TimerSetResult::dispatch_sig @ 0x8633c58

/* TimerSetResult::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSetResult::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0xc,param_3);
    if (cVar1 == '\x01') {
      CParty::forced_set_play_result(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

