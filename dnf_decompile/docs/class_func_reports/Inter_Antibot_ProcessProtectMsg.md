# Inter_Antibot_ProcessProtectMsg

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e48c2 Inter_Antibot_ProcessProtectMsg::dispatch_sig  [0x084e48c2-0x84e4b01] ===
 84e48c2:	55                   	push   %ebp
 84e48c3:	89 e5                	mov    %esp,%ebp
 84e48c5:	57                   	push   %edi
 84e48c6:	56                   	push   %esi
 84e48c7:	53                   	push   %ebx
 84e48c8:	83 ec 6c             	sub    $0x6c,%esp
 84e48cb:	8b 45 10             	mov    0x10(%ebp),%eax
 84e48ce:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84e48d1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e48d4:	8b 40 02             	mov    0x2(%eax),%eax
 84e48d7:	89 04 24             	mov    %eax,(%esp)
 84e48da:	e8 f0 70 fd ff       	call   84bb9cf <_Z7getUserj>
 84e48df:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84e48e2:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84e48e6:	74 0f                	je     84e48f7 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x35>
 84e48e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e48eb:	89 04 24             	mov    %eax,(%esp)
 84e48ee:	e8 99 5a bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e48f3:	85 c0                	test   %eax,%eax
 84e48f5:	75 07                	jne    84e48fe <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x3c>
 84e48f7:	b8 01 00 00 00       	mov    $0x1,%eax
 84e48fc:	eb 05                	jmp    84e4903 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x41>
 84e48fe:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4903:	84 c0                	test   %al,%al
 84e4905:	74 0a                	je     84e4911 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x4f>
 84e4907:	b8 00 00 00 00       	mov    $0x0,%eax
 84e490c:	e9 e8 01 00 00       	jmp    84e4af9 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x237>
 84e4911:	c6 45 e5 00          	movb   $0x0,-0x1b(%ebp)
 84e4915:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 84e491b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e491e:	0f b7 00             	movzwl (%eax),%eax
 84e4921:	0f b7 c0             	movzwl %ax,%eax
 84e4924:	83 f8 13             	cmp    $0x13,%eax
 84e4927:	74 3a                	je     84e4963 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0xa1>
 84e4929:	83 f8 14             	cmp    $0x14,%eax
 84e492c:	74 07                	je     84e4935 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x73>
 84e492e:	83 f8 12             	cmp    $0x12,%eax
 84e4931:	74 19                	je     84e494c <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x8a>
 84e4933:	eb 3f                	jmp    84e4974 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0xb2>
 84e4935:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e4938:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84e493c:	88 45 e5             	mov    %al,-0x1b(%ebp)
 84e493f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e4942:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e4946:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 84e494a:	eb 32                	jmp    84e497e <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0xbc>
 84e494c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e494f:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84e4953:	88 45 e5             	mov    %al,-0x1b(%ebp)
 84e4956:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e4959:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e495d:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 84e4961:	eb 1b                	jmp    84e497e <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0xbc>
 84e4963:	c6 45 e5 00          	movb   $0x0,-0x1b(%ebp)
 84e4967:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e496a:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 84e496e:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 84e4972:	eb 0a                	jmp    84e497e <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0xbc>
 84e4974:	c6 45 e5 00          	movb   $0x0,-0x1b(%ebp)
 84e4978:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 84e497e:	0f b7 7d e6          	movzwl -0x1a(%ebp),%edi
 84e4982:	0f be 75 e5          	movsbl -0x1b(%ebp),%esi
 84e4986:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e4989:	8b 58 02             	mov    0x2(%eax),%ebx
 84e498c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e4993:	00 
 84e4994:	c7 44 24 08 3b 5f 00 	movl   $0x5f3b,0x8(%esp)
 84e499b:	00 
 84e499c:	c7 44 24 04 40 b7 c8 	movl   $0x8c8b740,0x4(%esp)
 84e49a3:	08 
 84e49a4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84e49a7:	89 04 24             	mov    %eax,(%esp)
 84e49aa:	e8 69 ad 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e49af:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e49b3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e49b7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e49bb:	c7 44 24 04 94 a0 c8 	movl   $0x8c8a094,0x4(%esp)
 84e49c2:	08 
 84e49c3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84e49c6:	89 04 24             	mov    %eax,(%esp)
 84e49c9:	e8 ba ad 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e49ce:	80 7d e5 01          	cmpb   $0x1,-0x1b(%ebp)
 84e49d2:	74 0a                	je     84e49de <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x11c>
 84e49d4:	80 7d e5 08          	cmpb   $0x8,-0x1b(%ebp)
 84e49d8:	0f 85 86 00 00 00    	jne    84e4a64 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x1a2>
 84e49de:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e49e1:	89 04 24             	mov    %eax,(%esp)
 84e49e4:	e8 63 93 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e49e9:	c7 44 24 08 ee 01 00 	movl   $0x1ee,0x8(%esp)
 84e49f0:	00 
 84e49f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e49f8:	00 
 84e49f9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e49fc:	89 04 24             	mov    %eax,(%esp)
 84e49ff:	e8 f8 6e be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e4a04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e4a0b:	00 
 84e4a0c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e4a0f:	89 04 24             	mov    %eax,(%esp)
 84e4a12:	e8 09 6f be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e4a17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e4a1e:	00 
 84e4a1f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e4a22:	89 04 24             	mov    %eax,(%esp)
 84e4a25:	e8 2e 6f be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e4a2a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e4a2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4a31:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e4a34:	89 04 24             	mov    %eax,(%esp)
 84e4a37:	e8 7e 3b 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e4a3c:	eb 1b                	jmp    84e4a59 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x197>
 84e4a3e:	89 d3                	mov    %edx,%ebx
 84e4a40:	89 c6                	mov    %eax,%esi
 84e4a42:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e4a45:	89 04 24             	mov    %eax,(%esp)
 84e4a48:	e8 33 94 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e4a4d:	89 f0                	mov    %esi,%eax
 84e4a4f:	89 da                	mov    %ebx,%edx
 84e4a51:	89 04 24             	mov    %eax,(%esp)
 84e4a54:	e8 f7 ec 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e4a59:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e4a5c:	89 04 24             	mov    %eax,(%esp)
 84e4a5f:	e8 1c 94 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e4a64:	80 7d e5 00          	cmpb   $0x0,-0x1b(%ebp)
 84e4a68:	0f 85 86 00 00 00    	jne    84e4af4 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x232>
 84e4a6e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e4a71:	89 04 24             	mov    %eax,(%esp)
 84e4a74:	e8 d3 92 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e4a79:	c7 44 24 08 ee 01 00 	movl   $0x1ee,0x8(%esp)
 84e4a80:	00 
 84e4a81:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4a88:	00 
 84e4a89:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e4a8c:	89 04 24             	mov    %eax,(%esp)
 84e4a8f:	e8 68 6e be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e4a94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4a9b:	00 
 84e4a9c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e4a9f:	89 04 24             	mov    %eax,(%esp)
 84e4aa2:	e8 79 6e be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e4aa7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e4aae:	00 
 84e4aaf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e4ab2:	89 04 24             	mov    %eax,(%esp)
 84e4ab5:	e8 9e 6e be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e4aba:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e4abd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4ac1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e4ac4:	89 04 24             	mov    %eax,(%esp)
 84e4ac7:	e8 ee 3a 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e4acc:	eb 1b                	jmp    84e4ae9 <_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci+0x227>
 84e4ace:	89 d3                	mov    %edx,%ebx
 84e4ad0:	89 c6                	mov    %eax,%esi
 84e4ad2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e4ad5:	89 04 24             	mov    %eax,(%esp)
 84e4ad8:	e8 a3 93 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e4add:	89 f0                	mov    %esi,%eax
 84e4adf:	89 da                	mov    %ebx,%edx
 84e4ae1:	89 04 24             	mov    %eax,(%esp)
 84e4ae4:	e8 67 ec 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e4ae9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84e4aec:	89 04 24             	mov    %eax,(%esp)
 84e4aef:	e8 8c 93 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e4af4:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4af9:	83 c4 6c             	add    $0x6c,%esp
 84e4afc:	5b                   	pop    %ebx
 84e4afd:	5e                   	pop    %esi
 84e4afe:	5f                   	pop    %edi
 84e4aff:	5d                   	pop    %ebp
 84e4b00:	c3                   	ret
 84e4b01:	90                   	nop

