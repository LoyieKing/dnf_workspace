# Dispatcher_AuctionSearchByItemKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082159fc Dispatcher_AuctionSearchByItemKey::dispatch_sig  [0x082159fc-0x82161e3] ===
 82159fc:	55                   	push   %ebp
 82159fd:	89 e5                	mov    %esp,%ebp
 82159ff:	53                   	push   %ebx
 8215a00:	81 ec 44 01 00 00    	sub    $0x144,%esp
 8215a06:	8d 45 d7             	lea    -0x29(%ebp),%eax
 8215a09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215a0d:	8b 45 10             	mov    0x10(%ebp),%eax
 8215a10:	89 04 24             	mov    %eax,(%esp)
 8215a13:	e8 58 75 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8215a18:	83 f0 01             	xor    $0x1,%eax
 8215a1b:	84 c0                	test   %al,%al
 8215a1d:	74 29                	je     8215a48 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x4c>
 8215a1f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215a26:	00 
 8215a27:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215a2e:	00 
 8215a2f:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215a36:	08 
 8215a37:	c7 04 24 90 c6 00 00 	movl   $0xc690,(%esp)
 8215a3e:	e8 94 ae 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215a43:	e9 93 07 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215a48:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8215a4c:	3c 01                	cmp    $0x1,%al
 8215a4e:	76 29                	jbe    8215a79 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7d>
 8215a50:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215a57:	00 
 8215a58:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215a5f:	00 
 8215a60:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215a67:	08 
 8215a68:	c7 04 24 93 c6 00 00 	movl   $0xc693,(%esp)
 8215a6f:	e8 63 ae 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215a74:	e9 62 07 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215a79:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8215a7d:	0f b6 c0             	movzbl %al,%eax
 8215a80:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8215a83:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8215a86:	0f b6 c0             	movzbl %al,%eax
 8215a89:	89 04 24             	mov    %eax,(%esp)
 8215a8c:	e8 61 de ff ff       	call   82138f2 <_Z27IsAuctionServerDisconnectedh>
 8215a91:	84 c0                	test   %al,%al
 8215a93:	74 2c                	je     8215ac1 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0xc5>
 8215a95:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8215a98:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8215a9c:	c7 44 24 08 8c 00 00 	movl   $0x8c,0x8(%esp)
 8215aa3:	00 
 8215aa4:	c7 44 24 04 bd 00 00 	movl   $0xbd,0x4(%esp)
 8215aab:	00 
 8215aac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215aaf:	89 04 24             	mov    %eax,(%esp)
 8215ab2:	e8 6b 65 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8215ab7:	b8 00 00 00 00       	mov    $0x0,%eax
 8215abc:	e9 1a 07 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215ac1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215ac4:	89 04 24             	mov    %eax,(%esp)
 8215ac7:	e8 c0 48 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8215acc:	83 f8 02             	cmp    $0x2,%eax
 8215acf:	7e 0f                	jle    8215ae0 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0xe4>
 8215ad1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215ad4:	89 04 24             	mov    %eax,(%esp)
 8215ad7:	e8 56 a9 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8215adc:	85 c0                	test   %eax,%eax
 8215ade:	75 07                	jne    8215ae7 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0xeb>
 8215ae0:	b8 01 00 00 00       	mov    $0x1,%eax
 8215ae5:	eb 05                	jmp    8215aec <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 8215ae7:	b8 00 00 00 00       	mov    $0x0,%eax
 8215aec:	84 c0                	test   %al,%al
 8215aee:	74 29                	je     8215b19 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x11d>
 8215af0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215af7:	00 
 8215af8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215aff:	00 
 8215b00:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215b07:	08 
 8215b08:	c7 04 24 b7 c6 00 00 	movl   $0xc6b7,(%esp)
 8215b0f:	e8 c3 ad 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215b14:	e9 c2 06 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215b19:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 8215b1d:	0f 85 5b 02 00 00    	jne    8215d7e <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x382>
 8215b23:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 8215b29:	89 04 24             	mov    %eax,(%esp)
 8215b2c:	e8 53 8f 01 00       	call   822ea84 <_ZN32PCK_AUCTION_SEARCH_BY_ITEMKEY_GPC1Ev>
 8215b31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215b34:	89 04 24             	mov    %eax,(%esp)
 8215b37:	e8 5a 31 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8215b3c:	89 85 5d ff ff ff    	mov    %eax,-0xa3(%ebp)
 8215b42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215b45:	89 04 24             	mov    %eax,(%esp)
 8215b48:	e8 01 61 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8215b4d:	89 85 61 ff ff ff    	mov    %eax,-0x9f(%ebp)
 8215b53:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 8215b59:	83 c0 1a             	add    $0x1a,%eax
 8215b5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215b60:	8b 45 10             	mov    0x10(%ebp),%eax
 8215b63:	89 04 24             	mov    %eax,(%esp)
 8215b66:	e8 d5 76 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8215b6b:	83 f0 01             	xor    $0x1,%eax
 8215b6e:	84 c0                	test   %al,%al
 8215b70:	74 29                	je     8215b9b <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x19f>
 8215b72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215b79:	00 
 8215b7a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215b81:	00 
 8215b82:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215b89:	08 
 8215b8a:	c7 04 24 c0 c6 00 00 	movl   $0xc6c0,(%esp)
 8215b91:	e8 41 ad 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215b96:	e9 40 06 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215b9b:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 8215ba1:	83 c0 1e             	add    $0x1e,%eax
 8215ba4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215ba8:	8b 45 10             	mov    0x10(%ebp),%eax
 8215bab:	89 04 24             	mov    %eax,(%esp)
 8215bae:	e8 bd 73 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8215bb3:	83 f0 01             	xor    $0x1,%eax
 8215bb6:	84 c0                	test   %al,%al
 8215bb8:	74 29                	je     8215be3 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x1e7>
 8215bba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215bc1:	00 
 8215bc2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215bc9:	00 
 8215bca:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215bd1:	08 
 8215bd2:	c7 04 24 c1 c6 00 00 	movl   $0xc6c1,(%esp)
 8215bd9:	e8 f9 ac 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215bde:	e9 f8 05 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215be3:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 8215be9:	83 c0 1f             	add    $0x1f,%eax
 8215bec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215bf0:	8b 45 10             	mov    0x10(%ebp),%eax
 8215bf3:	89 04 24             	mov    %eax,(%esp)
 8215bf6:	e8 75 73 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8215bfb:	83 f0 01             	xor    $0x1,%eax
 8215bfe:	84 c0                	test   %al,%al
 8215c00:	74 29                	je     8215c2b <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x22f>
 8215c02:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215c09:	00 
 8215c0a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215c11:	00 
 8215c12:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215c19:	08 
 8215c1a:	c7 04 24 c2 c6 00 00 	movl   $0xc6c2,(%esp)
 8215c21:	e8 b1 ac 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215c26:	e9 b0 05 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215c2b:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 8215c31:	83 c0 20             	add    $0x20,%eax
 8215c34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215c38:	8b 45 10             	mov    0x10(%ebp),%eax
 8215c3b:	89 04 24             	mov    %eax,(%esp)
 8215c3e:	e8 2d 73 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8215c43:	83 f0 01             	xor    $0x1,%eax
 8215c46:	84 c0                	test   %al,%al
 8215c48:	74 29                	je     8215c73 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x277>
 8215c4a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215c51:	00 
 8215c52:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215c59:	00 
 8215c5a:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215c61:	08 
 8215c62:	c7 04 24 c3 c6 00 00 	movl   $0xc6c3,(%esp)
 8215c69:	e8 69 ac 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215c6e:	e9 68 05 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215c73:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 8215c79:	83 c0 21             	add    $0x21,%eax
 8215c7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215c80:	8b 45 10             	mov    0x10(%ebp),%eax
 8215c83:	89 04 24             	mov    %eax,(%esp)
 8215c86:	e8 25 74 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8215c8b:	83 f0 01             	xor    $0x1,%eax
 8215c8e:	84 c0                	test   %al,%al
 8215c90:	74 29                	je     8215cbb <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x2bf>
 8215c92:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215c99:	00 
 8215c9a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215ca1:	00 
 8215ca2:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215ca9:	08 
 8215caa:	c7 04 24 c4 c6 00 00 	movl   $0xc6c4,(%esp)
 8215cb1:	e8 21 ac 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215cb6:	e9 20 05 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215cbb:	0f b6 85 6b ff ff ff 	movzbl -0x95(%ebp),%eax
 8215cc2:	3c 14                	cmp    $0x14,%al
 8215cc4:	76 29                	jbe    8215cef <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x2f3>
 8215cc6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215ccd:	00 
 8215cce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215cd5:	00 
 8215cd6:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215cdd:	08 
 8215cde:	c7 04 24 c7 c6 00 00 	movl   $0xc6c7,(%esp)
 8215ce5:	e8 ed ab 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215cea:	e9 ec 04 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215cef:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8215cf6:	eb 56                	jmp    8215d4e <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x352>
 8215cf8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8215cfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215cff:	8b 45 10             	mov    0x10(%ebp),%eax
 8215d02:	89 04 24             	mov    %eax,(%esp)
 8215d05:	e8 36 75 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8215d0a:	83 f0 01             	xor    $0x1,%eax
 8215d0d:	84 c0                	test   %al,%al
 8215d0f:	74 29                	je     8215d3a <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x33e>
 8215d11:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215d18:	00 
 8215d19:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215d20:	00 
 8215d21:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215d28:	08 
 8215d29:	c7 04 24 cc c6 00 00 	movl   $0xc6cc,(%esp)
 8215d30:	e8 a2 ab 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215d35:	e9 a1 04 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215d3a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8215d3d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8215d40:	83 c2 0c             	add    $0xc,%edx
 8215d43:	89 84 95 4c ff ff ff 	mov    %eax,-0xb4(%ebp,%edx,4)
 8215d4a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8215d4e:	0f b6 85 6b ff ff ff 	movzbl -0x95(%ebp),%eax
 8215d55:	0f b6 c0             	movzbl %al,%eax
 8215d58:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8215d5b:	0f 9f c0             	setg   %al
 8215d5e:	84 c0                	test   %al,%al
 8215d60:	75 96                	jne    8215cf8 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x2fc>
 8215d62:	a1 4c be 40 09       	mov    0x940be4c,%eax
 8215d67:	8d 95 4b ff ff ff    	lea    -0xb5(%ebp),%edx
 8215d6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8215d71:	89 04 24             	mov    %eax,(%esp)
 8215d74:	e8 b3 1e 0e 00       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8215d79:	e9 cf 03 00 00       	jmp    821614d <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x751>
 8215d7e:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8215d84:	89 04 24             	mov    %eax,(%esp)
 8215d87:	e8 1e 89 01 00       	call   822e6aa <_ZN32PCK_AUCTION_SEARCH_BY_ITEMKEY_GAC1Ev>
 8215d8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215d8f:	89 04 24             	mov    %eax,(%esp)
 8215d92:	e8 ff 2e eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8215d97:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 8215d9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215da0:	89 04 24             	mov    %eax,(%esp)
 8215da3:	e8 a6 5e eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8215da8:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8215dae:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8215db4:	83 c0 1a             	add    $0x1a,%eax
 8215db7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215dbb:	8b 45 10             	mov    0x10(%ebp),%eax
 8215dbe:	89 04 24             	mov    %eax,(%esp)
 8215dc1:	e8 7a 74 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8215dc6:	83 f0 01             	xor    $0x1,%eax
 8215dc9:	84 c0                	test   %al,%al
 8215dcb:	74 29                	je     8215df6 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x3fa>
 8215dcd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215dd4:	00 
 8215dd5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215ddc:	00 
 8215ddd:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215de4:	08 
 8215de5:	c7 04 24 e1 c6 00 00 	movl   $0xc6e1,(%esp)
 8215dec:	e8 e6 aa 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215df1:	e9 e5 03 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215df6:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8215dfc:	83 c0 1e             	add    $0x1e,%eax
 8215dff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215e03:	8b 45 10             	mov    0x10(%ebp),%eax
 8215e06:	89 04 24             	mov    %eax,(%esp)
 8215e09:	e8 62 71 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8215e0e:	83 f0 01             	xor    $0x1,%eax
 8215e11:	84 c0                	test   %al,%al
 8215e13:	74 29                	je     8215e3e <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x442>
 8215e15:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215e1c:	00 
 8215e1d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215e24:	00 
 8215e25:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215e2c:	08 
 8215e2d:	c7 04 24 e2 c6 00 00 	movl   $0xc6e2,(%esp)
 8215e34:	e8 9e aa 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215e39:	e9 9d 03 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215e3e:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8215e44:	83 c0 1f             	add    $0x1f,%eax
 8215e47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215e4b:	8b 45 10             	mov    0x10(%ebp),%eax
 8215e4e:	89 04 24             	mov    %eax,(%esp)
 8215e51:	e8 1a 71 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8215e56:	83 f0 01             	xor    $0x1,%eax
 8215e59:	84 c0                	test   %al,%al
 8215e5b:	74 29                	je     8215e86 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x48a>
 8215e5d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215e64:	00 
 8215e65:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215e6c:	00 
 8215e6d:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215e74:	08 
 8215e75:	c7 04 24 e3 c6 00 00 	movl   $0xc6e3,(%esp)
 8215e7c:	e8 56 aa 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215e81:	e9 55 03 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215e86:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8215e8c:	83 c0 20             	add    $0x20,%eax
 8215e8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215e93:	8b 45 10             	mov    0x10(%ebp),%eax
 8215e96:	89 04 24             	mov    %eax,(%esp)
 8215e99:	e8 d2 70 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8215e9e:	83 f0 01             	xor    $0x1,%eax
 8215ea1:	84 c0                	test   %al,%al
 8215ea3:	74 29                	je     8215ece <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x4d2>
 8215ea5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215eac:	00 
 8215ead:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215eb4:	00 
 8215eb5:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215ebc:	08 
 8215ebd:	c7 04 24 e4 c6 00 00 	movl   $0xc6e4,(%esp)
 8215ec4:	e8 0e aa 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215ec9:	e9 0d 03 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215ece:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8215ed4:	83 c0 21             	add    $0x21,%eax
 8215ed7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215edb:	8b 45 10             	mov    0x10(%ebp),%eax
 8215ede:	89 04 24             	mov    %eax,(%esp)
 8215ee1:	e8 ca 71 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8215ee6:	83 f0 01             	xor    $0x1,%eax
 8215ee9:	84 c0                	test   %al,%al
 8215eeb:	74 29                	je     8215f16 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x51a>
 8215eed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215ef4:	00 
 8215ef5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215efc:	00 
 8215efd:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215f04:	08 
 8215f05:	c7 04 24 e5 c6 00 00 	movl   $0xc6e5,(%esp)
 8215f0c:	e8 c6 a9 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215f11:	e9 c5 02 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215f16:	0f b6 85 ea fe ff ff 	movzbl -0x116(%ebp),%eax
 8215f1d:	3c 14                	cmp    $0x14,%al
 8215f1f:	76 29                	jbe    8215f4a <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x54e>
 8215f21:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215f28:	00 
 8215f29:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215f30:	00 
 8215f31:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215f38:	08 
 8215f39:	c7 04 24 e8 c6 00 00 	movl   $0xc6e8,(%esp)
 8215f40:	e8 92 a9 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215f45:	e9 91 02 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215f4a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8215f51:	eb 56                	jmp    8215fa9 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x5ad>
 8215f53:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8215f56:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215f5a:	8b 45 10             	mov    0x10(%ebp),%eax
 8215f5d:	89 04 24             	mov    %eax,(%esp)
 8215f60:	e8 db 72 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8215f65:	83 f0 01             	xor    $0x1,%eax
 8215f68:	84 c0                	test   %al,%al
 8215f6a:	74 29                	je     8215f95 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x599>
 8215f6c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215f73:	00 
 8215f74:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215f7b:	00 
 8215f7c:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215f83:	08 
 8215f84:	c7 04 24 ed c6 00 00 	movl   $0xc6ed,(%esp)
 8215f8b:	e8 47 a9 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8215f90:	e9 46 02 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8215f95:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8215f98:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8215f9b:	83 c2 0c             	add    $0xc,%edx
 8215f9e:	89 84 95 cb fe ff ff 	mov    %eax,-0x135(%ebp,%edx,4)
 8215fa5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8215fa9:	0f b6 85 ea fe ff ff 	movzbl -0x116(%ebp),%eax
 8215fb0:	0f b6 c0             	movzbl %al,%eax
 8215fb3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8215fb6:	0f 9f c0             	setg   %al
 8215fb9:	84 c0                	test   %al,%al
 8215fbb:	75 96                	jne    8215f53 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x557>
 8215fbd:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8215fc3:	83 c0 23             	add    $0x23,%eax
 8215fc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215fca:	8b 45 10             	mov    0x10(%ebp),%eax
 8215fcd:	89 04 24             	mov    %eax,(%esp)
 8215fd0:	e8 eb 6f 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8215fd5:	83 f0 01             	xor    $0x1,%eax
 8215fd8:	84 c0                	test   %al,%al
 8215fda:	74 29                	je     8216005 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x609>
 8215fdc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8215fe3:	00 
 8215fe4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8215feb:	00 
 8215fec:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8215ff3:	08 
 8215ff4:	c7 04 24 f3 c6 00 00 	movl   $0xc6f3,(%esp)
 8215ffb:	e8 d7 a8 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216000:	e9 d6 01 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8216005:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 821600b:	83 c0 25             	add    $0x25,%eax
 821600e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216012:	8b 45 10             	mov    0x10(%ebp),%eax
 8216015:	89 04 24             	mov    %eax,(%esp)
 8216018:	e8 a3 6f 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821601d:	83 f0 01             	xor    $0x1,%eax
 8216020:	84 c0                	test   %al,%al
 8216022:	74 29                	je     821604d <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x651>
 8216024:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821602b:	00 
 821602c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216033:	00 
 8216034:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 821603b:	08 
 821603c:	c7 04 24 f5 c6 00 00 	movl   $0xc6f5,(%esp)
 8216043:	e8 8f a8 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216048:	e9 8e 01 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 821604d:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8216053:	83 c0 27             	add    $0x27,%eax
 8216056:	89 44 24 04          	mov    %eax,0x4(%esp)
 821605a:	8b 45 10             	mov    0x10(%ebp),%eax
 821605d:	89 04 24             	mov    %eax,(%esp)
 8216060:	e8 5b 6f 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8216065:	83 f0 01             	xor    $0x1,%eax
 8216068:	84 c0                	test   %al,%al
 821606a:	74 29                	je     8216095 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x699>
 821606c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216073:	00 
 8216074:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821607b:	00 
 821607c:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8216083:	08 
 8216084:	c7 04 24 f7 c6 00 00 	movl   $0xc6f7,(%esp)
 821608b:	e8 47 a8 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216090:	e9 46 01 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8216095:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 821609b:	83 c0 23             	add    $0x23,%eax
 821609e:	89 04 24             	mov    %eax,(%esp)
 82160a1:	e8 8a 4b 01 00       	call   822ac30 <_ZN12ROI_Category5_sortEv>
 82160a6:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 82160ac:	83 c0 2f             	add    $0x2f,%eax
 82160af:	89 44 24 04          	mov    %eax,0x4(%esp)
 82160b3:	8b 45 10             	mov    0x10(%ebp),%eax
 82160b6:	89 04 24             	mov    %eax,(%esp)
 82160b9:	e8 b2 6e 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82160be:	83 f0 01             	xor    $0x1,%eax
 82160c1:	84 c0                	test   %al,%al
 82160c3:	74 29                	je     82160ee <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x6f2>
 82160c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82160cc:	00 
 82160cd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82160d4:	00 
 82160d5:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 82160dc:	08 
 82160dd:	c7 04 24 fd c6 00 00 	movl   $0xc6fd,(%esp)
 82160e4:	e8 ee a7 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82160e9:	e9 ed 00 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 82160ee:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 82160f4:	83 c0 30             	add    $0x30,%eax
 82160f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82160fb:	8b 45 10             	mov    0x10(%ebp),%eax
 82160fe:	89 04 24             	mov    %eax,(%esp)
 8216101:	e8 6a 6e 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216106:	83 f0 01             	xor    $0x1,%eax
 8216109:	84 c0                	test   %al,%al
 821610b:	74 29                	je     8216136 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x73a>
 821610d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216114:	00 
 8216115:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821611c:	00 
 821611d:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 8216124:	08 
 8216125:	c7 04 24 fe c6 00 00 	movl   $0xc6fe,(%esp)
 821612c:	e8 a6 a7 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216131:	e9 a5 00 00 00       	jmp    82161db <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 8216136:	a1 48 be 40 09       	mov    0x940be48,%eax
 821613b:	8d 95 ca fe ff ff    	lea    -0x136(%ebp),%edx
 8216141:	89 54 24 04          	mov    %edx,0x4(%esp)
 8216145:	89 04 24             	mov    %eax,(%esp)
 8216148:	e8 cf 19 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 821614d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8216154:	eb 75                	jmp    82161cb <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7cf>
 8216156:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8216159:	8b 04 85 d8 01 37 09 	mov    0x93701d8(,%eax,4),%eax
 8216160:	89 c3                	mov    %eax,%ebx
 8216162:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216165:	89 04 24             	mov    %eax,(%esp)
 8216168:	e8 e1 5a eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 821616d:	39 c3                	cmp    %eax,%ebx
 821616f:	0f 94 c0             	sete   %al
 8216172:	84 c0                	test   %al,%al
 8216174:	74 51                	je     82161c7 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7cb>
 8216176:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216179:	89 04 24             	mov    %eax,(%esp)
 821617c:	e8 cd 5a eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216181:	89 c3                	mov    %eax,%ebx
 8216183:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821618a:	00 
 821618b:	c7 44 24 08 0f c7 00 	movl   $0xc70f,0x8(%esp)
 8216192:	00 
 8216193:	c7 44 24 04 80 dc bc 	movl   $0x8bcdc80,0x4(%esp)
 821619a:	08 
 821619b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 821619e:	89 04 24             	mov    %eax,(%esp)
 82161a1:	e8 72 95 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82161a6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82161aa:	c7 44 24 08 54 33 bc 	movl   $0x8bc3354,0x8(%esp)
 82161b1:	08 
 82161b2:	c7 44 24 04 f7 32 bc 	movl   $0x8bc32f7,0x4(%esp)
 82161b9:	08 
 82161ba:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82161bd:	89 04 24             	mov    %eax,(%esp)
 82161c0:	e8 c3 95 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82161c5:	eb 0f                	jmp    82161d6 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x7da>
 82161c7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82161cb:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 82161cf:	0f 9e c0             	setle  %al
 82161d2:	84 c0                	test   %al,%al
 82161d4:	75 80                	jne    8216156 <_ZN33Dispatcher_AuctionSearchByItemKey12dispatch_sigEP5CUserR9PacketBuf+0x75a>
 82161d6:	b8 00 00 00 00       	mov    $0x0,%eax
 82161db:	81 c4 44 01 00 00    	add    $0x144,%esp
 82161e1:	5b                   	pop    %ebx
 82161e2:	5d                   	pop    %ebp
 82161e3:	c3                   	ret

