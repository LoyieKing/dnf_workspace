# Dispatcher_UpgradeChronicle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08223330 Dispatcher_UpgradeChronicle::dispatch_sig  [0x08223330-0x8223bb5] ===
 8223330:	55                   	push   %ebp
 8223331:	89 e5                	mov    %esp,%ebp
 8223333:	57                   	push   %edi
 8223334:	56                   	push   %esi
 8223335:	53                   	push   %ebx
 8223336:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 822333c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822333f:	89 04 24             	mov    %eax,(%esp)
 8223342:	e8 45 70 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8223347:	83 f8 02             	cmp    $0x2,%eax
 822334a:	0f 9e c0             	setle  %al
 822334d:	84 c0                	test   %al,%al
 822334f:	74 0a                	je     822335b <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8223351:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223356:	e9 4d 08 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 822335b:	66 c7 45 b2 00 00    	movw   $0x0,-0x4e(%ebp)
 8223361:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8223368:	66 c7 45 aa 00 00    	movw   $0x0,-0x56(%ebp)
 822336e:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8223375:	c6 45 a3 00          	movb   $0x0,-0x5d(%ebp)
 8223379:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 822337c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223380:	8b 45 10             	mov    0x10(%ebp),%eax
 8223383:	89 04 24             	mov    %eax,(%esp)
 8223386:	e8 35 9c 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 822338b:	83 f0 01             	xor    $0x1,%eax
 822338e:	84 c0                	test   %al,%al
 8223390:	74 2b                	je     82233bd <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x8d>
 8223392:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223399:	00 
 822339a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82233a1:	00 
 82233a2:	c7 44 24 04 a0 ca bc 	movl   $0x8bccaa0,0x4(%esp)
 82233a9:	08 
 82233aa:	c7 04 24 a4 dd 00 00 	movl   $0xdda4,(%esp)
 82233b1:	e8 21 d5 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82233b6:	89 c3                	mov    %eax,%ebx
 82233b8:	e9 eb 07 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 82233bd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82233c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82233c4:	8b 45 10             	mov    0x10(%ebp),%eax
 82233c7:	89 04 24             	mov    %eax,(%esp)
 82233ca:	e8 71 9e 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82233cf:	83 f0 01             	xor    $0x1,%eax
 82233d2:	84 c0                	test   %al,%al
 82233d4:	74 2b                	je     8223401 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0xd1>
 82233d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82233dd:	00 
 82233de:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82233e5:	00 
 82233e6:	c7 44 24 04 a0 ca bc 	movl   $0x8bccaa0,0x4(%esp)
 82233ed:	08 
 82233ee:	c7 04 24 a5 dd 00 00 	movl   $0xdda5,(%esp)
 82233f5:	e8 dd d4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82233fa:	89 c3                	mov    %eax,%ebx
 82233fc:	e9 a7 07 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 8223401:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8223404:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223408:	8b 45 10             	mov    0x10(%ebp),%eax
 822340b:	89 04 24             	mov    %eax,(%esp)
 822340e:	e8 ad 9b 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8223413:	83 f0 01             	xor    $0x1,%eax
 8223416:	84 c0                	test   %al,%al
 8223418:	74 2b                	je     8223445 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x115>
 822341a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223421:	00 
 8223422:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223429:	00 
 822342a:	c7 44 24 04 a0 ca bc 	movl   $0x8bccaa0,0x4(%esp)
 8223431:	08 
 8223432:	c7 04 24 a6 dd 00 00 	movl   $0xdda6,(%esp)
 8223439:	e8 99 d4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822343e:	89 c3                	mov    %eax,%ebx
 8223440:	e9 63 07 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 8223445:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8223448:	89 44 24 04          	mov    %eax,0x4(%esp)
 822344c:	8b 45 10             	mov    0x10(%ebp),%eax
 822344f:	89 04 24             	mov    %eax,(%esp)
 8223452:	e8 e9 9d 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8223457:	83 f0 01             	xor    $0x1,%eax
 822345a:	84 c0                	test   %al,%al
 822345c:	74 2b                	je     8223489 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x159>
 822345e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223465:	00 
 8223466:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822346d:	00 
 822346e:	c7 44 24 04 a0 ca bc 	movl   $0x8bccaa0,0x4(%esp)
 8223475:	08 
 8223476:	c7 04 24 a7 dd 00 00 	movl   $0xdda7,(%esp)
 822347d:	e8 55 d4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223482:	89 c3                	mov    %eax,%ebx
 8223484:	e9 1f 07 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 8223489:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 822348c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223490:	8b 45 10             	mov    0x10(%ebp),%eax
 8223493:	89 04 24             	mov    %eax,(%esp)
 8223496:	e8 87 9a 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 822349b:	83 f0 01             	xor    $0x1,%eax
 822349e:	84 c0                	test   %al,%al
 82234a0:	74 2b                	je     82234cd <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x19d>
 82234a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82234a9:	00 
 82234aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82234b1:	00 
 82234b2:	c7 44 24 04 a0 ca bc 	movl   $0x8bccaa0,0x4(%esp)
 82234b9:	08 
 82234ba:	c7 04 24 a8 dd 00 00 	movl   $0xdda8,(%esp)
 82234c1:	e8 11 d4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82234c6:	89 c3                	mov    %eax,%ebx
 82234c8:	e9 db 06 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 82234cd:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 82234d2:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 82234d9:	00 
 82234da:	8b 55 0c             	mov    0xc(%ebp),%edx
 82234dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 82234e1:	89 04 24             	mov    %eax,(%esp)
 82234e4:	e8 19 55 06 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 82234e9:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82234ec:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 82234f0:	74 27                	je     8223519 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x1e9>
 82234f2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82234f5:	0f b6 c0             	movzbl %al,%eax
 82234f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 82234fc:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 8223503:	00 
 8223504:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223507:	89 04 24             	mov    %eax,(%esp)
 822350a:	e8 33 8a 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822350f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223514:	e9 8f 06 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 8223519:	0f b7 45 aa          	movzwl -0x56(%ebp),%eax
 822351d:	98                   	cwtl
 822351e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8223522:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8223529:	00 
 822352a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822352d:	89 04 24             	mov    %eax,(%esp)
 8223530:	e8 0d 34 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8223535:	84 c0                	test   %al,%al
 8223537:	74 25                	je     822355e <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 8223539:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8223540:	00 
 8223541:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 8223548:	00 
 8223549:	8b 45 0c             	mov    0xc(%ebp),%eax
 822354c:	89 04 24             	mov    %eax,(%esp)
 822354f:	e8 ee 89 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8223554:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223559:	e9 4a 06 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 822355e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223561:	89 04 24             	mov    %eax,(%esp)
 8223564:	e8 25 6d eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8223569:	89 45 cc             	mov    %eax,-0x34(%ebp)
 822356c:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 8223570:	0f bf d0             	movswl %ax,%edx
 8223573:	8d 85 3f ff ff ff    	lea    -0xc1(%ebp),%eax
 8223579:	89 54 24 0c          	mov    %edx,0xc(%esp)
 822357d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8223584:	00 
 8223585:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8223588:	89 54 24 04          	mov    %edx,0x4(%esp)
 822358c:	89 04 24             	mov    %eax,(%esp)
 822358f:	e8 84 83 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8223594:	83 ec 04             	sub    $0x4,%esp
 8223597:	0f b7 45 aa          	movzwl -0x56(%ebp),%eax
 822359b:	0f bf d0             	movswl %ax,%edx
 822359e:	8d 85 02 ff ff ff    	lea    -0xfe(%ebp),%eax
 82235a4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82235a8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82235af:	00 
 82235b0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 82235b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 82235b7:	89 04 24             	mov    %eax,(%esp)
 82235ba:	e8 59 83 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 82235bf:	83 ec 04             	sub    $0x4,%esp
 82235c2:	8b 85 41 ff ff ff    	mov    -0xbf(%ebp),%eax
 82235c8:	89 c3                	mov    %eax,%ebx
 82235ca:	e8 cc 8b ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 82235cf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82235d3:	89 04 24             	mov    %eax,(%esp)
 82235d6:	e8 57 c4 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82235db:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82235de:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 82235e4:	89 c3                	mov    %eax,%ebx
 82235e6:	e8 b0 8b ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 82235eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82235ef:	89 04 24             	mov    %eax,(%esp)
 82235f2:	e8 3b c4 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82235f7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82235fa:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 82235fe:	74 06                	je     8223606 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x2d6>
 8223600:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8223604:	75 25                	jne    822362b <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x2fb>
 8223606:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 822360d:	00 
 822360e:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 8223615:	00 
 8223616:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223619:	89 04 24             	mov    %eax,(%esp)
 822361c:	e8 21 89 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8223621:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223626:	e9 7d 05 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 822362b:	8b 85 41 ff ff ff    	mov    -0xbf(%ebp),%eax
 8223631:	85 c0                	test   %eax,%eax
 8223633:	74 0a                	je     822363f <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x30f>
 8223635:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 822363b:	85 c0                	test   %eax,%eax
 822363d:	75 25                	jne    8223664 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x334>
 822363f:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8223646:	00 
 8223647:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 822364e:	00 
 822364f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223652:	89 04 24             	mov    %eax,(%esp)
 8223655:	e8 e8 88 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822365a:	bb 00 00 00 00       	mov    $0x0,%ebx
 822365f:	e9 44 05 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 8223664:	8b 95 41 ff ff ff    	mov    -0xbf(%ebp),%edx
 822366a:	8b 45 ac             	mov    -0x54(%ebp),%eax
 822366d:	39 c2                	cmp    %eax,%edx
 822366f:	75 0d                	jne    822367e <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x34e>
 8223671:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 8223677:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 822367a:	39 c2                	cmp    %eax,%edx
 822367c:	74 25                	je     82236a3 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x373>
 822367e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8223685:	00 
 8223686:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 822368d:	00 
 822368e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223691:	89 04 24             	mov    %eax,(%esp)
 8223694:	e8 a9 88 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8223699:	bb 00 00 00 00       	mov    $0x0,%ebx
 822369e:	e9 05 05 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 82236a3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82236a6:	89 04 24             	mov    %eax,(%esp)
 82236a9:	e8 8a 93 00 00       	call   822ca38 <_ZN14CStackableItem12IsEmancipateEv>
 82236ae:	83 f0 01             	xor    $0x1,%eax
 82236b1:	84 c0                	test   %al,%al
 82236b3:	74 25                	je     82236da <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x3aa>
 82236b5:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 82236bc:	00 
 82236bd:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 82236c4:	00 
 82236c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82236c8:	89 04 24             	mov    %eax,(%esp)
 82236cb:	e8 72 88 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82236d0:	bb 00 00 00 00       	mov    $0x0,%ebx
 82236d5:	e9 ce 04 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 82236da:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82236dd:	89 04 24             	mov    %eax,(%esp)
 82236e0:	e8 15 dc ec ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 82236e5:	84 c0                	test   %al,%al
 82236e7:	74 25                	je     822370e <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x3de>
 82236e9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82236f0:	00 
 82236f1:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 82236f8:	00 
 82236f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82236fc:	89 04 24             	mov    %eax,(%esp)
 82236ff:	e8 3e 88 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8223704:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223709:	e9 9a 04 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 822370e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8223711:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8223714:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8223718:	75 0a                	jne    8223724 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x3f4>
 822371a:	bb 00 00 00 00       	mov    $0x0,%ebx
 822371f:	e9 84 04 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 8223724:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8223727:	89 04 24             	mov    %eax,(%esp)
 822372a:	e8 41 93 00 00       	call   822ca70 <_ZN10CEquipItem12IsEmancipateEv>
 822372f:	83 f0 01             	xor    $0x1,%eax
 8223732:	84 c0                	test   %al,%al
 8223734:	74 25                	je     822375b <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x42b>
 8223736:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822373d:	00 
 822373e:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 8223745:	00 
 8223746:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223749:	89 04 24             	mov    %eax,(%esp)
 822374c:	e8 f1 87 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8223751:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223756:	e9 4d 04 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 822375b:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8223762:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 8223769:	8d 45 98             	lea    -0x68(%ebp),%eax
 822376c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8223770:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8223773:	89 44 24 08          	mov    %eax,0x8(%esp)
 8223777:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 822377e:	00 
 822377f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8223782:	89 04 24             	mov    %eax,(%esp)
 8223785:	e8 d4 e0 2d 00       	call   850185e <_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>
 822378a:	0f b7 45 aa          	movzwl -0x56(%ebp),%eax
 822378e:	0f bf d0             	movswl %ax,%edx
 8223791:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8223794:	39 c2                	cmp    %eax,%edx
 8223796:	7c 33                	jl     82237cb <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x49b>
 8223798:	0f b7 45 aa          	movzwl -0x56(%ebp),%eax
 822379c:	0f bf d0             	movswl %ax,%edx
 822379f:	8b 45 98             	mov    -0x68(%ebp),%eax
 82237a2:	39 c2                	cmp    %eax,%edx
 82237a4:	7f 25                	jg     82237cb <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x49b>
 82237a6:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 82237ad:	00 
 82237ae:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 82237b5:	00 
 82237b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82237b9:	89 04 24             	mov    %eax,(%esp)
 82237bc:	e8 81 87 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82237c1:	bb 00 00 00 00       	mov    $0x0,%ebx
 82237c6:	e9 dd 03 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 82237cb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82237ce:	89 04 24             	mov    %eax,(%esp)
 82237d1:	e8 c2 b5 ef ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 82237d6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82237d9:	0f b7 85 0d ff ff ff 	movzwl -0xf3(%ebp),%eax
 82237e0:	0f b7 c0             	movzwl %ax,%eax
 82237e3:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 82237e6:	7d 25                	jge    822380d <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x4dd>
 82237e8:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 82237ef:	00 
 82237f0:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 82237f7:	00 
 82237f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82237fb:	89 04 24             	mov    %eax,(%esp)
 82237fe:	e8 3f 87 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8223803:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223808:	e9 9b 03 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 822380d:	8d 85 02 ff ff ff    	lea    -0xfe(%ebp),%eax
 8223813:	83 c0 11             	add    $0x11,%eax
 8223816:	89 04 24             	mov    %eax,(%esp)
 8223819:	e8 14 cf f2 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 822381e:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8223821:	8d 85 02 ff ff ff    	lea    -0xfe(%ebp),%eax
 8223827:	83 c0 11             	add    $0x11,%eax
 822382a:	89 04 24             	mov    %eax,(%esp)
 822382d:	e8 8a cf f2 ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 8223832:	83 f0 01             	xor    $0x1,%eax
 8223835:	84 c0                	test   %al,%al
 8223837:	74 25                	je     822385e <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x52e>
 8223839:	c7 44 24 08 ae 00 00 	movl   $0xae,0x8(%esp)
 8223840:	00 
 8223841:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 8223848:	00 
 8223849:	8b 45 0c             	mov    0xc(%ebp),%eax
 822384c:	89 04 24             	mov    %eax,(%esp)
 822384f:	e8 ee 86 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8223854:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223859:	e9 4a 03 00 00       	jmp    8223ba8 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x878>
 822385e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8223865:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8223868:	89 04 24             	mov    %eax,(%esp)
 822386b:	e8 3c a9 e6 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8223870:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 8223874:	0f be c0             	movsbl %al,%eax
 8223877:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 822387d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8223880:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 8223886:	0f b7 45 aa          	movzwl -0x56(%ebp),%eax
 822388a:	0f bf f8             	movswl %ax,%edi
 822388d:	8b 75 ac             	mov    -0x54(%ebp),%esi
 8223890:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 8223894:	0f bf d8             	movswl %ax,%ebx
 8223897:	e8 ff 88 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 822389c:	8b 50 20             	mov    0x20(%eax),%edx
 822389f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 82238a2:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82238a6:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 82238ac:	89 44 24 18          	mov    %eax,0x18(%esp)
 82238b0:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 82238b6:	89 44 24 14          	mov    %eax,0x14(%esp)
 82238ba:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82238be:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82238c2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82238c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82238c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82238cd:	89 14 24             	mov    %edx,(%esp)
 82238d0:	e8 01 59 32 00       	call   85491d6 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE>
 82238d5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82238d8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82238dc:	0f 95 c0             	setne  %al
 82238df:	84 c0                	test   %al,%al
 82238e1:	74 25                	je     8223908 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x5d8>
 82238e3:	c7 44 24 08 ae 00 00 	movl   $0xae,0x8(%esp)
 82238ea:	00 
 82238eb:	c7 44 24 04 12 01 00 	movl   $0x112,0x4(%esp)
 82238f2:	00 
 82238f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82238f6:	89 04 24             	mov    %eax,(%esp)
 82238f9:	e8 44 86 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82238fe:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223903:	e9 95 02 00 00       	jmp    8223b9d <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x86d>
 8223908:	8d 45 8c             	lea    -0x74(%ebp),%eax
 822390b:	89 04 24             	mov    %eax,(%esp)
 822390e:	e8 ad a8 e6 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8223913:	89 c1                	mov    %eax,%ecx
 8223915:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 822391a:	89 c8                	mov    %ecx,%eax
 822391c:	f7 e2                	mul    %edx
 822391e:	d1 ea                	shr    $1,%edx
 8223920:	89 d0                	mov    %edx,%eax
 8223922:	01 c0                	add    %eax,%eax
 8223924:	01 d0                	add    %edx,%eax
 8223926:	89 ca                	mov    %ecx,%edx
 8223928:	29 c2                	sub    %eax,%edx
 822392a:	85 d2                	test   %edx,%edx
 822392c:	0f 95 c0             	setne  %al
 822392f:	84 c0                	test   %al,%al
 8223931:	74 0a                	je     822393d <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x60d>
 8223933:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223938:	e9 60 02 00 00       	jmp    8223b9d <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x86d>
 822393d:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223940:	89 04 24             	mov    %eax,(%esp)
 8223943:	e8 04 a4 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8223948:	c7 44 24 08 12 01 00 	movl   $0x112,0x8(%esp)
 822394f:	00 
 8223950:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8223957:	00 
 8223958:	8d 45 80             	lea    -0x80(%ebp),%eax
 822395b:	89 04 24             	mov    %eax,(%esp)
 822395e:	e8 99 7f ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8223963:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822396a:	00 
 822396b:	8d 45 80             	lea    -0x80(%ebp),%eax
 822396e:	89 04 24             	mov    %eax,(%esp)
 8223971:	e8 aa 7f ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8223976:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8223979:	89 04 24             	mov    %eax,(%esp)
 822397c:	e8 3f a8 e6 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8223981:	89 85 a4 fe ff ff    	mov    %eax,-0x15c(%ebp)
 8223987:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 822398c:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8223992:	f7 e2                	mul    %edx
 8223994:	89 d0                	mov    %edx,%eax
 8223996:	d1 e8                	shr    $1,%eax
 8223998:	83 c0 01             	add    $0x1,%eax
 822399b:	0f be c0             	movsbl %al,%eax
 822399e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82239a2:	8d 45 80             	lea    -0x80(%ebp),%eax
 82239a5:	89 04 24             	mov    %eax,(%esp)
 82239a8:	e8 73 7f ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82239ad:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 82239b1:	0f bf d0             	movswl %ax,%edx
 82239b4:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 82239ba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82239be:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82239c5:	00 
 82239c6:	8b 55 cc             	mov    -0x34(%ebp),%edx
 82239c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 82239cd:	89 04 24             	mov    %eax,(%esp)
 82239d0:	e8 43 7f 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 82239d5:	83 ec 04             	sub    $0x4,%esp
 82239d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82239df:	00 
 82239e0:	8d 45 80             	lea    -0x80(%ebp),%eax
 82239e3:	89 04 24             	mov    %eax,(%esp)
 82239e6:	e8 35 7f ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82239eb:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 82239ef:	98                   	cwtl
 82239f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82239f4:	8d 45 80             	lea    -0x80(%ebp),%eax
 82239f7:	89 04 24             	mov    %eax,(%esp)
 82239fa:	e8 a5 64 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82239ff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8223a06:	00 
 8223a07:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223a0a:	89 04 24             	mov    %eax,(%esp)
 8223a0d:	e8 2a 7f ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8223a12:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8223a15:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8223a18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8223a1c:	89 04 24             	mov    %eax,(%esp)
 8223a1f:	e8 24 a8 e6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8223a24:	83 ec 04             	sub    $0x4,%esp
 8223a27:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8223a2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223a2e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8223a34:	89 04 24             	mov    %eax,(%esp)
 8223a37:	e8 b0 5f ed ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8223a3c:	e9 c1 00 00 00       	jmp    8223b02 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x7d2>
 8223a41:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8223a47:	89 04 24             	mov    %eax,(%esp)
 8223a4a:	e8 cd 5f ed ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8223a4f:	8b 00                	mov    (%eax),%eax
 8223a51:	0f be c0             	movsbl %al,%eax
 8223a54:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223a58:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223a5b:	89 04 24             	mov    %eax,(%esp)
 8223a5e:	e8 bd 7e ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8223a63:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8223a66:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223a6d:	00 
 8223a6e:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 8223a74:	89 54 24 04          	mov    %edx,0x4(%esp)
 8223a78:	89 04 24             	mov    %eax,(%esp)
 8223a7b:	e8 32 fe f6 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8223a80:	83 ec 04             	sub    $0x4,%esp
 8223a83:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8223a89:	89 04 24             	mov    %eax,(%esp)
 8223a8c:	e8 8b 5f ed ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8223a91:	8b 00                	mov    (%eax),%eax
 8223a93:	98                   	cwtl
 8223a94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223a98:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223a9b:	89 04 24             	mov    %eax,(%esp)
 8223a9e:	e8 01 64 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8223aa3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8223aa6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223aad:	00 
 8223aae:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 8223ab4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8223ab8:	89 04 24             	mov    %eax,(%esp)
 8223abb:	e8 f2 fd f6 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8223ac0:	83 ec 04             	sub    $0x4,%esp
 8223ac3:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8223ac9:	89 04 24             	mov    %eax,(%esp)
 8223acc:	e8 4b 5f ed ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8223ad1:	8b 00                	mov    (%eax),%eax
 8223ad3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223ad7:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223ada:	89 04 24             	mov    %eax,(%esp)
 8223add:	e8 5a 7e ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8223ae2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8223ae5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223aec:	00 
 8223aed:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 8223af3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8223af7:	89 04 24             	mov    %eax,(%esp)
 8223afa:	e8 b3 fd f6 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8223aff:	83 ec 04             	sub    $0x4,%esp
 8223b02:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8223b05:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8223b08:	89 54 24 04          	mov    %edx,0x4(%esp)
 8223b0c:	89 04 24             	mov    %eax,(%esp)
 8223b0f:	e8 58 a7 e6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8223b14:	83 ec 04             	sub    $0x4,%esp
 8223b17:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8223b1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223b1e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8223b24:	89 04 24             	mov    %eax,(%esp)
 8223b27:	e8 fc f8 f6 ff       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 8223b2c:	84 c0                	test   %al,%al
 8223b2e:	0f 85 0d ff ff ff    	jne    8223a41 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x711>
 8223b34:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8223b3b:	00 
 8223b3c:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223b3f:	89 04 24             	mov    %eax,(%esp)
 8223b42:	e8 11 7e ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8223b47:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223b4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223b4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223b51:	89 04 24             	mov    %eax,(%esp)
 8223b54:	e8 61 4a 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8223b59:	eb 15                	jmp    8223b70 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x840>
 8223b5b:	89 d3                	mov    %edx,%ebx
 8223b5d:	89 c6                	mov    %eax,%esi
 8223b5f:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223b62:	89 04 24             	mov    %eax,(%esp)
 8223b65:	e8 16 a3 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8223b6a:	89 f0                	mov    %esi,%eax
 8223b6c:	89 da                	mov    %ebx,%edx
 8223b6e:	eb 12                	jmp    8223b82 <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x852>
 8223b70:	8d 45 80             	lea    -0x80(%ebp),%eax
 8223b73:	89 04 24             	mov    %eax,(%esp)
 8223b76:	e8 05 a3 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8223b7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223b80:	eb 1b                	jmp    8223b9d <_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf+0x86d>
 8223b82:	89 d3                	mov    %edx,%ebx
 8223b84:	89 c6                	mov    %eax,%esi
 8223b86:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8223b89:	89 04 24             	mov    %eax,(%esp)
 8223b8c:	e8 49 02 e6 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8223b91:	89 f0                	mov    %esi,%eax
 8223b93:	89 da                	mov    %ebx,%edx
 8223b95:	89 04 24             	mov    %eax,(%esp)
 8223b98:	e8 b3 fb 8b 00       	call   8ae3750 <_Unwind_Resume>
 8223b9d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8223ba0:	89 04 24             	mov    %eax,(%esp)
 8223ba3:	e8 32 02 e6 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8223ba8:	89 d8                	mov    %ebx,%eax
 8223baa:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8223bad:	83 c4 00             	add    $0x0,%esp
 8223bb0:	5b                   	pop    %ebx
 8223bb1:	5e                   	pop    %esi
 8223bb2:	5f                   	pop    %edi
 8223bb3:	5d                   	pop    %ebp
 8223bb4:	c3                   	ret
 8223bb5:	90                   	nop

