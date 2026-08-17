# DB_AvatarChangeStat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0840065e DB_AvatarChangeStat::dispatch  [0x0840065e-0x8400cc1] ===
 840065e:	55                   	push   %ebp
 840065f:	89 e5                	mov    %esp,%ebp
 8400661:	56                   	push   %esi
 8400662:	53                   	push   %ebx
 8400663:	83 c4 80             	add    $0xffffff80,%esp
 8400666:	8b 45 14             	mov    0x14(%ebp),%eax
 8400669:	89 04 24             	mov    %eax,(%esp)
 840066c:	e8 11 fe 04 00       	call   8450482 <_ZN6Stream12GetOutBufferI22SIG_AVATAR_CHANGE_STATEEPT_v>
 8400671:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8400674:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8400679:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400680:	00 
 8400681:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8400688:	00 
 8400689:	89 04 24             	mov    %eax,(%esp)
 840068c:	e8 ad 4b ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8400691:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8400694:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8400697:	8b 70 09             	mov    0x9(%eax),%esi
 840069a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840069d:	8b 08                	mov    (%eax),%ecx
 840069f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84006a2:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84006a6:	0f b6 d0             	movzbl %al,%edx
 84006a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84006ac:	8b 40 04             	mov    0x4(%eax),%eax
 84006af:	89 74 24 14          	mov    %esi,0x14(%esp)
 84006b3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84006b7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84006bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84006bf:	c7 44 24 04 a8 29 c4 	movl   $0x8c429a8,0x4(%esp)
 84006c6:	08 
 84006c7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84006ca:	89 04 24             	mov    %eax,(%esp)
 84006cd:	e8 ee 3a ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84006d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84006d9:	00 
 84006da:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84006dd:	89 04 24             	mov    %eax,(%esp)
 84006e0:	e8 41 3c ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84006e5:	83 f0 01             	xor    $0x1,%eax
 84006e8:	84 c0                	test   %al,%al
 84006ea:	74 0a                	je     84006f6 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x98>
 84006ec:	bb 00 00 00 00       	mov    $0x0,%ebx
 84006f1:	e9 c3 05 00 00       	jmp    8400cb9 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x65b>
 84006f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84006f9:	8b 40 04             	mov    0x4(%eax),%eax
 84006fc:	85 c0                	test   %eax,%eax
 84006fe:	0f 85 b0 05 00 00    	jne    8400cb4 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x656>
 8400704:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8400707:	8b 10                	mov    (%eax),%edx
 8400709:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840070c:	8b 40 09             	mov    0x9(%eax),%eax
 840070f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8400713:	89 44 24 08          	mov    %eax,0x8(%esp)
 8400717:	c7 44 24 04 f0 29 c4 	movl   $0x8c429f0,0x4(%esp)
 840071e:	08 
 840071f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400722:	89 04 24             	mov    %eax,(%esp)
 8400725:	e8 96 3a ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840072a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8400731:	00 
 8400732:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400735:	89 04 24             	mov    %eax,(%esp)
 8400738:	e8 e9 3b ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 840073d:	83 f0 01             	xor    $0x1,%eax
 8400740:	84 c0                	test   %al,%al
 8400742:	74 0a                	je     840074e <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0xf0>
 8400744:	bb 00 00 00 00       	mov    $0x0,%ebx
 8400749:	e9 6b 05 00 00       	jmp    8400cb9 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x65b>
 840074e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400751:	89 04 24             	mov    %eax,(%esp)
 8400754:	e8 63 3d ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8400759:	83 f0 01             	xor    $0x1,%eax
 840075c:	84 c0                	test   %al,%al
 840075e:	74 0a                	je     840076a <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x10c>
 8400760:	bb 00 00 00 00       	mov    $0x0,%ebx
 8400765:	e9 4f 05 00 00       	jmp    8400cb9 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x65b>
 840076a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 840076f:	c7 44 24 08 e2 0b 00 	movl   $0xbe2,0x8(%esp)
 8400776:	00 
 8400777:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840077e:	08 
 840077f:	89 04 24             	mov    %eax,(%esp)
 8400782:	e8 ff f2 e8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8400787:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 840078e:	00 
 840078f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400793:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8400796:	89 04 24             	mov    %eax,(%esp)
 8400799:	e8 88 84 cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 840079e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84007a1:	89 04 24             	mov    %eax,(%esp)
 84007a4:	e8 9d 84 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84007a9:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 84007b0:	00 
 84007b1:	89 04 24             	mov    %eax,(%esp)
 84007b4:	e8 9d 84 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84007b9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84007bc:	89 04 24             	mov    %eax,(%esp)
 84007bf:	e8 82 84 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84007c4:	8b 55 10             	mov    0x10(%ebp),%edx
 84007c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84007cb:	89 04 24             	mov    %eax,(%esp)
 84007ce:	e8 83 84 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84007d3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84007d6:	89 04 24             	mov    %eax,(%esp)
 84007d9:	e8 70 84 cc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84007de:	89 04 24             	mov    %eax,(%esp)
 84007e1:	e8 f0 fc 04 00       	call   84504d6 <_ZN12CStreamGuard11GetInBufferI22SIG_AVATAR_CHANGE_STATEEPT_v>
 84007e6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84007e9:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84007f0:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84007f7:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84007fe:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8400805:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 840080c:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8400813:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 840081a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8400821:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8400824:	89 44 24 08          	mov    %eax,0x8(%esp)
 8400828:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840082f:	00 
 8400830:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400833:	89 04 24             	mov    %eax,(%esp)
 8400836:	e8 f1 60 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840083b:	83 f0 01             	xor    $0x1,%eax
 840083e:	84 c0                	test   %al,%al
 8400840:	74 2c                	je     840086e <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x210>
 8400842:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8400849:	e8 b2 4f 32 00       	call   8725800 <__cxa_allocate_exception>
 840084e:	89 c2                	mov    %eax,%edx
 8400850:	c7 02 f2 0b 00 00    	movl   $0xbf2,(%edx)
 8400856:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840085d:	00 
 840085e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8400865:	09 
 8400866:	89 04 24             	mov    %eax,(%esp)
 8400869:	e8 e2 43 32 00       	call   8724c50 <__cxa_throw>
 840086e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8400871:	89 44 24 08          	mov    %eax,0x8(%esp)
 8400875:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840087c:	00 
 840087d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400880:	89 04 24             	mov    %eax,(%esp)
 8400883:	e8 a4 60 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8400888:	83 f0 01             	xor    $0x1,%eax
 840088b:	84 c0                	test   %al,%al
 840088d:	74 2c                	je     84008bb <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x25d>
 840088f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8400896:	e8 65 4f 32 00       	call   8725800 <__cxa_allocate_exception>
 840089b:	89 c2                	mov    %eax,%edx
 840089d:	c7 02 f3 0b 00 00    	movl   $0xbf3,(%edx)
 84008a3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84008aa:	00 
 84008ab:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84008b2:	09 
 84008b3:	89 04 24             	mov    %eax,(%esp)
 84008b6:	e8 95 43 32 00       	call   8724c50 <__cxa_throw>
 84008bb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84008be:	89 44 24 08          	mov    %eax,0x8(%esp)
 84008c2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84008c9:	00 
 84008ca:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84008cd:	89 04 24             	mov    %eax,(%esp)
 84008d0:	e8 57 60 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84008d5:	83 f0 01             	xor    $0x1,%eax
 84008d8:	84 c0                	test   %al,%al
 84008da:	74 2c                	je     8400908 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x2aa>
 84008dc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84008e3:	e8 18 4f 32 00       	call   8725800 <__cxa_allocate_exception>
 84008e8:	89 c2                	mov    %eax,%edx
 84008ea:	c7 02 f4 0b 00 00    	movl   $0xbf4,(%edx)
 84008f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84008f7:	00 
 84008f8:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84008ff:	09 
 8400900:	89 04 24             	mov    %eax,(%esp)
 8400903:	e8 48 43 32 00       	call   8724c50 <__cxa_throw>
 8400908:	8d 45 c8             	lea    -0x38(%ebp),%eax
 840090b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840090f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8400916:	00 
 8400917:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840091a:	89 04 24             	mov    %eax,(%esp)
 840091d:	e8 d0 19 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8400922:	83 f0 01             	xor    $0x1,%eax
 8400925:	84 c0                	test   %al,%al
 8400927:	74 2c                	je     8400955 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x2f7>
 8400929:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8400930:	e8 cb 4e 32 00       	call   8725800 <__cxa_allocate_exception>
 8400935:	89 c2                	mov    %eax,%edx
 8400937:	c7 02 f5 0b 00 00    	movl   $0xbf5,(%edx)
 840093d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400944:	00 
 8400945:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840094c:	09 
 840094d:	89 04 24             	mov    %eax,(%esp)
 8400950:	e8 fb 42 32 00       	call   8724c50 <__cxa_throw>
 8400955:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8400958:	89 44 24 08          	mov    %eax,0x8(%esp)
 840095c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8400963:	00 
 8400964:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400967:	89 04 24             	mov    %eax,(%esp)
 840096a:	e8 83 19 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840096f:	83 f0 01             	xor    $0x1,%eax
 8400972:	84 c0                	test   %al,%al
 8400974:	74 2c                	je     84009a2 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x344>
 8400976:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840097d:	e8 7e 4e 32 00       	call   8725800 <__cxa_allocate_exception>
 8400982:	89 c2                	mov    %eax,%edx
 8400984:	c7 02 f6 0b 00 00    	movl   $0xbf6,(%edx)
 840098a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400991:	00 
 8400992:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8400999:	09 
 840099a:	89 04 24             	mov    %eax,(%esp)
 840099d:	e8 ae 42 32 00       	call   8724c50 <__cxa_throw>
 84009a2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84009a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84009a9:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 84009b0:	00 
 84009b1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84009b4:	89 04 24             	mov    %eax,(%esp)
 84009b7:	e8 70 5f d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84009bc:	83 f0 01             	xor    $0x1,%eax
 84009bf:	84 c0                	test   %al,%al
 84009c1:	74 2c                	je     84009ef <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x391>
 84009c3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84009ca:	e8 31 4e 32 00       	call   8725800 <__cxa_allocate_exception>
 84009cf:	89 c2                	mov    %eax,%edx
 84009d1:	c7 02 f7 0b 00 00    	movl   $0xbf7,(%edx)
 84009d7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84009de:	00 
 84009df:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84009e6:	09 
 84009e7:	89 04 24             	mov    %eax,(%esp)
 84009ea:	e8 61 42 32 00       	call   8724c50 <__cxa_throw>
 84009ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84009f2:	83 c0 12             	add    $0x12,%eax
 84009f5:	c7 44 24 0c 18 00 00 	movl   $0x18,0xc(%esp)
 84009fc:	00 
 84009fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8400a01:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8400a08:	00 
 8400a09:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400a0c:	89 04 24             	mov    %eax,(%esp)
 8400a0f:	e8 d6 c3 ce ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8400a14:	83 f0 01             	xor    $0x1,%eax
 8400a17:	84 c0                	test   %al,%al
 8400a19:	74 2c                	je     8400a47 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x3e9>
 8400a1b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8400a22:	e8 d9 4d 32 00       	call   8725800 <__cxa_allocate_exception>
 8400a27:	89 c2                	mov    %eax,%edx
 8400a29:	c7 02 f9 0b 00 00    	movl   $0xbf9,(%edx)
 8400a2f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400a36:	00 
 8400a37:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8400a3e:	09 
 8400a3f:	89 04 24             	mov    %eax,(%esp)
 8400a42:	e8 09 42 32 00       	call   8724c50 <__cxa_throw>
 8400a47:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 8400a4a:	89 04 24             	mov    %eax,(%esp)
 8400a4d:	e8 96 fc d4 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 8400a52:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 8400a59:	00 
 8400a5a:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 8400a5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8400a61:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8400a68:	00 
 8400a69:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400a6c:	89 04 24             	mov    %eax,(%esp)
 8400a6f:	e8 a6 48 d2 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8400a74:	83 f0 01             	xor    $0x1,%eax
 8400a77:	84 c0                	test   %al,%al
 8400a79:	74 0f                	je     8400a8a <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x42c>
 8400a7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8400a80:	be 00 00 00 00       	mov    $0x0,%esi
 8400a85:	e9 1b 02 00 00       	jmp    8400ca5 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x647>
 8400a8a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8400a8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8400a91:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8400a98:	00 
 8400a99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400a9c:	89 04 24             	mov    %eax,(%esp)
 8400a9f:	e8 88 5e d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8400aa4:	83 f0 01             	xor    $0x1,%eax
 8400aa7:	84 c0                	test   %al,%al
 8400aa9:	74 2c                	je     8400ad7 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x479>
 8400aab:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8400ab2:	e8 49 4d 32 00       	call   8725800 <__cxa_allocate_exception>
 8400ab7:	89 c2                	mov    %eax,%edx
 8400ab9:	c7 02 00 0c 00 00    	movl   $0xc00,(%edx)
 8400abf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400ac6:	00 
 8400ac7:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8400ace:	09 
 8400acf:	89 04 24             	mov    %eax,(%esp)
 8400ad2:	e8 79 41 32 00       	call   8724c50 <__cxa_throw>
 8400ad7:	66 c7 45 9e 00 00    	movw   $0x0,-0x62(%ebp)
 8400add:	66 c7 45 9c 00 00    	movw   $0x0,-0x64(%ebp)
 8400ae3:	8d 45 9e             	lea    -0x62(%ebp),%eax
 8400ae6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8400aea:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8400af1:	00 
 8400af2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400af5:	89 04 24             	mov    %eax,(%esp)
 8400af8:	e8 ef d2 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8400afd:	83 f0 01             	xor    $0x1,%eax
 8400b00:	84 c0                	test   %al,%al
 8400b02:	74 2c                	je     8400b30 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x4d2>
 8400b04:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8400b0b:	e8 f0 4c 32 00       	call   8725800 <__cxa_allocate_exception>
 8400b10:	89 c2                	mov    %eax,%edx
 8400b12:	c7 02 07 0c 00 00    	movl   $0xc07,(%edx)
 8400b18:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400b1f:	00 
 8400b20:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8400b27:	09 
 8400b28:	89 04 24             	mov    %eax,(%esp)
 8400b2b:	e8 20 41 32 00       	call   8724c50 <__cxa_throw>
 8400b30:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8400b33:	89 44 24 08          	mov    %eax,0x8(%esp)
 8400b37:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8400b3e:	00 
 8400b3f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8400b42:	89 04 24             	mov    %eax,(%esp)
 8400b45:	e8 a2 d2 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8400b4a:	83 f0 01             	xor    $0x1,%eax
 8400b4d:	84 c0                	test   %al,%al
 8400b4f:	74 2c                	je     8400b7d <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x51f>
 8400b51:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8400b58:	e8 a3 4c 32 00       	call   8725800 <__cxa_allocate_exception>
 8400b5d:	89 c2                	mov    %eax,%edx
 8400b5f:	c7 02 08 0c 00 00    	movl   $0xc08,(%edx)
 8400b65:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400b6c:	00 
 8400b6d:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8400b74:	09 
 8400b75:	89 04 24             	mov    %eax,(%esp)
 8400b78:	e8 d3 40 32 00       	call   8724c50 <__cxa_throw>
 8400b7d:	0f b7 55 9e          	movzwl -0x62(%ebp),%edx
 8400b81:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400b84:	66 89 50 4d          	mov    %dx,0x4d(%eax)
 8400b88:	0f b7 55 9c          	movzwl -0x64(%ebp),%edx
 8400b8c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400b8f:	66 89 50 4f          	mov    %dx,0x4f(%eax)
 8400b93:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8400b96:	89 c2                	mov    %eax,%edx
 8400b98:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400b9b:	88 50 08             	mov    %dl,0x8(%eax)
 8400b9e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8400ba1:	89 c2                	mov    %eax,%edx
 8400ba3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400ba6:	89 10                	mov    %edx,(%eax)
 8400ba8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8400bab:	89 c2                	mov    %eax,%edx
 8400bad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400bb0:	89 50 04             	mov    %edx,0x4(%eax)
 8400bb3:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8400bb6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400bb9:	89 50 0a             	mov    %edx,0xa(%eax)
 8400bbc:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8400bbf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400bc2:	89 50 0e             	mov    %edx,0xe(%eax)
 8400bc5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8400bc8:	89 c2                	mov    %eax,%edx
 8400bca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400bcd:	88 50 09             	mov    %dl,0x9(%eax)
 8400bd0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400bd3:	8b 55 a6             	mov    -0x5a(%ebp),%edx
 8400bd6:	89 50 2f             	mov    %edx,0x2f(%eax)
 8400bd9:	8b 55 aa             	mov    -0x56(%ebp),%edx
 8400bdc:	89 50 33             	mov    %edx,0x33(%eax)
 8400bdf:	8b 55 ae             	mov    -0x52(%ebp),%edx
 8400be2:	89 50 37             	mov    %edx,0x37(%eax)
 8400be5:	8b 55 b2             	mov    -0x4e(%ebp),%edx
 8400be8:	89 50 3b             	mov    %edx,0x3b(%eax)
 8400beb:	8b 55 b6             	mov    -0x4a(%ebp),%edx
 8400bee:	89 50 3f             	mov    %edx,0x3f(%eax)
 8400bf1:	8b 55 ba             	mov    -0x46(%ebp),%edx
 8400bf4:	89 50 43             	mov    %edx,0x43(%eax)
 8400bf7:	8b 55 be             	mov    -0x42(%ebp),%edx
 8400bfa:	89 50 47             	mov    %edx,0x47(%eax)
 8400bfd:	0f b7 55 c2          	movzwl -0x3e(%ebp),%edx
 8400c01:	66 89 50 4b          	mov    %dx,0x4b(%eax)
 8400c05:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8400c08:	89 c2                	mov    %eax,%edx
 8400c0a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400c0d:	66 89 50 2b          	mov    %dx,0x2b(%eax)
 8400c11:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8400c14:	89 c2                	mov    %eax,%edx
 8400c16:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8400c19:	66 89 50 2d          	mov    %dx,0x2d(%eax)
 8400c1d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8400c22:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8400c25:	89 54 24 08          	mov    %edx,0x8(%esp)
 8400c29:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8400c30:	00 
 8400c31:	89 04 24             	mov    %eax,(%esp)
 8400c34:	e8 a5 03 17 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8400c39:	eb 48                	jmp    8400c83 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x625>
 8400c3b:	83 fa 01             	cmp    $0x1,%edx
 8400c3e:	75 4a                	jne    8400c8a <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x62c>
 8400c40:	89 04 24             	mov    %eax,(%esp)
 8400c43:	e8 98 50 32 00       	call   8725ce0 <__cxa_begin_catch>
 8400c48:	8b 00                	mov    (%eax),%eax
 8400c4a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8400c4d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8400c52:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8400c55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8400c59:	89 04 24             	mov    %eax,(%esp)
 8400c5c:	e8 1f 04 d0 ff       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 8400c61:	bb 00 00 00 00       	mov    $0x0,%ebx
 8400c66:	e8 c5 4f 32 00       	call   8725c30 <__cxa_end_catch>
 8400c6b:	eb 0f                	jmp    8400c7c <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x61e>
 8400c6d:	89 d3                	mov    %edx,%ebx
 8400c6f:	89 c6                	mov    %eax,%esi
 8400c71:	e8 ba 4f 32 00       	call   8725c30 <__cxa_end_catch>
 8400c76:	89 f0                	mov    %esi,%eax
 8400c78:	89 da                	mov    %ebx,%edx
 8400c7a:	eb 0e                	jmp    8400c8a <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x62c>
 8400c7c:	be 00 00 00 00       	mov    $0x0,%esi
 8400c81:	eb 22                	jmp    8400ca5 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x647>
 8400c83:	be 01 00 00 00       	mov    $0x1,%esi
 8400c88:	eb 1b                	jmp    8400ca5 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x647>
 8400c8a:	89 d3                	mov    %edx,%ebx
 8400c8c:	89 c6                	mov    %eax,%esi
 8400c8e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8400c91:	89 04 24             	mov    %eax,(%esp)
 8400c94:	e8 39 bc 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8400c99:	89 f0                	mov    %esi,%eax
 8400c9b:	89 da                	mov    %ebx,%edx
 8400c9d:	89 04 24             	mov    %eax,(%esp)
 8400ca0:	e8 ab 2a 6e 00       	call   8ae3750 <_Unwind_Resume>
 8400ca5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8400ca8:	89 04 24             	mov    %eax,(%esp)
 8400cab:	e8 22 bc 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8400cb0:	85 f6                	test   %esi,%esi
 8400cb2:	74 05                	je     8400cb9 <_ZN19DB_AvatarChangeStat8dispatchEiiP6Stream+0x65b>
 8400cb4:	bb 01 00 00 00       	mov    $0x1,%ebx
 8400cb9:	89 d8                	mov    %ebx,%eax
 8400cbb:	83 ec 80             	sub    $0xffffff80,%esp
 8400cbe:	5b                   	pop    %ebx
 8400cbf:	5e                   	pop    %esi
 8400cc0:	5d                   	pop    %ebp
 8400cc1:	c3                   	ret

