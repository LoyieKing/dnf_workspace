# TimerSetTradePunishUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08638c48 TimerSetTradePunishUser::dispatch_sig  [0x08638c48-0x8638cb3] ===
 8638c48:	55                   	push   %ebp
 8638c49:	89 e5                	mov    %esp,%ebp
 8638c4b:	83 ec 28             	sub    $0x28,%esp
 8638c4e:	e8 3b 35 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8638c53:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8638c5a:	00 
 8638c5b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8638c5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638c62:	89 04 24             	mov    %eax,(%esp)
 8638c65:	e8 3a bb c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8638c6a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638c6d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8638c71:	75 07                	jne    8638c7a <_ZN23TimerSetTradePunishUser12dispatch_sigEiij+0x32>
 8638c73:	b8 00 00 00 00       	mov    $0x0,%eax
 8638c78:	eb 37                	jmp    8638cb1 <_ZN23TimerSetTradePunishUser12dispatch_sigEiij+0x69>
 8638c7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638c7d:	89 04 24             	mov    %eax,(%esp)
 8638c80:	e8 f7 16 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8638c85:	0f b7 c0             	movzwl %ax,%eax
 8638c88:	3b 45 10             	cmp    0x10(%ebp),%eax
 8638c8b:	0f 95 c0             	setne  %al
 8638c8e:	84 c0                	test   %al,%al
 8638c90:	74 07                	je     8638c99 <_ZN23TimerSetTradePunishUser12dispatch_sigEiij+0x51>
 8638c92:	b8 00 00 00 00       	mov    $0x0,%eax
 8638c97:	eb 18                	jmp    8638cb1 <_ZN23TimerSetTradePunishUser12dispatch_sigEiij+0x69>
 8638c99:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8638ca0:	00 
 8638ca1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638ca4:	89 04 24             	mov    %eax,(%esp)
 8638ca7:	e8 e4 0b 05 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 8638cac:	b8 01 00 00 00       	mov    $0x1,%eax
 8638cb1:	c9                   	leave
 8638cb2:	c3                   	ret
 8638cb3:	90                   	nop

```

```c
// TimerSetTradePunishUser::dispatch_sig @ 0x8638c48

/* TimerSetTradePunishUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSetTradePunishUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  CUser *this;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = G_CGameManager();
  this = (CUser *)CGameManager::getUser(iVar1,param_2);
  if (this == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = CUser::get_unique_id(this);
    if ((uVar3 & 0xffff) == param_3) {
      CUser::SetTradePunishType(this,4);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

