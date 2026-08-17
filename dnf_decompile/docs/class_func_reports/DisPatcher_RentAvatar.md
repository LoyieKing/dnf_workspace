# DisPatcher_RentAvatar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ee59c DisPatcher_RentAvatar::dispatch_sig  [0x081ee59c-0x81eed07] ===
 81ee59c:	55                   	push   %ebp
 81ee59d:	89 e5                	mov    %esp,%ebp
 81ee59f:	57                   	push   %edi
 81ee5a0:	56                   	push   %esi
 81ee5a1:	53                   	push   %ebx
 81ee5a2:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 81ee5a8:	8d 9d 58 ff ff ff    	lea    -0xa8(%ebp),%ebx
 81ee5ae:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee5b3:	ba 0a 00 00 00       	mov    $0xa,%edx
 81ee5b8:	89 df                	mov    %ebx,%edi
 81ee5ba:	89 d1                	mov    %edx,%ecx
 81ee5bc:	f3 ab                	rep stos %eax,%es:(%edi)
 81ee5be:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 81ee5c5:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81ee5cc:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81ee5d3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81ee5d6:	89 04 24             	mov    %eax,(%esp)
 81ee5d9:	e8 6e f7 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ee5de:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 81ee5e4:	83 c0 0d             	add    $0xd,%eax
 81ee5e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee5eb:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee5ee:	89 04 24             	mov    %eax,(%esp)
 81ee5f1:	e8 7a e9 39 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81ee5f6:	83 f0 01             	xor    $0x1,%eax
 81ee5f9:	84 c0                	test   %al,%al
 81ee5fb:	74 2b                	je     81ee628 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x8c>
 81ee5fd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee604:	00 
 81ee605:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee60c:	00 
 81ee60d:	c7 44 24 04 80 03 bd 	movl   $0x8bd0380,0x4(%esp)
 81ee614:	08 
 81ee615:	c7 04 24 ee 71 00 00 	movl   $0x71ee,(%esp)
 81ee61c:	e8 b6 22 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee621:	89 c3                	mov    %eax,%ebx
 81ee623:	e9 c7 06 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81ee628:	0f b6 85 85 fe ff ff 	movzbl -0x17b(%ebp),%eax
 81ee62f:	84 c0                	test   %al,%al
 81ee631:	74 0b                	je     81ee63e <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0xa2>
 81ee633:	0f b6 85 85 fe ff ff 	movzbl -0x17b(%ebp),%eax
 81ee63a:	3c 09                	cmp    $0x9,%al
 81ee63c:	76 2b                	jbe    81ee669 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0xcd>
 81ee63e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee645:	00 
 81ee646:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee64d:	00 
 81ee64e:	c7 44 24 04 80 03 bd 	movl   $0x8bd0380,0x4(%esp)
 81ee655:	08 
 81ee656:	c7 04 24 f0 71 00 00 	movl   $0x71f0,(%esp)
 81ee65d:	e8 75 22 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee662:	89 c3                	mov    %eax,%ebx
 81ee664:	e9 86 06 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81ee669:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81ee670:	e9 b2 00 00 00       	jmp    81ee727 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x18b>
 81ee675:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ee678:	8d 8d 78 fe ff ff    	lea    -0x188(%ebp),%ecx
 81ee67e:	89 d0                	mov    %edx,%eax
 81ee680:	c1 e0 02             	shl    $0x2,%eax
 81ee683:	01 d0                	add    %edx,%eax
 81ee685:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81ee688:	83 c0 0e             	add    $0xe,%eax
 81ee68b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee68f:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee692:	89 04 24             	mov    %eax,(%esp)
 81ee695:	e8 d6 e8 39 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81ee69a:	83 f0 01             	xor    $0x1,%eax
 81ee69d:	84 c0                	test   %al,%al
 81ee69f:	74 2b                	je     81ee6cc <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x130>
 81ee6a1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee6a8:	00 
 81ee6a9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee6b0:	00 
 81ee6b1:	c7 44 24 04 80 03 bd 	movl   $0x8bd0380,0x4(%esp)
 81ee6b8:	08 
 81ee6b9:	c7 04 24 f4 71 00 00 	movl   $0x71f4,(%esp)
 81ee6c0:	e8 12 22 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee6c5:	89 c3                	mov    %eax,%ebx
 81ee6c7:	e9 23 06 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81ee6cc:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ee6cf:	8d 8d 78 fe ff ff    	lea    -0x188(%ebp),%ecx
 81ee6d5:	89 d0                	mov    %edx,%eax
 81ee6d7:	c1 e0 02             	shl    $0x2,%eax
 81ee6da:	01 d0                	add    %edx,%eax
 81ee6dc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81ee6df:	83 c0 0f             	add    $0xf,%eax
 81ee6e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ee6e6:	8b 45 10             	mov    0x10(%ebp),%eax
 81ee6e9:	89 04 24             	mov    %eax,(%esp)
 81ee6ec:	e8 8d eb 39 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81ee6f1:	83 f0 01             	xor    $0x1,%eax
 81ee6f4:	84 c0                	test   %al,%al
 81ee6f6:	74 2b                	je     81ee723 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x187>
 81ee6f8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee6ff:	00 
 81ee700:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee707:	00 
 81ee708:	c7 44 24 04 80 03 bd 	movl   $0x8bd0380,0x4(%esp)
 81ee70f:	08 
 81ee710:	c7 04 24 f5 71 00 00 	movl   $0x71f5,(%esp)
 81ee717:	e8 bb 21 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee71c:	89 c3                	mov    %eax,%ebx
 81ee71e:	e9 cc 05 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81ee723:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 81ee727:	0f b6 85 85 fe ff ff 	movzbl -0x17b(%ebp),%eax
 81ee72e:	0f b6 c0             	movzbl %al,%eax
 81ee731:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 81ee734:	0f 9f c0             	setg   %al
 81ee737:	84 c0                	test   %al,%al
 81ee739:	0f 85 36 ff ff ff    	jne    81ee675 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0xd9>
 81ee73f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee742:	89 04 24             	mov    %eax,(%esp)
 81ee745:	e8 e8 1c f3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81ee74a:	85 c0                	test   %eax,%eax
 81ee74c:	0f 94 c0             	sete   %al
 81ee74f:	84 c0                	test   %al,%al
 81ee751:	74 2b                	je     81ee77e <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x1e2>
 81ee753:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ee75a:	00 
 81ee75b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee762:	00 
 81ee763:	c7 44 24 04 80 03 bd 	movl   $0x8bd0380,0x4(%esp)
 81ee76a:	08 
 81ee76b:	c7 04 24 fa 71 00 00 	movl   $0x71fa,(%esp)
 81ee772:	e8 60 21 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ee777:	89 c3                	mov    %eax,%ebx
 81ee779:	e9 71 05 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81ee77e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee781:	89 04 24             	mov    %eax,(%esp)
 81ee784:	e8 f5 ba ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ee789:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ee790:	00 
 81ee791:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81ee798:	00 
 81ee799:	89 04 24             	mov    %eax,(%esp)
 81ee79c:	e8 d9 ce 30 00       	call   84fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 81ee7a1:	0f b6 95 85 fe ff ff 	movzbl -0x17b(%ebp),%edx
 81ee7a8:	0f b6 d2             	movzbl %dl,%edx
 81ee7ab:	39 d0                	cmp    %edx,%eax
 81ee7ad:	0f 9c c0             	setl   %al
 81ee7b0:	84 c0                	test   %al,%al
 81ee7b2:	74 1d                	je     81ee7d1 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x235>
 81ee7b4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81ee7bb:	00 
 81ee7bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee7bf:	89 04 24             	mov    %eax,(%esp)
 81ee7c2:	e8 fe 6a 04 00       	call   82352c5 <_Z19RentAvatarErrorProcP5CUseri>
 81ee7c7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ee7cc:	e9 1e 05 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81ee7d1:	8d 9d 30 ff ff ff    	lea    -0xd0(%ebp),%ebx
 81ee7d7:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee7dc:	ba 0a 00 00 00       	mov    $0xa,%edx
 81ee7e1:	89 df                	mov    %ebx,%edi
 81ee7e3:	89 d1                	mov    %edx,%ecx
 81ee7e5:	f3 ab                	rep stos %eax,%es:(%edi)
 81ee7e7:	8d 9d 08 ff ff ff    	lea    -0xf8(%ebp),%ebx
 81ee7ed:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee7f2:	ba 0a 00 00 00       	mov    $0xa,%edx
 81ee7f7:	89 df                	mov    %ebx,%edi
 81ee7f9:	89 d1                	mov    %edx,%ecx
 81ee7fb:	f3 ab                	rep stos %eax,%es:(%edi)
 81ee7fd:	8d 9d e0 fe ff ff    	lea    -0x120(%ebp),%ebx
 81ee803:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee808:	ba 0a 00 00 00       	mov    $0xa,%edx
 81ee80d:	89 df                	mov    %ebx,%edi
 81ee80f:	89 d1                	mov    %edx,%ecx
 81ee811:	f3 ab                	rep stos %eax,%es:(%edi)
 81ee813:	8d 9d b8 fe ff ff    	lea    -0x148(%ebp),%ebx
 81ee819:	b8 00 00 00 00       	mov    $0x0,%eax
 81ee81e:	ba 0a 00 00 00       	mov    $0xa,%edx
 81ee823:	89 df                	mov    %ebx,%edi
 81ee825:	89 d1                	mov    %edx,%ecx
 81ee827:	f3 ab                	rep stos %eax,%es:(%edi)
 81ee829:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81ee830:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81ee837:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81ee83e:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81ee845:	e9 5d 01 00 00       	jmp    81ee9a7 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x40b>
 81ee84a:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 81ee84d:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ee850:	89 d0                	mov    %edx,%eax
 81ee852:	c1 e0 02             	shl    $0x2,%eax
 81ee855:	01 d0                	add    %edx,%eax
 81ee857:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81ee85a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81ee85d:	2d 70 01 00 00       	sub    $0x170,%eax
 81ee862:	8b 40 0f             	mov    0xf(%eax),%eax
 81ee865:	89 c6                	mov    %eax,%esi
 81ee867:	e8 2f d9 ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ee86c:	89 74 24 04          	mov    %esi,0x4(%esp)
 81ee870:	89 04 24             	mov    %eax,(%esp)
 81ee873:	e8 ba 11 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81ee878:	89 84 9d 30 ff ff ff 	mov    %eax,-0xd0(%ebp,%ebx,4)
 81ee87f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ee882:	8b 84 85 30 ff ff ff 	mov    -0xd0(%ebp,%eax,4),%eax
 81ee889:	85 c0                	test   %eax,%eax
 81ee88b:	75 1d                	jne    81ee8aa <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x30e>
 81ee88d:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81ee894:	00 
 81ee895:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee898:	89 04 24             	mov    %eax,(%esp)
 81ee89b:	e8 25 6a 04 00       	call   82352c5 <_Z19RentAvatarErrorProcP5CUseri>
 81ee8a0:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ee8a5:	e9 45 04 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81ee8aa:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 81ee8ad:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ee8b0:	89 d0                	mov    %edx,%eax
 81ee8b2:	c1 e0 02             	shl    $0x2,%eax
 81ee8b5:	01 d0                	add    %edx,%eax
 81ee8b7:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81ee8ba:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81ee8bd:	2d 70 01 00 00       	sub    $0x170,%eax
 81ee8c2:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81ee8c6:	0f b6 f0             	movzbl %al,%esi
 81ee8c9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ee8cc:	8b 84 85 30 ff ff ff 	mov    -0xd0(%ebp,%eax,4),%eax
 81ee8d3:	89 04 24             	mov    %eax,(%esp)
 81ee8d6:	e8 7b df 03 00       	call   822c856 <_ZNK5CItem12GetCashPriceEv>
 81ee8db:	89 74 24 04          	mov    %esi,0x4(%esp)
 81ee8df:	89 04 24             	mov    %eax,(%esp)
 81ee8e2:	e8 b2 e0 79 00       	call   898c999 <_Z18getAvatarRentPriceii>
 81ee8e7:	89 84 9d 08 ff ff ff 	mov    %eax,-0xf8(%ebp,%ebx,4)
 81ee8ee:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 81ee8f1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ee8f4:	89 d0                	mov    %edx,%eax
 81ee8f6:	c1 e0 02             	shl    $0x2,%eax
 81ee8f9:	01 d0                	add    %edx,%eax
 81ee8fb:	8d 7d e8             	lea    -0x18(%ebp),%edi
 81ee8fe:	8d 04 07             	lea    (%edi,%eax,1),%eax
 81ee901:	2d 70 01 00 00       	sub    $0x170,%eax
 81ee906:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81ee90a:	0f b6 f0             	movzbl %al,%esi
 81ee90d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ee910:	8b 84 85 30 ff ff ff 	mov    -0xd0(%ebp,%eax,4),%eax
 81ee917:	89 04 24             	mov    %eax,(%esp)
 81ee91a:	e8 2b df 03 00       	call   822c84a <_ZNK5CItem9get_priceEv>
 81ee91f:	89 74 24 04          	mov    %esi,0x4(%esp)
 81ee923:	89 04 24             	mov    %eax,(%esp)
 81ee926:	e8 6e e0 79 00       	call   898c999 <_Z18getAvatarRentPriceii>
 81ee92b:	89 84 9d b8 fe ff ff 	mov    %eax,-0x148(%ebp,%ebx,4)
 81ee932:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 81ee935:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ee938:	89 d0                	mov    %edx,%eax
 81ee93a:	c1 e0 02             	shl    $0x2,%eax
 81ee93d:	01 d0                	add    %edx,%eax
 81ee93f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81ee942:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81ee945:	2d 70 01 00 00       	sub    $0x170,%eax
 81ee94a:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81ee94e:	0f b6 f0             	movzbl %al,%esi
 81ee951:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ee954:	8b 84 85 30 ff ff ff 	mov    -0xd0(%ebp,%eax,4),%eax
 81ee95b:	89 04 24             	mov    %eax,(%esp)
 81ee95e:	e8 ff de 03 00       	call   822c862 <_ZNK5CItem13GetMedalPriceEv>
 81ee963:	89 74 24 04          	mov    %esi,0x4(%esp)
 81ee967:	89 04 24             	mov    %eax,(%esp)
 81ee96a:	e8 2a e0 79 00       	call   898c999 <_Z18getAvatarRentPriceii>
 81ee96f:	89 84 9d e0 fe ff ff 	mov    %eax,-0x120(%ebp,%ebx,4)
 81ee976:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ee979:	8b 84 85 08 ff ff ff 	mov    -0xf8(%ebp,%eax,4),%eax
 81ee980:	01 45 dc             	add    %eax,-0x24(%ebp)
 81ee983:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ee986:	8b 94 85 b8 fe ff ff 	mov    -0x148(%ebp,%eax,4),%edx
 81ee98d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ee990:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81ee993:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ee996:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ee999:	8b 84 85 e0 fe ff ff 	mov    -0x120(%ebp,%eax,4),%eax
 81ee9a0:	01 45 e4             	add    %eax,-0x1c(%ebp)
 81ee9a3:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 81ee9a7:	0f b6 85 85 fe ff ff 	movzbl -0x17b(%ebp),%eax
 81ee9ae:	0f b6 c0             	movzbl %al,%eax
 81ee9b1:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 81ee9b4:	0f 9f c0             	setg   %al
 81ee9b7:	84 c0                	test   %al,%al
 81ee9b9:	0f 85 8b fe ff ff    	jne    81ee84a <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x2ae>
 81ee9bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee9c2:	89 04 24             	mov    %eax,(%esp)
 81ee9c5:	e8 b0 f5 f0 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 81ee9ca:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 81ee9cd:	72 28                	jb     81ee9f7 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x45b>
 81ee9cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee9d2:	89 04 24             	mov    %eax,(%esp)
 81ee9d5:	e8 a4 b8 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ee9da:	89 04 24             	mov    %eax,(%esp)
 81ee9dd:	e8 f4 5d f4 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81ee9e2:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81ee9e5:	7c 10                	jl     81ee9f7 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x45b>
 81ee9e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ee9ea:	89 04 24             	mov    %eax,(%esp)
 81ee9ed:	e8 8a b7 f8 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 81ee9f2:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81ee9f5:	73 07                	jae    81ee9fe <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x462>
 81ee9f7:	b8 01 00 00 00       	mov    $0x1,%eax
 81ee9fc:	eb 05                	jmp    81eea03 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x467>
 81ee9fe:	b8 00 00 00 00       	mov    $0x0,%eax
 81eea03:	84 c0                	test   %al,%al
 81eea05:	74 1d                	je     81eea24 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x488>
 81eea07:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81eea0e:	00 
 81eea0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eea12:	89 04 24             	mov    %eax,(%esp)
 81eea15:	e8 ab 68 04 00       	call   82352c5 <_Z19RentAvatarErrorProcP5CUseri>
 81eea1a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eea1f:	e9 cb 02 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81eea24:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81eea2b:	e9 85 02 00 00       	jmp    81eecb5 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x719>
 81eea30:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81eea33:	89 d0                	mov    %edx,%eax
 81eea35:	c1 e0 02             	shl    $0x2,%eax
 81eea38:	01 d0                	add    %edx,%eax
 81eea3a:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81eea3d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81eea40:	2d 70 01 00 00       	sub    $0x170,%eax
 81eea45:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81eea49:	0f b6 c0             	movzbl %al,%eax
 81eea4c:	83 f8 01             	cmp    $0x1,%eax
 81eea4f:	74 12                	je     81eea63 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4c7>
 81eea51:	83 f8 02             	cmp    $0x2,%eax
 81eea54:	74 16                	je     81eea6c <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4d0>
 81eea56:	85 c0                	test   %eax,%eax
 81eea58:	75 1b                	jne    81eea75 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4d9>
 81eea5a:	c7 45 d4 07 00 00 00 	movl   $0x7,-0x2c(%ebp)
 81eea61:	eb 2f                	jmp    81eea92 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4f6>
 81eea63:	c7 45 d4 1e 00 00 00 	movl   $0x1e,-0x2c(%ebp)
 81eea6a:	eb 26                	jmp    81eea92 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4f6>
 81eea6c:	c7 45 d4 6d 01 00 00 	movl   $0x16d,-0x2c(%ebp)
 81eea73:	eb 1d                	jmp    81eea92 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4f6>
 81eea75:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81eea7c:	00 
 81eea7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eea80:	89 04 24             	mov    %eax,(%esp)
 81eea83:	e8 3d 68 04 00       	call   82352c5 <_Z19RentAvatarErrorProcP5CUseri>
 81eea88:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eea8d:	e9 5d 02 00 00       	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81eea92:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81eea95:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 81eea9b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81eea9e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81eeaa3:	c7 44 24 08 39 72 00 	movl   $0x7239,0x8(%esp)
 81eeaaa:	00 
 81eeaab:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81eeab2:	08 
 81eeab3:	89 04 24             	mov    %eax,(%esp)
 81eeab6:	e8 cb 0f 0a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81eeabb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eeac2:	00 
 81eeac3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eeac7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eeaca:	89 04 24             	mov    %eax,(%esp)
 81eeacd:	e8 54 a1 ed ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81eead2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81eead5:	8b 84 85 08 ff ff ff 	mov    -0xf8(%ebp,%eax,4),%eax
 81eeadc:	89 c3                	mov    %eax,%ebx
 81eeade:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eeae1:	89 04 24             	mov    %eax,(%esp)
 81eeae4:	e8 5d a1 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81eeae9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eeaed:	89 04 24             	mov    %eax,(%esp)
 81eeaf0:	e8 61 a1 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81eeaf5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81eeaf8:	8b 84 85 e0 fe ff ff 	mov    -0x120(%ebp,%eax,4),%eax
 81eeaff:	89 c3                	mov    %eax,%ebx
 81eeb01:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eeb04:	89 04 24             	mov    %eax,(%esp)
 81eeb07:	e8 3a a1 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81eeb0c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eeb10:	89 04 24             	mov    %eax,(%esp)
 81eeb13:	e8 3e a1 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81eeb18:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81eeb1b:	8b 84 85 b8 fe ff ff 	mov    -0x148(%ebp,%eax,4),%eax
 81eeb22:	89 c3                	mov    %eax,%ebx
 81eeb24:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eeb27:	89 04 24             	mov    %eax,(%esp)
 81eeb2a:	e8 17 a1 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81eeb2f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eeb33:	89 04 24             	mov    %eax,(%esp)
 81eeb36:	e8 1b a1 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81eeb3b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81eeb3e:	89 d0                	mov    %edx,%eax
 81eeb40:	c1 e0 02             	shl    $0x2,%eax
 81eeb43:	01 d0                	add    %edx,%eax
 81eeb45:	8d 7d e8             	lea    -0x18(%ebp),%edi
 81eeb48:	8d 04 07             	lea    (%edi,%eax,1),%eax
 81eeb4b:	2d 70 01 00 00       	sub    $0x170,%eax
 81eeb50:	8b 58 0f             	mov    0xf(%eax),%ebx
 81eeb53:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eeb56:	89 04 24             	mov    %eax,(%esp)
 81eeb59:	e8 e8 a0 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81eeb5e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eeb62:	89 04 24             	mov    %eax,(%esp)
 81eeb65:	e8 3c c2 03 00       	call   822ada6 <_ZN12CStreamGuardlsEm>
 81eeb6a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eeb6d:	89 04 24             	mov    %eax,(%esp)
 81eeb70:	e8 d1 a0 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81eeb75:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81eeb78:	89 54 24 04          	mov    %edx,0x4(%esp)
 81eeb7c:	89 04 24             	mov    %eax,(%esp)
 81eeb7f:	e8 d2 a0 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81eeb84:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 81eeb87:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eeb8a:	89 04 24             	mov    %eax,(%esp)
 81eeb8d:	e8 b4 a0 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81eeb92:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eeb96:	89 04 24             	mov    %eax,(%esp)
 81eeb99:	e8 b8 a0 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81eeb9e:	0f b6 85 85 fe ff ff 	movzbl -0x17b(%ebp),%eax
 81eeba5:	0f b6 d8             	movzbl %al,%ebx
 81eeba8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eebab:	89 04 24             	mov    %eax,(%esp)
 81eebae:	e8 93 a0 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81eebb3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eebb7:	89 04 24             	mov    %eax,(%esp)
 81eebba:	e8 97 a0 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81eebbf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81eebc2:	8d 58 01             	lea    0x1(%eax),%ebx
 81eebc5:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eebc8:	89 04 24             	mov    %eax,(%esp)
 81eebcb:	e8 76 a0 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81eebd0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eebd4:	89 04 24             	mov    %eax,(%esp)
 81eebd7:	e8 7a a0 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81eebdc:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81eebdf:	89 d0                	mov    %edx,%eax
 81eebe1:	c1 e0 02             	shl    $0x2,%eax
 81eebe4:	01 d0                	add    %edx,%eax
 81eebe6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81eebe9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81eebec:	2d 70 01 00 00       	sub    $0x170,%eax
 81eebf1:	8b 40 0f             	mov    0xf(%eax),%eax
 81eebf4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81eebf8:	c7 44 24 08 9b 21 bc 	movl   $0x8bc219b,0x8(%esp)
 81eebff:	08 
 81eec00:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 81eec07:	00 
 81eec08:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81eec0b:	89 04 24             	mov    %eax,(%esp)
 81eec0e:	e8 09 dc 39 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81eec13:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81eec16:	8b 84 85 08 ff ff ff 	mov    -0xf8(%ebp,%eax,4),%eax
 81eec1d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81eec21:	c7 44 24 08 9b 21 bc 	movl   $0x8bc219b,0x8(%esp)
 81eec28:	08 
 81eec29:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 81eec30:	00 
 81eec31:	8d 45 80             	lea    -0x80(%ebp),%eax
 81eec34:	89 04 24             	mov    %eax,(%esp)
 81eec37:	e8 e0 db 39 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81eec3c:	a1 34 f7 41 09       	mov    0x941f734,%eax
 81eec41:	8b 00                	mov    (%eax),%eax
 81eec43:	83 c0 14             	add    $0x14,%eax
 81eec46:	8b 18                	mov    (%eax),%ebx
 81eec48:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eec4b:	89 04 24             	mov    %eax,(%esp)
 81eec4e:	e8 a7 23 f1 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 81eec53:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 81eec59:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81eec5d:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81eec64:	00 
 81eec65:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81eec6c:	00 
 81eec6d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81eec70:	89 44 24 10          	mov    %eax,0x10(%esp)
 81eec74:	8d 45 80             	lea    -0x80(%ebp),%eax
 81eec77:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81eec7b:	c7 44 24 08 f9 13 bc 	movl   $0x8bc13f9,0x8(%esp)
 81eec82:	08 
 81eec83:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eec86:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eec8a:	89 14 24             	mov    %edx,(%esp)
 81eec8d:	ff d3                	call   *%ebx
 81eec8f:	eb 15                	jmp    81eeca6 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x70a>
 81eec91:	89 d3                	mov    %edx,%ebx
 81eec93:	89 c6                	mov    %eax,%esi
 81eec95:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eec98:	89 04 24             	mov    %eax,(%esp)
 81eec9b:	e8 32 dc 42 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81eeca0:	89 f0                	mov    %esi,%eax
 81eeca2:	89 da                	mov    %ebx,%edx
 81eeca4:	eb 2e                	jmp    81eecd4 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x738>
 81eeca6:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eeca9:	89 04 24             	mov    %eax,(%esp)
 81eecac:	e8 21 dc 42 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81eecb1:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 81eecb5:	0f b6 85 85 fe ff ff 	movzbl -0x17b(%ebp),%eax
 81eecbc:	0f b6 c0             	movzbl %al,%eax
 81eecbf:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 81eecc2:	0f 9f c0             	setg   %al
 81eecc5:	84 c0                	test   %al,%al
 81eecc7:	0f 85 63 fd ff ff    	jne    81eea30 <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x494>
 81eeccd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eecd2:	eb 1b                	jmp    81eecef <_ZN21DisPatcher_RentAvatar12dispatch_sigEP5CUserR9PacketBuf+0x753>
 81eecd4:	89 d3                	mov    %edx,%ebx
 81eecd6:	89 c6                	mov    %eax,%esi
 81eecd8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81eecdb:	89 04 24             	mov    %eax,(%esp)
 81eecde:	e8 9d f1 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81eece3:	89 f0                	mov    %esi,%eax
 81eece5:	89 da                	mov    %ebx,%edx
 81eece7:	89 04 24             	mov    %eax,(%esp)
 81eecea:	e8 61 4a 8f 00       	call   8ae3750 <_Unwind_Resume>
 81eecef:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81eecf2:	89 04 24             	mov    %eax,(%esp)
 81eecf5:	e8 86 f1 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81eecfa:	89 d8                	mov    %ebx,%eax
 81eecfc:	81 c4 9c 01 00 00    	add    $0x19c,%esp
 81eed02:	5b                   	pop    %ebx
 81eed03:	5e                   	pop    %esi
 81eed04:	5f                   	pop    %edi
 81eed05:	5d                   	pop    %ebp
 81eed06:	c3                   	ret
 81eed07:	90                   	nop

