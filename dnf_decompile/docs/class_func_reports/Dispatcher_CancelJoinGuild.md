# Dispatcher_CancelJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d4fcc Dispatcher_CancelJoinGuild::process  [0x081d4fcc-0x81d505d] ===
 81d4fcc:	55                   	push   %ebp
 81d4fcd:	89 e5                	mov    %esp,%ebp
 81d4fcf:	56                   	push   %esi
 81d4fd0:	53                   	push   %ebx
 81d4fd1:	83 ec 20             	sub    $0x20,%esp
 81d4fd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4fd7:	89 04 24             	mov    %eax,(%esp)
 81d4fda:	e8 ad 53 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d4fdf:	83 f8 03             	cmp    $0x3,%eax
 81d4fe2:	0f 95 c0             	setne  %al
 81d4fe5:	84 c0                	test   %al,%al
 81d4fe7:	74 07                	je     81d4ff0 <_ZN26Dispatcher_CancelJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x24>
 81d4fe9:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4fee:	eb 67                	jmp    81d5057 <_ZN26Dispatcher_CancelJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x8b>
 81d4ff0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4ff3:	89 04 24             	mov    %eax,(%esp)
 81d4ff6:	e8 71 a4 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d4ffb:	85 c0                	test   %eax,%eax
 81d4ffd:	0f 95 c0             	setne  %al
 81d5000:	84 c0                	test   %al,%al
 81d5002:	74 07                	je     81d500b <_ZN26Dispatcher_CancelJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81d5004:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5009:	eb 4c                	jmp    81d5057 <_ZN26Dispatcher_CancelJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x8b>
 81d500b:	8b 45 10             	mov    0x10(%ebp),%eax
 81d500e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5011:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5014:	89 04 24             	mov    %eax,(%esp)
 81d5017:	e8 32 6c ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d501c:	89 c3                	mov    %eax,%ebx
 81d501e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5021:	8b 70 0d             	mov    0xd(%eax),%esi
 81d5024:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5027:	89 04 24             	mov    %eax,(%esp)
 81d502a:	e8 67 3c ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81d502f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d5033:	89 74 24 04          	mov    %esi,0x4(%esp)
 81d5037:	89 04 24             	mov    %eax,(%esp)
 81d503a:	e8 4d 87 26 00       	call   843d78c <_ZN18DB_CancelJoinGuild11makeRequestEijj>
 81d503f:	c7 44 24 04 5e 01 00 	movl   $0x15e,0x4(%esp)
 81d5046:	00 
 81d5047:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d504a:	89 04 24             	mov    %eax,(%esp)
 81d504d:	e8 4e 6e 4a 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81d5052:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5057:	83 c4 20             	add    $0x20,%esp
 81d505a:	5b                   	pop    %ebx
 81d505b:	5e                   	pop    %esi
 81d505c:	5d                   	pop    %ebp
 81d505d:	c3                   	ret

```

```c
// Dispatcher_CancelJoinGuild::process @ 0x81d4fcc

/* Dispatcher_CancelJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_CancelJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 == 3) &&
     (iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2), iVar2 == 0)) {
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    uVar1 = *(uint *)(param_3 + 0xd);
    iVar2 = CUser::GetUID((CUser *)param_2);
    DB_CancelJoinGuild::makeRequest(iVar2,uVar1,uVar3);
    CUser::SendCmdOkPacket((CUser *)param_2,0x15e);
  }
  return 0;
}

```

---

## read

```asm
// === 081d4f76 Dispatcher_CancelJoinGuild::read  [0x081d4f76-0x81d4fcb] ===
 81d4f76:	55                   	push   %ebp
 81d4f77:	89 e5                	mov    %esp,%ebp
 81d4f79:	83 ec 28             	sub    $0x28,%esp
 81d4f7c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d4f7f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d4f82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d4f85:	83 c0 0d             	add    $0xd,%eax
 81d4f88:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d4f8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4f8f:	89 04 24             	mov    %eax,(%esp)
 81d4f92:	e8 a9 82 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81d4f97:	83 f0 01             	xor    $0x1,%eax
 81d4f9a:	84 c0                	test   %al,%al
 81d4f9c:	74 26                	je     81d4fc4 <_ZN26Dispatcher_CancelJoinGuild4readER9PacketBufR8MSG_BASE+0x4e>
 81d4f9e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d4fa5:	00 
 81d4fa6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d4fad:	00 
 81d4fae:	c7 44 24 04 a0 31 bd 	movl   $0x8bd31a0,0x4(%esp)
 81d4fb5:	08 
 81d4fb6:	c7 04 24 3c 35 00 00 	movl   $0x353c,(%esp)
 81d4fbd:	e8 15 b9 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d4fc2:	eb 05                	jmp    81d4fc9 <_ZN26Dispatcher_CancelJoinGuild4readER9PacketBufR8MSG_BASE+0x53>
 81d4fc4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4fc9:	c9                   	leave
 81d4fca:	c3                   	ret
 81d4fcb:	90                   	nop

```

```c
// Dispatcher_CancelJoinGuild::read @ 0x81d4f76

/* Dispatcher_CancelJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CancelJoinGuild::read
          (Dispatcher_CancelJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x353c,"virtual int Dispatcher_CancelJoinGuild::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

