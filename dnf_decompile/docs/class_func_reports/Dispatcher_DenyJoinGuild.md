# Dispatcher_DenyJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d51e6 Dispatcher_DenyJoinGuild::process  [0x081d51e6-0x81d529b] ===
 81d51e6:	55                   	push   %ebp
 81d51e7:	89 e5                	mov    %esp,%ebp
 81d51e9:	56                   	push   %esi
 81d51ea:	53                   	push   %ebx
 81d51eb:	83 ec 20             	sub    $0x20,%esp
 81d51ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81d51f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d51f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d51f7:	89 04 24             	mov    %eax,(%esp)
 81d51fa:	e8 8d 51 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d51ff:	83 f8 03             	cmp    $0x3,%eax
 81d5202:	0f 95 c0             	setne  %al
 81d5205:	84 c0                	test   %al,%al
 81d5207:	74 0a                	je     81d5213 <_ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d5209:	b8 00 00 00 00       	mov    $0x0,%eax
 81d520e:	e9 81 00 00 00       	jmp    81d5294 <_ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xae>
 81d5213:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5216:	89 04 24             	mov    %eax,(%esp)
 81d5219:	e8 54 af 05 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 81d521e:	83 f0 01             	xor    $0x1,%eax
 81d5221:	84 c0                	test   %al,%al
 81d5223:	74 19                	je     81d523e <_ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x58>
 81d5225:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5228:	89 04 24             	mov    %eax,(%esp)
 81d522b:	e8 e4 71 49 00       	call   866c414 <_ZN5CUser16IsSubGuildMasterEv>
 81d5230:	83 f0 01             	xor    $0x1,%eax
 81d5233:	84 c0                	test   %al,%al
 81d5235:	74 07                	je     81d523e <_ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x58>
 81d5237:	b8 01 00 00 00       	mov    $0x1,%eax
 81d523c:	eb 05                	jmp    81d5243 <_ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x5d>
 81d523e:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5243:	84 c0                	test   %al,%al
 81d5245:	74 07                	je     81d524e <_ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0x68>
 81d5247:	b8 00 00 00 00       	mov    $0x0,%eax
 81d524c:	eb 46                	jmp    81d5294 <_ZN24Dispatcher_DenyJoinGuild7processEP5CUserR8MSG_BASER9ParamBase+0xae>
 81d524e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5251:	8b 70 0d             	mov    0xd(%eax),%esi
 81d5254:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5257:	89 04 24             	mov    %eax,(%esp)
 81d525a:	e8 0d a2 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d525f:	89 c3                	mov    %eax,%ebx
 81d5261:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5264:	89 04 24             	mov    %eax,(%esp)
 81d5267:	e8 2a 3a ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81d526c:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d5270:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d5274:	89 04 24             	mov    %eax,(%esp)
 81d5277:	e8 92 8c 26 00       	call   843df0e <_ZN16DB_DenyJoinGuild11makeRequestEijj>
 81d527c:	c7 44 24 04 60 01 00 	movl   $0x160,0x4(%esp)
 81d5283:	00 
 81d5284:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5287:	89 04 24             	mov    %eax,(%esp)
 81d528a:	e8 11 6c 4a 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81d528f:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5294:	83 c4 20             	add    $0x20,%esp
 81d5297:	5b                   	pop    %ebx
 81d5298:	5e                   	pop    %esi
 81d5299:	5d                   	pop    %ebp
 81d529a:	c3                   	ret
 81d529b:	90                   	nop

```

```c
// Dispatcher_DenyJoinGuild::process @ 0x81d51e6

/* Dispatcher_DenyJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_DenyJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 == 3) {
    cVar3 = CUser::IsGuildMaster((CUser *)param_2);
    if ((cVar3 == '\x01') || (cVar3 = CUser::IsSubGuildMaster((CUser *)param_2), cVar3 == '\x01')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar1 = *(uint *)(param_3 + 0xd);
      uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      iVar4 = CUser::GetUID((CUser *)param_2);
      DB_DenyJoinGuild::makeRequest(iVar4,uVar5,uVar1);
      CUser::SendCmdOkPacket((CUser *)param_2,0x160);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d5190 Dispatcher_DenyJoinGuild::read  [0x081d5190-0x81d51e5] ===
 81d5190:	55                   	push   %ebp
 81d5191:	89 e5                	mov    %esp,%ebp
 81d5193:	83 ec 28             	sub    $0x28,%esp
 81d5196:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5199:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d519c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d519f:	83 c0 0d             	add    $0xd,%eax
 81d51a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d51a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d51a9:	89 04 24             	mov    %eax,(%esp)
 81d51ac:	e8 8f 80 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81d51b1:	83 f0 01             	xor    $0x1,%eax
 81d51b4:	84 c0                	test   %al,%al
 81d51b6:	74 26                	je     81d51de <_ZN24Dispatcher_DenyJoinGuild4readER9PacketBufR8MSG_BASE+0x4e>
 81d51b8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d51bf:	00 
 81d51c0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d51c7:	00 
 81d51c8:	c7 44 24 04 e0 30 bd 	movl   $0x8bd30e0,0x4(%esp)
 81d51cf:	08 
 81d51d0:	c7 04 24 7f 35 00 00 	movl   $0x357f,(%esp)
 81d51d7:	e8 fb b6 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d51dc:	eb 05                	jmp    81d51e3 <_ZN24Dispatcher_DenyJoinGuild4readER9PacketBufR8MSG_BASE+0x53>
 81d51de:	b8 00 00 00 00       	mov    $0x0,%eax
 81d51e3:	c9                   	leave
 81d51e4:	c3                   	ret
 81d51e5:	90                   	nop

```

```c
// Dispatcher_DenyJoinGuild::read @ 0x81d5190

/* Dispatcher_DenyJoinGuild::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_DenyJoinGuild::read(Dispatcher_DenyJoinGuild *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x357f,"virtual int Dispatcher_DenyJoinGuild::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

