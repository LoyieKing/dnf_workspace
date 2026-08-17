# Dispatcher_CallGuildInvite

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0820791c Dispatcher_CallGuildInvite::dispatch_sig  [0x0820791c-0x8207b51] ===
 820791c:	55                   	push   %ebp
 820791d:	89 e5                	mov    %esp,%ebp
 820791f:	56                   	push   %esi
 8207920:	53                   	push   %ebx
 8207921:	83 ec 40             	sub    $0x40,%esp
 8207924:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207927:	89 04 24             	mov    %eax,(%esp)
 820792a:	e8 5d 2a ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820792f:	83 f8 02             	cmp    $0x2,%eax
 8207932:	7e 0f                	jle    8207943 <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8207934:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207937:	89 04 24             	mov    %eax,(%esp)
 820793a:	e8 f3 8a f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 820793f:	85 c0                	test   %eax,%eax
 8207941:	75 07                	jne    820794a <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 8207943:	b8 01 00 00 00       	mov    $0x1,%eax
 8207948:	eb 05                	jmp    820794f <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x33>
 820794a:	b8 00 00 00 00       	mov    $0x0,%eax
 820794f:	84 c0                	test   %al,%al
 8207951:	74 29                	je     820797c <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x60>
 8207953:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820795a:	00 
 820795b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207962:	00 
 8207963:	c7 44 24 04 e0 e8 bc 	movl   $0x8bce8e0,0x4(%esp)
 820796a:	08 
 820796b:	c7 04 24 4f a2 00 00 	movl   $0xa24f,(%esp)
 8207972:	e8 60 8f 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207977:	e9 ce 01 00 00       	jmp    8207b4a <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 820797c:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8207981:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 8207988:	00 
 8207989:	8b 55 0c             	mov    0xc(%ebp),%edx
 820798c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8207990:	89 04 24             	mov    %eax,(%esp)
 8207993:	e8 6a 10 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8207998:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820799b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 820799f:	74 27                	je     82079c8 <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0xac>
 82079a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82079a4:	0f b6 c0             	movzbl %al,%eax
 82079a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 82079ab:	c7 44 24 04 9a 00 00 	movl   $0x9a,0x4(%esp)
 82079b2:	00 
 82079b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82079b6:	89 04 24             	mov    %eax,(%esp)
 82079b9:	e8 84 45 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82079be:	b8 00 00 00 00       	mov    $0x0,%eax
 82079c3:	e9 82 01 00 00       	jmp    8207b4a <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 82079c8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82079cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82079cf:	8b 45 10             	mov    0x10(%ebp),%eax
 82079d2:	89 04 24             	mov    %eax,(%esp)
 82079d5:	e8 16 57 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82079da:	83 f0 01             	xor    $0x1,%eax
 82079dd:	84 c0                	test   %al,%al
 82079df:	74 29                	je     8207a0a <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0xee>
 82079e1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82079e8:	00 
 82079e9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82079f0:	00 
 82079f1:	c7 44 24 04 e0 e8 bc 	movl   $0x8bce8e0,0x4(%esp)
 82079f8:	08 
 82079f9:	c7 04 24 5d a2 00 00 	movl   $0xa25d,(%esp)
 8207a00:	e8 d2 8e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207a05:	e9 40 01 00 00       	jmp    8207b4a <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 8207a0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8207a0d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8207a11:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8207a18:	00 
 8207a19:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 8207a1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207a20:	8b 45 10             	mov    0x10(%ebp),%eax
 8207a23:	89 04 24             	mov    %eax,(%esp)
 8207a26:	e8 91 58 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8207a2b:	83 f0 01             	xor    $0x1,%eax
 8207a2e:	84 c0                	test   %al,%al
 8207a30:	74 29                	je     8207a5b <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x13f>
 8207a32:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207a39:	00 
 8207a3a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207a41:	00 
 8207a42:	c7 44 24 04 e0 e8 bc 	movl   $0x8bce8e0,0x4(%esp)
 8207a49:	08 
 8207a4a:	c7 04 24 61 a2 00 00 	movl   $0xa261,(%esp)
 8207a51:	e8 81 8e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207a56:	e9 ef 00 00 00       	jmp    8207b4a <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 8207a5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207a5e:	89 04 24             	mov    %eax,(%esp)
 8207a61:	e8 06 7a 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8207a66:	85 c0                	test   %eax,%eax
 8207a68:	0f 94 c0             	sete   %al
 8207a6b:	84 c0                	test   %al,%al
 8207a6d:	74 24                	je     8207a93 <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x177>
 8207a6f:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 8207a76:	00 
 8207a77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207a7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207a7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8207a81:	89 04 24             	mov    %eax,(%esp)
 8207a84:	e8 c9 fd ff ff       	call   8207852 <_ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh>
 8207a89:	b8 00 00 00 00       	mov    $0x0,%eax
 8207a8e:	e9 b7 00 00 00       	jmp    8207b4a <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 8207a93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207a96:	89 04 24             	mov    %eax,(%esp)
 8207a99:	e8 76 49 46 00       	call   866c414 <_ZN5CUser16IsSubGuildMasterEv>
 8207a9e:	83 f0 01             	xor    $0x1,%eax
 8207aa1:	84 c0                	test   %al,%al
 8207aa3:	74 28                	je     8207acd <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x1b1>
 8207aa5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207aa8:	89 04 24             	mov    %eax,(%esp)
 8207aab:	e8 c2 86 02 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 8207ab0:	83 f0 01             	xor    $0x1,%eax
 8207ab3:	84 c0                	test   %al,%al
 8207ab5:	74 16                	je     8207acd <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x1b1>
 8207ab7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207aba:	89 04 24             	mov    %eax,(%esp)
 8207abd:	e8 86 7a 02 00       	call   822f548 <_ZN15CUserCharacInfo19getGuildMemberGradeEv>
 8207ac2:	3c 03                	cmp    $0x3,%al
 8207ac4:	74 07                	je     8207acd <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x1b1>
 8207ac6:	b8 01 00 00 00       	mov    $0x1,%eax
 8207acb:	eb 05                	jmp    8207ad2 <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x1b6>
 8207acd:	b8 00 00 00 00       	mov    $0x0,%eax
 8207ad2:	84 c0                	test   %al,%al
 8207ad4:	74 21                	je     8207af7 <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x1db>
 8207ad6:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8207add:	00 
 8207ade:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207ae1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207ae5:	8b 45 08             	mov    0x8(%ebp),%eax
 8207ae8:	89 04 24             	mov    %eax,(%esp)
 8207aeb:	e8 62 fd ff ff       	call   8207852 <_ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh>
 8207af0:	b8 00 00 00 00       	mov    $0x0,%eax
 8207af5:	eb 53                	jmp    8207b4a <_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 8207af7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207afa:	89 04 24             	mov    %eax,(%esp)
 8207afd:	e8 6a 79 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8207b02:	89 c6                	mov    %eax,%esi
 8207b04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207b07:	89 04 24             	mov    %eax,(%esp)
 8207b0a:	e8 3f 41 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8207b0f:	89 c3                	mov    %eax,%ebx
 8207b11:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207b14:	89 04 24             	mov    %eax,(%esp)
 8207b17:	e8 74 41 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8207b1c:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8207b22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207b26:	89 14 24             	mov    %edx,(%esp)
 8207b29:	e8 8a 58 f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8207b2e:	8d 55 d2             	lea    -0x2e(%ebp),%edx
 8207b31:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8207b35:	89 74 24 08          	mov    %esi,0x8(%esp)
 8207b39:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8207b3d:	89 04 24             	mov    %eax,(%esp)
 8207b40:	e8 ad 65 26 00       	call   846e0f2 <_ZN17CGuildServerProxy19SendCallGuildInviteEjjPc>
 8207b45:	b8 00 00 00 00       	mov    $0x0,%eax
 8207b4a:	83 c4 40             	add    $0x40,%esp
 8207b4d:	5b                   	pop    %ebx
 8207b4e:	5e                   	pop    %esi
 8207b4f:	5d                   	pop    %ebp
 8207b50:	c3                   	ret
 8207b51:	90                   	nop

