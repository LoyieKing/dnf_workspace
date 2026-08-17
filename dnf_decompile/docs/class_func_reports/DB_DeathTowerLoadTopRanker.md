# DB_DeathTowerLoadTopRanker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842a484 DB_DeathTowerLoadTopRanker::dispatch  [0x0842a484-0x842a90f] ===
 842a484:	55                   	push   %ebp
 842a485:	89 e5                	mov    %esp,%ebp
 842a487:	56                   	push   %esi
 842a488:	53                   	push   %ebx
 842a489:	83 ec 70             	sub    $0x70,%esp
 842a48c:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 842a490:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 842a493:	89 44 24 04          	mov    %eax,0x4(%esp)
 842a497:	8b 45 14             	mov    0x14(%ebp),%eax
 842a49a:	89 04 24             	mov    %eax,(%esp)
 842a49d:	e8 90 22 1f 00       	call   861c732 <_ZN6StreamrsERh>
 842a4a2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842a4a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842a4ae:	00 
 842a4af:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842a4b6:	00 
 842a4b7:	89 04 24             	mov    %eax,(%esp)
 842a4ba:	e8 7f ad fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842a4bf:	89 45 dc             	mov    %eax,-0x24(%ebp)
 842a4c2:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 842a4c7:	c7 44 24 08 21 6c 00 	movl   $0x6c21,0x8(%esp)
 842a4ce:	00 
 842a4cf:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842a4d6:	08 
 842a4d7:	89 04 24             	mov    %eax,(%esp)
 842a4da:	e8 83 5d e6 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 842a4df:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842a4e6:	00 
 842a4e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 842a4eb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842a4ee:	89 04 24             	mov    %eax,(%esp)
 842a4f1:	e8 30 e7 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842a4f6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842a4f9:	89 04 24             	mov    %eax,(%esp)
 842a4fc:	e8 45 e7 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a501:	c7 44 24 04 e4 00 00 	movl   $0xe4,0x4(%esp)
 842a508:	00 
 842a509:	89 04 24             	mov    %eax,(%esp)
 842a50c:	e8 45 e7 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842a511:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842a514:	89 04 24             	mov    %eax,(%esp)
 842a517:	e8 2a e7 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a51c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842a523:	ff 
 842a524:	89 04 24             	mov    %eax,(%esp)
 842a527:	e8 2a e7 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842a52c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842a52f:	89 04 24             	mov    %eax,(%esp)
 842a532:	e8 17 e7 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842a537:	89 04 24             	mov    %eax,(%esp)
 842a53a:	e8 4d 7f 02 00       	call   845248c <_ZN12CStreamGuard11GetInBufferI31SIG_DEATH_TOWER_LOAD_TOP_RANKEREEPT_v>
 842a53f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842a542:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a545:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 842a54b:	0f b6 55 d3          	movzbl -0x2d(%ebp),%edx
 842a54f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a552:	88 50 04             	mov    %dl,0x4(%eax)
 842a555:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 842a55c:	e9 4c 03 00 00       	jmp    842a8ad <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x429>
 842a561:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 842a568:	e9 2d 03 00 00       	jmp    842a89a <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x416>
 842a56d:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 842a571:	84 c0                	test   %al,%al
 842a573:	0f 85 22 01 00 00    	jne    842a69b <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x217>
 842a579:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 842a580:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 842a587:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a58a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842a58e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a591:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a595:	c7 44 24 04 4c f9 c4 	movl   $0x8c4f94c,0x4(%esp)
 842a59c:	08 
 842a59d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a5a0:	89 04 24             	mov    %eax,(%esp)
 842a5a3:	e8 18 9c fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842a5a8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842a5af:	00 
 842a5b0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a5b3:	89 04 24             	mov    %eax,(%esp)
 842a5b6:	e8 6b 9d fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842a5bb:	83 f0 01             	xor    $0x1,%eax
 842a5be:	84 c0                	test   %al,%al
 842a5c0:	74 0a                	je     842a5cc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x148>
 842a5c2:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a5c7:	e9 30 03 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a5cc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a5cf:	89 04 24             	mov    %eax,(%esp)
 842a5d2:	e8 e5 9e fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842a5d7:	83 f0 01             	xor    $0x1,%eax
 842a5da:	84 c0                	test   %al,%al
 842a5dc:	74 0a                	je     842a5e8 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x164>
 842a5de:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a5e3:	e9 14 03 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a5e8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 842a5eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a5ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842a5f6:	00 
 842a5f7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a5fa:	89 04 24             	mov    %eax,(%esp)
 842a5fd:	e8 f0 7c cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842a602:	83 f0 01             	xor    $0x1,%eax
 842a605:	84 c0                	test   %al,%al
 842a607:	74 0a                	je     842a613 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x18f>
 842a609:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a60e:	e9 e9 02 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a613:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 842a616:	83 f8 05             	cmp    $0x5,%eax
 842a619:	76 39                	jbe    842a654 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x1d0>
 842a61b:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 842a61e:	ba 09 23 ed 58       	mov    $0x58ed2309,%edx
 842a623:	89 c8                	mov    %ecx,%eax
 842a625:	f7 e2                	mul    %edx
 842a627:	89 c8                	mov    %ecx,%eax
 842a629:	29 d0                	sub    %edx,%eax
 842a62b:	d1 e8                	shr    $1,%eax
 842a62d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 842a630:	c1 e8 06             	shr    $0x6,%eax
 842a633:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 842a636:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 842a63d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842a640:	89 44 24 04          	mov    %eax,0x4(%esp)
 842a644:	8d 45 d8             	lea    -0x28(%ebp),%eax
 842a647:	89 04 24             	mov    %eax,(%esp)
 842a64a:	e8 e2 4e c5 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 842a64f:	8b 00                	mov    (%eax),%eax
 842a651:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842a654:	c7 44 24 20 5f 00 00 	movl   $0x5f,0x20(%esp)
 842a65b:	00 
 842a65c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a65f:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 842a663:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842a666:	89 44 24 18          	mov    %eax,0x18(%esp)
 842a66a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a66d:	89 44 24 14          	mov    %eax,0x14(%esp)
 842a671:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a674:	89 44 24 10          	mov    %eax,0x10(%esp)
 842a678:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a67b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842a67f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a682:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a686:	c7 44 24 04 9c f9 c4 	movl   $0x8c4f99c,0x4(%esp)
 842a68d:	08 
 842a68e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a691:	89 04 24             	mov    %eax,(%esp)
 842a694:	e8 27 9b fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842a699:	eb 3e                	jmp    842a6d9 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x255>
 842a69b:	c7 44 24 1c 05 00 00 	movl   $0x5,0x1c(%esp)
 842a6a2:	00 
 842a6a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a6a6:	89 44 24 18          	mov    %eax,0x18(%esp)
 842a6aa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a6ad:	89 44 24 14          	mov    %eax,0x14(%esp)
 842a6b1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a6b4:	89 44 24 10          	mov    %eax,0x10(%esp)
 842a6b8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a6bb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842a6bf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a6c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a6c6:	c7 44 24 04 b8 fa c4 	movl   $0x8c4fab8,0x4(%esp)
 842a6cd:	08 
 842a6ce:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a6d1:	89 04 24             	mov    %eax,(%esp)
 842a6d4:	e8 e7 9a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842a6d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842a6e0:	00 
 842a6e1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a6e4:	89 04 24             	mov    %eax,(%esp)
 842a6e7:	e8 3a 9c fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842a6ec:	83 f0 01             	xor    $0x1,%eax
 842a6ef:	84 c0                	test   %al,%al
 842a6f1:	74 0a                	je     842a6fd <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x279>
 842a6f3:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a6f8:	e9 ff 01 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a6fd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a700:	8b 00                	mov    (%eax),%eax
 842a702:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842a705:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a708:	8b 18                	mov    (%eax),%ebx
 842a70a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a70d:	89 04 24             	mov    %eax,(%esp)
 842a710:	e8 57 7c cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842a715:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 842a718:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a71b:	89 10                	mov    %edx,(%eax)
 842a71d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842a720:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842a723:	e9 5b 01 00 00       	jmp    842a883 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x3ff>
 842a728:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a72b:	89 04 24             	mov    %eax,(%esp)
 842a72e:	e8 89 9d fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842a733:	83 f0 01             	xor    $0x1,%eax
 842a736:	84 c0                	test   %al,%al
 842a738:	74 0a                	je     842a744 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x2c0>
 842a73a:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a73f:	e9 b8 01 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a744:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a747:	01 c0                	add    %eax,%eax
 842a749:	03 45 e0             	add    -0x20(%ebp),%eax
 842a74c:	83 c0 06             	add    $0x6,%eax
 842a74f:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a753:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842a75a:	00 
 842a75b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a75e:	89 04 24             	mov    %eax,(%esp)
 842a761:	e8 2a c2 ce ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 842a766:	83 f0 01             	xor    $0x1,%eax
 842a769:	84 c0                	test   %al,%al
 842a76b:	74 0a                	je     842a777 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x2f3>
 842a76d:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a772:	e9 85 01 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a777:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a77a:	6b c0 6c             	imul   $0x6c,%eax,%eax
 842a77d:	05 a0 0f 00 00       	add    $0xfa0,%eax
 842a782:	03 45 e0             	add    -0x20(%ebp),%eax
 842a785:	83 c0 0c             	add    $0xc,%eax
 842a788:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a78c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842a793:	00 
 842a794:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a797:	89 04 24             	mov    %eax,(%esp)
 842a79a:	e8 f1 c1 ce ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 842a79f:	83 f0 01             	xor    $0x1,%eax
 842a7a2:	84 c0                	test   %al,%al
 842a7a4:	74 0a                	je     842a7b0 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x32c>
 842a7a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a7ab:	e9 4c 01 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a7b0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a7b3:	6b c0 17             	imul   $0x17,%eax,%eax
 842a7b6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842a7b9:	6b d2 6c             	imul   $0x6c,%edx,%edx
 842a7bc:	81 c2 a0 0f 00 00    	add    $0xfa0,%edx
 842a7c2:	03 55 e0             	add    -0x20(%ebp),%edx
 842a7c5:	83 c2 10             	add    $0x10,%edx
 842a7c8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842a7cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 842a7d0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842a7d7:	00 
 842a7d8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a7db:	89 04 24             	mov    %eax,(%esp)
 842a7de:	e8 37 ab cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 842a7e3:	83 f0 01             	xor    $0x1,%eax
 842a7e6:	84 c0                	test   %al,%al
 842a7e8:	74 0a                	je     842a7f4 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x370>
 842a7ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a7ef:	e9 08 01 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a7f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a7f7:	6b c0 6c             	imul   $0x6c,%eax,%eax
 842a7fa:	05 00 10 00 00       	add    $0x1000,%eax
 842a7ff:	03 45 e0             	add    -0x20(%ebp),%eax
 842a802:	83 c0 0c             	add    $0xc,%eax
 842a805:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a809:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 842a810:	00 
 842a811:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a814:	89 04 24             	mov    %eax,(%esp)
 842a817:	e8 d6 7a cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842a81c:	83 f0 01             	xor    $0x1,%eax
 842a81f:	84 c0                	test   %al,%al
 842a821:	74 0a                	je     842a82d <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x3a9>
 842a823:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a828:	e9 cf 00 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a82d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842a830:	6b c0 6c             	imul   $0x6c,%eax,%eax
 842a833:	05 00 10 00 00       	add    $0x1000,%eax
 842a838:	03 45 e0             	add    -0x20(%ebp),%eax
 842a83b:	83 c0 10             	add    $0x10,%eax
 842a83e:	89 44 24 08          	mov    %eax,0x8(%esp)
 842a842:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842a849:	00 
 842a84a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842a84d:	89 04 24             	mov    %eax,(%esp)
 842a850:	e8 9d 7a cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842a855:	83 f0 01             	xor    $0x1,%eax
 842a858:	84 c0                	test   %al,%al
 842a85a:	74 0a                	je     842a866 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x3e2>
 842a85c:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a861:	e9 96 00 00 00       	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a866:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842a869:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842a86c:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 842a86f:	6b d2 6c             	imul   $0x6c,%edx,%edx
 842a872:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 842a875:	81 c2 a0 0f 00 00    	add    $0xfa0,%edx
 842a87b:	66 89 42 0e          	mov    %ax,0xe(%edx)
 842a87f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 842a883:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842a886:	8b 00                	mov    (%eax),%eax
 842a888:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 842a88b:	0f 97 c0             	seta   %al
 842a88e:	84 c0                	test   %al,%al
 842a890:	0f 85 92 fe ff ff    	jne    842a728 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x2a4>
 842a896:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 842a89a:	83 7d e8 04          	cmpl   $0x4,-0x18(%ebp)
 842a89e:	0f 9e c0             	setle  %al
 842a8a1:	84 c0                	test   %al,%al
 842a8a3:	0f 85 c4 fc ff ff    	jne    842a56d <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0xe9>
 842a8a9:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 842a8ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842a8b0:	83 f8 04             	cmp    $0x4,%eax
 842a8b3:	0f 96 c0             	setbe  %al
 842a8b6:	84 c0                	test   %al,%al
 842a8b8:	0f 85 a3 fc ff ff    	jne    842a561 <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0xdd>
 842a8be:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842a8c3:	8d 55 c8             	lea    -0x38(%ebp),%edx
 842a8c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 842a8ca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842a8d1:	00 
 842a8d2:	89 04 24             	mov    %eax,(%esp)
 842a8d5:	e8 04 67 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842a8da:	bb 01 00 00 00       	mov    $0x1,%ebx
 842a8df:	eb 1b                	jmp    842a8fc <_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream+0x478>
 842a8e1:	89 d3                	mov    %edx,%ebx
 842a8e3:	89 c6                	mov    %eax,%esi
 842a8e5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842a8e8:	89 04 24             	mov    %eax,(%esp)
 842a8eb:	e8 e2 1f 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a8f0:	89 f0                	mov    %esi,%eax
 842a8f2:	89 da                	mov    %ebx,%edx
 842a8f4:	89 04 24             	mov    %eax,(%esp)
 842a8f7:	e8 54 8e 6b 00       	call   8ae3750 <_Unwind_Resume>
 842a8fc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842a8ff:	89 04 24             	mov    %eax,(%esp)
 842a902:	e8 cb 1f 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a907:	89 d8                	mov    %ebx,%eax
 842a909:	83 c4 70             	add    $0x70,%esp
 842a90c:	5b                   	pop    %ebx
 842a90d:	5e                   	pop    %esi
 842a90e:	5d                   	pop    %ebp
 842a90f:	c3                   	ret

