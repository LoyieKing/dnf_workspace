# Dispatcher_Open_Guild_Board

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d30d0 Dispatcher_Open_Guild_Board::process  [0x081d30d0-0x81d3149] ===
 81d30d0:	55                   	push   %ebp
 81d30d1:	89 e5                	mov    %esp,%ebp
 81d30d3:	57                   	push   %edi
 81d30d4:	56                   	push   %esi
 81d30d5:	53                   	push   %ebx
 81d30d6:	83 ec 2c             	sub    $0x2c,%esp
 81d30d9:	8b 45 14             	mov    0x14(%ebp),%eax
 81d30dc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d30df:	8b 45 10             	mov    0x10(%ebp),%eax
 81d30e2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d30e5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d30e8:	0f b6 80 b2 00 00 00 	movzbl 0xb2(%eax),%eax
 81d30ef:	0f be f8             	movsbl %al,%edi
 81d30f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d30f5:	89 04 24             	mov    %eax,(%esp)
 81d30f8:	e8 6f c3 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d30fd:	89 c6                	mov    %eax,%esi
 81d30ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3102:	89 04 24             	mov    %eax,(%esp)
 81d3105:	e8 44 8b ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d310a:	89 c3                	mov    %eax,%ebx
 81d310c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d310f:	89 04 24             	mov    %eax,(%esp)
 81d3112:	e8 79 8b ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d3117:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d311d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3121:	89 14 24             	mov    %edx,(%esp)
 81d3124:	e8 8f a2 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d3129:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81d312d:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d3131:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d3135:	89 04 24             	mov    %eax,(%esp)
 81d3138:	e8 91 be 29 00       	call   846efce <_ZN17CGuildServerProxy18SendGuildBoardOpenEjjc>
 81d313d:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3142:	83 c4 2c             	add    $0x2c,%esp
 81d3145:	5b                   	pop    %ebx
 81d3146:	5e                   	pop    %esi
 81d3147:	5f                   	pop    %edi
 81d3148:	5d                   	pop    %ebp
 81d3149:	c3                   	ret

```

```c
// Dispatcher_Open_Guild_Board::process @ 0x81d30d0

/* Dispatcher_Open_Guild_Board::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_Open_Guild_Board::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  
  PVar1 = param_3[0xb2];
  uVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  uVar4 = CUser::GetServerGroup((CUser *)param_2);
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
  CGuildServerProxy::SendGuildBoardOpen(this,uVar3,uVar2,(char)PVar1);
  return 0;
}

```

---

## read

```asm
// === 081d307e Dispatcher_Open_Guild_Board::read  [0x081d307e-0x81d30cf] ===
 81d307e:	55                   	push   %ebp
 81d307f:	89 e5                	mov    %esp,%ebp
 81d3081:	83 ec 18             	sub    $0x18,%esp
 81d3084:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3087:	05 b2 00 00 00       	add    $0xb2,%eax
 81d308c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3090:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3093:	89 04 24             	mov    %eax,(%esp)
 81d3096:	e8 87 9e 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d309b:	83 f0 01             	xor    $0x1,%eax
 81d309e:	84 c0                	test   %al,%al
 81d30a0:	74 26                	je     81d30c8 <_ZN27Dispatcher_Open_Guild_Board4readER9PacketBufR8MSG_BASE+0x4a>
 81d30a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d30a9:	00 
 81d30aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d30b1:	00 
 81d30b2:	c7 44 24 04 60 35 bd 	movl   $0x8bd3560,0x4(%esp)
 81d30b9:	08 
 81d30ba:	c7 04 24 aa 30 00 00 	movl   $0x30aa,(%esp)
 81d30c1:	e8 11 d8 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d30c6:	eb 05                	jmp    81d30cd <_ZN27Dispatcher_Open_Guild_Board4readER9PacketBufR8MSG_BASE+0x4f>
 81d30c8:	b8 00 00 00 00       	mov    $0x0,%eax
 81d30cd:	c9                   	leave
 81d30ce:	c3                   	ret
 81d30cf:	90                   	nop

```

```c
// Dispatcher_Open_Guild_Board::read @ 0x81d307e

/* Dispatcher_Open_Guild_Board::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Open_Guild_Board::read
          (Dispatcher_Open_Guild_Board *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xb2));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x30aa,"virtual int Dispatcher_Open_Guild_Board::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

