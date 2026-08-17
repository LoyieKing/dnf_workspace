# Dispatcher_ReplyGuildInvite

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08207b52 Dispatcher_ReplyGuildInvite::dispatch_sig  [0x08207b52-0x8207d39] ===
 8207b52:	55                   	push   %ebp
 8207b53:	89 e5                	mov    %esp,%ebp
 8207b55:	56                   	push   %esi
 8207b56:	53                   	push   %ebx
 8207b57:	83 ec 30             	sub    $0x30,%esp
 8207b5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207b5d:	89 04 24             	mov    %eax,(%esp)
 8207b60:	e8 27 28 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8207b65:	83 f8 02             	cmp    $0x2,%eax
 8207b68:	7e 0f                	jle    8207b79 <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8207b6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207b6d:	89 04 24             	mov    %eax,(%esp)
 8207b70:	e8 bd 88 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8207b75:	85 c0                	test   %eax,%eax
 8207b77:	75 07                	jne    8207b80 <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 8207b79:	b8 01 00 00 00       	mov    $0x1,%eax
 8207b7e:	eb 05                	jmp    8207b85 <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x33>
 8207b80:	b8 00 00 00 00       	mov    $0x0,%eax
 8207b85:	84 c0                	test   %al,%al
 8207b87:	74 2b                	je     8207bb4 <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x62>
 8207b89:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207b90:	00 
 8207b91:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207b98:	00 
 8207b99:	c7 44 24 04 80 e8 bc 	movl   $0x8bce880,0x4(%esp)
 8207ba0:	08 
 8207ba1:	c7 04 24 78 a2 00 00 	movl   $0xa278,(%esp)
 8207ba8:	e8 2a 8d 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207bad:	89 c3                	mov    %eax,%ebx
 8207baf:	e9 7c 01 00 00       	jmp    8207d30 <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x1de>
 8207bb4:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8207bb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207bbb:	8b 45 10             	mov    0x10(%ebp),%eax
 8207bbe:	89 04 24             	mov    %eax,(%esp)
 8207bc1:	e8 aa 53 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8207bc6:	83 f0 01             	xor    $0x1,%eax
 8207bc9:	84 c0                	test   %al,%al
 8207bcb:	74 2b                	je     8207bf8 <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0xa6>
 8207bcd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207bd4:	00 
 8207bd5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207bdc:	00 
 8207bdd:	c7 44 24 04 80 e8 bc 	movl   $0x8bce880,0x4(%esp)
 8207be4:	08 
 8207be5:	c7 04 24 7c a2 00 00 	movl   $0xa27c,(%esp)
 8207bec:	e8 e6 8c 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207bf1:	89 c3                	mov    %eax,%ebx
 8207bf3:	e9 38 01 00 00       	jmp    8207d30 <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x1de>
 8207bf8:	e8 aa 27 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8207bfd:	89 04 24             	mov    %eax,(%esp)
 8207c00:	e8 19 97 ee ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 8207c05:	84 c0                	test   %al,%al
 8207c07:	0f 84 a1 00 00 00    	je     8207cae <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 8207c0d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8207c10:	89 04 24             	mov    %eax,(%esp)
 8207c13:	e8 34 61 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8207c18:	c7 44 24 08 9b 00 00 	movl   $0x9b,0x8(%esp)
 8207c1f:	00 
 8207c20:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8207c27:	00 
 8207c28:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8207c2b:	89 04 24             	mov    %eax,(%esp)
 8207c2e:	e8 c9 3c ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8207c33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8207c3a:	00 
 8207c3b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8207c3e:	89 04 24             	mov    %eax,(%esp)
 8207c41:	e8 da 3c ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8207c46:	c7 44 24 04 63 00 00 	movl   $0x63,0x4(%esp)
 8207c4d:	00 
 8207c4e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8207c51:	89 04 24             	mov    %eax,(%esp)
 8207c54:	e8 e3 3c ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8207c59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8207c60:	00 
 8207c61:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8207c64:	89 04 24             	mov    %eax,(%esp)
 8207c67:	e8 ec 3c ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8207c6c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8207c6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207c73:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207c76:	89 04 24             	mov    %eax,(%esp)
 8207c79:	e8 3c 09 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8207c7e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8207c83:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8207c86:	89 04 24             	mov    %eax,(%esp)
 8207c89:	e8 f2 61 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8207c8e:	e9 9d 00 00 00       	jmp    8207d30 <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x1de>
 8207c93:	89 d3                	mov    %edx,%ebx
 8207c95:	89 c6                	mov    %eax,%esi
 8207c97:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8207c9a:	89 04 24             	mov    %eax,(%esp)
 8207c9d:	e8 de 61 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8207ca2:	89 f0                	mov    %esi,%eax
 8207ca4:	89 da                	mov    %ebx,%edx
 8207ca6:	89 04 24             	mov    %eax,(%esp)
 8207ca9:	e8 a2 ba 8d 00       	call   8ae3750 <_Unwind_Resume>
 8207cae:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8207cb3:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8207cba:	00 
 8207cbb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8207cbe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8207cc2:	89 04 24             	mov    %eax,(%esp)
 8207cc5:	e8 38 0d 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8207cca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8207ccd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8207cd1:	74 17                	je     8207cea <_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf+0x198>
 8207cd3:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8207cd8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8207cdb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8207cdf:	89 04 24             	mov    %eax,(%esp)
 8207ce2:	e8 59 04 08 00       	call   8288140 <_ZN21CSecu_ProtectionField14GetOppositeErrEi>
 8207ce7:	88 45 f3             	mov    %al,-0xd(%ebp)
 8207cea:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8207cee:	0f b6 f0             	movzbl %al,%esi
 8207cf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207cf4:	89 04 24             	mov    %eax,(%esp)
 8207cf7:	e8 52 3f ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8207cfc:	89 c3                	mov    %eax,%ebx
 8207cfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207d01:	89 04 24             	mov    %eax,(%esp)
 8207d04:	e8 87 3f ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8207d09:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8207d0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207d13:	89 14 24             	mov    %edx,(%esp)
 8207d16:	e8 9d 56 f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8207d1b:	89 74 24 08          	mov    %esi,0x8(%esp)
 8207d1f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8207d23:	89 04 24             	mov    %eax,(%esp)
 8207d26:	e8 21 64 26 00       	call   846e14c <_ZN17CGuildServerProxy20SendReplyGuildInviteEjh>
 8207d2b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8207d30:	89 d8                	mov    %ebx,%eax
 8207d32:	83 c4 30             	add    $0x30,%esp
 8207d35:	5b                   	pop    %ebx
 8207d36:	5e                   	pop    %esi
 8207d37:	5d                   	pop    %ebp
 8207d38:	c3                   	ret
 8207d39:	90                   	nop

