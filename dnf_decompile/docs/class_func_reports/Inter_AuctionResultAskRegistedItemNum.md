# Inter_AuctionResultAskRegistedItemNum

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d5930 Inter_AuctionResultAskRegistedItemNum::dispatch_sig  [0x084d5930-0x84d6ad5] ===
 84d5930:	55                   	push   %ebp
 84d5931:	89 e5                	mov    %esp,%ebp
 84d5933:	53                   	push   %ebx
 84d5934:	81 ec e4 01 00 00    	sub    $0x1e4,%esp
 84d593a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d593e:	75 0a                	jne    84d594a <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x1a>
 84d5940:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5945:	e9 87 11 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d594a:	8b 45 10             	mov    0x10(%ebp),%eax
 84d594d:	89 45 98             	mov    %eax,-0x68(%ebp)
 84d5950:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5953:	8b 40 04             	mov    0x4(%eax),%eax
 84d5956:	89 c3                	mov    %eax,%ebx
 84d5958:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d595b:	89 04 24             	mov    %eax,(%esp)
 84d595e:	e8 eb 62 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d5963:	39 c3                	cmp    %eax,%ebx
 84d5965:	0f 95 c0             	setne  %al
 84d5968:	84 c0                	test   %al,%al
 84d596a:	74 0a                	je     84d5976 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x46>
 84d596c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5971:	e9 5b 11 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5976:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 84d597d:	eb 75                	jmp    84d59f4 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xc4>
 84d597f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84d5982:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d5989:	89 c3                	mov    %eax,%ebx
 84d598b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d598e:	89 04 24             	mov    %eax,(%esp)
 84d5991:	e8 b8 62 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d5996:	39 c3                	cmp    %eax,%ebx
 84d5998:	0f 94 c0             	sete   %al
 84d599b:	84 c0                	test   %al,%al
 84d599d:	74 51                	je     84d59f0 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xc0>
 84d599f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d59a2:	89 04 24             	mov    %eax,(%esp)
 84d59a5:	e8 a4 62 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d59aa:	89 c3                	mov    %eax,%ebx
 84d59ac:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d59b3:	00 
 84d59b4:	c7 44 24 08 a3 37 00 	movl   $0x37a3,0x8(%esp)
 84d59bb:	00 
 84d59bc:	c7 44 24 04 c0 c5 c8 	movl   $0x8c8c5c0,0x4(%esp)
 84d59c3:	08 
 84d59c4:	8d 45 88             	lea    -0x78(%ebp),%eax
 84d59c7:	89 04 24             	mov    %eax,(%esp)
 84d59ca:	e8 49 9d 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d59cf:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d59d3:	c7 44 24 08 08 92 c8 	movl   $0x8c89208,0x8(%esp)
 84d59da:	08 
 84d59db:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d59e2:	08 
 84d59e3:	8d 45 88             	lea    -0x78(%ebp),%eax
 84d59e6:	89 04 24             	mov    %eax,(%esp)
 84d59e9:	e8 9a 9d 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d59ee:	eb 0f                	jmp    84d59ff <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xcf>
 84d59f0:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 84d59f4:	83 7d c8 04          	cmpl   $0x4,-0x38(%ebp)
 84d59f8:	0f 9e c0             	setle  %al
 84d59fb:	84 c0                	test   %al,%al
 84d59fd:	75 80                	jne    84d597f <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x4f>
 84d59ff:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5a02:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84d5a06:	66 89 45 9e          	mov    %ax,-0x62(%ebp)
 84d5a0a:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5a0d:	8b 00                	mov    (%eax),%eax
 84d5a0f:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84d5a12:	66 83 7d 9e ff       	cmpw   $0xffff,-0x62(%ebp)
 84d5a17:	75 2e                	jne    84d5a47 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x117>
 84d5a19:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5a1c:	8b 00                	mov    (%eax),%eax
 84d5a1e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d5a22:	c7 44 24 08 9e 00 00 	movl   $0x9e,0x8(%esp)
 84d5a29:	00 
 84d5a2a:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d5a31:	00 
 84d5a32:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5a35:	89 04 24             	mov    %eax,(%esp)
 84d5a38:	e8 e5 65 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d5a3d:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5a42:	e9 8a 10 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5a47:	66 83 7d 9e fe       	cmpw   $0xfffe,-0x62(%ebp)
 84d5a4c:	75 2e                	jne    84d5a7c <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x14c>
 84d5a4e:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5a51:	8b 00                	mov    (%eax),%eax
 84d5a53:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d5a57:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d5a5e:	00 
 84d5a5f:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d5a66:	00 
 84d5a67:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5a6a:	89 04 24             	mov    %eax,(%esp)
 84d5a6d:	e8 b0 65 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d5a72:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5a77:	e9 55 10 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5a7c:	c7 44 24 04 1d 00 00 	movl   $0x1d,0x4(%esp)
 84d5a83:	00 
 84d5a84:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5a87:	89 04 24             	mov    %eax,(%esp)
 84d5a8a:	e8 7f 05 c1 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84d5a8f:	84 c0                	test   %al,%al
 84d5a91:	74 58                	je     84d5aeb <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x1bb>
 84d5a93:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84d5a9a:	83 7d a0 01          	cmpl   $0x1,-0x60(%ebp)
 84d5a9e:	75 09                	jne    84d5aa9 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x179>
 84d5aa0:	c7 45 cc 0a 00 00 00 	movl   $0xa,-0x34(%ebp)
 84d5aa7:	eb 07                	jmp    84d5ab0 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x180>
 84d5aa9:	c7 45 cc 1e 00 00 00 	movl   $0x1e,-0x34(%ebp)
 84d5ab0:	0f bf 45 9e          	movswl -0x62(%ebp),%eax
 84d5ab4:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 84d5ab7:	0f 8c 82 00 00 00    	jl     84d5b3f <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x20f>
 84d5abd:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5ac0:	8b 00                	mov    (%eax),%eax
 84d5ac2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d5ac6:	c7 44 24 08 97 00 00 	movl   $0x97,0x8(%esp)
 84d5acd:	00 
 84d5ace:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d5ad5:	00 
 84d5ad6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5ad9:	89 04 24             	mov    %eax,(%esp)
 84d5adc:	e8 41 65 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d5ae1:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5ae6:	e9 e6 0f 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5aeb:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84d5af2:	83 7d a0 01          	cmpl   $0x1,-0x60(%ebp)
 84d5af6:	75 09                	jne    84d5b01 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x1d1>
 84d5af8:	c7 45 d0 03 00 00 00 	movl   $0x3,-0x30(%ebp)
 84d5aff:	eb 07                	jmp    84d5b08 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x1d8>
 84d5b01:	c7 45 d0 0a 00 00 00 	movl   $0xa,-0x30(%ebp)
 84d5b08:	0f bf 45 9e          	movswl -0x62(%ebp),%eax
 84d5b0c:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 84d5b0f:	7c 2e                	jl     84d5b3f <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x20f>
 84d5b11:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5b14:	8b 00                	mov    (%eax),%eax
 84d5b16:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d5b1a:	c7 44 24 08 97 00 00 	movl   $0x97,0x8(%esp)
 84d5b21:	00 
 84d5b22:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d5b29:	00 
 84d5b2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5b2d:	89 04 24             	mov    %eax,(%esp)
 84d5b30:	e8 ed 64 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d5b35:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5b3a:	e9 92 0f 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5b3f:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 84d5b46:	83 7d a0 01          	cmpl   $0x1,-0x60(%ebp)
 84d5b4a:	75 09                	jne    84d5b55 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x225>
 84d5b4c:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 84d5b53:	eb 07                	jmp    84d5b5c <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x22c>
 84d5b55:	c7 45 a4 10 27 00 00 	movl   $0x2710,-0x5c(%ebp)
 84d5b5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5b5f:	89 04 24             	mov    %eax,(%esp)
 84d5b62:	e8 21 46 ca ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 84d5b67:	3b 45 a4             	cmp    -0x5c(%ebp),%eax
 84d5b6a:	0f 9c c0             	setl   %al
 84d5b6d:	84 c0                	test   %al,%al
 84d5b6f:	74 2e                	je     84d5b9f <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x26f>
 84d5b71:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5b74:	8b 00                	mov    (%eax),%eax
 84d5b76:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d5b7a:	c7 44 24 08 90 00 00 	movl   $0x90,0x8(%esp)
 84d5b81:	00 
 84d5b82:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d5b89:	00 
 84d5b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5b8d:	89 04 24             	mov    %eax,(%esp)
 84d5b90:	e8 8d 64 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d5b95:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5b9a:	e9 32 0f 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5b9f:	c7 45 a8 40 42 0f 00 	movl   $0xf4240,-0x58(%ebp)
 84d5ba6:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 84d5bad:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5bb0:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5bb3:	3d 87 d2 28 00       	cmp    $0x28d287,%eax
 84d5bb8:	76 4e                	jbe    84d5c08 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x2d8>
 84d5bba:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5bbd:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5bc0:	3d 99 d2 28 00       	cmp    $0x28d299,%eax
 84d5bc5:	77 41                	ja     84d5c08 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x2d8>
 84d5bc7:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5bca:	8b 00                	mov    (%eax),%eax
 84d5bcc:	83 f8 01             	cmp    $0x1,%eax
 84d5bcf:	75 37                	jne    84d5c08 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x2d8>
 84d5bd1:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5bd4:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5bd7:	3d 91 d2 28 00       	cmp    $0x28d291,%eax
 84d5bdc:	77 16                	ja     84d5bf4 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x2c4>
 84d5bde:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5be1:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5be4:	69 c0 40 42 0f 00    	imul   $0xf4240,%eax,%eax
 84d5bea:	05 40 90 9b 19       	add    $0x199b9040,%eax
 84d5bef:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84d5bf2:	eb 14                	jmp    84d5c08 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x2d8>
 84d5bf4:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5bf7:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5bfa:	69 c0 80 96 98 00    	imul   $0x989680,%eax,%eax
 84d5c00:	2d 00 a8 49 05       	sub    $0x549a800,%eax
 84d5c05:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84d5c08:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5c0b:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d5c0f:	88 45 b1             	mov    %al,-0x4f(%ebp)
 84d5c12:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5c15:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 84d5c19:	66 89 45 b2          	mov    %ax,-0x4e(%ebp)
 84d5c1d:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5c20:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5c23:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84d5c26:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5c29:	8b 40 11             	mov    0x11(%eax),%eax
 84d5c2c:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84d5c2f:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d5c35:	89 04 24             	mov    %eax,(%esp)
 84d5c38:	e8 d5 3d 01 00       	call   84e9a12 <_ZN26PCK_AUCTION_REGIST_ITEM_GAC1Ev>
 84d5c3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5c40:	89 04 24             	mov    %eax,(%esp)
 84d5c43:	e8 4e 30 bf ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84d5c48:	89 85 97 fe ff ff    	mov    %eax,-0x169(%ebp)
 84d5c4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5c51:	89 04 24             	mov    %eax,(%esp)
 84d5c54:	e8 f5 5f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d5c59:	89 85 9b fe ff ff    	mov    %eax,-0x165(%ebp)
 84d5c5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5c62:	89 04 24             	mov    %eax,(%esp)
 84d5c65:	e8 c8 a7 c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84d5c6a:	83 c0 04             	add    $0x4,%eax
 84d5c6d:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 84d5c74:	00 
 84d5c75:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5c79:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d5c7f:	83 c0 1a             	add    $0x1a,%eax
 84d5c82:	89 04 24             	mov    %eax,(%esp)
 84d5c85:	e8 46 7c ba ff       	call   807d8d0 <strncpy@plt>
 84d5c8a:	c6 85 ac fe ff ff 00 	movb   $0x0,-0x154(%ebp)
 84d5c91:	c7 44 24 04 1d 00 00 	movl   $0x1d,0x4(%esp)
 84d5c98:	00 
 84d5c99:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5c9c:	89 04 24             	mov    %eax,(%esp)
 84d5c9f:	e8 6a 03 c1 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84d5ca4:	88 85 ac fe ff ff    	mov    %al,-0x154(%ebp)
 84d5caa:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5cad:	8b 40 15             	mov    0x15(%eax),%eax
 84d5cb0:	89 85 ad fe ff ff    	mov    %eax,-0x153(%ebp)
 84d5cb6:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5cb9:	8b 40 19             	mov    0x19(%eax),%eax
 84d5cbc:	89 85 b1 fe ff ff    	mov    %eax,-0x14f(%ebp)
 84d5cc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5cc5:	89 04 24             	mov    %eax,(%esp)
 84d5cc8:	e8 93 ac e1 ff       	call   82f0960 <_ZNK15CUserCharacInfo23getCurrCharacBlackCountEv>
 84d5ccd:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 84d5cd3:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5cd6:	8b 40 1d             	mov    0x1d(%eax),%eax
 84d5cd9:	89 85 1a ff ff ff    	mov    %eax,-0xe6(%ebp)
 84d5cdf:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5ce2:	8b 50 21             	mov    0x21(%eax),%edx
 84d5ce5:	89 95 1e ff ff ff    	mov    %edx,-0xe2(%ebp)
 84d5ceb:	8b 50 25             	mov    0x25(%eax),%edx
 84d5cee:	89 95 22 ff ff ff    	mov    %edx,-0xde(%ebp)
 84d5cf4:	8b 40 29             	mov    0x29(%eax),%eax
 84d5cf7:	89 85 26 ff ff ff    	mov    %eax,-0xda(%ebp)
 84d5cfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5d00:	89 04 24             	mov    %eax,(%esp)
 84d5d03:	e8 86 45 c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84d5d08:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84d5d0b:	c7 45 c0 06 00 00 00 	movl   $0x6,-0x40(%ebp)
 84d5d12:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 84d5d18:	89 04 24             	mov    %eax,(%esp)
 84d5d1b:	e8 34 5b bf ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84d5d20:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 84d5d24:	0f 84 94 0a 00 00    	je     84d67be <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xe8e>
 84d5d2a:	0f b6 45 b1          	movzbl -0x4f(%ebp),%eax
 84d5d2e:	83 f8 01             	cmp    $0x1,%eax
 84d5d31:	74 12                	je     84d5d45 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x415>
 84d5d33:	83 f8 07             	cmp    $0x7,%eax
 84d5d36:	74 16                	je     84d5d4e <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x41e>
 84d5d38:	85 c0                	test   %eax,%eax
 84d5d3a:	75 1b                	jne    84d5d57 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x427>
 84d5d3c:	c7 45 c0 01 00 00 00 	movl   $0x1,-0x40(%ebp)
 84d5d43:	eb 40                	jmp    84d5d85 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x455>
 84d5d45:	c7 45 c0 02 00 00 00 	movl   $0x2,-0x40(%ebp)
 84d5d4c:	eb 37                	jmp    84d5d85 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x455>
 84d5d4e:	c7 45 c0 03 00 00 00 	movl   $0x3,-0x40(%ebp)
 84d5d55:	eb 2e                	jmp    84d5d85 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x455>
 84d5d57:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5d5a:	8b 00                	mov    (%eax),%eax
 84d5d5c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d5d60:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d5d67:	00 
 84d5d68:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d5d6f:	00 
 84d5d70:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5d73:	89 04 24             	mov    %eax,(%esp)
 84d5d76:	e8 a7 62 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d5d7b:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5d80:	e9 4c 0d 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5d85:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5d88:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5d8b:	3d 87 d2 28 00       	cmp    $0x28d287,%eax
 84d5d90:	0f 86 8d 01 00 00    	jbe    84d5f23 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x5f3>
 84d5d96:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5d99:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5d9c:	3d 99 d2 28 00       	cmp    $0x28d299,%eax
 84d5da1:	0f 87 7c 01 00 00    	ja     84d5f23 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x5f3>
 84d5da7:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5daa:	8b 00                	mov    (%eax),%eax
 84d5dac:	83 f8 01             	cmp    $0x1,%eax
 84d5daf:	74 2e                	je     84d5ddf <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x4af>
 84d5db1:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5db4:	8b 00                	mov    (%eax),%eax
 84d5db6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d5dba:	c7 44 24 08 93 00 00 	movl   $0x93,0x8(%esp)
 84d5dc1:	00 
 84d5dc2:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d5dc9:	00 
 84d5dca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5dcd:	89 04 24             	mov    %eax,(%esp)
 84d5dd0:	e8 4d 62 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d5dd5:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5dda:	e9 f2 0c 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5ddf:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d5de6:	00 
 84d5de7:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 84d5dee:	00 
 84d5def:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84d5df2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5df6:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d5df9:	89 04 24             	mov    %eax,(%esp)
 84d5dfc:	e8 4b 97 02 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 84d5e01:	83 f0 01             	xor    $0x1,%eax
 84d5e04:	84 c0                	test   %al,%al
 84d5e06:	74 2e                	je     84d5e36 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x506>
 84d5e08:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5e0b:	8b 00                	mov    (%eax),%eax
 84d5e0d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d5e11:	c7 44 24 08 93 00 00 	movl   $0x93,0x8(%esp)
 84d5e18:	00 
 84d5e19:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d5e20:	00 
 84d5e21:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5e24:	89 04 24             	mov    %eax,(%esp)
 84d5e27:	e8 f6 61 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d5e2c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5e31:	e9 9b 0c 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5e36:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5e39:	89 04 24             	mov    %eax,(%esp)
 84d5e3c:	e8 11 a0 17 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 84d5e41:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d5e48:	00 
 84d5e49:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d5e50:	00 
 84d5e51:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d5e58:	00 
 84d5e59:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5e5c:	89 04 24             	mov    %eax,(%esp)
 84d5e5f:	e8 f6 67 1a 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 84d5e64:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 84d5e6b:	00 
 84d5e6c:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d5e72:	89 04 24             	mov    %eax,(%esp)
 84d5e75:	e8 34 86 d5 ff       	call   822e4ae <_ZN3nsl13PACKET_HEADER11setCategoryEi>
 84d5e7a:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5e7d:	8b 40 11             	mov    0x11(%eax),%eax
 84d5e80:	89 85 bb fe ff ff    	mov    %eax,-0x145(%ebp)
 84d5e86:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d5e8c:	83 c0 65             	add    $0x65,%eax
 84d5e8f:	89 04 24             	mov    %eax,(%esp)
 84d5e92:	e8 51 a8 c7 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 84d5e97:	c6 85 b5 fe ff ff 00 	movb   $0x0,-0x14b(%ebp)
 84d5e9e:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5ea1:	8b 40 0d             	mov    0xd(%eax),%eax
 84d5ea4:	89 85 b6 fe ff ff    	mov    %eax,-0x14a(%ebp)
 84d5eaa:	66 c7 85 bf fe ff ff 	movw   $0x0,-0x141(%ebp)
 84d5eb1:	00 00 
 84d5eb3:	c7 85 c1 fe ff ff 00 	movl   $0x0,-0x13f(%ebp)
 84d5eba:	00 00 00 
 84d5ebd:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d5ec0:	8b 00                	mov    (%eax),%eax
 84d5ec2:	83 f8 01             	cmp    $0x1,%eax
 84d5ec5:	75 3b                	jne    84d5f02 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x5d2>
 84d5ec7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5eca:	89 04 24             	mov    %eax,(%esp)
 84d5ecd:	e8 a0 b1 c2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84d5ed2:	89 04 24             	mov    %eax,(%esp)
 84d5ed5:	e8 d6 84 ba ff       	call   807e3b0 <strlen@plt>
 84d5eda:	89 c3                	mov    %eax,%ebx
 84d5edc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5edf:	89 04 24             	mov    %eax,(%esp)
 84d5ee2:	e8 8b b1 c2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84d5ee7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d5eeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5eef:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d5ef5:	05 a5 00 00 00       	add    $0xa5,%eax
 84d5efa:	89 04 24             	mov    %eax,(%esp)
 84d5efd:	e8 ce 79 ba ff       	call   807d8d0 <strncpy@plt>
 84d5f02:	a1 4c be 40 09       	mov    0x940be4c,%eax
 84d5f07:	8d 95 85 fe ff ff    	lea    -0x17b(%ebp),%edx
 84d5f0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d5f11:	89 04 24             	mov    %eax,(%esp)
 84d5f14:	e8 13 1d e2 ff       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 84d5f19:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5f1e:	e9 ae 0b 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d5f23:	0f b7 55 b2          	movzwl -0x4e(%ebp),%edx
 84d5f27:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 84d5f2d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d5f31:	8b 55 c0             	mov    -0x40(%ebp),%edx
 84d5f34:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d5f38:	8b 55 bc             	mov    -0x44(%ebp),%edx
 84d5f3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d5f3f:	89 04 24             	mov    %eax,(%esp)
 84d5f42:	e8 d1 59 02 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84d5f47:	83 ec 04             	sub    $0x4,%esp
 84d5f4a:	8b 85 38 fe ff ff    	mov    -0x1c8(%ebp),%eax
 84d5f50:	89 85 4a ff ff ff    	mov    %eax,-0xb6(%ebp)
 84d5f56:	8b 85 3c fe ff ff    	mov    -0x1c4(%ebp),%eax
 84d5f5c:	89 85 4e ff ff ff    	mov    %eax,-0xb2(%ebp)
 84d5f62:	8b 85 40 fe ff ff    	mov    -0x1c0(%ebp),%eax
 84d5f68:	89 85 52 ff ff ff    	mov    %eax,-0xae(%ebp)
 84d5f6e:	8b 85 44 fe ff ff    	mov    -0x1bc(%ebp),%eax
 84d5f74:	89 85 56 ff ff ff    	mov    %eax,-0xaa(%ebp)
 84d5f7a:	8b 85 48 fe ff ff    	mov    -0x1b8(%ebp),%eax
 84d5f80:	89 85 5a ff ff ff    	mov    %eax,-0xa6(%ebp)
 84d5f86:	8b 85 4c fe ff ff    	mov    -0x1b4(%ebp),%eax
 84d5f8c:	89 85 5e ff ff ff    	mov    %eax,-0xa2(%ebp)
 84d5f92:	8b 85 50 fe ff ff    	mov    -0x1b0(%ebp),%eax
 84d5f98:	89 85 62 ff ff ff    	mov    %eax,-0x9e(%ebp)
 84d5f9e:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
 84d5fa4:	89 85 66 ff ff ff    	mov    %eax,-0x9a(%ebp)
 84d5faa:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 84d5fb0:	89 85 6a ff ff ff    	mov    %eax,-0x96(%ebp)
 84d5fb6:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 84d5fbc:	89 85 6e ff ff ff    	mov    %eax,-0x92(%ebp)
 84d5fc2:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 84d5fc8:	89 85 72 ff ff ff    	mov    %eax,-0x8e(%ebp)
 84d5fce:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 84d5fd4:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 84d5fda:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 84d5fe0:	89 85 7a ff ff ff    	mov    %eax,-0x86(%ebp)
 84d5fe6:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 84d5fec:	89 85 7e ff ff ff    	mov    %eax,-0x82(%ebp)
 84d5ff2:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 84d5ff8:	89 45 82             	mov    %eax,-0x7e(%ebp)
 84d5ffb:	0f b6 85 74 fe ff ff 	movzbl -0x18c(%ebp),%eax
 84d6002:	88 45 86             	mov    %al,-0x7a(%ebp)
 84d6005:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 84d600b:	3b 45 b4             	cmp    -0x4c(%ebp),%eax
 84d600e:	75 0d                	jne    84d601d <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x6ed>
 84d6010:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 84d6016:	3d ec 10 00 00       	cmp    $0x10ec,%eax
 84d601b:	75 2e                	jne    84d604b <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x71b>
 84d601d:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d6020:	8b 00                	mov    (%eax),%eax
 84d6022:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6026:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d602d:	00 
 84d602e:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d6035:	00 
 84d6036:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6039:	89 04 24             	mov    %eax,(%esp)
 84d603c:	e8 e1 5f 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d6041:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6046:	e9 86 0a 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d604b:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 84d604f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d6053:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84d6056:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d605a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d605d:	89 04 24             	mov    %eax,(%esp)
 84d6060:	e8 dd a1 c4 ff       	call   8120242 <_Z32IsTradeLimitAttachTypeItemByUserR5CUserii>
 84d6065:	84 c0                	test   %al,%al
 84d6067:	74 55                	je     84d60be <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x78e>
 84d6069:	c6 45 87 01          	movb   $0x1,-0x79(%ebp)
 84d606d:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 84d6071:	8d 55 87             	lea    -0x79(%ebp),%edx
 84d6074:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d6078:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d607c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84d607f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6083:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6086:	89 04 24             	mov    %eax,(%esp)
 84d6089:	e8 a0 a2 c4 ff       	call   812032e <_Z36CheckItemTradeLimitCountToMoveByUserR5CUseriiRb>
 84d608e:	0f b6 45 87          	movzbl -0x79(%ebp),%eax
 84d6092:	83 f0 01             	xor    $0x1,%eax
 84d6095:	84 c0                	test   %al,%al
 84d6097:	74 25                	je     84d60be <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x78e>
 84d6099:	c7 44 24 08 72 00 00 	movl   $0x72,0x8(%esp)
 84d60a0:	00 
 84d60a1:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d60a8:	00 
 84d60a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d60ac:	89 04 24             	mov    %eax,(%esp)
 84d60af:	e8 8e 5e 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d60b4:	b8 00 00 00 00       	mov    $0x0,%eax
 84d60b9:	e9 13 0a 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d60be:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 84d60c4:	89 04 24             	mov    %eax,(%esp)
 84d60c7:	e8 46 a7 c7 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 84d60cc:	83 f0 01             	xor    $0x1,%eax
 84d60cf:	84 c0                	test   %al,%al
 84d60d1:	74 39                	je     84d610c <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x7dc>
 84d60d3:	8b 85 51 ff ff ff    	mov    -0xaf(%ebp),%eax
 84d60d9:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 84d60dc:	7d 2e                	jge    84d610c <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x7dc>
 84d60de:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d60e1:	8b 00                	mov    (%eax),%eax
 84d60e3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d60e7:	c7 44 24 08 92 00 00 	movl   $0x92,0x8(%esp)
 84d60ee:	00 
 84d60ef:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d60f6:	00 
 84d60f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d60fa:	89 04 24             	mov    %eax,(%esp)
 84d60fd:	e8 20 5f 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d6102:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6107:	e9 c5 09 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d610c:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 84d6112:	89 c3                	mov    %eax,%ebx
 84d6114:	e8 82 60 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84d6119:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d611d:	89 04 24             	mov    %eax,(%esp)
 84d6120:	e8 0d 99 e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84d6125:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84d6128:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 84d612c:	74 12                	je     84d6140 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x810>
 84d612e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6131:	89 04 24             	mov    %eax,(%esp)
 84d6134:	e8 7b 54 db ff       	call   828b5b4 <_ZNK5CItem12isPackagableEv>
 84d6139:	83 f0 01             	xor    $0x1,%eax
 84d613c:	84 c0                	test   %al,%al
 84d613e:	74 07                	je     84d6147 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x817>
 84d6140:	b8 01 00 00 00       	mov    $0x1,%eax
 84d6145:	eb 05                	jmp    84d614c <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x81c>
 84d6147:	b8 00 00 00 00       	mov    $0x0,%eax
 84d614c:	84 c0                	test   %al,%al
 84d614e:	74 2e                	je     84d617e <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x84e>
 84d6150:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d6153:	8b 00                	mov    (%eax),%eax
 84d6155:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6159:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d6160:	00 
 84d6161:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d6168:	00 
 84d6169:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d616c:	89 04 24             	mov    %eax,(%esp)
 84d616f:	e8 ae 5e 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d6174:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6179:	e9 53 09 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d617e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6181:	8b 00                	mov    (%eax),%eax
 84d6183:	83 c0 10             	add    $0x10,%eax
 84d6186:	8b 10                	mov    (%eax),%edx
 84d6188:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d618b:	89 04 24             	mov    %eax,(%esp)
 84d618e:	ff d2                	call   *%edx
 84d6190:	83 f0 01             	xor    $0x1,%eax
 84d6193:	84 c0                	test   %al,%al
 84d6195:	0f 84 ef 00 00 00    	je     84d628a <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x95a>
 84d619b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d619e:	89 04 24             	mov    %eax,(%esp)
 84d61a1:	e8 ba aa c3 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 84d61a6:	85 c0                	test   %eax,%eax
 84d61a8:	75 0f                	jne    84d61b9 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x889>
 84d61aa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d61ad:	89 04 24             	mov    %eax,(%esp)
 84d61b0:	e8 51 b1 c1 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 84d61b5:	85 c0                	test   %eax,%eax
 84d61b7:	74 07                	je     84d61c0 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x890>
 84d61b9:	b8 01 00 00 00       	mov    $0x1,%eax
 84d61be:	eb 05                	jmp    84d61c5 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x895>
 84d61c0:	b8 00 00 00 00       	mov    $0x0,%eax
 84d61c5:	84 c0                	test   %al,%al
 84d61c7:	0f 84 3a 01 00 00    	je     84d6307 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x9d7>
 84d61cd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d61d0:	89 04 24             	mov    %eax,(%esp)
 84d61d3:	e8 88 aa c3 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 84d61d8:	85 c0                	test   %eax,%eax
 84d61da:	75 16                	jne    84d61f2 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x8c2>
 84d61dc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d61df:	89 04 24             	mov    %eax,(%esp)
 84d61e2:	e8 1f b1 c1 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 84d61e7:	85 c0                	test   %eax,%eax
 84d61e9:	75 07                	jne    84d61f2 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x8c2>
 84d61eb:	b8 01 00 00 00       	mov    $0x1,%eax
 84d61f0:	eb 05                	jmp    84d61f7 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x8c7>
 84d61f2:	b8 00 00 00 00       	mov    $0x0,%eax
 84d61f7:	84 c0                	test   %al,%al
 84d61f9:	74 2e                	je     84d6229 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x8f9>
 84d61fb:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d61fe:	8b 00                	mov    (%eax),%eax
 84d6200:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6204:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d620b:	00 
 84d620c:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d6213:	00 
 84d6214:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6217:	89 04 24             	mov    %eax,(%esp)
 84d621a:	e8 03 5e 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d621f:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6224:	e9 a8 08 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d6229:	0f b7 85 55 ff ff ff 	movzwl -0xab(%ebp),%eax
 84d6230:	0f b7 c0             	movzwl %ax,%eax
 84d6233:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 84d6239:	05 80 4a a5 44       	add    $0x44a54a80,%eax
 84d623e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84d6241:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84d6248:	e8 51 5a bf ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84d624d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84d6250:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d6253:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84d6256:	0f 8f ab 00 00 00    	jg     84d6307 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x9d7>
 84d625c:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d625f:	8b 00                	mov    (%eax),%eax
 84d6261:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6265:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d626c:	00 
 84d626d:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d6274:	00 
 84d6275:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6278:	89 04 24             	mov    %eax,(%esp)
 84d627b:	e8 a2 5d 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d6280:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6285:	e9 47 08 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d628a:	8b 9d 51 ff ff ff    	mov    -0xaf(%ebp),%ebx
 84d6290:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6293:	89 04 24             	mov    %eax,(%esp)
 84d6296:	e8 e3 3f c0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84d629b:	89 04 24             	mov    %eax,(%esp)
 84d629e:	e8 d3 72 c0 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 84d62a3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d62a7:	89 04 24             	mov    %eax,(%esp)
 84d62aa:	e8 6b 35 e2 ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 84d62af:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d62b2:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84d62b6:	74 18                	je     84d62d0 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x9a0>
 84d62b8:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84d62bf:	e8 da 59 bf ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84d62c4:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84d62c7:	7e 07                	jle    84d62d0 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x9a0>
 84d62c9:	b8 01 00 00 00       	mov    $0x1,%eax
 84d62ce:	eb 05                	jmp    84d62d5 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x9a5>
 84d62d0:	b8 00 00 00 00       	mov    $0x0,%eax
 84d62d5:	84 c0                	test   %al,%al
 84d62d7:	74 2e                	je     84d6307 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x9d7>
 84d62d9:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d62dc:	8b 00                	mov    (%eax),%eax
 84d62de:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d62e2:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d62e9:	00 
 84d62ea:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d62f1:	00 
 84d62f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d62f5:	89 04 24             	mov    %eax,(%esp)
 84d62f8:	e8 25 5d 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d62fd:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6302:	e9 ca 07 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d6307:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 84d630e:	3c 05                	cmp    $0x5,%al
 84d6310:	75 54                	jne    84d6366 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xa36>
 84d6312:	8b 9d 51 ff ff ff    	mov    -0xaf(%ebp),%ebx
 84d6318:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d631b:	89 04 24             	mov    %eax,(%esp)
 84d631e:	e8 e5 10 ce ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 84d6323:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d6327:	89 04 24             	mov    %eax,(%esp)
 84d632a:	e8 63 2f e6 ff       	call   8339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>
 84d632f:	85 c0                	test   %eax,%eax
 84d6331:	0f 94 c0             	sete   %al
 84d6334:	84 c0                	test   %al,%al
 84d6336:	74 2e                	je     84d6366 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xa36>
 84d6338:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d633b:	8b 00                	mov    (%eax),%eax
 84d633d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6341:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d6348:	00 
 84d6349:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d6350:	00 
 84d6351:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6354:	89 04 24             	mov    %eax,(%esp)
 84d6357:	e8 c6 5c 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d635c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6361:	e9 6b 07 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d6366:	0f b6 85 ac fe ff ff 	movzbl -0x154(%ebp),%eax
 84d636d:	84 c0                	test   %al,%al
 84d636f:	75 31                	jne    84d63a2 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xa72>
 84d6371:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6374:	89 04 24             	mov    %eax,(%esp)
 84d6377:	e8 da 64 d5 ff       	call   822c856 <_ZNK5CItem12GetCashPriceEv>
 84d637c:	85 c0                	test   %eax,%eax
 84d637e:	74 22                	je     84d63a2 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xa72>
 84d6380:	e8 16 5e bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84d6385:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84d6388:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d638c:	89 04 24             	mov    %eax,(%esp)
 84d638f:	e8 10 2f 01 00       	call   84e92a4 <_ZNK12CDataManager25is_AuctionRegFreeCeraItemEj>
 84d6394:	83 f0 01             	xor    $0x1,%eax
 84d6397:	84 c0                	test   %al,%al
 84d6399:	74 07                	je     84d63a2 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xa72>
 84d639b:	b8 01 00 00 00       	mov    $0x1,%eax
 84d63a0:	eb 05                	jmp    84d63a7 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xa77>
 84d63a2:	b8 00 00 00 00       	mov    $0x0,%eax
 84d63a7:	84 c0                	test   %al,%al
 84d63a9:	74 2e                	je     84d63d9 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xaa9>
 84d63ab:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d63ae:	8b 00                	mov    (%eax),%eax
 84d63b0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d63b4:	c7 44 24 08 95 00 00 	movl   $0x95,0x8(%esp)
 84d63bb:	00 
 84d63bc:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d63c3:	00 
 84d63c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d63c7:	89 04 24             	mov    %eax,(%esp)
 84d63ca:	e8 53 5c 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d63cf:	b8 00 00 00 00       	mov    $0x0,%eax
 84d63d4:	e9 f8 06 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d63d9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d63dc:	89 04 24             	mov    %eax,(%esp)
 84d63df:	e8 fe ae c1 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 84d63e4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84d63e7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84d63ea:	83 f8 05             	cmp    $0x5,%eax
 84d63ed:	77 73                	ja     84d6462 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xb32>
 84d63ef:	8b 04 85 2c 92 c8 08 	mov    0x8c8922c(,%eax,4),%eax
 84d63f6:	ff e0                	jmp    *%eax
 84d63f8:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d63fb:	8b 00                	mov    (%eax),%eax
 84d63fd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6401:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d6408:	00 
 84d6409:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d6410:	00 
 84d6411:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6414:	89 04 24             	mov    %eax,(%esp)
 84d6417:	e8 06 5c 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d641c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6421:	e9 ab 06 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d6426:	0f b6 85 4a ff ff ff 	movzbl -0xb6(%ebp),%eax
 84d642d:	83 f0 01             	xor    $0x1,%eax
 84d6430:	84 c0                	test   %al,%al
 84d6432:	74 2e                	je     84d6462 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xb32>
 84d6434:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d6437:	8b 00                	mov    (%eax),%eax
 84d6439:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d643d:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d6444:	00 
 84d6445:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d644c:	00 
 84d644d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6450:	89 04 24             	mov    %eax,(%esp)
 84d6453:	e8 ca 5b 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d6458:	b8 00 00 00 00       	mov    $0x0,%eax
 84d645d:	e9 6f 06 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d6462:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 84d6468:	83 c0 33             	add    $0x33,%eax
 84d646b:	89 04 24             	mov    %eax,(%esp)
 84d646e:	e8 97 a6 c3 ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 84d6473:	84 c0                	test   %al,%al
 84d6475:	0f 95 c0             	setne  %al
 84d6478:	84 c0                	test   %al,%al
 84d647a:	74 25                	je     84d64a1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xb71>
 84d647c:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d6483:	00 
 84d6484:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d648b:	00 
 84d648c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d648f:	89 04 24             	mov    %eax,(%esp)
 84d6492:	e8 ab 5a 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d6497:	b8 00 00 00 00       	mov    $0x0,%eax
 84d649c:	e9 30 06 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d64a1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d64a4:	8b 00                	mov    (%eax),%eax
 84d64a6:	83 c0 10             	add    $0x10,%eax
 84d64a9:	8b 10                	mov    (%eax),%edx
 84d64ab:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d64ae:	89 04 24             	mov    %eax,(%esp)
 84d64b1:	ff d2                	call   *%edx
 84d64b3:	84 c0                	test   %al,%al
 84d64b5:	0f 84 9f 00 00 00    	je     84d655a <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xc2a>
 84d64bb:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d64be:	89 04 24             	mov    %eax,(%esp)
 84d64c1:	e8 b0 70 c0 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 84d64c6:	8b 85 51 ff ff ff    	mov    -0xaf(%ebp),%eax
 84d64cc:	89 04 24             	mov    %eax,(%esp)
 84d64cf:	e8 39 6d d5 ff       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 84d64d4:	84 c0                	test   %al,%al
 84d64d6:	74 2e                	je     84d6506 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xbd6>
 84d64d8:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d64db:	8b 00                	mov    (%eax),%eax
 84d64dd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d64e1:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d64e8:	00 
 84d64e9:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d64f0:	00 
 84d64f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d64f4:	89 04 24             	mov    %eax,(%esp)
 84d64f7:	e8 26 5b 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d64fc:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6501:	e9 cb 05 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d6506:	8b 9d 51 ff ff ff    	mov    -0xaf(%ebp),%ebx
 84d650c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d650f:	89 04 24             	mov    %eax,(%esp)
 84d6512:	e8 5f 70 c0 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 84d6517:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d651b:	89 04 24             	mov    %eax,(%esp)
 84d651e:	e8 f7 32 e2 ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 84d6523:	85 c0                	test   %eax,%eax
 84d6525:	0f 95 c0             	setne  %al
 84d6528:	84 c0                	test   %al,%al
 84d652a:	74 2e                	je     84d655a <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xc2a>
 84d652c:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d652f:	8b 00                	mov    (%eax),%eax
 84d6531:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6535:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 84d653c:	00 
 84d653d:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d6544:	00 
 84d6545:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6548:	89 04 24             	mov    %eax,(%esp)
 84d654b:	e8 d2 5a 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d6550:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6555:	e9 77 05 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d655a:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 84d6560:	89 04 24             	mov    %eax,(%esp)
 84d6563:	e8 aa a2 c7 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 84d6568:	83 f0 01             	xor    $0x1,%eax
 84d656b:	84 c0                	test   %al,%al
 84d656d:	74 0b                	je     84d657a <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xc4a>
 84d656f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84d6572:	89 85 bb fe ff ff    	mov    %eax,-0x145(%ebp)
 84d6578:	eb 0c                	jmp    84d6586 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xc56>
 84d657a:	8b 85 51 ff ff ff    	mov    -0xaf(%ebp),%eax
 84d6580:	89 85 bb fe ff ff    	mov    %eax,-0x145(%ebp)
 84d6586:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 84d658c:	89 04 24             	mov    %eax,(%esp)
 84d658f:	e8 48 a2 c7 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 84d6594:	88 85 ba fe ff ff    	mov    %al,-0x146(%ebp)
 84d659a:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d65a0:	83 c0 65             	add    $0x65,%eax
 84d65a3:	89 04 24             	mov    %eax,(%esp)
 84d65a6:	e8 3d a1 c7 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 84d65ab:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d65ae:	8b 00                	mov    (%eax),%eax
 84d65b0:	83 c0 10             	add    $0x10,%eax
 84d65b3:	8b 10                	mov    (%eax),%edx
 84d65b5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d65b8:	89 04 24             	mov    %eax,(%esp)
 84d65bb:	ff d2                	call   *%edx
 84d65bd:	84 c0                	test   %al,%al
 84d65bf:	0f 84 b6 00 00 00    	je     84d667b <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xd4b>
 84d65c5:	8b 9d 51 ff ff ff    	mov    -0xaf(%ebp),%ebx
 84d65cb:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d65ce:	89 04 24             	mov    %eax,(%esp)
 84d65d1:	e8 a0 6f c0 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 84d65d6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d65da:	89 04 24             	mov    %eax,(%esp)
 84d65dd:	e8 16 33 e2 ff       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 84d65e2:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 84d65e9:	00 
 84d65ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d65ee:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d65f4:	83 c0 65             	add    $0x65,%eax
 84d65f7:	89 04 24             	mov    %eax,(%esp)
 84d65fa:	e8 a1 72 ba ff       	call   807d8a0 <memcpy@plt>
 84d65ff:	8b 9d 51 ff ff ff    	mov    -0xaf(%ebp),%ebx
 84d6605:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d6608:	89 04 24             	mov    %eax,(%esp)
 84d660b:	e8 66 6f c0 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 84d6610:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d6614:	89 04 24             	mov    %eax,(%esp)
 84d6617:	e8 12 33 e2 ff       	call   82f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>
 84d661c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84d661f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 84d6623:	74 24                	je     84d6649 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xd19>
 84d6625:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84d662c:	00 
 84d662d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d6630:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6634:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d663a:	05 83 00 00 00       	add    $0x83,%eax
 84d663f:	89 04 24             	mov    %eax,(%esp)
 84d6642:	e8 59 72 ba ff       	call   807d8a0 <memcpy@plt>
 84d6647:	eb 13                	jmp    84d665c <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xd2c>
 84d6649:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d664f:	05 83 00 00 00       	add    $0x83,%eax
 84d6654:	89 04 24             	mov    %eax,(%esp)
 84d6657:	e8 c2 db e5 ff       	call   833421e <_ZN23stAvatarExpansionInfo_t4initEv>
 84d665c:	0f b7 85 ea fe ff ff 	movzwl -0x116(%ebp),%eax
 84d6663:	66 85 c0             	test   %ax,%ax
 84d6666:	74 13                	je     84d667b <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xd4b>
 84d6668:	0f b6 85 ba fe ff ff 	movzbl -0x146(%ebp),%eax
 84d666f:	83 e0 e0             	and    $0xffffffe0,%eax
 84d6672:	83 c8 01             	or     $0x1,%eax
 84d6675:	88 85 ba fe ff ff    	mov    %al,-0x146(%ebp)
 84d667b:	0f b6 85 4a ff ff ff 	movzbl -0xb6(%ebp),%eax
 84d6682:	88 85 b5 fe ff ff    	mov    %al,-0x14b(%ebp)
 84d6688:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 84d668e:	89 85 b6 fe ff ff    	mov    %eax,-0x14a(%ebp)
 84d6694:	0f b7 85 55 ff ff ff 	movzwl -0xab(%ebp),%eax
 84d669b:	66 89 85 bf fe ff ff 	mov    %ax,-0x141(%ebp)
 84d66a2:	8b 85 57 ff ff ff    	mov    -0xa9(%ebp),%eax
 84d66a8:	89 85 c1 fe ff ff    	mov    %eax,-0x13f(%ebp)
 84d66ae:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d66b4:	83 c0 41             	add    $0x41,%eax
 84d66b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d66bb:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d66c1:	83 c0 40             	add    $0x40,%eax
 84d66c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d66c8:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 84d66ce:	83 c0 11             	add    $0x11,%eax
 84d66d1:	89 04 24             	mov    %eax,(%esp)
 84d66d4:	e8 b7 6d f7 ff       	call   844d490 <_ZNK17stAmplifyOption_t9getValuesERhRt>
 84d66d9:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 84d66df:	89 85 c8 fe ff ff    	mov    %eax,-0x138(%ebp)
 84d66e5:	8b 85 63 ff ff ff    	mov    -0x9d(%ebp),%eax
 84d66eb:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 84d66f1:	0f b7 85 67 ff ff ff 	movzwl -0x99(%ebp),%eax
 84d66f8:	66 89 85 d0 fe ff ff 	mov    %ax,-0x130(%ebp)
 84d66ff:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 84d6705:	89 85 d2 fe ff ff    	mov    %eax,-0x12e(%ebp)
 84d670b:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 84d6711:	89 85 d6 fe ff ff    	mov    %eax,-0x12a(%ebp)
 84d6717:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 84d671d:	89 85 da fe ff ff    	mov    %eax,-0x126(%ebp)
 84d6723:	0f b7 85 7b ff ff ff 	movzwl -0x85(%ebp),%eax
 84d672a:	66 89 85 de fe ff ff 	mov    %ax,-0x122(%ebp)
 84d6731:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 84d6737:	83 c0 33             	add    $0x33,%eax
 84d673a:	89 04 24             	mov    %eax,(%esp)
 84d673d:	e8 16 86 c4 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 84d6742:	0f b6 c0             	movzbl %al,%eax
 84d6745:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6749:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d674f:	83 c0 5b             	add    $0x5b,%eax
 84d6752:	89 04 24             	mov    %eax,(%esp)
 84d6755:	e8 10 29 01 00       	call   84e906a <_ZN19UpgradeSeparateInfo18SetUpgradeSeparateEh>
 84d675a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d675d:	8b 00                	mov    (%eax),%eax
 84d675f:	83 c0 4c             	add    $0x4c,%eax
 84d6762:	8b 10                	mov    (%eax),%edx
 84d6764:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6767:	89 04 24             	mov    %eax,(%esp)
 84d676a:	ff d2                	call   *%edx
 84d676c:	84 c0                	test   %al,%al
 84d676e:	74 3b                	je     84d67ab <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xe7b>
 84d6770:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84d6777:	eb 27                	jmp    84d67a0 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xe70>
 84d6779:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d677c:	83 c0 48             	add    $0x48,%eax
 84d677f:	0f b7 84 45 8e fe ff 	movzwl -0x172(%ebp,%eax,2),%eax
 84d6786:	ff 
 84d6787:	66 85 c0             	test   %ax,%ax
 84d678a:	75 10                	jne    84d679c <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xe6c>
 84d678c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d678f:	83 c0 48             	add    $0x48,%eax
 84d6792:	66 c7 84 45 8e fe ff 	movw   $0x7530,-0x172(%ebp,%eax,2)
 84d6799:	ff 30 75 
 84d679c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84d67a0:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 84d67a4:	0f 9e c0             	setle  %al
 84d67a7:	84 c0                	test   %al,%al
 84d67a9:	75 ce                	jne    84d6779 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xe49>
 84d67ab:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d67b1:	05 99 00 00 00       	add    $0x99,%eax
 84d67b6:	89 04 24             	mov    %eax,(%esp)
 84d67b9:	e8 72 44 d5 ff       	call   822ac30 <_ZN12ROI_Category5_sortEv>
 84d67be:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d67c1:	8b 00                	mov    (%eax),%eax
 84d67c3:	83 f8 01             	cmp    $0x1,%eax
 84d67c6:	75 07                	jne    84d67cf <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xe9f>
 84d67c8:	b8 00 00 00 00       	mov    $0x0,%eax
 84d67cd:	eb 05                	jmp    84d67d4 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xea4>
 84d67cf:	b8 10 27 00 00       	mov    $0x2710,%eax
 84d67d4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84d67d7:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d67de:	00 
 84d67df:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 84d67e6:	00 
 84d67e7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84d67ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d67ee:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d67f1:	89 04 24             	mov    %eax,(%esp)
 84d67f4:	e8 53 8d 02 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 84d67f9:	83 f0 01             	xor    $0x1,%eax
 84d67fc:	84 c0                	test   %al,%al
 84d67fe:	74 2e                	je     84d682e <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xefe>
 84d6800:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d6803:	8b 00                	mov    (%eax),%eax
 84d6805:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6809:	c7 44 24 08 93 00 00 	movl   $0x93,0x8(%esp)
 84d6810:	00 
 84d6811:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d6818:	00 
 84d6819:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d681c:	89 04 24             	mov    %eax,(%esp)
 84d681f:	e8 fe 57 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d6824:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6829:	e9 a3 02 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d682e:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 84d6834:	85 c0                	test   %eax,%eax
 84d6836:	0f 84 33 02 00 00    	je     84d6a6f <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x113f>
 84d683c:	0f b6 85 4b ff ff ff 	movzbl -0xb5(%ebp),%eax
 84d6843:	3c 08                	cmp    $0x8,%al
 84d6845:	0f 85 1f 01 00 00    	jne    84d696a <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x103a>
 84d684b:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 84d684f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84d6856:	00 
 84d6857:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 84d685e:	00 
 84d685f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d6866:	00 
 84d6867:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d686b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d6872:	00 
 84d6873:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d6876:	89 04 24             	mov    %eax,(%esp)
 84d6879:	e8 8e d7 02 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 84d687e:	83 f0 01             	xor    $0x1,%eax
 84d6881:	84 c0                	test   %al,%al
 84d6883:	0f 84 87 00 00 00    	je     84d6910 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xfe0>
 84d6889:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d688c:	8b 00                	mov    (%eax),%eax
 84d688e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6892:	c7 44 24 08 94 00 00 	movl   $0x94,0x8(%esp)
 84d6899:	00 
 84d689a:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d68a1:	00 
 84d68a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d68a5:	89 04 24             	mov    %eax,(%esp)
 84d68a8:	e8 75 57 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d68ad:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d68b4:	00 
 84d68b5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d68bc:	00 
 84d68bd:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 84d68c4:	00 
 84d68c5:	c7 44 24 04 10 27 00 	movl   $0x2710,0x4(%esp)
 84d68cc:	00 
 84d68cd:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d68d0:	89 04 24             	mov    %eax,(%esp)
 84d68d3:	e8 c4 89 02 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 84d68d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d68db:	81 7d f0 0f 27 00 00 	cmpl   $0x270f,-0x10(%ebp)
 84d68e2:	7f 22                	jg     84d6906 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0xfd6>
 84d68e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d68e7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d68eb:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 84d68f2:	00 
 84d68f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d68fa:	00 
 84d68fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d68fe:	89 04 24             	mov    %eax,(%esp)
 84d6901:	e8 3e 5f 1a 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 84d6906:	b8 00 00 00 00       	mov    $0x0,%eax
 84d690b:	e9 c1 01 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d6910:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 84d6914:	8d 50 0a             	lea    0xa(%eax),%edx
 84d6917:	8b 85 51 ff ff ff    	mov    -0xaf(%ebp),%eax
 84d691d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84d6924:	00 
 84d6925:	89 54 24 10          	mov    %edx,0x10(%esp)
 84d6929:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 84d6930:	00 
 84d6931:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d6935:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 84d693c:	00 
 84d693d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d6940:	89 04 24             	mov    %eax,(%esp)
 84d6943:	e8 e6 22 03 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 84d6948:	8b 9d 51 ff ff ff    	mov    -0xaf(%ebp),%ebx
 84d694e:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d6951:	89 04 24             	mov    %eax,(%esp)
 84d6954:	e8 13 a3 c3 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 84d6959:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d695d:	89 04 24             	mov    %eax,(%esp)
 84d6960:	e8 9d 2a e2 ff       	call   82f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>
 84d6965:	e9 c6 00 00 00       	jmp    84d6a30 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x1100>
 84d696a:	8b 8d bb fe ff ff    	mov    -0x145(%ebp),%ecx
 84d6970:	0f b7 55 b2          	movzwl -0x4e(%ebp),%edx
 84d6974:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84d6977:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84d697e:	00 
 84d697f:	c7 44 24 10 19 00 00 	movl   $0x19,0x10(%esp)
 84d6986:	00 
 84d6987:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84d698b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d698f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6993:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d6996:	89 04 24             	mov    %eax,(%esp)
 84d6999:	e8 6e d6 02 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 84d699e:	83 f0 01             	xor    $0x1,%eax
 84d69a1:	84 c0                	test   %al,%al
 84d69a3:	0f 84 87 00 00 00    	je     84d6a30 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x1100>
 84d69a9:	8b 45 98             	mov    -0x68(%ebp),%eax
 84d69ac:	8b 00                	mov    (%eax),%eax
 84d69ae:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d69b2:	c7 44 24 08 94 00 00 	movl   $0x94,0x8(%esp)
 84d69b9:	00 
 84d69ba:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 84d69c1:	00 
 84d69c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d69c5:	89 04 24             	mov    %eax,(%esp)
 84d69c8:	e8 55 56 1a 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 84d69cd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d69d4:	00 
 84d69d5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d69dc:	00 
 84d69dd:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 84d69e4:	00 
 84d69e5:	c7 44 24 04 10 27 00 	movl   $0x2710,0x4(%esp)
 84d69ec:	00 
 84d69ed:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d69f0:	89 04 24             	mov    %eax,(%esp)
 84d69f3:	e8 a4 88 02 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 84d69f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d69fb:	81 7d f4 0f 27 00 00 	cmpl   $0x270f,-0xc(%ebp)
 84d6a02:	7f 22                	jg     84d6a26 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x10f6>
 84d6a04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d6a07:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6a0b:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 84d6a12:	00 
 84d6a13:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d6a1a:	00 
 84d6a1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6a1e:	89 04 24             	mov    %eax,(%esp)
 84d6a21:	e8 1e 5e 1a 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 84d6a26:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6a2b:	e9 a1 00 00 00       	jmp    84d6ad1 <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x11a1>
 84d6a30:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 84d6a36:	89 04 24             	mov    %eax,(%esp)
 84d6a39:	e8 38 f1 e5 ff       	call   8335b76 <_ZNK10Inven_Item18IsCreatureItemTypeEv>
 84d6a3e:	84 c0                	test   %al,%al
 84d6a40:	74 2d                	je     84d6a6f <_ZN37Inter_AuctionResultAskRegistedItemNum12dispatch_sigEP5CUserPci+0x113f>
 84d6a42:	0f b7 5d b2          	movzwl -0x4e(%ebp),%ebx
 84d6a46:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84d6a49:	89 04 24             	mov    %eax,(%esp)
 84d6a4c:	e8 17 6b c0 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 84d6a51:	c7 44 24 0c 19 00 00 	movl   $0x19,0xc(%esp)
 84d6a58:	00 
 84d6a59:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d6a5d:	8d 95 4a ff ff ff    	lea    -0xb6(%ebp),%edx
 84d6a63:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d6a67:	89 04 24             	mov    %eax,(%esp)
 84d6a6a:	e8 2d 46 e6 ff       	call   833b09c <_ZN13user_creature12CCreatureMgr13AuctionRegistEP10Inven_Itemii>
 84d6a6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6a72:	89 04 24             	mov    %eax,(%esp)
 84d6a75:	e8 d8 93 17 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 84d6a7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6a7d:	89 04 24             	mov    %eax,(%esp)
 84d6a80:	e8 ed a5 c2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84d6a85:	89 04 24             	mov    %eax,(%esp)
 84d6a88:	e8 23 79 ba ff       	call   807e3b0 <strlen@plt>
 84d6a8d:	89 c3                	mov    %eax,%ebx
 84d6a8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6a92:	89 04 24             	mov    %eax,(%esp)
 84d6a95:	e8 d8 a5 c2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84d6a9a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d6a9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6aa2:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 84d6aa8:	05 a5 00 00 00       	add    $0xa5,%eax
 84d6aad:	89 04 24             	mov    %eax,(%esp)
 84d6ab0:	e8 1b 6e ba ff       	call   807d8d0 <strncpy@plt>
 84d6ab5:	a1 48 be 40 09       	mov    0x940be48,%eax
 84d6aba:	8d 95 85 fe ff ff    	lea    -0x17b(%ebp),%edx
 84d6ac0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d6ac4:	89 04 24             	mov    %eax,(%esp)
 84d6ac7:	e8 50 10 e2 ff       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 84d6acc:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6ad1:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84d6ad4:	c9                   	leave
 84d6ad5:	c3                   	ret

