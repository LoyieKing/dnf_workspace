# TimerBloodPhaseRegister3

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08635232 TimerBloodPhaseRegister3::dispatch_sig  [0x08635232-0x86352d3] ===
 8635232:	55                   	push   %ebp
 8635233:	89 e5                	mov    %esp,%ebp
 8635235:	83 ec 38             	sub    $0x38,%esp
 8635238:	e8 51 6f a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863523d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8635240:	89 54 24 04          	mov    %edx,0x4(%esp)
 8635244:	89 04 24             	mov    %eax,(%esp)
 8635247:	e8 e6 fc c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 863524c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 863524f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8635253:	75 07                	jne    863525c <_ZN24TimerBloodPhaseRegister312dispatch_sigEiij+0x2a>
 8635255:	b8 00 00 00 00       	mov    $0x0,%eax
 863525a:	eb 76                	jmp    86352d2 <_ZN24TimerBloodPhaseRegister312dispatch_sigEiij+0xa0>
 863525c:	8b 45 10             	mov    0x10(%ebp),%eax
 863525f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8635263:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 863526a:	00 
 863526b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863526e:	89 04 24             	mov    %eax,(%esp)
 8635271:	e8 2e 5c f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8635276:	83 f0 01             	xor    $0x1,%eax
 8635279:	84 c0                	test   %al,%al
 863527b:	74 07                	je     8635284 <_ZN24TimerBloodPhaseRegister312dispatch_sigEiij+0x52>
 863527d:	b8 00 00 00 00       	mov    $0x0,%eax
 8635282:	eb 4e                	jmp    86352d2 <_ZN24TimerBloodPhaseRegister312dispatch_sigEiij+0xa0>
 8635284:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635287:	0f b7 80 a2 0d 00 00 	movzwl 0xda2(%eax),%eax
 863528e:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 8635292:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635295:	05 b8 0d 00 00       	add    $0xdb8,%eax
 863529a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863529d:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 86352a1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86352a4:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 86352aa:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 86352b1:	00 
 86352b2:	c7 44 24 0c 1a 00 00 	movl   $0x1a,0xc(%esp)
 86352b9:	00 
 86352ba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86352bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 86352c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86352c5:	89 0c 24             	mov    %ecx,(%esp)
 86352c8:	e8 6d 02 cd ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 86352cd:	b8 01 00 00 00       	mov    $0x1,%eax
 86352d2:	c9                   	leave
 86352d3:	c3                   	ret

```

```c
// TimerBloodPhaseRegister3::dispatch_sig @ 0x8635232

/* TimerBloodPhaseRegister3::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister3::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1a,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda2),
                 (short *)(pCVar3 + 0xdb8),0x1a,3);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

