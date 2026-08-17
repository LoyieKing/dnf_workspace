# Dispatcher_BuyAutomatItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081fe578 Dispatcher_BuyAutomatItem::dispatch_sig  [0x081fe578-0x81feb11] ===
 81fe578:	55                   	push   %ebp
 81fe579:	89 e5                	mov    %esp,%ebp
 81fe57b:	56                   	push   %esi
 81fe57c:	53                   	push   %ebx
 81fe57d:	81 ec e0 3f 00 00    	sub    $0x3fe0,%esp
 81fe583:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81fe587:	75 5f                	jne    81fe5e8 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x70>
 81fe589:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe590:	00 
 81fe591:	c7 44 24 08 45 91 00 	movl   $0x9145,0x8(%esp)
 81fe598:	00 
 81fe599:	c7 44 24 04 e0 fa bc 	movl   $0x8bcfae0,0x4(%esp)
 81fe5a0:	08 
 81fe5a1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81fe5a4:	89 04 24             	mov    %eax,(%esp)
 81fe5a7:	e8 6c 11 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fe5ac:	c7 44 24 04 4c 28 bc 	movl   $0x8bc284c,0x4(%esp)
 81fe5b3:	08 
 81fe5b4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81fe5b7:	89 04 24             	mov    %eax,(%esp)
 81fe5ba:	e8 c9 11 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fe5bf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe5c6:	00 
 81fe5c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fe5ce:	00 
 81fe5cf:	c7 44 24 04 e0 fa bc 	movl   $0x8bcfae0,0x4(%esp)
 81fe5d6:	08 
 81fe5d7:	c7 04 24 46 91 00 00 	movl   $0x9146,(%esp)
 81fe5de:	e8 f4 22 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fe5e3:	e9 1f 05 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe5e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe5eb:	89 04 24             	mov    %eax,(%esp)
 81fe5ee:	e8 99 bd ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81fe5f3:	83 f8 02             	cmp    $0x2,%eax
 81fe5f6:	7e 0f                	jle    81fe607 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x8f>
 81fe5f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe5fb:	89 04 24             	mov    %eax,(%esp)
 81fe5fe:	e8 2f 1e f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81fe603:	85 c0                	test   %eax,%eax
 81fe605:	75 07                	jne    81fe60e <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x96>
 81fe607:	b8 01 00 00 00       	mov    $0x1,%eax
 81fe60c:	eb 05                	jmp    81fe613 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x9b>
 81fe60e:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe613:	84 c0                	test   %al,%al
 81fe615:	74 29                	je     81fe640 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0xc8>
 81fe617:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe61e:	00 
 81fe61f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fe626:	00 
 81fe627:	c7 44 24 04 e0 fa bc 	movl   $0x8bcfae0,0x4(%esp)
 81fe62e:	08 
 81fe62f:	c7 04 24 4a 91 00 00 	movl   $0x914a,(%esp)
 81fe636:	e8 9c 22 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fe63b:	e9 c7 04 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe640:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe643:	89 04 24             	mov    %eax,(%esp)
 81fe646:	e8 b3 bc ed ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81fe64b:	84 c0                	test   %al,%al
 81fe64d:	74 4e                	je     81fe69d <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x125>
 81fe64f:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fe654:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fe65b:	00 
 81fe65c:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fe663:	00 
 81fe664:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fe66b:	00 
 81fe66c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81fe673:	00 
 81fe674:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe67b:	00 
 81fe67c:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81fe683:	00 
 81fe684:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe687:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe68b:	89 04 24             	mov    %eax,(%esp)
 81fe68e:	e8 e5 52 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fe693:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe698:	e9 6a 04 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe69d:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81fe6a2:	c7 44 24 08 44 00 00 	movl   $0x44,0x8(%esp)
 81fe6a9:	00 
 81fe6aa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe6ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe6b1:	89 04 24             	mov    %eax,(%esp)
 81fe6b4:	e8 49 a3 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81fe6b9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81fe6bc:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81fe6c0:	74 65                	je     81fe727 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x1af>
 81fe6c2:	83 7d e8 7b          	cmpl   $0x7b,-0x18(%ebp)
 81fe6c6:	75 07                	jne    81fe6cf <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x157>
 81fe6c8:	b8 76 00 00 00       	mov    $0x76,%eax
 81fe6cd:	eb 05                	jmp    81fe6d4 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 81fe6cf:	b8 86 00 00 00       	mov    $0x86,%eax
 81fe6d4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81fe6d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81fe6da:	0f b7 d0             	movzwl %ax,%edx
 81fe6dd:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fe6e2:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fe6e9:	00 
 81fe6ea:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fe6f1:	00 
 81fe6f2:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fe6f9:	00 
 81fe6fa:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81fe701:	00 
 81fe702:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe709:	00 
 81fe70a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fe70e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe711:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe715:	89 04 24             	mov    %eax,(%esp)
 81fe718:	e8 5b 52 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fe71d:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe722:	e9 e0 03 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe727:	8d 85 44 c0 ff ff    	lea    -0x3fbc(%ebp),%eax
 81fe72d:	83 c0 36             	add    $0x36,%eax
 81fe730:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe734:	8b 45 10             	mov    0x10(%ebp),%eax
 81fe737:	89 04 24             	mov    %eax,(%esp)
 81fe73a:	e8 31 e8 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fe73f:	0f b6 85 7a c0 ff ff 	movzbl -0x3f86(%ebp),%eax
 81fe746:	84 c0                	test   %al,%al
 81fe748:	74 16                	je     81fe760 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x1e8>
 81fe74a:	0f b6 85 7a c0 ff ff 	movzbl -0x3f86(%ebp),%eax
 81fe751:	84 c0                	test   %al,%al
 81fe753:	74 0b                	je     81fe760 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x1e8>
 81fe755:	0f b6 85 7a c0 ff ff 	movzbl -0x3f86(%ebp),%eax
 81fe75c:	3c 23                	cmp    $0x23,%al
 81fe75e:	76 50                	jbe    81fe7b0 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x238>
 81fe760:	8b 95 7d c0 ff ff    	mov    -0x3f83(%ebp),%edx
 81fe766:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81fe76b:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81fe772:	00 
 81fe773:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81fe77a:	00 
 81fe77b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81fe782:	00 
 81fe783:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fe787:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe78e:	00 
 81fe78f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fe796:	00 
 81fe797:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe79a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe79e:	89 04 24             	mov    %eax,(%esp)
 81fe7a1:	e8 d2 51 12 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81fe7a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe7ab:	e9 57 03 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe7b0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81fe7b3:	89 04 24             	mov    %eax,(%esp)
 81fe7b6:	e8 a3 58 fa ff       	call   81a405e <_ZN17PurchaseLimitItem4InfoC1Ev>
 81fe7bb:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81fe7c2:	e9 3a 01 00 00       	jmp    81fe901 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x389>
 81fe7c7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81fe7ca:	8d 85 44 c0 ff ff    	lea    -0x3fbc(%ebp),%eax
 81fe7d0:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fe7d6:	83 c2 30             	add    $0x30,%edx
 81fe7d9:	01 d0                	add    %edx,%eax
 81fe7db:	83 c0 07             	add    $0x7,%eax
 81fe7de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe7e2:	8b 45 10             	mov    0x10(%ebp),%eax
 81fe7e5:	89 04 24             	mov    %eax,(%esp)
 81fe7e8:	e8 83 e7 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fe7ed:	83 f0 01             	xor    $0x1,%eax
 81fe7f0:	84 c0                	test   %al,%al
 81fe7f2:	74 29                	je     81fe81d <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x2a5>
 81fe7f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe7fb:	00 
 81fe7fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fe803:	00 
 81fe804:	c7 44 24 04 e0 fa bc 	movl   $0x8bcfae0,0x4(%esp)
 81fe80b:	08 
 81fe80c:	c7 04 24 72 91 00 00 	movl   $0x9172,(%esp)
 81fe813:	e8 bf 20 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fe818:	e9 ea 02 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe81d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81fe820:	8d 85 44 c0 ff ff    	lea    -0x3fbc(%ebp),%eax
 81fe826:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fe82c:	83 c2 30             	add    $0x30,%edx
 81fe82f:	01 d0                	add    %edx,%eax
 81fe831:	83 c0 08             	add    $0x8,%eax
 81fe834:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe838:	8b 45 10             	mov    0x10(%ebp),%eax
 81fe83b:	89 04 24             	mov    %eax,(%esp)
 81fe83e:	e8 df e6 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81fe843:	83 f0 01             	xor    $0x1,%eax
 81fe846:	84 c0                	test   %al,%al
 81fe848:	74 29                	je     81fe873 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x2fb>
 81fe84a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe851:	00 
 81fe852:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fe859:	00 
 81fe85a:	c7 44 24 04 e0 fa bc 	movl   $0x8bcfae0,0x4(%esp)
 81fe861:	08 
 81fe862:	c7 04 24 75 91 00 00 	movl   $0x9175,(%esp)
 81fe869:	e8 69 20 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fe86e:	e9 94 02 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe873:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81fe876:	8d 85 44 c0 ff ff    	lea    -0x3fbc(%ebp),%eax
 81fe87c:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 81fe882:	83 c2 30             	add    $0x30,%edx
 81fe885:	01 d0                	add    %edx,%eax
 81fe887:	83 c0 09             	add    $0x9,%eax
 81fe88a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe88e:	8b 45 10             	mov    0x10(%ebp),%eax
 81fe891:	89 04 24             	mov    %eax,(%esp)
 81fe894:	e8 a7 e9 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81fe899:	83 f0 01             	xor    $0x1,%eax
 81fe89c:	84 c0                	test   %al,%al
 81fe89e:	74 29                	je     81fe8c9 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x351>
 81fe8a0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe8a7:	00 
 81fe8a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fe8af:	00 
 81fe8b0:	c7 44 24 04 e0 fa bc 	movl   $0x8bcfae0,0x4(%esp)
 81fe8b7:	08 
 81fe8b8:	c7 04 24 78 91 00 00 	movl   $0x9178,(%esp)
 81fe8bf:	e8 13 20 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fe8c4:	e9 3e 02 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe8c9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81fe8cc:	85 c0                	test   %eax,%eax
 81fe8ce:	75 2d                	jne    81fe8fd <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x385>
 81fe8d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81fe8d3:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81fe8d9:	8d 55 f8             	lea    -0x8(%ebp),%edx
 81fe8dc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81fe8df:	2d 84 3f 00 00       	sub    $0x3f84,%eax
 81fe8e4:	8b 40 09             	mov    0x9(%eax),%eax
 81fe8e7:	8d 55 d0             	lea    -0x30(%ebp),%edx
 81fe8ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fe8ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe8f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe8f5:	89 04 24             	mov    %eax,(%esp)
 81fe8f8:	e8 cb 81 f9 ff       	call   8196ac8 <_ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE>
 81fe8fd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81fe901:	0f b6 85 7a c0 ff ff 	movzbl -0x3f86(%ebp),%eax
 81fe908:	0f b6 c0             	movzbl %al,%eax
 81fe90b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81fe90e:	0f 9f c0             	setg   %al
 81fe911:	84 c0                	test   %al,%al
 81fe913:	0f 85 ae fe ff ff    	jne    81fe7c7 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x24f>
 81fe919:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81fe91c:	85 c0                	test   %eax,%eax
 81fe91e:	75 52                	jne    81fe972 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x3fa>
 81fe920:	a1 60 f7 41 09       	mov    0x941f760,%eax
 81fe925:	8d 95 44 c0 ff ff    	lea    -0x3fbc(%ebp),%edx
 81fe92b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fe92f:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fe932:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fe936:	89 04 24             	mov    %eax,(%esp)
 81fe939:	e8 92 db 34 00       	call   854c4d0 <_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM>
 81fe93e:	84 c0                	test   %al,%al
 81fe940:	74 07                	je     81fe949 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x3d1>
 81fe942:	b8 00 00 00 00       	mov    $0x0,%eax
 81fe947:	eb 24                	jmp    81fe96d <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x3f5>
 81fe949:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fe950:	00 
 81fe951:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fe958:	00 
 81fe959:	c7 44 24 04 e0 fa bc 	movl   $0x8bcfae0,0x4(%esp)
 81fe960:	08 
 81fe961:	c7 04 24 83 91 00 00 	movl   $0x9183,(%esp)
 81fe968:	e8 6a 1f 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fe96d:	e9 95 01 00 00       	jmp    81feb07 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x58f>
 81fe972:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81fe977:	c7 44 24 08 87 91 00 	movl   $0x9187,0x8(%esp)
 81fe97e:	00 
 81fe97f:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81fe986:	08 
 81fe987:	89 04 24             	mov    %eax,(%esp)
 81fe98a:	e8 f7 10 09 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81fe98f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fe996:	00 
 81fe997:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fe99b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fe99e:	89 04 24             	mov    %eax,(%esp)
 81fe9a1:	e8 80 a2 ec ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81fe9a6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fe9a9:	89 04 24             	mov    %eax,(%esp)
 81fe9ac:	e8 95 a2 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fe9b1:	c7 44 24 04 fa 01 00 	movl   $0x1fa,0x4(%esp)
 81fe9b8:	00 
 81fe9b9:	89 04 24             	mov    %eax,(%esp)
 81fe9bc:	e8 95 a2 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81fe9c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe9c4:	89 04 24             	mov    %eax,(%esp)
 81fe9c7:	e8 ca a2 ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81fe9cc:	89 c3                	mov    %eax,%ebx
 81fe9ce:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fe9d1:	89 04 24             	mov    %eax,(%esp)
 81fe9d4:	e8 6d a2 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fe9d9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fe9dd:	89 04 24             	mov    %eax,(%esp)
 81fe9e0:	e8 71 a2 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81fe9e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fe9e8:	89 04 24             	mov    %eax,(%esp)
 81fe9eb:	e8 7e b9 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fe9f0:	89 c3                	mov    %eax,%ebx
 81fe9f2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fe9f5:	89 04 24             	mov    %eax,(%esp)
 81fe9f8:	e8 49 a2 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fe9fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fea01:	89 04 24             	mov    %eax,(%esp)
 81fea04:	e8 89 38 ee ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 81fea09:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81fea10:	ff 
 81fea11:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fea14:	89 04 24             	mov    %eax,(%esp)
 81fea17:	e8 84 f5 44 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81fea1c:	89 c3                	mov    %eax,%ebx
 81fea1e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fea21:	89 04 24             	mov    %eax,(%esp)
 81fea24:	e8 1d a2 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fea29:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fea2d:	89 04 24             	mov    %eax,(%esp)
 81fea30:	e8 21 a2 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81fea35:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 81fea38:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fea3b:	89 04 24             	mov    %eax,(%esp)
 81fea3e:	e8 03 a2 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fea43:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fea47:	89 04 24             	mov    %eax,(%esp)
 81fea4a:	e8 43 38 ee ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 81fea4f:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 81fea53:	0f bf d8             	movswl %ax,%ebx
 81fea56:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fea59:	89 04 24             	mov    %eax,(%esp)
 81fea5c:	e8 e5 a1 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fea61:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fea65:	89 04 24             	mov    %eax,(%esp)
 81fea68:	e8 f9 c2 02 00       	call   822ad66 <_ZN12CStreamGuardlsEs>
 81fea6d:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 81fea71:	0f bf d8             	movswl %ax,%ebx
 81fea74:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fea77:	89 04 24             	mov    %eax,(%esp)
 81fea7a:	e8 c7 a1 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fea7f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fea83:	89 04 24             	mov    %eax,(%esp)
 81fea86:	e8 db c2 02 00       	call   822ad66 <_ZN12CStreamGuardlsEs>
 81fea8b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81fea8e:	89 04 24             	mov    %eax,(%esp)
 81fea91:	e8 b8 a1 ec ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81fea96:	89 04 24             	mov    %eax,(%esp)
 81fea99:	e8 7e 8e 03 00       	call   823791c <_ZN12CStreamGuard11GetInBufferI21MSG_BUY_CERASHOP_ITEMEEPT_v>
 81fea9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81feaa1:	c7 44 24 08 84 3f 00 	movl   $0x3f84,0x8(%esp)
 81feaa8:	00 
 81feaa9:	8d 85 44 c0 ff ff    	lea    -0x3fbc(%ebp),%eax
 81feaaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81feab3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81feab6:	89 04 24             	mov    %eax,(%esp)
 81feab9:	e8 e2 ed e7 ff       	call   807d8a0 <memcpy@plt>
 81feabe:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81feac3:	8d 55 c8             	lea    -0x38(%ebp),%edx
 81feac6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81feaca:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81fead1:	00 
 81fead2:	89 04 24             	mov    %eax,(%esp)
 81fead5:	e8 04 25 37 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81feada:	eb 1b                	jmp    81feaf7 <_ZN25Dispatcher_BuyAutomatItem12dispatch_sigEP5CUserR9PacketBuf+0x57f>
 81feadc:	89 d3                	mov    %edx,%ebx
 81feade:	89 c6                	mov    %eax,%esi
 81feae0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81feae3:	89 04 24             	mov    %eax,(%esp)
 81feae6:	e8 e7 dd 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81feaeb:	89 f0                	mov    %esi,%eax
 81feaed:	89 da                	mov    %ebx,%edx
 81feaef:	89 04 24             	mov    %eax,(%esp)
 81feaf2:	e8 59 4c 8e 00       	call   8ae3750 <_Unwind_Resume>
 81feaf7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81feafa:	89 04 24             	mov    %eax,(%esp)
 81feafd:	e8 d0 dd 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81feb02:	b8 00 00 00 00       	mov    $0x0,%eax
 81feb07:	81 c4 e0 3f 00 00    	add    $0x3fe0,%esp
 81feb0d:	5b                   	pop    %ebx
 81feb0e:	5e                   	pop    %esi
 81feb0f:	5d                   	pop    %ebp
 81feb10:	c3                   	ret
 81feb11:	90                   	nop

