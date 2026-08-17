# Dispatcher_GuildJoinList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d52a6 Dispatcher_GuildJoinList::process  [0x081d52a6-0x81d538d] ===
 81d52a6:	55                   	push   %ebp
 81d52a7:	89 e5                	mov    %esp,%ebp
 81d52a9:	53                   	push   %ebx
 81d52aa:	83 ec 24             	sub    $0x24,%esp
 81d52ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d52b0:	89 04 24             	mov    %eax,(%esp)
 81d52b3:	e8 d4 50 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d52b8:	83 f8 03             	cmp    $0x3,%eax
 81d52bb:	0f 95 c0             	setne  %al
 81d52be:	84 c0                	test   %al,%al
 81d52c0:	74 0a                	je     81d52cc <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0x26>
 81d52c2:	b8 00 00 00 00       	mov    $0x0,%eax
 81d52c7:	e9 bc 00 00 00       	jmp    81d5388 <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0xe2>
 81d52cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d52cf:	89 04 24             	mov    %eax,(%esp)
 81d52d2:	e8 9b ae 05 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 81d52d7:	83 f0 01             	xor    $0x1,%eax
 81d52da:	84 c0                	test   %al,%al
 81d52dc:	74 19                	je     81d52f7 <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0x51>
 81d52de:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d52e1:	89 04 24             	mov    %eax,(%esp)
 81d52e4:	e8 2b 71 49 00       	call   866c414 <_ZN5CUser16IsSubGuildMasterEv>
 81d52e9:	83 f0 01             	xor    $0x1,%eax
 81d52ec:	84 c0                	test   %al,%al
 81d52ee:	74 07                	je     81d52f7 <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0x51>
 81d52f0:	b8 01 00 00 00       	mov    $0x1,%eax
 81d52f5:	eb 05                	jmp    81d52fc <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0x56>
 81d52f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81d52fc:	84 c0                	test   %al,%al
 81d52fe:	74 22                	je     81d5322 <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0x7c>
 81d5300:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81d5307:	00 
 81d5308:	c7 44 24 04 61 01 00 	movl   $0x161,0x4(%esp)
 81d530f:	00 
 81d5310:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5313:	89 04 24             	mov    %eax,(%esp)
 81d5316:	e8 27 6c 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d531b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5320:	eb 66                	jmp    81d5388 <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0xe2>
 81d5322:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d5329:	e8 79 50 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d532e:	89 04 24             	mov    %eax,(%esp)
 81d5331:	e8 e8 bf f1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81d5336:	84 c0                	test   %al,%al
 81d5338:	74 10                	je     81d534a <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0xa4>
 81d533a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d533d:	89 04 24             	mov    %eax,(%esp)
 81d5340:	e8 4b 69 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d5345:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5348:	eb 0e                	jmp    81d5358 <_ZN24Dispatcher_GuildJoinList7processEP5CUserR8MSG_BASER9ParamBase+0xb2>
 81d534a:	e8 32 6e ef ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81d534f:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81d5355:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5358:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d535b:	89 04 24             	mov    %eax,(%esp)
 81d535e:	e8 09 a1 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d5363:	89 c3                	mov    %eax,%ebx
 81d5365:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5368:	89 04 24             	mov    %eax,(%esp)
 81d536b:	e8 26 39 ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81d5370:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d5373:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d5377:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d537b:	89 04 24             	mov    %eax,(%esp)
 81d537e:	e8 f9 89 26 00       	call   843dd7c <_ZN16DB_GuildJoinList11makeRequestEij17ENUM_SERVER_GROUP>
 81d5383:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5388:	83 c4 24             	add    $0x24,%esp
 81d538b:	5b                   	pop    %ebx
 81d538c:	5d                   	pop    %ebp
 81d538d:	c3                   	ret

```

```c
// Dispatcher_GuildJoinList::process @ 0x81d52a6

/* Dispatcher_GuildJoinList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_GuildJoinList::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *this;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 3) {
    cVar2 = CUser::IsGuildMaster((CUser *)param_2);
    if ((cVar2 == '\x01') || (cVar2 = CUser::IsSubGuildMaster((CUser *)param_2), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x161,0x24);
    }
    else {
      this = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
      if (cVar2 == '\0') {
        iVar3 = G_CEnvironment();
        local_10 = *(undefined4 *)(iVar3 + 0x378);
      }
      else {
        local_10 = CUser::GetServerGroup((CUser *)param_2);
      }
      uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      uVar5 = CUser::GetUID((CUser *)param_2);
      DB_GuildJoinList::makeRequest(uVar5,uVar4,local_10);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d529c Dispatcher_GuildJoinList::read  [0x081d529c-0x81d52a5] ===
 81d529c:	55                   	push   %ebp
 81d529d:	89 e5                	mov    %esp,%ebp
 81d529f:	b8 00 00 00 00       	mov    $0x0,%eax
 81d52a4:	5d                   	pop    %ebp
 81d52a5:	c3                   	ret

```

```c
// Dispatcher_GuildJoinList::read @ 0x81d529c

/* Dispatcher_GuildJoinList::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_GuildJoinList::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

