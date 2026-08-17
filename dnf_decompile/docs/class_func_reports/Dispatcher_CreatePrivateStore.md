# Dispatcher_CreatePrivateStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820271c Dispatcher_CreatePrivateStore::dispatch_sig  [0x0820271c-0x8202bb5] ===
 820271c:	55                   	push   %ebp
 820271d:	89 e5                	mov    %esp,%ebp
 820271f:	57                   	push   %edi
 8202720:	56                   	push   %esi
 8202721:	53                   	push   %ebx
 8202722:	83 ec 5c             	sub    $0x5c,%esp
 8202725:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202728:	89 04 24             	mov    %eax,(%esp)
 820272b:	e8 5c 7c ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8202730:	83 f8 03             	cmp    $0x3,%eax
 8202733:	75 0f                	jne    8202744 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x28>
 8202735:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202738:	89 04 24             	mov    %eax,(%esp)
 820273b:	e8 f2 dc f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8202740:	85 c0                	test   %eax,%eax
 8202742:	75 07                	jne    820274b <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x2f>
 8202744:	b8 01 00 00 00       	mov    $0x1,%eax
 8202749:	eb 05                	jmp    8202750 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x34>
 820274b:	b8 00 00 00 00       	mov    $0x0,%eax
 8202750:	84 c0                	test   %al,%al
 8202752:	74 29                	je     820277d <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x61>
 8202754:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820275b:	00 
 820275c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202763:	00 
 8202764:	c7 44 24 04 60 f3 bc 	movl   $0x8bcf360,0x4(%esp)
 820276b:	08 
 820276c:	c7 04 24 f1 98 00 00 	movl   $0x98f1,(%esp)
 8202773:	e8 5f e1 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202778:	e9 30 04 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 820277d:	e8 25 7c ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8202782:	89 04 24             	mov    %eax,(%esp)
 8202785:	e8 94 eb ee ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 820278a:	84 c0                	test   %al,%al
 820278c:	75 12                	jne    82027a0 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x84>
 820278e:	e8 14 7c ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8202793:	89 04 24             	mov    %eax,(%esp)
 8202796:	e8 85 43 f1 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 820279b:	83 f8 07             	cmp    $0x7,%eax
 820279e:	75 07                	jne    82027a7 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x8b>
 82027a0:	b8 01 00 00 00       	mov    $0x1,%eax
 82027a5:	eb 05                	jmp    82027ac <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x90>
 82027a7:	b8 00 00 00 00       	mov    $0x0,%eax
 82027ac:	84 c0                	test   %al,%al
 82027ae:	74 25                	je     82027d5 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0xb9>
 82027b0:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 82027b7:	00 
 82027b8:	c7 44 24 04 58 00 00 	movl   $0x58,0x4(%esp)
 82027bf:	00 
 82027c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82027c3:	89 04 24             	mov    %eax,(%esp)
 82027c6:	e8 77 97 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82027cb:	b8 00 00 00 00       	mov    $0x0,%eax
 82027d0:	e9 d8 03 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 82027d5:	e8 cd 7b ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 82027da:	8b 55 0c             	mov    0xc(%ebp),%edx
 82027dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 82027e1:	89 04 24             	mov    %eax,(%esp)
 82027e4:	e8 4f a8 4c 00       	call   86cd038 <_ZN9GameWorld14getUserVillageEP5CUser>
 82027e9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82027ec:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 82027f0:	75 29                	jne    820281b <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0xff>
 82027f2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82027f9:	00 
 82027fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202801:	00 
 8202802:	c7 44 24 04 60 f3 bc 	movl   $0x8bcf360,0x4(%esp)
 8202809:	08 
 820280a:	c7 04 24 05 99 00 00 	movl   $0x9905,(%esp)
 8202811:	e8 c1 e0 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202816:	e9 92 03 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 820281b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8202822:	00 
 8202823:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202826:	89 04 24             	mov    %eax,(%esp)
 8202829:	e8 90 eb 47 00       	call   86813be <_ZN5CUser8get_areaEb>
 820282e:	89 c3                	mov    %eax,%ebx
 8202830:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8202833:	89 04 24             	mov    %eax,(%esp)
 8202836:	e8 1d 13 4c 00       	call   86c3b58 <_ZN7Village13get_gate_areaEv>
 820283b:	39 c3                	cmp    %eax,%ebx
 820283d:	0f 94 c0             	sete   %al
 8202840:	84 c0                	test   %al,%al
 8202842:	74 25                	je     8202869 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x14d>
 8202844:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 820284b:	00 
 820284c:	c7 44 24 04 58 00 00 	movl   $0x58,0x4(%esp)
 8202853:	00 
 8202854:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202857:	89 04 24             	mov    %eax,(%esp)
 820285a:	e8 e3 96 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820285f:	b8 00 00 00 00       	mov    $0x0,%eax
 8202864:	e9 44 03 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 8202869:	e8 78 fd f5 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 820286e:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 8202875:	00 
 8202876:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 820287d:	00 
 820287e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8202881:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202885:	89 04 24             	mov    %eax,(%esp)
 8202888:	e8 2b be f6 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 820288d:	84 c0                	test   %al,%al
 820288f:	74 25                	je     82028b6 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x19a>
 8202891:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 8202898:	00 
 8202899:	c7 44 24 04 58 00 00 	movl   $0x58,0x4(%esp)
 82028a0:	00 
 82028a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82028a4:	89 04 24             	mov    %eax,(%esp)
 82028a7:	e8 96 96 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82028ac:	b8 00 00 00 00       	mov    $0x0,%eax
 82028b1:	e9 f7 02 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 82028b6:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 82028bb:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 82028c2:	00 
 82028c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 82028c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82028ca:	89 04 24             	mov    %eax,(%esp)
 82028cd:	e8 30 61 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 82028d2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82028d5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82028d9:	74 27                	je     8202902 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x1e6>
 82028db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82028de:	0f b6 c0             	movzbl %al,%eax
 82028e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82028e5:	c7 44 24 04 58 00 00 	movl   $0x58,0x4(%esp)
 82028ec:	00 
 82028ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 82028f0:	89 04 24             	mov    %eax,(%esp)
 82028f3:	e8 4a 96 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82028f8:	b8 00 00 00 00       	mov    $0x0,%eax
 82028fd:	e9 ab 02 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 8202902:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8202909:	8d 45 df             	lea    -0x21(%ebp),%eax
 820290c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202910:	8b 45 10             	mov    0x10(%ebp),%eax
 8202913:	89 04 24             	mov    %eax,(%esp)
 8202916:	e8 55 a6 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 820291b:	83 f0 01             	xor    $0x1,%eax
 820291e:	84 c0                	test   %al,%al
 8202920:	74 29                	je     820294b <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x22f>
 8202922:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202929:	00 
 820292a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202931:	00 
 8202932:	c7 44 24 04 60 f3 bc 	movl   $0x8bcf360,0x4(%esp)
 8202939:	08 
 820293a:	c7 04 24 44 99 00 00 	movl   $0x9944,(%esp)
 8202941:	e8 91 df 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202946:	e9 62 02 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 820294b:	8d 45 de             	lea    -0x22(%ebp),%eax
 820294e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202952:	8b 45 10             	mov    0x10(%ebp),%eax
 8202955:	89 04 24             	mov    %eax,(%esp)
 8202958:	e8 13 a6 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 820295d:	83 f0 01             	xor    $0x1,%eax
 8202960:	84 c0                	test   %al,%al
 8202962:	74 29                	je     820298d <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x271>
 8202964:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820296b:	00 
 820296c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202973:	00 
 8202974:	c7 44 24 04 60 f3 bc 	movl   $0x8bcf360,0x4(%esp)
 820297b:	08 
 820297c:	c7 04 24 45 99 00 00 	movl   $0x9945,(%esp)
 8202983:	e8 4f df 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202988:	e9 20 02 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 820298d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8202990:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202994:	8b 45 10             	mov    0x10(%ebp),%eax
 8202997:	89 04 24             	mov    %eax,(%esp)
 820299a:	e8 21 a6 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 820299f:	83 f0 01             	xor    $0x1,%eax
 82029a2:	84 c0                	test   %al,%al
 82029a4:	74 29                	je     82029cf <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x2b3>
 82029a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82029ad:	00 
 82029ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82029b5:	00 
 82029b6:	c7 44 24 04 60 f3 bc 	movl   $0x8bcf360,0x4(%esp)
 82029bd:	08 
 82029be:	c7 04 24 46 99 00 00 	movl   $0x9946,(%esp)
 82029c5:	e8 0d df 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82029ca:	e9 de 01 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 82029cf:	8d 45 da             	lea    -0x26(%ebp),%eax
 82029d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82029d6:	8b 45 10             	mov    0x10(%ebp),%eax
 82029d9:	89 04 24             	mov    %eax,(%esp)
 82029dc:	e8 df a5 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82029e1:	83 f0 01             	xor    $0x1,%eax
 82029e4:	84 c0                	test   %al,%al
 82029e6:	74 29                	je     8202a11 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x2f5>
 82029e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82029ef:	00 
 82029f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82029f7:	00 
 82029f8:	c7 44 24 04 60 f3 bc 	movl   $0x8bcf360,0x4(%esp)
 82029ff:	08 
 8202a00:	c7 04 24 47 99 00 00 	movl   $0x9947,(%esp)
 8202a07:	e8 cb de 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202a0c:	e9 9c 01 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 8202a11:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 8202a14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202a18:	8b 45 10             	mov    0x10(%ebp),%eax
 8202a1b:	89 04 24             	mov    %eax,(%esp)
 8202a1e:	e8 8d a6 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8202a23:	83 f0 01             	xor    $0x1,%eax
 8202a26:	84 c0                	test   %al,%al
 8202a28:	74 29                	je     8202a53 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x337>
 8202a2a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202a31:	00 
 8202a32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202a39:	00 
 8202a3a:	c7 44 24 04 60 f3 bc 	movl   $0x8bcf360,0x4(%esp)
 8202a41:	08 
 8202a42:	c7 04 24 4b 99 00 00 	movl   $0x994b,(%esp)
 8202a49:	e8 89 de 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202a4e:	e9 5a 01 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 8202a53:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202a56:	89 04 24             	mov    %eax,(%esp)
 8202a59:	e8 06 2b 44 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8202a5e:	0f be d0             	movsbl %al,%edx
 8202a61:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8202a65:	0f b6 c0             	movzbl %al,%eax
 8202a68:	39 c2                	cmp    %eax,%edx
 8202a6a:	75 1e                	jne    8202a8a <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x36e>
 8202a6c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8202a73:	00 
 8202a74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202a77:	89 04 24             	mov    %eax,(%esp)
 8202a7a:	e8 3f e9 47 00       	call   86813be <_ZN5CUser8get_areaEb>
 8202a7f:	0f b6 55 de          	movzbl -0x22(%ebp),%edx
 8202a83:	0f b6 d2             	movzbl %dl,%edx
 8202a86:	39 d0                	cmp    %edx,%eax
 8202a88:	74 07                	je     8202a91 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x375>
 8202a8a:	b8 01 00 00 00       	mov    $0x1,%eax
 8202a8f:	eb 05                	jmp    8202a96 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x37a>
 8202a91:	b8 00 00 00 00       	mov    $0x0,%eax
 8202a96:	84 c0                	test   %al,%al
 8202a98:	74 25                	je     8202abf <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x3a3>
 8202a9a:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 8202aa1:	00 
 8202aa2:	c7 44 24 04 58 00 00 	movl   $0x58,0x4(%esp)
 8202aa9:	00 
 8202aaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202aad:	89 04 24             	mov    %eax,(%esp)
 8202ab0:	e8 8d 94 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8202ab5:	b8 00 00 00 00       	mov    $0x0,%eax
 8202aba:	e9 ee 00 00 00       	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 8202abf:	e8 24 21 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 8202ac4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8202ac7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8202acb:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8202ace:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202ad2:	89 04 24             	mov    %eax,(%esp)
 8202ad5:	e8 be 7b 3c 00       	call   85ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>
 8202ada:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8202add:	8b 00                	mov    (%eax),%eax
 8202adf:	8b 00                	mov    (%eax),%eax
 8202ae1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8202ae4:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 8202ae8:	0f b7 f8             	movzwl %ax,%edi
 8202aeb:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 8202aef:	0f bf f0             	movswl %ax,%esi
 8202af2:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 8202af6:	0f bf d8             	movswl %ax,%ebx
 8202af9:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 8202afd:	0f b6 c8             	movzbl %al,%ecx
 8202b00:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8202b04:	0f b6 d0             	movzbl %al,%edx
 8202b07:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8202b0a:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8202b0e:	89 74 24 10          	mov    %esi,0x10(%esp)
 8202b12:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8202b16:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8202b1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202b1e:	89 04 24             	mov    %eax,(%esp)
 8202b21:	ff 55 c4             	call   *-0x3c(%ebp)
 8202b24:	83 f0 01             	xor    $0x1,%eax
 8202b27:	84 c0                	test   %al,%al
 8202b29:	74 7d                	je     8202ba8 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x48c>
 8202b2b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8202b2e:	89 04 24             	mov    %eax,(%esp)
 8202b31:	e8 a2 1a 03 00       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 8202b36:	84 c0                	test   %al,%al
 8202b38:	0f 95 c0             	setne  %al
 8202b3b:	84 c0                	test   %al,%al
 8202b3d:	74 3a                	je     8202b79 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x45d>
 8202b3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202b42:	89 04 24             	mov    %eax,(%esp)
 8202b45:	e8 10 6e ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8202b4a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8202b51:	00 
 8202b52:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8202b59:	00 
 8202b5a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8202b61:	00 
 8202b62:	c7 44 24 08 2d 03 00 	movl   $0x32d,0x8(%esp)
 8202b69:	00 
 8202b6a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8202b6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202b71:	89 04 24             	mov    %eax,(%esp)
 8202b74:	e8 05 61 ef ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8202b79:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8202b7c:	89 04 24             	mov    %eax,(%esp)
 8202b7f:	e8 54 1a 03 00       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 8202b84:	84 c0                	test   %al,%al
 8202b86:	0f 95 c0             	setne  %al
 8202b89:	84 c0                	test   %al,%al
 8202b8b:	74 07                	je     8202b94 <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x478>
 8202b8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8202b92:	eb 19                	jmp    8202bad <_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x491>
 8202b94:	e8 4f 20 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 8202b99:	8b 55 0c             	mov    0xc(%ebp),%edx
 8202b9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202ba0:	89 04 24             	mov    %eax,(%esp)
 8202ba3:	e8 cc 7c 3c 00       	call   85ca874 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser>
 8202ba8:	b8 00 00 00 00       	mov    $0x0,%eax
 8202bad:	83 c4 5c             	add    $0x5c,%esp
 8202bb0:	5b                   	pop    %ebx
 8202bb1:	5e                   	pop    %esi
 8202bb2:	5f                   	pop    %edi
 8202bb3:	5d                   	pop    %ebp
 8202bb4:	c3                   	ret
 8202bb5:	90                   	nop

