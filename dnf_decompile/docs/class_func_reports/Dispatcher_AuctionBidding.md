# Dispatcher_AuctionBidding

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821522e Dispatcher_AuctionBidding::dispatch_sig  [0x0821522e-0x82159fb] ===
 821522e:	55                   	push   %ebp
 821522f:	89 e5                	mov    %esp,%ebp
 8215231:	56                   	push   %esi
 8215232:	53                   	push   %ebx
 8215233:	81 ec f0 00 00 00    	sub    $0xf0,%esp
 8215239:	8d 45 cf             	lea    -0x31(%ebp),%eax
 821523c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215240:	8b 45 10             	mov    0x10(%ebp),%eax
 8215243:	89 04 24             	mov    %eax,(%esp)
 8215246:	e8 25 7d 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821524b:	83 f0 01             	xor    $0x1,%eax
 821524e:	84 c0                	test   %al,%al
 8215250:	74 29                	je     821527b <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x4d>
 8215252:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215259:	00 
 821525a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215261:	00 
 8215262:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 8215269:	08 
 821526a:	c7 04 24 54 c5 00 00 	movl   $0xc554,(%esp)
 8215271:	e8 61 b6 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215276:	e9 77 07 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 821527b:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 821527f:	3c 01                	cmp    $0x1,%al
 8215281:	76 29                	jbe    82152ac <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7e>
 8215283:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821528a:	00 
 821528b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215292:	00 
 8215293:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 821529a:	08 
 821529b:	c7 04 24 57 c5 00 00 	movl   $0xc557,(%esp)
 82152a2:	e8 30 b6 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82152a7:	e9 46 07 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 82152ac:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 82152b0:	0f b6 c0             	movzbl %al,%eax
 82152b3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82152b6:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 82152ba:	75 17                	jne    82152d3 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0xa5>
 82152bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82152bf:	89 04 24             	mov    %eax,(%esp)
 82152c2:	e8 f1 4f ec ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82152c7:	83 f8 13             	cmp    $0x13,%eax
 82152ca:	7f 07                	jg     82152d3 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0xa5>
 82152cc:	b8 01 00 00 00       	mov    $0x1,%eax
 82152d1:	eb 05                	jmp    82152d8 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0xaa>
 82152d3:	b8 00 00 00 00       	mov    $0x0,%eax
 82152d8:	84 c0                	test   %al,%al
 82152da:	74 2c                	je     8215308 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0xda>
 82152dc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82152df:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82152e3:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 82152ea:	00 
 82152eb:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 82152f2:	00 
 82152f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82152f6:	89 04 24             	mov    %eax,(%esp)
 82152f9:	e8 24 6d 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 82152fe:	b8 00 00 00 00       	mov    $0x0,%eax
 8215303:	e9 ea 06 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 8215308:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821530b:	89 44 24 08          	mov    %eax,0x8(%esp)
 821530f:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 8215316:	00 
 8215317:	8b 45 0c             	mov    0xc(%ebp),%eax
 821531a:	89 04 24             	mov    %eax,(%esp)
 821531d:	e8 74 b7 46 00       	call   8680a96 <_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE>
 8215322:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8215325:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8215329:	78 08                	js     8215333 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x105>
 821532b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821532e:	e9 bf 06 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 8215333:	e8 ae d2 f4 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 8215338:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 821533f:	00 
 8215340:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8215347:	00 
 8215348:	8b 55 0c             	mov    0xc(%ebp),%edx
 821534b:	89 54 24 04          	mov    %edx,0x4(%esp)
 821534f:	89 04 24             	mov    %eax,(%esp)
 8215352:	e8 61 93 f5 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 8215357:	84 c0                	test   %al,%al
 8215359:	74 25                	je     8215380 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x152>
 821535b:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 8215362:	00 
 8215363:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 821536a:	00 
 821536b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821536e:	89 04 24             	mov    %eax,(%esp)
 8215371:	e8 cc 6b 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8215376:	b8 00 00 00 00       	mov    $0x0,%eax
 821537b:	e9 72 06 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 8215380:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8215385:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 821538c:	00 
 821538d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8215390:	89 54 24 04          	mov    %edx,0x4(%esp)
 8215394:	89 04 24             	mov    %eax,(%esp)
 8215397:	e8 66 36 07 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 821539c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 821539f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 82153a3:	74 2e                	je     82153d3 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x1a5>
 82153a5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82153a8:	0f b6 c0             	movzbl %al,%eax
 82153ab:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82153ae:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82153b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82153b6:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 82153bd:	00 
 82153be:	8b 45 0c             	mov    0xc(%ebp),%eax
 82153c1:	89 04 24             	mov    %eax,(%esp)
 82153c4:	e8 59 6c 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 82153c9:	b8 00 00 00 00       	mov    $0x0,%eax
 82153ce:	e9 1f 06 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 82153d3:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 82153d7:	0f 85 41 02 00 00    	jne    821561e <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 82153dd:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82153e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82153e4:	8b 45 10             	mov    0x10(%ebp),%eax
 82153e7:	89 04 24             	mov    %eax,(%esp)
 82153ea:	e8 51 7e 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82153ef:	83 f0 01             	xor    $0x1,%eax
 82153f2:	84 c0                	test   %al,%al
 82153f4:	74 29                	je     821541f <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x1f1>
 82153f6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82153fd:	00 
 82153fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215405:	00 
 8215406:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 821540d:	08 
 821540e:	c7 04 24 a9 c5 00 00 	movl   $0xc5a9,(%esp)
 8215415:	e8 bd b4 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821541a:	e9 d3 05 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 821541f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215422:	89 04 24             	mov    %eax,(%esp)
 8215425:	e8 50 8b ee ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 821542a:	8b 55 bc             	mov    -0x44(%ebp),%edx
 821542d:	39 d0                	cmp    %edx,%eax
 821542f:	0f 92 c0             	setb   %al
 8215432:	84 c0                	test   %al,%al
 8215434:	74 2c                	je     8215462 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x234>
 8215436:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8215439:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821543d:	c7 44 24 08 90 00 00 	movl   $0x90,0x8(%esp)
 8215444:	00 
 8215445:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 821544c:	00 
 821544d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215450:	89 04 24             	mov    %eax,(%esp)
 8215453:	e8 ca 6b 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8215458:	b8 00 00 00 00       	mov    $0x0,%eax
 821545d:	e9 90 05 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 8215462:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215465:	89 04 24             	mov    %eax,(%esp)
 8215468:	e8 e1 67 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 821546d:	89 c3                	mov    %eax,%ebx
 821546f:	e8 ac ca 01 00       	call   8231f20 <_Z16G_CPrePayInfoMgrv>
 8215474:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8215478:	89 04 24             	mov    %eax,(%esp)
 821547b:	e8 38 fd ff ff       	call   82151b8 <_ZN14CPrePayInfoMgr14FindPrePayInfoEi>
 8215480:	85 c0                	test   %eax,%eax
 8215482:	75 0f                	jne    8215493 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x265>
 8215484:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215487:	89 04 24             	mov    %eax,(%esp)
 821548a:	e8 95 d5 47 00       	call   8692a24 <_ZN5CUser13GetBuyingGoldEv>
 821548f:	84 c0                	test   %al,%al
 8215491:	74 07                	je     821549a <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x26c>
 8215493:	b8 01 00 00 00       	mov    $0x1,%eax
 8215498:	eb 05                	jmp    821549f <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x271>
 821549a:	b8 00 00 00 00       	mov    $0x0,%eax
 821549f:	84 c0                	test   %al,%al
 82154a1:	74 2c                	je     82154cf <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x2a1>
 82154a3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82154a6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82154aa:	c7 44 24 08 9e 00 00 	movl   $0x9e,0x8(%esp)
 82154b1:	00 
 82154b2:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 82154b9:	00 
 82154ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 82154bd:	89 04 24             	mov    %eax,(%esp)
 82154c0:	e8 5d 6b 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 82154c5:	b8 00 00 00 00       	mov    $0x0,%eax
 82154ca:	e9 23 05 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 82154cf:	8d 45 88             	lea    -0x78(%ebp),%eax
 82154d2:	83 c0 04             	add    $0x4,%eax
 82154d5:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 82154dc:	00 
 82154dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82154e1:	8b 45 10             	mov    0x10(%ebp),%eax
 82154e4:	89 04 24             	mov    %eax,(%esp)
 82154e7:	e8 c6 7e 37 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 82154ec:	83 f0 01             	xor    $0x1,%eax
 82154ef:	84 c0                	test   %al,%al
 82154f1:	74 29                	je     821551c <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x2ee>
 82154f3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82154fa:	00 
 82154fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215502:	00 
 8215503:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 821550a:	08 
 821550b:	c7 04 24 bb c5 00 00 	movl   $0xc5bb,(%esp)
 8215512:	e8 c0 b3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215517:	e9 d6 04 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 821551c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 821551f:	89 45 88             	mov    %eax,-0x78(%ebp)
 8215522:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8215529:	8d 45 b8             	lea    -0x48(%ebp),%eax
 821552c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215530:	8b 45 10             	mov    0x10(%ebp),%eax
 8215533:	89 04 24             	mov    %eax,(%esp)
 8215536:	e8 b5 7b 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821553b:	83 f0 01             	xor    $0x1,%eax
 821553e:	84 c0                	test   %al,%al
 8215540:	74 29                	je     821556b <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x33d>
 8215542:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215549:	00 
 821554a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215551:	00 
 8215552:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 8215559:	08 
 821555a:	c7 04 24 c1 c5 00 00 	movl   $0xc5c1,(%esp)
 8215561:	e8 71 b3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215566:	e9 87 04 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 821556b:	8d 85 1e ff ff ff    	lea    -0xe2(%ebp),%eax
 8215571:	89 04 24             	mov    %eax,(%esp)
 8215574:	e8 5f 96 01 00       	call   822ebd8 <_ZN31PCK_AUCTION_ASK_OWNER_IS_VIP_GPC1Ev>
 8215579:	8b 45 0c             	mov    0xc(%ebp),%eax
 821557c:	89 04 24             	mov    %eax,(%esp)
 821557f:	e8 12 37 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8215584:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 821558a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821558d:	89 04 24             	mov    %eax,(%esp)
 8215590:	e8 b9 66 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8215595:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 821559b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821559e:	89 04 24             	mov    %eax,(%esp)
 82155a1:	e8 8c ae f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82155a6:	83 c0 04             	add    $0x4,%eax
 82155a9:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 82155b0:	00 
 82155b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82155b5:	8d 85 1e ff ff ff    	lea    -0xe2(%ebp),%eax
 82155bb:	83 c0 22             	add    $0x22,%eax
 82155be:	89 04 24             	mov    %eax,(%esp)
 82155c1:	e8 0a 83 e6 ff       	call   807d8d0 <strncpy@plt>
 82155c6:	8b 45 8c             	mov    -0x74(%ebp),%eax
 82155c9:	8b 55 90             	mov    -0x70(%ebp),%edx
 82155cc:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 82155d2:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
 82155d8:	8b 45 bc             	mov    -0x44(%ebp),%eax
 82155db:	89 85 4d ff ff ff    	mov    %eax,-0xb3(%ebp)
 82155e1:	8b 45 b8             	mov    -0x48(%ebp),%eax
 82155e4:	89 85 51 ff ff ff    	mov    %eax,-0xaf(%ebp)
 82155ea:	a1 4c be 40 09       	mov    0x940be4c,%eax
 82155ef:	8d 95 1e ff ff ff    	lea    -0xe2(%ebp),%edx
 82155f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82155f9:	89 04 24             	mov    %eax,(%esp)
 82155fc:	e8 2b 26 0e 00       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8215601:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8215608:	00 
 8215609:	8b 45 0c             	mov    0xc(%ebp),%eax
 821560c:	89 04 24             	mov    %eax,(%esp)
 821560f:	e8 f4 d3 47 00       	call   8692a08 <_ZN5CUser13SetBuyingGoldEb>
 8215614:	b8 00 00 00 00       	mov    $0x0,%eax
 8215619:	e9 d4 03 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 821561e:	8d 85 55 ff ff ff    	lea    -0xab(%ebp),%eax
 8215624:	89 04 24             	mov    %eax,(%esp)
 8215627:	e8 00 90 01 00       	call   822e62c <_ZN22PCK_AUCTION_BIDDING_GAC1Ev>
 821562c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821562f:	89 04 24             	mov    %eax,(%esp)
 8215632:	e8 5f 36 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8215637:	89 85 67 ff ff ff    	mov    %eax,-0x99(%ebp)
 821563d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215640:	89 04 24             	mov    %eax,(%esp)
 8215643:	e8 06 66 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8215648:	89 85 6b ff ff ff    	mov    %eax,-0x95(%ebp)
 821564e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215651:	89 04 24             	mov    %eax,(%esp)
 8215654:	e8 d9 ad f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8215659:	83 c0 04             	add    $0x4,%eax
 821565c:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8215663:	00 
 8215664:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215668:	8d 85 55 ff ff ff    	lea    -0xab(%ebp),%eax
 821566e:	83 c0 1a             	add    $0x1a,%eax
 8215671:	89 04 24             	mov    %eax,(%esp)
 8215674:	e8 57 82 e6 ff       	call   807d8d0 <strncpy@plt>
 8215679:	8d 85 55 ff ff ff    	lea    -0xab(%ebp),%eax
 821567f:	83 c0 27             	add    $0x27,%eax
 8215682:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215686:	8b 45 10             	mov    0x10(%ebp),%eax
 8215689:	89 04 24             	mov    %eax,(%esp)
 821568c:	e8 5f 7a 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8215691:	83 f0 01             	xor    $0x1,%eax
 8215694:	84 c0                	test   %al,%al
 8215696:	74 29                	je     82156c1 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x493>
 8215698:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821569f:	00 
 82156a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82156a7:	00 
 82156a8:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 82156af:	08 
 82156b0:	c7 04 24 42 c6 00 00 	movl   $0xc642,(%esp)
 82156b7:	e8 1b b2 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82156bc:	e9 31 03 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 82156c1:	8d 85 55 ff ff ff    	lea    -0xab(%ebp),%eax
 82156c7:	83 c0 2b             	add    $0x2b,%eax
 82156ca:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 82156d1:	00 
 82156d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82156d6:	8b 45 10             	mov    0x10(%ebp),%eax
 82156d9:	89 04 24             	mov    %eax,(%esp)
 82156dc:	e8 d1 7c 37 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 82156e1:	83 f0 01             	xor    $0x1,%eax
 82156e4:	84 c0                	test   %al,%al
 82156e6:	74 29                	je     8215711 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x4e3>
 82156e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82156ef:	00 
 82156f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82156f7:	00 
 82156f8:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 82156ff:	08 
 8215700:	c7 04 24 43 c6 00 00 	movl   $0xc643,(%esp)
 8215707:	e8 cb b1 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821570c:	e9 e1 02 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 8215711:	c7 45 c2 00 00 00 00 	movl   $0x0,-0x3e(%ebp)
 8215718:	c7 45 c6 00 00 00 00 	movl   $0x0,-0x3a(%ebp)
 821571f:	c7 45 ca 00 00 00 00 	movl   $0x0,-0x36(%ebp)
 8215726:	c6 45 ce 00          	movb   $0x0,-0x32(%ebp)
 821572a:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8215731:	00 
 8215732:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 8215735:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215739:	8b 45 10             	mov    0x10(%ebp),%eax
 821573c:	89 04 24             	mov    %eax,(%esp)
 821573f:	e8 6e 7c 37 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8215744:	83 f0 01             	xor    $0x1,%eax
 8215747:	84 c0                	test   %al,%al
 8215749:	74 29                	je     8215774 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x546>
 821574b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215752:	00 
 8215753:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821575a:	00 
 821575b:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 8215762:	08 
 8215763:	c7 04 24 48 c6 00 00 	movl   $0xc648,(%esp)
 821576a:	e8 68 b1 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821576f:	e9 7e 02 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 8215774:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215777:	89 04 24             	mov    %eax,(%esp)
 821577a:	e8 09 4a f6 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 821577f:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 8215785:	39 d0                	cmp    %edx,%eax
 8215787:	0f 9c c0             	setl   %al
 821578a:	84 c0                	test   %al,%al
 821578c:	74 2c                	je     82157ba <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x58c>
 821578e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8215791:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8215795:	c7 44 24 08 90 00 00 	movl   $0x90,0x8(%esp)
 821579c:	00 
 821579d:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 82157a4:	00 
 82157a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82157a8:	89 04 24             	mov    %eax,(%esp)
 82157ab:	e8 72 68 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 82157b0:	b8 00 00 00 00       	mov    $0x0,%eax
 82157b5:	e9 38 02 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 82157ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 82157bd:	89 04 24             	mov    %eax,(%esp)
 82157c0:	e8 c9 4a ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82157c5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82157c8:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 82157ce:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82157d5:	00 
 82157d6:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 82157dd:	00 
 82157de:	89 44 24 04          	mov    %eax,0x4(%esp)
 82157e2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82157e5:	89 04 24             	mov    %eax,(%esp)
 82157e8:	e8 5f 9d 2e 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 82157ed:	83 f0 01             	xor    $0x1,%eax
 82157f0:	84 c0                	test   %al,%al
 82157f2:	74 2c                	je     8215820 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x5f2>
 82157f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82157f7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82157fb:	c7 44 24 08 93 00 00 	movl   $0x93,0x8(%esp)
 8215802:	00 
 8215803:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 821580a:	00 
 821580b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821580e:	89 04 24             	mov    %eax,(%esp)
 8215811:	e8 0c 68 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8215816:	b8 00 00 00 00       	mov    $0x0,%eax
 821581b:	e9 d2 01 00 00       	jmp    82159f2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7c4>
 8215820:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215823:	89 04 24             	mov    %eax,(%esp)
 8215826:	e8 ad ac 43 00       	call   86504d8 <_ZN5CUser13SaveMoneyCoinEv>
 821582b:	a1 48 be 40 09       	mov    0x940be48,%eax
 8215830:	8d 95 55 ff ff ff    	lea    -0xab(%ebp),%edx
 8215836:	89 54 24 04          	mov    %edx,0x4(%esp)
 821583a:	89 04 24             	mov    %eax,(%esp)
 821583d:	e8 da 22 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8215842:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8215848:	3d 87 13 00 00       	cmp    $0x1387,%eax
 821584d:	0f 8e 11 01 00 00    	jle    8215964 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x736>
 8215853:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8215858:	c7 44 24 08 78 c6 00 	movl   $0xc678,0x8(%esp)
 821585f:	00 
 8215860:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 8215867:	08 
 8215868:	89 04 24             	mov    %eax,(%esp)
 821586b:	e8 16 a2 07 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8215870:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8215877:	00 
 8215878:	89 44 24 04          	mov    %eax,0x4(%esp)
 821587c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 821587f:	89 04 24             	mov    %eax,(%esp)
 8215882:	e8 9f 33 eb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8215887:	8d 45 b0             	lea    -0x50(%ebp),%eax
 821588a:	89 04 24             	mov    %eax,(%esp)
 821588d:	e8 b4 33 eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8215892:	c7 44 24 04 09 03 00 	movl   $0x309,0x4(%esp)
 8215899:	00 
 821589a:	89 04 24             	mov    %eax,(%esp)
 821589d:	e8 b4 33 eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82158a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82158a5:	89 04 24             	mov    %eax,(%esp)
 82158a8:	e8 e9 33 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82158ad:	89 c3                	mov    %eax,%ebx
 82158af:	8d 45 b0             	lea    -0x50(%ebp),%eax
 82158b2:	89 04 24             	mov    %eax,(%esp)
 82158b5:	e8 8c 33 eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82158ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82158be:	89 04 24             	mov    %eax,(%esp)
 82158c1:	e8 90 33 eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82158c6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 82158c9:	89 04 24             	mov    %eax,(%esp)
 82158cc:	e8 7d 33 eb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 82158d1:	89 04 24             	mov    %eax,(%esp)
 82158d4:	e8 bd 22 02 00       	call   8237b96 <_ZN12CStreamGuard11GetInBufferI21SIG_AUCTION_MONEY_SUBEEPT_v>
 82158d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82158dc:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 82158e3:	00 
 82158e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82158eb:	00 
 82158ec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82158ef:	89 04 24             	mov    %eax,(%esp)
 82158f2:	e8 c9 83 e6 ff       	call   807dcc0 <memset@plt>
 82158f7:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 82158fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8215900:	89 50 04             	mov    %edx,0x4(%eax)
 8215903:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8215906:	8d 50 08             	lea    0x8(%eax),%edx
 8215909:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8215910:	00 
 8215911:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 8215914:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215918:	89 14 24             	mov    %edx,(%esp)
 821591b:	e8 b0 7f e6 ff       	call   807d8d0 <strncpy@plt>
 8215920:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8215925:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8215928:	89 54 24 08          	mov    %edx,0x8(%esp)
 821592c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8215933:	00 
 8215934:	89 04 24             	mov    %eax,(%esp)
 8215937:	e8 a2 b6 35 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 821593c:	eb 1b                	jmp    8215959 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x72b>
 821593e:	89 d3                	mov    %edx,%ebx
 8215940:	89 c6                	mov    %eax,%esi
 8215942:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8215945:	89 04 24             	mov    %eax,(%esp)
 8215948:	e8 85 6f 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 821594d:	89 f0                	mov    %esi,%eax
 821594f:	89 da                	mov    %ebx,%edx
 8215951:	89 04 24             	mov    %eax,(%esp)
 8215954:	e8 f7 dd 8c 00       	call   8ae3750 <_Unwind_Resume>
 8215959:	8d 45 b0             	lea    -0x50(%ebp),%eax
 821595c:	89 04 24             	mov    %eax,(%esp)
 821595f:	e8 6e 6f 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8215964:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 821596b:	eb 75                	jmp    82159e2 <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7b4>
 821596d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8215970:	8b 04 85 d8 01 37 09 	mov    0x93701d8(,%eax,4),%eax
 8215977:	89 c3                	mov    %eax,%ebx
 8215979:	8b 45 0c             	mov    0xc(%ebp),%eax
 821597c:	89 04 24             	mov    %eax,(%esp)
 821597f:	e8 ca 62 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8215984:	39 c3                	cmp    %eax,%ebx
 8215986:	0f 94 c0             	sete   %al
 8215989:	84 c0                	test   %al,%al
 821598b:	74 51                	je     82159de <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7b0>
 821598d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215990:	89 04 24             	mov    %eax,(%esp)
 8215993:	e8 b6 62 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8215998:	89 c3                	mov    %eax,%ebx
 821599a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82159a1:	00 
 82159a2:	c7 44 24 08 86 c6 00 	movl   $0xc686,0x8(%esp)
 82159a9:	00 
 82159aa:	c7 44 24 04 e0 dc bc 	movl   $0x8bcdce0,0x4(%esp)
 82159b1:	08 
 82159b2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82159b5:	89 04 24             	mov    %eax,(%esp)
 82159b8:	e8 5b 9d 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82159bd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82159c1:	c7 44 24 08 41 33 bc 	movl   $0x8bc3341,0x8(%esp)
 82159c8:	08 
 82159c9:	c7 44 24 04 f7 32 bc 	movl   $0x8bc32f7,0x4(%esp)
 82159d0:	08 
 82159d1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82159d4:	89 04 24             	mov    %eax,(%esp)
 82159d7:	e8 ac 9d 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82159dc:	eb 0f                	jmp    82159ed <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x7bf>
 82159de:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82159e2:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 82159e6:	0f 9e c0             	setle  %al
 82159e9:	84 c0                	test   %al,%al
 82159eb:	75 80                	jne    821596d <_ZN25Dispatcher_AuctionBidding12dispatch_sigEP5CUserR9PacketBuf+0x73f>
 82159ed:	b8 00 00 00 00       	mov    $0x0,%eax
 82159f2:	81 c4 f0 00 00 00    	add    $0xf0,%esp
 82159f8:	5b                   	pop    %ebx
 82159f9:	5e                   	pop    %esi
 82159fa:	5d                   	pop    %ebp
 82159fb:	c3                   	ret

