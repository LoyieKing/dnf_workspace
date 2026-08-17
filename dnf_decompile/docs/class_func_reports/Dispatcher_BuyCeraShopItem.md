# Dispatcher_BuyCeraShopItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 081fd396 Dispatcher_BuyCeraShopItem::dispatch_sig  [0x081fd396-0x81fe4b7] ===
 81fd396:	55                   	push   %ebp
 81fd397:	89 e5                	mov    %esp,%ebp
 81fd399:	57                   	push   %edi
 81fd39a:	56                   	push   %esi
 81fd39b:	53                   	push   %ebx
 81fd39c:	81 ec bc 7f 00 00    	sub    $0x7fbc,%esp
 81fd3a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd3a5:	89 04 24             	mov    %eax,(%esp)
 81fd3a8:	e8 c1 cf ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fd3ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fd3b4:	00 
 81fd3b5:	89 04 24             	mov    %eax,(%esp)
 81fd3b8:	e8 8e bc f0 ff       	call   810904b <_Z14NumberToStringji>
 81fd3bd:	89 c3                	mov    %eax,%ebx
 81fd3bf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd3c6:	00 
 81fd3c7:	c7 44 24 08 66 8f 00 	movl   $0x8f66,0x8(%esp)
 81fd3ce:	00 
 81fd3cf:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd3d6:	08 
 81fd3d7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81fd3da:	89 04 24             	mov    %eax,(%esp)
 81fd3dd:	e8 36 23 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fd3e2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fd3e6:	c7 44 24 04 34 27 bc 	movl   $0x8bc2734,0x4(%esp)
 81fd3ed:	08 
 81fd3ee:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81fd3f1:	89 04 24             	mov    %eax,(%esp)
 81fd3f4:	e8 8f 23 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fd3f9:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81fd3fd:	74 0f                	je     81fd40e <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x78>
 81fd3ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd402:	89 04 24             	mov    %eax,(%esp)
 81fd405:	e8 f4 ce ed ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81fd40a:	84 c0                	test   %al,%al
 81fd40c:	74 07                	je     81fd415 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x7f>
 81fd40e:	b8 01 00 00 00       	mov    $0x1,%eax
 81fd413:	eb 05                	jmp    81fd41a <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x84>
 81fd415:	b8 00 00 00 00       	mov    $0x0,%eax
 81fd41a:	84 c0                	test   %al,%al
 81fd41c:	74 0a                	je     81fd428 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x92>
 81fd41e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fd423:	e9 82 10 00 00       	jmp    81fe4aa <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1114>
 81fd428:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd42b:	89 04 24             	mov    %eax,(%esp)
 81fd42e:	e8 59 cf ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81fd433:	83 f8 02             	cmp    $0x2,%eax
 81fd436:	7e 0f                	jle    81fd447 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xb1>
 81fd438:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd43b:	89 04 24             	mov    %eax,(%esp)
 81fd43e:	e8 ef 2f f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81fd443:	85 c0                	test   %eax,%eax
 81fd445:	75 07                	jne    81fd44e <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xb8>
 81fd447:	b8 01 00 00 00       	mov    $0x1,%eax
 81fd44c:	eb 05                	jmp    81fd453 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xbd>
 81fd44e:	b8 00 00 00 00       	mov    $0x0,%eax
 81fd453:	84 c0                	test   %al,%al
 81fd455:	74 2b                	je     81fd482 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xec>
 81fd457:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd45e:	00 
 81fd45f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd466:	00 
 81fd467:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd46e:	08 
 81fd46f:	c7 04 24 7b 8f 00 00 	movl   $0x8f7b,(%esp)
 81fd476:	e8 5c 34 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd47b:	89 c3                	mov    %eax,%ebx
 81fd47d:	e9 28 10 00 00       	jmp    81fe4aa <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1114>
 81fd482:	8d 45 80             	lea    -0x80(%ebp),%eax
 81fd485:	89 04 24             	mov    %eax,(%esp)
 81fd488:	e8 bf 08 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81fd48d:	e8 56 77 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81fd492:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fd495:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fd499:	89 04 24             	mov    %eax,(%esp)
 81fd49c:	e8 bd d8 3c 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81fd4a1:	84 c0                	test   %al,%al
 81fd4a3:	74 4e                	je     81fd4f3 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x15d>
 81fd4a5:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fd4aa:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fd4b1:	00 
 81fd4b2:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fd4b9:	00 
 81fd4ba:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fd4c1:	00 
 81fd4c2:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81fd4c9:	00 
 81fd4ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd4d1:	00 
 81fd4d2:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 81fd4d9:	00 
 81fd4da:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fd4dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fd4e1:	89 04 24             	mov    %eax,(%esp)
 81fd4e4:	e8 8f 64 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fd4e9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fd4ee:	e9 ac 0f 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd4f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd4f6:	89 04 24             	mov    %eax,(%esp)
 81fd4f9:	e8 00 ce ed ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81fd4fe:	84 c0                	test   %al,%al
 81fd500:	74 4e                	je     81fd550 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1ba>
 81fd502:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fd507:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fd50e:	00 
 81fd50f:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fd516:	00 
 81fd517:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fd51e:	00 
 81fd51f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81fd526:	00 
 81fd527:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd52e:	00 
 81fd52f:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81fd536:	00 
 81fd537:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fd53a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fd53e:	89 04 24             	mov    %eax,(%esp)
 81fd541:	e8 32 64 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fd546:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fd54b:	e9 4f 0f 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd550:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fd556:	83 c0 0d             	add    $0xd,%eax
 81fd559:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd55d:	8b 45 10             	mov    0x10(%ebp),%eax
 81fd560:	89 04 24             	mov    %eax,(%esp)
 81fd563:	e8 58 fa 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81fd568:	83 f0 01             	xor    $0x1,%eax
 81fd56b:	84 c0                	test   %al,%al
 81fd56d:	74 2b                	je     81fd59a <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x204>
 81fd56f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd576:	00 
 81fd577:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd57e:	00 
 81fd57f:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd586:	08 
 81fd587:	c7 04 24 a9 8f 00 00 	movl   $0x8fa9,(%esp)
 81fd58e:	e8 44 33 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd593:	89 c3                	mov    %eax,%ebx
 81fd595:	e9 05 0f 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd59a:	0f b7 85 05 c0 ff ff 	movzwl -0x3ffb(%ebp),%eax
 81fd5a1:	66 85 c0             	test   %ax,%ax
 81fd5a4:	78 0d                	js     81fd5b3 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x21d>
 81fd5a6:	0f b7 85 05 c0 ff ff 	movzwl -0x3ffb(%ebp),%eax
 81fd5ad:	66 83 f8 01          	cmp    $0x1,%ax
 81fd5b1:	7e 2b                	jle    81fd5de <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x248>
 81fd5b3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd5ba:	00 
 81fd5bb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd5c2:	00 
 81fd5c3:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd5ca:	08 
 81fd5cb:	c7 04 24 ad 8f 00 00 	movl   $0x8fad,(%esp)
 81fd5d2:	e8 00 33 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd5d7:	89 c3                	mov    %eax,%ebx
 81fd5d9:	e9 c1 0e 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd5de:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fd5e4:	83 c0 0f             	add    $0xf,%eax
 81fd5e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd5eb:	8b 45 10             	mov    0x10(%ebp),%eax
 81fd5ee:	89 04 24             	mov    %eax,(%esp)
 81fd5f1:	e8 7a f9 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fd5f6:	83 f0 01             	xor    $0x1,%eax
 81fd5f9:	84 c0                	test   %al,%al
 81fd5fb:	74 2b                	je     81fd628 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x292>
 81fd5fd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd604:	00 
 81fd605:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd60c:	00 
 81fd60d:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd614:	08 
 81fd615:	c7 04 24 b7 8f 00 00 	movl   $0x8fb7,(%esp)
 81fd61c:	e8 b6 32 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd621:	89 c3                	mov    %eax,%ebx
 81fd623:	e9 77 0e 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd628:	0f b6 85 07 c0 ff ff 	movzbl -0x3ff9(%ebp),%eax
 81fd62f:	3c 01                	cmp    $0x1,%al
 81fd631:	0f 85 ad 00 00 00    	jne    81fd6e4 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x34e>
 81fd637:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 81fd63e:	00 00 00 
 81fd641:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 81fd647:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd64b:	8b 45 10             	mov    0x10(%ebp),%eax
 81fd64e:	89 04 24             	mov    %eax,(%esp)
 81fd651:	e8 9a fa 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fd656:	83 f0 01             	xor    $0x1,%eax
 81fd659:	84 c0                	test   %al,%al
 81fd65b:	74 2b                	je     81fd688 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x2f2>
 81fd65d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd664:	00 
 81fd665:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd66c:	00 
 81fd66d:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd674:	08 
 81fd675:	c7 04 24 bb 8f 00 00 	movl   $0x8fbb,(%esp)
 81fd67c:	e8 56 32 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd681:	89 c3                	mov    %eax,%ebx
 81fd683:	e9 17 0e 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd688:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 81fd68e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fd692:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fd699:	00 
 81fd69a:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fd6a0:	83 c0 10             	add    $0x10,%eax
 81fd6a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd6a7:	8b 45 10             	mov    0x10(%ebp),%eax
 81fd6aa:	89 04 24             	mov    %eax,(%esp)
 81fd6ad:	e8 0a fc 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fd6b2:	83 f0 01             	xor    $0x1,%eax
 81fd6b5:	84 c0                	test   %al,%al
 81fd6b7:	74 2b                	je     81fd6e4 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x34e>
 81fd6b9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd6c0:	00 
 81fd6c1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd6c8:	00 
 81fd6c9:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd6d0:	08 
 81fd6d1:	c7 04 24 bc 8f 00 00 	movl   $0x8fbc,(%esp)
 81fd6d8:	e8 fa 31 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd6dd:	89 c3                	mov    %eax,%ebx
 81fd6df:	e9 bb 0d 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd6e4:	0f b6 85 07 c0 ff ff 	movzbl -0x3ff9(%ebp),%eax
 81fd6eb:	3c 01                	cmp    $0x1,%al
 81fd6ed:	75 38                	jne    81fd727 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x391>
 81fd6ef:	0f b7 85 05 c0 ff ff 	movzwl -0x3ffb(%ebp),%eax
 81fd6f6:	66 83 f8 01          	cmp    $0x1,%ax
 81fd6fa:	75 2b                	jne    81fd727 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x391>
 81fd6fc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd703:	00 
 81fd704:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd70b:	00 
 81fd70c:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd713:	08 
 81fd714:	c7 04 24 c2 8f 00 00 	movl   $0x8fc2,(%esp)
 81fd71b:	e8 b7 31 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd720:	89 c3                	mov    %eax,%ebx
 81fd722:	e9 78 0d 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd727:	e8 7b cc ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fd72c:	89 04 24             	mov    %eax,(%esp)
 81fd72f:	e8 ea 3b ef ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81fd734:	84 c0                	test   %al,%al
 81fd736:	0f 84 c2 00 00 00    	je     81fd7fe <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x468>
 81fd73c:	e8 66 cc ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fd741:	89 04 24             	mov    %eax,(%esp)
 81fd744:	e8 d7 93 f1 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81fd749:	83 f8 0f             	cmp    $0xf,%eax
 81fd74c:	0f 94 c0             	sete   %al
 81fd74f:	84 c0                	test   %al,%al
 81fd751:	74 5d                	je     81fd7b0 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x41a>
 81fd753:	0f b6 85 07 c0 ff ff 	movzbl -0x3ff9(%ebp),%eax
 81fd75a:	3c 01                	cmp    $0x1,%al
 81fd75c:	0f 85 9c 00 00 00    	jne    81fd7fe <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x468>
 81fd762:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fd767:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fd76e:	00 
 81fd76f:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fd776:	00 
 81fd777:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fd77e:	00 
 81fd77f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81fd786:	00 
 81fd787:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd78e:	00 
 81fd78f:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 81fd796:	00 
 81fd797:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fd79a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fd79e:	89 04 24             	mov    %eax,(%esp)
 81fd7a1:	e8 d2 61 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fd7a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fd7ab:	e9 ef 0c 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd7b0:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fd7b5:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fd7bc:	00 
 81fd7bd:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fd7c4:	00 
 81fd7c5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fd7cc:	00 
 81fd7cd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81fd7d4:	00 
 81fd7d5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd7dc:	00 
 81fd7dd:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 81fd7e4:	00 
 81fd7e5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fd7e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fd7ec:	89 04 24             	mov    %eax,(%esp)
 81fd7ef:	e8 84 61 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fd7f4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fd7f9:	e9 a1 0c 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd7fe:	0f b6 85 07 c0 ff ff 	movzbl -0x3ff9(%ebp),%eax
 81fd805:	0f b6 c0             	movzbl %al,%eax
 81fd808:	89 85 5c 80 ff ff    	mov    %eax,-0x7fa4(%ebp)
 81fd80e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd811:	89 04 24             	mov    %eax,(%esp)
 81fd814:	e8 0f 38 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fd819:	89 c7                	mov    %eax,%edi
 81fd81b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd81e:	89 04 24             	mov    %eax,(%esp)
 81fd821:	e8 28 e4 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81fd826:	89 c6                	mov    %eax,%esi
 81fd828:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd82b:	89 04 24             	mov    %eax,(%esp)
 81fd82e:	e8 3b cb ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fd833:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fd83a:	00 
 81fd83b:	89 04 24             	mov    %eax,(%esp)
 81fd83e:	e8 08 b8 f0 ff       	call   810904b <_Z14NumberToStringji>
 81fd843:	89 c3                	mov    %eax,%ebx
 81fd845:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd84c:	00 
 81fd84d:	c7 44 24 08 04 90 00 	movl   $0x9004,0x8(%esp)
 81fd854:	00 
 81fd855:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd85c:	08 
 81fd85d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81fd860:	89 04 24             	mov    %eax,(%esp)
 81fd863:	e8 b0 1e 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fd868:	8b 85 5c 80 ff ff    	mov    -0x7fa4(%ebp),%eax
 81fd86e:	89 44 24 14          	mov    %eax,0x14(%esp)
 81fd872:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81fd876:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fd87a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fd87e:	c7 44 24 04 5c 27 bc 	movl   $0x8bc275c,0x4(%esp)
 81fd885:	08 
 81fd886:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81fd889:	89 04 24             	mov    %eax,(%esp)
 81fd88c:	e8 f7 1e 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fd891:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fd897:	83 c0 36             	add    $0x36,%eax
 81fd89a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd89e:	8b 45 10             	mov    0x10(%ebp),%eax
 81fd8a1:	89 04 24             	mov    %eax,(%esp)
 81fd8a4:	e8 c7 f6 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fd8a9:	83 f0 01             	xor    $0x1,%eax
 81fd8ac:	84 c0                	test   %al,%al
 81fd8ae:	75 16                	jne    81fd8c6 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x530>
 81fd8b0:	0f b6 85 2e c0 ff ff 	movzbl -0x3fd2(%ebp),%eax
 81fd8b7:	84 c0                	test   %al,%al
 81fd8b9:	74 0b                	je     81fd8c6 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x530>
 81fd8bb:	0f b6 85 2e c0 ff ff 	movzbl -0x3fd2(%ebp),%eax
 81fd8c2:	3c 23                	cmp    $0x23,%al
 81fd8c4:	76 07                	jbe    81fd8cd <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x537>
 81fd8c6:	b8 01 00 00 00       	mov    $0x1,%eax
 81fd8cb:	eb 05                	jmp    81fd8d2 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x53c>
 81fd8cd:	b8 00 00 00 00       	mov    $0x0,%eax
 81fd8d2:	84 c0                	test   %al,%al
 81fd8d4:	74 50                	je     81fd926 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x590>
 81fd8d6:	8b 95 31 c0 ff ff    	mov    -0x3fcf(%ebp),%edx
 81fd8dc:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fd8e1:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fd8e8:	00 
 81fd8e9:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fd8f0:	00 
 81fd8f1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fd8f8:	00 
 81fd8f9:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fd8fd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd904:	00 
 81fd905:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fd90c:	00 
 81fd90d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fd910:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fd914:	89 04 24             	mov    %eax,(%esp)
 81fd917:	e8 5c 60 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fd91c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fd921:	e9 79 0b 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd926:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 81fd92d:	e9 b5 08 00 00       	jmp    81fe1e7 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xe51>
 81fd932:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fd935:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fd93b:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fd941:	83 c2 30             	add    $0x30,%edx
 81fd944:	01 d0                	add    %edx,%eax
 81fd946:	83 c0 07             	add    $0x7,%eax
 81fd949:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd94d:	8b 45 10             	mov    0x10(%ebp),%eax
 81fd950:	89 04 24             	mov    %eax,(%esp)
 81fd953:	e8 18 f6 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fd958:	83 f0 01             	xor    $0x1,%eax
 81fd95b:	84 c0                	test   %al,%al
 81fd95d:	74 2b                	je     81fd98a <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x5f4>
 81fd95f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd966:	00 
 81fd967:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd96e:	00 
 81fd96f:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd976:	08 
 81fd977:	c7 04 24 17 90 00 00 	movl   $0x9017,(%esp)
 81fd97e:	e8 54 2f 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd983:	89 c3                	mov    %eax,%ebx
 81fd985:	e9 15 0b 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd98a:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fd98d:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fd993:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fd999:	83 c2 30             	add    $0x30,%edx
 81fd99c:	01 d0                	add    %edx,%eax
 81fd99e:	83 c0 08             	add    $0x8,%eax
 81fd9a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd9a5:	8b 45 10             	mov    0x10(%ebp),%eax
 81fd9a8:	89 04 24             	mov    %eax,(%esp)
 81fd9ab:	e8 72 f5 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81fd9b0:	83 f0 01             	xor    $0x1,%eax
 81fd9b3:	84 c0                	test   %al,%al
 81fd9b5:	74 2b                	je     81fd9e2 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x64c>
 81fd9b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd9be:	00 
 81fd9bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd9c6:	00 
 81fd9c7:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fd9ce:	08 
 81fd9cf:	c7 04 24 18 90 00 00 	movl   $0x9018,(%esp)
 81fd9d6:	e8 fc 2e 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd9db:	89 c3                	mov    %eax,%ebx
 81fd9dd:	e9 bd 0a 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fd9e2:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fd9e5:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fd9eb:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fd9f1:	83 c2 30             	add    $0x30,%edx
 81fd9f4:	01 d0                	add    %edx,%eax
 81fd9f6:	83 c0 09             	add    $0x9,%eax
 81fd9f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd9fd:	8b 45 10             	mov    0x10(%ebp),%eax
 81fda00:	89 04 24             	mov    %eax,(%esp)
 81fda03:	e8 38 f8 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81fda08:	83 f0 01             	xor    $0x1,%eax
 81fda0b:	84 c0                	test   %al,%al
 81fda0d:	74 2b                	je     81fda3a <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x6a4>
 81fda0f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fda16:	00 
 81fda17:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fda1e:	00 
 81fda1f:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fda26:	08 
 81fda27:	c7 04 24 19 90 00 00 	movl   $0x9019,(%esp)
 81fda2e:	e8 a4 2e 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fda33:	89 c3                	mov    %eax,%ebx
 81fda35:	e9 65 0a 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fda3a:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fda3d:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fda43:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fda49:	83 c2 30             	add    $0x30,%edx
 81fda4c:	01 d0                	add    %edx,%eax
 81fda4e:	83 c0 0d             	add    $0xd,%eax
 81fda51:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fda55:	8b 45 10             	mov    0x10(%ebp),%eax
 81fda58:	89 04 24             	mov    %eax,(%esp)
 81fda5b:	e8 10 f5 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fda60:	83 f0 01             	xor    $0x1,%eax
 81fda63:	84 c0                	test   %al,%al
 81fda65:	74 50                	je     81fdab7 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x721>
 81fda67:	8b 95 31 c0 ff ff    	mov    -0x3fcf(%ebp),%edx
 81fda6d:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fda72:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fda79:	00 
 81fda7a:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fda81:	00 
 81fda82:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fda89:	00 
 81fda8a:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fda8e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fda95:	00 
 81fda96:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fda9d:	00 
 81fda9e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fdaa1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fdaa5:	89 04 24             	mov    %eax,(%esp)
 81fdaa8:	e8 cb 5e 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fdaad:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fdab2:	e9 e8 09 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fdab7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdaba:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdac0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81fdac3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fdac6:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fdacb:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fdacf:	3c 23                	cmp    $0x23,%al
 81fdad1:	76 50                	jbe    81fdb23 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x78d>
 81fdad3:	8b 95 31 c0 ff ff    	mov    -0x3fcf(%ebp),%edx
 81fdad9:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fdade:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fdae5:	00 
 81fdae6:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fdaed:	00 
 81fdaee:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fdaf5:	00 
 81fdaf6:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fdafa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fdb01:	00 
 81fdb02:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fdb09:	00 
 81fdb0a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fdb0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fdb11:	89 04 24             	mov    %eax,(%esp)
 81fdb14:	e8 5f 5e 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fdb19:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fdb1e:	e9 7c 09 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fdb23:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdb26:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdb2c:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fdb2f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdb32:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fdb37:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 81fdb3b:	3c ff                	cmp    $0xff,%al
 81fdb3d:	0f 85 02 01 00 00    	jne    81fdc45 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x8af>
 81fdb43:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdb46:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdb4c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81fdb4f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fdb52:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fdb57:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fdb5b:	84 c0                	test   %al,%al
 81fdb5d:	0f 85 e2 00 00 00    	jne    81fdc45 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x8af>
 81fdb63:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdb66:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdb6c:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fdb6f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdb72:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fdb77:	8b 40 09             	mov    0x9(%eax),%eax
 81fdb7a:	89 c3                	mov    %eax,%ebx
 81fdb7c:	e8 1a e6 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 81fdb81:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fdb85:	89 04 24             	mov    %eax,(%esp)
 81fdb88:	e8 57 22 16 00       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 81fdb8d:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81fdb90:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81fdb94:	75 2b                	jne    81fdbc1 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x82b>
 81fdb96:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fdb9d:	00 
 81fdb9e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fdba5:	00 
 81fdba6:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fdbad:	08 
 81fdbae:	c7 04 24 32 90 00 00 	movl   $0x9032,(%esp)
 81fdbb5:	e8 1d 2d 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fdbba:	89 c3                	mov    %eax,%ebx
 81fdbbc:	e9 de 08 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fdbc1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81fdbc4:	89 04 24             	mov    %eax,(%esp)
 81fdbc7:	e8 2a c4 f7 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 81fdbcc:	89 c3                	mov    %eax,%ebx
 81fdbce:	e8 c8 e5 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 81fdbd3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fdbd7:	89 04 24             	mov    %eax,(%esp)
 81fdbda:	e8 53 1e 16 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81fdbdf:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81fdbe2:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 81fdbe6:	74 1d                	je     81fdc05 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x86f>
 81fdbe8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81fdbeb:	8b 00                	mov    (%eax),%eax
 81fdbed:	83 c0 10             	add    $0x10,%eax
 81fdbf0:	8b 10                	mov    (%eax),%edx
 81fdbf2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81fdbf5:	89 04 24             	mov    %eax,(%esp)
 81fdbf8:	ff d2                	call   *%edx
 81fdbfa:	84 c0                	test   %al,%al
 81fdbfc:	74 07                	je     81fdc05 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x86f>
 81fdbfe:	b8 01 00 00 00       	mov    $0x1,%eax
 81fdc03:	eb 05                	jmp    81fdc0a <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x874>
 81fdc05:	b8 00 00 00 00       	mov    $0x0,%eax
 81fdc0a:	84 c0                	test   %al,%al
 81fdc0c:	74 37                	je     81fdc45 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x8af>
 81fdc0e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81fdc11:	89 04 24             	mov    %eax,(%esp)
 81fdc14:	e8 a3 27 f8 ff       	call   81803bc <_ZNK10CEquipItem19getAvatarOptionSizeEv>
 81fdc19:	89 04 24             	mov    %eax,(%esp)
 81fdc1c:	e8 66 3f 4b 00       	call   86b1b87 <_Z12get_rand_inti>
 81fdc21:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81fdc24:	83 7d d0 63          	cmpl   $0x63,-0x30(%ebp)
 81fdc28:	7f 1b                	jg     81fdc45 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x8af>
 81fdc2a:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fdc2d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81fdc30:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fdc36:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fdc39:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81fdc3c:	81 ea c0 3f 00 00    	sub    $0x3fc0,%edx
 81fdc42:	88 42 07             	mov    %al,0x7(%edx)
 81fdc45:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81fdc4c:	e9 ce 00 00 00       	jmp    81fdd1f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x989>
 81fdc51:	8b 5d c0             	mov    -0x40(%ebp),%ebx
 81fdc54:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81fdc57:	8d 8d f8 bf ff ff    	lea    -0x4008(%ebp),%ecx
 81fdc5d:	89 d0                	mov    %edx,%eax
 81fdc5f:	c1 e0 02             	shl    $0x2,%eax
 81fdc62:	01 d0                	add    %edx,%eax
 81fdc64:	69 d3 cf 01 00 00    	imul   $0x1cf,%ebx,%edx
 81fdc6a:	01 d0                	add    %edx,%eax
 81fdc6c:	83 c0 30             	add    $0x30,%eax
 81fdc6f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdc72:	83 c0 0e             	add    $0xe,%eax
 81fdc75:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fdc79:	8b 45 10             	mov    0x10(%ebp),%eax
 81fdc7c:	89 04 24             	mov    %eax,(%esp)
 81fdc7f:	e8 fa f5 38 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81fdc84:	83 f0 01             	xor    $0x1,%eax
 81fdc87:	84 c0                	test   %al,%al
 81fdc89:	74 2b                	je     81fdcb6 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x920>
 81fdc8b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fdc92:	00 
 81fdc93:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fdc9a:	00 
 81fdc9b:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fdca2:	08 
 81fdca3:	c7 04 24 45 90 00 00 	movl   $0x9045,(%esp)
 81fdcaa:	e8 28 2c 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fdcaf:	89 c3                	mov    %eax,%ebx
 81fdcb1:	e9 e9 07 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fdcb6:	8b 5d c0             	mov    -0x40(%ebp),%ebx
 81fdcb9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81fdcbc:	8d 8d f8 bf ff ff    	lea    -0x4008(%ebp),%ecx
 81fdcc2:	89 d0                	mov    %edx,%eax
 81fdcc4:	c1 e0 02             	shl    $0x2,%eax
 81fdcc7:	01 d0                	add    %edx,%eax
 81fdcc9:	69 d3 cf 01 00 00    	imul   $0x1cf,%ebx,%edx
 81fdccf:	01 d0                	add    %edx,%eax
 81fdcd1:	83 c0 30             	add    $0x30,%eax
 81fdcd4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdcd7:	83 c0 12             	add    $0x12,%eax
 81fdcda:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fdcde:	8b 45 10             	mov    0x10(%ebp),%eax
 81fdce1:	89 04 24             	mov    %eax,(%esp)
 81fdce4:	e8 87 f2 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fdce9:	83 f0 01             	xor    $0x1,%eax
 81fdcec:	84 c0                	test   %al,%al
 81fdcee:	74 2b                	je     81fdd1b <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x985>
 81fdcf0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fdcf7:	00 
 81fdcf8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fdcff:	00 
 81fdd00:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fdd07:	08 
 81fdd08:	c7 04 24 46 90 00 00 	movl   $0x9046,(%esp)
 81fdd0f:	e8 c3 2b 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fdd14:	89 c3                	mov    %eax,%ebx
 81fdd16:	e9 84 07 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fdd1b:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 81fdd1f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdd22:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdd28:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81fdd2b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fdd2e:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fdd33:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fdd37:	0f b6 c0             	movzbl %al,%eax
 81fdd3a:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81fdd3d:	0f 9f c0             	setg   %al
 81fdd40:	84 c0                	test   %al,%al
 81fdd42:	0f 85 09 ff ff ff    	jne    81fdc51 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x8bb>
 81fdd48:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fdd4b:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fdd51:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fdd57:	81 c2 e0 00 00 00    	add    $0xe0,%edx
 81fdd5d:	01 d0                	add    %edx,%eax
 81fdd5f:	83 c0 0d             	add    $0xd,%eax
 81fdd62:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fdd66:	8b 45 10             	mov    0x10(%ebp),%eax
 81fdd69:	89 04 24             	mov    %eax,(%esp)
 81fdd6c:	e8 ff f1 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fdd71:	83 f0 01             	xor    $0x1,%eax
 81fdd74:	84 c0                	test   %al,%al
 81fdd76:	75 1c                	jne    81fdd94 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x9fe>
 81fdd78:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdd7b:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdd81:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fdd84:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdd87:	2d 10 3f 00 00       	sub    $0x3f10,%eax
 81fdd8c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fdd90:	3c 23                	cmp    $0x23,%al
 81fdd92:	76 07                	jbe    81fdd9b <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xa05>
 81fdd94:	b8 01 00 00 00       	mov    $0x1,%eax
 81fdd99:	eb 05                	jmp    81fdda0 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xa0a>
 81fdd9b:	b8 00 00 00 00       	mov    $0x0,%eax
 81fdda0:	84 c0                	test   %al,%al
 81fdda2:	74 50                	je     81fddf4 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xa5e>
 81fdda4:	8b 95 31 c0 ff ff    	mov    -0x3fcf(%ebp),%edx
 81fddaa:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fddaf:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fddb6:	00 
 81fddb7:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fddbe:	00 
 81fddbf:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fddc6:	00 
 81fddc7:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fddcb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fddd2:	00 
 81fddd3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fddda:	00 
 81fdddb:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fddde:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fdde2:	89 04 24             	mov    %eax,(%esp)
 81fdde5:	e8 8e 5b 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fddea:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fddef:	e9 ab 06 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fddf4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81fddfb:	e9 30 01 00 00       	jmp    81fdf30 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xb9a>
 81fde00:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fde03:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 81fde06:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fde0c:	83 c1 16             	add    $0x16,%ecx
 81fde0f:	c1 e1 03             	shl    $0x3,%ecx
 81fde12:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fde18:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81fde1b:	83 c2 30             	add    $0x30,%edx
 81fde1e:	01 d0                	add    %edx,%eax
 81fde20:	83 c0 0e             	add    $0xe,%eax
 81fde23:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fde27:	8b 45 10             	mov    0x10(%ebp),%eax
 81fde2a:	89 04 24             	mov    %eax,(%esp)
 81fde2d:	e8 b6 d8 02 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 81fde32:	83 f0 01             	xor    $0x1,%eax
 81fde35:	84 c0                	test   %al,%al
 81fde37:	74 2b                	je     81fde64 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xace>
 81fde39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fde40:	00 
 81fde41:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fde48:	00 
 81fde49:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fde50:	08 
 81fde51:	c7 04 24 53 90 00 00 	movl   $0x9053,(%esp)
 81fde58:	e8 7a 2a 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fde5d:	89 c3                	mov    %eax,%ebx
 81fde5f:	e9 3b 06 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fde64:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fde67:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 81fde6a:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fde70:	83 c1 16             	add    $0x16,%ecx
 81fde73:	c1 e1 03             	shl    $0x3,%ecx
 81fde76:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fde7c:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81fde7f:	83 c2 30             	add    $0x30,%edx
 81fde82:	01 d0                	add    %edx,%eax
 81fde84:	83 c0 12             	add    $0x12,%eax
 81fde87:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fde8b:	8b 45 10             	mov    0x10(%ebp),%eax
 81fde8e:	89 04 24             	mov    %eax,(%esp)
 81fde91:	e8 1a f2 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81fde96:	83 f0 01             	xor    $0x1,%eax
 81fde99:	84 c0                	test   %al,%al
 81fde9b:	74 2b                	je     81fdec8 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xb32>
 81fde9d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fdea4:	00 
 81fdea5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fdeac:	00 
 81fdead:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fdeb4:	08 
 81fdeb5:	c7 04 24 54 90 00 00 	movl   $0x9054,(%esp)
 81fdebc:	e8 16 2a 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fdec1:	89 c3                	mov    %eax,%ebx
 81fdec3:	e9 d7 05 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fdec8:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81fdecb:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 81fdece:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fded4:	83 c1 16             	add    $0x16,%ecx
 81fded7:	c1 e1 03             	shl    $0x3,%ecx
 81fdeda:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fdee0:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81fdee3:	83 c2 30             	add    $0x30,%edx
 81fdee6:	01 d0                	add    %edx,%eax
 81fdee8:	83 c0 14             	add    $0x14,%eax
 81fdeeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fdeef:	8b 45 10             	mov    0x10(%ebp),%eax
 81fdef2:	89 04 24             	mov    %eax,(%esp)
 81fdef5:	e8 b6 f1 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81fdefa:	83 f0 01             	xor    $0x1,%eax
 81fdefd:	84 c0                	test   %al,%al
 81fdeff:	74 2b                	je     81fdf2c <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xb96>
 81fdf01:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fdf08:	00 
 81fdf09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fdf10:	00 
 81fdf11:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fdf18:	08 
 81fdf19:	c7 04 24 55 90 00 00 	movl   $0x9055,(%esp)
 81fdf20:	e8 b2 29 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fdf25:	89 c3                	mov    %eax,%ebx
 81fdf27:	e9 73 05 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fdf2c:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 81fdf30:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdf33:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdf39:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81fdf3c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fdf3f:	2d 10 3f 00 00       	sub    $0x3f10,%eax
 81fdf44:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fdf48:	0f b6 c0             	movzbl %al,%eax
 81fdf4b:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 81fdf4e:	0f 9f c0             	setg   %al
 81fdf51:	84 c0                	test   %al,%al
 81fdf53:	0f 85 a7 fe ff ff    	jne    81fde00 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xa6a>
 81fdf59:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81fdf60:	e9 01 01 00 00       	jmp    81fe066 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xcd0>
 81fdf65:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81fdf68:	83 c0 01             	add    $0x1,%eax
 81fdf6b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81fdf6e:	e9 c6 00 00 00       	jmp    81fe039 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xca3>
 81fdf73:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdf76:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81fdf79:	83 c2 16             	add    $0x16,%edx
 81fdf7c:	c1 e2 03             	shl    $0x3,%edx
 81fdf7f:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdf85:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fdf88:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fdf8b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdf8e:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fdf93:	8b 50 0e             	mov    0xe(%eax),%edx
 81fdf96:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdf99:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 81fdf9c:	83 c1 16             	add    $0x16,%ecx
 81fdf9f:	c1 e1 03             	shl    $0x3,%ecx
 81fdfa2:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdfa8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdfab:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fdfae:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdfb1:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fdfb6:	8b 40 0e             	mov    0xe(%eax),%eax
 81fdfb9:	39 c2                	cmp    %eax,%edx
 81fdfbb:	75 78                	jne    81fe035 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xc9f>
 81fdfbd:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdfc0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81fdfc3:	83 c2 16             	add    $0x16,%edx
 81fdfc6:	c1 e2 03             	shl    $0x3,%edx
 81fdfc9:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdfcf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fdfd2:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81fdfd5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fdfd8:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fdfdd:	0f b7 50 12          	movzwl 0x12(%eax),%edx
 81fdfe1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fdfe4:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 81fdfe7:	83 c1 16             	add    $0x16,%ecx
 81fdfea:	c1 e1 03             	shl    $0x3,%ecx
 81fdfed:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fdff3:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdff6:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fdff9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fdffc:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fe001:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81fe005:	66 39 c2             	cmp    %ax,%dx
 81fe008:	75 2b                	jne    81fe035 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xc9f>
 81fe00a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe011:	00 
 81fe012:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fe019:	00 
 81fe01a:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fe021:	08 
 81fe022:	c7 04 24 5e 90 00 00 	movl   $0x905e,(%esp)
 81fe029:	e8 a9 28 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fe02e:	89 c3                	mov    %eax,%ebx
 81fe030:	e9 6a 04 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fe035:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81fe039:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fe03c:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fe042:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81fe045:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fe048:	2d 10 3f 00 00       	sub    $0x3f10,%eax
 81fe04d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fe051:	0f b6 c0             	movzbl %al,%eax
 81fe054:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81fe057:	0f 9f c0             	setg   %al
 81fe05a:	84 c0                	test   %al,%al
 81fe05c:	0f 85 11 ff ff ff    	jne    81fdf73 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xbdd>
 81fe062:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 81fe066:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fe069:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fe06f:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fe072:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fe075:	2d 10 3f 00 00       	sub    $0x3f10,%eax
 81fe07a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fe07e:	0f b6 c0             	movzbl %al,%eax
 81fe081:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 81fe084:	0f 9f c0             	setg   %al
 81fe087:	84 c0                	test   %al,%al
 81fe089:	0f 85 d6 fe ff ff    	jne    81fdf65 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xbcf>
 81fe08f:	e8 54 6b 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81fe094:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe097:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe09b:	89 04 24             	mov    %eax,(%esp)
 81fe09e:	e8 b5 c2 3c 00       	call   85ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>
 81fe0a3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81fe0a6:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81fe0aa:	74 7d                	je     81fe129 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xd93>
 81fe0ac:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81fe0af:	89 04 24             	mov    %eax,(%esp)
 81fe0b2:	e8 2d 65 03 00       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 81fe0b7:	84 c0                	test   %al,%al
 81fe0b9:	74 6e                	je     81fe129 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xd93>
 81fe0bb:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fe0be:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fe0c4:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81fe0c7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fe0ca:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fe0cf:	8b 40 09             	mov    0x9(%eax),%eax
 81fe0d2:	3d ad ca 01 00       	cmp    $0x1caad,%eax
 81fe0d7:	75 50                	jne    81fe129 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xd93>
 81fe0d9:	8b 95 31 c0 ff ff    	mov    -0x3fcf(%ebp),%edx
 81fe0df:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fe0e4:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fe0eb:	00 
 81fe0ec:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fe0f3:	00 
 81fe0f4:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fe0fb:	00 
 81fe0fc:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fe100:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe107:	00 
 81fe108:	c7 44 24 08 e7 00 00 	movl   $0xe7,0x8(%esp)
 81fe10f:	00 
 81fe110:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe113:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe117:	89 04 24             	mov    %eax,(%esp)
 81fe11a:	e8 59 58 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fe11f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fe124:	e9 76 03 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fe129:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fe12c:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fe132:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81fe135:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81fe138:	2d c0 3f 00 00       	sub    $0x3fc0,%eax
 81fe13d:	8b 40 09             	mov    0x9(%eax),%eax
 81fe140:	89 85 60 80 ff ff    	mov    %eax,-0x7fa0(%ebp)
 81fe146:	0f b6 85 07 c0 ff ff 	movzbl -0x3ff9(%ebp),%eax
 81fe14d:	0f b6 c0             	movzbl %al,%eax
 81fe150:	89 85 64 80 ff ff    	mov    %eax,-0x7f9c(%ebp)
 81fe156:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe159:	89 04 24             	mov    %eax,(%esp)
 81fe15c:	e8 c7 2e f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fe161:	89 c7                	mov    %eax,%edi
 81fe163:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe166:	89 04 24             	mov    %eax,(%esp)
 81fe169:	e8 e0 da ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81fe16e:	89 c6                	mov    %eax,%esi
 81fe170:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe173:	89 04 24             	mov    %eax,(%esp)
 81fe176:	e8 f3 c1 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fe17b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fe182:	00 
 81fe183:	89 04 24             	mov    %eax,(%esp)
 81fe186:	e8 c0 ae f0 ff       	call   810904b <_Z14NumberToStringji>
 81fe18b:	89 c3                	mov    %eax,%ebx
 81fe18d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe194:	00 
 81fe195:	c7 44 24 08 70 90 00 	movl   $0x9070,0x8(%esp)
 81fe19c:	00 
 81fe19d:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fe1a4:	08 
 81fe1a5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81fe1a8:	89 04 24             	mov    %eax,(%esp)
 81fe1ab:	e8 68 15 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fe1b0:	8b 85 60 80 ff ff    	mov    -0x7fa0(%ebp),%eax
 81fe1b6:	89 44 24 18          	mov    %eax,0x18(%esp)
 81fe1ba:	8b 95 64 80 ff ff    	mov    -0x7f9c(%ebp),%edx
 81fe1c0:	89 54 24 14          	mov    %edx,0x14(%esp)
 81fe1c4:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81fe1c8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fe1cc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fe1d0:	c7 44 24 04 b4 27 bc 	movl   $0x8bc27b4,0x4(%esp)
 81fe1d7:	08 
 81fe1d8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81fe1db:	89 04 24             	mov    %eax,(%esp)
 81fe1de:	e8 a5 15 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fe1e3:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 81fe1e7:	0f b6 85 2e c0 ff ff 	movzbl -0x3fd2(%ebp),%eax
 81fe1ee:	0f b6 c0             	movzbl %al,%eax
 81fe1f1:	3b 45 c0             	cmp    -0x40(%ebp),%eax
 81fe1f4:	0f 9f c0             	setg   %al
 81fe1f7:	84 c0                	test   %al,%al
 81fe1f9:	0f 85 33 f7 ff ff    	jne    81fd932 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x59c>
 81fe1ff:	e8 e2 43 f6 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81fe204:	c7 44 24 0c 11 00 00 	movl   $0x11,0xc(%esp)
 81fe20b:	00 
 81fe20c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fe213:	00 
 81fe214:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe217:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe21b:	89 04 24             	mov    %eax,(%esp)
 81fe21e:	e8 95 04 f7 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81fe223:	84 c0                	test   %al,%al
 81fe225:	74 56                	je     81fe27d <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xee7>
 81fe227:	0f b6 85 07 c0 ff ff 	movzbl -0x3ff9(%ebp),%eax
 81fe22e:	0f be c8             	movsbl %al,%ecx
 81fe231:	8b 95 31 c0 ff ff    	mov    -0x3fcf(%ebp),%edx
 81fe237:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fe23c:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81fe240:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fe247:	00 
 81fe248:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fe24f:	00 
 81fe250:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fe254:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe25b:	00 
 81fe25c:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 81fe263:	00 
 81fe264:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe267:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe26b:	89 04 24             	mov    %eax,(%esp)
 81fe26e:	e8 05 57 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fe273:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fe278:	e9 22 02 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fe27d:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81fe282:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 81fe289:	00 
 81fe28a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe28d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe291:	89 04 24             	mov    %eax,(%esp)
 81fe294:	e8 69 a7 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81fe299:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81fe29c:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 81fe2a0:	74 63                	je     81fe305 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xf6f>
 81fe2a2:	8b 9d 31 c0 ff ff    	mov    -0x3fcf(%ebp),%ebx
 81fe2a8:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81fe2ad:	8b 55 bc             	mov    -0x44(%ebp),%edx
 81fe2b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe2b4:	89 04 24             	mov    %eax,(%esp)
 81fe2b7:	e8 e6 9e 08 00       	call   82881a2 <_ZN21CSecu_ProtectionField14GetCashShopErrEi>
 81fe2bc:	0f b7 d0             	movzwl %ax,%edx
 81fe2bf:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fe2c4:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fe2cb:	00 
 81fe2cc:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fe2d3:	00 
 81fe2d4:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fe2db:	00 
 81fe2dc:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81fe2e0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe2e7:	00 
 81fe2e8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fe2ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe2ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe2f3:	89 04 24             	mov    %eax,(%esp)
 81fe2f6:	e8 7d 56 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fe2fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fe300:	e9 9a 01 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fe305:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fe30b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fe30f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe312:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe316:	8b 45 08             	mov    0x8(%ebp),%eax
 81fe319:	89 04 24             	mov    %eax,(%esp)
 81fe31c:	e8 97 01 00 00       	call   81fe4b8 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM>
 81fe321:	84 c0                	test   %al,%al
 81fe323:	74 4e                	je     81fe373 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0xfdd>
 81fe325:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fe32a:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fe331:	00 
 81fe332:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fe339:	00 
 81fe33a:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fe341:	00 
 81fe342:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81fe349:	00 
 81fe34a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe351:	00 
 81fe352:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81fe359:	00 
 81fe35a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe35d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe361:	89 04 24             	mov    %eax,(%esp)
 81fe364:	e8 0f 56 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fe369:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fe36e:	e9 2c 01 00 00       	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fe373:	0f b6 85 07 c0 ff ff 	movzbl -0x3ff9(%ebp),%eax
 81fe37a:	3c 01                	cmp    $0x1,%al
 81fe37c:	0f 85 b1 00 00 00    	jne    81fe433 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x109d>
 81fe382:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fe388:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe38c:	8d 85 70 80 ff ff    	lea    -0x7f90(%ebp),%eax
 81fe392:	89 04 24             	mov    %eax,(%esp)
 81fe395:	e8 54 95 03 00       	call   82378ee <_ZN23MSG_CHECK_MAIL_RECEIVER3setILNS_22ENUM_MAILBOX_CHECKTYPEE1E21MSG_BUY_CERASHOP_ITEMEEvRKT0_>
 81fe39a:	8d 85 70 80 ff ff    	lea    -0x7f90(%ebp),%eax
 81fe3a0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fe3a4:	8d 85 f8 bf ff ff    	lea    -0x4008(%ebp),%eax
 81fe3aa:	83 c0 10             	add    $0x10,%eax
 81fe3ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe3b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe3b4:	89 04 24             	mov    %eax,(%esp)
 81fe3b7:	e8 a8 70 35 00       	call   8555464 <_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>
 81fe3bc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81fe3bf:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81fe3c3:	74 67                	je     81fe42c <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1096>
 81fe3c5:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 81fe3c8:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81fe3cf:	ff 
 81fe3d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe3d3:	89 04 24             	mov    %eax,(%esp)
 81fe3d6:	e8 c5 fb 44 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81fe3db:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81fe3df:	89 44 24 14          	mov    %eax,0x14(%esp)
 81fe3e3:	c7 44 24 10 1c 28 bc 	movl   $0x8bc281c,0x10(%esp)
 81fe3ea:	08 
 81fe3eb:	c7 44 24 0c c2 90 00 	movl   $0x90c2,0xc(%esp)
 81fe3f2:	00 
 81fe3f3:	c7 44 24 08 40 fb bc 	movl   $0x8bcfb40,0x8(%esp)
 81fe3fa:	08 
 81fe3fb:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81fe402:	08 
 81fe403:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81fe40a:	e8 fb 57 8d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81fe40f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81fe412:	0f b7 c0             	movzwl %ax,%eax
 81fe415:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fe419:	c7 44 24 04 43 00 00 	movl   $0x43,0x4(%esp)
 81fe420:	00 
 81fe421:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe424:	89 04 24             	mov    %eax,(%esp)
 81fe427:	e8 e4 dc 47 00       	call   867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>
 81fe42c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fe431:	eb 6c                	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fe433:	a1 60 f7 41 09       	mov    0x941f760,%eax
 81fe438:	8d 95 f8 bf ff ff    	lea    -0x4008(%ebp),%edx
 81fe43e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fe442:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe445:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe449:	89 04 24             	mov    %eax,(%esp)
 81fe44c:	e8 7f e0 34 00       	call   854c4d0 <_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM>
 81fe451:	84 c0                	test   %al,%al
 81fe453:	74 07                	je     81fe45c <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x10c6>
 81fe455:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe45a:	eb 24                	jmp    81fe480 <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x10ea>
 81fe45c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe463:	00 
 81fe464:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fe46b:	00 
 81fe46c:	c7 44 24 04 40 fb bc 	movl   $0x8bcfb40,0x4(%esp)
 81fe473:	08 
 81fe474:	c7 04 24 ce 90 00 00 	movl   $0x90ce,(%esp)
 81fe47b:	e8 57 24 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fe480:	89 c3                	mov    %eax,%ebx
 81fe482:	eb 1b                	jmp    81fe49f <_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf+0x1109>
 81fe484:	89 d3                	mov    %edx,%ebx
 81fe486:	89 c6                	mov    %eax,%esi
 81fe488:	8d 45 80             	lea    -0x80(%ebp),%eax
 81fe48b:	89 04 24             	mov    %eax,(%esp)
 81fe48e:	e8 ed f9 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fe493:	89 f0                	mov    %esi,%eax
 81fe495:	89 da                	mov    %ebx,%edx
 81fe497:	89 04 24             	mov    %eax,(%esp)
 81fe49a:	e8 b1 52 8e 00       	call   8ae3750 <_Unwind_Resume>
 81fe49f:	8d 45 80             	lea    -0x80(%ebp),%eax
 81fe4a2:	89 04 24             	mov    %eax,(%esp)
 81fe4a5:	e8 d6 f9 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fe4aa:	89 d8                	mov    %ebx,%eax
 81fe4ac:	81 c4 bc 7f 00 00    	add    $0x7fbc,%esp
 81fe4b2:	5b                   	pop    %ebx
 81fe4b3:	5e                   	pop    %esi
 81fe4b4:	5f                   	pop    %edi
 81fe4b5:	5d                   	pop    %ebp
 81fe4b6:	c3                   	ret
 81fe4b7:	90                   	nop

