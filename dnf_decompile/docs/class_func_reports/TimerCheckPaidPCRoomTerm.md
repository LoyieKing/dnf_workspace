# TimerCheckPaidPCRoomTerm

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634b60 TimerCheckPaidPCRoomTerm::dispatch_sig  [0x08634b60-0x8634c05] ===
 8634b60:	55                   	push   %ebp
 8634b61:	89 e5                	mov    %esp,%ebp
 8634b63:	83 ec 28             	sub    $0x28,%esp
 8634b66:	e8 23 76 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634b6b:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 8634b72:	00 
 8634b73:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634b76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634b7a:	89 04 24             	mov    %eax,(%esp)
 8634b7d:	e8 22 fc c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8634b82:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634b85:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634b89:	75 07                	jne    8634b92 <_ZN24TimerCheckPaidPCRoomTerm12dispatch_sigEiij+0x32>
 8634b8b:	b8 00 00 00 00       	mov    $0x0,%eax
 8634b90:	eb 71                	jmp    8634c03 <_ZN24TimerCheckPaidPCRoomTerm12dispatch_sigEiij+0xa3>
 8634b92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634b95:	89 04 24             	mov    %eax,(%esp)
 8634b98:	e8 d1 57 aa ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8634b9d:	3b 45 14             	cmp    0x14(%ebp),%eax
 8634ba0:	0f 95 c0             	setne  %al
 8634ba3:	84 c0                	test   %al,%al
 8634ba5:	74 07                	je     8634bae <_ZN24TimerCheckPaidPCRoomTerm12dispatch_sigEiij+0x4e>
 8634ba7:	b8 00 00 00 00       	mov    $0x0,%eax
 8634bac:	eb 55                	jmp    8634c03 <_ZN24TimerCheckPaidPCRoomTerm12dispatch_sigEiij+0xa3>
 8634bae:	8b 45 10             	mov    0x10(%ebp),%eax
 8634bb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8634bb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634bb8:	89 04 24             	mov    %eax,(%esp)
 8634bbb:	e8 4e 14 ab ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 8634bc0:	83 f0 01             	xor    $0x1,%eax
 8634bc3:	84 c0                	test   %al,%al
 8634bc5:	74 21                	je     8634be8 <_ZN24TimerCheckPaidPCRoomTerm12dispatch_sigEiij+0x88>
 8634bc7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8634bce:	00 
 8634bcf:	8b 45 10             	mov    0x10(%ebp),%eax
 8634bd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8634bd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634bd9:	89 04 24             	mov    %eax,(%esp)
 8634bdc:	e8 d3 ac 07 00       	call   86af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>
 8634be1:	b8 00 00 00 00       	mov    $0x0,%eax
 8634be6:	eb 1b                	jmp    8634c03 <_ZN24TimerCheckPaidPCRoomTerm12dispatch_sigEiij+0xa3>
 8634be8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634beb:	89 04 24             	mov    %eax,(%esp)
 8634bee:	e8 19 cb 04 00       	call   868170c <_ZN5CUser24SendLogoutToPCRoomServerEv>
 8634bf3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634bf6:	89 04 24             	mov    %eax,(%esp)
 8634bf9:	e8 2e c9 04 00       	call   868152c <_ZN5CUser23SendLoginToPCRoomServerEv>
 8634bfe:	b8 01 00 00 00       	mov    $0x1,%eax
 8634c03:	c9                   	leave
 8634c04:	c3                   	ret
 8634c05:	90                   	nop

```

```c
// TimerCheckPaidPCRoomTerm::dispatch_sig @ 0x8634b60

/* TimerCheckPaidPCRoomTerm::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerCheckPaidPCRoomTerm::dispatch_sig
          (TimerCheckPaidPCRoomTerm *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  uVar4 = 6;
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar3 = CUser::get_acc_id(this_00);
    if (uVar3 == param_3) {
      cVar1 = CUser::isAffectedPremium(this_00,param_2,uVar4);
      if (cVar1 == '\x01') {
        CUser::SendLogoutToPCRoomServer(this_00);
        CUser::SendLoginToPCRoomServer(this_00);
        uVar4 = 1;
      }
      else {
        WongWork::CHandlePremium::handleNotifyPremiumInfo(this_00,param_2,0);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