```

```c
// Dispatcher_ReplyGuildInvite::dispatch_sig @ 0x8207b52

/* Dispatcher_ReplyGuildInvite::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ReplyGuildInvite::dispatch_sig
          (Dispatcher_ReplyGuildInvite *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  GameWorld *this_00;
  uint uVar6;
  CGuildServerProxy *this_01;
  PacketGuard local_20 [15];
  uchar local_11;
  int local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (2 < iVar4) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_08207b85;
    }
  }
  bVar1 = true;
LAB_08207b85:
  if (bVar1) {
    uVar5 = LineFunc(0xa278,
                     "virtual int Dispatcher_ReplyGuildInvite::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    cVar3 = PacketBuf::get_byte(param_2,&local_11);
    if (cVar3 == '\x01') {
      this_00 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
      if (cVar3 == '\0') {
        local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0xc);
        if (local_10 != 0) {
          local_11 = CSecu_ProtectionField::GetOppositeErr
                               (GlobalData::s_pSecuProtectionField,local_10);
        }
        uVar2 = local_11;
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar5 = CUser::GetServerGroup(param_1);
        this_01 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar5);
        CGuildServerProxy::SendReplyGuildInvite(this_01,uVar6,uVar2);
        uVar5 = 0;
      }
      else {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08207c2e to 08207c7d has its CatchHandler @ 08207c93 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x9b);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,99);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send(param_1,local_20);
        uVar5 = 0;
        PacketGuard::~PacketGuard(local_20);
      }
    }
    else {
      uVar5 = LineFunc(0xa27c,
                       "virtual int Dispatcher_ReplyGuildInvite::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
    }
  }
  return uVar5;
}

```