```

```c
// Dispatcher_BuyAutomatItem::dispatch_sig @ 0x81fe578

/* Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BuyAutomatItem::dispatch_sig
          (Dispatcher_BuyAutomatItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  uint uVar7;
  MSG_BUY_CERASHOP_ITEM local_3fc0 [54];
  byte local_3f8a;
  uchar auStack_3f89 [2];
  uint local_3f87 [4050];
  CStreamGuard local_3c [8];
  short local_34;
  short local_32;
  uint local_30;
  cMyTrace local_2c [16];
  int local_1c;
  undefined4 local_18;
  int local_14;
  MSG_BUY_CERASHOP_ITEM *local_10;
  
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_2c,
                       "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)",
                       0x9145,0);
    cMyTrace::operator()(local_2c,"pUser doesn\'t exist in Dispatcher_BuyAutomatItem::dispatch_sig")
    ;
    uVar3 = LineFunc(0x9146,
                     "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  else {
    iVar4 = CUser::get_state(param_1);
    if ((iVar4 < 3) ||
       (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar3 = LineFunc(0x914a,
                       "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
    else {
      cVar2 = CUser::CheckInTrade(param_1);
      if (cVar2 == '\0') {
        local_1c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x44);
        if (local_1c == 0) {
          PacketBuf::get_byte(param_2,&local_3f8a);
          if (((local_3f8a == 0) || (local_3f8a == 0)) || (0x23 < local_3f8a)) {
            WongWork::CCeraShop::ProcessError
                      (GlobalData::s_pCeraShop,param_1,1,0,local_3f87[0],1,1,'\0');
            uVar3 = 0;
          }
          else {
            PurchaseLimitItem::Info::Info((Info *)&local_34);
            for (local_14 = 0; local_14 < (int)(uint)local_3f8a; local_14 = local_14 + 1) {
              cVar2 = PacketBuf::get_byte(param_2,auStack_3f89 + local_14 * 0x1cf);
              if (cVar2 != '\x01') {
                uVar3 = LineFunc(0x9172,
                                 "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar3;
              }
              cVar2 = PacketBuf::get_byte(param_2,(char *)(auStack_3f89 + local_14 * 0x1cf + 1));
              if (cVar2 != '\x01') {
                uVar3 = LineFunc(0x9175,
                                 "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar3;
              }
              cVar2 = PacketBuf::get_int(param_2,(uint *)((int)local_3f87 + local_14 * 0x1cf));
              if (cVar2 != '\x01') {
                uVar3 = LineFunc(0x9178,
                                 "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar3;
              }
              if (local_30 == 0) {
                ARAD::CheckAccountItem
                          (param_1,*(uint *)((int)local_3f87 + local_14 * 0x1cf),(Info *)&local_34);
              }
            }
            if (local_30 == 0) {
              cVar2 = ItemVendingMachine::BuyItem
                                (GlobalData::s_pItemVendingMachine,param_1,local_3fc0);
              if (cVar2 == '\0') {
                uVar3 = LineFunc(0x9183,
                                 "virtual int Dispatcher_BuyAutomatItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              pSVar5 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",
                                           0x9187);
              CStreamGuard::CStreamGuard(local_3c,pSVar5,true);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 081fe9bc to 081fead9 has its CatchHandler @ 081feadc */
              CStreamGuard::operator<<(pCVar6,0x1fa);
              iVar4 = CUser::GetUID(param_1);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,iVar4);
              uVar7 = CUser::get_acc_id(param_1);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,uVar7);
              iVar4 = CUser::get_charac_no(param_1,-1);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,iVar4);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,local_30);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,local_34);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
              CStreamGuard::operator<<(pCVar6,local_32);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
              local_10 = CStreamGuard::GetInBuffer<MSG_BUY_CERASHOP_ITEM>(pCVar6);
              memcpy(local_10,local_3fc0,0x3f84);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_3c);
              CStreamGuard::~CStreamGuard(local_3c);
              uVar3 = 0;
            }
          }
        }
        else {
          if (local_1c == 0x7b) {
            local_18 = 0x76;
          }
          else {
            local_18 = 0x86;
          }
          WongWork::CCeraShop::ProcessError
                    (GlobalData::s_pCeraShop,param_1,(ushort)local_18,0,0,1,1,'\0');
          uVar3 = 0;
        }
      }
      else {
        WongWork::CCeraShop::ProcessError(GlobalData::s_pCeraShop,param_1,0x13,0,0,1,1,'\0');
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

