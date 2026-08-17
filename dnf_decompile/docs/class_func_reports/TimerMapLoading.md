# TimerMapLoading

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08633b84 TimerMapLoading::dispatch_sig  [0x08633b84-0x8633be7] ===
 8633b84:	55                   	push   %ebp
 8633b85:	89 e5                	mov    %esp,%ebp
 8633b87:	83 ec 28             	sub    $0x28,%esp
 8633b8a:	e8 ff 85 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633b8f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8633b92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633b96:	89 04 24             	mov    %eax,(%esp)
 8633b99:	e8 94 13 c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8633b9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8633ba1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8633ba5:	75 07                	jne    8633bae <_ZN15TimerMapLoading12dispatch_sigEiij+0x2a>
 8633ba7:	b8 00 00 00 00       	mov    $0x0,%eax
 8633bac:	eb 38                	jmp    8633be6 <_ZN15TimerMapLoading12dispatch_sigEiij+0x62>
 8633bae:	8b 45 10             	mov    0x10(%ebp),%eax
 8633bb1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8633bb5:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 8633bbc:	00 
 8633bbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633bc0:	89 04 24             	mov    %eax,(%esp)
 8633bc3:	e8 dc 72 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8633bc8:	83 f0 01             	xor    $0x1,%eax
 8633bcb:	84 c0                	test   %al,%al
 8633bcd:	74 07                	je     8633bd6 <_ZN15TimerMapLoading12dispatch_sigEiij+0x52>
 8633bcf:	b8 00 00 00 00       	mov    $0x0,%eax
 8633bd4:	eb 10                	jmp    8633be6 <_ZN15TimerMapLoading12dispatch_sigEiij+0x62>
 8633bd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633bd9:	89 04 24             	mov    %eax,(%esp)
 8633bdc:	e8 85 e2 f7 ff       	call   85b1e66 <_ZN6CParty22map_load_forced_finishEv>
 8633be1:	b8 01 00 00 00       	mov    $0x1,%eax
 8633be6:	c9                   	leave
 8633be7:	c3                   	ret

```

```c
// TimerMapLoading::dispatch_sig @ 0x8633b84

/* TimerMapLoading::dispatch_sig(int, int, unsigned int) */

undefined4 TimerMapLoading::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0xb,param_3);
    if (cVar1 == '\x01') {
      CParty::map_load_forced_finish(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

