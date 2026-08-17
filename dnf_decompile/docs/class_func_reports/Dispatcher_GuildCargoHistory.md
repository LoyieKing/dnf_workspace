# Dispatcher_GuildCargoHistory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d0c3c Dispatcher_GuildCargoHistory::check_error  [0x081d0c3c-0x81d0cb3] ===
 81d0c3c:	55                   	push   %ebp
 81d0c3d:	89 e5                	mov    %esp,%ebp
 81d0c3f:	83 ec 18             	sub    $0x18,%esp
 81d0c42:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0c45:	89 04 24             	mov    %eax,(%esp)
 81d0c48:	e8 3f 97 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d0c4d:	83 f8 03             	cmp    $0x3,%eax
 81d0c50:	75 0f                	jne    81d0c61 <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81d0c52:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0c55:	89 04 24             	mov    %eax,(%esp)
 81d0c58:	e8 d5 f7 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d0c5d:	85 c0                	test   %eax,%eax
 81d0c5f:	75 07                	jne    81d0c68 <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81d0c61:	b8 01 00 00 00       	mov    $0x1,%eax
 81d0c66:	eb 05                	jmp    81d0c6d <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81d0c68:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0c6d:	84 c0                	test   %al,%al
 81d0c6f:	74 07                	je     81d0c78 <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81d0c71:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d0c76:	eb 39                	jmp    81d0cb1 <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d0c78:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0c7b:	89 04 24             	mov    %eax,(%esp)
 81d0c7e:	e8 e9 e7 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d0c83:	85 c0                	test   %eax,%eax
 81d0c85:	0f 94 c0             	sete   %al
 81d0c88:	84 c0                	test   %al,%al
 81d0c8a:	74 07                	je     81d0c93 <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x57>
 81d0c8c:	b8 64 00 00 00       	mov    $0x64,%eax
 81d0c91:	eb 1e                	jmp    81d0cb1 <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d0c93:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0c96:	89 04 24             	mov    %eax,(%esp)
 81d0c99:	e8 3a f5 05 00       	call   82301d8 <_ZN5CUser16IsExistGuildAgitEv>
 81d0c9e:	83 f0 01             	xor    $0x1,%eax
 81d0ca1:	84 c0                	test   %al,%al
 81d0ca3:	74 07                	je     81d0cac <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x70>
 81d0ca5:	b8 b5 00 00 00       	mov    $0xb5,%eax
 81d0caa:	eb 05                	jmp    81d0cb1 <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d0cac:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0cb1:	c9                   	leave
 81d0cb2:	c3                   	ret
 81d0cb3:	90                   	nop

```

```c
// Dispatcher_GuildCargoHistory::check_error @ 0x81d0c3c

