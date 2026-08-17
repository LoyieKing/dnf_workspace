# DB_UpdateQuestShopBuyingStatusList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0840568a DB_UpdateQuestShopBuyingStatusList::dispatch  [0x0840568a-0x8405c5f] ===
 840568a:	55                   	push   %ebp
 840568b:	89 e5                	mov    %esp,%ebp
 840568d:	57                   	push   %edi
 840568e:	56                   	push   %esi
 840568f:	53                   	push   %ebx
 8405690:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 8405696:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840569b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84056a2:	00 
 84056a3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84056aa:	00 
 84056ab:	89 04 24             	mov    %eax,(%esp)
 84056ae:	e8 8b fb fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84056b3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84056b6:	8b 45 14             	mov    0x14(%ebp),%eax
 84056b9:	89 04 24             	mov    %eax,(%esp)
 84056bc:	e8 cf af 04 00       	call   8450690 <_ZN6Stream12GetOutBufferI19SIG_QUEST_SHOP_DATAEEPT_v>
 84056c1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84056c4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84056c7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84056ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84056cd:	8b 00                	mov    (%eax),%eax
 84056cf:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 84056d5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84056d8:	8b 80 a6 00 00 00    	mov    0xa6(%eax),%eax
 84056de:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 84056e4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84056e7:	0f b7 40 76          	movzwl 0x76(%eax),%eax
 84056eb:	0f b7 c0             	movzwl %ax,%eax
 84056ee:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 84056f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84056f7:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 84056fb:	0f b7 c0             	movzwl %ax,%eax
 84056fe:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8405704:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405707:	0f b7 40 42          	movzwl 0x42(%eax),%eax
 840570b:	0f b7 c0             	movzwl %ax,%eax
 840570e:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 8405714:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405717:	0f b7 40 4e          	movzwl 0x4e(%eax),%eax
 840571b:	0f b7 c0             	movzwl %ax,%eax
 840571e:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 8405724:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405727:	0f b7 40 2c          	movzwl 0x2c(%eax),%eax
 840572b:	0f b7 c0             	movzwl %ax,%eax
 840572e:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 8405734:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405737:	0f b7 40 2a          	movzwl 0x2a(%eax),%eax
 840573b:	0f b7 c0             	movzwl %ax,%eax
 840573e:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 8405744:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405747:	0f b7 40 64          	movzwl 0x64(%eax),%eax
 840574b:	0f b7 c0             	movzwl %ax,%eax
 840574e:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 8405754:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405757:	0f b7 40 66          	movzwl 0x66(%eax),%eax
 840575b:	0f b7 c0             	movzwl %ax,%eax
 840575e:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 8405764:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405767:	0f b7 40 62          	movzwl 0x62(%eax),%eax
 840576b:	0f b7 c0             	movzwl %ax,%eax
 840576e:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8405774:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405777:	0f b7 40 60          	movzwl 0x60(%eax),%eax
 840577b:	0f b7 c0             	movzwl %ax,%eax
 840577e:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8405784:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405787:	0f b7 40 68          	movzwl 0x68(%eax),%eax
 840578b:	0f b7 c0             	movzwl %ax,%eax
 840578e:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 8405794:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405797:	0f b7 40 38          	movzwl 0x38(%eax),%eax
 840579b:	0f b7 c0             	movzwl %ax,%eax
 840579e:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 84057a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84057a7:	0f b7 40 3a          	movzwl 0x3a(%eax),%eax
 84057ab:	0f b7 c0             	movzwl %ax,%eax
 84057ae:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 84057b4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84057b7:	0f b7 40 36          	movzwl 0x36(%eax),%eax
 84057bb:	0f b7 c0             	movzwl %ax,%eax
 84057be:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 84057c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84057c7:	0f b7 40 34          	movzwl 0x34(%eax),%eax
 84057cb:	0f b7 c0             	movzwl %ax,%eax
 84057ce:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 84057d4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84057d7:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
 84057db:	0f b7 c0             	movzwl %ax,%eax
 84057de:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 84057e4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84057e7:	0f b7 40 46          	movzwl 0x46(%eax),%eax
 84057eb:	0f b7 c0             	movzwl %ax,%eax
 84057ee:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 84057f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84057f7:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 84057fb:	0f b7 c0             	movzwl %ax,%eax
 84057fe:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8405804:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405807:	0f b7 40 20          	movzwl 0x20(%eax),%eax
 840580b:	0f b7 c0             	movzwl %ax,%eax
 840580e:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 8405814:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405817:	0f b7 40 22          	movzwl 0x22(%eax),%eax
 840581b:	0f b7 c0             	movzwl %ax,%eax
 840581e:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8405824:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405827:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 840582b:	0f b7 c0             	movzwl %ax,%eax
 840582e:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8405834:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405837:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 840583b:	0f b7 c0             	movzwl %ax,%eax
 840583e:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8405844:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405847:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 840584b:	0f b7 f8             	movzwl %ax,%edi
 840584e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405851:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8405855:	0f b7 f0             	movzwl %ax,%esi
 8405858:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840585b:	0f b7 40 6c          	movzwl 0x6c(%eax),%eax
 840585f:	0f b7 d8             	movzwl %ax,%ebx
 8405862:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405865:	0f b7 40 26          	movzwl 0x26(%eax),%eax
 8405869:	0f b7 c8             	movzwl %ax,%ecx
 840586c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840586f:	8b 50 08             	mov    0x8(%eax),%edx
 8405872:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405875:	8b 40 04             	mov    0x4(%eax),%eax
 8405878:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 840587e:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8405884:	89 44 24 7c          	mov    %eax,0x7c(%esp)
 8405888:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 840588e:	89 44 24 78          	mov    %eax,0x78(%esp)
 8405892:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8405898:	89 44 24 74          	mov    %eax,0x74(%esp)
 840589c:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 84058a2:	89 44 24 70          	mov    %eax,0x70(%esp)
 84058a6:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 84058ac:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 84058b0:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 84058b6:	89 44 24 68          	mov    %eax,0x68(%esp)
 84058ba:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 84058c0:	89 44 24 64          	mov    %eax,0x64(%esp)
 84058c4:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 84058ca:	89 44 24 60          	mov    %eax,0x60(%esp)
 84058ce:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 84058d4:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 84058d8:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 84058de:	89 44 24 58          	mov    %eax,0x58(%esp)
 84058e2:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 84058e8:	89 44 24 54          	mov    %eax,0x54(%esp)
 84058ec:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 84058f2:	89 44 24 50          	mov    %eax,0x50(%esp)
 84058f6:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 84058fc:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 8405900:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8405906:	89 44 24 48          	mov    %eax,0x48(%esp)
 840590a:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 8405910:	89 44 24 44          	mov    %eax,0x44(%esp)
 8405914:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 840591a:	89 44 24 40          	mov    %eax,0x40(%esp)
 840591e:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8405924:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8405928:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 840592e:	89 44 24 38          	mov    %eax,0x38(%esp)
 8405932:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8405938:	89 44 24 34          	mov    %eax,0x34(%esp)
 840593c:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8405942:	89 44 24 30          	mov    %eax,0x30(%esp)
 8405946:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 840594c:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8405950:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8405956:	89 44 24 28          	mov    %eax,0x28(%esp)
 840595a:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8405960:	89 44 24 24          	mov    %eax,0x24(%esp)
 8405964:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 840596a:	89 44 24 20          	mov    %eax,0x20(%esp)
 840596e:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8405972:	89 74 24 18          	mov    %esi,0x18(%esp)
 8405976:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 840597a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 840597e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8405982:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8405988:	89 44 24 08          	mov    %eax,0x8(%esp)
 840598c:	c7 44 24 04 44 3e c4 	movl   $0x8c43e44,0x4(%esp)
 8405993:	08 
 8405994:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8405997:	89 04 24             	mov    %eax,(%esp)
 840599a:	e8 21 e8 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840599f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84059a6:	00 
 84059a7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84059aa:	89 04 24             	mov    %eax,(%esp)
 84059ad:	e8 74 e9 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84059b2:	83 f0 01             	xor    $0x1,%eax
 84059b5:	84 c0                	test   %al,%al
 84059b7:	74 0a                	je     84059c3 <_ZN34DB_UpdateQuestShopBuyingStatusList8dispatchEiiP6Stream+0x339>
 84059b9:	b8 00 00 00 00       	mov    $0x0,%eax
 84059be:	e9 91 02 00 00       	jmp    8405c54 <_ZN34DB_UpdateQuestShopBuyingStatusList8dispatchEiiP6Stream+0x5ca>
 84059c3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84059c6:	89 04 24             	mov    %eax,(%esp)
 84059c9:	e8 42 e9 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84059ce:	09 d0                	or     %edx,%eax
 84059d0:	85 c0                	test   %eax,%eax
 84059d2:	0f 94 c0             	sete   %al
 84059d5:	84 c0                	test   %al,%al
 84059d7:	0f 84 72 02 00 00    	je     8405c4f <_ZN34DB_UpdateQuestShopBuyingStatusList8dispatchEiiP6Stream+0x5c5>
 84059dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84059e0:	8b 80 a6 00 00 00    	mov    0xa6(%eax),%eax
 84059e6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 84059ec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84059ef:	0f b7 40 76          	movzwl 0x76(%eax),%eax
 84059f3:	0f b7 c0             	movzwl %ax,%eax
 84059f6:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 84059fc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84059ff:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 8405a03:	0f b7 c0             	movzwl %ax,%eax
 8405a06:	89 45 80             	mov    %eax,-0x80(%ebp)
 8405a09:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a0c:	0f b7 40 42          	movzwl 0x42(%eax),%eax
 8405a10:	0f b7 c0             	movzwl %ax,%eax
 8405a13:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8405a16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a19:	0f b7 40 4e          	movzwl 0x4e(%eax),%eax
 8405a1d:	0f b7 c0             	movzwl %ax,%eax
 8405a20:	89 45 88             	mov    %eax,-0x78(%ebp)
 8405a23:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a26:	0f b7 40 2c          	movzwl 0x2c(%eax),%eax
 8405a2a:	0f b7 c0             	movzwl %ax,%eax
 8405a2d:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8405a30:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a33:	0f b7 40 2a          	movzwl 0x2a(%eax),%eax
 8405a37:	0f b7 c0             	movzwl %ax,%eax
 8405a3a:	89 45 90             	mov    %eax,-0x70(%ebp)
 8405a3d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a40:	0f b7 40 64          	movzwl 0x64(%eax),%eax
 8405a44:	0f b7 c0             	movzwl %ax,%eax
 8405a47:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8405a4a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a4d:	0f b7 40 66          	movzwl 0x66(%eax),%eax
 8405a51:	0f b7 c0             	movzwl %ax,%eax
 8405a54:	89 45 98             	mov    %eax,-0x68(%ebp)
 8405a57:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a5a:	0f b7 40 62          	movzwl 0x62(%eax),%eax
 8405a5e:	0f b7 c0             	movzwl %ax,%eax
 8405a61:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8405a64:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a67:	0f b7 40 60          	movzwl 0x60(%eax),%eax
 8405a6b:	0f b7 c0             	movzwl %ax,%eax
 8405a6e:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8405a71:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a74:	0f b7 40 68          	movzwl 0x68(%eax),%eax
 8405a78:	0f b7 c0             	movzwl %ax,%eax
 8405a7b:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8405a7e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a81:	0f b7 40 38          	movzwl 0x38(%eax),%eax
 8405a85:	0f b7 c0             	movzwl %ax,%eax
 8405a88:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8405a8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a8e:	0f b7 40 3a          	movzwl 0x3a(%eax),%eax
 8405a92:	0f b7 c0             	movzwl %ax,%eax
 8405a95:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8405a98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405a9b:	0f b7 40 36          	movzwl 0x36(%eax),%eax
 8405a9f:	0f b7 c0             	movzwl %ax,%eax
 8405aa2:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8405aa5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405aa8:	0f b7 40 34          	movzwl 0x34(%eax),%eax
 8405aac:	0f b7 c0             	movzwl %ax,%eax
 8405aaf:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8405ab2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405ab5:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
 8405ab9:	0f b7 c0             	movzwl %ax,%eax
 8405abc:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8405abf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405ac2:	0f b7 40 46          	movzwl 0x46(%eax),%eax
 8405ac6:	0f b7 c0             	movzwl %ax,%eax
 8405ac9:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8405acc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405acf:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 8405ad3:	0f b7 c0             	movzwl %ax,%eax
 8405ad6:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8405ad9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405adc:	0f b7 40 20          	movzwl 0x20(%eax),%eax
 8405ae0:	0f b7 c0             	movzwl %ax,%eax
 8405ae3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8405ae6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405ae9:	0f b7 40 22          	movzwl 0x22(%eax),%eax
 8405aed:	0f b7 c0             	movzwl %ax,%eax
 8405af0:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8405af3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405af6:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 8405afa:	0f b7 c0             	movzwl %ax,%eax
 8405afd:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8405b00:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405b03:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8405b07:	0f b7 c0             	movzwl %ax,%eax
 8405b0a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8405b0d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405b10:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8405b14:	0f b7 c0             	movzwl %ax,%eax
 8405b17:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8405b1a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405b1d:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8405b21:	0f b7 f8             	movzwl %ax,%edi
 8405b24:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405b27:	0f b7 40 6c          	movzwl 0x6c(%eax),%eax
 8405b2b:	0f b7 f0             	movzwl %ax,%esi
 8405b2e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405b31:	0f b7 40 26          	movzwl 0x26(%eax),%eax
 8405b35:	0f b7 d8             	movzwl %ax,%ebx
 8405b38:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405b3b:	8b 48 08             	mov    0x8(%eax),%ecx
 8405b3e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405b41:	8b 50 04             	mov    0x4(%eax),%edx
 8405b44:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405b47:	8b 00                	mov    (%eax),%eax
 8405b49:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8405b4f:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8405b55:	89 44 24 7c          	mov    %eax,0x7c(%esp)
 8405b59:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8405b5f:	89 44 24 78          	mov    %eax,0x78(%esp)
 8405b63:	8b 45 80             	mov    -0x80(%ebp),%eax
 8405b66:	89 44 24 74          	mov    %eax,0x74(%esp)
 8405b6a:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8405b6d:	89 44 24 70          	mov    %eax,0x70(%esp)
 8405b71:	8b 45 88             	mov    -0x78(%ebp),%eax
 8405b74:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 8405b78:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8405b7b:	89 44 24 68          	mov    %eax,0x68(%esp)
 8405b7f:	8b 45 90             	mov    -0x70(%ebp),%eax
 8405b82:	89 44 24 64          	mov    %eax,0x64(%esp)
 8405b86:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8405b89:	89 44 24 60          	mov    %eax,0x60(%esp)
 8405b8d:	8b 45 98             	mov    -0x68(%ebp),%eax
 8405b90:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 8405b94:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8405b97:	89 44 24 58          	mov    %eax,0x58(%esp)
 8405b9b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8405b9e:	89 44 24 54          	mov    %eax,0x54(%esp)
 8405ba2:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8405ba5:	89 44 24 50          	mov    %eax,0x50(%esp)
 8405ba9:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8405bac:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 8405bb0:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8405bb3:	89 44 24 48          	mov    %eax,0x48(%esp)
 8405bb7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8405bba:	89 44 24 44          	mov    %eax,0x44(%esp)
 8405bbe:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8405bc1:	89 44 24 40          	mov    %eax,0x40(%esp)
 8405bc5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8405bc8:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8405bcc:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8405bcf:	89 44 24 38          	mov    %eax,0x38(%esp)
 8405bd3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8405bd6:	89 44 24 34          	mov    %eax,0x34(%esp)
 8405bda:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8405bdd:	89 44 24 30          	mov    %eax,0x30(%esp)
 8405be1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8405be4:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8405be8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8405beb:	89 44 24 28          	mov    %eax,0x28(%esp)
 8405bef:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8405bf2:	89 44 24 24          	mov    %eax,0x24(%esp)
 8405bf6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8405bf9:	89 44 24 20          	mov    %eax,0x20(%esp)
 8405bfd:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8405c01:	89 74 24 18          	mov    %esi,0x18(%esp)
 8405c05:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8405c09:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8405c0d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8405c11:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8405c17:	89 44 24 08          	mov    %eax,0x8(%esp)
 8405c1b:	c7 44 24 04 80 40 c4 	movl   $0x8c44080,0x4(%esp)
 8405c22:	08 
 8405c23:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8405c26:	89 04 24             	mov    %eax,(%esp)
 8405c29:	e8 92 e5 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8405c2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8405c35:	00 
 8405c36:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8405c39:	89 04 24             	mov    %eax,(%esp)
 8405c3c:	e8 e5 e6 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8405c41:	83 f0 01             	xor    $0x1,%eax
 8405c44:	84 c0                	test   %al,%al
 8405c46:	74 07                	je     8405c4f <_ZN34DB_UpdateQuestShopBuyingStatusList8dispatchEiiP6Stream+0x5c5>
 8405c48:	b8 00 00 00 00       	mov    $0x0,%eax
 8405c4d:	eb 05                	jmp    8405c54 <_ZN34DB_UpdateQuestShopBuyingStatusList8dispatchEiiP6Stream+0x5ca>
 8405c4f:	b8 01 00 00 00       	mov    $0x1,%eax
 8405c54:	81 c4 6c 01 00 00    	add    $0x16c,%esp
 8405c5a:	5b                   	pop    %ebx
 8405c5b:	5e                   	pop    %esi
 8405c5c:	5f                   	pop    %edi
 8405c5d:	5d                   	pop    %ebp
 8405c5e:	c3                   	ret
 8405c5f:	90                   	nop

