# Dispatcher_RequestJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d4e28 Dispatcher_RequestJoinGuild::process  [0x081d4e28-0x81d4f75] ===
 81d4e28:	55                   	push   %ebp
 81d4e29:	89 e5                	mov    %esp,%ebp
 81d4e2b:	83 ec 68             	sub    $0x68,%esp
 81d4e2e:	8b 45 10             	mov    0x10(%ebp),%eax
 81d4e31:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d4e34:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4e37:	89 04 24             	mov    %eax,(%esp)
 81d4e3a:	e8 4d 55 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d4e3f:	83 f8 03             	cmp    $0x3,%eax
 81d4e42:	0f 95 c0             	setne  %al
 81d4e45:	84 c0                	test   %al,%al
 81d4e47:	74 0a                	je     81d4e53 <_ZN27Dispatcher_RequestJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x2b>
 81d4e49:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4e4e:	e9 20 01 00 00       	jmp    81d4f73 <_ZN27Dispatcher_RequestJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x14b>
 81d4e53:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4e56:	89 04 24             	mov    %eax,(%esp)
 81d4e59:	e8 0e a6 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d4e5e:	85 c0                	test   %eax,%eax
 81d4e60:	0f 95 c0             	setne  %al
 81d4e63:	84 c0                	test   %al,%al
 81d4e65:	74 25                	je     81d4e8c <_ZN27Dispatcher_RequestJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x64>
 81d4e67:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81d4e6e:	00 
 81d4e6f:	c7 44 24 04 5d 01 00 	movl   $0x15d,0x4(%esp)
 81d4e76:	00 
 81d4e77:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4e7a:	89 04 24             	mov    %eax,(%esp)
 81d4e7d:	e8 c0 70 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d4e82:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4e87:	e9 e7 00 00 00       	jmp    81d4f73 <_ZN27Dispatcher_RequestJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x14b>
 81d4e8c:	c7 44 24 08 44 00 00 	movl   $0x44,0x8(%esp)
 81d4e93:	00 
 81d4e94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d4e9b:	00 
 81d4e9c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81d4e9f:	89 04 24             	mov    %eax,(%esp)
 81d4ea2:	e8 19 8e ea ff       	call   807dcc0 <memset@plt>
 81d4ea7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4eaa:	83 c0 11             	add    $0x11,%eax
 81d4ead:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81d4eb4:	00 
 81d4eb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4eb9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81d4ebc:	89 04 24             	mov    %eax,(%esp)
 81d4ebf:	e8 0c 8a ea ff       	call   807d8d0 <strncpy@plt>
 81d4ec4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4ec7:	89 04 24             	mov    %eax,(%esp)
 81d4eca:	e8 7f 6d ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d4ecf:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81d4ed2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4ed5:	89 04 24             	mov    %eax,(%esp)
 81d4ed8:	e8 91 54 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d4edd:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81d4ee0:	e8 c2 54 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d4ee5:	89 04 24             	mov    %eax,(%esp)
 81d4ee8:	e8 31 c4 f1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81d4eed:	84 c0                	test   %al,%al
 81d4eef:	74 10                	je     81d4f01 <_ZN27Dispatcher_RequestJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xd9>
 81d4ef1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4ef4:	89 04 24             	mov    %eax,(%esp)
 81d4ef7:	e8 94 6d ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d4efc:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81d4eff:	eb 0e                	jmp    81d4f0f <_ZN27Dispatcher_RequestJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xe7>
 81d4f01:	e8 7b 72 ef ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81d4f06:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81d4f0c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81d4f0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4f12:	89 04 24             	mov    %eax,(%esp)
 81d4f15:	e8 3c c1 f2 ff       	call   8101056 <_ZN5CUser12GetSsnStringEv>
 81d4f1a:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81d4f21:	00 
 81d4f22:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4f26:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81d4f29:	83 c0 24             	add    $0x24,%eax
 81d4f2c:	89 04 24             	mov    %eax,(%esp)
 81d4f2f:	e8 6c 89 ea ff       	call   807d8a0 <memcpy@plt>
 81d4f34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4f37:	83 c0 2c             	add    $0x2c,%eax
 81d4f3a:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 81d4f41:	00 
 81d4f42:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4f46:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81d4f49:	83 c0 27             	add    $0x27,%eax
 81d4f4c:	89 04 24             	mov    %eax,(%esp)
 81d4f4f:	e8 7c 89 ea ff       	call   807d8d0 <strncpy@plt>
 81d4f54:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4f57:	89 04 24             	mov    %eax,(%esp)
 81d4f5a:	e8 37 3d ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81d4f5f:	8d 55 b0             	lea    -0x50(%ebp),%edx
 81d4f62:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d4f66:	89 04 24             	mov    %eax,(%esp)
 81d4f69:	e8 2c 82 26 00       	call   843d19a <_ZN19DB_RequestJoinGuild11makeRequestEiP22SIG_REQUEST_JOIN_GUILD>
 81d4f6e:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4f73:	c9                   	leave
 81d4f74:	c3                   	ret
 81d4f75:	90                   	nop

```

```c
// Dispatcher_RequestJoinGuild::process @ 0x81d4e28

