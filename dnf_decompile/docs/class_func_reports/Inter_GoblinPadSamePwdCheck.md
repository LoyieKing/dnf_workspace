# Inter_GoblinPadSamePwdCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4388 Inter_GoblinPadSamePwdCheck::dispatch_sig  [0x084e4388-0x84e43bb] ===
 84e4388:	55                   	push   %ebp
 84e4389:	89 e5                	mov    %esp,%ebp
 84e438b:	83 ec 28             	sub    $0x28,%esp
 84e438e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4391:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4394:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e4398:	74 1b                	je     84e43b5 <_ZN27Inter_GoblinPadSamePwdCheck12dispatch_sigEP5CUserPci+0x2d>
 84e439a:	c7 44 24 08 8b 00 00 	movl   $0x8b,0x8(%esp)
 84e43a1:	00 
 84e43a2:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 84e43a9:	00 
 84e43aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e43ad:	89 04 24             	mov    %eax,(%esp)
 84e43b0:	e8 8d 7b 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e43b5:	b8 00 00 00 00       	mov    $0x0,%eax
 84e43ba:	c9                   	leave
 84e43bb:	c3                   	ret

```

```c
// Inter_GoblinPadSamePwdCheck::dispatch_sig @ 0x84e4388

/* Inter_GoblinPadSamePwdCheck::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GoblinPadSamePwdCheck::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x74,0x8b);
  }
  return 0;
}

```

