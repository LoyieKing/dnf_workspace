# TimerDungeonFail

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863316c TimerDungeonFail::dispatch_sig  [0x0863316c-0x86331cf] ===
 863316c:	55                   	push   %ebp
 863316d:	89 e5                	mov    %esp,%ebp
 863316f:	83 ec 28             	sub    $0x28,%esp
 8633172:	e8 17 90 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633177:	8b 55 0c             	mov    0xc(%ebp),%edx
 863317a:	89 54 24 04          	mov    %edx,0x4(%esp)
 863317e:	89 04 24             	mov    %eax,(%esp)
 8633181:	e8 ac 1d c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8633186:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8633189:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863318d:	75 07                	jne    8633196 <_ZN16TimerDungeonFail12dispatch_sigEiij+0x2a>
 863318f:	b8 00 00 00 00       	mov    $0x0,%eax
 8633194:	eb 38                	jmp    86331ce <_ZN16TimerDungeonFail12dispatch_sigEiij+0x62>
 8633196:	8b 45 10             	mov    0x10(%ebp),%eax
 8633199:	89 44 24 08          	mov    %eax,0x8(%esp)
 863319d:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 86331a4:	00 
 86331a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86331a8:	89 04 24             	mov    %eax,(%esp)
 86331ab:	e8 f4 7c f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86331b0:	83 f0 01             	xor    $0x1,%eax
 86331b3:	84 c0                	test   %al,%al
 86331b5:	74 07                	je     86331be <_ZN16TimerDungeonFail12dispatch_sigEiij+0x52>
 86331b7:	b8 00 00 00 00       	mov    $0x0,%eax
 86331bc:	eb 10                	jmp    86331ce <_ZN16TimerDungeonFail12dispatch_sigEiij+0x62>
 86331be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86331c1:	89 04 24             	mov    %eax,(%esp)
 86331c4:	e8 a7 04 f8 ff       	call   85b3670 <_ZN6CParty18party_dungeon_failEv>
 86331c9:	b8 01 00 00 00       	mov    $0x1,%eax
 86331ce:	c9                   	leave
 86331cf:	c3                   	ret

```

```c
// TimerDungeonFail::dispatch_sig @ 0x863316c

/* TimerDungeonFail::dispatch_sig(int, int, unsigned int) */

undefined4 TimerDungeonFail::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0xe,param_3);
    if (cVar1 == '\x01') {
      CParty::party_dungeon_fail(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

