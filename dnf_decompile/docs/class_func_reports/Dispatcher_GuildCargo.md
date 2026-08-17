# Dispatcher_GuildCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d0a6a Dispatcher_GuildCargo::check_error  [0x081d0a6a-0x81d0ae1] ===
 81d0a6a:	55                   	push   %ebp
 81d0a6b:	89 e5                	mov    %esp,%ebp
 81d0a6d:	83 ec 18             	sub    $0x18,%esp
 81d0a70:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0a73:	89 04 24             	mov    %eax,(%esp)
 81d0a76:	e8 11 99 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d0a7b:	83 f8 03             	cmp    $0x3,%eax
 81d0a7e:	75 0f                	jne    81d0a8f <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81d0a80:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0a83:	89 04 24             	mov    %eax,(%esp)
 81d0a86:	e8 a7 f9 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d0a8b:	85 c0                	test   %eax,%eax
 81d0a8d:	75 07                	jne    81d0a96 <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81d0a8f:	b8 01 00 00 00       	mov    $0x1,%eax
 81d0a94:	eb 05                	jmp    81d0a9b <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81d0a96:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0a9b:	84 c0                	test   %al,%al
 81d0a9d:	74 07                	je     81d0aa6 <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81d0a9f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d0aa4:	eb 39                	jmp    81d0adf <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d0aa6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0aa9:	89 04 24             	mov    %eax,(%esp)
 81d0aac:	e8 bb e9 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d0ab1:	85 c0                	test   %eax,%eax
 81d0ab3:	0f 94 c0             	sete   %al
 81d0ab6:	84 c0                	test   %al,%al
 81d0ab8:	74 07                	je     81d0ac1 <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x57>
 81d0aba:	b8 64 00 00 00       	mov    $0x64,%eax
 81d0abf:	eb 1e                	jmp    81d0adf <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d0ac1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0ac4:	89 04 24             	mov    %eax,(%esp)
 81d0ac7:	e8 0c f7 05 00       	call   82301d8 <_ZN5CUser16IsExistGuildAgitEv>
 81d0acc:	83 f0 01             	xor    $0x1,%eax
 81d0acf:	84 c0                	test   %al,%al
 81d0ad1:	74 07                	je     81d0ada <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x70>
 81d0ad3:	b8 b5 00 00 00       	mov    $0xb5,%eax
 81d0ad8:	eb 05                	jmp    81d0adf <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase+0x75>
 81d0ada:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0adf:	c9                   	leave
 81d0ae0:	c3                   	ret
 81d0ae1:	90                   	nop

```

```c
// Dispatcher_GuildCargo::check_error @ 0x81d0a6a

