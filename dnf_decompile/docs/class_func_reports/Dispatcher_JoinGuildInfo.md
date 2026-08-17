# Dispatcher_JoinGuildInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d5398 Dispatcher_JoinGuildInfo::process  [0x081d5398-0x81d543b] ===
 81d5398:	55                   	push   %ebp
 81d5399:	89 e5                	mov    %esp,%ebp
 81d539b:	53                   	push   %ebx
 81d539c:	83 ec 24             	sub    $0x24,%esp
 81d539f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d53a2:	89 04 24             	mov    %eax,(%esp)
 81d53a5:	e8 e2 4f f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d53aa:	83 f8 03             	cmp    $0x3,%eax
 81d53ad:	0f 95 c0             	setne  %al
 81d53b0:	84 c0                	test   %al,%al
 81d53b2:	74 07                	je     81d53bb <_ZN24Dispatcher_JoinGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x23>
 81d53b4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d53b9:	eb 7a                	jmp    81d5435 <_ZN24Dispatcher_JoinGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x9d>
 81d53bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d53be:	89 04 24             	mov    %eax,(%esp)
 81d53c1:	e8 a6 a0 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d53c6:	85 c0                	test   %eax,%eax
 81d53c8:	0f 95 c0             	setne  %al
 81d53cb:	84 c0                	test   %al,%al
 81d53cd:	74 07                	je     81d53d6 <_ZN24Dispatcher_JoinGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x3e>
 81d53cf:	b8 00 00 00 00       	mov    $0x0,%eax
 81d53d4:	eb 5f                	jmp    81d5435 <_ZN24Dispatcher_JoinGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x9d>
 81d53d6:	e8 cc 4f f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d53db:	89 04 24             	mov    %eax,(%esp)
 81d53de:	e8 3b bf f1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81d53e3:	84 c0                	test   %al,%al
 81d53e5:	74 10                	je     81d53f7 <_ZN24Dispatcher_JoinGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5f>
 81d53e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d53ea:	89 04 24             	mov    %eax,(%esp)
 81d53ed:	e8 9e 68 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d53f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d53f5:	eb 0e                	jmp    81d5405 <_ZN24Dispatcher_JoinGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x6d>
 81d53f7:	e8 85 6d ef ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81d53fc:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81d5402:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5405:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5408:	89 04 24             	mov    %eax,(%esp)
 81d540b:	e8 3e 68 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d5410:	89 c3                	mov    %eax,%ebx
 81d5412:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5415:	89 04 24             	mov    %eax,(%esp)
 81d5418:	e8 79 38 ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81d541d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d5421:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d5424:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d5428:	89 04 24             	mov    %eax,(%esp)
 81d542b:	e8 ca 81 26 00       	call   843d5fa <_ZN16DB_JoinGuildInfo11makeRequestEi17ENUM_SERVER_GROUPj>
 81d5430:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5435:	83 c4 24             	add    $0x24,%esp
 81d5438:	5b                   	pop    %ebx
 81d5439:	5d                   	pop    %ebp
 81d543a:	c3                   	ret
 81d543b:	90                   	nop

```

```c
// Dispatcher_JoinGuildInfo::process @ 0x81d5398

/* Dispatcher_JoinGuildInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_JoinGuildInfo::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 == 3) &&
     (iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2), iVar2 == 0)) {
    this = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
    if (cVar1 == '\0') {
      iVar2 = G_CEnvironment();
      local_10 = *(undefined4 *)(iVar2 + 0x378);
    }
    else {
      local_10 = CUser::GetServerGroup((CUser *)param_2);
    }
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    uVar4 = CUser::GetUID((CUser *)param_2);
    DB_JoinGuildInfo::makeRequest(uVar4,local_10,uVar3);
  }
  return 0;
}

```

---

## read

```asm
// === 081d538e Dispatcher_JoinGuildInfo::read  [0x081d538e-0x81d5397] ===
 81d538e:	55                   	push   %ebp
 81d538f:	89 e5                	mov    %esp,%ebp
 81d5391:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5396:	5d                   	pop    %ebp
 81d5397:	c3                   	ret

```

```c
// Dispatcher_JoinGuildInfo::read @ 0x81d538e

/* Dispatcher_JoinGuildInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_JoinGuildInfo::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

