# TimerBloodPhaseRegister2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08635190 TimerBloodPhaseRegister2::dispatch_sig  [0x08635190-0x8635231] ===
 8635190:	55                   	push   %ebp
 8635191:	89 e5                	mov    %esp,%ebp
 8635193:	83 ec 38             	sub    $0x38,%esp
 8635196:	e8 f3 6f a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863519b:	8b 55 0c             	mov    0xc(%ebp),%edx
 863519e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86351a2:	89 04 24             	mov    %eax,(%esp)
 86351a5:	e8 88 fd c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86351aa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86351ad:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86351b1:	75 07                	jne    86351ba <_ZN24TimerBloodPhaseRegister212dispatch_sigEiij+0x2a>
 86351b3:	b8 00 00 00 00       	mov    $0x0,%eax
 86351b8:	eb 76                	jmp    8635230 <_ZN24TimerBloodPhaseRegister212dispatch_sigEiij+0xa0>
 86351ba:	8b 45 10             	mov    0x10(%ebp),%eax
 86351bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 86351c1:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 86351c8:	00 
 86351c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86351cc:	89 04 24             	mov    %eax,(%esp)
 86351cf:	e8 d0 5c f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86351d4:	83 f0 01             	xor    $0x1,%eax
 86351d7:	84 c0                	test   %al,%al
 86351d9:	74 07                	je     86351e2 <_ZN24TimerBloodPhaseRegister212dispatch_sigEiij+0x52>
 86351db:	b8 00 00 00 00       	mov    $0x0,%eax
 86351e0:	eb 4e                	jmp    8635230 <_ZN24TimerBloodPhaseRegister212dispatch_sigEiij+0xa0>
 86351e2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86351e5:	0f b7 80 a0 0d 00 00 	movzwl 0xda0(%eax),%eax
 86351ec:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 86351f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86351f3:	05 b6 0d 00 00       	add    $0xdb6,%eax
 86351f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86351fb:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 86351ff:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8635202:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 8635208:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 863520f:	00 
 8635210:	c7 44 24 0c 19 00 00 	movl   $0x19,0xc(%esp)
 8635217:	00 
 8635218:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863521b:	89 54 24 08          	mov    %edx,0x8(%esp)
 863521f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635223:	89 0c 24             	mov    %ecx,(%esp)
 8635226:	e8 0f 03 cd ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 863522b:	b8 01 00 00 00       	mov    $0x1,%eax
 8635230:	c9                   	leave
 8635231:	c3                   	ret

```

```c
// TimerBloodPhaseRegister2::dispatch_sig @ 0x8635190

/* TimerBloodPhaseRegister2::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister2::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x19,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda0),
                 (short *)(pCVar3 + 0xdb6),0x19,2);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