/* Dispatcher_GuildCargoHistory::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_GuildCargoHistory::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_081d0c6d;
    }
  }
  bVar1 = true;
LAB_081d0c6d:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar4 = 100;
    }
    else {
      cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
      if (cVar2 == '\x01') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0xb5;
      }
    }
  }
  return uVar4;
}

```

---

## process

```asm
// === 081d0cb4 Dispatcher_GuildCargoHistory::process  [0x081d0cb4-0x81d0dc5] ===
 81d0cb4:	55                   	push   %ebp
 81d0cb5:	89 e5                	mov    %esp,%ebp
 81d0cb7:	56                   	push   %esi
 81d0cb8:	53                   	push   %ebx
 81d0cb9:	83 ec 30             	sub    $0x30,%esp
 81d0cbc:	8b 45 14             	mov    0x14(%ebp),%eax
 81d0cbf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0cc2:	8b 45 14             	mov    0x14(%ebp),%eax
 81d0cc5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d0cc9:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0ccc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0cd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0cd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0cd7:	8b 45 08             	mov    0x8(%ebp),%eax
 81d0cda:	89 04 24             	mov    %eax,(%esp)
 81d0cdd:	e8 5a ff ff ff       	call   81d0c3c <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d0ce2:	89 c2                	mov    %eax,%edx
 81d0ce4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0ce7:	89 50 04             	mov    %edx,0x4(%eax)
 81d0cea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0ced:	8b 40 04             	mov    0x4(%eax),%eax
 81d0cf0:	85 c0                	test   %eax,%eax
 81d0cf2:	7e 0a                	jle    81d0cfe <_ZN28Dispatcher_GuildCargoHistory7processEP5CUserR8MSG_BASER9ParamBase+0x4a>
 81d0cf4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0cf9:	e9 c0 00 00 00       	jmp    81d0dbe <_ZN28Dispatcher_GuildCargoHistory7processEP5CUserR8MSG_BASER9ParamBase+0x10a>
 81d0cfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0d01:	8b 40 04             	mov    0x4(%eax),%eax
 81d0d04:	85 c0                	test   %eax,%eax
 81d0d06:	79 2b                	jns    81d0d33 <_ZN28Dispatcher_GuildCargoHistory7processEP5CUserR8MSG_BASER9ParamBase+0x7f>
 81d0d08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0d0b:	8b 40 04             	mov    0x4(%eax),%eax
 81d0d0e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0d15:	00 
 81d0d16:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0d1a:	c7 44 24 04 60 3c bd 	movl   $0x8bd3c60,0x4(%esp)
 81d0d21:	08 
 81d0d22:	c7 04 24 6d 2c 00 00 	movl   $0x2c6d,(%esp)
 81d0d29:	e8 a9 fb 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0d2e:	e9 8b 00 00 00       	jmp    81d0dbe <_ZN28Dispatcher_GuildCargoHistory7processEP5CUserR8MSG_BASER9ParamBase+0x10a>
 81d0d33:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 81d0d36:	89 04 24             	mov    %eax,(%esp)
 81d0d39:	e8 4c b1 05 00       	call   822be8a <_ZN34Packet_Guild_Cargo_History_RequestC1Ev>
 81d0d3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0d41:	89 04 24             	mov    %eax,(%esp)
 81d0d44:	e8 23 e7 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d0d49:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d0d4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0d4f:	89 04 24             	mov    %eax,(%esp)
 81d0d52:	e8 f7 ae ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d0d57:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d0d5a:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 81d0d5e:	0f b7 f0             	movzwl %ax,%esi
 81d0d61:	8d 5d e2             	lea    -0x1e(%ebp),%ebx
 81d0d64:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0d67:	89 04 24             	mov    %eax,(%esp)
 81d0d6a:	e8 21 af ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d0d6f:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d0d75:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0d79:	89 14 24             	mov    %edx,(%esp)
 81d0d7c:	e8 37 c6 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d0d81:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d0d85:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d0d89:	89 04 24             	mov    %eax,(%esp)
 81d0d8c:	e8 3d cf 29 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 81d0d91:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0d94:	89 04 24             	mov    %eax,(%esp)
 81d0d97:	e8 d0 e6 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d0d9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d0d9f:	81 c2 00 97 07 00    	add    $0x79700,%edx
 81d0da5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0da9:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81d0db0:	00 
 81d0db1:	89 14 24             	mov    %edx,(%esp)
 81d0db4:	e8 8b 57 4b 00       	call   8686544 <_ZN15cUserHistoryLog17GuildCargoHistoryE31ENUM_GUILD_CARGO_HISTORY_REASONi>
 81d0db9:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0dbe:	83 c4 30             	add    $0x30,%esp
 81d0dc1:	5b                   	pop    %ebx
 81d0dc2:	5e                   	pop    %esi
 81d0dc3:	5d                   	pop    %ebp
 81d0dc4:	c3                   	ret
 81d0dc5:	90                   	nop

```

```c
// Dispatcher_GuildCargoHistory::process @ 0x81d0cb4

/* Dispatcher_GuildCargoHistory::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargoHistory::process
          (Dispatcher_GuildCargoHistory *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Cargo_History_Request local_22 [2];
  ushort local_20;
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_10 + 4) = uVar1;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar1 = LineFunc(0x2c6d,
                       "virtual int Dispatcher_GuildCargoHistory::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_10 + 4),0);
    }
    else {
      Packet_Guild_Cargo_History_Request::Packet_Guild_Cargo_History_Request(local_22);
      local_18 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendTcpPacket(this_00,(char *)local_22,(uint)local_20);
      uVar1 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      cUserHistoryLog::GuildCargoHistory((cUserHistoryLog *)(param_1 + 0x79700),3,uVar1);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081d0c32 Dispatcher_GuildCargoHistory::read  [0x081d0c32-0x81d0c3b] ===
 81d0c32:	55                   	push   %ebp
 81d0c33:	89 e5                	mov    %esp,%ebp
 81d0c35:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0c3a:	5d                   	pop    %ebp
 81d0c3b:	c3                   	ret

```

```c
// Dispatcher_GuildCargoHistory::read @ 0x81d0c32

/* Dispatcher_GuildCargoHistory::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_GuildCargoHistory::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081d0dc6 Dispatcher_GuildCargoHistory::send  [0x081d0dc6-0x81d0dfd] ===
 81d0dc6:	55                   	push   %ebp
 81d0dc7:	89 e5                	mov    %esp,%ebp
 81d0dc9:	83 ec 28             	sub    $0x28,%esp
 81d0dcc:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0dcf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0dd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0dd5:	8b 40 04             	mov    0x4(%eax),%eax
 81d0dd8:	85 c0                	test   %eax,%eax
 81d0dda:	74 20                	je     81d0dfc <_ZN28Dispatcher_GuildCargoHistory4sendEP5CUserR9ParamBase+0x36>
 81d0ddc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0ddf:	8b 40 04             	mov    0x4(%eax),%eax
 81d0de2:	0f b6 c0             	movzbl %al,%eax
 81d0de5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0de9:	c7 44 24 04 09 01 00 	movl   $0x109,0x4(%esp)
 81d0df0:	00 
 81d0df1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0df4:	89 04 24             	mov    %eax,(%esp)
 81d0df7:	e8 46 b1 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d0dfc:	c9                   	leave
 81d0dfd:	c3                   	ret

```

```c
// Dispatcher_GuildCargoHistory::send @ 0x81d0dc6

/* Dispatcher_GuildCargoHistory::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargoHistory::send
          (Dispatcher_GuildCargoHistory *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