```

```c
// DB_DeathTowerLoadTopRanker::dispatch @ 0x842a484

/* DB_DeathTowerLoadTopRanker::dispatch(int, int, Stream*) */

undefined4 DB_DeathTowerLoadTopRanker::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  size_t *psVar5;
  int iVar6;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  uint local_40;
  CStreamGuard local_3c [11];
  SIG_DEATH_TOWER_LOAD_TOP_RANKER local_31;
  uint local_30;
  size_t local_2c;
  MySQL *local_28;
  SIG_DEATH_TOWER_LOAD_TOP_RANKER *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  size_t local_14;
  uint local_10;
  
  local_31 = (SIG_DEATH_TOWER_LOAD_TOP_RANKER)0x1;
  Stream::operator>>(in_stack_00000010,(uchar *)&local_31);
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x6c21);
  CStreamGuard::CStreamGuard(local_3c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 0842a50c to 0842a8d9 has its CatchHandler @ 0842a8e1 */
  CStreamGuard::operator<<(pCVar4,0xe4);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
  CStreamGuard::operator<<(pCVar4,-1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
  local_24 = CStreamGuard::GetInBuffer<SIG_DEATH_TOWER_LOAD_TOP_RANKER>(pCVar4);
  *(undefined4 *)local_24 = 0;
  local_24[4] = local_31;
  local_20 = 0;
  do {
    if (4 < local_20) {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_3c);
      uVar7 = 1;
LAB_0842a8fc:
      CStreamGuard::~CStreamGuard(local_3c);
      return uVar7;
    }
    for (local_1c = 1; local_1c < 5; local_1c = local_1c + 1) {
      if (local_31 == (SIG_DEATH_TOWER_LOAD_TOP_RANKER)0x0) {
        local_14 = 1;
        local_40 = 0;
        MySQL::set_query(local_28,
                         "seLect count(*) from charac_tower_rank where tower_index=%d and part_type=%d"
                         ,local_20,local_1c);
        cVar2 = MySQL::exec(local_28,true);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::fetch(local_28);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_uint(local_28,0,&local_40);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        if (5 < local_40) {
          local_30 = local_40 / 0x5f;
          local_2c = 1;
          psVar5 = std::max<size_t>(&local_2c,&local_30);
          local_14 = *psVar5;
        }
        MySQL::set_query(local_28,
                         "seLect b.rank,a.tower_index, a.member_info_%d,a.stage_%d,a.play_time_%d from charac_tower_record a,charac_tower_rank b where b.tower_index=%d and b.tower_index=a.tower_index and (b.rank>5 and (b.rank%%%d)=0) and a.charac_no=b.charac_no and b.part_type=%d order by b.rank asc limit %d"
                         ,local_1c,local_1c,local_1c,local_20,local_14,local_1c,0x5f);
      }
      else {
        MySQL::set_query(local_28,
                         "seLect b.rank,a.tower_index, a.member_info_%d,a.stage_%d,a.play_time_%d from charac_tower_record a,charac_tower_rank_top5 b where b.tower_index=%d and b.tower_index=a.tower_index and b.rank<=5 and a.charac_no=b.charac_no and b.part_type=%d order by b.rank asc limit %d"
                         ,local_1c,local_1c,local_1c,local_20,local_1c,5);
      }
      cVar2 = MySQL::exec(local_28,true);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a8fc;
      }
      local_18 = *(uint *)local_24;
      uVar1 = *(uint *)local_24;
      iVar6 = MySQL::get_n_rows(local_28);
      *(uint *)local_24 = uVar1 + iVar6;
      for (local_10 = local_18; local_10 < *(uint *)local_24; local_10 = local_10 + 1) {
        cVar2 = MySQL::fetch(local_28);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_ushort(local_28,0,(ushort *)(local_24 + local_10 * 2 + 6));
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_ushort(local_28,1,(ushort *)(local_24 + local_10 * 0x6c + 0xfac));
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_binary(local_28,2,local_24 + local_10 * 0x6c + 0xfb0,local_1c * 0x17);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_uint(local_28,3,(uint *)(local_24 + local_10 * 0x6c + 0x100c));
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_uint(local_28,4,(uint *)(local_24 + local_10 * 0x6c + 0x1010));
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        *(short *)(local_24 + local_10 * 0x6c + 0xfae) = (short)local_1c;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}

```

---

## makeRequest

```asm
// === 0842a910 DB_DeathTowerLoadTopRanker::makeRequest  [0x0842a910-0x842a9fb] ===
 842a910:	55                   	push   %ebp
 842a911:	89 e5                	mov    %esp,%ebp
 842a913:	56                   	push   %esi
 842a914:	53                   	push   %ebx
 842a915:	83 ec 30             	sub    $0x30,%esp
 842a918:	8b 45 08             	mov    0x8(%ebp),%eax
 842a91b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 842a91e:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 842a923:	c7 44 24 08 5f 6c 00 	movl   $0x6c5f,0x8(%esp)
 842a92a:	00 
 842a92b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842a932:	08 
 842a933:	89 04 24             	mov    %eax,(%esp)
 842a936:	e8 27 59 e6 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 842a93b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842a942:	00 
 842a943:	89 44 24 04          	mov    %eax,0x4(%esp)
 842a947:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a94a:	89 04 24             	mov    %eax,(%esp)
 842a94d:	e8 d4 e2 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842a952:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a955:	89 04 24             	mov    %eax,(%esp)
 842a958:	e8 e9 e2 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a95d:	c7 44 24 04 e4 00 00 	movl   $0xe4,0x4(%esp)
 842a964:	00 
 842a965:	89 04 24             	mov    %eax,(%esp)
 842a968:	e8 e9 e2 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842a96d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a970:	89 04 24             	mov    %eax,(%esp)
 842a973:	e8 ce e2 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a978:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842a97f:	ff 
 842a980:	89 04 24             	mov    %eax,(%esp)
 842a983:	e8 ce e2 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842a988:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 842a98c:	74 07                	je     842a995 <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb+0x85>
 842a98e:	bb 01 00 00 00       	mov    $0x1,%ebx
 842a993:	eb 05                	jmp    842a99a <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb+0x8a>
 842a995:	bb 00 00 00 00       	mov    $0x0,%ebx
 842a99a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a99d:	89 04 24             	mov    %eax,(%esp)
 842a9a0:	e8 a1 e2 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a9a5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 842a9a9:	89 04 24             	mov    %eax,(%esp)
 842a9ac:	e8 a3 2a 02 00       	call   844d454 <_ZN12CStreamGuardlsEh>
 842a9b1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842a9b6:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842a9b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 842a9bd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842a9c4:	00 
 842a9c5:	89 04 24             	mov    %eax,(%esp)
 842a9c8:	e8 11 66 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842a9cd:	eb 1b                	jmp    842a9ea <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb+0xda>
 842a9cf:	89 d3                	mov    %edx,%ebx
 842a9d1:	89 c6                	mov    %eax,%esi
 842a9d3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a9d6:	89 04 24             	mov    %eax,(%esp)
 842a9d9:	e8 f4 1e 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a9de:	89 f0                	mov    %esi,%eax
 842a9e0:	89 da                	mov    %ebx,%edx
 842a9e2:	89 04 24             	mov    %eax,(%esp)
 842a9e5:	e8 66 8d 6b 00       	call   8ae3750 <_Unwind_Resume>
 842a9ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a9ed:	89 04 24             	mov    %eax,(%esp)
 842a9f0:	e8 dd 1e 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a9f5:	83 c4 30             	add    $0x30,%esp
 842a9f8:	5b                   	pop    %ebx
 842a9f9:	5e                   	pop    %esi
 842a9fa:	5d                   	pop    %ebp
 842a9fb:	c3                   	ret

```

```c
// DB_DeathTowerLoadTopRanker::makeRequest @ 0x842a910

/* DB_DeathTowerLoadTopRanker::makeRequest(bool) */

void DB_DeathTowerLoadTopRanker::makeRequest(bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x6c5f);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842a968 to 0842a9cc has its CatchHandler @ 0842a9cf */
  CStreamGuard::operator<<(pCVar2,0xe4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

