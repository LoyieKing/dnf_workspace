# TimerBloodPhaseRegister1

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086350ee TimerBloodPhaseRegister1::dispatch_sig  [0x086350ee-0x863518f] ===
 86350ee:	55                   	push   %ebp
 86350ef:	89 e5                	mov    %esp,%ebp
 86350f1:	83 ec 38             	sub    $0x38,%esp
 86350f4:	e8 95 70 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86350f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86350fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8635100:	89 04 24             	mov    %eax,(%esp)
 8635103:	e8 2a fe c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8635108:	89 45 ec             	mov    %eax,-0x14(%ebp)
 863510b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 863510f:	75 07                	jne    8635118 <_ZN24TimerBloodPhaseRegister112dispatch_sigEiij+0x2a>
 8635111:	b8 00 00 00 00       	mov    $0x0,%eax
 8635116:	eb 76                	jmp    863518e <_ZN24TimerBloodPhaseRegister112dispatch_sigEiij+0xa0>
 8635118:	8b 45 10             	mov    0x10(%ebp),%eax
 863511b:	89 44 24 08          	mov    %eax,0x8(%esp)
 863511f:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 8635126:	00 
 8635127:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863512a:	89 04 24             	mov    %eax,(%esp)
 863512d:	e8 72 5d f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8635132:	83 f0 01             	xor    $0x1,%eax
 8635135:	84 c0                	test   %al,%al
 8635137:	74 07                	je     8635140 <_ZN24TimerBloodPhaseRegister112dispatch_sigEiij+0x52>
 8635139:	b8 00 00 00 00       	mov    $0x0,%eax
 863513e:	eb 4e                	jmp    863518e <_ZN24TimerBloodPhaseRegister112dispatch_sigEiij+0xa0>
 8635140:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635143:	0f b7 80 9e 0d 00 00 	movzwl 0xd9e(%eax),%eax
 863514a:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 863514e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635151:	05 b4 0d 00 00       	add    $0xdb4,%eax
 8635156:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8635159:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 863515d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8635160:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 8635166:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 863516d:	00 
 863516e:	c7 44 24 0c 18 00 00 	movl   $0x18,0xc(%esp)
 8635175:	00 
 8635176:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8635179:	89 54 24 08          	mov    %edx,0x8(%esp)
 863517d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635181:	89 0c 24             	mov    %ecx,(%esp)
 8635184:	e8 b1 03 cd ff       	call   830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>
 8635189:	b8 01 00 00 00       	mov    $0x1,%eax
 863518e:	c9                   	leave
 863518f:	c3                   	ret

```

```c
// TimerBloodPhaseRegister1::dispatch_sig @ 0x86350ee

/* TimerBloodPhaseRegister1::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister1::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x18,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xd9e),
                 (short *)(pCVar3 + 0xdb4),0x18,1);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