```

```c
// Inter_Antibot_ProcessProtectMsg::dispatch_sig @ 0x84e48c2

/* Inter_Antibot_ProcessProtectMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Antibot_ProcessProtectMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  cMyTrace local_38 [16];
  short *local_28;
  CUser *local_24;
  char local_1f;
  ushort local_1e;
  
  local_28 = (short *)param_3;
  local_24 = (CUser *)getUser(*(uint *)(param_3 + 2));
  if ((local_24 == (CUser *)0x0) || (iVar4 = CUser::get_state(local_24), iVar4 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    sVar1 = *local_28;
    if (sVar1 == 0x13) {
      local_1f = '\0';
      local_1e = local_28[3];
    }
    else if (sVar1 == 0x14) {
      local_1f = (char)local_28[4];
      local_1e = local_28[5];
    }
    else if (sVar1 == 0x12) {
      local_1f = (char)local_28[4];
      local_1e = local_28[5];
    }
    else {
      local_1f = '\0';
      local_1e = 0;
    }
    uVar5 = (uint)local_1e;
    iVar4 = (int)local_1f;
    uVar2 = *(undefined4 *)(local_28 + 1);
    cMyTrace::cMyTrace(local_38,
                       "virtual int Inter_Antibot_ProcessProtectMsg::dispatch_sig(CUser*, char*, int)"
                       ,0x5f3b,0);
    cMyTrace::operator()
              (local_38,"[SAFEMODE]uid : %d    protstatLevel : %d    eventType : %d\n",uVar2,iVar4,
               uVar5);
    if ((local_1f == '\x01') || (local_1f == '\b')) {
      PacketGuard::PacketGuard(local_44);
                    /* try { // try from 084e49ff to 084e4a3b has its CatchHandler @ 084e4a3e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x1ee);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
      CUser::Send(local_24,local_44);
      PacketGuard::~PacketGuard(local_44);
    }
    if (local_1f == '\0') {
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 084e4a8f to 084e4acb has its CatchHandler @ 084e4ace */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x1ee);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      CUser::Send(local_24,local_50);
      PacketGuard::~PacketGuard(local_50);
    }
  }
  return 0;
}

```

