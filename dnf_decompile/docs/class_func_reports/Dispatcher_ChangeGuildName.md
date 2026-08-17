# Dispatcher_ChangeGuildName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082134a8 Dispatcher_ChangeGuildName::dispatch_sig  [0x082134a8-0x82138f1] ===
 82134a8:	55                   	push   %ebp
 82134a9:	89 e5                	mov    %esp,%ebp
 82134ab:	57                   	push   %edi
 82134ac:	56                   	push   %esi
 82134ad:	53                   	push   %ebx
 82134ae:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 82134b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82134b7:	89 04 24             	mov    %eax,(%esp)
 82134ba:	e8 cd 6e ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82134bf:	83 f8 02             	cmp    $0x2,%eax
 82134c2:	7e 0f                	jle    82134d3 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 82134c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82134c7:	89 04 24             	mov    %eax,(%esp)
 82134ca:	e8 63 cf f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82134cf:	85 c0                	test   %eax,%eax
 82134d1:	75 07                	jne    82134da <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x32>
 82134d3:	b8 01 00 00 00       	mov    $0x1,%eax
 82134d8:	eb 05                	jmp    82134df <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x37>
 82134da:	b8 00 00 00 00       	mov    $0x0,%eax
 82134df:	84 c0                	test   %al,%al
 82134e1:	74 2b                	je     821350e <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x66>
 82134e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82134ea:	00 
 82134eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82134f2:	00 
 82134f3:	c7 44 24 04 c0 de bc 	movl   $0x8bcdec0,0x4(%esp)
 82134fa:	08 
 82134fb:	c7 04 24 5f c1 00 00 	movl   $0xc15f,(%esp)
 8213502:	e8 d0 d3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213507:	89 c3                	mov    %eax,%ebx
 8213509:	e9 d7 03 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 821350e:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8213511:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213515:	8b 45 10             	mov    0x10(%ebp),%eax
 8213518:	89 04 24             	mov    %eax,(%esp)
 821351b:	e8 90 9b 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8213520:	83 f0 01             	xor    $0x1,%eax
 8213523:	84 c0                	test   %al,%al
 8213525:	74 2b                	je     8213552 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0xaa>
 8213527:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821352e:	00 
 821352f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213536:	00 
 8213537:	c7 44 24 04 c0 de bc 	movl   $0x8bcdec0,0x4(%esp)
 821353e:	08 
 821353f:	c7 04 24 63 c1 00 00 	movl   $0xc163,(%esp)
 8213546:	e8 8c d3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821354b:	89 c3                	mov    %eax,%ebx
 821354d:	e9 93 03 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 8213552:	8d 45 e1             	lea    -0x1f(%ebp),%eax
 8213555:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213559:	8b 45 10             	mov    0x10(%ebp),%eax
 821355c:	89 04 24             	mov    %eax,(%esp)
 821355f:	e8 0c 9a 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8213564:	83 f0 01             	xor    $0x1,%eax
 8213567:	84 c0                	test   %al,%al
 8213569:	74 2b                	je     8213596 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0xee>
 821356b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213572:	00 
 8213573:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821357a:	00 
 821357b:	c7 44 24 04 c0 de bc 	movl   $0x8bcdec0,0x4(%esp)
 8213582:	08 
 8213583:	c7 04 24 66 c1 00 00 	movl   $0xc166,(%esp)
 821358a:	e8 48 d3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821358f:	89 c3                	mov    %eax,%ebx
 8213591:	e9 4f 03 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 8213596:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213599:	89 04 24             	mov    %eax,(%esp)
 821359c:	e8 cb be 01 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 82135a1:	85 c0                	test   %eax,%eax
 82135a3:	0f 94 c0             	sete   %al
 82135a6:	84 c0                	test   %al,%al
 82135a8:	74 25                	je     82135cf <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x127>
 82135aa:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 82135b1:	00 
 82135b2:	c7 44 24 04 b6 00 00 	movl   $0xb6,0x4(%esp)
 82135b9:	00 
 82135ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 82135bd:	89 04 24             	mov    %eax,(%esp)
 82135c0:	e8 7d 89 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82135c5:	bb 00 00 00 00       	mov    $0x0,%ebx
 82135ca:	e9 16 03 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 82135cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 82135d2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82135d9:	00 
 82135da:	89 04 24             	mov    %eax,(%esp)
 82135dd:	e8 f8 8a 45 00       	call   866c0da <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt>
 82135e2:	83 f0 01             	xor    $0x1,%eax
 82135e5:	84 c0                	test   %al,%al
 82135e7:	74 25                	je     821360e <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x166>
 82135e9:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 82135f0:	00 
 82135f1:	c7 44 24 04 b6 00 00 	movl   $0xb6,0x4(%esp)
 82135f8:	00 
 82135f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82135fc:	89 04 24             	mov    %eax,(%esp)
 82135ff:	e8 3e 89 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8213604:	bb 00 00 00 00       	mov    $0x0,%ebx
 8213609:	e9 d7 02 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 821360e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213611:	89 04 24             	mov    %eax,(%esp)
 8213614:	e8 59 cb 01 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 8213619:	83 f0 01             	xor    $0x1,%eax
 821361c:	84 c0                	test   %al,%al
 821361e:	74 25                	je     8213645 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x19d>
 8213620:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 8213627:	00 
 8213628:	c7 44 24 04 b6 00 00 	movl   $0xb6,0x4(%esp)
 821362f:	00 
 8213630:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213633:	89 04 24             	mov    %eax,(%esp)
 8213636:	e8 07 89 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821363b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8213640:	e9 a0 02 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 8213645:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 821364a:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 8213651:	00 
 8213652:	8b 55 0c             	mov    0xc(%ebp),%edx
 8213655:	89 54 24 04          	mov    %edx,0x4(%esp)
 8213659:	89 04 24             	mov    %eax,(%esp)
 821365c:	e8 a1 53 07 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8213661:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8213664:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8213668:	74 27                	je     8213691 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x1e9>
 821366a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821366d:	0f b6 c0             	movzbl %al,%eax
 8213670:	89 44 24 08          	mov    %eax,0x8(%esp)
 8213674:	c7 44 24 04 b6 00 00 	movl   $0xb6,0x4(%esp)
 821367b:	00 
 821367c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821367f:	89 04 24             	mov    %eax,(%esp)
 8213682:	e8 bb 88 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8213687:	bb 00 00 00 00       	mov    $0x0,%ebx
 821368c:	e9 54 02 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 8213691:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8213695:	0f b7 d8             	movzwl %ax,%ebx
 8213698:	0f b6 45 e1          	movzbl -0x1f(%ebp),%eax
 821369c:	0f b6 c0             	movzbl %al,%eax
 821369f:	89 04 24             	mov    %eax,(%esp)
 82136a2:	e8 9e 41 ee ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 82136a7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82136ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 82136af:	8b 45 0c             	mov    0xc(%ebp),%eax
 82136b2:	89 04 24             	mov    %eax,(%esp)
 82136b5:	e8 88 32 43 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 82136ba:	84 c0                	test   %al,%al
 82136bc:	74 25                	je     82136e3 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x23b>
 82136be:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 82136c5:	00 
 82136c6:	c7 44 24 04 b6 00 00 	movl   $0xb6,0x4(%esp)
 82136cd:	00 
 82136ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 82136d1:	89 04 24             	mov    %eax,(%esp)
 82136d4:	e8 69 88 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82136d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 82136de:	e9 02 02 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 82136e3:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 82136e7:	0f b7 d8             	movzwl %ax,%ebx
 82136ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 82136ed:	89 04 24             	mov    %eax,(%esp)
 82136f0:	e8 89 6b ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82136f5:	8d 55 97             	lea    -0x69(%ebp),%edx
 82136f8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82136fc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8213703:	00 
 8213704:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213708:	89 14 24             	mov    %edx,(%esp)
 821370b:	e8 08 82 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8213710:	83 ec 04             	sub    $0x4,%esp
 8213713:	8b 45 99             	mov    -0x67(%ebp),%eax
 8213716:	3d e9 02 00 00       	cmp    $0x2e9,%eax
 821371b:	74 25                	je     8213742 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x29a>
 821371d:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8213724:	00 
 8213725:	c7 44 24 04 b6 00 00 	movl   $0xb6,0x4(%esp)
 821372c:	00 
 821372d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213730:	89 04 24             	mov    %eax,(%esp)
 8213733:	e8 0a 88 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8213738:	bb 00 00 00 00       	mov    $0x0,%ebx
 821373d:	e9 a3 01 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 8213742:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8213746:	0f b7 d8             	movzwl %ax,%ebx
 8213749:	8b 45 0c             	mov    0xc(%ebp),%eax
 821374c:	89 04 24             	mov    %eax,(%esp)
 821374f:	e8 3a 6b ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8213754:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 821375b:	00 
 821375c:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8213763:	00 
 8213764:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 821376b:	00 
 821376c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8213770:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8213777:	00 
 8213778:	89 04 24             	mov    %eax,(%esp)
 821377b:	e8 8c 08 2f 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8213780:	83 f0 01             	xor    $0x1,%eax
 8213783:	84 c0                	test   %al,%al
 8213785:	74 25                	je     82137ac <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x304>
 8213787:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 821378e:	00 
 821378f:	c7 44 24 04 b6 00 00 	movl   $0xb6,0x4(%esp)
 8213796:	00 
 8213797:	8b 45 0c             	mov    0xc(%ebp),%eax
 821379a:	89 04 24             	mov    %eax,(%esp)
 821379d:	e8 a0 87 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82137a2:	bb 00 00 00 00       	mov    $0x0,%ebx
 82137a7:	e9 39 01 00 00       	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 82137ac:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82137af:	89 04 24             	mov    %eax,(%esp)
 82137b2:	e8 95 a5 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82137b7:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 82137be:	00 
 82137bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82137c6:	00 
 82137c7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82137ca:	89 04 24             	mov    %eax,(%esp)
 82137cd:	e8 2a 81 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82137d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82137d9:	00 
 82137da:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82137dd:	89 04 24             	mov    %eax,(%esp)
 82137e0:	e8 3b 81 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82137e5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82137ec:	00 
 82137ed:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82137f0:	89 04 24             	mov    %eax,(%esp)
 82137f3:	e8 ac 66 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82137f8:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 82137fc:	0f b7 d8             	movzwl %ax,%ebx
 82137ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213802:	89 04 24             	mov    %eax,(%esp)
 8213805:	e8 74 6a ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821380a:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 821380d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8213811:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8213815:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821381c:	00 
 821381d:	89 04 24             	mov    %eax,(%esp)
 8213820:	e8 97 8e 2e 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8213825:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821382c:	00 
 821382d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8213830:	89 04 24             	mov    %eax,(%esp)
 8213833:	e8 20 81 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8213838:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821383b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821383f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213842:	89 04 24             	mov    %eax,(%esp)
 8213845:	e8 70 4d 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821384a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821384d:	89 04 24             	mov    %eax,(%esp)
 8213850:	e8 af bc 01 00       	call   822f504 <_ZN15CUserCharacInfo18getCreateGuildNameEv>
 8213855:	89 c7                	mov    %eax,%edi
 8213857:	8b 45 0c             	mov    0xc(%ebp),%eax
 821385a:	89 04 24             	mov    %eax,(%esp)
 821385d:	e8 0a bc 01 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8213862:	89 c6                	mov    %eax,%esi
 8213864:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213867:	89 04 24             	mov    %eax,(%esp)
 821386a:	e8 df 83 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 821386f:	89 c3                	mov    %eax,%ebx
 8213871:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213874:	89 04 24             	mov    %eax,(%esp)
 8213877:	e8 14 84 eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821387c:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8213882:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213886:	89 14 24             	mov    %edx,(%esp)
 8213889:	e8 2a 9b f0 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821388e:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8213892:	89 74 24 08          	mov    %esi,0x8(%esp)
 8213896:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821389a:	89 04 24             	mov    %eax,(%esp)
 821389d:	e8 d4 aa 25 00       	call   846e376 <_ZN17CGuildServerProxy19SendGuildNameChangeEjjPc>
 82138a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82138a5:	89 04 24             	mov    %eax,(%esp)
 82138a8:	e8 e1 bb 01 00       	call   822f48e <_ZN15CUserCharacInfo20resetGuildCreateFlagEv>
 82138ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 82138b0:	89 04 24             	mov    %eax,(%esp)
 82138b3:	e8 f4 bb 01 00       	call   822f4ac <_ZN15CUserCharacInfo22resetTempGuildNameAddrEv>
 82138b8:	bb 00 00 00 00       	mov    $0x0,%ebx
 82138bd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82138c0:	89 04 24             	mov    %eax,(%esp)
 82138c3:	e8 b8 a5 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82138c8:	eb 1b                	jmp    82138e5 <_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf+0x43d>
 82138ca:	89 d3                	mov    %edx,%ebx
 82138cc:	89 c6                	mov    %eax,%esi
 82138ce:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82138d1:	89 04 24             	mov    %eax,(%esp)
 82138d4:	e8 a7 a5 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82138d9:	89 f0                	mov    %esi,%eax
 82138db:	89 da                	mov    %ebx,%edx
 82138dd:	89 04 24             	mov    %eax,(%esp)
 82138e0:	e8 6b fe 8c 00       	call   8ae3750 <_Unwind_Resume>
 82138e5:	89 d8                	mov    %ebx,%eax
 82138e7:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82138ea:	83 c4 00             	add    $0x0,%esp
 82138ed:	5b                   	pop    %ebx
 82138ee:	5e                   	pop    %esi
 82138ef:	5f                   	pop    %edi
 82138f0:	5d                   	pop    %ebp
 82138f1:	c3                   	ret

