# Inter_AddGuildFundResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e34ba Inter_AddGuildFundResult::dispatch_sig  [0x084e34ba-0x84e3589] ===
 84e34ba:	55                   	push   %ebp
 84e34bb:	89 e5                	mov    %esp,%ebp
 84e34bd:	53                   	push   %ebx
 84e34be:	83 ec 34             	sub    $0x34,%esp
 84e34c1:	8b 45 10             	mov    0x10(%ebp),%eax
 84e34c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e34c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e34ca:	89 04 24             	mov    %eax,(%esp)
 84e34cd:	e8 ba 6e bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e34d2:	83 f8 02             	cmp    $0x2,%eax
 84e34d5:	0f 9e c0             	setle  %al
 84e34d8:	84 c0                	test   %al,%al
 84e34da:	74 0a                	je     84e34e6 <_ZN24Inter_AddGuildFundResult12dispatch_sigEP5CUserPci+0x2c>
 84e34dc:	b8 00 00 00 00       	mov    $0x0,%eax
 84e34e1:	e9 9e 00 00 00       	jmp    84e3584 <_ZN24Inter_AddGuildFundResult12dispatch_sigEP5CUserPci+0xca>
 84e34e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e34e9:	8b 58 0b             	mov    0xb(%eax),%ebx
 84e34ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e34ef:	89 04 24             	mov    %eax,(%esp)
 84e34f2:	e8 57 87 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e34f7:	39 c3                	cmp    %eax,%ebx
 84e34f9:	0f 95 c0             	setne  %al
 84e34fc:	84 c0                	test   %al,%al
 84e34fe:	74 07                	je     84e3507 <_ZN24Inter_AddGuildFundResult12dispatch_sigEP5CUserPci+0x4d>
 84e3500:	b8 00 00 00 00       	mov    $0x0,%eax
 84e3505:	eb 7d                	jmp    84e3584 <_ZN24Inter_AddGuildFundResult12dispatch_sigEP5CUserPci+0xca>
 84e3507:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e350a:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84e350e:	84 c0                	test   %al,%al
 84e3510:	74 5a                	je     84e356c <_ZN24Inter_AddGuildFundResult12dispatch_sigEP5CUserPci+0xb2>
 84e3512:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3515:	8b 40 13             	mov    0x13(%eax),%eax
 84e3518:	89 c3                	mov    %eax,%ebx
 84e351a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e351d:	89 04 24             	mov    %eax,(%esp)
 84e3520:	e8 69 6d bf ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84e3525:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84e352c:	00 
 84e352d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84e3534:	00 
 84e3535:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 84e353c:	00 
 84e353d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e3541:	89 04 24             	mov    %eax,(%esp)
 84e3544:	e8 53 bd 01 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 84e3549:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e354c:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84e3550:	0f b6 c0             	movzbl %al,%eax
 84e3553:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3557:	c7 44 24 04 5b 01 00 	movl   $0x15b,0x4(%esp)
 84e355e:	00 
 84e355f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3562:	89 04 24             	mov    %eax,(%esp)
 84e3565:	e8 d8 89 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e356a:	eb 13                	jmp    84e357f <_ZN24Inter_AddGuildFundResult12dispatch_sigEP5CUserPci+0xc5>
 84e356c:	c7 44 24 04 5b 01 00 	movl   $0x15b,0x4(%esp)
 84e3573:	00 
 84e3574:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3577:	89 04 24             	mov    %eax,(%esp)
 84e357a:	e8 21 89 19 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 84e357f:	b8 00 00 00 00       	mov    $0x0,%eax
 84e3584:	83 c4 34             	add    $0x34,%esp
 84e3587:	5b                   	pop    %ebx
 84e3588:	5d                   	pop    %ebp
 84e3589:	c3                   	ret

```

```c
// Inter_AddGuildFundResult::dispatch_sig @ 0x84e34ba

/* Inter_AddGuildFundResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AddGuildFundResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar2) &&
     (iVar2 = *(int *)(param_3 + 0xb),
     iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar2 == iVar3)) {
    if (*(char *)(param_3 + 10) == '\0') {
      CUser::SendCmdOkPacket((CUser *)param_2,0x15b);
    }
    else {
      uVar1 = *(undefined4 *)(param_3 + 0x13);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      CInventory::gain_money(pCVar4,uVar1,0x1d,1,0);
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,*(undefined1 *)(param_3 + 10));
    }
  }
  return 0;
}

```

