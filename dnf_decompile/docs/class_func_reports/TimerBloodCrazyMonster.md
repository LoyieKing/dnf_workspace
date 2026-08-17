# TimerBloodCrazyMonster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086356a0 TimerBloodCrazyMonster::dispatch_sig  [0x086356a0-0x8635709] ===
 86356a0:	55                   	push   %ebp
 86356a1:	89 e5                	mov    %esp,%ebp
 86356a3:	83 ec 28             	sub    $0x28,%esp
 86356a6:	e8 e3 6a a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86356ab:	8b 55 0c             	mov    0xc(%ebp),%edx
 86356ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 86356b2:	89 04 24             	mov    %eax,(%esp)
 86356b5:	e8 78 f8 c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86356ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86356bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86356c1:	75 07                	jne    86356ca <_ZN22TimerBloodCrazyMonster12dispatch_sigEiij+0x2a>
 86356c3:	b8 00 00 00 00       	mov    $0x0,%eax
 86356c8:	eb 3d                	jmp    8635707 <_ZN22TimerBloodCrazyMonster12dispatch_sigEiij+0x67>
 86356ca:	8b 45 10             	mov    0x10(%ebp),%eax
 86356cd:	89 44 24 08          	mov    %eax,0x8(%esp)
 86356d1:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 86356d8:	00 
 86356d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86356dc:	89 04 24             	mov    %eax,(%esp)
 86356df:	e8 c0 57 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86356e4:	83 f0 01             	xor    $0x1,%eax
 86356e7:	84 c0                	test   %al,%al
 86356e9:	74 07                	je     86356f2 <_ZN22TimerBloodCrazyMonster12dispatch_sigEiij+0x52>
 86356eb:	b8 00 00 00 00       	mov    $0x0,%eax
 86356f0:	eb 15                	jmp    8635707 <_ZN22TimerBloodCrazyMonster12dispatch_sigEiij+0x67>
 86356f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86356f5:	05 24 0b 00 00       	add    $0xb24,%eax
 86356fa:	89 04 24             	mov    %eax,(%esp)
 86356fd:	e8 0a 06 cd ff       	call   8305d0c <_ZN13CBattle_Field28BloodCrazyMonsterSpawnPacketEv>
 8635702:	b8 01 00 00 00       	mov    $0x1,%eax
 8635707:	c9                   	leave
 8635708:	c3                   	ret
 8635709:	90                   	nop

```

```c
// TimerBloodCrazyMonster::dispatch_sig @ 0x86356a0

/* TimerBloodCrazyMonster::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodCrazyMonster::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x21,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodCrazyMonsterSpawnPacket((CBattle_Field *)(pCVar3 + 0xb24));
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

