# DB_LoadQuest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetUserQuest

```asm
// === 0840e39a DB_LoadQuest::GetUserQuest  [0x0840e39a-0x840f48d] ===
 840e39a:	55                   	push   %ebp
 840e39b:	89 e5                	mov    %esp,%ebp
 840e39d:	56                   	push   %esi
 840e39e:	53                   	push   %ebx
 840e39f:	81 ec 00 8d 00 00    	sub    $0x8d00,%esp
 840e3a5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840e3aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e3b1:	00 
 840e3b2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840e3b9:	00 
 840e3ba:	89 04 24             	mov    %eax,(%esp)
 840e3bd:	e8 7c 6e fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840e3c2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 840e3c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e3c8:	8b 00                	mov    (%eax),%eax
 840e3ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 840e3ce:	c7 44 24 04 bc 6d c4 	movl   $0x8c46dbc,0x4(%esp)
 840e3d5:	08 
 840e3d6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e3d9:	89 04 24             	mov    %eax,(%esp)
 840e3dc:	e8 df 5d fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840e3e1:	8d 85 24 73 ff ff    	lea    -0x8cdc(%ebp),%eax
 840e3e7:	ba ac 8c 00 00       	mov    $0x8cac,%edx
 840e3ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e3f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840e3f7:	00 
 840e3f8:	89 04 24             	mov    %eax,(%esp)
 840e3fb:	e8 c0 f8 c6 ff       	call   807dcc0 <memset@plt>
 840e400:	c7 45 d4 ac 8c 00 00 	movl   $0x8cac,-0x2c(%ebp)
 840e407:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 840e40e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840e415:	00 
 840e416:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e419:	89 04 24             	mov    %eax,(%esp)
 840e41c:	e8 05 5f fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840e421:	83 f0 01             	xor    $0x1,%eax
 840e424:	84 c0                	test   %al,%al
 840e426:	74 2c                	je     840e454 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xba>
 840e428:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e42f:	e8 cc 73 31 00       	call   8725800 <__cxa_allocate_exception>
 840e434:	89 c2                	mov    %eax,%edx
 840e436:	c7 02 30 2a 00 00    	movl   $0x2a30,(%edx)
 840e43c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e443:	00 
 840e444:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e44b:	09 
 840e44c:	89 04 24             	mov    %eax,(%esp)
 840e44f:	e8 fc 67 31 00       	call   8724c50 <__cxa_throw>
 840e454:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e457:	89 04 24             	mov    %eax,(%esp)
 840e45a:	e8 0d 3f cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 840e45f:	85 c0                	test   %eax,%eax
 840e461:	0f 94 c0             	sete   %al
 840e464:	84 c0                	test   %al,%al
 840e466:	74 6b                	je     840e4d3 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x139>
 840e468:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e46b:	8b 18                	mov    (%eax),%ebx
 840e46d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840e474:	00 
 840e475:	c7 44 24 08 33 2a 00 	movl   $0x2a33,0x8(%esp)
 840e47c:	00 
 840e47d:	c7 44 24 04 e0 d0 c5 	movl   $0x8c5d0e0,0x4(%esp)
 840e484:	08 
 840e485:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840e488:	89 04 24             	mov    %eax,(%esp)
 840e48b:	e8 88 12 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840e490:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840e494:	c7 44 24 04 14 70 c4 	movl   $0x8c47014,0x4(%esp)
 840e49b:	08 
 840e49c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840e49f:	89 04 24             	mov    %eax,(%esp)
 840e4a2:	e8 e1 12 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840e4a7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e4ae:	e8 4d 73 31 00       	call   8725800 <__cxa_allocate_exception>
 840e4b3:	89 c2                	mov    %eax,%edx
 840e4b5:	c7 02 34 2a 00 00    	movl   $0x2a34,(%edx)
 840e4bb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e4c2:	00 
 840e4c3:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e4ca:	09 
 840e4cb:	89 04 24             	mov    %eax,(%esp)
 840e4ce:	e8 7d 67 31 00       	call   8724c50 <__cxa_throw>
 840e4d3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e4d6:	89 04 24             	mov    %eax,(%esp)
 840e4d9:	e8 de 5f fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840e4de:	83 f0 01             	xor    $0x1,%eax
 840e4e1:	84 c0                	test   %al,%al
 840e4e3:	74 2c                	je     840e511 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x177>
 840e4e5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e4ec:	e8 0f 73 31 00       	call   8725800 <__cxa_allocate_exception>
 840e4f1:	89 c2                	mov    %eax,%edx
 840e4f3:	c7 02 36 2a 00 00    	movl   $0x2a36,(%edx)
 840e4f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e500:	00 
 840e501:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e508:	09 
 840e509:	89 04 24             	mov    %eax,(%esp)
 840e50c:	e8 3f 67 31 00       	call   8724c50 <__cxa_throw>
 840e511:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 840e518:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e51b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e51f:	8d 55 d0             	lea    -0x30(%ebp),%edx
 840e522:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e526:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e52a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e52d:	89 04 24             	mov    %eax,(%esp)
 840e530:	e8 79 3d cd ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 840e535:	83 f0 01             	xor    $0x1,%eax
 840e538:	84 c0                	test   %al,%al
 840e53a:	74 2c                	je     840e568 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x1ce>
 840e53c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e543:	e8 b8 72 31 00       	call   8725800 <__cxa_allocate_exception>
 840e548:	89 c2                	mov    %eax,%edx
 840e54a:	c7 02 39 2a 00 00    	movl   $0x2a39,(%edx)
 840e550:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e557:	00 
 840e558:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e55f:	09 
 840e560:	89 04 24             	mov    %eax,(%esp)
 840e563:	e8 e8 66 31 00       	call   8724c50 <__cxa_throw>
 840e568:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e56b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e56f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e572:	89 04 24             	mov    %eax,(%esp)
 840e575:	e8 64 6e d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840e57a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840e57d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 840e580:	89 c2                	mov    %eax,%edx
 840e582:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e585:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e589:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840e58d:	8d 95 24 73 ff ff    	lea    -0x8cdc(%ebp),%edx
 840e593:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e597:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e59b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e59e:	89 04 24             	mov    %eax,(%esp)
 840e5a1:	e8 74 6d d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840e5a6:	83 f0 01             	xor    $0x1,%eax
 840e5a9:	84 c0                	test   %al,%al
 840e5ab:	74 2c                	je     840e5d9 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x23f>
 840e5ad:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e5b4:	e8 47 72 31 00       	call   8725800 <__cxa_allocate_exception>
 840e5b9:	89 c2                	mov    %eax,%edx
 840e5bb:	c7 02 3c 2a 00 00    	movl   $0x2a3c,(%edx)
 840e5c1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e5c8:	00 
 840e5c9:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e5d0:	09 
 840e5d1:	89 04 24             	mov    %eax,(%esp)
 840e5d4:	e8 77 66 31 00       	call   8724c50 <__cxa_throw>
 840e5d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e5dc:	05 b0 00 00 00       	add    $0xb0,%eax
 840e5e1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 840e5e4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840e5e8:	8d 95 24 73 ff ff    	lea    -0x8cdc(%ebp),%edx
 840e5ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e5f2:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 840e5f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 840e5f9:	89 04 24             	mov    %eax,(%esp)
 840e5fc:	e8 01 3b 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 840e601:	83 f0 01             	xor    $0x1,%eax
 840e604:	84 c0                	test   %al,%al
 840e606:	74 2c                	je     840e634 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x29a>
 840e608:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e60f:	e8 ec 71 31 00       	call   8725800 <__cxa_allocate_exception>
 840e614:	89 c2                	mov    %eax,%edx
 840e616:	c7 02 3d 2a 00 00    	movl   $0x2a3d,(%edx)
 840e61c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e623:	00 
 840e624:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e62b:	09 
 840e62c:	89 04 24             	mov    %eax,(%esp)
 840e62f:	e8 1c 66 31 00       	call   8724c50 <__cxa_throw>
 840e634:	90                   	nop
 840e635:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e638:	8d 50 0c             	lea    0xc(%eax),%edx
 840e63b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e63e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e642:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e646:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e64a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e64d:	89 04 24             	mov    %eax,(%esp)
 840e650:	e8 d7 82 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e655:	83 f0 01             	xor    $0x1,%eax
 840e658:	84 c0                	test   %al,%al
 840e65a:	74 2c                	je     840e688 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x2ee>
 840e65c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e663:	e8 98 71 31 00       	call   8725800 <__cxa_allocate_exception>
 840e668:	89 c2                	mov    %eax,%edx
 840e66a:	c7 02 40 2a 00 00    	movl   $0x2a40,(%edx)
 840e670:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e677:	00 
 840e678:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e67f:	09 
 840e680:	89 04 24             	mov    %eax,(%esp)
 840e683:	e8 c8 65 31 00       	call   8724c50 <__cxa_throw>
 840e688:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e68b:	8d 50 5c             	lea    0x5c(%eax),%edx
 840e68e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e691:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e695:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e699:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e69d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e6a0:	89 04 24             	mov    %eax,(%esp)
 840e6a3:	e8 84 82 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e6a8:	83 f0 01             	xor    $0x1,%eax
 840e6ab:	84 c0                	test   %al,%al
 840e6ad:	74 2c                	je     840e6db <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x341>
 840e6af:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e6b6:	e8 45 71 31 00       	call   8725800 <__cxa_allocate_exception>
 840e6bb:	89 c2                	mov    %eax,%edx
 840e6bd:	c7 02 41 2a 00 00    	movl   $0x2a41,(%edx)
 840e6c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e6ca:	00 
 840e6cb:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e6d2:	09 
 840e6d3:	89 04 24             	mov    %eax,(%esp)
 840e6d6:	e8 75 65 31 00       	call   8724c50 <__cxa_throw>
 840e6db:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e6de:	8d 50 10             	lea    0x10(%eax),%edx
 840e6e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e6e4:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e6e8:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e6ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e6f0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e6f3:	89 04 24             	mov    %eax,(%esp)
 840e6f6:	e8 31 82 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e6fb:	83 f0 01             	xor    $0x1,%eax
 840e6fe:	84 c0                	test   %al,%al
 840e700:	74 2c                	je     840e72e <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x394>
 840e702:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e709:	e8 f2 70 31 00       	call   8725800 <__cxa_allocate_exception>
 840e70e:	89 c2                	mov    %eax,%edx
 840e710:	c7 02 42 2a 00 00    	movl   $0x2a42,(%edx)
 840e716:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e71d:	00 
 840e71e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e725:	09 
 840e726:	89 04 24             	mov    %eax,(%esp)
 840e729:	e8 22 65 31 00       	call   8724c50 <__cxa_throw>
 840e72e:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e731:	8d 50 60             	lea    0x60(%eax),%edx
 840e734:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e737:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e73b:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e73f:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e743:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e746:	89 04 24             	mov    %eax,(%esp)
 840e749:	e8 de 81 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e74e:	83 f0 01             	xor    $0x1,%eax
 840e751:	84 c0                	test   %al,%al
 840e753:	74 2c                	je     840e781 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x3e7>
 840e755:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e75c:	e8 9f 70 31 00       	call   8725800 <__cxa_allocate_exception>
 840e761:	89 c2                	mov    %eax,%edx
 840e763:	c7 02 43 2a 00 00    	movl   $0x2a43,(%edx)
 840e769:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e770:	00 
 840e771:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e778:	09 
 840e779:	89 04 24             	mov    %eax,(%esp)
 840e77c:	e8 cf 64 31 00       	call   8724c50 <__cxa_throw>
 840e781:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e784:	8d 50 14             	lea    0x14(%eax),%edx
 840e787:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e78a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e78e:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e792:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e796:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e799:	89 04 24             	mov    %eax,(%esp)
 840e79c:	e8 8b 81 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e7a1:	83 f0 01             	xor    $0x1,%eax
 840e7a4:	84 c0                	test   %al,%al
 840e7a6:	74 2c                	je     840e7d4 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x43a>
 840e7a8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e7af:	e8 4c 70 31 00       	call   8725800 <__cxa_allocate_exception>
 840e7b4:	89 c2                	mov    %eax,%edx
 840e7b6:	c7 02 44 2a 00 00    	movl   $0x2a44,(%edx)
 840e7bc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e7c3:	00 
 840e7c4:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e7cb:	09 
 840e7cc:	89 04 24             	mov    %eax,(%esp)
 840e7cf:	e8 7c 64 31 00       	call   8724c50 <__cxa_throw>
 840e7d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e7d7:	8d 50 64             	lea    0x64(%eax),%edx
 840e7da:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e7dd:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e7e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e7e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e7e9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e7ec:	89 04 24             	mov    %eax,(%esp)
 840e7ef:	e8 38 81 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e7f4:	83 f0 01             	xor    $0x1,%eax
 840e7f7:	84 c0                	test   %al,%al
 840e7f9:	74 2c                	je     840e827 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x48d>
 840e7fb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e802:	e8 f9 6f 31 00       	call   8725800 <__cxa_allocate_exception>
 840e807:	89 c2                	mov    %eax,%edx
 840e809:	c7 02 45 2a 00 00    	movl   $0x2a45,(%edx)
 840e80f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e816:	00 
 840e817:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e81e:	09 
 840e81f:	89 04 24             	mov    %eax,(%esp)
 840e822:	e8 29 64 31 00       	call   8724c50 <__cxa_throw>
 840e827:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e82a:	8d 50 18             	lea    0x18(%eax),%edx
 840e82d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e830:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e834:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e838:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e83c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e83f:	89 04 24             	mov    %eax,(%esp)
 840e842:	e8 e5 80 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e847:	83 f0 01             	xor    $0x1,%eax
 840e84a:	84 c0                	test   %al,%al
 840e84c:	74 2c                	je     840e87a <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x4e0>
 840e84e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e855:	e8 a6 6f 31 00       	call   8725800 <__cxa_allocate_exception>
 840e85a:	89 c2                	mov    %eax,%edx
 840e85c:	c7 02 46 2a 00 00    	movl   $0x2a46,(%edx)
 840e862:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e869:	00 
 840e86a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e871:	09 
 840e872:	89 04 24             	mov    %eax,(%esp)
 840e875:	e8 d6 63 31 00       	call   8724c50 <__cxa_throw>
 840e87a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e87d:	8d 50 68             	lea    0x68(%eax),%edx
 840e880:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e883:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e887:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e88b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e88f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e892:	89 04 24             	mov    %eax,(%esp)
 840e895:	e8 92 80 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e89a:	83 f0 01             	xor    $0x1,%eax
 840e89d:	84 c0                	test   %al,%al
 840e89f:	74 2c                	je     840e8cd <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x533>
 840e8a1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e8a8:	e8 53 6f 31 00       	call   8725800 <__cxa_allocate_exception>
 840e8ad:	89 c2                	mov    %eax,%edx
 840e8af:	c7 02 47 2a 00 00    	movl   $0x2a47,(%edx)
 840e8b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e8bc:	00 
 840e8bd:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e8c4:	09 
 840e8c5:	89 04 24             	mov    %eax,(%esp)
 840e8c8:	e8 83 63 31 00       	call   8724c50 <__cxa_throw>
 840e8cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e8d0:	8d 50 1c             	lea    0x1c(%eax),%edx
 840e8d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e8d6:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e8da:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e8de:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e8e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e8e5:	89 04 24             	mov    %eax,(%esp)
 840e8e8:	e8 3f 80 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e8ed:	83 f0 01             	xor    $0x1,%eax
 840e8f0:	84 c0                	test   %al,%al
 840e8f2:	74 2c                	je     840e920 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x586>
 840e8f4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e8fb:	e8 00 6f 31 00       	call   8725800 <__cxa_allocate_exception>
 840e900:	89 c2                	mov    %eax,%edx
 840e902:	c7 02 48 2a 00 00    	movl   $0x2a48,(%edx)
 840e908:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e90f:	00 
 840e910:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e917:	09 
 840e918:	89 04 24             	mov    %eax,(%esp)
 840e91b:	e8 30 63 31 00       	call   8724c50 <__cxa_throw>
 840e920:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e923:	8d 50 6c             	lea    0x6c(%eax),%edx
 840e926:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e929:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e92d:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e931:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e935:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e938:	89 04 24             	mov    %eax,(%esp)
 840e93b:	e8 ec 7f d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e940:	83 f0 01             	xor    $0x1,%eax
 840e943:	84 c0                	test   %al,%al
 840e945:	74 2c                	je     840e973 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x5d9>
 840e947:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e94e:	e8 ad 6e 31 00       	call   8725800 <__cxa_allocate_exception>
 840e953:	89 c2                	mov    %eax,%edx
 840e955:	c7 02 49 2a 00 00    	movl   $0x2a49,(%edx)
 840e95b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e962:	00 
 840e963:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e96a:	09 
 840e96b:	89 04 24             	mov    %eax,(%esp)
 840e96e:	e8 dd 62 31 00       	call   8724c50 <__cxa_throw>
 840e973:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e976:	8d 50 20             	lea    0x20(%eax),%edx
 840e979:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e97c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e980:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e984:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e988:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e98b:	89 04 24             	mov    %eax,(%esp)
 840e98e:	e8 99 7f d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e993:	83 f0 01             	xor    $0x1,%eax
 840e996:	84 c0                	test   %al,%al
 840e998:	74 2c                	je     840e9c6 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x62c>
 840e99a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e9a1:	e8 5a 6e 31 00       	call   8725800 <__cxa_allocate_exception>
 840e9a6:	89 c2                	mov    %eax,%edx
 840e9a8:	c7 02 4a 2a 00 00    	movl   $0x2a4a,(%edx)
 840e9ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e9b5:	00 
 840e9b6:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840e9bd:	09 
 840e9be:	89 04 24             	mov    %eax,(%esp)
 840e9c1:	e8 8a 62 31 00       	call   8724c50 <__cxa_throw>
 840e9c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 840e9c9:	8d 50 70             	lea    0x70(%eax),%edx
 840e9cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e9cf:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840e9d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e9d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e9db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840e9de:	89 04 24             	mov    %eax,(%esp)
 840e9e1:	e8 46 7f d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840e9e6:	83 f0 01             	xor    $0x1,%eax
 840e9e9:	84 c0                	test   %al,%al
 840e9eb:	74 2c                	je     840ea19 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x67f>
 840e9ed:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840e9f4:	e8 07 6e 31 00       	call   8725800 <__cxa_allocate_exception>
 840e9f9:	89 c2                	mov    %eax,%edx
 840e9fb:	c7 02 4b 2a 00 00    	movl   $0x2a4b,(%edx)
 840ea01:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ea08:	00 
 840ea09:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ea10:	09 
 840ea11:	89 04 24             	mov    %eax,(%esp)
 840ea14:	e8 37 62 31 00       	call   8724c50 <__cxa_throw>
 840ea19:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ea1c:	8d 50 24             	lea    0x24(%eax),%edx
 840ea1f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ea22:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ea26:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ea2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ea2e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ea31:	89 04 24             	mov    %eax,(%esp)
 840ea34:	e8 f3 7e d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ea39:	83 f0 01             	xor    $0x1,%eax
 840ea3c:	84 c0                	test   %al,%al
 840ea3e:	74 2c                	je     840ea6c <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x6d2>
 840ea40:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ea47:	e8 b4 6d 31 00       	call   8725800 <__cxa_allocate_exception>
 840ea4c:	89 c2                	mov    %eax,%edx
 840ea4e:	c7 02 4c 2a 00 00    	movl   $0x2a4c,(%edx)
 840ea54:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ea5b:	00 
 840ea5c:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ea63:	09 
 840ea64:	89 04 24             	mov    %eax,(%esp)
 840ea67:	e8 e4 61 31 00       	call   8724c50 <__cxa_throw>
 840ea6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ea6f:	8d 50 74             	lea    0x74(%eax),%edx
 840ea72:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ea75:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ea79:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ea7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ea81:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ea84:	89 04 24             	mov    %eax,(%esp)
 840ea87:	e8 a0 7e d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ea8c:	83 f0 01             	xor    $0x1,%eax
 840ea8f:	84 c0                	test   %al,%al
 840ea91:	74 2c                	je     840eabf <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x725>
 840ea93:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ea9a:	e8 61 6d 31 00       	call   8725800 <__cxa_allocate_exception>
 840ea9f:	89 c2                	mov    %eax,%edx
 840eaa1:	c7 02 4d 2a 00 00    	movl   $0x2a4d,(%edx)
 840eaa7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840eaae:	00 
 840eaaf:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840eab6:	09 
 840eab7:	89 04 24             	mov    %eax,(%esp)
 840eaba:	e8 91 61 31 00       	call   8724c50 <__cxa_throw>
 840eabf:	8b 45 0c             	mov    0xc(%ebp),%eax
 840eac2:	8d 50 28             	lea    0x28(%eax),%edx
 840eac5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840eac8:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840eacc:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ead0:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ead4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ead7:	89 04 24             	mov    %eax,(%esp)
 840eada:	e8 4d 7e d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840eadf:	83 f0 01             	xor    $0x1,%eax
 840eae2:	84 c0                	test   %al,%al
 840eae4:	74 2c                	je     840eb12 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x778>
 840eae6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840eaed:	e8 0e 6d 31 00       	call   8725800 <__cxa_allocate_exception>
 840eaf2:	89 c2                	mov    %eax,%edx
 840eaf4:	c7 02 4e 2a 00 00    	movl   $0x2a4e,(%edx)
 840eafa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840eb01:	00 
 840eb02:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840eb09:	09 
 840eb0a:	89 04 24             	mov    %eax,(%esp)
 840eb0d:	e8 3e 61 31 00       	call   8724c50 <__cxa_throw>
 840eb12:	8b 45 0c             	mov    0xc(%ebp),%eax
 840eb15:	8d 50 78             	lea    0x78(%eax),%edx
 840eb18:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840eb1b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840eb1f:	89 54 24 08          	mov    %edx,0x8(%esp)
 840eb23:	89 44 24 04          	mov    %eax,0x4(%esp)
 840eb27:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840eb2a:	89 04 24             	mov    %eax,(%esp)
 840eb2d:	e8 fa 7d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840eb32:	83 f0 01             	xor    $0x1,%eax
 840eb35:	84 c0                	test   %al,%al
 840eb37:	74 2c                	je     840eb65 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x7cb>
 840eb39:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840eb40:	e8 bb 6c 31 00       	call   8725800 <__cxa_allocate_exception>
 840eb45:	89 c2                	mov    %eax,%edx
 840eb47:	c7 02 4f 2a 00 00    	movl   $0x2a4f,(%edx)
 840eb4d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840eb54:	00 
 840eb55:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840eb5c:	09 
 840eb5d:	89 04 24             	mov    %eax,(%esp)
 840eb60:	e8 eb 60 31 00       	call   8724c50 <__cxa_throw>
 840eb65:	8b 45 0c             	mov    0xc(%ebp),%eax
 840eb68:	8d 50 2c             	lea    0x2c(%eax),%edx
 840eb6b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840eb6e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840eb72:	89 54 24 08          	mov    %edx,0x8(%esp)
 840eb76:	89 44 24 04          	mov    %eax,0x4(%esp)
 840eb7a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840eb7d:	89 04 24             	mov    %eax,(%esp)
 840eb80:	e8 a7 7d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840eb85:	83 f0 01             	xor    $0x1,%eax
 840eb88:	84 c0                	test   %al,%al
 840eb8a:	74 2c                	je     840ebb8 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x81e>
 840eb8c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840eb93:	e8 68 6c 31 00       	call   8725800 <__cxa_allocate_exception>
 840eb98:	89 c2                	mov    %eax,%edx
 840eb9a:	c7 02 50 2a 00 00    	movl   $0x2a50,(%edx)
 840eba0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840eba7:	00 
 840eba8:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ebaf:	09 
 840ebb0:	89 04 24             	mov    %eax,(%esp)
 840ebb3:	e8 98 60 31 00       	call   8724c50 <__cxa_throw>
 840ebb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ebbb:	8d 50 7c             	lea    0x7c(%eax),%edx
 840ebbe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ebc1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ebc5:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ebc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ebcd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ebd0:	89 04 24             	mov    %eax,(%esp)
 840ebd3:	e8 54 7d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ebd8:	83 f0 01             	xor    $0x1,%eax
 840ebdb:	84 c0                	test   %al,%al
 840ebdd:	74 2c                	je     840ec0b <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x871>
 840ebdf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ebe6:	e8 15 6c 31 00       	call   8725800 <__cxa_allocate_exception>
 840ebeb:	89 c2                	mov    %eax,%edx
 840ebed:	c7 02 51 2a 00 00    	movl   $0x2a51,(%edx)
 840ebf3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ebfa:	00 
 840ebfb:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ec02:	09 
 840ec03:	89 04 24             	mov    %eax,(%esp)
 840ec06:	e8 45 60 31 00       	call   8724c50 <__cxa_throw>
 840ec0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ec0e:	8d 50 30             	lea    0x30(%eax),%edx
 840ec11:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ec14:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ec18:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ec1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ec20:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ec23:	89 04 24             	mov    %eax,(%esp)
 840ec26:	e8 01 7d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ec2b:	83 f0 01             	xor    $0x1,%eax
 840ec2e:	84 c0                	test   %al,%al
 840ec30:	74 2c                	je     840ec5e <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x8c4>
 840ec32:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ec39:	e8 c2 6b 31 00       	call   8725800 <__cxa_allocate_exception>
 840ec3e:	89 c2                	mov    %eax,%edx
 840ec40:	c7 02 52 2a 00 00    	movl   $0x2a52,(%edx)
 840ec46:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ec4d:	00 
 840ec4e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ec55:	09 
 840ec56:	89 04 24             	mov    %eax,(%esp)
 840ec59:	e8 f2 5f 31 00       	call   8724c50 <__cxa_throw>
 840ec5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ec61:	8d 90 80 00 00 00    	lea    0x80(%eax),%edx
 840ec67:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ec6a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ec6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ec72:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ec76:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ec79:	89 04 24             	mov    %eax,(%esp)
 840ec7c:	e8 ab 7c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ec81:	83 f0 01             	xor    $0x1,%eax
 840ec84:	84 c0                	test   %al,%al
 840ec86:	74 2c                	je     840ecb4 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x91a>
 840ec88:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ec8f:	e8 6c 6b 31 00       	call   8725800 <__cxa_allocate_exception>
 840ec94:	89 c2                	mov    %eax,%edx
 840ec96:	c7 02 53 2a 00 00    	movl   $0x2a53,(%edx)
 840ec9c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840eca3:	00 
 840eca4:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ecab:	09 
 840ecac:	89 04 24             	mov    %eax,(%esp)
 840ecaf:	e8 9c 5f 31 00       	call   8724c50 <__cxa_throw>
 840ecb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ecb7:	8d 50 34             	lea    0x34(%eax),%edx
 840ecba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ecbd:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ecc1:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ecc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ecc9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840eccc:	89 04 24             	mov    %eax,(%esp)
 840eccf:	e8 58 7c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ecd4:	83 f0 01             	xor    $0x1,%eax
 840ecd7:	84 c0                	test   %al,%al
 840ecd9:	74 2c                	je     840ed07 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x96d>
 840ecdb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ece2:	e8 19 6b 31 00       	call   8725800 <__cxa_allocate_exception>
 840ece7:	89 c2                	mov    %eax,%edx
 840ece9:	c7 02 55 2a 00 00    	movl   $0x2a55,(%edx)
 840ecef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ecf6:	00 
 840ecf7:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ecfe:	09 
 840ecff:	89 04 24             	mov    %eax,(%esp)
 840ed02:	e8 49 5f 31 00       	call   8724c50 <__cxa_throw>
 840ed07:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ed0a:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 840ed10:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ed13:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ed17:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ed1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ed1f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ed22:	89 04 24             	mov    %eax,(%esp)
 840ed25:	e8 02 7c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ed2a:	83 f0 01             	xor    $0x1,%eax
 840ed2d:	84 c0                	test   %al,%al
 840ed2f:	74 2c                	je     840ed5d <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x9c3>
 840ed31:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ed38:	e8 c3 6a 31 00       	call   8725800 <__cxa_allocate_exception>
 840ed3d:	89 c2                	mov    %eax,%edx
 840ed3f:	c7 02 56 2a 00 00    	movl   $0x2a56,(%edx)
 840ed45:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ed4c:	00 
 840ed4d:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ed54:	09 
 840ed55:	89 04 24             	mov    %eax,(%esp)
 840ed58:	e8 f3 5e 31 00       	call   8724c50 <__cxa_throw>
 840ed5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ed60:	8d 50 38             	lea    0x38(%eax),%edx
 840ed63:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ed66:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ed6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ed6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ed72:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ed75:	89 04 24             	mov    %eax,(%esp)
 840ed78:	e8 af 7b d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ed7d:	83 f0 01             	xor    $0x1,%eax
 840ed80:	84 c0                	test   %al,%al
 840ed82:	74 2c                	je     840edb0 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xa16>
 840ed84:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ed8b:	e8 70 6a 31 00       	call   8725800 <__cxa_allocate_exception>
 840ed90:	89 c2                	mov    %eax,%edx
 840ed92:	c7 02 57 2a 00 00    	movl   $0x2a57,(%edx)
 840ed98:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ed9f:	00 
 840eda0:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840eda7:	09 
 840eda8:	89 04 24             	mov    %eax,(%esp)
 840edab:	e8 a0 5e 31 00       	call   8724c50 <__cxa_throw>
 840edb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 840edb3:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 840edb9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840edbc:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840edc0:	89 54 24 08          	mov    %edx,0x8(%esp)
 840edc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 840edc8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840edcb:	89 04 24             	mov    %eax,(%esp)
 840edce:	e8 59 7b d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840edd3:	83 f0 01             	xor    $0x1,%eax
 840edd6:	84 c0                	test   %al,%al
 840edd8:	74 2c                	je     840ee06 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xa6c>
 840edda:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ede1:	e8 1a 6a 31 00       	call   8725800 <__cxa_allocate_exception>
 840ede6:	89 c2                	mov    %eax,%edx
 840ede8:	c7 02 58 2a 00 00    	movl   $0x2a58,(%edx)
 840edee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840edf5:	00 
 840edf6:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840edfd:	09 
 840edfe:	89 04 24             	mov    %eax,(%esp)
 840ee01:	e8 4a 5e 31 00       	call   8724c50 <__cxa_throw>
 840ee06:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ee09:	8d 50 3c             	lea    0x3c(%eax),%edx
 840ee0c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ee0f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ee13:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ee17:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ee1b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ee1e:	89 04 24             	mov    %eax,(%esp)
 840ee21:	e8 06 7b d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ee26:	83 f0 01             	xor    $0x1,%eax
 840ee29:	84 c0                	test   %al,%al
 840ee2b:	74 2c                	je     840ee59 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xabf>
 840ee2d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ee34:	e8 c7 69 31 00       	call   8725800 <__cxa_allocate_exception>
 840ee39:	89 c2                	mov    %eax,%edx
 840ee3b:	c7 02 59 2a 00 00    	movl   $0x2a59,(%edx)
 840ee41:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ee48:	00 
 840ee49:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ee50:	09 
 840ee51:	89 04 24             	mov    %eax,(%esp)
 840ee54:	e8 f7 5d 31 00       	call   8724c50 <__cxa_throw>
 840ee59:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ee5c:	8d 90 8c 00 00 00    	lea    0x8c(%eax),%edx
 840ee62:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ee65:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ee69:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ee6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ee71:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ee74:	89 04 24             	mov    %eax,(%esp)
 840ee77:	e8 b0 7a d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ee7c:	83 f0 01             	xor    $0x1,%eax
 840ee7f:	84 c0                	test   %al,%al
 840ee81:	74 2c                	je     840eeaf <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xb15>
 840ee83:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ee8a:	e8 71 69 31 00       	call   8725800 <__cxa_allocate_exception>
 840ee8f:	89 c2                	mov    %eax,%edx
 840ee91:	c7 02 5a 2a 00 00    	movl   $0x2a5a,(%edx)
 840ee97:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ee9e:	00 
 840ee9f:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840eea6:	09 
 840eea7:	89 04 24             	mov    %eax,(%esp)
 840eeaa:	e8 a1 5d 31 00       	call   8724c50 <__cxa_throw>
 840eeaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 840eeb2:	8d 50 40             	lea    0x40(%eax),%edx
 840eeb5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840eeb8:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840eebc:	89 54 24 08          	mov    %edx,0x8(%esp)
 840eec0:	89 44 24 04          	mov    %eax,0x4(%esp)
 840eec4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840eec7:	89 04 24             	mov    %eax,(%esp)
 840eeca:	e8 5d 7a d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840eecf:	83 f0 01             	xor    $0x1,%eax
 840eed2:	84 c0                	test   %al,%al
 840eed4:	74 2c                	je     840ef02 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xb68>
 840eed6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840eedd:	e8 1e 69 31 00       	call   8725800 <__cxa_allocate_exception>
 840eee2:	89 c2                	mov    %eax,%edx
 840eee4:	c7 02 5b 2a 00 00    	movl   $0x2a5b,(%edx)
 840eeea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840eef1:	00 
 840eef2:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840eef9:	09 
 840eefa:	89 04 24             	mov    %eax,(%esp)
 840eefd:	e8 4e 5d 31 00       	call   8724c50 <__cxa_throw>
 840ef02:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ef05:	8d 90 90 00 00 00    	lea    0x90(%eax),%edx
 840ef0b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ef0e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ef12:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ef16:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ef1a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ef1d:	89 04 24             	mov    %eax,(%esp)
 840ef20:	e8 07 7a d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ef25:	83 f0 01             	xor    $0x1,%eax
 840ef28:	84 c0                	test   %al,%al
 840ef2a:	74 2c                	je     840ef58 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xbbe>
 840ef2c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ef33:	e8 c8 68 31 00       	call   8725800 <__cxa_allocate_exception>
 840ef38:	89 c2                	mov    %eax,%edx
 840ef3a:	c7 02 5c 2a 00 00    	movl   $0x2a5c,(%edx)
 840ef40:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ef47:	00 
 840ef48:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840ef4f:	09 
 840ef50:	89 04 24             	mov    %eax,(%esp)
 840ef53:	e8 f8 5c 31 00       	call   8724c50 <__cxa_throw>
 840ef58:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ef5b:	8d 50 44             	lea    0x44(%eax),%edx
 840ef5e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840ef61:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840ef65:	89 54 24 08          	mov    %edx,0x8(%esp)
 840ef69:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ef6d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840ef70:	89 04 24             	mov    %eax,(%esp)
 840ef73:	e8 b4 79 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840ef78:	83 f0 01             	xor    $0x1,%eax
 840ef7b:	84 c0                	test   %al,%al
 840ef7d:	74 2c                	je     840efab <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xc11>
 840ef7f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840ef86:	e8 75 68 31 00       	call   8725800 <__cxa_allocate_exception>
 840ef8b:	89 c2                	mov    %eax,%edx
 840ef8d:	c7 02 5d 2a 00 00    	movl   $0x2a5d,(%edx)
 840ef93:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ef9a:	00 
 840ef9b:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840efa2:	09 
 840efa3:	89 04 24             	mov    %eax,(%esp)
 840efa6:	e8 a5 5c 31 00       	call   8724c50 <__cxa_throw>
 840efab:	8b 45 0c             	mov    0xc(%ebp),%eax
 840efae:	8d 90 94 00 00 00    	lea    0x94(%eax),%edx
 840efb4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840efb7:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840efbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 840efbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 840efc3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840efc6:	89 04 24             	mov    %eax,(%esp)
 840efc9:	e8 5e 79 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840efce:	83 f0 01             	xor    $0x1,%eax
 840efd1:	84 c0                	test   %al,%al
 840efd3:	74 2c                	je     840f001 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xc67>
 840efd5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840efdc:	e8 1f 68 31 00       	call   8725800 <__cxa_allocate_exception>
 840efe1:	89 c2                	mov    %eax,%edx
 840efe3:	c7 02 5e 2a 00 00    	movl   $0x2a5e,(%edx)
 840efe9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840eff0:	00 
 840eff1:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840eff8:	09 
 840eff9:	89 04 24             	mov    %eax,(%esp)
 840effc:	e8 4f 5c 31 00       	call   8724c50 <__cxa_throw>
 840f001:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f004:	8d 50 48             	lea    0x48(%eax),%edx
 840f007:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f00a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f00e:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f012:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f016:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f019:	89 04 24             	mov    %eax,(%esp)
 840f01c:	e8 0b 79 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f021:	83 f0 01             	xor    $0x1,%eax
 840f024:	84 c0                	test   %al,%al
 840f026:	74 2c                	je     840f054 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xcba>
 840f028:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f02f:	e8 cc 67 31 00       	call   8725800 <__cxa_allocate_exception>
 840f034:	89 c2                	mov    %eax,%edx
 840f036:	c7 02 5f 2a 00 00    	movl   $0x2a5f,(%edx)
 840f03c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f043:	00 
 840f044:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f04b:	09 
 840f04c:	89 04 24             	mov    %eax,(%esp)
 840f04f:	e8 fc 5b 31 00       	call   8724c50 <__cxa_throw>
 840f054:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f057:	8d 90 98 00 00 00    	lea    0x98(%eax),%edx
 840f05d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f060:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f064:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f068:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f06c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f06f:	89 04 24             	mov    %eax,(%esp)
 840f072:	e8 b5 78 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f077:	83 f0 01             	xor    $0x1,%eax
 840f07a:	84 c0                	test   %al,%al
 840f07c:	74 2c                	je     840f0aa <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xd10>
 840f07e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f085:	e8 76 67 31 00       	call   8725800 <__cxa_allocate_exception>
 840f08a:	89 c2                	mov    %eax,%edx
 840f08c:	c7 02 60 2a 00 00    	movl   $0x2a60,(%edx)
 840f092:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f099:	00 
 840f09a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f0a1:	09 
 840f0a2:	89 04 24             	mov    %eax,(%esp)
 840f0a5:	e8 a6 5b 31 00       	call   8724c50 <__cxa_throw>
 840f0aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f0ad:	8d 50 4c             	lea    0x4c(%eax),%edx
 840f0b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f0b3:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f0b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f0bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f0bf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f0c2:	89 04 24             	mov    %eax,(%esp)
 840f0c5:	e8 62 78 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f0ca:	83 f0 01             	xor    $0x1,%eax
 840f0cd:	84 c0                	test   %al,%al
 840f0cf:	74 2c                	je     840f0fd <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xd63>
 840f0d1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f0d8:	e8 23 67 31 00       	call   8725800 <__cxa_allocate_exception>
 840f0dd:	89 c2                	mov    %eax,%edx
 840f0df:	c7 02 61 2a 00 00    	movl   $0x2a61,(%edx)
 840f0e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f0ec:	00 
 840f0ed:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f0f4:	09 
 840f0f5:	89 04 24             	mov    %eax,(%esp)
 840f0f8:	e8 53 5b 31 00       	call   8724c50 <__cxa_throw>
 840f0fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f100:	8d 90 9c 00 00 00    	lea    0x9c(%eax),%edx
 840f106:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f109:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f10d:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f111:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f115:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f118:	89 04 24             	mov    %eax,(%esp)
 840f11b:	e8 0c 78 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f120:	83 f0 01             	xor    $0x1,%eax
 840f123:	84 c0                	test   %al,%al
 840f125:	74 2c                	je     840f153 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xdb9>
 840f127:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f12e:	e8 cd 66 31 00       	call   8725800 <__cxa_allocate_exception>
 840f133:	89 c2                	mov    %eax,%edx
 840f135:	c7 02 62 2a 00 00    	movl   $0x2a62,(%edx)
 840f13b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f142:	00 
 840f143:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f14a:	09 
 840f14b:	89 04 24             	mov    %eax,(%esp)
 840f14e:	e8 fd 5a 31 00       	call   8724c50 <__cxa_throw>
 840f153:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f156:	8d 50 50             	lea    0x50(%eax),%edx
 840f159:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f15c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f160:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f164:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f168:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f16b:	89 04 24             	mov    %eax,(%esp)
 840f16e:	e8 b9 77 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f173:	83 f0 01             	xor    $0x1,%eax
 840f176:	84 c0                	test   %al,%al
 840f178:	74 2c                	je     840f1a6 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xe0c>
 840f17a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f181:	e8 7a 66 31 00       	call   8725800 <__cxa_allocate_exception>
 840f186:	89 c2                	mov    %eax,%edx
 840f188:	c7 02 63 2a 00 00    	movl   $0x2a63,(%edx)
 840f18e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f195:	00 
 840f196:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f19d:	09 
 840f19e:	89 04 24             	mov    %eax,(%esp)
 840f1a1:	e8 aa 5a 31 00       	call   8724c50 <__cxa_throw>
 840f1a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f1a9:	8d 90 a0 00 00 00    	lea    0xa0(%eax),%edx
 840f1af:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f1b2:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f1b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f1ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f1be:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f1c1:	89 04 24             	mov    %eax,(%esp)
 840f1c4:	e8 63 77 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f1c9:	83 f0 01             	xor    $0x1,%eax
 840f1cc:	84 c0                	test   %al,%al
 840f1ce:	74 2c                	je     840f1fc <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xe62>
 840f1d0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f1d7:	e8 24 66 31 00       	call   8725800 <__cxa_allocate_exception>
 840f1dc:	89 c2                	mov    %eax,%edx
 840f1de:	c7 02 64 2a 00 00    	movl   $0x2a64,(%edx)
 840f1e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f1eb:	00 
 840f1ec:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f1f3:	09 
 840f1f4:	89 04 24             	mov    %eax,(%esp)
 840f1f7:	e8 54 5a 31 00       	call   8724c50 <__cxa_throw>
 840f1fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f1ff:	8d 50 54             	lea    0x54(%eax),%edx
 840f202:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f205:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f209:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f20d:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f211:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f214:	89 04 24             	mov    %eax,(%esp)
 840f217:	e8 10 77 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f21c:	83 f0 01             	xor    $0x1,%eax
 840f21f:	84 c0                	test   %al,%al
 840f221:	74 2c                	je     840f24f <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xeb5>
 840f223:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f22a:	e8 d1 65 31 00       	call   8725800 <__cxa_allocate_exception>
 840f22f:	89 c2                	mov    %eax,%edx
 840f231:	c7 02 65 2a 00 00    	movl   $0x2a65,(%edx)
 840f237:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f23e:	00 
 840f23f:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f246:	09 
 840f247:	89 04 24             	mov    %eax,(%esp)
 840f24a:	e8 01 5a 31 00       	call   8724c50 <__cxa_throw>
 840f24f:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f252:	8d 90 a4 00 00 00    	lea    0xa4(%eax),%edx
 840f258:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f25b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f25f:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f263:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f267:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f26a:	89 04 24             	mov    %eax,(%esp)
 840f26d:	e8 ba 76 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f272:	83 f0 01             	xor    $0x1,%eax
 840f275:	84 c0                	test   %al,%al
 840f277:	74 2c                	je     840f2a5 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xf0b>
 840f279:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f280:	e8 7b 65 31 00       	call   8725800 <__cxa_allocate_exception>
 840f285:	89 c2                	mov    %eax,%edx
 840f287:	c7 02 66 2a 00 00    	movl   $0x2a66,(%edx)
 840f28d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f294:	00 
 840f295:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f29c:	09 
 840f29d:	89 04 24             	mov    %eax,(%esp)
 840f2a0:	e8 ab 59 31 00       	call   8724c50 <__cxa_throw>
 840f2a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f2a8:	8d 50 58             	lea    0x58(%eax),%edx
 840f2ab:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f2ae:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f2b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f2b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f2ba:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f2bd:	89 04 24             	mov    %eax,(%esp)
 840f2c0:	e8 67 76 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f2c5:	83 f0 01             	xor    $0x1,%eax
 840f2c8:	84 c0                	test   %al,%al
 840f2ca:	74 2c                	je     840f2f8 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xf5e>
 840f2cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f2d3:	e8 28 65 31 00       	call   8725800 <__cxa_allocate_exception>
 840f2d8:	89 c2                	mov    %eax,%edx
 840f2da:	c7 02 67 2a 00 00    	movl   $0x2a67,(%edx)
 840f2e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f2e7:	00 
 840f2e8:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f2ef:	09 
 840f2f0:	89 04 24             	mov    %eax,(%esp)
 840f2f3:	e8 58 59 31 00       	call   8724c50 <__cxa_throw>
 840f2f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f2fb:	8d 90 a8 00 00 00    	lea    0xa8(%eax),%edx
 840f301:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f304:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f308:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f30c:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f310:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f313:	89 04 24             	mov    %eax,(%esp)
 840f316:	e8 11 76 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f31b:	83 f0 01             	xor    $0x1,%eax
 840f31e:	84 c0                	test   %al,%al
 840f320:	74 2c                	je     840f34e <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0xfb4>
 840f322:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f329:	e8 d2 64 31 00       	call   8725800 <__cxa_allocate_exception>
 840f32e:	89 c2                	mov    %eax,%edx
 840f330:	c7 02 68 2a 00 00    	movl   $0x2a68,(%edx)
 840f336:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f33d:	00 
 840f33e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f345:	09 
 840f346:	89 04 24             	mov    %eax,(%esp)
 840f349:	e8 02 59 31 00       	call   8724c50 <__cxa_throw>
 840f34e:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f351:	8d 90 ac 00 00 00    	lea    0xac(%eax),%edx
 840f357:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f35a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f35e:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f362:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f366:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f369:	89 04 24             	mov    %eax,(%esp)
 840f36c:	e8 bb 75 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840f371:	83 f0 01             	xor    $0x1,%eax
 840f374:	84 c0                	test   %al,%al
 840f376:	74 2c                	je     840f3a4 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x100a>
 840f378:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f37f:	e8 7c 64 31 00       	call   8725800 <__cxa_allocate_exception>
 840f384:	89 c2                	mov    %eax,%edx
 840f386:	c7 02 6f 2a 00 00    	movl   $0x2a6f,(%edx)
 840f38c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f393:	00 
 840f394:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f39b:	09 
 840f39c:	89 04 24             	mov    %eax,(%esp)
 840f39f:	e8 ac 58 31 00       	call   8724c50 <__cxa_throw>
 840f3a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f3a7:	8d 90 e0 75 00 00    	lea    0x75e0(%eax),%edx
 840f3ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840f3b0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840f3b4:	c7 44 24 0c 28 00 00 	movl   $0x28,0xc(%esp)
 840f3bb:	00 
 840f3bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f3c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f3c4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840f3c7:	89 04 24             	mov    %eax,(%esp)
 840f3ca:	e8 4b 5f d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840f3cf:	83 f0 01             	xor    $0x1,%eax
 840f3d2:	84 c0                	test   %al,%al
 840f3d4:	0f 84 a3 00 00 00    	je     840f47d <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x10e3>
 840f3da:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840f3e1:	e8 1a 64 31 00       	call   8725800 <__cxa_allocate_exception>
 840f3e6:	89 c2                	mov    %eax,%edx
 840f3e8:	c7 02 7c 2a 00 00    	movl   $0x2a7c,(%edx)
 840f3ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f3f5:	00 
 840f3f6:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840f3fd:	09 
 840f3fe:	89 04 24             	mov    %eax,(%esp)
 840f401:	e8 4a 58 31 00       	call   8724c50 <__cxa_throw>
 840f406:	83 fa 01             	cmp    $0x1,%edx
 840f409:	74 08                	je     840f413 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x1079>
 840f40b:	89 04 24             	mov    %eax,(%esp)
 840f40e:	e8 3d 43 6d 00       	call   8ae3750 <_Unwind_Resume>
 840f413:	89 04 24             	mov    %eax,(%esp)
 840f416:	e8 c5 68 31 00       	call   8725ce0 <__cxa_begin_catch>
 840f41b:	8b 00                	mov    (%eax),%eax
 840f41d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840f420:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f423:	8b 00                	mov    (%eax),%eax
 840f425:	89 44 24 18          	mov    %eax,0x18(%esp)
 840f429:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840f42c:	89 44 24 14          	mov    %eax,0x14(%esp)
 840f430:	c7 44 24 10 50 70 c4 	movl   $0x8c47050,0x10(%esp)
 840f437:	08 
 840f438:	c7 44 24 0c 81 2a 00 	movl   $0x2a81,0xc(%esp)
 840f43f:	00 
 840f440:	c7 44 24 08 e0 d0 c5 	movl   $0x8c5d0e0,0x8(%esp)
 840f447:	08 
 840f448:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840f44f:	08 
 840f450:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 840f457:	e8 ae 47 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 840f45c:	bb 00 00 00 00       	mov    $0x0,%ebx
 840f461:	e8 ca 67 31 00       	call   8725c30 <__cxa_end_catch>
 840f466:	eb 1a                	jmp    840f482 <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST+0x10e8>
 840f468:	89 d3                	mov    %edx,%ebx
 840f46a:	89 c6                	mov    %eax,%esi
 840f46c:	e8 bf 67 31 00       	call   8725c30 <__cxa_end_catch>
 840f471:	89 f0                	mov    %esi,%eax
 840f473:	89 da                	mov    %ebx,%edx
 840f475:	89 04 24             	mov    %eax,(%esp)
 840f478:	e8 d3 42 6d 00       	call   8ae3750 <_Unwind_Resume>
 840f47d:	bb 01 00 00 00       	mov    $0x1,%ebx
 840f482:	89 d8                	mov    %ebx,%eax
 840f484:	81 c4 00 8d 00 00    	add    $0x8d00,%esp
 840f48a:	5b                   	pop    %ebx
 840f48b:	5e                   	pop    %esi
 840f48c:	5d                   	pop    %ebp
 840f48d:	c3                   	ret

```

