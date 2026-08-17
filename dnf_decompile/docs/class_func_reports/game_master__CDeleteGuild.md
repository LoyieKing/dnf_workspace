# game_master__CDeleteGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084ab29c game_master::CDeleteGuild::execute  [0x084ab29c-0x84ab4f1] ===
 84ab29c:	55                   	push   %ebp
 84ab29d:	89 e5                	mov    %esp,%ebp
 84ab29f:	56                   	push   %esi
 84ab2a0:	53                   	push   %ebx
 84ab2a1:	83 ec 40             	sub    $0x40,%esp
 84ab2a4:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab2a7:	89 04 24             	mov    %eax,(%esp)
 84ab2aa:	e8 0b 8d 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ab2af:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ab2b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab2b5:	89 04 24             	mov    %eax,(%esp)
 84ab2b8:	e8 df a5 c9 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 84ab2bd:	83 f0 01             	xor    $0x1,%eax
 84ab2c0:	84 c0                	test   %al,%al
 84ab2c2:	0f 85 1b 02 00 00    	jne    84ab4e3 <_ZN11game_master12CDeleteGuild7executeEv+0x247>
 84ab2c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab2cb:	89 04 24             	mov    %eax,(%esp)
 84ab2ce:	e8 b9 f0 c2 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ab2d3:	83 f8 03             	cmp    $0x3,%eax
 84ab2d6:	0f 95 c0             	setne  %al
 84ab2d9:	84 c0                	test   %al,%al
 84ab2db:	0f 85 05 02 00 00    	jne    84ab4e6 <_ZN11game_master12CDeleteGuild7executeEv+0x24a>
 84ab2e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab2e4:	89 04 24             	mov    %eax,(%esp)
 84ab2e7:	e8 80 41 d8 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84ab2ec:	85 c0                	test   %eax,%eax
 84ab2ee:	0f 94 c0             	sete   %al
 84ab2f1:	84 c0                	test   %al,%al
 84ab2f3:	0f 85 f0 01 00 00    	jne    84ab4e9 <_ZN11game_master12CDeleteGuild7executeEv+0x24d>
 84ab2f9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84ab2fe:	c7 44 24 08 8d 06 00 	movl   $0x68d,0x8(%esp)
 84ab305:	00 
 84ab306:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84ab30d:	08 
 84ab30e:	89 04 24             	mov    %eax,(%esp)
 84ab311:	e8 70 47 de ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84ab316:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84ab31d:	00 
 84ab31e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab322:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ab325:	89 04 24             	mov    %eax,(%esp)
 84ab328:	e8 f9 d8 c1 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84ab32d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab330:	89 04 24             	mov    %eax,(%esp)
 84ab333:	e8 34 41 d8 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84ab338:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ab33b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ab33e:	89 04 24             	mov    %eax,(%esp)
 84ab341:	e8 00 d9 c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ab346:	c7 44 24 04 df 01 00 	movl   $0x1df,0x4(%esp)
 84ab34d:	00 
 84ab34e:	89 04 24             	mov    %eax,(%esp)
 84ab351:	e8 00 d9 c1 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84ab356:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab359:	89 04 24             	mov    %eax,(%esp)
 84ab35c:	e8 35 d9 c1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84ab361:	89 c3                	mov    %eax,%ebx
 84ab363:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ab366:	89 04 24             	mov    %eax,(%esp)
 84ab369:	e8 d8 d8 c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ab36e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ab372:	89 04 24             	mov    %eax,(%esp)
 84ab375:	e8 dc d8 c1 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84ab37a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab37d:	89 04 24             	mov    %eax,(%esp)
 84ab380:	e8 c9 08 c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84ab385:	89 c3                	mov    %eax,%ebx
 84ab387:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ab38a:	89 04 24             	mov    %eax,(%esp)
 84ab38d:	e8 b4 d8 c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ab392:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ab396:	89 04 24             	mov    %eax,(%esp)
 84ab399:	e8 f4 6e c3 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84ab39e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab3a1:	89 04 24             	mov    %eax,(%esp)
 84ab3a4:	e8 c3 40 d8 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84ab3a9:	89 c3                	mov    %eax,%ebx
 84ab3ab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ab3ae:	89 04 24             	mov    %eax,(%esp)
 84ab3b1:	e8 90 d8 c1 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84ab3b6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ab3ba:	89 04 24             	mov    %eax,(%esp)
 84ab3bd:	e8 d0 6e c3 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84ab3c2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84ab3c7:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84ab3ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ab3ce:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84ab3d5:	00 
 84ab3d6:	89 04 24             	mov    %eax,(%esp)
 84ab3d9:	e8 00 5c 0c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84ab3de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab3e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ab3e8:	00 
 84ab3e9:	89 04 24             	mov    %eax,(%esp)
 84ab3ec:	e8 9f 41 d8 ff       	call   822f590 <_ZN15CUserCharacInfo22set_guild_create_rightEh>
 84ab3f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab3f4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ab3fb:	00 
 84ab3fc:	89 04 24             	mov    %eax,(%esp)
 84ab3ff:	e8 1a b3 df ff       	call   82a671e <_ZN15CUserCharacInfo19set_charac_guildkeyEj>
 84ab404:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab407:	89 04 24             	mov    %eax,(%esp)
 84ab40a:	e8 3d 29 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ab40f:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 84ab416:	00 
 84ab417:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ab41e:	00 
 84ab41f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab422:	89 04 24             	mov    %eax,(%esp)
 84ab425:	e8 d2 04 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ab42a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ab431:	00 
 84ab432:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab435:	89 04 24             	mov    %eax,(%esp)
 84ab438:	e8 1b 05 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ab43d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab440:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab444:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab447:	89 04 24             	mov    %eax,(%esp)
 84ab44a:	e8 6b d1 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ab44f:	8d 45 ce             	lea    -0x32(%ebp),%eax
 84ab452:	89 04 24             	mov    %eax,(%esp)
 84ab455:	e8 fc 8c 00 00       	call   84b4156 <_ZN35Packet_Monitor_Notice_Guild_DismissC1Ev>
 84ab45a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab45d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84ab460:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 84ab464:	0f b7 f0             	movzwl %ax,%esi
 84ab467:	8d 5d ce             	lea    -0x32(%ebp),%ebx
 84ab46a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab46d:	89 04 24             	mov    %eax,(%esp)
 84ab470:	e8 1b 08 c2 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84ab475:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84ab47b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab47f:	89 14 24             	mov    %edx,(%esp)
 84ab482:	e8 31 1f c7 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84ab487:	89 74 24 08          	mov    %esi,0x8(%esp)
 84ab48b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ab48f:	89 04 24             	mov    %eax,(%esp)
 84ab492:	e8 e7 27 fc ff       	call   846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>
 84ab497:	eb 15                	jmp    84ab4ae <_ZN11game_master12CDeleteGuild7executeEv+0x212>
 84ab499:	89 d3                	mov    %edx,%ebx
 84ab49b:	89 c6                	mov    %eax,%esi
 84ab49d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab4a0:	89 04 24             	mov    %eax,(%esp)
 84ab4a3:	e8 d8 29 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ab4a8:	89 f0                	mov    %esi,%eax
 84ab4aa:	89 da                	mov    %ebx,%edx
 84ab4ac:	eb 0d                	jmp    84ab4bb <_ZN11game_master12CDeleteGuild7executeEv+0x21f>
 84ab4ae:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab4b1:	89 04 24             	mov    %eax,(%esp)
 84ab4b4:	e8 c7 29 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ab4b9:	eb 1b                	jmp    84ab4d6 <_ZN11game_master12CDeleteGuild7executeEv+0x23a>
 84ab4bb:	89 d3                	mov    %edx,%ebx
 84ab4bd:	89 c6                	mov    %eax,%esi
 84ab4bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ab4c2:	89 04 24             	mov    %eax,(%esp)
 84ab4c5:	e8 08 14 17 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84ab4ca:	89 f0                	mov    %esi,%eax
 84ab4cc:	89 da                	mov    %ebx,%edx
 84ab4ce:	89 04 24             	mov    %eax,(%esp)
 84ab4d1:	e8 7a 82 63 00       	call   8ae3750 <_Unwind_Resume>
 84ab4d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ab4d9:	89 04 24             	mov    %eax,(%esp)
 84ab4dc:	e8 f1 13 17 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84ab4e1:	eb 07                	jmp    84ab4ea <_ZN11game_master12CDeleteGuild7executeEv+0x24e>
 84ab4e3:	90                   	nop
 84ab4e4:	eb 04                	jmp    84ab4ea <_ZN11game_master12CDeleteGuild7executeEv+0x24e>
 84ab4e6:	90                   	nop
 84ab4e7:	eb 01                	jmp    84ab4ea <_ZN11game_master12CDeleteGuild7executeEv+0x24e>
 84ab4e9:	90                   	nop
 84ab4ea:	83 c4 40             	add    $0x40,%esp
 84ab4ed:	5b                   	pop    %ebx
 84ab4ee:	5e                   	pop    %esi
 84ab4ef:	5d                   	pop    %ebp
 84ab4f0:	c3                   	ret
 84ab4f1:	90                   	nop

