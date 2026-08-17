# TimerCardSelect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086343ba TimerCardSelect::dispatch_sig  [0x086343ba-0x863449b] ===
 86343ba:	55                   	push   %ebp
 86343bb:	89 e5                	mov    %esp,%ebp
 86343bd:	83 ec 28             	sub    $0x28,%esp
 86343c0:	e8 c9 7d a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86343c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 86343c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86343cc:	89 04 24             	mov    %eax,(%esp)
 86343cf:	e8 5e 0b c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86343d4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86343d7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86343db:	75 0a                	jne    86343e7 <_ZN15TimerCardSelect12dispatch_sigEiij+0x2d>
 86343dd:	b8 00 00 00 00       	mov    $0x0,%eax
 86343e2:	e9 b3 00 00 00       	jmp    863449a <_ZN15TimerCardSelect12dispatch_sigEiij+0xe0>
 86343e7:	8b 45 10             	mov    0x10(%ebp),%eax
 86343ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 86343ee:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 86343f5:	00 
 86343f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86343f9:	89 04 24             	mov    %eax,(%esp)
 86343fc:	e8 a3 6a f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8634401:	83 f0 01             	xor    $0x1,%eax
 8634404:	84 c0                	test   %al,%al
 8634406:	74 0a                	je     8634412 <_ZN15TimerCardSelect12dispatch_sigEiij+0x58>
 8634408:	b8 00 00 00 00       	mov    $0x0,%eax
 863440d:	e9 88 00 00 00       	jmp    863449a <_ZN15TimerCardSelect12dispatch_sigEiij+0xe0>
 8634412:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634415:	89 04 24             	mov    %eax,(%esp)
 8634418:	e8 7f 94 bf ff       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 863441d:	84 c0                	test   %al,%al
 863441f:	74 0f                	je     8634430 <_ZN15TimerCardSelect12dispatch_sigEiij+0x76>
 8634421:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634424:	89 04 24             	mov    %eax,(%esp)
 8634427:	e8 70 94 bf ff       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 863442c:	3c 05                	cmp    $0x5,%al
 863442e:	75 07                	jne    8634437 <_ZN15TimerCardSelect12dispatch_sigEiij+0x7d>
 8634430:	b8 01 00 00 00       	mov    $0x1,%eax
 8634435:	eb 05                	jmp    863443c <_ZN15TimerCardSelect12dispatch_sigEiij+0x82>
 8634437:	b8 00 00 00 00       	mov    $0x0,%eax
 863443c:	84 c0                	test   %al,%al
 863443e:	74 07                	je     8634447 <_ZN15TimerCardSelect12dispatch_sigEiij+0x8d>
 8634440:	b8 01 00 00 00       	mov    $0x1,%eax
 8634445:	eb 53                	jmp    863449a <_ZN15TimerCardSelect12dispatch_sigEiij+0xe0>
 8634447:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863444e:	00 
 863444f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634452:	89 04 24             	mov    %eax,(%esp)
 8634455:	e8 42 04 f8 ff       	call   85b489c <_ZN6CParty29IsCompleteCardSelectOfMembersE22eClearRewardCardType_t>
 863445a:	83 f0 01             	xor    $0x1,%eax
 863445d:	84 c0                	test   %al,%al
 863445f:	74 16                	je     8634477 <_ZN15TimerCardSelect12dispatch_sigEiij+0xbd>
 8634461:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634464:	89 04 24             	mov    %eax,(%esp)
 8634467:	e8 1a 03 f8 ff       	call   85b4786 <_ZN6CParty18CompleteCardSelectEv>
 863446c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863446f:	89 04 24             	mov    %eax,(%esp)
 8634472:	e8 5f 00 f8 ff       	call   85b44d6 <_ZN6CParty16SendEachCardInfoEv>
 8634477:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 863447e:	00 
 863447f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634482:	89 04 24             	mov    %eax,(%esp)
 8634485:	e8 22 94 bf ff       	call   822d8ac <_ZN6CParty23set_dungeon_clear_stateEc>
 863448a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863448d:	89 04 24             	mov    %eax,(%esp)
 8634490:	e8 a1 72 f7 ff       	call   85ab736 <_ZN6CParty13dungeon_clearEv>
 8634495:	b8 01 00 00 00       	mov    $0x1,%eax
 863449a:	c9                   	leave
 863449b:	c3                   	ret

```

```c
// TimerCardSelect::dispatch_sig @ 0x86343ba

/* TimerCardSelect::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCardSelect::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CParty *this;
  
  iVar3 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar3);
  if (this == (CParty *)0x0) {
    return 0;
  }
  cVar2 = CParty::check_timer_key(this,0x10,param_3);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = CParty::get_dungeon_clear_state(this);
  if ((cVar2 == '\0') || (cVar2 = CParty::get_dungeon_clear_state(this), cVar2 == '\x05')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar2 = CParty::IsCompleteCardSelectOfMembers(this,0);
    if (cVar2 != '\x01') {
      CParty::CompleteCardSelect(this);
      CParty::SendEachCardInfo(this);
    }
    CParty::set_dungeon_clear_state(this,'\x05');
    CParty::dungeon_clear(this);
  }
  return 1;
}

```