```c
// DB_LoadQuest::GetUserQuest @ 0x840e39a

/* DB_LoadQuest::GetUserQuest(SIG_LOAD_QUEST*) */

undefined4 __thiscall DB_LoadQuest::GetUserQuest(DB_LoadQuest *this,SIG_LOAD_QUEST *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char local_8ce0 [36012];
  uint local_34;
  uint local_30;
  cMyTrace local_2c [16];
  MySQL *local_1c;
  int local_18;
  uint local_14;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_1c,
                   "seLect charac_no, clear_quest,play_1, play_1_trigger, play_2, play_2_trigger, play_3, play_3_trigger, play_4, play_4_trigger, play_5, play_5_trigger,play_6, play_6_trigger, play_7, play_7_trigger, play_8, play_8_trigger, play_9, play_9_trigger, play_10, play_10_trigger,play_11, play_11_trigger, play_12, play_12_trigger, play_13, play_13_trigger, play_14, play_14_trigger, play_15, play_15_trigger,play_16, play_16_trigger, play_17, play_17_trigger, play_18, play_18_trigger, play_19, play_19_trigger, play_20, play_20_trigger,urgentQuestIndex,quest_notify from new_charac_quest  where charac_no=%u"
                   ,*(undefined4 *)param_1);
  memset(local_8ce0,0,0x8cac);
  local_30 = 0x8cac;
  local_18 = 0;
                    /* try { // try from 0840e41c to 0840f405 has its CatchHandler @ 0840f406 */
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a30;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(local_1c);
  if (iVar4 == 0) {
    uVar1 = *(undefined4 *)param_1;
    cMyTrace::cMyTrace(local_2c,"bool DB_LoadQuest::GetUserQuest(SIG_LOAD_QUEST*)",0x2a33,5);
    cMyTrace::operator()(local_2c,"QUEST_EXPEND_LOG : NO QUEST DATA EXIST!! : CHARAC_NO(%u)",uVar1);
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a34;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  cVar2 = MySQL::fetch(local_1c);
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a36;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_34 = 0;
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,&local_34);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a39;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_14 = MySQL::get_binary_length(local_1c,local_18);
  iVar4 = local_18;
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_binary(local_1c,iVar4,local_8ce0,local_30);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a3c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  cVar2 = uncompress_zip((char *)(param_1 + 0xb0),&local_30,local_8ce0,local_14);
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a3d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xc));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a40;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x5c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a41;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x10));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a42;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x60));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a43;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x14));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a44;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 100));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a45;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x18));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a46;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x68));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a47;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x1c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a48;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x6c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a49;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x20));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4a;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x70));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x24));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x74));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x28));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4e;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x78));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a4f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x2c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a50;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x7c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a51;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x30));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a52;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x80));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a53;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x34));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a55;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x84));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a56;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x38));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a57;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x88));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a58;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x3c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a59;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x8c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5a;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x40));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x90));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x44));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x94));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5e;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x48));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x98));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a60;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x4c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a61;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x9c));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a62;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x50));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a63;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xa0));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a64;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x54));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a65;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xa4));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a66;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0x58));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a67;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xa8));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a68;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_int(local_1c,iVar4,(int *)(param_1 + 0xac));
  iVar4 = local_18;
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a6f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  local_18 = local_18 + 1;
  cVar2 = MySQL::get_binary(local_1c,iVar4,param_1 + 0x75e0,0x28);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x2a7c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&int::typeinfo,0);
  }
  return 1;
}

```

