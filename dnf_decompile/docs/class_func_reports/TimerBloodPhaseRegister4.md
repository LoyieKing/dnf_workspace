# TimerBloodPhaseRegister4

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086352d4 TimerBloodPhaseRegister4::dispatch_sig  [0x086352d4-0x8635375] ===
 86352d4:	55                   	push   %ebp
 86352d5:	89 e5                	mov    %esp,%ebp
 86352d7:	83 ec 38             	sub    $0x38,%esp
 86352da:	e8 af 6e a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86352df:	8b 55 0c             	mov    0xc(%ebp),%edx
 86352e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 86352e6:	89 04 24             	mov    %eax,(%esp)
 86352e9:	e8 44 fc c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86352ee:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86352f1:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86352f5:	75 07                	jne    86352fe <_ZN24TimerBloodPhaseRegister412dispatch_sigEiij+0x2a>
 86352f7:	b8 00 00 00 00       	mov    $0x0,%eax
 86352fc:	eb 76                	jmp    8635374 <_ZN24TimerBloodPhaseRegister412dispatch_sigEiij+0xa0>
 86352fe:	8b 45 10             	mov    0x10(%ebp),%eax
 8635301:	89 44 24 08          	mov    %eax,0x8(%esp)
 8635305:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 863530c:	00 
 863530d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635310:	89 04 24             	mov    %eax,(%esp)
 8635313:	e8 8c 5b f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8635318:	83 f0 01             	xor    $0x1,%eax
 863531b:	84 c0                	test   %al,%al
 863531d:	74 07                	je     8635326 <_ZN24TimerBloodPhaseRegister412dispatch_sigEiij+0x52>
 863531f:	b8 00 00 00 00       	mov    $0x0,%eax
 8635324:	eb 4e                	jmp    8635374 <_ZN24TimerBloodPhaseRegister412dispatch_sigEiij+0xa0>
 8635326:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635329:	0f b7 80 a4 0d 00 00 	movzwl 0xda4(%eax),%eax
 8635330:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 8635334:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635337:	05 ba 0d 00 00       	add    $0xdba,%eax
 863533c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863533f:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 8635343:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8635346:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 863534c:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 8635353:	00 
 8635354:	c7 44 24 0c 1b 00 00 	movl   $0x1b,0xc(%esp)
 863535b:	00 
 863535c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863535f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8635363:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635367:	89 0c 24             	mov    %ecx,(%esp)
 863536a:	e8 cb 01 cd ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 863536f:	b8 01 00 00 00       	mov    $0x1,%eax
 8635374:	c9                   	leave
 8635375:	c3                   	ret

```

```c
// TimerBloodPhaseRegister4::dispatch_sig @ 0x86352d4

/* TimerBloodPhaseRegister4::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister4::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1b,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda4),
                 (short *)(pCVar3 + 0xdba),0x1b,4);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

