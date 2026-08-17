# TimerBloodPhaseRegister5

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08635376 TimerBloodPhaseRegister5::dispatch_sig  [0x08635376-0x8635417] ===
 8635376:	55                   	push   %ebp
 8635377:	89 e5                	mov    %esp,%ebp
 8635379:	83 ec 38             	sub    $0x38,%esp
 863537c:	e8 0d 6e a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8635381:	8b 55 0c             	mov    0xc(%ebp),%edx
 8635384:	89 54 24 04          	mov    %edx,0x4(%esp)
 8635388:	89 04 24             	mov    %eax,(%esp)
 863538b:	e8 a2 fb c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8635390:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8635393:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8635397:	75 07                	jne    86353a0 <_ZN24TimerBloodPhaseRegister512dispatch_sigEiij+0x2a>
 8635399:	b8 00 00 00 00       	mov    $0x0,%eax
 863539e:	eb 76                	jmp    8635416 <_ZN24TimerBloodPhaseRegister512dispatch_sigEiij+0xa0>
 86353a0:	8b 45 10             	mov    0x10(%ebp),%eax
 86353a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 86353a7:	c7 44 24 04 1c 00 00 	movl   $0x1c,0x4(%esp)
 86353ae:	00 
 86353af:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86353b2:	89 04 24             	mov    %eax,(%esp)
 86353b5:	e8 ea 5a f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86353ba:	83 f0 01             	xor    $0x1,%eax
 86353bd:	84 c0                	test   %al,%al
 86353bf:	74 07                	je     86353c8 <_ZN24TimerBloodPhaseRegister512dispatch_sigEiij+0x52>
 86353c1:	b8 00 00 00 00       	mov    $0x0,%eax
 86353c6:	eb 4e                	jmp    8635416 <_ZN24TimerBloodPhaseRegister512dispatch_sigEiij+0xa0>
 86353c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86353cb:	0f b7 80 a6 0d 00 00 	movzwl 0xda6(%eax),%eax
 86353d2:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 86353d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86353d9:	05 bc 0d 00 00       	add    $0xdbc,%eax
 86353de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86353e1:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 86353e5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86353e8:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 86353ee:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 86353f5:	00 
 86353f6:	c7 44 24 0c 1c 00 00 	movl   $0x1c,0xc(%esp)
 86353fd:	00 
 86353fe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8635401:	89 54 24 08          	mov    %edx,0x8(%esp)
 8635405:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635409:	89 0c 24             	mov    %ecx,(%esp)
 863540c:	e8 29 01 cd ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 8635411:	b8 01 00 00 00       	mov    $0x1,%eax
 8635416:	c9                   	leave
 8635417:	c3                   	ret

```

```c
// TimerBloodPhaseRegister5::dispatch_sig @ 0x8635376

/* TimerBloodPhaseRegister5::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister5::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1c,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda6),
                 (short *)(pCVar3 + 0xdbc),0x1c,5);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