```

```c
// DB_AvatarChangeStat::dispatch @ 0x840065e

/* DB_AvatarChangeStat::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AvatarChangeStat::dispatch(DB_AvatarChangeStat *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  undefined4 uVar7;
  short local_68;
  short local_66;
  int local_64;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined2 local_42;
  uint local_40;
  uint local_3c [5];
  CStreamGuard local_28 [8];
  SIG_AVATAR_CHANGE_STAT *local_20;
  MySQL *local_1c;
  SIG_AVATAR_CHANGE_STAT *local_18;
  undefined4 local_14;
  
  local_20 = Stream::GetOutBuffer<SIG_AVATAR_CHANGE_STAT>(param_3);
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar7 = *(undefined4 *)(local_20 + 9);
  uVar6 = *(undefined4 *)local_20;
  MySQL::set_query(local_1c,"upDate user_items set stat=%d,slot=%d where ui_id=%d and charac_no=%d",
                   *(undefined4 *)(local_20 + 4),(uint)(byte)local_20[8],uVar6,uVar7);
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  if (*(int *)(local_20 + 4) == 0) {
    MySQL::set_query(local_1c,
                     "seLect slot,ui_id,it_id,unix_timestamp(reg_date),unix_timestamp(expire_date),ability_no,ipg_agency_no,jewel_socket,hidden_option,emblem_endurance from user_items where charac_no=%u and ui_id=%d"
                     ,*(undefined4 *)(local_20 + 9),*(undefined4 *)local_20,uVar6,uVar7);
    cVar2 = MySQL::exec(local_1c,true);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::fetch(local_1c);
    if (cVar2 != '\x01') {
      return 0;
    }
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbe2);
    CStreamGuard::CStreamGuard(local_28,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 084007b4 to 084007e5 has its CatchHandler @ 08400c8a */
    CStreamGuard::operator<<(pCVar4,0x36);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_18 = CStreamGuard::GetInBuffer<SIG_AVATAR_CHANGE_STAT>(pCVar4);
    local_3c[4] = 0;
    local_3c[3] = 0;
    local_3c[2] = 0;
    local_3c[1] = 0;
    local_3c[0] = 0;
    local_40 = 0;
    local_64 = 0;
    local_14 = 0;
    cVar2 = MySQL::get_int(local_1c,0,(int *)(local_3c + 4));
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf2;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08400869 to 08400c38 has its CatchHandler @ 08400c3b */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_1c,1,(int *)(local_3c + 3));
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_1c,2,(int *)(local_3c + 2));
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_uint(local_1c,3,local_3c);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf5;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_uint(local_1c,4,&local_40);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf6;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_int(local_1c,5,(int *)(local_3c + 1));
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf7;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    cVar2 = MySQL::get_str(local_1c,6,(char *)(local_18 + 0x12),0x18);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar5 = 0xbf9;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)&local_5e);
    cVar2 = MySQL::get_binary(local_1c,7,&local_5e,0x1e);
    if (cVar2 == '\x01') {
      cVar2 = MySQL::get_int(local_1c,8,&local_64);
      if (cVar2 != '\x01') {
        puVar5 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar5 = 0xc00;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&int::typeinfo,0);
      }
      local_66 = 0;
      local_68 = 0;
      cVar2 = MySQL::get_short(local_1c,8,&local_66);
      if (cVar2 != '\x01') {
        puVar5 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar5 = 0xc07;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&int::typeinfo,0);
      }
      cVar2 = MySQL::get_short(local_1c,9,&local_68);
      if (cVar2 != '\x01') {
        puVar5 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar5 = 0xc08;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&int::typeinfo,0);
      }
      *(short *)(local_18 + 0x4d) = local_66;
      *(short *)(local_18 + 0x4f) = local_68;
      local_18[8] = SUB41(local_3c[4],0);
      *(uint *)local_18 = local_3c[3];
      *(uint *)(local_18 + 4) = local_3c[2];
      *(uint *)(local_18 + 10) = local_3c[0];
      *(uint *)(local_18 + 0xe) = local_40;
      local_18[9] = SUB41(local_3c[1],0);
      *(undefined4 *)(local_18 + 0x2f) = local_5e;
      *(undefined4 *)(local_18 + 0x33) = local_5a;
      *(undefined4 *)(local_18 + 0x37) = local_56;
      *(undefined4 *)(local_18 + 0x3b) = local_52;
      *(undefined4 *)(local_18 + 0x3f) = local_4e;
      *(undefined4 *)(local_18 + 0x43) = local_4a;
      *(undefined4 *)(local_18 + 0x47) = local_46;
      *(undefined2 *)(local_18 + 0x4b) = local_42;
      *(short *)(local_18 + 0x2b) = (short)local_64;
      *(short *)(local_18 + 0x2d) = (short)local_14;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
      bVar1 = true;
    }
    else {
      unaff_EBX = 0;
      bVar1 = false;
    }
    CStreamGuard::~CStreamGuard(local_28);
    if (!bVar1) {
      return unaff_EBX;
    }
  }
  return 1;
}

```