```

```c
// Inter_AuctionResultAskRegistedItemNum::dispatch_sig @ 0x84d5930

/* Inter_AuctionResultAskRegistedItemNum::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_AuctionResultAskRegistedItemNum::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  CDataManager *this;
  CInventory *this_00;
  int iVar9;
  uint uVar10;
  CAvatarItemMgr *pCVar11;
  void *__src;
  CCreatureMgr *this_01;
  undefined1 local_1cc [12];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190;
  PCK_AUCTION_REGIST_ITEM_GA local_17f [9];
  short asStack_176 [4];
  undefined4 local_16d;
  undefined4 local_169;
  char acStack_165 [13];
  char local_158;
  undefined4 local_157;
  undefined4 local_153;
  Inven_Item local_14f;
  undefined4 local_14e;
  byte local_14a;
  int local_149;
  undefined2 local_145;
  undefined4 local_143;
  uchar uStack_13f;
  ushort uStack_13e;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_132;
  undefined4 local_12e;
  undefined4 local_12a;
  undefined2 local_126;
  UpgradeSeparateInfo aUStack_124 [10];
  short local_11a [15];
  stAvatarExpansionInfo_t asStack_fc [4];
  undefined4 local_f8;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined4 local_de;
  char acStack_da [32];
  Inven_Item local_ba;
  char cStack_b9;
  undefined2 uStack_b8;
  undefined2 local_b6;
  undefined1 uStack_b4;
  int iStack_b3;
  undefined1 uStack_af;
  undefined4 uStack_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined1 local_9e;
  undefined2 uStack_9d;
  undefined1 uStack_9b;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined1 local_8a;
  undefined2 uStack_89;
  UpgradeSeparateInfo UStack_87;
  undefined4 local_86;
  undefined4 local_82;
  undefined1 local_7e;
  bool local_7d;
  cMyTrace local_7c [16];
  int *local_6c;
  short local_66;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  char local_53;
  ushort local_52;
  int local_50;
  int local_4c;
  CInventory *local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  CItem *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  local_6c = (int *)param_3;
  iVar6 = *(int *)(param_3 + 4);
  iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  if (iVar6 != iVar4) {
    return 0;
  }
  for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1) {
    iVar6 = *(int *)(gmList + local_3c * 4);
    iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar6 == iVar4) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      cMyTrace::cMyTrace(local_7c,
                         "virtual int Inter_AuctionResultAskRegistedItemNum::dispatch_sig(CUser*, char*, int)"
                         ,0x37a3,0);
      cMyTrace::operator()
                (local_7c,"Trace Auction Delay, %s(%d)","ACK AuctionResultAskRegistedItemNum",uVar5)
      ;
      break;
    }
  }
  local_66 = (short)local_6c[2];
  local_64 = *local_6c;
  if (local_66 == -1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x9e,*local_6c);
    return 0;
  }
  if (local_66 == -2) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
    return 0;
  }
  cVar2 = CUser::isAffectedPremium((CUser *)param_2,0x1d);
  if (cVar2 == '\0') {
    if (local_64 == 1) {
      local_34 = 3;
    }
    else {
      local_34 = 10;
    }
    if (local_34 <= local_66) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x97,*local_6c);
      return 0;
    }
  }
  else {
    if (local_64 == 1) {
      local_38 = 10;
    }
    else {
      local_38 = 0x1e;
    }
    if (local_38 <= local_66) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x97,*local_6c);
      return 0;
    }
  }
  if (local_64 == 1) {
    local_60 = 0;
  }
  else {
    local_60 = 10000;
  }
  iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_2);
  if (iVar6 < local_60) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x90,*local_6c);
    return 0;
  }
  local_5c = 1000000;
  local_58 = 0;
  if (((0x28d287 < *(uint *)((int)local_6c + 0xd)) && (*(uint *)((int)local_6c + 0xd) < 0x28d29a))
     && (*local_6c == 1)) {
    if (*(uint *)((int)local_6c + 0xd) < 0x28d292) {
      local_58 = *(int *)((int)local_6c + 0xd) * 1000000 + 0x199b9040;
    }
    else {
      local_58 = *(int *)((int)local_6c + 0xd) * 10000000 + -0x549a800;
    }
  }
  local_53 = *(char *)((int)local_6c + 10);
  local_52 = *(ushort *)((int)local_6c + 0xb);
  local_50 = *(int *)((int)local_6c + 0xd);
  local_4c = *(int *)((int)local_6c + 0x11);
  PCK_AUCTION_REGIST_ITEM_GA::PCK_AUCTION_REGIST_ITEM_GA(local_17f);
  local_16d = CUser::GetUID((CUser *)param_2);
  local_169 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  strncpy(acStack_165,(char *)(iVar6 + 4),0xd);
  local_158 = 0;
  local_158 = CUser::isAffectedPremium((CUser *)param_2,0x1d);
  local_157 = *(undefined4 *)((int)local_6c + 0x15);
  local_153 = *(undefined4 *)((int)local_6c + 0x19);
  local_f8 = CUserCharacInfo::getCurrCharacBlackCount((CUserCharacInfo *)param_2);
  local_ea = *(undefined4 *)((int)local_6c + 0x1d);
  local_e6 = *(undefined4 *)((int)local_6c + 0x21);
  local_e2 = *(undefined4 *)((int)local_6c + 0x25);
  local_de = *(undefined4 *)((int)local_6c + 0x29);
  local_48 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
  local_44 = 6;
  Inven_Item::Inven_Item(&local_ba);
  if (local_50 == 0) goto LAB_084d67be;
  if (local_53 == '\x01') {
    local_44 = 2;
  }
  else if (local_53 == '\a') {
    local_44 = 3;
  }
  else {
    if (local_53 != '\0') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
    local_44 = 1;
  }
  if ((0x28d287 < *(uint *)((int)local_6c + 0xd)) && (*(uint *)((int)local_6c + 0xd) < 0x28d29a)) {
    if (*local_6c != 1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x93,*local_6c);
      return 0;
    }
    cVar2 = CInventory::use_money(local_48,local_58,0x26,1);
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x93,*local_6c);
      return 0;
    }
    CUser::SaveInventory((CUser *)param_2);
    CUser::SendUpdateItemList((CUser *)param_2,1,0,0);
    nsl::PACKET_HEADER::setCategory((PACKET_HEADER *)local_17f,0x12);
    local_149 = *(undefined4 *)((int)local_6c + 0x11);
    stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)local_11a);
    local_14f = (Inven_Item)0x0;
    local_14e = *(undefined4 *)((int)local_6c + 0xd);
    local_145 = 0;
    local_143 = 0;
    if (*local_6c == 1) {
      pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
      sVar8 = strlen(pcVar7);
      pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
      strncpy(acStack_da,pcVar7,sVar8);
    }
    CCeraAuctionServerProxy::SendPacket(GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_17f)
    ;
    return 0;
  }
  CInventory::GetInvenSlot((int)local_1cc,(int)local_48);
  local_ba = SUB41(local_1cc._0_4_,0);
  cStack_b9 = SUB41(local_1cc._0_4_,1);
  uStack_b8 = SUB42(local_1cc._0_4_,2);
  local_b6 = (undefined2)local_1cc._4_4_;
  uStack_b4 = SUB41(local_1cc._4_4_,2);
  iStack_b3._1_3_ = (undefined3)local_1cc._8_4_;
  iStack_b3 = CONCAT31(iStack_b3._1_3_,SUB41(local_1cc._4_4_,3));
  uStack_af = SUB41(local_1cc._8_4_,3);
  uStack_ae = local_1c0;
  local_aa = local_1bc;
  local_a6 = local_1b8;
  local_a2 = local_1b4;
  local_9e = (undefined1)local_1b0;
  uStack_9d = (undefined2)((uint)local_1b0 >> 8);
  uStack_9b = (undefined1)((uint)local_1b0 >> 0x18);
  local_9a = local_1ac;
  local_96 = local_1a8;
  local_92 = local_1a4;
  local_8e = local_1a0;
  local_8a = (undefined1)local_19c;
  uStack_89 = (undefined2)((uint)local_19c >> 8);
  UStack_87 = SUB41((uint)local_19c >> 0x18,0);
  local_86 = local_198;
  local_82 = local_194;
  local_7e = local_190;
  if ((CONCAT22(local_b6,uStack_b8) != local_50) || (CONCAT22(local_b6,uStack_b8) == 0x10ec)) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
    return 0;
  }
  cVar2 = IsTradeLimitAttachTypeItemByUser((CUser *)param_2,local_44,(uint)local_52);
  if (cVar2 != '\0') {
    local_7d = true;
    CheckItemTradeLimitCountToMoveByUser((CUser *)param_2,local_44,(uint)local_52,&local_7d);
    if (local_7d != true) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x72);
      return 0;
    }
  }
  cVar2 = Inven_Item::isEquipableItemType(&local_ba);
  if ((cVar2 != '\x01') && (iStack_b3 < local_4c)) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x92,*local_6c);
    return 0;
  }
  iVar6 = CONCAT22(local_b6,uStack_b8);
  this = (CDataManager *)G_CDataManager();
  local_30 = (CItem *)CDataManager::find_item(this,iVar6);
  if ((local_30 == (CItem *)0x0) || (cVar2 = CItem::isPackagable(local_30), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
    return 0;
  }
  cVar2 = (**(code **)(*(int *)local_30 + 0x10))(local_30);
  iVar4 = iStack_b3;
  if (cVar2 == '\x01') {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    pCVar11 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(this_00);
    local_20 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar11,iVar4);
    if ((local_20 == 0) ||
       (iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), iVar6 <= local_20)
       ) {
      bVar1 = false;
      iVar6 = iVar4;
    }
    else {
      bVar1 = true;
      iVar6 = iVar4;
    }
    if (bVar1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
  }
  else {
    iVar4 = CItem::getUsablePeriod(local_30);
    if ((iVar4 == 0) && (iVar4 = CItem::getExpirationDate(local_30), iVar4 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = CItem::getUsablePeriod(local_30);
      if ((iVar4 == 0) && (iVar4 = CItem::getExpirationDate(local_30), iVar4 == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
        return 0;
      }
      local_28 = (uint)CONCAT11((undefined1)uStack_ae,uStack_af) * 0x15180 + 0x44a54a80;
      local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (local_28 <= local_24) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
        return 0;
      }
    }
  }
  iVar4 = iStack_b3;
  if (cStack_b9 == '\x05') {
    iVar6 = CInventory::GetCreatureMgrR(local_48);
    iVar9 = user_creature::CCreatureMgr::FindCreatureItem(iVar6);
    iVar6 = iVar4;
    if (iVar9 == 0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
  }
  if ((local_158 == '\0') && (iVar4 = CItem::GetCashPrice(local_30), iVar4 != 0)) {
    uVar10 = G_CDataManager();
    iVar6 = local_50;
    cVar2 = CDataManager::is_AuctionRegFreeCeraItem(uVar10);
    if (cVar2 == '\x01') goto LAB_084d63a2;
    bVar1 = true;
  }
  else {
LAB_084d63a2:
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x95,*local_6c);
    return 0;
  }
  local_2c = CItem::GetAttachType(local_30);
  switch(local_2c) {
  case 1:
  case 2:
  case 5:
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
    return 0;
  case 3:
    if (local_ba != (Inven_Item)0x1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
  }
  cVar2 = UpgradeSeparateInfo::IsTradeRestriction(&UStack_87);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91);
    return 0;
  }
  cVar2 = (**(code **)(*(int *)local_30 + 0x10))(local_30,iVar6);
  if (cVar2 != '\0') {
    CInventory::GetAvatarItemMgrR(local_48);
    cVar2 = WongWork::CAvatarItemMgr::IsTempKey(iStack_b3);
    iVar6 = iStack_b3;
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
    pCVar11 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_48);
    iVar6 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar11,iVar6);
    if (iVar6 != 0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x91,*local_6c);
      return 0;
    }
  }
  cVar2 = Inven_Item::isEquipableItemType(&local_ba);
  if (cVar2 == '\x01') {
    local_149 = iStack_b3;
  }
  else {
    local_149 = local_4c;
  }
  local_14a = Inven_Item::GetItemAttr(&local_ba);
  stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)local_11a);
  cVar2 = (**(code **)(*(int *)local_30 + 0x10))(local_30);
  iVar6 = iStack_b3;
  if (cVar2 != '\0') {
    pCVar11 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_48);
    __src = (void *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar11,iVar6);
    memcpy(local_11a,__src,0x1e);
    iVar6 = iStack_b3;
    pCVar11 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_48);
    local_1c = (void *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar11,iVar6);
    if (local_1c == (void *)0x0) {
      stAvatarExpansionInfo_t::init(asStack_fc);
    }
    else {
      memcpy(asStack_fc,local_1c,4);
    }
    if (local_11a[0] != 0) {
      local_14a = local_14a & 0xe0 | 1;
    }
  }
  local_14f = local_ba;
  local_14e = CONCAT22(local_b6,uStack_b8);
  local_145 = CONCAT11((undefined1)uStack_ae,uStack_af);
  local_143 = CONCAT13((undefined1)local_aa,uStack_ae._1_3_);
  stAmplifyOption_t::getValues((stAmplifyOption_t *)((int)&local_aa + 1),&uStack_13f,&uStack_13e);
  local_13c = CONCAT13((undefined1)local_a2,local_a6._1_3_);
  local_138 = CONCAT13(local_9e,local_a2._1_3_);
  local_134 = uStack_9d;
  local_132 = CONCAT13((undefined1)local_92,local_96._1_3_);
  local_12e = CONCAT13((undefined1)local_8e,local_92._1_3_);
  local_12a = CONCAT13(local_8a,local_8e._1_3_);
  local_126 = uStack_89;
  uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate(&UStack_87);
  UpgradeSeparateInfo::SetUpgradeSeparate(aUStack_124,uVar3);
  cVar2 = (**(code **)(*(int *)local_30 + 0x4c))(local_30);
  if (cVar2 != '\0') {
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      if (asStack_176[local_18 + 0x48] == 0) {
        asStack_176[local_18 + 0x48] = 30000;
      }
    }
  }
  ROI_Category::_sort((ROI_Category *)&local_e6);
LAB_084d67be:
  if (*local_6c == 1) {
    local_40 = 0;
  }
  else {
    local_40 = 10000;
  }
  cVar2 = CInventory::use_money(local_48,local_40,0x19,1);
  if (cVar2 == '\x01') {
    if (CONCAT22(local_b6,uStack_b8) != 0) {
      if (cStack_b9 == '\b') {
        cVar2 = CInventory::delete_item(local_48,2,local_52,1,5,1);
        if (cVar2 != '\x01') {
          CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x94,*local_6c);
          local_14 = CInventory::gain_money(local_48,10000,0x13,1,0);
          if (9999 < local_14) {
            return 0;
          }
          CUser::SendMoneyFullReason((CUser *)param_2,0,10000,local_14);
          return 0;
        }
        CInventory::SendAvatarEvent(local_48,0x36,iStack_b3,4,local_52 + 10,0);
        iVar6 = CInventory::GetAvatarItemMgrW(local_48);
        WongWork::CAvatarItemMgr::UnRegistItem(iVar6);
      }
      else {
        cVar2 = CInventory::delete_item(local_48,local_44,local_52,local_149,0x19,1);
        if (cVar2 != '\x01') {
          CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x94,*local_6c);
          local_10 = CInventory::gain_money(local_48,10000,0x13,1,0);
          if (9999 < local_10) {
            return 0;
          }
          CUser::SendMoneyFullReason((CUser *)param_2,0,10000,local_10);
          return 0;
        }
      }
      cVar2 = Inven_Item::IsCreatureItemType(&local_ba);
      if (cVar2 != '\0') {
        uVar10 = (uint)local_52;
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(local_48);
        user_creature::CCreatureMgr::AuctionRegist(this_01,&local_ba,uVar10,0x19);
      }
    }
    CUser::SaveInventory((CUser *)param_2);
    pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
    sVar8 = strlen(pcVar7);
    pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
    strncpy(acStack_da,pcVar7,sVar8);
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_17f);
    return 0;
  }
  CUser::SendCmdErrorPacket((CUser *)param_2,0xba,0x93,*local_6c);
  return 0;
}

```

