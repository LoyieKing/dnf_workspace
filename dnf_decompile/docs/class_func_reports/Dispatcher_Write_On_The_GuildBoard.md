# Dispatcher_Write_On_The_GuildBoard

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081d31ee Dispatcher_Write_On_The_GuildBoard::process  [0x081d31ee-0x81d331f] ===
 81d31ee:	55                   	push   %ebp
 81d31ef:	89 e5                	mov    %esp,%ebp
 81d31f1:	57                   	push   %edi
 81d31f2:	56                   	push   %esi
 81d31f3:	53                   	push   %ebx
 81d31f4:	83 ec 4c             	sub    $0x4c,%esp
 81d31f7:	8b 45 14             	mov    0x14(%ebp),%eax
 81d31fa:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d31fd:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3200:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d3203:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d3206:	83 c0 0d             	add    $0xd,%eax
 81d3209:	0f b6 00             	movzbl (%eax),%eax
 81d320c:	84 c0                	test   %al,%al
 81d320e:	75 14                	jne    81d3224 <_ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase+0x36>
 81d3210:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d3213:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81d321a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d321f:	e9 f4 00 00 00       	jmp    81d3318 <_ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase+0x12a>
 81d3224:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d3227:	8d 58 0d             	lea    0xd(%eax),%ebx
 81d322a:	e8 6c 8f ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d322f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d3233:	89 04 24             	mov    %eax,(%esp)
 81d3236:	e8 37 02 19 00       	call   8363472 <_ZN12CDataManager16hasPreventStringEPKc>
 81d323b:	84 c0                	test   %al,%al
 81d323d:	75 1b                	jne    81d325a <_ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase+0x6c>
 81d323f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d3242:	8d 58 0d             	lea    0xd(%eax),%ebx
 81d3245:	e8 51 8f ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d324a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d324e:	89 04 24             	mov    %eax,(%esp)
 81d3251:	e8 b8 fb 18 00       	call   8362e0e <_ZN12CDataManager30hasSpecialCharacterExceptSpaceEPKc>
 81d3256:	84 c0                	test   %al,%al
 81d3258:	74 07                	je     81d3261 <_ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase+0x73>
 81d325a:	b8 01 00 00 00       	mov    $0x1,%eax
 81d325f:	eb 05                	jmp    81d3266 <_ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase+0x78>
 81d3261:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3266:	84 c0                	test   %al,%al
 81d3268:	74 14                	je     81d327e <_ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase+0x90>
 81d326a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d326d:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81d3274:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3279:	e9 9a 00 00 00       	jmp    81d3318 <_ZN34Dispatcher_Write_On_The_GuildBoard7processEP5CUserR8MSG_BASER9ParamBase+0x12a>
 81d327e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3281:	89 04 24             	mov    %eax,(%esp)
 81d3284:	e8 e3 c1 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d3289:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81d328c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d328f:	89 04 24             	mov    %eax,(%esp)
 81d3292:	e8 85 41 f8 ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 81d3297:	0f be c0             	movsbl %al,%eax
 81d329a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81d329d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d32a0:	89 04 24             	mov    %eax,(%esp)
 81d32a3:	e8 78 ac f2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81d32a8:	89 c7                	mov    %eax,%edi
 81d32aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d32ad:	89 04 24             	mov    %eax,(%esp)
 81d32b0:	e8 99 89 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d32b5:	89 c6                	mov    %eax,%esi
 81d32b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d32ba:	89 04 24             	mov    %eax,(%esp)
 81d32bd:	e8 ac 70 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d32c2:	89 c3                	mov    %eax,%ebx
 81d32c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d32c7:	83 c0 0d             	add    $0xd,%eax
 81d32ca:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81d32cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d32d0:	89 04 24             	mov    %eax,(%esp)
 81d32d3:	e8 b8 89 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d32d8:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d32de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d32e2:	89 14 24             	mov    %edx,(%esp)
 81d32e5:	e8 ce a0 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d32ea:	8b 55 cc             	mov    -0x34(%ebp),%edx
 81d32ed:	89 54 24 18          	mov    %edx,0x18(%esp)
 81d32f1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81d32f4:	89 54 24 14          	mov    %edx,0x14(%esp)
 81d32f8:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81d32fc:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81d3300:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d3304:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81d3307:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d330b:	89 04 24             	mov    %eax,(%esp)
 81d330e:	e8 07 bd 29 00       	call   846f01a <_ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj>
 81d3313:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3318:	83 c4 4c             	add    $0x4c,%esp
 81d331b:	5b                   	pop    %ebx
 81d331c:	5e                   	pop    %esi
 81d331d:	5f                   	pop    %edi
 81d331e:	5d                   	pop    %ebp
 81d331f:	c3                   	ret

```

```c
// Dispatcher_Write_On_The_GuildBoard::process @ 0x81d31ee

