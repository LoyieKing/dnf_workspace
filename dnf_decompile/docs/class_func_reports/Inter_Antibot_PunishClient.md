# Inter_Antibot_PunishClient

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4774 Inter_Antibot_PunishClient::dispatch_sig  [0x084e4774-0x84e48c1] ===
 84e4774:	55                   	push   %ebp
 84e4775:	89 e5                	mov    %esp,%ebp
 84e4777:	56                   	push   %esi
 84e4778:	53                   	push   %ebx
 84e4779:	83 ec 40             	sub    $0x40,%esp
 84e477c:	8b 45 10             	mov    0x10(%ebp),%eax
 84e477f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e4782:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e4785:	8b 00                	mov    (%eax),%eax
 84e4787:	89 04 24             	mov    %eax,(%esp)
 84e478a:	e8 40 72 fd ff       	call   84bb9cf <_Z7getUserj>
 84e478f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4792:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e4795:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84e4799:	0f b6 f0             	movzbl %al,%esi
 84e479c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e479f:	8b 00                	mov    (%eax),%eax
 84e47a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e47a8:	00 
 84e47a9:	89 04 24             	mov    %eax,(%esp)
 84e47ac:	e8 9a 48 c2 ff       	call   810904b <_Z14NumberToStringji>
 84e47b1:	89 c3                	mov    %eax,%ebx
 84e47b3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e47ba:	00 
 84e47bb:	c7 44 24 08 b3 5e 00 	movl   $0x5eb3,0x8(%esp)
 84e47c2:	00 
 84e47c3:	c7 44 24 04 a0 b7 c8 	movl   $0x8c8b7a0,0x4(%esp)
 84e47ca:	08 
 84e47cb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e47ce:	89 04 24             	mov    %eax,(%esp)
 84e47d1:	e8 42 af 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e47d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e47d9:	89 44 24 10          	mov    %eax,0x10(%esp)
 84e47dd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e47e1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e47e5:	c7 44 24 04 64 a0 c8 	movl   $0x8c8a064,0x4(%esp)
 84e47ec:	08 
 84e47ed:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e47f0:	89 04 24             	mov    %eax,(%esp)
 84e47f3:	e8 90 af 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e47f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e47fb:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84e47ff:	0f b6 c0             	movzbl %al,%eax
 84e4802:	83 f8 02             	cmp    $0x2,%eax
 84e4805:	74 0d                	je     84e4814 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0xa0>
 84e4807:	83 f8 03             	cmp    $0x3,%eax
 84e480a:	74 52                	je     84e485e <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0xea>
 84e480c:	83 f8 01             	cmp    $0x1,%eax
 84e480f:	e9 a2 00 00 00       	jmp    84e48b6 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x142>
 84e4814:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e4818:	74 0f                	je     84e4829 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0xb5>
 84e481a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e481d:	89 04 24             	mov    %eax,(%esp)
 84e4820:	e8 67 5b bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e4825:	85 c0                	test   %eax,%eax
 84e4827:	75 07                	jne    84e4830 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0xbc>
 84e4829:	b8 01 00 00 00       	mov    $0x1,%eax
 84e482e:	eb 05                	jmp    84e4835 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0xc1>
 84e4830:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4835:	84 c0                	test   %al,%al
 84e4837:	75 79                	jne    84e48b2 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x13e>
 84e4839:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e4840:	00 
 84e4841:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84e4848:	00 
 84e4849:	c7 44 24 04 23 00 00 	movl   $0x23,0x4(%esp)
 84e4850:	00 
 84e4851:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4854:	89 04 24             	mov    %eax,(%esp)
 84e4857:	e8 98 41 16 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84e485c:	eb 58                	jmp    84e48b6 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x142>
 84e485e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e4862:	74 0f                	je     84e4873 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0xff>
 84e4864:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4867:	89 04 24             	mov    %eax,(%esp)
 84e486a:	e8 1d 5b bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e486f:	85 c0                	test   %eax,%eax
 84e4871:	75 07                	jne    84e487a <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x106>
 84e4873:	b8 01 00 00 00       	mov    $0x1,%eax
 84e4878:	eb 05                	jmp    84e487f <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x10b>
 84e487a:	b8 00 00 00 00       	mov    $0x0,%eax
 84e487f:	84 c0                	test   %al,%al
 84e4881:	75 32                	jne    84e48b5 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x141>
 84e4883:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e4886:	8b 40 0c             	mov    0xc(%eax),%eax
 84e4889:	85 c0                	test   %eax,%eax
 84e488b:	7e 29                	jle    84e48b6 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x142>
 84e488d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e4894:	00 
 84e4895:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84e489c:	00 
 84e489d:	c7 44 24 04 23 00 00 	movl   $0x23,0x4(%esp)
 84e48a4:	00 
 84e48a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e48a8:	89 04 24             	mov    %eax,(%esp)
 84e48ab:	e8 44 41 16 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84e48b0:	eb 04                	jmp    84e48b6 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x142>
 84e48b2:	90                   	nop
 84e48b3:	eb 01                	jmp    84e48b6 <_ZN26Inter_Antibot_PunishClient12dispatch_sigEP5CUserPci+0x142>
 84e48b5:	90                   	nop
 84e48b6:	b8 00 00 00 00       	mov    $0x0,%eax
 84e48bb:	83 c4 40             	add    $0x40,%esp
 84e48be:	5b                   	pop    %ebx
 84e48bf:	5e                   	pop    %esi
 84e48c0:	5d                   	pop    %ebp
 84e48c1:	c3                   	ret

```

```c
// Inter_Antibot_PunishClient::dispatch_sig @ 0x84e4774

/* Inter_Antibot_PunishClient::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Antibot_PunishClient::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  cMyTrace local_24 [16];
  uint *local_14;
  CUser *local_10;
  
  local_14 = (uint *)param_3;
  local_10 = (CUser *)getUser(*(uint *)param_3);
  uVar2 = local_14[1];
  uVar3 = NumberToString(*local_14,0);
  cMyTrace::cMyTrace(local_24,
                     "virtual int Inter_Antibot_PunishClient::dispatch_sig(CUser*, char*, int)",
                     0x5eb3,0);
  cMyTrace::operator()
            (local_24,"requested uid(%s), punish_mode(%d), user(%x)",uVar3,(uint)(byte)uVar2,
             local_10);
  if ((char)local_14[1] == '\x02') {
    if ((local_10 == (CUser *)0x0) || (iVar4 = CUser::get_state(local_10), iVar4 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      CUser::DisConnSig(local_10,0x23,1,0);
    }
  }
  else if ((char)local_14[1] == '\x03') {
    if ((local_10 == (CUser *)0x0) || (iVar4 = CUser::get_state(local_10), iVar4 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) && (0 < (int)local_14[3])) {
      CUser::DisConnSig(local_10,0x23,1,0);
    }
  }
  return 0;
}

```