```

```c
// Dispatcher_AuctionSearchByItemKey::dispatch_sig @ 0x82159fc

/* Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AuctionSearchByItemKey::dispatch_sig
          (Dispatcher_AuctionSearchByItemKey *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  PCK_AUCTION_SEARCH_BY_ITEMKEY_GA local_13a;
  uint auStack_139 [4];
  undefined4 local_128;
  undefined4 local_124;
  uint uStack_120;
  uchar uStack_11c;
  uchar uStack_11b;
  byte local_11a;
  ushort uStack_119;
  ROI_Category aRStack_117 [2];
  short sStack_115;
  short asStack_113 [4];
  uchar uStack_10b;
  uchar auStack_10a [81];
  PCK_AUCTION_SEARCH_BY_ITEMKEY_GP local_b9;
  uint auStack_b8 [4];
  undefined4 local_a7;
  undefined4 local_a3;
  uint uStack_9f;
  uchar uStack_9b;
  uchar uStack_9a;
  byte local_99;
  ushort auStack_98 [48];
  uint local_38;
  uint local_34;
  byte local_2d;
  cMyTrace local_2c [16];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_2d);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xc690,
                     "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (1 < local_2d) {
    uVar3 = LineFunc(0xc693,
                     "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_1c = (uint)local_2d;
  cVar2 = IsAuctionServerDisconnected(local_2d);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xbd,0x8c,local_1c);
    return 0;
  }
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = LineFunc(0xc6b7,
                     "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (local_1c == 1) {
    PCK_AUCTION_SEARCH_BY_ITEMKEY_GP::PCK_AUCTION_SEARCH_BY_ITEMKEY_GP(&local_b9);
    local_a7 = CUser::GetUID(param_1);
    local_a3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&uStack_9f);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c0,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_9b);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c1,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_9a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c2,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&local_99);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c3,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,auStack_98);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6c4,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    if (0x14 < local_99) {
      uVar3 = LineFunc(0xc6c7,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    for (local_18 = 0; local_18 < (int)(uint)local_99; local_18 = local_18 + 1) {
      cVar2 = PacketBuf::get_int(param_2,&local_34);
      if (cVar2 != '\x01') {
        uVar3 = LineFunc(0xc6cc,
                         "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar3;
      }
      auStack_b8[local_18 + 0xc] = local_34;
    }
    CCeraAuctionServerProxy::SendPacket(GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)&local_b9)
    ;
  }
  else {
    PCK_AUCTION_SEARCH_BY_ITEMKEY_GA::PCK_AUCTION_SEARCH_BY_ITEMKEY_GA(&local_13a);
    local_128 = CUser::GetUID(param_1);
    local_124 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&uStack_120);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e1,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_11c);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e2,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_11b);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e3,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&local_11a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e4,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&uStack_119);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6e5,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    if (0x14 < local_11a) {
      uVar3 = LineFunc(0xc6e8,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    for (local_14 = 0; local_14 < (int)(uint)local_11a; local_14 = local_14 + 1) {
      cVar2 = PacketBuf::get_int(param_2,&local_38);
      if (cVar2 != '\x01') {
        uVar3 = LineFunc(0xc6ed,
                         "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar3;
      }
      auStack_139[local_14 + 0xc] = local_38;
    }
    cVar2 = PacketBuf::get_short(param_2,(short *)aRStack_117);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6f3,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&sStack_115);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6f5,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,asStack_113);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6f7,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    ROI_Category::_sort(aRStack_117);
    cVar2 = PacketBuf::get_byte(param_2,&uStack_10b);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6fd,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,auStack_10a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc6fe,
                       "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)&local_13a);
  }
  local_10 = 0;
  while( true ) {
    if (4 < local_10) {
      return 0;
    }
    iVar4 = *(int *)(gmList + local_10 * 4);
    iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if (iVar4 == iVar5) break;
    local_10 = local_10 + 1;
  }
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  cMyTrace::cMyTrace(local_2c,
                     "virtual int Dispatcher_AuctionSearchByItemKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0xc70f,0);
  cMyTrace::operator()(local_2c,"Trace Auction Delay, %s(%d)","REQ AuctionSearchByItemKey",uVar3);
  return 0;
}

```