/* Dispatcher_RequestJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_RequestJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  void *__src;
  SIG_REQUEST_JOIN_GUILD local_54 [24];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [3];
  char acStack_2d [29];
  ParamBase *local_10;
  
  local_10 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      memset(local_54,0,0x44);
      strncpy((char *)local_54,(char *)(local_10 + 0x11),0x16);
      local_3c = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      local_38 = CUser::get_acc_id((CUser *)param_2);
      this = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
      if (cVar1 == '\0') {
        iVar2 = G_CEnvironment();
        local_34 = *(undefined4 *)(iVar2 + 0x378);
      }
      else {
        local_34 = CUser::GetServerGroup((CUser *)param_2);
      }
      __src = (void *)CUser::GetSsnString((CUser *)param_2);
      memcpy(auStack_30,__src,2);
      strncpy(acStack_2d,(char *)(local_10 + 0x2c),0x19);
      iVar2 = CUser::GetUID((CUser *)param_2);
      DB_RequestJoinGuild::makeRequest(iVar2,local_54);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15d,0x12);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d4ce2 Dispatcher_RequestJoinGuild::read  [0x081d4ce2-0x81d4e27] ===
 81d4ce2:	55                   	push   %ebp
 81d4ce3:	89 e5                	mov    %esp,%ebp
 81d4ce5:	83 ec 28             	sub    $0x28,%esp
 81d4ce8:	8b 45 10             	mov    0x10(%ebp),%eax
 81d4ceb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d4cee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4cf1:	83 c0 0d             	add    $0xd,%eax
 81d4cf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4cf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4cfb:	89 04 24             	mov    %eax,(%esp)
 81d4cfe:	e8 ed 83 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d4d03:	83 f0 01             	xor    $0x1,%eax
 81d4d06:	84 c0                	test   %al,%al
 81d4d08:	74 29                	je     81d4d33 <_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE+0x51>
 81d4d0a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d4d11:	00 
 81d4d12:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d4d19:	00 
 81d4d1a:	c7 44 24 04 00 32 bd 	movl   $0x8bd3200,0x4(%esp)
 81d4d21:	08 
 81d4d22:	c7 04 24 06 35 00 00 	movl   $0x3506,(%esp)
 81d4d29:	e8 a9 bb 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d4d2e:	e9 f2 00 00 00       	jmp    81d4e25 <_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE+0x143>
 81d4d33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4d36:	8b 40 0d             	mov    0xd(%eax),%eax
 81d4d39:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d4d3c:	83 c2 11             	add    $0x11,%edx
 81d4d3f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d4d43:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 81d4d4a:	00 
 81d4d4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d4d4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4d52:	89 04 24             	mov    %eax,(%esp)
 81d4d55:	e8 62 85 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81d4d5a:	83 f0 01             	xor    $0x1,%eax
 81d4d5d:	84 c0                	test   %al,%al
 81d4d5f:	74 29                	je     81d4d8a <_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE+0xa8>
 81d4d61:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d4d68:	00 
 81d4d69:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d4d70:	00 
 81d4d71:	c7 44 24 04 00 32 bd 	movl   $0x8bd3200,0x4(%esp)
 81d4d78:	08 
 81d4d79:	c7 04 24 09 35 00 00 	movl   $0x3509,(%esp)
 81d4d80:	e8 52 bb 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d4d85:	e9 9b 00 00 00       	jmp    81d4e25 <_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE+0x143>
 81d4d8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4d8d:	83 c0 28             	add    $0x28,%eax
 81d4d90:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4d94:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4d97:	89 04 24             	mov    %eax,(%esp)
 81d4d9a:	e8 51 83 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d4d9f:	83 f0 01             	xor    $0x1,%eax
 81d4da2:	84 c0                	test   %al,%al
 81d4da4:	74 26                	je     81d4dcc <_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE+0xea>
 81d4da6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d4dad:	00 
 81d4dae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d4db5:	00 
 81d4db6:	c7 44 24 04 00 32 bd 	movl   $0x8bd3200,0x4(%esp)
 81d4dbd:	08 
 81d4dbe:	c7 04 24 0d 35 00 00 	movl   $0x350d,(%esp)
 81d4dc5:	e8 0d bb 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d4dca:	eb 59                	jmp    81d4e25 <_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE+0x143>
 81d4dcc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4dcf:	8b 40 28             	mov    0x28(%eax),%eax
 81d4dd2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d4dd5:	83 c2 2c             	add    $0x2c,%edx
 81d4dd8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d4ddc:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 81d4de3:	00 
 81d4de4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d4de8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4deb:	89 04 24             	mov    %eax,(%esp)
 81d4dee:	e8 c9 84 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81d4df3:	83 f0 01             	xor    $0x1,%eax
 81d4df6:	84 c0                	test   %al,%al
 81d4df8:	74 26                	je     81d4e20 <_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE+0x13e>
 81d4dfa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d4e01:	00 
 81d4e02:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d4e09:	00 
 81d4e0a:	c7 44 24 04 00 32 bd 	movl   $0x8bd3200,0x4(%esp)
 81d4e11:	08 
 81d4e12:	c7 04 24 10 35 00 00 	movl   $0x3510,(%esp)
 81d4e19:	e8 b9 ba 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d4e1e:	eb 05                	jmp    81d4e25 <_ZN27Dispatcher_RequestJoinGuild4readER9PacketBufR8MSG_BASE+0x143>
 81d4e20:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4e25:	c9                   	leave
 81d4e26:	c3                   	ret
 81d4e27:	90                   	nop

```

```c
// Dispatcher_RequestJoinGuild::read @ 0x81d4ce2

/* Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestJoinGuild::read
          (Dispatcher_RequestJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x17,*(int *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x28));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x2c),0x1a,*(int *)(param_2 + 0x28));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x3510,
                           "virtual int Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)",0,
                           0);
        }
      }
      else {
        uVar2 = LineFunc(0x350d,
                         "virtual int Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x3509,"virtual int Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x3506,"virtual int Dispatcher_RequestJoinGuild::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