```

```c
// Dispatcher_CallGuildInvite::dispatch_sig @ 0x820791c

/* Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CallGuildInvite::dispatch_sig
          (Dispatcher_CallGuildInvite *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  CGuildServerProxy *this_00;
  char local_32 [30];
  int local_14;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xa24f,
                     "virtual int Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar4;
  }
  local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0xb);
  if (local_10 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x9a,local_10 & 0xff);
    return 0;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_14);
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_str(param_2,local_32,0x1e,local_14);
    if (cVar2 != '\x01') {
      uVar4 = LineFunc(0xa261,
                       "virtual int Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
      return uVar4;
    }
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      cVar2 = CUser::IsSubGuildMaster(param_1);
      if (((cVar2 == '\x01') || (cVar2 = CUser::IsGuildMaster(param_1), cVar2 == '\x01')) ||
         (cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)param_1), cVar2 == '\x03')
         ) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        send_packet_guild_invite(this,param_1,'$');
      }
      else {
        uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar4 = CUser::GetServerGroup(param_1);
        this_00 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar4);
        CGuildServerProxy::SendCallGuildInvite(this_00,uVar6,uVar5,local_32);
      }
      return 0;
    }
    send_packet_guild_invite(this,param_1,'\"');
    return 0;
  }
  uVar4 = LineFunc(0xa25d,"virtual int Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&)"
                   ,0,0);
  return uVar4;
}

```

---

## send_packet_guild_invite

```asm
// === 08207852 Dispatcher_CallGuildInvite::send_packet_guild_invite  [0x08207852-0x820791b] ===
 8207852:	55                   	push   %ebp
 8207853:	89 e5                	mov    %esp,%ebp
 8207855:	56                   	push   %esi
 8207856:	53                   	push   %ebx
 8207857:	83 ec 30             	sub    $0x30,%esp
 820785a:	8b 45 10             	mov    0x10(%ebp),%eax
 820785d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8207860:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8207863:	89 04 24             	mov    %eax,(%esp)
 8207866:	e8 e1 64 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820786b:	c7 44 24 08 9a 00 00 	movl   $0x9a,0x8(%esp)
 8207872:	00 
 8207873:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820787a:	00 
 820787b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820787e:	89 04 24             	mov    %eax,(%esp)
 8207881:	e8 76 40 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8207886:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 820788a:	75 15                	jne    82078a1 <_ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh+0x4f>
 820788c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8207893:	00 
 8207894:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8207897:	89 04 24             	mov    %eax,(%esp)
 820789a:	e8 81 40 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820789f:	eb 26                	jmp    82078c7 <_ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh+0x75>
 82078a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82078a8:	00 
 82078a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82078ac:	89 04 24             	mov    %eax,(%esp)
 82078af:	e8 6c 40 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82078b4:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 82078b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82078bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82078bf:	89 04 24             	mov    %eax,(%esp)
 82078c2:	e8 59 40 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82078c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82078ce:	00 
 82078cf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82078d2:	89 04 24             	mov    %eax,(%esp)
 82078d5:	e8 7e 40 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82078da:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82078dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82078e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82078e4:	89 04 24             	mov    %eax,(%esp)
 82078e7:	e8 ce 0c 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82078ec:	eb 1b                	jmp    8207909 <_ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh+0xb7>
 82078ee:	89 d3                	mov    %edx,%ebx
 82078f0:	89 c6                	mov    %eax,%esi
 82078f2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82078f5:	89 04 24             	mov    %eax,(%esp)
 82078f8:	e8 83 65 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82078fd:	89 f0                	mov    %esi,%eax
 82078ff:	89 da                	mov    %ebx,%edx
 8207901:	89 04 24             	mov    %eax,(%esp)
 8207904:	e8 47 be 8d 00       	call   8ae3750 <_Unwind_Resume>
 8207909:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820790c:	89 04 24             	mov    %eax,(%esp)
 820790f:	e8 6c 65 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8207914:	83 c4 30             	add    $0x30,%esp
 8207917:	5b                   	pop    %ebx
 8207918:	5e                   	pop    %esi
 8207919:	5d                   	pop    %ebp
 820791a:	c3                   	ret
 820791b:	90                   	nop

```

```c
// Dispatcher_CallGuildInvite::send_packet_guild_invite @ 0x8207852

/* Dispatcher_CallGuildInvite::send_packet_guild_invite(CUser*, unsigned char) */

void __thiscall
Dispatcher_CallGuildInvite::send_packet_guild_invite
          (Dispatcher_CallGuildInvite *this,CUser *param_1,uchar param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08207881 to 082078eb has its CatchHandler @ 082078ee */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x9a);
  if (param_2 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_2);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

