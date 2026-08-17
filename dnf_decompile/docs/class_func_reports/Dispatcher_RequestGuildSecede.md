# Dispatcher_RequestGuildSecede

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08207d3a Dispatcher_RequestGuildSecede::dispatch_sig  [0x08207d3a-0x8207ffd] ===
 8207d3a:	55                   	push   %ebp
 8207d3b:	89 e5                	mov    %esp,%ebp
 8207d3d:	56                   	push   %esi
 8207d3e:	53                   	push   %ebx
 8207d3f:	83 ec 50             	sub    $0x50,%esp
 8207d42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207d45:	89 04 24             	mov    %eax,(%esp)
 8207d48:	e8 3f 26 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8207d4d:	83 f8 02             	cmp    $0x2,%eax
 8207d50:	7e 0f                	jle    8207d61 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8207d52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207d55:	89 04 24             	mov    %eax,(%esp)
 8207d58:	e8 d5 86 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8207d5d:	85 c0                	test   %eax,%eax
 8207d5f:	75 07                	jne    8207d68 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 8207d61:	b8 01 00 00 00       	mov    $0x1,%eax
 8207d66:	eb 05                	jmp    8207d6d <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x33>
 8207d68:	b8 00 00 00 00       	mov    $0x0,%eax
 8207d6d:	84 c0                	test   %al,%al
 8207d6f:	74 29                	je     8207d9a <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x60>
 8207d71:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207d78:	00 
 8207d79:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207d80:	00 
 8207d81:	c7 44 24 04 20 e8 bc 	movl   $0x8bce820,0x4(%esp)
 8207d88:	08 
 8207d89:	c7 04 24 9f a2 00 00 	movl   $0xa29f,(%esp)
 8207d90:	e8 42 8b 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207d95:	e9 5d 02 00 00       	jmp    8207ff7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2bd>
 8207d9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207d9d:	89 04 24             	mov    %eax,(%esp)
 8207da0:	e8 c7 76 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8207da5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8207da8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8207dac:	75 25                	jne    8207dd3 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x99>
 8207dae:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 8207db5:	00 
 8207db6:	c7 44 24 04 9c 00 00 	movl   $0x9c,0x4(%esp)
 8207dbd:	00 
 8207dbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207dc1:	89 04 24             	mov    %eax,(%esp)
 8207dc4:	e8 79 41 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8207dc9:	b8 00 00 00 00       	mov    $0x0,%eax
 8207dce:	e9 24 02 00 00       	jmp    8207ff7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2bd>
 8207dd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207dd6:	89 04 24             	mov    %eax,(%esp)
 8207dd9:	e8 86 d7 43 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8207dde:	3c 07                	cmp    $0x7,%al
 8207de0:	0f 94 c0             	sete   %al
 8207de3:	84 c0                	test   %al,%al
 8207de5:	74 25                	je     8207e0c <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0xd2>
 8207de7:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8207dee:	00 
 8207def:	c7 44 24 04 9c 00 00 	movl   $0x9c,0x4(%esp)
 8207df6:	00 
 8207df7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207dfa:	89 04 24             	mov    %eax,(%esp)
 8207dfd:	e8 40 41 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8207e02:	b8 00 00 00 00       	mov    $0x0,%eax
 8207e07:	e9 eb 01 00 00       	jmp    8207ff7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2bd>
 8207e0c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8207e13:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8207e16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207e1a:	8b 45 10             	mov    0x10(%ebp),%eax
 8207e1d:	89 04 24             	mov    %eax,(%esp)
 8207e20:	e8 cb 52 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8207e25:	83 f0 01             	xor    $0x1,%eax
 8207e28:	84 c0                	test   %al,%al
 8207e2a:	74 29                	je     8207e55 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x11b>
 8207e2c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207e33:	00 
 8207e34:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207e3b:	00 
 8207e3c:	c7 44 24 04 20 e8 bc 	movl   $0x8bce820,0x4(%esp)
 8207e43:	08 
 8207e44:	c7 04 24 b3 a2 00 00 	movl   $0xa2b3,(%esp)
 8207e4b:	e8 87 8a 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207e50:	e9 a2 01 00 00       	jmp    8207ff7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2bd>
 8207e55:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8207e58:	85 c0                	test   %eax,%eax
 8207e5a:	0f 84 ec 00 00 00    	je     8207f4c <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x212>
 8207e60:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8207e63:	83 f8 1d             	cmp    $0x1d,%eax
 8207e66:	0f 8f e0 00 00 00    	jg     8207f4c <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x212>
 8207e6c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8207e6f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8207e73:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8207e7a:	00 
 8207e7b:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 8207e7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207e82:	8b 45 10             	mov    0x10(%ebp),%eax
 8207e85:	89 04 24             	mov    %eax,(%esp)
 8207e88:	e8 2f 54 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8207e8d:	83 f0 01             	xor    $0x1,%eax
 8207e90:	84 c0                	test   %al,%al
 8207e92:	74 29                	je     8207ebd <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x183>
 8207e94:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207e9b:	00 
 8207e9c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207ea3:	00 
 8207ea4:	c7 44 24 04 20 e8 bc 	movl   $0x8bce820,0x4(%esp)
 8207eab:	08 
 8207eac:	c7 04 24 b8 a2 00 00 	movl   $0xa2b8,(%esp)
 8207eb3:	e8 1f 8a 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207eb8:	e9 3a 01 00 00       	jmp    8207ff7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2bd>
 8207ebd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207ec0:	89 04 24             	mov    %eax,(%esp)
 8207ec3:	e8 4c 45 46 00       	call   866c414 <_ZN5CUser16IsSubGuildMasterEv>
 8207ec8:	83 f0 01             	xor    $0x1,%eax
 8207ecb:	84 c0                	test   %al,%al
 8207ecd:	74 19                	je     8207ee8 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 8207ecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207ed2:	89 04 24             	mov    %eax,(%esp)
 8207ed5:	e8 98 82 02 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 8207eda:	83 f0 01             	xor    $0x1,%eax
 8207edd:	84 c0                	test   %al,%al
 8207edf:	74 07                	je     8207ee8 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 8207ee1:	b8 01 00 00 00       	mov    $0x1,%eax
 8207ee6:	eb 05                	jmp    8207eed <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x1b3>
 8207ee8:	b8 00 00 00 00       	mov    $0x0,%eax
 8207eed:	84 c0                	test   %al,%al
 8207eef:	74 25                	je     8207f16 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x1dc>
 8207ef1:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8207ef8:	00 
 8207ef9:	c7 44 24 04 9c 00 00 	movl   $0x9c,0x4(%esp)
 8207f00:	00 
 8207f01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207f04:	89 04 24             	mov    %eax,(%esp)
 8207f07:	e8 36 40 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8207f0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8207f11:	e9 e1 00 00 00       	jmp    8207ff7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2bd>
 8207f16:	a1 50 be 40 09       	mov    0x940be50,%eax
 8207f1b:	89 04 24             	mov    %eax,(%esp)
 8207f1e:	e8 ed 79 27 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 8207f23:	84 c0                	test   %al,%al
 8207f25:	74 25                	je     8207f4c <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x212>
 8207f27:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8207f2e:	00 
 8207f2f:	c7 44 24 04 9c 00 00 	movl   $0x9c,0x4(%esp)
 8207f36:	00 
 8207f37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207f3a:	89 04 24             	mov    %eax,(%esp)
 8207f3d:	e8 00 40 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8207f42:	b8 00 00 00 00       	mov    $0x0,%eax
 8207f47:	e9 ab 00 00 00       	jmp    8207ff7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2bd>
 8207f4c:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8207f51:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8207f58:	00 
 8207f59:	8b 55 0c             	mov    0xc(%ebp),%edx
 8207f5c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8207f60:	89 04 24             	mov    %eax,(%esp)
 8207f63:	e8 9a 0a 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8207f68:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8207f6b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8207f6f:	74 24                	je     8207f95 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x25b>
 8207f71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8207f74:	0f b6 c0             	movzbl %al,%eax
 8207f77:	89 44 24 08          	mov    %eax,0x8(%esp)
 8207f7b:	c7 44 24 04 9c 00 00 	movl   $0x9c,0x4(%esp)
 8207f82:	00 
 8207f83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207f86:	89 04 24             	mov    %eax,(%esp)
 8207f89:	e8 b4 3f 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8207f8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8207f93:	eb 62                	jmp    8207ff7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x2bd>
 8207f95:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8207f98:	85 c0                	test   %eax,%eax
 8207f9a:	75 0b                	jne    8207fa7 <_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf+0x26d>
 8207f9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207f9f:	89 04 24             	mov    %eax,(%esp)
 8207fa2:	e8 f1 68 47 00       	call   867e898 <_ZN5CUser18deleteGuildExpBookEv>
 8207fa7:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8207faa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207fad:	89 04 24             	mov    %eax,(%esp)
 8207fb0:	e8 99 3c ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8207fb5:	89 c3                	mov    %eax,%ebx
 8207fb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207fba:	89 04 24             	mov    %eax,(%esp)
 8207fbd:	e8 ce 3c ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8207fc2:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8207fc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207fcc:	89 14 24             	mov    %edx,(%esp)
 8207fcf:	e8 e4 53 f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8207fd4:	8d 55 d2             	lea    -0x2e(%ebp),%edx
 8207fd7:	89 54 24 10          	mov    %edx,0x10(%esp)
 8207fdb:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8207fdf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8207fe3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8207fe6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8207fea:	89 04 24             	mov    %eax,(%esp)
 8207fed:	e8 9e 61 26 00       	call   846e190 <_ZN17CGuildServerProxy22SendRequestGuildSecedeEjjiPc>
 8207ff2:	b8 00 00 00 00       	mov    $0x0,%eax
 8207ff7:	83 c4 50             	add    $0x50,%esp
 8207ffa:	5b                   	pop    %ebx
 8207ffb:	5e                   	pop    %esi
 8207ffc:	5d                   	pop    %ebp
 8207ffd:	c3                   	ret