```

```c
// Dispatcher_CreatePrivateStore::dispatch_sig @ 0x820271c

/* Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CreatePrivateStore::dispatch_sig
          (Dispatcher_CreatePrivateStore *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *pGVar5;
  int iVar6;
  ServiceRestrictManager *pSVar7;
  uint uVar8;
  CPrivateStoreMgr *this_00;
  CHackAnalyzer *pCVar9;
  CUser *pCVar10;
  ushort local_32;
  ISeller *local_30;
  short local_2a;
  short local_28;
  byte local_26;
  byte local_25;
  Village *local_24;
  uint local_20;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x98f1,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
  if (cVar2 == '\0') {
    pGVar5 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(pGVar5);
    if (iVar3 != 7) {
      bVar1 = false;
      goto LAB_082027ac;
    }
  }
  bVar1 = true;
LAB_082027ac:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x58,0x3e);
    return 0;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  local_24 = (Village *)GameWorld::getUserVillage(pGVar5,param_1);
  if (local_24 == (Village *)0x0) {
    uVar4 = LineFunc(0x9905,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  iVar3 = CUser::get_area(param_1,false);
  iVar6 = Village::get_gate_area(local_24);
  if (iVar3 == iVar6) {
    CUser::SendCmdErrorPacket(param_1,0x58,0x3e);
    return 0;
  }
  pSVar7 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar7,param_1,1,0xb);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x58,0xd1);
    return 0;
  }
  local_20 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x3c);
  if (local_20 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x58,local_20 & 0xff);
    return 0;
  }
  local_30 = (ISeller *)0x0;
  cVar2 = PacketBuf::get_byte(param_2,&local_25);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9944,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_26);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9945,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_28);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9946,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_2a);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9947,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_32);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x994b,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if (((int)cVar2 == (uint)local_25) && (uVar8 = CUser::get_area(param_1,false), uVar8 == local_26))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x58,0x3e);
  }
  else {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreSeller(this_00,&local_30,param_1);
    cVar2 = (*(code *)**(undefined4 **)local_30)
                      (local_30,local_25,local_26,(int)local_28,(int)local_2a,local_32);
    if (cVar2 != '\x01') {
      cVar2 = private_store::CPrivateStore::GetState((CPrivateStore *)local_30);
      if (cVar2 != '\0') {
        pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x32d,1,0,0);
      }
      cVar2 = private_store::CPrivateStore::GetState((CPrivateStore *)local_30);
      if (cVar2 != '\0') {
        return 0;
      }
      pCVar10 = (CUser *)private_store::GetInstancePrivateStoreMgr();
      private_store::CPrivateStoreMgr::FreeStoreSeller(pCVar10);
    }
  }
  return 0;
}

```

