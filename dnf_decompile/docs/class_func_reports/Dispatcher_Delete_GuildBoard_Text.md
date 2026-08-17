# Dispatcher_Delete_GuildBoard_Text

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d33a0 Dispatcher_Delete_GuildBoard_Text::process  [0x081d33a0-0x81d3415] ===
 81d33a0:	55                   	push   %ebp
 81d33a1:	89 e5                	mov    %esp,%ebp
 81d33a3:	57                   	push   %edi
 81d33a4:	56                   	push   %esi
 81d33a5:	53                   	push   %ebx
 81d33a6:	83 ec 2c             	sub    $0x2c,%esp
 81d33a9:	8b 45 14             	mov    0x14(%ebp),%eax
 81d33ac:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d33af:	8b 45 10             	mov    0x10(%ebp),%eax
 81d33b2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d33b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d33b8:	89 04 24             	mov    %eax,(%esp)
 81d33bb:	e8 ac c0 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d33c0:	89 c6                	mov    %eax,%esi
 81d33c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d33c5:	89 04 24             	mov    %eax,(%esp)
 81d33c8:	e8 81 88 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d33cd:	89 c3                	mov    %eax,%ebx
 81d33cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d33d2:	8b b8 89 00 00 00    	mov    0x89(%eax),%edi
 81d33d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d33db:	89 04 24             	mov    %eax,(%esp)
 81d33de:	e8 ad 88 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d33e3:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d33e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d33ed:	89 14 24             	mov    %edx,(%esp)
 81d33f0:	e8 c3 9f f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d33f5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81d33f9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d33fd:	89 7c 24 04          	mov    %edi,0x4(%esp)
 81d3401:	89 04 24             	mov    %eax,(%esp)
 81d3404:	e8 a7 bc 29 00       	call   846f0b0 <_ZN17CGuildServerProxy20SendGuildBoardDeleteEjjj>
 81d3409:	b8 00 00 00 00       	mov    $0x0,%eax
 81d340e:	83 c4 2c             	add    $0x2c,%esp
 81d3411:	5b                   	pop    %ebx
 81d3412:	5e                   	pop    %esi
 81d3413:	5f                   	pop    %edi
 81d3414:	5d                   	pop    %ebp
 81d3415:	c3                   	ret

```

```c
// Dispatcher_Delete_GuildBoard_Text::process @ 0x81d33a0

/* Dispatcher_Delete_GuildBoard_Text::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Delete_GuildBoard_Text::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  
  uVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  uVar1 = *(uint *)(param_3 + 0x89);
  uVar4 = CUser::GetServerGroup((CUser *)param_2);
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
  CGuildServerProxy::SendGuildBoardDelete(this,uVar1,uVar3,uVar2);
  return 0;
}

```

---

## read

```asm
// === 081d334e Dispatcher_Delete_GuildBoard_Text::read  [0x081d334e-0x81d339f] ===
 81d334e:	55                   	push   %ebp
 81d334f:	89 e5                	mov    %esp,%ebp
 81d3351:	83 ec 18             	sub    $0x18,%esp
 81d3354:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3357:	05 89 00 00 00       	add    $0x89,%eax
 81d335c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3360:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3363:	89 04 24             	mov    %eax,(%esp)
 81d3366:	e8 d5 9e 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81d336b:	83 f0 01             	xor    $0x1,%eax
 81d336e:	84 c0                	test   %al,%al
 81d3370:	74 26                	je     81d3398 <_ZN33Dispatcher_Delete_GuildBoard_Text4readER9PacketBufR8MSG_BASE+0x4a>
 81d3372:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d3379:	00 
 81d337a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d3381:	00 
 81d3382:	c7 44 24 04 a0 34 bd 	movl   $0x8bd34a0,0x4(%esp)
 81d3389:	08 
 81d338a:	c7 04 24 01 31 00 00 	movl   $0x3101,(%esp)
 81d3391:	e8 41 d5 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3396:	eb 05                	jmp    81d339d <_ZN33Dispatcher_Delete_GuildBoard_Text4readER9PacketBufR8MSG_BASE+0x4f>
 81d3398:	b8 00 00 00 00       	mov    $0x0,%eax
 81d339d:	c9                   	leave
 81d339e:	c3                   	ret
 81d339f:	90                   	nop

```

```c
// Dispatcher_Delete_GuildBoard_Text::read @ 0x81d334e

/* Dispatcher_Delete_GuildBoard_Text::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Delete_GuildBoard_Text::read
          (Dispatcher_Delete_GuildBoard_Text *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x89));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x3101,
                     "virtual int Dispatcher_Delete_GuildBoard_Text::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