/* Dispatcher_Write_On_The_GuildBoard::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Write_On_The_GuildBoard::process
          (Dispatcher_Write_On_The_GuildBoard *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *pCVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  CGuildServerProxy *this_00;
  
  if (param_2[0xd] == (MSG_BASE)0x0) {
    *(undefined4 *)(param_3 + 4) = 1;
    return 0;
  }
  pCVar3 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasPreventString(pCVar3,(char *)(param_2 + 0xd));
  if (cVar2 == '\0') {
    pCVar3 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasSpecialCharacterExceptSpace(pCVar3,(char *)(param_2 + 0xd));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_081d3266;
    }
  }
  bVar1 = true;
LAB_081d3266:
  if (bVar1) {
    *(undefined4 *)(param_3 + 4) = 1;
  }
  else {
    uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
    iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar7 = CUser::get_acc_id(param_1);
    uVar8 = CUser::GetServerGroup(param_1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar8);
    CGuildServerProxy::SendGuildBoardWrite
              (this_00,(char *)(param_2 + 0xd),uVar7,uVar6,iVar5,cVar2,uVar4);
  }
  return 0;
}

```

---

## read

```asm
// === 081d314a Dispatcher_Write_On_The_GuildBoard::read  [0x081d314a-0x81d31ed] ===
 81d314a:	55                   	push   %ebp
 81d314b:	89 e5                	mov    %esp,%ebp
 81d314d:	83 ec 28             	sub    $0x28,%esp
 81d3150:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d3157:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81d315a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d315e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3161:	89 04 24             	mov    %eax,(%esp)
 81d3164:	e8 87 9f 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d3169:	83 f0 01             	xor    $0x1,%eax
 81d316c:	84 c0                	test   %al,%al
 81d316e:	74 26                	je     81d3196 <_ZN34Dispatcher_Write_On_The_GuildBoard4readER9PacketBufR8MSG_BASE+0x4c>
 81d3170:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d3177:	00 
 81d3178:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d317f:	00 
 81d3180:	c7 44 24 04 00 35 bd 	movl   $0x8bd3500,0x4(%esp)
 81d3187:	08 
 81d3188:	c7 04 24 c5 30 00 00 	movl   $0x30c5,(%esp)
 81d318f:	e8 43 d7 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3194:	eb 56                	jmp    81d31ec <_ZN34Dispatcher_Write_On_The_GuildBoard4readER9PacketBufR8MSG_BASE+0xa2>
 81d3196:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d3199:	8b 55 10             	mov    0x10(%ebp),%edx
 81d319c:	83 c2 0d             	add    $0xd,%edx
 81d319f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d31a3:	c7 44 24 08 78 00 00 	movl   $0x78,0x8(%esp)
 81d31aa:	00 
 81d31ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d31af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d31b2:	89 04 24             	mov    %eax,(%esp)
 81d31b5:	e8 02 a1 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81d31ba:	83 f0 01             	xor    $0x1,%eax
 81d31bd:	84 c0                	test   %al,%al
 81d31bf:	74 26                	je     81d31e7 <_ZN34Dispatcher_Write_On_The_GuildBoard4readER9PacketBufR8MSG_BASE+0x9d>
 81d31c1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d31c8:	00 
 81d31c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d31d0:	00 
 81d31d1:	c7 44 24 04 00 35 bd 	movl   $0x8bd3500,0x4(%esp)
 81d31d8:	08 
 81d31d9:	c7 04 24 c8 30 00 00 	movl   $0x30c8,(%esp)
 81d31e0:	e8 f2 d6 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d31e5:	eb 05                	jmp    81d31ec <_ZN34Dispatcher_Write_On_The_GuildBoard4readER9PacketBufR8MSG_BASE+0xa2>
 81d31e7:	b8 00 00 00 00       	mov    $0x0,%eax
 81d31ec:	c9                   	leave
 81d31ed:	c3                   	ret

```

```c
// Dispatcher_Write_On_The_GuildBoard::read @ 0x81d314a

/* Dispatcher_Write_On_The_GuildBoard::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Write_On_The_GuildBoard::read
          (Dispatcher_Write_On_The_GuildBoard *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10 [3];
  
  local_10[0] = 0;
  cVar1 = PacketBuf::get_int(param_1,local_10);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0xd),0x78,local_10[0]);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x30c8,
                       "virtual int Dispatcher_Write_On_The_GuildBoard::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x30c5,
                     "virtual int Dispatcher_Write_On_The_GuildBoard::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d3320 Dispatcher_Write_On_The_GuildBoard::send  [0x081d3320-0x81d334d] ===
 81d3320:	55                   	push   %ebp
 81d3321:	89 e5                	mov    %esp,%ebp
 81d3323:	83 ec 28             	sub    $0x28,%esp
 81d3326:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3329:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d332c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d332f:	8b 40 04             	mov    0x4(%eax),%eax
 81d3332:	0f b6 c0             	movzbl %al,%eax
 81d3335:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d3339:	c7 44 24 04 56 01 00 	movl   $0x156,0x4(%esp)
 81d3340:	00 
 81d3341:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3344:	89 04 24             	mov    %eax,(%esp)
 81d3347:	e8 f6 8b 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d334c:	c9                   	leave
 81d334d:	c3                   	ret

```

```c
// Dispatcher_Write_On_The_GuildBoard::send @ 0x81d3320

/* Dispatcher_Write_On_The_GuildBoard::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Write_On_The_GuildBoard::send
          (Dispatcher_Write_On_The_GuildBoard *this,CUser *param_1,ParamBase *param_2)

{
  CUser::SendCmdErrorPacket(param_1,0x156,*(uint *)(param_2 + 4) & 0xff);
  return;
}

```