```

```c
// Dispatcher_UpgradeChronicle::dispatch_sig @ 0x8223330

/* Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpgradeChronicle::dispatch_sig
          (Dispatcher_UpgradeChronicle *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  CDataManager *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined1 local_13f [61];
  undefined1 local_102 [2];
  uint local_100;
  ushort local_f7;
  stAmplifyOption_t asStack_f1 [44];
  undefined1 local_c5 [2];
  uint local_c3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_88 [4];
  PacketGuard local_84 [12];
  vector<int,std::allocator<int>> local_78 [12];
  int local_6c;
  int local_68;
  char local_61;
  uint local_60;
  short local_5a;
  uint local_58;
  short local_52;
  __normal_iterator local_50 [4];
  __normal_iterator local_4c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_48 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_44 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_40 [4];
  uint local_3c;
  CInventory *local_38;
  CStackableItem *local_34;
  CItem *local_30;
  CEquipItem *local_2c;
  int local_28;
  undefined1 local_21;
  int local_20;
  
  iVar6 = CUser::get_state(param_1);
  if (iVar6 < 3) {
    uVar11 = 0;
  }
  else {
    local_52 = 0;
    local_58 = 0;
    local_5a = 0;
    local_60 = 0;
    local_61 = '\0';
    cVar4 = PacketBuf::get_short(param_2,&local_52);
    if (cVar4 == '\x01') {
      cVar4 = PacketBuf::get_int(param_2,&local_58);
      if (cVar4 == '\x01') {
        cVar4 = PacketBuf::get_short(param_2,&local_5a);
        if (cVar4 == '\x01') {
          cVar4 = PacketBuf::get_int(param_2,&local_60);
          if (cVar4 == '\x01') {
            cVar4 = PacketBuf::get_byte(param_2,&local_61);
            if (cVar4 == '\x01') {
              local_3c = CSecu_ProtectionField::Check
                                   (GlobalData::s_pSecuProtectionField,param_1,0x1a);
              if (local_3c == 0) {
                cVar4 = CUser::CheckItemLock(param_1,1,(int)local_5a);
                if (cVar4 == '\0') {
                  local_38 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_c5,(int)local_38);
                  CInventory::GetInvenSlot((int)local_102,(int)local_38);
                  uVar8 = local_c3;
                  pCVar7 = (CDataManager *)G_CDataManager();
                  local_34 = (CStackableItem *)CDataManager::find_item(pCVar7,uVar8);
                  uVar8 = local_100;
                  pCVar7 = (CDataManager *)G_CDataManager();
                  local_30 = (CItem *)CDataManager::find_item(pCVar7,uVar8);
                  if ((local_34 == (CStackableItem *)0x0) || (local_30 == (CItem *)0x0)) {
                    CUser::SendCmdErrorPacket(param_1,0x112,1);
                    uVar11 = 0;
                  }
                  else if ((local_c3 == 0) || (local_100 == 0)) {
                    CUser::SendCmdErrorPacket(param_1,0x112,4);
                    uVar11 = 0;
                  }
                  else if ((local_c3 == local_58) && (local_100 == local_60)) {
                    cVar4 = CStackableItem::IsEmancipate(local_34);
                    if (cVar4 == '\x01') {
                      cVar4 = CItem::is_stackable(local_30);
                      if (cVar4 == '\0') {
                        local_2c = (CEquipItem *)local_30;
                        if (local_30 == (CItem *)0x0) {
                          uVar11 = 0;
                        }
                        else {
                          cVar4 = CEquipItem::IsEmancipate((CEquipItem *)local_30);
                          if (cVar4 == '\x01') {
                            local_68 = 0;
                            local_6c = 0;
                            CInventory::getStartEndPos(local_38,0,&local_68,&local_6c);
                            if ((local_5a < local_68) || (local_6c < local_5a)) {
                              local_28 = CEquipItem::get_endurance(local_2c);
                              if ((int)(uint)local_f7 < local_28) {
                                CUser::SendCmdErrorPacket(param_1,0x112,7);
                                uVar11 = 0;
                              }
                              else {
                                local_21 = stAmplifyOption_t::getAbilityType(asStack_f1);
                                cVar4 = stAmplifyOption_t::isIdentified(asStack_f1);
                                if (cVar4 == '\x01') {
                                  local_20 = 0;
                                  std::vector<int,std::allocator<int>>::vector(local_78);
                                  sVar3 = local_52;
                                  uVar2 = local_58;
                                  sVar1 = local_5a;
                                  uVar8 = local_60;
                                  cVar4 = local_61;
                    /* try { // try from 08223897 to 08223947 has its CatchHandler @ 08223b82 */
                                  iVar6 = G_CDataManager();
                                  local_20 = WongWork::CItemUpgrade::ProcUpgradeChronicle
                                                       (*(CItemUpgrade **)(iVar6 + 0x20),param_1,
                                                        sVar3,uVar2,sVar1,uVar8,cVar4,
                                                        (vector *)local_78);
                                  if (local_20 == 0) {
                                    uVar8 = std::vector<int,std::allocator<int>>::size(local_78);
                                    if (uVar8 % 3 == 0) {
                                      PacketGuard::PacketGuard(local_84);
                    /* try { // try from 0822395e to 08223b58 has its CatchHandler @ 08223b5b */
                                      InterfacePacketBuf::put_header
                                                ((InterfacePacketBuf *)local_84,1,0x112);
                                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,1)
                                      ;
                                      uVar8 = std::vector<int,std::allocator<int>>::size(local_78);
                                      InterfacePacketBuf::put_byte
                                                ((InterfacePacketBuf *)local_84,
                                                 (int)(char)((char)(uVar8 / 3) + '\x01'));
                                      CInventory::GetInvenSlot((int)local_13f,(int)local_38);
                                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0)
                                      ;
                                      InterfacePacketBuf::put_short
                                                ((InterfacePacketBuf *)local_84,(int)local_52);
                                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,1);
                                      std::vector<int,std::allocator<int>>::begin();
                                      __gnu_cxx::
                                      __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                      ::__normal_iterator<int*>(local_88,local_50);
                                      while( true ) {
                                        std::vector<int,std::allocator<int>>::end();
                                        bVar5 = __gnu_cxx::operator!=(local_88,local_4c);
                                        if (!bVar5) break;
                                        puVar9 = (undefined4 *)
                                                 __gnu_cxx::
                                                 __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                                 ::operator*(local_88);
                                        InterfacePacketBuf::put_byte
                                                  ((InterfacePacketBuf *)local_84,(int)(char)*puVar9
                                                  );
                                        __gnu_cxx::
                                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                        ::operator++(local_48,(int)local_88);
                                        puVar9 = (undefined4 *)
                                                 __gnu_cxx::
                                                 __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                                 ::operator*(local_88);
                                        InterfacePacketBuf::put_short
                                                  ((InterfacePacketBuf *)local_84,
                                                   (int)(short)*puVar9);
                                        __gnu_cxx::
                                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                        ::operator++(local_44,(int)local_88);
                                        piVar10 = (int *)__gnu_cxx::
                                                                                                                  
                                                  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                                  ::operator*(local_88);
                                        InterfacePacketBuf::put_int
                                                  ((InterfacePacketBuf *)local_84,*piVar10);
                                        __gnu_cxx::
                                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                        ::operator++(local_40,(int)local_88);
                                      }
                                      InterfacePacketBuf::finalize
                                                ((InterfacePacketBuf *)local_84,true);
                                      CUser::Send(param_1,local_84);
                    /* try { // try from 08223b76 to 08223b7a has its CatchHandler @ 08223b82 */
                                      PacketGuard::~PacketGuard(local_84);
                                    }
                                  }
                                  else {
                                    CUser::SendCmdErrorPacket(param_1,0x112,0xae);
                                  }
                                  uVar11 = 0;
                                  std::vector<int,std::allocator<int>>::~vector(local_78);
                                }
                                else {
                                  CUser::SendCmdErrorPacket(param_1,0x112,0xae);
                                  uVar11 = 0;
                                }
                              }
                            }
                            else {
                              CUser::SendCmdErrorPacket(param_1,0x112,0x13);
                              uVar11 = 0;
                            }
                          }
                          else {
                            CUser::SendCmdErrorPacket(param_1,0x112,0x11);
                            uVar11 = 0;
                          }
                        }
                      }
                      else {
                        CUser::SendCmdErrorPacket(param_1,0x112,1);
                        uVar11 = 0;
                      }
                    }
                    else {
                      CUser::SendCmdErrorPacket(param_1,0x112,0x11);
                      uVar11 = 0;
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket(param_1,0x112,1);
                    uVar11 = 0;
                  }
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,0x112,0xd5);
                  uVar11 = 0;
                }
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x112,local_3c & 0xff);
                uVar11 = 0;
              }
            }
            else {
              uVar11 = LineFunc(0xdda8,
                                "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)"
                                ,0,0);
            }
          }
          else {
            uVar11 = LineFunc(0xdda7,
                              "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)"
                              ,0,0);
          }
        }
        else {
          uVar11 = LineFunc(0xdda6,
                            "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)"
                            ,0,0);
        }
      }
      else {
        uVar11 = LineFunc(0xdda5,
                          "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)"
                          ,0,0);
      }
    }
    else {
      uVar11 = LineFunc(0xdda4,
                        "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)",
                        0,0);
    }
  }
  return uVar11;
}

```

