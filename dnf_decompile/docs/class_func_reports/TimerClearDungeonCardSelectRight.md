# TimerClearDungeonCardSelectRight

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086347c6 TimerClearDungeonCardSelectRight::dispatch_sig  [0x086347c6-0x8634859] ===
 86347c6:	55                   	push   %ebp
 86347c7:	89 e5                	mov    %esp,%ebp
 86347c9:	83 ec 28             	sub    $0x28,%esp
 86347cc:	e8 bd 79 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86347d1:	8b 55 0c             	mov    0xc(%ebp),%edx
 86347d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86347d8:	89 04 24             	mov    %eax,(%esp)
 86347db:	e8 52 07 c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86347e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86347e3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86347e7:	75 07                	jne    86347f0 <_ZN32TimerClearDungeonCardSelectRight12dispatch_sigEiij+0x2a>
 86347e9:	b8 00 00 00 00       	mov    $0x0,%eax
 86347ee:	eb 67                	jmp    8634857 <_ZN32TimerClearDungeonCardSelectRight12dispatch_sigEiij+0x91>
 86347f0:	8b 45 10             	mov    0x10(%ebp),%eax
 86347f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 86347f7:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 86347fe:	00 
 86347ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634802:	89 04 24             	mov    %eax,(%esp)
 8634805:	e8 9a 66 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 863480a:	83 f0 01             	xor    $0x1,%eax
 863480d:	84 c0                	test   %al,%al
 863480f:	74 07                	je     8634818 <_ZN32TimerClearDungeonCardSelectRight12dispatch_sigEiij+0x52>
 8634811:	b8 00 00 00 00       	mov    $0x0,%eax
 8634816:	eb 3f                	jmp    8634857 <_ZN32TimerClearDungeonCardSelectRight12dispatch_sigEiij+0x91>
 8634818:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863481b:	89 04 24             	mov    %eax,(%esp)
 863481e:	e8 79 90 bf ff       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 8634823:	3c 04                	cmp    $0x4,%al
 8634825:	0f 94 c0             	sete   %al
 8634828:	84 c0                	test   %al,%al
 863482a:	74 26                	je     8634852 <_ZN32TimerClearDungeonCardSelectRight12dispatch_sigEiij+0x8c>
 863482c:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8634833:	00 
 8634834:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634837:	89 04 24             	mov    %eax,(%esp)
 863483a:	e8 6d 90 bf ff       	call   822d8ac <_ZN6CParty23set_dungeon_clear_stateEc>
 863483f:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8634846:	00 
 8634847:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863484a:	89 04 24             	mov    %eax,(%esp)
 863484d:	e8 ba d8 f7 ff       	call   85b210c <_ZN6CParty29insert_time_dungeon_clear_msgEi>
 8634852:	b8 01 00 00 00       	mov    $0x1,%eax
 8634857:	c9                   	leave
 8634858:	c3                   	ret
 8634859:	90                   	nop

```

```c
// TimerClearDungeonCardSelectRight::dispatch_sig @ 0x86347c6

/* TimerClearDungeonCardSelectRight::dispatch_sig(int, int, unsigned int) */

undefined4 TimerClearDungeonCardSelectRight::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0x13,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::get_dungeon_clear_state(this);
      if (cVar1 == '\x04') {
        CParty::set_dungeon_clear_state(this,'\x05');
        CParty::insert_time_dungeon_clear_msg(this,5);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

