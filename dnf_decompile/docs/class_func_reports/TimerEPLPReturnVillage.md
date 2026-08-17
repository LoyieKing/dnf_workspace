# TimerEPLPReturnVillage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634c06 TimerEPLPReturnVillage::dispatch_sig  [0x08634c06-0x8634c69] ===
 8634c06:	55                   	push   %ebp
 8634c07:	89 e5                	mov    %esp,%ebp
 8634c09:	83 ec 28             	sub    $0x28,%esp
 8634c0c:	e8 7d 75 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634c11:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634c14:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634c18:	89 04 24             	mov    %eax,(%esp)
 8634c1b:	e8 12 03 c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8634c20:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634c23:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634c27:	75 07                	jne    8634c30 <_ZN22TimerEPLPReturnVillage12dispatch_sigEiij+0x2a>
 8634c29:	b8 00 00 00 00       	mov    $0x0,%eax
 8634c2e:	eb 38                	jmp    8634c68 <_ZN22TimerEPLPReturnVillage12dispatch_sigEiij+0x62>
 8634c30:	8b 45 10             	mov    0x10(%ebp),%eax
 8634c33:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634c37:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8634c3e:	00 
 8634c3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634c42:	89 04 24             	mov    %eax,(%esp)
 8634c45:	e8 5a 62 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8634c4a:	83 f0 01             	xor    $0x1,%eax
 8634c4d:	84 c0                	test   %al,%al
 8634c4f:	74 07                	je     8634c58 <_ZN22TimerEPLPReturnVillage12dispatch_sigEiij+0x52>
 8634c51:	b8 00 00 00 00       	mov    $0x0,%eax
 8634c56:	eb 10                	jmp    8634c68 <_ZN22TimerEPLPReturnVillage12dispatch_sigEiij+0x62>
 8634c58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634c5b:	89 04 24             	mov    %eax,(%esp)
 8634c5e:	e8 fd 7d f7 ff       	call   85aca60 <_ZN6CParty15ReturnToVillageEv>
 8634c63:	b8 01 00 00 00       	mov    $0x1,%eax
 8634c68:	c9                   	leave
 8634c69:	c3                   	ret

```

```c
// TimerEPLPReturnVillage::dispatch_sig @ 0x8634c06

/* TimerEPLPReturnVillage::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEPLPReturnVillage::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar2);
  if (this == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this,0x14,param_3);
    if (cVar1 == '\x01') {
      CParty::ReturnToVillage(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