```

```c
// Dispatcher_ChangeGuildName::dispatch_sig @ 0x82134a8

/* Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeGuildName::dispatch_sig
          (Dispatcher_ChangeGuildName *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  char *pcVar7;
  uint uVar8;
  CGuildServerProxy *this_00;
  uint uVar9;
  undefined1 local_6d [2];
  int local_6b;
  PacketGuard local_30 [13];
  uchar local_23;
  ushort local_22;
  uint local_20;
  
  iVar4 = CUser::get_state(param_1);
  if (2 < iVar4) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_082134df;
    }
  }
  bVar1 = true;
LAB_082134df:
  if (bVar1) {
    uVar5 = LineFunc(0xc15f,
                     "virtual int Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    cVar3 = PacketBuf::get_short(param_2,&local_22);
    if (cVar3 == '\x01') {
      cVar3 = PacketBuf::get_byte(param_2,&local_23);
      if (cVar3 == '\x01') {
        iVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
        if (iVar4 == 0) {
          CUser::SendCmdErrorPacket(param_1,0xb6,100);
          uVar5 = 0;
        }
        else {
          cVar3 = CUserCharacInfo::isSetGuildCreateFlag((CUserCharacInfo *)param_1,2);
          if (cVar3 == '\x01') {
            cVar3 = CUser::IsGuildMaster(param_1);
            if (cVar3 == '\x01') {
              local_20 = CSecu_ProtectionField::Check
                                   (GlobalData::s_pSecuProtectionField,param_1,0xf);
              if (local_20 == 0) {
                uVar9 = (uint)local_22;
                iVar4 = GetInvenTypeFromItemSpace(local_23);
                cVar3 = CUser::CheckItemLock(param_1,iVar4,uVar9);
                if (cVar3 == '\0') {
                  uVar9 = (uint)local_22;
                  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_6d,iVar4);
                  uVar2 = local_22;
                  if (local_6b == 0x2e9) {
                    pCVar6 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    cVar3 = CInventory::delete_item(pCVar6,1,uVar2,1,3,1);
                    if (cVar3 == '\x01') {
                      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 082137cd to 082138a1 has its CatchHandler @ 082138ca */
                      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xe);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
                      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
                      pCVar6 = (CInventory *)
                               CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                      CInventory::MakeItemPacket(pCVar6,1,local_22,local_30);
                      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
                      CUser::Send(param_1,local_30);
                      pcVar7 = (char *)CUserCharacInfo::getCreateGuildName
                                                 ((CUserCharacInfo *)param_1);
                      uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
                      uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      uVar5 = CUser::GetServerGroup(param_1);
                      this_00 = (CGuildServerProxy *)
                                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                          (GlobalData::s_guild_proxy_mgr,uVar5);
                      CGuildServerProxy::SendGuildNameChange(this_00,uVar8,uVar9,pcVar7);
                      CUserCharacInfo::resetGuildCreateFlag((CUserCharacInfo *)param_1);
                      CUserCharacInfo::resetTempGuildNameAddr((CUserCharacInfo *)param_1);
                      uVar5 = 0;
                      PacketGuard::~PacketGuard(local_30);
                    }
                    else {
                      CUser::SendCmdErrorPacket(param_1,0xb6,0x11);
                      uVar5 = 0;
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket(param_1,0xb6,0x11,uVar9);
                    uVar5 = 0;
                  }
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,0xb6,0xd5);
                  uVar5 = 0;
                }
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0xb6,local_20 & 0xff);
                uVar5 = 0;
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xb6,0x56);
              uVar5 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xb6,0x6d);
            uVar5 = 0;
          }
        }
      }
      else {
        uVar5 = LineFunc(0xc166,
                         "virtual int Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar5 = LineFunc(0xc163,
                       "virtual int Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar5;
}

```

