# TimerBloodPhaseRegister9

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086355fe TimerBloodPhaseRegister9::dispatch_sig  [0x086355fe-0x863569f] ===
 86355fe:	55                   	push   %ebp
 86355ff:	89 e5                	mov    %esp,%ebp
 8635601:	83 ec 38             	sub    $0x38,%esp
 8635604:	e8 85 6b a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8635609:	8b 55 0c             	mov    0xc(%ebp),%edx
 863560c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8635610:	89 04 24             	mov    %eax,(%esp)
 8635613:	e8 1a f9 c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8635618:	89 45 ec             	mov    %eax,-0x14(%ebp)
 863561b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 863561f:	75 07                	jne    8635628 <_ZN24TimerBloodPhaseRegister912dispatch_sigEiij+0x2a>
 8635621:	b8 00 00 00 00       	mov    $0x0,%eax
 8635626:	eb 76                	jmp    863569e <_ZN24TimerBloodPhaseRegister912dispatch_sigEiij+0xa0>
 8635628:	8b 45 10             	mov    0x10(%ebp),%eax
 863562b:	89 44 24 08          	mov    %eax,0x8(%esp)
 863562f:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8635636:	00 
 8635637:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863563a:	89 04 24             	mov    %eax,(%esp)
 863563d:	e8 62 58 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8635642:	83 f0 01             	xor    $0x1,%eax
 8635645:	84 c0                	test   %al,%al
 8635647:	74 07                	je     8635650 <_ZN24TimerBloodPhaseRegister912dispatch_sigEiij+0x52>
 8635649:	b8 00 00 00 00       	mov    $0x0,%eax
 863564e:	eb 4e                	jmp    863569e <_ZN24TimerBloodPhaseRegister912dispatch_sigEiij+0xa0>
 8635650:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635653:	0f b7 80 ae 0d 00 00 	movzwl 0xdae(%eax),%eax
 863565a:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 863565e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635661:	05 c4 0d 00 00       	add    $0xdc4,%eax
 8635666:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8635669:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 863566d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8635670:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 8635676:	c7 44 24 10 09 00 00 	movl   $0x9,0x10(%esp)
 863567d:	00 
 863567e:	c7 44 24 0c 20 00 00 	movl   $0x20,0xc(%esp)
 8635685:	00 
 8635686:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8635689:	89 54 24 08          	mov    %edx,0x8(%esp)
 863568d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635691:	89 0c 24             	mov    %ecx,(%esp)
 8635694:	e8 a1 fe cc ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 8635699:	b8 01 00 00 00       	mov    $0x1,%eax
 863569e:	c9                   	leave
 863569f:	c3                   	ret

```

```c
// TimerBloodPhaseRegister9::dispatch_sig @ 0x86355fe

/* TimerBloodPhaseRegister9::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister9::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x20,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xdae),
                 (short *)(pCVar3 + 0xdc4),0x20,9);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