```

```c
// Dispatcher_BuyCeraShopItem::dispatch_sig @ 0x81fd396

/* Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BuyCeraShopItem::dispatch_sig
          (Dispatcher_BuyCeraShopItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  CPrivateStoreMgr *pCVar8;
  GameWorld *pGVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  CDataManager *this_00;
  undefined4 uVar13;
  ServiceRestrictManager *pSVar14;
  MSG_CHECK_MAIL_RECEIVER local_7f94 [16264];
  MSG_BUY_CERASHOP_ITEM local_400c [13];
  short local_3fff;
  byte local_3ffd;
  char acStack_3ffc [38];
  byte local_3fd6;
  uchar auStack_3fd5 [2];
  uint local_3fd3;
  byte bStack_3fcf;
  ulong uStack_3fce;
  ushort auStack_3fca [85];
  byte abStack_3f1f [16023];
  int local_88;
  PacketGuard local_84 [12];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  int local_48;
  int local_44;
  CPrivateStore *local_40;
  CCeraShopGoods *local_3c;
  CEquipItem *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  uVar5 = CUser::get_acc_id(param_1);
  uVar6 = NumberToString(uVar5,0);
  cMyTrace::cMyTrace(local_78,
                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)",
                     0x8f66,0);
  cMyTrace::operator()(local_78,"Dispatcher_BuyCeraShopItem(m_id(%s))",uVar6);
  if ((param_1 == (CUser *)0x0) || (cVar3 = CUser::CheckInTrade(param_1), cVar3 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar7 = CUser::get_state(param_1);
  if ((iVar7 < 3) ||
     (iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar7 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar6 = LineFunc(0x8f7b,
                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar6;
  }
  PacketGuard::PacketGuard(local_84);
                    /* try { // try from 081fd48d to 081fe47f has its CatchHandler @ 081fe484 */
  pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,param_1);
  if (cVar3 == '\0') {
    cVar3 = CUser::CheckInTrade(param_1);
    if (cVar3 == '\0') {
      cVar3 = PacketBuf::get_short(param_2,&local_3fff);
      if (cVar3 == '\x01') {
        if ((local_3fff < 0) || (1 < local_3fff)) {
          uVar6 = LineFunc(0x8fad,
                           "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
        else {
          cVar3 = PacketBuf::get_byte(param_2,&local_3ffd);
          if (cVar3 == '\x01') {
            if (local_3ffd == 1) {
              local_88 = 0;
              cVar3 = PacketBuf::get_int(param_2,&local_88);
              if (cVar3 != '\x01') {
                uVar6 = LineFunc(0x8fbb,
                                 "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                goto LAB_081fe49f;
              }
              cVar3 = PacketBuf::get_str(param_2,acStack_3ffc,0x1e,local_88);
              if (cVar3 != '\x01') {
                uVar6 = LineFunc(0x8fbc,
                                 "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                goto LAB_081fe49f;
              }
            }
            if ((local_3ffd == 1) && (local_3fff == 1)) {
              uVar6 = LineFunc(0x8fc2,
                               "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
            else {
              pGVar9 = (GameWorld *)G_GameWorld();
              cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar9);
              if (cVar3 != '\0') {
                pGVar9 = (GameWorld *)G_GameWorld();
                iVar7 = GameWorld::GetChannelType(pGVar9);
                if (iVar7 != 0xf) {
                  WongWork::CCeraShop::ProcessError
                            (GlobalData::s_pCeraShop,param_1,0x3c,0,0,1,1,'\0');
                  uVar6 = 0;
                  goto LAB_081fe49f;
                }
                if (local_3ffd == 1) {
                  WongWork::CCeraShop::ProcessError
                            (GlobalData::s_pCeraShop,param_1,0x3c,0,0,1,1,'\0');
                  uVar6 = 0;
                  goto LAB_081fe49f;
                }
              }
              uVar5 = (uint)local_3ffd;
              uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              uVar11 = CUser::get_acc_id(param_1);
              uVar12 = NumberToString(uVar11,0);
              cMyTrace::cMyTrace(local_68,
                                 "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x9004,0);
              cMyTrace::operator()
                        (local_68,
                         "NEXON BILLING : BuyCeraShopItem m_id(%s), charac_no(%d), charac_name(%s), buytype(%d)"
                         ,uVar12,uVar10,uVar6,uVar5);
              cVar3 = PacketBuf::get_byte(param_2,&local_3fd6);
              if (((cVar3 == '\x01') && (local_3fd6 != 0)) && (local_3fd6 < 0x24)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                WongWork::CCeraShop::ProcessError
                          (GlobalData::s_pCeraShop,param_1,1,0,local_3fd3,1,1,'\0');
                uVar6 = 0;
              }
              else {
                for (local_44 = 0; local_44 < (int)(uint)local_3fd6; local_44 = local_44 + 1) {
                  cVar3 = PacketBuf::get_byte(param_2,auStack_3fd5 + local_44 * 0x1cf);
                  if (cVar3 != '\x01') {
                    uVar6 = LineFunc(0x9017,
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    goto LAB_081fe49f;
                  }
                  cVar3 = PacketBuf::get_byte(param_2,(char *)(auStack_3fd5 + local_44 * 0x1cf + 1))
                  ;
                  if (cVar3 != '\x01') {
                    uVar6 = LineFunc(0x9018,
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    goto LAB_081fe49f;
                  }
                  cVar3 = PacketBuf::get_int(param_2,(uint *)((int)&local_3fd3 + local_44 * 0x1cf));
                  if (cVar3 != '\x01') {
                    uVar6 = LineFunc(0x9019,
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    goto LAB_081fe49f;
                  }
                  cVar3 = PacketBuf::get_byte(param_2,&bStack_3fcf + local_44 * 0x1cf);
                  if (cVar3 != '\x01') {
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,1,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                    goto LAB_081fe49f;
                  }
                  if (0x23 < (&bStack_3fcf)[local_44 * 0x1cf]) {
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,1,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                    goto LAB_081fe49f;
                  }
                  if ((auStack_3fd5[local_44 * 0x1cf] == 0xff) &&
                     ((&bStack_3fcf)[local_44 * 0x1cf] == 0)) {
                    iVar7 = G_CDataManager();
                    local_3c = (CCeraShopGoods *)CDataManager::FindGoods(iVar7);
                    if (local_3c == (CCeraShopGoods *)0x0) {
                      uVar6 = LineFunc(0x9032,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                    iVar7 = CCeraShopGoods::GetItemIdx(local_3c);
                    this_00 = (CDataManager *)G_CDataManager();
                    local_38 = (CEquipItem *)CDataManager::find_item(this_00,iVar7);
                    if ((local_38 == (CEquipItem *)0x0) ||
                       (cVar3 = (**(code **)(*(int *)local_38 + 0x10))(local_38), cVar3 == '\0')) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      iVar7 = CEquipItem::getAvatarOptionSize(local_38);
                      local_34 = get_rand_int(iVar7);
                      if (local_34 < 100) {
                        auStack_3fd5[local_44 * 0x1cf] = (uchar)local_34;
                      }
                    }
                  }
                  for (local_30 = 0; local_30 < (int)(uint)(&bStack_3fcf)[local_44 * 0x1cf];
                      local_30 = local_30 + 1) {
                    cVar3 = PacketBuf::get_int(param_2,(ulong *)((int)auStack_3fca +
                                                                local_30 * 5 + local_44 * 0x1cf + -4
                                                                ));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9045,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                    cVar3 = PacketBuf::get_byte(param_2,(uchar *)((int)auStack_3fca +
                                                                 local_30 * 5 + local_44 * 0x1cf));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9046,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                  }
                  cVar3 = PacketBuf::get_byte(param_2,abStack_3f1f + local_44 * 0x1cf);
                  if ((cVar3 == '\x01') && (abStack_3f1f[local_44 * 0x1cf] < 0x24)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,1,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                    goto LAB_081fe49f;
                  }
                  for (local_2c = 0; local_2c < (int)(uint)abStack_3f1f[local_44 * 0x1cf];
                      local_2c = local_2c + 1) {
                    cVar3 = PacketBuf::get_item_idx
                                      (param_2,(ulong *)((int)auStack_3fca +
                                                        (local_2c + 0x16) * 8 + local_44 * 0x1cf +
                                                        -4));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9053,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                    cVar3 = PacketBuf::get_short
                                      (param_2,(ushort *)
                                               ((int)auStack_3fca +
                                               (local_2c + 0x16) * 8 + local_44 * 0x1cf));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9054,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                    cVar3 = PacketBuf::get_short
                                      (param_2,(ushort *)
                                               ((int)auStack_3fca +
                                               (local_2c + 0x16) * 8 + local_44 * 0x1cf + 2));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9055,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                  }
                  for (local_28 = 0; iVar7 = local_28,
                      local_28 < (int)(uint)abStack_3f1f[local_44 * 0x1cf]; local_28 = local_28 + 1)
                  {
                    while (iVar2 = iVar7, local_24 = iVar2 + 1,
                          local_24 < (int)(uint)abStack_3f1f[local_44 * 0x1cf]) {
                      iVar7 = local_24;
                      if ((*(int *)((int)auStack_3fca +
                                   (local_28 + 0x16) * 8 + local_44 * 0x1cf + -4) ==
                           *(int *)((int)auStack_3fca + (iVar2 + 0x17) * 8 + local_44 * 0x1cf + -4))
                         && (iVar7 = local_24,
                            *(short *)((int)auStack_3fca + (local_28 + 0x16) * 8 + local_44 * 0x1cf)
                            == *(short *)((int)auStack_3fca + (iVar2 + 0x17) * 8 + local_44 * 0x1cf)
                            )) {
                        uVar6 = LineFunc(0x905e,
                                         "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        goto LAB_081fe49f;
                      }
                    }
                  }
                  pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
                  local_40 = (CPrivateStore *)
                             private_store::CPrivateStoreMgr::FindStoreSeller(pCVar8,param_1);
                  if (((local_40 != (CPrivateStore *)0x0) &&
                      (cVar3 = private_store::CPrivateStore::isDollCreated(local_40), cVar3 != '\0')
                      ) && (*(int *)((int)&local_3fd3 + local_44 * 0x1cf) == 0x1caad)) {
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,0xe7,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                    goto LAB_081fe49f;
                  }
                  uVar6 = *(undefined4 *)((int)&local_3fd3 + local_44 * 0x1cf);
                  uVar5 = (uint)local_3ffd;
                  uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  uVar11 = CUser::get_acc_id(param_1);
                  uVar13 = NumberToString(uVar11,0);
                  cMyTrace::cMyTrace(local_58,
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x9070,0);
                  cMyTrace::operator()
                            (local_58,
                             "NEXON BILLING : BuyCeraShopItem m_id(%s), charac_no(%d), charac_name(%s), buytype(%d), product_no(%d)"
                             ,uVar13,uVar12,uVar10,uVar5,uVar6);
                }
                pSVar14 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
                cVar3 = ServiceRestrictManager::isRestricted(pSVar14,param_1,1,0x11);
                if (cVar3 == '\0') {
                  local_48 = CSecu_ProtectionField::Check
                                       (GlobalData::s_pSecuProtectionField,param_1,0x38);
                  if (local_48 == 0) {
                    cVar3 = useCountDownCoinInFreeCoinDungeon(this,param_1,local_400c);
                    if (cVar3 == '\0') {
                      if (local_3ffd == 1) {
                        MSG_CHECK_MAIL_RECEIVER::
                        set<(MSG_CHECK_MAIL_RECEIVER::ENUM_MAILBOX_CHECKTYPE)1,MSG_BUY_CERASHOP_ITEM>
                                  (local_7f94,local_400c);
                        uVar5 = WongWork::CMailBoxHelper::ReqDBCheckReceiver
                                          (param_1,acStack_3ffc,local_7f94);
                        local_20 = uVar5;
                        if (uVar5 != 0) {
                          uVar6 = CUser::get_charac_no(param_1,-1);
                          LogManager::logFormat
                                    (1,"PacketDispatcher_Impl_1.cpp",
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x90c2,"[ITEM_GIFT] Fail charac_no[%u] error_code[%d]",uVar6,
                                     uVar5);
                          CUser::SendCmdErrorPacket2Byte(param_1,0x43,local_20 & 0xffff);
                        }
                        uVar6 = 0;
                      }
                      else {
                        cVar3 = ItemVendingMachine::BuyItem
                                          (GlobalData::s_pItemVendingMachine,param_1,local_400c);
                        if (cVar3 == '\0') {
                          uVar6 = LineFunc(0x90ce,
                                           "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                           ,0,0);
                        }
                        else {
                          uVar6 = 0;
                        }
                      }
                    }
                    else {
                      WongWork::CCeraShop::ProcessError
                                (GlobalData::s_pCeraShop,param_1,0x13,0,0,1,1,'\0');
                      uVar6 = 0;
                    }
                  }
                  else {
                    uVar4 = CSecu_ProtectionField::GetCashShopErr
                                      (GlobalData::s_pSecuProtectionField,local_48);
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,uVar4,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                  }
                }
                else {
                  WongWork::CCeraShop::ProcessError
                            (GlobalData::s_pCeraShop,param_1,0xd1,0,local_3fd3,1,1,local_3ffd);
                  uVar6 = 0;
                }
              }
            }
          }
          else {
            uVar6 = LineFunc(0x8fb7,
                             "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
      }
      else {
        uVar6 = LineFunc(0x8fa9,
                         "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      WongWork::CCeraShop::ProcessError(GlobalData::s_pCeraShop,param_1,0x13,0,0,1,1,'\0');
      uVar6 = 0;
    }
  }
  else {
    WongWork::CCeraShop::ProcessError(GlobalData::s_pCeraShop,param_1,0x3c,0,0,1,1,'\0');
    uVar6 = 0;
  }
LAB_081fe49f:
  PacketGuard::~PacketGuard(local_84);
  return uVar6;
}

```

---

## useCountDownCoinInFreeCoinDungeon

```asm
// === 081fe4b8 Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon  [0x081fe4b8-0x81fe577] ===
 81fe4b8:	55                   	push   %ebp
 81fe4b9:	89 e5                	mov    %esp,%ebp
 81fe4bb:	53                   	push   %ebx
 81fe4bc:	83 ec 24             	sub    $0x24,%esp
 81fe4bf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81fe4c3:	75 0a                	jne    81fe4cf <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x17>
 81fe4c5:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe4ca:	e9 a2 00 00 00       	jmp    81fe571 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb9>
 81fe4cf:	8b 45 10             	mov    0x10(%ebp),%eax
 81fe4d2:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 81fe4d6:	3c 01                	cmp    $0x1,%al
 81fe4d8:	74 0a                	je     81fe4e4 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x2c>
 81fe4da:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe4df:	e9 8d 00 00 00       	jmp    81fe571 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb9>
 81fe4e4:	8b 45 10             	mov    0x10(%ebp),%eax
 81fe4e7:	8b 40 39             	mov    0x39(%eax),%eax
 81fe4ea:	89 c3                	mov    %eax,%ebx
 81fe4ec:	e8 aa dc ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 81fe4f1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fe4f5:	89 04 24             	mov    %eax,(%esp)
 81fe4f8:	e8 e7 18 16 00       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 81fe4fd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81fe500:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81fe504:	75 07                	jne    81fe50d <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x55>
 81fe506:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe50b:	eb 64                	jmp    81fe571 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb9>
 81fe50d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81fe510:	89 04 24             	mov    %eax,(%esp)
 81fe513:	e8 de ba f7 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 81fe518:	83 f8 01             	cmp    $0x1,%eax
 81fe51b:	0f 95 c0             	setne  %al
 81fe51e:	84 c0                	test   %al,%al
 81fe520:	74 07                	je     81fe529 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x71>
 81fe522:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe527:	eb 48                	jmp    81fe571 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb9>
 81fe529:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe52c:	89 04 24             	mov    %eax,(%esp)
 81fe52f:	e8 18 6c 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81fe534:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81fe537:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81fe53b:	74 2f                	je     81fe56c <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb4>
 81fe53d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81fe540:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81fe546:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81fe549:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81fe54d:	74 1d                	je     81fe56c <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb4>
 81fe54f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81fe552:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe556:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81fe559:	89 04 24             	mov    %eax,(%esp)
 81fe55c:	e8 39 fe 3b 00       	call   85be39a <_ZN6CParty25checkFreeRevivalConditionEPK8CDungeon>
 81fe561:	84 c0                	test   %al,%al
 81fe563:	74 07                	je     81fe56c <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb4>
 81fe565:	b8 01 00 00 00       	mov    $0x1,%eax
 81fe56a:	eb 05                	jmp    81fe571 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb9>
 81fe56c:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe571:	83 c4 24             	add    $0x24,%esp
 81fe574:	5b                   	pop    %ebx
 81fe575:	5d                   	pop    %ebp
 81fe576:	c3                   	ret
 81fe577:	90                   	nop

```

```c
// Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon @ 0x81fe4b8

/* Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon(CUser*, MSG_BUY_CERASHOP_ITEM
   const&) */

undefined4 __thiscall
Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon
          (Dispatcher_BuyCeraShopItem *this,CUser *param_1,MSG_BUY_CERASHOP_ITEM *param_2)

{
  char cVar1;
  int iVar2;
  CCeraShopGoods *this_00;
  CParty *this_01;
  
  if ((param_1 != (CUser *)0x0) && (param_2[0x36] == (MSG_BUY_CERASHOP_ITEM)0x1)) {
    iVar2 = G_CDataManager();
    this_00 = (CCeraShopGoods *)CDataManager::FindGoods(iVar2);
    if (((this_00 != (CCeraShopGoods *)0x0) &&
        (((iVar2 = CCeraShopGoods::GetItemIdx(this_00), iVar2 == 1 &&
          (this_01 = (CParty *)CUser::GetParty(param_1), this_01 != (CParty *)0x0)) &&
         (*(CDungeon **)(this_01 + 0xcac) != (CDungeon *)0x0)))) &&
       (cVar1 = CParty::checkFreeRevivalCondition(this_01,*(CDungeon **)(this_01 + 0xcac)),
       cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}

```

