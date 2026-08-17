# TimerDungeonClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08633108 TimerDungeonClear::dispatch_sig  [0x08633108-0x863316b] ===
 8633108:	55                   	push   %ebp
 8633109:	89 e5                	mov    %esp,%ebp
 863310b:	83 ec 28             	sub    $0x28,%esp
 863310e:	e8 7b 90 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633113:	8b 55 0c             	mov    0xc(%ebp),%edx
 8633116:	89 54 24 04          	mov    %edx,0x4(%esp)
 863311a:	89 04 24             	mov    %eax,(%esp)
 863311d:	e8 10 1e c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8633122:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8633125:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8633129:	75 07                	jne    8633132 <_ZN17TimerDungeonClear12dispatch_sigEiij+0x2a>
 863312b:	b8 00 00 00 00       	mov    $0x0,%eax
 8633130:	eb 38                	jmp    863316a <_ZN17TimerDungeonClear12dispatch_sigEiij+0x62>
 8633132:	8b 45 10             	mov    0x10(%ebp),%eax
 8633135:	89 44 24 08          	mov    %eax,0x8(%esp)
 8633139:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8633140:	00 
 8633141:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8633144:	89 04 24             	mov    %eax,(%esp)
 8633147:	e8 58 7d f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 863314c:	83 f0 01             	xor    $0x1,%eax
 863314f:	84 c0                	test   %al,%al
 8633151:	74 07                	je     863315a <_ZN17TimerDungeonClear12dispatch_sigEiij+0x52>
 8633153:	b8 00 00 00 00       	mov    $0x0,%eax
 8633158:	eb 10                	jmp    863316a <_ZN17TimerDungeonClear12dispatch_sigEiij+0x62>
 863315a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863315d:	89 04 24             	mov    %eax,(%esp)
 8633160:	e8 d1 85 f7 ff       	call   85ab736 <_ZN6CParty13dungeon_clearEv>
 8633165:	b8 01 00 00 00       	mov    $0x1,%eax
 863316a:	c9                   	leave
 863316b:	c3                   	ret

```

```c
// TimerDungeonClear::dispatch_sig @ 0x8633108

/* TimerDungeonClear::dispatch_sig(int, int, unsigned int) */

undefined4 TimerDungeonClear::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0xd,param_3);
    if (cVar1 == '\x01') {
      CParty::dungeon_clear(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

