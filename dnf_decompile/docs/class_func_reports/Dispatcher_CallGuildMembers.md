# Dispatcher_CallGuildMembers

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ffa56 Dispatcher_CallGuildMembers::dispatch_sig  [0x081ffa56-0x81ffb19] ===
 81ffa56:	55                   	push   %ebp
 81ffa57:	89 e5                	mov    %esp,%ebp
 81ffa59:	56                   	push   %esi
 81ffa5a:	53                   	push   %ebx
 81ffa5b:	83 ec 10             	sub    $0x10,%esp
 81ffa5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffa61:	89 04 24             	mov    %eax,(%esp)
 81ffa64:	e8 23 a9 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ffa69:	83 f8 02             	cmp    $0x2,%eax
 81ffa6c:	7e 0f                	jle    81ffa7d <_ZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81ffa6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffa71:	89 04 24             	mov    %eax,(%esp)
 81ffa74:	e8 b9 09 f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81ffa79:	85 c0                	test   %eax,%eax
 81ffa7b:	75 07                	jne    81ffa84 <_ZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 81ffa7d:	b8 01 00 00 00       	mov    $0x1,%eax
 81ffa82:	eb 05                	jmp    81ffa89 <_ZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBuf+0x33>
 81ffa84:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffa89:	84 c0                	test   %al,%al
 81ffa8b:	74 26                	je     81ffab3 <_ZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBuf+0x5d>
 81ffa8d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ffa94:	00 
 81ffa95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ffa9c:	00 
 81ffa9d:	c7 44 24 04 a0 f8 bc 	movl   $0x8bcf8a0,0x4(%esp)
 81ffaa4:	08 
 81ffaa5:	c7 04 24 c0 93 00 00 	movl   $0x93c0,(%esp)
 81ffaac:	e8 26 0e 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ffab1:	eb 60                	jmp    81ffb13 <_ZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBuf+0xbd>
 81ffab3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffab6:	89 04 24             	mov    %eax,(%esp)
 81ffab9:	e8 ae f9 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81ffabe:	85 c0                	test   %eax,%eax
 81ffac0:	0f 95 c0             	setne  %al
 81ffac3:	84 c0                	test   %al,%al
 81ffac5:	74 47                	je     81ffb0e <_ZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBuf+0xb8>
 81ffac7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffaca:	89 04 24             	mov    %eax,(%esp)
 81ffacd:	e8 9a f9 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81ffad2:	89 c6                	mov    %eax,%esi
 81ffad4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffad7:	89 04 24             	mov    %eax,(%esp)
 81ffada:	e8 6f c1 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81ffadf:	89 c3                	mov    %eax,%ebx
 81ffae1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffae4:	89 04 24             	mov    %eax,(%esp)
 81ffae7:	e8 a4 c1 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81ffaec:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81ffaf2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ffaf6:	89 14 24             	mov    %edx,(%esp)
 81ffaf9:	e8 ba d8 f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81ffafe:	89 74 24 08          	mov    %esi,0x8(%esp)
 81ffb02:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ffb06:	89 04 24             	mov    %eax,(%esp)
 81ffb09:	e8 04 e2 26 00       	call   846dd12 <_ZN17CGuildServerProxy26SendPacketCallGuildMembersEjj>
 81ffb0e:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffb13:	83 c4 10             	add    $0x10,%esp
 81ffb16:	5b                   	pop    %ebx
 81ffb17:	5e                   	pop    %esi
 81ffb18:	5d                   	pop    %ebp
 81ffb19:	c3                   	ret

```

```c
// Dispatcher_CallGuildMembers::dispatch_sig @ 0x81ffa56

/* Dispatcher_CallGuildMembers::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CallGuildMembers::dispatch_sig(CUser *param_1,PacketBuf *param_2)

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
      goto LAB_081ffa89;
    }
  }
  bVar1 = true;
LAB_081ffa89:
  if (bVar1) {
    uVar3 = LineFunc(0x93c0,
                     "virtual int Dispatcher_CallGuildMembers::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
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
      CGuildServerProxy::SendPacketCallGuildMembers(this,uVar5,uVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}

```

