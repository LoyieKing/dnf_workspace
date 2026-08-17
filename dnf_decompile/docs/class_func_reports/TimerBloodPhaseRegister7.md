# TimerBloodPhaseRegister7

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086354ba TimerBloodPhaseRegister7::dispatch_sig  [0x086354ba-0x863555b] ===
 86354ba:	55                   	push   %ebp
 86354bb:	89 e5                	mov    %esp,%ebp
 86354bd:	83 ec 38             	sub    $0x38,%esp
 86354c0:	e8 c9 6c a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86354c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 86354c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86354cc:	89 04 24             	mov    %eax,(%esp)
 86354cf:	e8 5e fa c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86354d4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86354d7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86354db:	75 07                	jne    86354e4 <_ZN24TimerBloodPhaseRegister712dispatch_sigEiij+0x2a>
 86354dd:	b8 00 00 00 00       	mov    $0x0,%eax
 86354e2:	eb 76                	jmp    863555a <_ZN24TimerBloodPhaseRegister712dispatch_sigEiij+0xa0>
 86354e4:	8b 45 10             	mov    0x10(%ebp),%eax
 86354e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 86354eb:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 86354f2:	00 
 86354f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86354f6:	89 04 24             	mov    %eax,(%esp)
 86354f9:	e8 a6 59 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86354fe:	83 f0 01             	xor    $0x1,%eax
 8635501:	84 c0                	test   %al,%al
 8635503:	74 07                	je     863550c <_ZN24TimerBloodPhaseRegister712dispatch_sigEiij+0x52>
 8635505:	b8 00 00 00 00       	mov    $0x0,%eax
 863550a:	eb 4e                	jmp    863555a <_ZN24TimerBloodPhaseRegister712dispatch_sigEiij+0xa0>
 863550c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863550f:	0f b7 80 aa 0d 00 00 	movzwl 0xdaa(%eax),%eax
 8635516:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 863551a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863551d:	05 c0 0d 00 00       	add    $0xdc0,%eax
 8635522:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8635525:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 8635529:	8b 55 ec             	mov    -0x14(%ebp),%edx
 863552c:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 8635532:	c7 44 24 10 07 00 00 	movl   $0x7,0x10(%esp)
 8635539:	00 
 863553a:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 8635541:	00 
 8635542:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8635545:	89 54 24 08          	mov    %edx,0x8(%esp)
 8635549:	89 44 24 04          	mov    %eax,0x4(%esp)
 863554d:	89 0c 24             	mov    %ecx,(%esp)
 8635550:	e8 e5 ff cc ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 8635555:	b8 01 00 00 00       	mov    $0x1,%eax
 863555a:	c9                   	leave
 863555b:	c3                   	ret

```

```c
// TimerBloodPhaseRegister7::dispatch_sig @ 0x86354ba

/* TimerBloodPhaseRegister7::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister7::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1e,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xdaa),
                 (short *)(pCVar3 + 0xdc0),0x1e,7);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