```

```c
// DB_UpdateQuestShopBuyingStatusList::dispatch @ 0x840568a

/* DB_UpdateQuestShopBuyingStatusList::dispatch(int, int, Stream*) */

undefined4 DB_UpdateQuestShopBuyingStatusList::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_QUEST_SHOP_DATA *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_QUEST_SHOP_DATA>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate charac_quest_shop set qp=%u, init_count=%u, max_hp=%d, max_mp=%d, psy_attack=%d, psy_defense=%d, mag_attack=%d, mag_defence=%d, move_speed=%d, attack_speed=%d, hp_regen=%d, mp_regen=%d, all_element_resist=%d, fire_element_resist=%d, water_element_resist=%d, light_element_resist=%d, dark_element_resist=%d, all_element_attack=%d,fire_element_attack=%d, water_element_attack=%d, light_element_attack=%d, dark_element_attack=%d, psy_critical=%d, mag_critical=%d, good_hit=%d, evasion=%d, hit_recovery=%d, separate_psy_mag_attack=%d, quest_piece=%d where charac_no=%u"
                   ,*(undefined4 *)(pSVar2 + 4),*(undefined4 *)(pSVar2 + 8),
                   (uint)*(ushort *)(pSVar2 + 0x26),(uint)*(ushort *)(pSVar2 + 0x6c),
                   (uint)*(ushort *)(pSVar2 + 0xc),(uint)*(ushort *)(pSVar2 + 0x12),
                   (uint)*(ushort *)(pSVar2 + 0xe),(uint)*(ushort *)(pSVar2 + 0x10),
                   (uint)*(ushort *)(pSVar2 + 0x22),(uint)*(ushort *)(pSVar2 + 0x20),
                   (uint)*(ushort *)(pSVar2 + 0x28),(uint)*(ushort *)(pSVar2 + 0x46),
                   (uint)*(ushort *)(pSVar2 + 0x3c),(uint)*(ushort *)(pSVar2 + 0x34),
                   (uint)*(ushort *)(pSVar2 + 0x36),(uint)*(ushort *)(pSVar2 + 0x3a),
                   (uint)*(ushort *)(pSVar2 + 0x38),(uint)*(ushort *)(pSVar2 + 0x68),
                   (uint)*(ushort *)(pSVar2 + 0x60),(uint)*(ushort *)(pSVar2 + 0x62),
                   (uint)*(ushort *)(pSVar2 + 0x66),(uint)*(ushort *)(pSVar2 + 100),
                   (uint)*(ushort *)(pSVar2 + 0x2a),(uint)*(ushort *)(pSVar2 + 0x2c),
                   (uint)*(ushort *)(pSVar2 + 0x4e),(uint)*(ushort *)(pSVar2 + 0x42),
                   (uint)*(ushort *)(pSVar2 + 0x48),(uint)*(ushort *)(pSVar2 + 0x76),
                   *(undefined4 *)(pSVar2 + 0xa6),*(undefined4 *)pSVar2);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,
                       "inSert into charac_quest_shop(charac_no, qp, init_count, max_hp, max_mp, psy_attack, psy_defense, mag_attack, mag_defence, move_speed, attack_speed, hp_regen, mp_regen, all_element_resist, fire_element_resist, water_element_resist, light_element_resist, dark_element_resist, all_element_attack,fire_element_attack, water_element_attack, light_element_attack, dark_element_attack, psy_critical, mag_critical, good_hit , evasion , hit_recovery , separate_psy_mag_attack , quest_piece) values(%u, %u, %u, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)"
                       ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),
                       *(undefined4 *)(pSVar2 + 8),(uint)*(ushort *)(pSVar2 + 0x26),
                       (uint)*(ushort *)(pSVar2 + 0x6c),(uint)*(ushort *)(pSVar2 + 0xc),
                       (uint)*(ushort *)(pSVar2 + 0x12),(uint)*(ushort *)(pSVar2 + 0xe),
                       (uint)*(ushort *)(pSVar2 + 0x10),(uint)*(ushort *)(pSVar2 + 0x22),
                       (uint)*(ushort *)(pSVar2 + 0x20),(uint)*(ushort *)(pSVar2 + 0x28),
                       (uint)*(ushort *)(pSVar2 + 0x46),(uint)*(ushort *)(pSVar2 + 0x3c),
                       (uint)*(ushort *)(pSVar2 + 0x34),(uint)*(ushort *)(pSVar2 + 0x36),
                       (uint)*(ushort *)(pSVar2 + 0x3a),(uint)*(ushort *)(pSVar2 + 0x38),
                       (uint)*(ushort *)(pSVar2 + 0x68),(uint)*(ushort *)(pSVar2 + 0x60),
                       (uint)*(ushort *)(pSVar2 + 0x62),(uint)*(ushort *)(pSVar2 + 0x66),
                       (uint)*(ushort *)(pSVar2 + 100),(uint)*(ushort *)(pSVar2 + 0x2a),
                       (uint)*(ushort *)(pSVar2 + 0x2c),(uint)*(ushort *)(pSVar2 + 0x4e),
                       (uint)*(ushort *)(pSVar2 + 0x42),(uint)*(ushort *)(pSVar2 + 0x48),
                       (uint)*(ushort *)(pSVar2 + 0x76),*(undefined4 *)(pSVar2 + 0xa6));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