```

```c
// DisPatcher_RentAvatar::dispatch_sig @ 0x81ee59c

/* DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_RentAvatar::dispatch_sig(DisPatcher_RentAvatar *this,CUser *param_1,PacketBuf *param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  CDataManager *this_00;
  int iVar7;
  uint uVar8;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
  int iVar11;
  int *piVar12;
  byte bVar13;
  byte local_17f;
  byte bStack_17e;
  ulong auStack_17d [12];
  int local_14c [10];
  int local_124 [10];
  int local_fc [10];
  int local_d4 [10];
  int local_ac [10];
  char local_84 [36];
  CStreamGuard local_60 [8];
  char local_58 [20];
  PacketGuard local_44 [12];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  
  bVar13 = 0;
  piVar12 = local_ac;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  PacketGuard::PacketGuard(local_44);
                    /* try { // try from 081ee5f1 to 081eeaba has its CatchHandler @ 081eecd4 */
  cVar4 = PacketBuf::get_byte(param_2,&local_17f);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x71ee,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    goto LAB_081eecef;
  }
  if ((local_17f == 0) || (9 < local_17f)) {
    uVar5 = LineFunc(0x71f0,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    goto LAB_081eecef;
  }
  for (local_34 = 0; local_34 < (int)(uint)local_17f; local_34 = local_34 + 1) {
    cVar4 = PacketBuf::get_byte(param_2,&bStack_17e + local_34 * 5);
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x71f4,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      goto LAB_081eecef;
    }
    cVar4 = PacketBuf::get_int(param_2,(ulong *)((int)auStack_17d + local_34 * 5));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x71f5,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      goto LAB_081eecef;
    }
  }
  iVar11 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar11 == 0) {
    uVar5 = LineFunc(0x71fa,"virtual int DisPatcher_RentAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    goto LAB_081eecef;
  }
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar11 = CInventory::GetRemainCapacity(pCVar6,2,0);
  if (iVar11 < (int)(uint)local_17f) {
    RentAvatarErrorProc(param_1,4);
    uVar5 = 0;
    goto LAB_081eecef;
  }
  piVar12 = local_d4;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  piVar12 = local_fc;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  piVar12 = local_124;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  piVar12 = local_14c;
  for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  for (local_34 = 0; iVar11 = local_34, local_34 < (int)(uint)local_17f; local_34 = local_34 + 1) {
    iVar7 = *(int *)((int)auStack_17d + local_34 * 5);
    this_00 = (CDataManager *)G_CDataManager();
    iVar7 = CDataManager::find_item(this_00,iVar7);
    local_ac[iVar11 + -10] = iVar7;
    iVar11 = local_34;
    if (local_ac[local_34 + -10] == 0) {
      RentAvatarErrorProc(param_1,0x11);
      uVar5 = 0;
      goto LAB_081eecef;
    }
    bVar13 = (&bStack_17e)[local_34 * 5];
    iVar7 = CItem::GetCashPrice((CItem *)local_ac[local_34 + -10]);
    iVar7 = getAvatarRentPrice(iVar7,(uint)bVar13);
    local_fc[iVar11] = iVar7;
    iVar11 = local_34;
    bVar13 = (&bStack_17e)[local_34 * 5];
    iVar7 = CItem::get_price((CItem *)local_ac[local_34 + -10]);
    iVar7 = getAvatarRentPrice(iVar7,(uint)bVar13);
    local_14c[iVar11] = iVar7;
    iVar11 = local_34;
    bVar13 = (&bStack_17e)[local_34 * 5];
    iVar7 = CItem::GetMedalPrice((CItem *)local_ac[local_34 + -10]);
    iVar7 = getAvatarRentPrice(iVar7,(uint)bVar13);
    local_124[iVar11] = iVar7;
    local_28 = local_28 + local_fc[local_34];
    local_24 = local_14c[local_34] + local_24;
    local_20 = local_20 + local_124[local_34];
  }
  uVar8 = CUser::GetCera(param_1);
  if (uVar8 < local_28) {
LAB_081ee9f7:
    bVar3 = true;
  }
  else {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar11 = CInventory::get_money(pCVar6);
    if (iVar11 < local_24) goto LAB_081ee9f7;
    uVar8 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
    if (uVar8 < local_20) goto LAB_081ee9f7;
    bVar3 = false;
  }
  if (bVar3) {
    RentAvatarErrorProc(param_1,10);
    uVar5 = 0;
  }
  else {
    for (local_34 = 0; local_34 < (int)(uint)local_17f; local_34 = local_34 + 1) {
      bVar13 = (&bStack_17e)[local_34 * 5];
      if (bVar13 == 1) {
        local_30 = 0x1e;
      }
      else if (bVar13 == 2) {
        local_30 = 0x16d;
      }
      else {
        if (bVar13 != 0) {
          RentAvatarErrorProc(param_1,1);
          uVar5 = 0;
          goto LAB_081eecef;
        }
        local_30 = 7;
      }
      local_2c = local_30 * 0x15180;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x7239);
      CStreamGuard::CStreamGuard(local_60,pSVar9,false);
      iVar11 = local_fc[local_34];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
                    /* try { // try from 081eeaf0 to 081eec8e has its CatchHandler @ 081eec91 */
      CStreamGuard::operator<<(pCVar10,iVar11);
      iVar11 = local_124[local_34];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,iVar11);
      iVar11 = local_14c[local_34];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,iVar11);
      uVar1 = *(ulong *)((int)auStack_17d + local_34 * 5);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,uVar1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,local_30);
      iVar11 = local_2c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,iVar11);
      uVar8 = (uint)local_17f;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,uVar8);
      iVar11 = local_34 + 1;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_60);
      CStreamGuard::operator<<(pCVar10,iVar11);
      OS_API::snprintf(local_58,0x14,"%d",*(undefined4 *)((int)auStack_17d + local_34 * 5));
      OS_API::snprintf(local_84,0x24,"%d",local_fc[local_34]);
      pcVar2 = *(code **)(*GlobalData::s_pIPGHelper + 0x14);
      uVar5 = CStreamGuard::Get(local_60);
      (*pcVar2)(GlobalData::s_pIPGHelper,param_1,&DAT_08bc13f9,local_84,local_58,0,0,uVar5);
                    /* try { // try from 081eecac to 081eecb0 has its CatchHandler @ 081eecd4 */
      CStreamGuard::~CStreamGuard(local_60);
    }
    uVar5 = 0;
  }
LAB_081eecef:
  PacketGuard::~PacketGuard(local_44);
  return uVar5;
}

```

