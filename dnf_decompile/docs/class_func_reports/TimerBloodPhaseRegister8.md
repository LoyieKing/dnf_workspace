# TimerBloodPhaseRegister8

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863555c TimerBloodPhaseRegister8::dispatch_sig  [0x0863555c-0x86355fd] ===
 863555c:	55                   	push   %ebp
 863555d:	89 e5                	mov    %esp,%ebp
 863555f:	83 ec 38             	sub    $0x38,%esp
 8635562:	e8 27 6c a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8635567:	8b 55 0c             	mov    0xc(%ebp),%edx
 863556a:	89 54 24 04          	mov    %edx,0x4(%esp)
 863556e:	89 04 24             	mov    %eax,(%esp)
 8635571:	e8 bc f9 c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8635576:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8635579:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 863557d:	75 07                	jne    8635586 <_ZN24TimerBloodPhaseRegister812dispatch_sigEiij+0x2a>
 863557f:	b8 00 00 00 00       	mov    $0x0,%eax
 8635584:	eb 76                	jmp    86355fc <_ZN24TimerBloodPhaseRegister812dispatch_sigEiij+0xa0>
 8635586:	8b 45 10             	mov    0x10(%ebp),%eax
 8635589:	89 44 24 08          	mov    %eax,0x8(%esp)
 863558d:	c7 44 24 04 1f 00 00 	movl   $0x1f,0x4(%esp)
 8635594:	00 
 8635595:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635598:	89 04 24             	mov    %eax,(%esp)
 863559b:	e8 04 59 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86355a0:	83 f0 01             	xor    $0x1,%eax
 86355a3:	84 c0                	test   %al,%al
 86355a5:	74 07                	je     86355ae <_ZN24TimerBloodPhaseRegister812dispatch_sigEiij+0x52>
 86355a7:	b8 00 00 00 00       	mov    $0x0,%eax
 86355ac:	eb 4e                	jmp    86355fc <_ZN24TimerBloodPhaseRegister812dispatch_sigEiij+0xa0>
 86355ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86355b1:	0f b7 80 ac 0d 00 00 	movzwl 0xdac(%eax),%eax
 86355b8:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 86355bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86355bf:	05 c2 0d 00 00       	add    $0xdc2,%eax
 86355c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86355c7:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 86355cb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86355ce:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 86355d4:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 86355db:	00 
 86355dc:	c7 44 24 0c 1f 00 00 	movl   $0x1f,0xc(%esp)
 86355e3:	00 
 86355e4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86355e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86355eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86355ef:	89 0c 24             	mov    %ecx,(%esp)
 86355f2:	e8 43 ff cc ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 86355f7:	b8 01 00 00 00       	mov    $0x1,%eax
 86355fc:	c9                   	leave
 86355fd:	c3                   	ret

```

```c
// TimerBloodPhaseRegister8::dispatch_sig @ 0x863555c

/* TimerBloodPhaseRegister8::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister8::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1f,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xdac),
                 (short *)(pCVar3 + 0xdc2),0x1f,8);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

