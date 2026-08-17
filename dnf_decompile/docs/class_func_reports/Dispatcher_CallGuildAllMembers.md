# Dispatcher_CallGuildAllMembers

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ffb1a Dispatcher_CallGuildAllMembers::dispatch_sig  [0x081ffb1a-0x81ffbdd] ===
 81ffb1a:	55                   	push   %ebp
 81ffb1b:	89 e5                	mov    %esp,%ebp
 81ffb1d:	56                   	push   %esi
 81ffb1e:	53                   	push   %ebx
 81ffb1f:	83 ec 10             	sub    $0x10,%esp
 81ffb22:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffb25:	89 04 24             	mov    %eax,(%esp)
 81ffb28:	e8 5f a8 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ffb2d:	83 f8 02             	cmp    $0x2,%eax
 81ffb30:	7e 0f                	jle    81ffb41 <_ZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81ffb32:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffb35:	89 04 24             	mov    %eax,(%esp)
 81ffb38:	e8 f5 08 f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81ffb3d:	85 c0                	test   %eax,%eax
 81ffb3f:	75 07                	jne    81ffb48 <_ZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 81ffb41:	b8 01 00 00 00       	mov    $0x1,%eax
 81ffb46:	eb 05                	jmp    81ffb4d <_ZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBuf+0x33>
 81ffb48:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffb4d:	84 c0                	test   %al,%al
 81ffb4f:	74 26                	je     81ffb77 <_ZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBuf+0x5d>
 81ffb51:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ffb58:	00 
 81ffb59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ffb60:	00 
 81ffb61:	c7 44 24 04 40 f8 bc 	movl   $0x8bcf840,0x4(%esp)
 81ffb68:	08 
 81ffb69:	c7 04 24 cd 93 00 00 	movl   $0x93cd,(%esp)
 81ffb70:	e8 62 0d 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ffb75:	eb 60                	jmp    81ffbd7 <_ZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBuf+0xbd>
 81ffb77:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffb7a:	89 04 24             	mov    %eax,(%esp)
 81ffb7d:	e8 ea f8 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81ffb82:	85 c0                	test   %eax,%eax
 81ffb84:	0f 95 c0             	setne  %al
 81ffb87:	84 c0                	test   %al,%al
 81ffb89:	74 47                	je     81ffbd2 <_ZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBuf+0xb8>
 81ffb8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffb8e:	89 04 24             	mov    %eax,(%esp)
 81ffb91:	e8 d6 f8 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81ffb96:	89 c6                	mov    %eax,%esi
 81ffb98:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffb9b:	89 04 24             	mov    %eax,(%esp)
 81ffb9e:	e8 ab c0 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81ffba3:	89 c3                	mov    %eax,%ebx
 81ffba5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffba8:	89 04 24             	mov    %eax,(%esp)
 81ffbab:	e8 e0 c0 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81ffbb0:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81ffbb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ffbba:	89 14 24             	mov    %edx,(%esp)
 81ffbbd:	e8 f6 d7 f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81ffbc2:	89 74 24 08          	mov    %esi,0x8(%esp)
 81ffbc6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ffbca:	89 04 24             	mov    %eax,(%esp)
 81ffbcd:	e8 7c e1 26 00       	call   846dd4e <_ZN17CGuildServerProxy29SendPacketCallGuildAllMembersEjj>
 81ffbd2:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffbd7:	83 c4 10             	add    $0x10,%esp
 81ffbda:	5b                   	pop    %ebx
 81ffbdb:	5e                   	pop    %esi
 81ffbdc:	5d                   	pop    %ebp
 81ffbdd:	c3                   	ret

```

```c
// Dispatcher_CallGuildAllMembers::dispatch_sig @ 0x81ffb1a

/* Dispatcher_CallGuildAllMembers::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CallGuildAllMembers::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  CGuildServerProxy *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081ffb4d;
    }
  }
  bVar1 = true;
LAB_081ffb4d:
  if (bVar1) {
    uVar3 = LineFunc(0x93cd,
                     "virtual int Dispatcher_CallGuildAllMembers::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar3 = CUser::GetServerGroup((CUser *)param_2);
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar3)
      ;
      CGuildServerProxy::SendPacketCallGuildAllMembers(this,uVar5,uVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}

```

