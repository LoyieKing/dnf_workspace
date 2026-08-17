# TimerBloodSmallRoundRegister

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634fd2 TimerBloodSmallRoundRegister::dispatch_sig  [0x08634fd2-0x863504b] ===
 8634fd2:	55                   	push   %ebp
 8634fd3:	89 e5                	mov    %esp,%ebp
 8634fd5:	83 ec 28             	sub    $0x28,%esp
 8634fd8:	e8 b1 71 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634fdd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634fe0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634fe4:	89 04 24             	mov    %eax,(%esp)
 8634fe7:	e8 46 ff c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8634fec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634fef:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634ff3:	75 07                	jne    8634ffc <_ZN28TimerBloodSmallRoundRegister12dispatch_sigEiij+0x2a>
 8634ff5:	b8 00 00 00 00       	mov    $0x0,%eax
 8634ffa:	eb 4d                	jmp    8635049 <_ZN28TimerBloodSmallRoundRegister12dispatch_sigEiij+0x77>
 8634ffc:	8b 45 10             	mov    0x10(%ebp),%eax
 8634fff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8635003:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 863500a:	00 
 863500b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863500e:	89 04 24             	mov    %eax,(%esp)
 8635011:	e8 8e 5e f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8635016:	83 f0 01             	xor    $0x1,%eax
 8635019:	84 c0                	test   %al,%al
 863501b:	74 07                	je     8635024 <_ZN28TimerBloodSmallRoundRegister12dispatch_sigEiij+0x52>
 863501d:	b8 00 00 00 00       	mov    $0x0,%eax
 8635022:	eb 25                	jmp    8635049 <_ZN28TimerBloodSmallRoundRegister12dispatch_sigEiij+0x77>
 8635024:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8635027:	05 24 0b 00 00       	add    $0xb24,%eax
 863502c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8635033:	00 
 8635034:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863503b:	00 
 863503c:	89 04 24             	mov    %eax,(%esp)
 863503f:	e8 8e fd cc ff       	call   8304dd2 <_ZN13CBattle_Field22BloodSpawnTimerManagerEbb>
 8635044:	b8 01 00 00 00       	mov    $0x1,%eax
 8635049:	c9                   	leave
 863504a:	c3                   	ret
 863504b:	90                   	nop

```

```c
// TimerBloodSmallRoundRegister::dispatch_sig @ 0x8634fd2

/* TimerBloodSmallRoundRegister::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodSmallRoundRegister::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x16,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodSpawnTimerManager((CBattle_Field *)(pCVar3 + 0xb24),false,true);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