```

```c
// game_master::CDeleteGuild::execute @ 0x84ab29c

/* game_master::CDeleteGuild::execute() */

void __thiscall game_master::CDeleteGuild::execute(CDeleteGuild *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  undefined4 uVar6;
  CGuildServerProxy *this_00;
  Packet_Monitor_Notice_Guild_Dismiss local_36 [2];
  ushort local_34;
  undefined4 local_2c;
  PacketGuard local_28 [12];
  CStreamGuard local_1c [8];
  CUser *local_14;
  undefined4 local_10;
  
  local_14 = (CUser *)CCommand::GetUser((CCommand *)this);
  cVar1 = CUser::isGMUser(local_14);
  if (((cVar1 == '\x01') && (iVar2 = CUser::get_state(local_14), iVar2 == 3)) &&
     (iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_14), iVar2 != 0)) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"GameMaster.cpp",0x68d);
    CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
    local_10 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_14);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 084ab351 to 084ab40e has its CatchHandler @ 084ab4bb */
    CStreamGuard::operator<<(pCVar4,0x1df);
    iVar2 = CUser::GetUID(local_14);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,iVar2);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_14);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,uVar5);
    uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_14);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,uVar5);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    CUserCharacInfo::set_guild_create_right((CUserCharacInfo *)local_14,'\0');
    CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)local_14,0);
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084ab425 to 084ab496 has its CatchHandler @ 084ab499 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x3d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(local_14,local_28);
    Packet_Monitor_Notice_Guild_Dismiss::Packet_Monitor_Notice_Guild_Dismiss(local_36);
    local_2c = local_10;
    uVar6 = CUser::GetServerGroup(local_14);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar6);
    CGuildServerProxy::SendPacket(this_00,(char *)local_36,(uint)local_34);
                    /* try { // try from 084ab4b4 to 084ab4b8 has its CatchHandler @ 084ab4bb */
    PacketGuard::~PacketGuard(local_28);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return;
}

```