```

```c
// Dispatcher_RequestGuildSecede::dispatch_sig @ 0x8207d3a

/* Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestGuildSecede::dispatch_sig
          (Dispatcher_RequestGuildSecede *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CGuildServerProxy *this_00;
  int local_38;
  char local_32 [30];
  uint local_14;
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
    uVar4 = LineFunc(0xa29f,
                     "virtual int Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  local_14 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (local_14 == 0) {
    CUser::SendCmdErrorPacket(param_1,0x9c,0x22);
    return 0;
  }
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if (cVar2 != '\a') {
    local_38 = 0;
    cVar2 = PacketBuf::get_int(param_2,&local_38);
    if (cVar2 != '\x01') {
      uVar4 = LineFunc(0xa2b3,
                       "virtual int Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar4;
    }
    if ((local_38 != 0) && (local_38 < 0x1e)) {
      cVar2 = PacketBuf::get_str(param_2,local_32,0x1e,local_38);
      if (cVar2 != '\x01') {
        uVar4 = LineFunc(0xa2b8,
                         "virtual int Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      cVar2 = CUser::IsSubGuildMaster(param_1);
      if ((cVar2 == '\x01') || (cVar2 = CUser::IsGuildMaster(param_1), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(param_1,0x9c,0x24);
        return 0;
      }
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if (cVar2 != '\0') {
        CUser::SendCmdErrorPacket(param_1,0x9c,0x13);
        return 0;
      }
    }
    local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0xd);
    if (local_10 == 0) {
      if (local_38 == 0) {
        CUser::deleteGuildExpBook(param_1);
      }
      iVar3 = local_38;
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar4 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar4);
      CGuildServerProxy::SendRequestGuildSecede(this_00,local_14,uVar5,iVar3,local_32);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x9c,local_10 & 0xff);
    }
    return 0;
  }
  CUser::SendCmdErrorPacket(param_1,0x9c,0x13);
  return 0;
}

```

