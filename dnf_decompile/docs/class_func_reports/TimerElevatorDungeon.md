# TimerElevatorDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086381f2 TimerElevatorDungeon::dispatch_sig  [0x086381f2-0x863825b] ===
 86381f2:	55                   	push   %ebp
 86381f3:	89 e5                	mov    %esp,%ebp
 86381f5:	83 ec 28             	sub    $0x28,%esp
 86381f8:	e8 91 3f a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86381fd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8638200:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638204:	89 04 24             	mov    %eax,(%esp)
 8638207:	e8 26 cd c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 863820c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863820f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8638213:	75 07                	jne    863821c <_ZN20TimerElevatorDungeon12dispatch_sigEiij+0x2a>
 8638215:	b8 00 00 00 00       	mov    $0x0,%eax
 863821a:	eb 3d                	jmp    8638259 <_ZN20TimerElevatorDungeon12dispatch_sigEiij+0x67>
 863821c:	8b 45 10             	mov    0x10(%ebp),%eax
 863821f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8638223:	c7 44 24 04 28 00 00 	movl   $0x28,0x4(%esp)
 863822a:	00 
 863822b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863822e:	89 04 24             	mov    %eax,(%esp)
 8638231:	e8 6e 2c f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8638236:	83 f0 01             	xor    $0x1,%eax
 8638239:	84 c0                	test   %al,%al
 863823b:	74 07                	je     8638244 <_ZN20TimerElevatorDungeon12dispatch_sigEiij+0x52>
 863823d:	b8 00 00 00 00       	mov    $0x0,%eax
 8638242:	eb 15                	jmp    8638259 <_ZN20TimerElevatorDungeon12dispatch_sigEiij+0x67>
 8638244:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638247:	05 24 0b 00 00       	add    $0xb24,%eax
 863824c:	89 04 24             	mov    %eax,(%esp)
 863824f:	e8 ae 56 cd ff       	call   830d902 <_ZN13CBattle_Field20check_elevator_timerEv>
 8638254:	b8 01 00 00 00       	mov    $0x1,%eax
 8638259:	c9                   	leave
 863825a:	c3                   	ret
 863825b:	90                   	nop

```

```c
// TimerElevatorDungeon::dispatch_sig @ 0x86381f2

/* TimerElevatorDungeon::dispatch_sig(int, int, unsigned int) */

undefined4 TimerElevatorDungeon::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x28,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::check_elevator_timer((CBattle_Field *)(pCVar3 + 0xb24));
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