---

## dispatch

```asm
// === 0840e236 DB_LoadQuest::dispatch  [0x0840e236-0x840e399] ===
 840e236:	55                   	push   %ebp
 840e237:	89 e5                	mov    %esp,%ebp
 840e239:	56                   	push   %esi
 840e23a:	53                   	push   %ebx
 840e23b:	83 ec 20             	sub    $0x20,%esp
 840e23e:	8b 45 08             	mov    0x8(%ebp),%eax
 840e241:	8b 55 14             	mov    0x14(%ebp),%edx
 840e244:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840e248:	8b 55 10             	mov    0x10(%ebp),%edx
 840e24b:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e24f:	8b 55 0c             	mov    0xc(%ebp),%edx
 840e252:	89 54 24 04          	mov    %edx,0x4(%esp)
 840e256:	89 04 24             	mov    %eax,(%esp)
 840e259:	e8 1e dd fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 840e25e:	83 f0 01             	xor    $0x1,%eax
 840e261:	84 c0                	test   %al,%al
 840e263:	74 0a                	je     840e26f <_ZN12DB_LoadQuest8dispatchEiiP6Stream+0x39>
 840e265:	bb 00 00 00 00       	mov    $0x0,%ebx
 840e26a:	e9 21 01 00 00       	jmp    840e390 <_ZN12DB_LoadQuest8dispatchEiiP6Stream+0x15a>
 840e26f:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 840e274:	c7 44 24 08 f9 29 00 	movl   $0x29f9,0x8(%esp)
 840e27b:	00 
 840e27c:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840e283:	08 
 840e284:	89 04 24             	mov    %eax,(%esp)
 840e287:	e8 d6 1f e8 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 840e28c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 840e293:	00 
 840e294:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e298:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840e29b:	89 04 24             	mov    %eax,(%esp)
 840e29e:	e8 83 a9 cb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 840e2a3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840e2a6:	89 04 24             	mov    %eax,(%esp)
 840e2a9:	e8 98 a9 cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 840e2ae:	8b 55 0c             	mov    0xc(%ebp),%edx
 840e2b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 840e2b5:	89 04 24             	mov    %eax,(%esp)
 840e2b8:	e8 99 a9 cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 840e2bd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840e2c0:	89 04 24             	mov    %eax,(%esp)
 840e2c3:	e8 7e a9 cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 840e2c8:	8b 55 10             	mov    0x10(%ebp),%edx
 840e2cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 840e2cf:	89 04 24             	mov    %eax,(%esp)
 840e2d2:	e8 7f a9 cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 840e2d7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840e2da:	89 04 24             	mov    %eax,(%esp)
 840e2dd:	e8 6c a9 cb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 840e2e2:	89 04 24             	mov    %eax,(%esp)
 840e2e5:	e8 72 8a e2 ff       	call   8236d5c <_ZN12CStreamGuard11GetInBufferI14SIG_LOAD_QUESTEEPT_v>
 840e2ea:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840e2ed:	c7 44 24 08 08 76 00 	movl   $0x7608,0x8(%esp)
 840e2f4:	00 
 840e2f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840e2fc:	00 
 840e2fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e300:	89 04 24             	mov    %eax,(%esp)
 840e303:	e8 b8 f9 c6 ff       	call   807dcc0 <memset@plt>
 840e308:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e30b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 840e312:	8b 45 14             	mov    0x14(%ebp),%eax
 840e315:	89 04 24             	mov    %eax,(%esp)
 840e318:	e8 ad 26 04 00       	call   84509ca <_ZN6Stream12GetOutBufferI14SIG_LOAD_QUESTEEPT_v>
 840e31d:	8b 10                	mov    (%eax),%edx
 840e31f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e322:	89 10                	mov    %edx,(%eax)
 840e324:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e327:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e32b:	8b 45 08             	mov    0x8(%ebp),%eax
 840e32e:	89 04 24             	mov    %eax,(%esp)
 840e331:	e8 64 00 00 00       	call   840e39a <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST>
 840e336:	83 f0 01             	xor    $0x1,%eax
 840e339:	84 c0                	test   %al,%al
 840e33b:	74 0a                	je     840e347 <_ZN12DB_LoadQuest8dispatchEiiP6Stream+0x111>
 840e33d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e340:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 840e347:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 840e34c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 840e34f:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e353:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840e35a:	00 
 840e35b:	89 04 24             	mov    %eax,(%esp)
 840e35e:	e8 7b 2c 16 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 840e363:	bb 01 00 00 00       	mov    $0x1,%ebx
 840e368:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840e36b:	89 04 24             	mov    %eax,(%esp)
 840e36e:	e8 5f e5 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840e373:	eb 1b                	jmp    840e390 <_ZN12DB_LoadQuest8dispatchEiiP6Stream+0x15a>
 840e375:	89 d3                	mov    %edx,%ebx
 840e377:	89 c6                	mov    %eax,%esi
 840e379:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840e37c:	89 04 24             	mov    %eax,(%esp)
 840e37f:	e8 4e e5 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840e384:	89 f0                	mov    %esi,%eax
 840e386:	89 da                	mov    %ebx,%edx
 840e388:	89 04 24             	mov    %eax,(%esp)
 840e38b:	e8 c0 53 6d 00       	call   8ae3750 <_Unwind_Resume>
 840e390:	89 d8                	mov    %ebx,%eax
 840e392:	83 c4 20             	add    $0x20,%esp
 840e395:	5b                   	pop    %ebx
 840e396:	5e                   	pop    %esi
 840e397:	5d                   	pop    %ebp
 840e398:	c3                   	ret
 840e399:	90                   	nop

```

```c
// DB_LoadQuest::dispatch @ 0x840e236

/* DB_LoadQuest::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadQuest::dispatch(DB_LoadQuest *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  SIG_LOAD_QUEST *pSVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_QUEST *local_10;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x29f9);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0840e2b8 to 0840e362 has its CatchHandler @ 0840e375 */
    CStreamGuard::operator<<(pCVar3,param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_QUEST>(pCVar3);
    memset(local_10,0,0x7608);
    *(undefined4 *)(local_10 + 4) = 0;
    pSVar4 = Stream::GetOutBuffer<SIG_LOAD_QUEST>(param_3);
    *(undefined4 *)local_10 = *(undefined4 *)pSVar4;
    cVar1 = GetUserQuest(this,local_10);
    if (cVar1 != '\x01') {
      *(undefined4 *)(local_10 + 4) = 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
    uVar5 = 1;
    CStreamGuard::~CStreamGuard(local_18);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

