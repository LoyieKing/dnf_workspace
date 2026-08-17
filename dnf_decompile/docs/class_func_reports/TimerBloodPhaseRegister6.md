# TimerBloodPhaseRegister6

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08635418 TimerBloodPhaseRegister6::dispatch_sig  [0x08635418-0x86354b9] ===
 8635418:	55                   	push   %ebp
 8635419:	89 e5                	mov    %esp,%ebp
 863541b:	83 ec 38             	sub    $0x38,%esp
 863541e:	e8 6b 6d a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8635423:	8b 55 0c             	mov    0xc(%ebp),%edx
 8635426:	89 54 24 04          	mov    %edx,0x4(%esp)
 863542a:	89 04 24             	mov    %eax,(%esp)
 863542d:	e8 00 fb c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8635432:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8635435:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8635439:	75 07                	jne    8635442 <_ZN24TimerBloodPhaseRegister612dispatch_sigEiij+0x2a>
 863543b:	b8 00 00 00 00       	mov    $0x0,%eax
 8635440:	eb 76                	jmp    86354b8 <_ZN24TimerBloodPhaseRegister612dispatch_sigEiij+0xa0>
 8635442:	8b 45 10             	mov    0x10(%ebp),%eax
 8635445:	89 44 24 08          	mov    %eax,0x8(%esp)
 8635449:	c7 44 24 04 1d 00 00 	movl   $0x1d,0x4(%esp)
 8635450:	00 
 8635451:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635454:	89 04 24             	mov    %eax,(%esp)
 8635457:	e8 48 5a f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 863545c:	83 f0 01             	xor    $0x1,%eax
 863545f:	84 c0                	test   %al,%al
 8635461:	74 07                	je     863546a <_ZN24TimerBloodPhaseRegister612dispatch_sigEiij+0x52>
 8635463:	b8 00 00 00 00       	mov    $0x0,%eax
 8635468:	eb 4e                	jmp    86354b8 <_ZN24TimerBloodPhaseRegister612dispatch_sigEiij+0xa0>
 863546a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863546d:	0f b7 80 a8 0d 00 00 	movzwl 0xda8(%eax),%eax
 8635474:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 8635478:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863547b:	05 be 0d 00 00       	add    $0xdbe,%eax
 8635480:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8635483:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 8635487:	8b 55 ec             	mov    -0x14(%ebp),%edx
 863548a:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 8635490:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 8635497:	00 
 8635498:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 863549f:	00 
 86354a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86354a3:	89 54 24 08          	mov    %edx,0x8(%esp)
 86354a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86354ab:	89 0c 24             	mov    %ecx,(%esp)
 86354ae:	e8 87 00 cd ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 86354b3:	b8 01 00 00 00       	mov    $0x1,%eax
 86354b8:	c9                   	leave
 86354b9:	c3                   	ret

```

```c
// TimerBloodPhaseRegister6::dispatch_sig @ 0x8635418

/* TimerBloodPhaseRegister6::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister6::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1d,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda8),
                 (short *)(pCVar3 + 0xdbe),0x1d,6);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

