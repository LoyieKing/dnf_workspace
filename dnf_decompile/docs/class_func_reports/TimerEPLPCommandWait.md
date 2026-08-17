# TimerEPLPCommandWait

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634c6a TimerEPLPCommandWait::dispatch_sig  [0x08634c6a-0x8634cfd] ===
 8634c6a:	55                   	push   %ebp
 8634c6b:	89 e5                	mov    %esp,%ebp
 8634c6d:	83 ec 28             	sub    $0x28,%esp
 8634c70:	e8 19 75 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634c75:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634c78:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634c7c:	89 04 24             	mov    %eax,(%esp)
 8634c7f:	e8 ae 02 c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8634c84:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634c87:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634c8b:	75 07                	jne    8634c94 <_ZN20TimerEPLPCommandWait12dispatch_sigEiij+0x2a>
 8634c8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8634c92:	eb 67                	jmp    8634cfb <_ZN20TimerEPLPCommandWait12dispatch_sigEiij+0x91>
 8634c94:	8b 45 10             	mov    0x10(%ebp),%eax
 8634c97:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634c9b:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8634ca2:	00 
 8634ca3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634ca6:	89 04 24             	mov    %eax,(%esp)
 8634ca9:	e8 f6 61 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8634cae:	83 f0 01             	xor    $0x1,%eax
 8634cb1:	84 c0                	test   %al,%al
 8634cb3:	74 07                	je     8634cbc <_ZN20TimerEPLPCommandWait12dispatch_sigEiij+0x52>
 8634cb5:	b8 00 00 00 00       	mov    $0x0,%eax
 8634cba:	eb 3f                	jmp    8634cfb <_ZN20TimerEPLPCommandWait12dispatch_sigEiij+0x91>
 8634cbc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634cbf:	89 04 24             	mov    %eax,(%esp)
 8634cc2:	e8 13 4d e3 ff       	call   84699da <_ZN6CParty18GetSelectedEPLPCmdEv>
 8634cc7:	3c 03                	cmp    $0x3,%al
 8634cc9:	0f 94 c0             	sete   %al
 8634ccc:	84 c0                	test   %al,%al
 8634cce:	74 07                	je     8634cd7 <_ZN20TimerEPLPCommandWait12dispatch_sigEiij+0x6d>
 8634cd0:	b8 00 00 00 00       	mov    $0x0,%eax
 8634cd5:	eb 24                	jmp    8634cfb <_ZN20TimerEPLPCommandWait12dispatch_sigEiij+0x91>
 8634cd7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634cda:	89 04 24             	mov    %eax,(%esp)
 8634cdd:	e8 3a 0b b1 ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 8634ce2:	3c 02                	cmp    $0x2,%al
 8634ce4:	0f 94 c0             	sete   %al
 8634ce7:	84 c0                	test   %al,%al
 8634ce9:	74 0b                	je     8634cf6 <_ZN20TimerEPLPCommandWait12dispatch_sigEiij+0x8c>
 8634ceb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634cee:	89 04 24             	mov    %eax,(%esp)
 8634cf1:	e8 6a 7d f7 ff       	call   85aca60 <_ZN6CParty15ReturnToVillageEv>
 8634cf6:	b8 01 00 00 00       	mov    $0x1,%eax
 8634cfb:	c9                   	leave
 8634cfc:	c3                   	ret
 8634cfd:	90                   	nop

```

```c
// TimerEPLPCommandWait::dispatch_sig @ 0x8634c6a

/* TimerEPLPCommandWait::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEPLPCommandWait::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(this,0x15,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::GetSelectedEPLPCmd(this);
      if (cVar1 == '\x03') {
        uVar3 = 0;
      }
      else {
        cVar1 = CParty::GetEPLPState(this);
        if (cVar1 == '\x02') {
          CParty::ReturnToVillage(this);
        }
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

