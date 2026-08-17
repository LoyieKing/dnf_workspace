# Dispatcher_CheckJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d4bf6 Dispatcher_CheckJoinGuild::process  [0x081d4bf6-0x81d4ce1] ===
 81d4bf6:	55                   	push   %ebp
 81d4bf7:	89 e5                	mov    %esp,%ebp
 81d4bf9:	83 ec 38             	sub    $0x38,%esp
 81d4bfc:	8b 45 10             	mov    0x10(%ebp),%eax
 81d4bff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d4c02:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4c05:	89 04 24             	mov    %eax,(%esp)
 81d4c08:	e8 7f 57 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d4c0d:	83 f8 03             	cmp    $0x3,%eax
 81d4c10:	0f 95 c0             	setne  %al
 81d4c13:	84 c0                	test   %al,%al
 81d4c15:	74 0a                	je     81d4c21 <_ZN25Dispatcher_CheckJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x2b>
 81d4c17:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4c1c:	e9 bf 00 00 00       	jmp    81d4ce0 <_ZN25Dispatcher_CheckJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xea>
 81d4c21:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4c24:	89 04 24             	mov    %eax,(%esp)
 81d4c27:	e8 40 a8 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d4c2c:	85 c0                	test   %eax,%eax
 81d4c2e:	0f 95 c0             	setne  %al
 81d4c31:	84 c0                	test   %al,%al
 81d4c33:	74 25                	je     81d4c5a <_ZN25Dispatcher_CheckJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x64>
 81d4c35:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81d4c3c:	00 
 81d4c3d:	c7 44 24 04 5c 01 00 	movl   $0x15c,0x4(%esp)
 81d4c44:	00 
 81d4c45:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4c48:	89 04 24             	mov    %eax,(%esp)
 81d4c4b:	e8 f2 72 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d4c50:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4c55:	e9 86 00 00 00       	jmp    81d4ce0 <_ZN25Dispatcher_CheckJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xea>
 81d4c5a:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 81d4c61:	00 
 81d4c62:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d4c69:	00 
 81d4c6a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d4c6d:	89 04 24             	mov    %eax,(%esp)
 81d4c70:	e8 4b 90 ea ff       	call   807dcc0 <memset@plt>
 81d4c75:	e8 2d 57 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d4c7a:	89 04 24             	mov    %eax,(%esp)
 81d4c7d:	e8 9c c6 f1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81d4c82:	84 c0                	test   %al,%al
 81d4c84:	74 10                	je     81d4c96 <_ZN25Dispatcher_CheckJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xa0>
 81d4c86:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4c89:	89 04 24             	mov    %eax,(%esp)
 81d4c8c:	e8 ff 6f ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d4c91:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d4c94:	eb 0e                	jmp    81d4ca4 <_ZN25Dispatcher_CheckJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xae>
 81d4c96:	e8 e6 74 ef ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81d4c9b:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81d4ca1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d4ca4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4ca7:	83 c0 11             	add    $0x11,%eax
 81d4caa:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81d4cb1:	00 
 81d4cb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4cb6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d4cb9:	89 04 24             	mov    %eax,(%esp)
 81d4cbc:	e8 0f 8c ea ff       	call   807d8d0 <strncpy@plt>
 81d4cc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4cc4:	89 04 24             	mov    %eax,(%esp)
 81d4cc7:	e8 ca 3f ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81d4ccc:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81d4ccf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d4cd3:	89 04 24             	mov    %eax,(%esp)
 81d4cd6:	e8 2b 7f 26 00       	call   843cc06 <_ZN17DB_CheckJoinGuild11makeRequestEiP20SIG_CHECK_JOIN_GUILD>
 81d4cdb:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4ce0:	c9                   	leave
 81d4ce1:	c3                   	ret

```

```c
// Dispatcher_CheckJoinGuild::process @ 0x81d4bf6

/* Dispatcher_CheckJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_CheckJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  SIG_CHECK_JOIN_GUILD local_2c [24];
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      memset(local_2c,0,0x1c);
      this = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
      if (cVar1 == '\0') {
        iVar2 = G_CEnvironment();
        local_14 = *(undefined4 *)(iVar2 + 0x378);
      }
      else {
        local_14 = CUser::GetServerGroup((CUser *)param_2);
      }
      strncpy((char *)local_2c,(char *)(local_10 + 0x11),0x16);
      iVar2 = CUser::GetUID((CUser *)param_2);
      DB_CheckJoinGuild::makeRequest(iVar2,local_2c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15c,0x12);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d4b4c Dispatcher_CheckJoinGuild::read  [0x081d4b4c-0x81d4bf5] ===
 81d4b4c:	55                   	push   %ebp
 81d4b4d:	89 e5                	mov    %esp,%ebp
 81d4b4f:	83 ec 28             	sub    $0x28,%esp
 81d4b52:	8b 45 10             	mov    0x10(%ebp),%eax
 81d4b55:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d4b58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4b5b:	83 c0 0d             	add    $0xd,%eax
 81d4b5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4b62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4b65:	89 04 24             	mov    %eax,(%esp)
 81d4b68:	e8 83 85 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d4b6d:	83 f0 01             	xor    $0x1,%eax
 81d4b70:	84 c0                	test   %al,%al
 81d4b72:	74 26                	je     81d4b9a <_ZN25Dispatcher_CheckJoinGuild4readER9PacketBufR8MSG_BASE+0x4e>
 81d4b74:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d4b7b:	00 
 81d4b7c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d4b83:	00 
 81d4b84:	c7 44 24 04 60 32 bd 	movl   $0x8bd3260,0x4(%esp)
 81d4b8b:	08 
 81d4b8c:	c7 04 24 db 34 00 00 	movl   $0x34db,(%esp)
 81d4b93:	e8 3f bd 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d4b98:	eb 59                	jmp    81d4bf3 <_ZN25Dispatcher_CheckJoinGuild4readER9PacketBufR8MSG_BASE+0xa7>
 81d4b9a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4b9d:	8b 40 0d             	mov    0xd(%eax),%eax
 81d4ba0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d4ba3:	83 c2 11             	add    $0x11,%edx
 81d4ba6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d4baa:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 81d4bb1:	00 
 81d4bb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d4bb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4bb9:	89 04 24             	mov    %eax,(%esp)
 81d4bbc:	e8 fb 86 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81d4bc1:	83 f0 01             	xor    $0x1,%eax
 81d4bc4:	84 c0                	test   %al,%al
 81d4bc6:	74 26                	je     81d4bee <_ZN25Dispatcher_CheckJoinGuild4readER9PacketBufR8MSG_BASE+0xa2>
 81d4bc8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d4bcf:	00 
 81d4bd0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d4bd7:	00 
 81d4bd8:	c7 44 24 04 60 32 bd 	movl   $0x8bd3260,0x4(%esp)
 81d4bdf:	08 
 81d4be0:	c7 04 24 de 34 00 00 	movl   $0x34de,(%esp)
 81d4be7:	e8 eb bc 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d4bec:	eb 05                	jmp    81d4bf3 <_ZN25Dispatcher_CheckJoinGuild4readER9PacketBufR8MSG_BASE+0xa7>
 81d4bee:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4bf3:	c9                   	leave
 81d4bf4:	c3                   	ret
 81d4bf5:	90                   	nop

```

```c
// Dispatcher_CheckJoinGuild::read @ 0x81d4b4c

/* Dispatcher_CheckJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CheckJoinGuild::read
          (Dispatcher_CheckJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x17,*(int *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x34de,"virtual int Dispatcher_CheckJoinGuild::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x34db,"virtual int Dispatcher_CheckJoinGuild::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}

```

