# Dispatcher_ApproveJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d50b4 Dispatcher_ApproveJoinGuild::process  [0x081d50b4-0x81d518f] ===
 81d50b4:	55                   	push   %ebp
 81d50b5:	89 e5                	mov    %esp,%ebp
 81d50b7:	56                   	push   %esi
 81d50b8:	53                   	push   %ebx
 81d50b9:	83 ec 30             	sub    $0x30,%esp
 81d50bc:	8b 45 10             	mov    0x10(%ebp),%eax
 81d50bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d50c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d50c5:	89 04 24             	mov    %eax,(%esp)
 81d50c8:	e8 bf 52 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d50cd:	83 f8 03             	cmp    $0x3,%eax
 81d50d0:	0f 95 c0             	setne  %al
 81d50d3:	84 c0                	test   %al,%al
 81d50d5:	74 0a                	je     81d50e1 <_ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d50d7:	b8 00 00 00 00       	mov    $0x0,%eax
 81d50dc:	e9 a7 00 00 00       	jmp    81d5188 <_ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xd4>
 81d50e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d50e4:	89 04 24             	mov    %eax,(%esp)
 81d50e7:	e8 86 b0 05 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 81d50ec:	83 f0 01             	xor    $0x1,%eax
 81d50ef:	84 c0                	test   %al,%al
 81d50f1:	74 19                	je     81d510c <_ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x58>
 81d50f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d50f6:	89 04 24             	mov    %eax,(%esp)
 81d50f9:	e8 16 73 49 00       	call   866c414 <_ZN5CUser16IsSubGuildMasterEv>
 81d50fe:	83 f0 01             	xor    $0x1,%eax
 81d5101:	84 c0                	test   %al,%al
 81d5103:	74 07                	je     81d510c <_ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x58>
 81d5105:	b8 01 00 00 00       	mov    $0x1,%eax
 81d510a:	eb 05                	jmp    81d5111 <_ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x5d>
 81d510c:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5111:	84 c0                	test   %al,%al
 81d5113:	74 07                	je     81d511c <_ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x68>
 81d5115:	b8 00 00 00 00       	mov    $0x0,%eax
 81d511a:	eb 6c                	jmp    81d5188 <_ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xd4>
 81d511c:	8d 45 de             	lea    -0x22(%ebp),%eax
 81d511f:	89 04 24             	mov    %eax,(%esp)
 81d5122:	e8 1b 72 05 00       	call   822c342 <_ZN25Packet_Approve_Join_GuildC1Ev>
 81d5127:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d512a:	89 04 24             	mov    %eax,(%esp)
 81d512d:	e8 3a a3 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d5132:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d5135:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5138:	89 04 24             	mov    %eax,(%esp)
 81d513b:	e8 0e 6b ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d5140:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d5143:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5146:	8b 40 0d             	mov    0xd(%eax),%eax
 81d5149:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d514c:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 81d5150:	0f b7 f0             	movzwl %ax,%esi
 81d5153:	8d 5d de             	lea    -0x22(%ebp),%ebx
 81d5156:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5159:	89 04 24             	mov    %eax,(%esp)
 81d515c:	e8 2f 6b ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d5161:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d5167:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d516b:	89 14 24             	mov    %edx,(%esp)
 81d516e:	e8 45 82 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d5173:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d5177:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d517b:	89 04 24             	mov    %eax,(%esp)
 81d517e:	e8 4b 8b 29 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 81d5183:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5188:	83 c4 30             	add    $0x30,%esp
 81d518b:	5b                   	pop    %ebx
 81d518c:	5e                   	pop    %esi
 81d518d:	5d                   	pop    %ebp
 81d518e:	c3                   	ret
 81d518f:	90                   	nop

```

```c
// Dispatcher_ApproveJoinGuild::process @ 0x81d50b4

/* Dispatcher_ApproveJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_ApproveJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  Packet_Approve_Join_Guild local_26 [2];
  ushort local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 3) {
    cVar2 = CUser::IsGuildMaster((CUser *)param_2);
    if ((cVar2 == '\x01') || (cVar2 = CUser::IsSubGuildMaster((CUser *)param_2), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      Packet_Approve_Join_Guild::Packet_Approve_Join_Guild(local_26);
      local_1c = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      local_18 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      local_14 = *(undefined4 *)(local_10 + 0xd);
      uVar4 = CUser::GetServerGroup((CUser *)param_2);
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4)
      ;
      CGuildServerProxy::SendTcpPacket(this,(char *)local_26,(uint)local_24);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d505e Dispatcher_ApproveJoinGuild::read  [0x081d505e-0x81d50b3] ===
 81d505e:	55                   	push   %ebp
 81d505f:	89 e5                	mov    %esp,%ebp
 81d5061:	83 ec 28             	sub    $0x28,%esp
 81d5064:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5067:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d506a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d506d:	83 c0 0d             	add    $0xd,%eax
 81d5070:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5074:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5077:	89 04 24             	mov    %eax,(%esp)
 81d507a:	e8 c1 81 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81d507f:	83 f0 01             	xor    $0x1,%eax
 81d5082:	84 c0                	test   %al,%al
 81d5084:	74 26                	je     81d50ac <_ZN27Dispatcher_ApproveJoinGuild4readER9PacketBufR8MSG_BASE+0x4e>
 81d5086:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d508d:	00 
 81d508e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5095:	00 
 81d5096:	c7 44 24 04 40 31 bd 	movl   $0x8bd3140,0x4(%esp)
 81d509d:	08 
 81d509e:	c7 04 24 5a 35 00 00 	movl   $0x355a,(%esp)
 81d50a5:	e8 2d b8 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d50aa:	eb 05                	jmp    81d50b1 <_ZN27Dispatcher_ApproveJoinGuild4readER9PacketBufR8MSG_BASE+0x53>
 81d50ac:	b8 00 00 00 00       	mov    $0x0,%eax
 81d50b1:	c9                   	leave
 81d50b2:	c3                   	ret
 81d50b3:	90                   	nop

```

```c
// Dispatcher_ApproveJoinGuild::read @ 0x81d505e

/* Dispatcher_ApproveJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ApproveJoinGuild::read
          (Dispatcher_ApproveJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x355a,"virtual int Dispatcher_ApproveJoinGuild::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

