# Dispatcher_GuildAttendanceInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d5492 Dispatcher_GuildAttendanceInfo::process  [0x081d5492-0x81d554d] ===
 81d5492:	55                   	push   %ebp
 81d5493:	89 e5                	mov    %esp,%ebp
 81d5495:	56                   	push   %esi
 81d5496:	53                   	push   %ebx
 81d5497:	83 ec 30             	sub    $0x30,%esp
 81d549a:	8b 45 10             	mov    0x10(%ebp),%eax
 81d549d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d54a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d54a3:	89 04 24             	mov    %eax,(%esp)
 81d54a6:	e8 e1 4e f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d54ab:	83 f8 02             	cmp    $0x2,%eax
 81d54ae:	0f 9e c0             	setle  %al
 81d54b1:	84 c0                	test   %al,%al
 81d54b3:	74 0a                	je     81d54bf <_ZN30Dispatcher_GuildAttendanceInfo7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d54b5:	b8 00 00 00 00       	mov    $0x0,%eax
 81d54ba:	e9 88 00 00 00       	jmp    81d5547 <_ZN30Dispatcher_GuildAttendanceInfo7processEP5CUserR8MSG_BASER9ParamBase+0xb5>
 81d54bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d54c2:	89 04 24             	mov    %eax,(%esp)
 81d54c5:	e8 a2 9f 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d54ca:	85 c0                	test   %eax,%eax
 81d54cc:	0f 94 c0             	sete   %al
 81d54cf:	84 c0                	test   %al,%al
 81d54d1:	74 07                	je     81d54da <_ZN30Dispatcher_GuildAttendanceInfo7processEP5CUserR8MSG_BASER9ParamBase+0x48>
 81d54d3:	b8 00 00 00 00       	mov    $0x0,%eax
 81d54d8:	eb 6d                	jmp    81d5547 <_ZN30Dispatcher_GuildAttendanceInfo7processEP5CUserR8MSG_BASER9ParamBase+0xb5>
 81d54da:	8d 45 e1             	lea    -0x1f(%ebp),%eax
 81d54dd:	89 04 24             	mov    %eax,(%esp)
 81d54e0:	e8 9f 6e 05 00       	call   822c384 <_ZN28Packet_Guild_Attendance_InfoC1Ev>
 81d54e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d54e8:	89 04 24             	mov    %eax,(%esp)
 81d54eb:	e8 7c 9f 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d54f0:	89 45 eb             	mov    %eax,-0x15(%ebp)
 81d54f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d54f6:	89 04 24             	mov    %eax,(%esp)
 81d54f9:	e8 50 67 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d54fe:	89 45 ef             	mov    %eax,-0x11(%ebp)
 81d5501:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5504:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d5508:	88 45 f3             	mov    %al,-0xd(%ebp)
 81d550b:	0f b7 45 e3          	movzwl -0x1d(%ebp),%eax
 81d550f:	0f b7 f0             	movzwl %ax,%esi
 81d5512:	8d 5d e1             	lea    -0x1f(%ebp),%ebx
 81d5515:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5518:	89 04 24             	mov    %eax,(%esp)
 81d551b:	e8 70 67 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d5520:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d5526:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d552a:	89 14 24             	mov    %edx,(%esp)
 81d552d:	e8 86 7e f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d5532:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d5536:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d553a:	89 04 24             	mov    %eax,(%esp)
 81d553d:	e8 8c 87 29 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 81d5542:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5547:	83 c4 30             	add    $0x30,%esp
 81d554a:	5b                   	pop    %ebx
 81d554b:	5e                   	pop    %esi
 81d554c:	5d                   	pop    %ebp
 81d554d:	c3                   	ret

```

```c
// Dispatcher_GuildAttendanceInfo::process @ 0x81d5492

/* Dispatcher_GuildAttendanceInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_GuildAttendanceInfo::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  CGuildServerProxy *this;
  Packet_Guild_Attendance_Info local_23 [2];
  ushort local_21;
  undefined4 local_19;
  undefined4 local_15;
  ParamBase local_11;
  ParamBase *local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2), iVar1 != 0)) {
    Packet_Guild_Attendance_Info::Packet_Guild_Attendance_Info(local_23);
    local_19 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    local_15 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    local_11 = local_10[0xd];
    uVar2 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar2);
    CGuildServerProxy::SendTcpPacket(this,(char *)local_23,(uint)local_21);
  }
  return 0;
}

```

---

## read

```asm
// === 081d543c Dispatcher_GuildAttendanceInfo::read  [0x081d543c-0x81d5491] ===
 81d543c:	55                   	push   %ebp
 81d543d:	89 e5                	mov    %esp,%ebp
 81d543f:	83 ec 28             	sub    $0x28,%esp
 81d5442:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5445:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d5448:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d544b:	83 c0 0d             	add    $0xd,%eax
 81d544e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5452:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5455:	89 04 24             	mov    %eax,(%esp)
 81d5458:	e8 c5 7a 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d545d:	83 f0 01             	xor    $0x1,%eax
 81d5460:	84 c0                	test   %al,%al
 81d5462:	74 26                	je     81d548a <_ZN30Dispatcher_GuildAttendanceInfo4readER9PacketBufR8MSG_BASE+0x4e>
 81d5464:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d546b:	00 
 81d546c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5473:	00 
 81d5474:	c7 44 24 04 80 30 bd 	movl   $0x8bd3080,0x4(%esp)
 81d547b:	08 
 81d547c:	c7 04 24 d9 35 00 00 	movl   $0x35d9,(%esp)
 81d5483:	e8 4f b4 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5488:	eb 05                	jmp    81d548f <_ZN30Dispatcher_GuildAttendanceInfo4readER9PacketBufR8MSG_BASE+0x53>
 81d548a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d548f:	c9                   	leave
 81d5490:	c3                   	ret
 81d5491:	90                   	nop

```

```c
// Dispatcher_GuildAttendanceInfo::read @ 0x81d543c

/* Dispatcher_GuildAttendanceInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GuildAttendanceInfo::read
          (Dispatcher_GuildAttendanceInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x35d9,
                     "virtual int Dispatcher_GuildAttendanceInfo::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