```

```c
// Dispatcher_AuctionBidding::dispatch_sig @ 0x821522e

/* Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&) */

int __thiscall
Dispatcher_AuctionBidding::dispatch_sig
          (Dispatcher_AuctionBidding *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ServiceRestrictManager *pSVar4;
  uint uVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  int iVar8;
  undefined4 uVar9;
  PCK_AUCTION_ASK_OWNER_IS_VIP_GP local_e6 [18];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  char acStack_c4 [13];
  uint local_b7;
  int local_b3;
  PCK_AUCTION_BIDDING_GA local_af [18];
  undefined4 local_9d;
  undefined4 local_99;
  char acStack_95 [13];
  int local_88;
  char acStack_84 [8];
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  CStreamGuard local_54 [8];
  int local_4c;
  uint local_48;
  char local_42 [14];
  cMyTrace local_34 [16];
  uint local_24;
  int local_20;
  uint local_1c;
  CInventory *local_18;
  SIG_AUCTION_MONEY_SUB *local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,(uchar *)(local_42 + 0xd));
  if (cVar2 == '\x01') {
    if ((byte)local_42[0xd] < 2) {
      local_24 = (uint)(byte)local_42[0xd];
      if ((local_24 == 1) &&
         (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar3 < 0x14)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(param_1,0xbc,0x74,local_24);
        local_20 = 0;
      }
      else {
        local_20 = CUser::AuctionPreCheck(param_1,0xbc,local_24);
        if (local_20 < 0) {
          pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar2 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,5);
          if (cVar2 == '\0') {
            local_1c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x34)
            ;
            if (local_1c == 0) {
              if (local_24 == 1) {
                cVar2 = PacketBuf::get_int(param_2,&local_48);
                if (cVar2 == '\x01') {
                  uVar5 = CUser::GetCera(param_1);
                  if (uVar5 < local_48) {
                    CUser::SendCmdErrorPacket(param_1,0xbc,0x90,local_24);
                    local_20 = 0;
                  }
                  else {
                    CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                    iVar3 = G_CPrePayInfoMgr();
                    iVar3 = CPrePayInfoMgr::FindPrePayInfo(iVar3);
                    if ((iVar3 == 0) && (cVar2 = CUser::GetBuyingGold(param_1), cVar2 == '\0')) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      CUser::SendCmdErrorPacket(param_1,0xbc,0x9e,local_24);
                      local_20 = 0;
                    }
                    else {
                      cVar2 = PacketBuf::get_binary(param_2,(char *)&local_78,8);
                      if (cVar2 == '\x01') {
                        local_7c = local_48;
                        local_4c = 0;
                        cVar2 = PacketBuf::get_int(param_2,&local_4c);
                        if (cVar2 == '\x01') {
                          PCK_AUCTION_ASK_OWNER_IS_VIP_GP::PCK_AUCTION_ASK_OWNER_IS_VIP_GP(local_e6)
                          ;
                          local_d4 = CUser::GetUID(param_1);
                          local_c8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                          iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
                          strncpy(acStack_c4,(char *)(iVar3 + 4),0xd);
                          local_d0 = local_78;
                          local_cc = local_74;
                          local_b7 = local_48;
                          local_b3 = local_4c;
                          CCeraAuctionServerProxy::SendPacket
                                    (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_e6);
                          CUser::SetBuyingGold(param_1,true);
                          local_20 = 0;
                        }
                        else {
                          local_20 = LineFunc(0xc5c1,
                                              "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                              ,0,0);
                        }
                      }
                      else {
                        local_20 = LineFunc(0xc5bb,
                                            "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                            ,0,0);
                      }
                    }
                  }
                }
                else {
                  local_20 = LineFunc(0xc5a9,
                                      "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                      ,0,0);
                }
              }
              else {
                PCK_AUCTION_BIDDING_GA::PCK_AUCTION_BIDDING_GA(local_af);
                local_9d = CUser::GetUID(param_1);
                local_99 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
                strncpy(acStack_95,(char *)(iVar3 + 4),0xd);
                cVar2 = PacketBuf::get_int(param_2,&local_88);
                if (cVar2 == '\x01') {
                  cVar2 = PacketBuf::get_binary(param_2,acStack_84,8);
                  if (cVar2 == '\x01') {
                    local_42[0] = '\0';
                    local_42[1] = '\0';
                    local_42[2] = '\0';
                    local_42[3] = '\0';
                    local_42[4] = '\0';
                    local_42[5] = '\0';
                    local_42[6] = '\0';
                    local_42[7] = '\0';
                    local_42[8] = '\0';
                    local_42[9] = '\0';
                    local_42[10] = '\0';
                    local_42[0xb] = '\0';
                    local_42[0xc] = 0;
                    cVar2 = PacketBuf::get_binary(param_2,local_42,0xd);
                    if (cVar2 == '\x01') {
                      iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
                      if (iVar3 < local_88) {
                        CUser::SendCmdErrorPacket(param_1,0xbc,0x90,local_24);
                        local_20 = 0;
                      }
                      else {
                        local_18 = (CInventory *)
                                   CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                        cVar2 = CInventory::use_money(local_18,local_88,0x1a,1);
                        if (cVar2 == '\x01') {
                          CUser::SaveMoneyCoin(param_1);
                          CAuctionServerProxy::SendPacket
                                    (GlobalData::s_auction_proxy,(PACKET_HEADER *)local_af);
                          if (4999 < local_88) {
                            pSVar6 = (Stream *)
                                     StreamPool::Acquire(GlobalData::s_stream_pool,
                                                         "PacketDispatcher_Impl_1.cpp",0xc678);
                            CStreamGuard::CStreamGuard(local_54,pSVar6,true);
                            pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_54);
                    /* try { // try from 0821589d to 0821593b has its CatchHandler @ 0821593e */
                            CStreamGuard::operator<<(pCVar7,0x309);
                            iVar3 = CUser::GetUID(param_1);
                            pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_54);
                            CStreamGuard::operator<<(pCVar7,iVar3);
                            pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_54);
                            local_14 = CStreamGuard::GetInBuffer<SIG_AUCTION_MONEY_SUB>(pCVar7);
                            memset(local_14,0,0x28);
                            *(int *)(local_14 + 4) = local_88;
                            strncpy((char *)(local_14 + 8),local_42,0xd);
                            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_54);
                            CStreamGuard::~CStreamGuard(local_54);
                          }
                          for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
                            iVar3 = *(int *)(gmList + local_10 * 4);
                            iVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                            if (iVar3 == iVar8) {
                              uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                              cMyTrace::cMyTrace(local_34,
                                                 "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                                 ,0xc686,0);
                              cMyTrace::operator()
                                        (local_34,"Trace Auction Delay, %s(%d)","REQ AuctionBidding"
                                         ,uVar9);
                              break;
                            }
                          }
                          local_20 = 0;
                        }
                        else {
                          CUser::SendCmdErrorPacket(param_1,0xbc,0x93,local_24);
                          local_20 = 0;
                        }
                      }
                    }
                    else {
                      local_20 = LineFunc(0xc648,
                                          "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                          ,0,0);
                    }
                  }
                  else {
                    local_20 = LineFunc(0xc643,
                                        "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                        ,0,0);
                  }
                }
                else {
                  local_20 = LineFunc(0xc642,
                                      "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)"
                                      ,0,0);
                }
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xbc,local_1c & 0xff,local_24);
              local_20 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xbc,0xd1);
            local_20 = 0;
          }
        }
      }
    }
    else {
      local_20 = LineFunc(0xc557,
                          "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)",
                          0,0);
    }
  }
  else {
    local_20 = LineFunc(0xc554,
                        "virtual int Dispatcher_AuctionBidding::dispatch_sig(CUser*, PacketBuf&)",0,
                        0);
  }
  return local_20;
}

```