/* Dispatcher_GuildCargo::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_GuildCargo::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

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
      goto LAB_081d0a9b;
    }
  }
  bVar1 = true;
LAB_081d0a9b:
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
// === 081d0ae2 Dispatcher_GuildCargo::process  [0x081d0ae2-0x81d0bf9] ===
 81d0ae2:	55                   	push   %ebp
 81d0ae3:	89 e5                	mov    %esp,%ebp
 81d0ae5:	56                   	push   %esi
 81d0ae6:	53                   	push   %ebx
 81d0ae7:	83 ec 30             	sub    $0x30,%esp
 81d0aea:	8b 45 14             	mov    0x14(%ebp),%eax
 81d0aed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0af0:	8b 45 14             	mov    0x14(%ebp),%eax
 81d0af3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d0af7:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0afa:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0afe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0b01:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0b05:	8b 45 08             	mov    0x8(%ebp),%eax
 81d0b08:	89 04 24             	mov    %eax,(%esp)
 81d0b0b:	e8 5a ff ff ff       	call   81d0a6a <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d0b10:	89 c2                	mov    %eax,%edx
 81d0b12:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0b15:	89 50 04             	mov    %edx,0x4(%eax)
 81d0b18:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0b1b:	8b 40 04             	mov    0x4(%eax),%eax
 81d0b1e:	85 c0                	test   %eax,%eax
 81d0b20:	7e 0a                	jle    81d0b2c <_ZN21Dispatcher_GuildCargo7processEP5CUserR8MSG_BASER9ParamBase+0x4a>
 81d0b22:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0b27:	e9 c7 00 00 00       	jmp    81d0bf3 <_ZN21Dispatcher_GuildCargo7processEP5CUserR8MSG_BASER9ParamBase+0x111>
 81d0b2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0b2f:	8b 40 04             	mov    0x4(%eax),%eax
 81d0b32:	85 c0                	test   %eax,%eax
 81d0b34:	79 32                	jns    81d0b68 <_ZN21Dispatcher_GuildCargo7processEP5CUserR8MSG_BASER9ParamBase+0x86>
 81d0b36:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0b39:	89 04 24             	mov    %eax,(%esp)
 81d0b3c:	e8 2d 98 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d0b41:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d0b44:	8b 52 04             	mov    0x4(%edx),%edx
 81d0b47:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d0b4b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d0b4f:	c7 44 24 04 c0 3c bd 	movl   $0x8bd3cc0,0x4(%esp)
 81d0b56:	08 
 81d0b57:	c7 04 24 26 2c 00 00 	movl   $0x2c26,(%esp)
 81d0b5e:	e8 74 fd 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0b63:	e9 8b 00 00 00       	jmp    81d0bf3 <_ZN21Dispatcher_GuildCargo7processEP5CUserR8MSG_BASER9ParamBase+0x111>
 81d0b68:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 81d0b6b:	89 04 24             	mov    %eax,(%esp)
 81d0b6e:	e8 df b2 05 00       	call   822be52 <_ZN25Packet_Guild_Cargo_RequstC1Ev>
 81d0b73:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0b76:	89 04 24             	mov    %eax,(%esp)
 81d0b79:	e8 ee e8 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d0b7e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d0b81:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0b84:	89 04 24             	mov    %eax,(%esp)
 81d0b87:	e8 c2 b0 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d0b8c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d0b8f:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 81d0b93:	0f b7 f0             	movzwl %ax,%esi
 81d0b96:	8d 5d e2             	lea    -0x1e(%ebp),%ebx
 81d0b99:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0b9c:	89 04 24             	mov    %eax,(%esp)
 81d0b9f:	e8 ec b0 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d0ba4:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d0baa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0bae:	89 14 24             	mov    %edx,(%esp)
 81d0bb1:	e8 02 c8 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d0bb6:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d0bba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d0bbe:	89 04 24             	mov    %eax,(%esp)
 81d0bc1:	e8 08 d1 29 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 81d0bc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0bc9:	89 04 24             	mov    %eax,(%esp)
 81d0bcc:	e8 9b e8 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d0bd1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d0bd4:	81 c2 00 97 07 00    	add    $0x79700,%edx
 81d0bda:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0bde:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d0be5:	00 
 81d0be6:	89 14 24             	mov    %edx,(%esp)
 81d0be9:	e8 f8 58 4b 00       	call   86864e6 <_ZN15cUserHistoryLog10GuildCargoE31ENUM_GUILD_CARGO_HISTORY_REASONi>
 81d0bee:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0bf3:	83 c4 30             	add    $0x30,%esp
 81d0bf6:	5b                   	pop    %ebx
 81d0bf7:	5e                   	pop    %esi
 81d0bf8:	5d                   	pop    %ebp
 81d0bf9:	c3                   	ret

```

```c
// Dispatcher_GuildCargo::process @ 0x81d0ae2

/* Dispatcher_GuildCargo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargo::process
          (Dispatcher_GuildCargo *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CGuildServerProxy *this_00;
  Packet_Guild_Cargo_Requst local_22 [2];
  ushort local_20;
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_10 + 4) = uVar1;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2c26,
                       "virtual int Dispatcher_GuildCargo::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_10 + 4),uVar2);
    }
    else {
      Packet_Guild_Cargo_Requst::Packet_Guild_Cargo_Requst(local_22);
      local_18 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendTcpPacket(this_00,(char *)local_22,(uint)local_20);
      uVar1 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      cUserHistoryLog::GuildCargo((cUserHistoryLog *)(param_1 + 0x79700),0,uVar1);
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
// === 081d0a60 Dispatcher_GuildCargo::read  [0x081d0a60-0x81d0a69] ===
 81d0a60:	55                   	push   %ebp
 81d0a61:	89 e5                	mov    %esp,%ebp
 81d0a63:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0a68:	5d                   	pop    %ebp
 81d0a69:	c3                   	ret

```

```c
// Dispatcher_GuildCargo::read @ 0x81d0a60

/* Dispatcher_GuildCargo::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_GuildCargo::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081d0bfa Dispatcher_GuildCargo::send  [0x081d0bfa-0x81d0c31] ===
 81d0bfa:	55                   	push   %ebp
 81d0bfb:	89 e5                	mov    %esp,%ebp
 81d0bfd:	83 ec 28             	sub    $0x28,%esp
 81d0c00:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0c03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0c06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0c09:	8b 40 04             	mov    0x4(%eax),%eax
 81d0c0c:	85 c0                	test   %eax,%eax
 81d0c0e:	74 20                	je     81d0c30 <_ZN21Dispatcher_GuildCargo4sendEP5CUserR9ParamBase+0x36>
 81d0c10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0c13:	8b 40 04             	mov    0x4(%eax),%eax
 81d0c16:	0f b6 c0             	movzbl %al,%eax
 81d0c19:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0c1d:	c7 44 24 04 09 01 00 	movl   $0x109,0x4(%esp)
 81d0c24:	00 
 81d0c25:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0c28:	89 04 24             	mov    %eax,(%esp)
 81d0c2b:	e8 12 b3 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d0c30:	c9                   	leave
 81d0c31:	c3                   	ret

```

```c
// Dispatcher_GuildCargo::send @ 0x81d0bfa

/* Dispatcher_GuildCargo::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargo::send(Dispatcher_GuildCargo *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

