# TimerSetPunishUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08638ba0 TimerSetPunishUser::dispatch_sig  [0x08638ba0-0x8638c47] ===
 8638ba0:	55                   	push   %ebp
 8638ba1:	89 e5                	mov    %esp,%ebp
 8638ba3:	83 ec 28             	sub    $0x28,%esp
 8638ba6:	e8 e3 35 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8638bab:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8638bb2:	00 
 8638bb3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8638bb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638bba:	89 04 24             	mov    %eax,(%esp)
 8638bbd:	e8 e2 bb c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8638bc2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638bc5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8638bc9:	75 07                	jne    8638bd2 <_ZN18TimerSetPunishUser12dispatch_sigEiij+0x32>
 8638bcb:	b8 00 00 00 00       	mov    $0x0,%eax
 8638bd0:	eb 74                	jmp    8638c46 <_ZN18TimerSetPunishUser12dispatch_sigEiij+0xa6>
 8638bd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638bd5:	89 04 24             	mov    %eax,(%esp)
 8638bd8:	e8 9f 17 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8638bdd:	0f b7 c0             	movzwl %ax,%eax
 8638be0:	3b 45 10             	cmp    0x10(%ebp),%eax
 8638be3:	0f 95 c0             	setne  %al
 8638be6:	84 c0                	test   %al,%al
 8638be8:	74 07                	je     8638bf1 <_ZN18TimerSetPunishUser12dispatch_sigEiij+0x51>
 8638bea:	b8 00 00 00 00       	mov    $0x0,%eax
 8638bef:	eb 55                	jmp    8638c46 <_ZN18TimerSetPunishUser12dispatch_sigEiij+0xa6>
 8638bf1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638bf4:	89 04 24             	mov    %eax,(%esp)
 8638bf7:	e8 96 0e e8 ff       	call   84b9a92 <_ZN5CUser15setHackUserFlagEv>
 8638bfc:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 8638c03:	00 
 8638c04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638c07:	89 04 24             	mov    %eax,(%esp)
 8638c0a:	e8 81 0c 05 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 8638c0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638c12:	89 04 24             	mov    %eax,(%esp)
 8638c15:	e8 86 33 00 00       	call   863bfa0 <_ZN5CUser13isARSUserKickEv>
 8638c1a:	84 c0                	test   %al,%al
 8638c1c:	74 23                	je     8638c41 <_ZN18TimerSetPunishUser12dispatch_sigEiij+0xa1>
 8638c1e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8638c25:	00 
 8638c26:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8638c2d:	00 
 8638c2e:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 8638c35:	00 
 8638c36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638c39:	89 04 24             	mov    %eax,(%esp)
 8638c3c:	e8 b3 fd 00 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 8638c41:	b8 01 00 00 00       	mov    $0x1,%eax
 8638c46:	c9                   	leave
 8638c47:	c3                   	ret

```

```c
// TimerSetPunishUser::dispatch_sig @ 0x8638ba0

/* TimerSetPunishUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSetPunishUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = G_CGameManager();
  this = (CUser *)CGameManager::getUser(iVar2,param_2);
  if (this == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(this);
    if ((uVar4 & 0xffff) == param_3) {
      CUser::setHackUserFlag(this);
      CUser::SetTradePunishType(this,0x40);
      cVar1 = CUser::isARSUserKick(this);
      if (cVar1 != '\0') {
        CUser::DisConnSig(this,0x2e,1,0);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

