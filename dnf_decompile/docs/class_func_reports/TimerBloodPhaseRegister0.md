# TimerBloodPhaseRegister0

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863504c TimerBloodPhaseRegister0::dispatch_sig  [0x0863504c-0x86350ed] ===
 863504c:	55                   	push   %ebp
 863504d:	89 e5                	mov    %esp,%ebp
 863504f:	83 ec 38             	sub    $0x38,%esp
 8635052:	e8 37 71 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8635057:	8b 55 0c             	mov    0xc(%ebp),%edx
 863505a:	89 54 24 04          	mov    %edx,0x4(%esp)
 863505e:	89 04 24             	mov    %eax,(%esp)
 8635061:	e8 cc fe c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8635066:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8635069:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 863506d:	75 07                	jne    8635076 <_ZN24TimerBloodPhaseRegister012dispatch_sigEiij+0x2a>
 863506f:	b8 00 00 00 00       	mov    $0x0,%eax
 8635074:	eb 76                	jmp    86350ec <_ZN24TimerBloodPhaseRegister012dispatch_sigEiij+0xa0>
 8635076:	8b 45 10             	mov    0x10(%ebp),%eax
 8635079:	89 44 24 08          	mov    %eax,0x8(%esp)
 863507d:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 8635084:	00 
 8635085:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635088:	89 04 24             	mov    %eax,(%esp)
 863508b:	e8 14 5e f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8635090:	83 f0 01             	xor    $0x1,%eax
 8635093:	84 c0                	test   %al,%al
 8635095:	74 07                	je     863509e <_ZN24TimerBloodPhaseRegister012dispatch_sigEiij+0x52>
 8635097:	b8 00 00 00 00       	mov    $0x0,%eax
 863509c:	eb 4e                	jmp    86350ec <_ZN24TimerBloodPhaseRegister012dispatch_sigEiij+0xa0>
 863509e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86350a1:	0f b7 80 9c 0d 00 00 	movzwl 0xd9c(%eax),%eax
 86350a8:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 86350ac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86350af:	05 b2 0d 00 00       	add    $0xdb2,%eax
 86350b4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86350b7:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 86350bb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86350be:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 86350c4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86350cb:	00 
 86350cc:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 86350d3:	00 
 86350d4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86350d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86350db:	89 44 24 04          	mov    %eax,0x4(%esp)
 86350df:	89 0c 24             	mov    %ecx,(%esp)
 86350e2:	e8 53 04 cd ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 86350e7:	b8 01 00 00 00       	mov    $0x1,%eax
 86350ec:	c9                   	leave
 86350ed:	c3                   	ret

```

```c
// TimerBloodPhaseRegister0::dispatch_sig @ 0x863504c

/* TimerBloodPhaseRegister0::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister0::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x17,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xd9c),
                 (short *)(pCVar3 + 0xdb2),0x17,0);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

