# Dispatcher_AuctionAskAveragePrice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08213940 Dispatcher_AuctionAskAveragePrice::dispatch_sig  [0x08213940-0x8213e14] ===
 8213940:	55                   	push   %ebp
 8213941:	89 e5                	mov    %esp,%ebp
 8213943:	53                   	push   %ebx
 8213944:	81 ec 94 00 00 00    	sub    $0x94,%esp
 821394a:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 821394d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213951:	8b 45 10             	mov    0x10(%ebp),%eax
 8213954:	89 04 24             	mov    %eax,(%esp)
 8213957:	e8 14 96 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821395c:	83 f0 01             	xor    $0x1,%eax
 821395f:	84 c0                	test   %al,%al
 8213961:	74 29                	je     821398c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4c>
 8213963:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821396a:	00 
 821396b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213972:	00 
 8213973:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 821397a:	08 
 821397b:	c7 04 24 e5 c1 00 00 	movl   $0xc1e5,(%esp)
 8213982:	e8 50 cf 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213987:	e9 80 04 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 821398c:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8213990:	3c 01                	cmp    $0x1,%al
 8213992:	76 29                	jbe    82139bd <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x7d>
 8213994:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821399b:	00 
 821399c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82139a3:	00 
 82139a4:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 82139ab:	08 
 82139ac:	c7 04 24 e8 c1 00 00 	movl   $0xc1e8,(%esp)
 82139b3:	e8 1f cf 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82139b8:	e9 4f 04 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 82139bd:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 82139c1:	0f b6 c0             	movzbl %al,%eax
 82139c4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82139c7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82139ca:	0f b6 c0             	movzbl %al,%eax
 82139cd:	89 04 24             	mov    %eax,(%esp)
 82139d0:	e8 1d ff ff ff       	call   82138f2 <_Z27IsAuctionServerDisconnectedh>
 82139d5:	84 c0                	test   %al,%al
 82139d7:	74 2c                	je     8213a05 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0xc5>
 82139d9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82139dc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82139e0:	c7 44 24 08 8c 00 00 	movl   $0x8c,0x8(%esp)
 82139e7:	00 
 82139e8:	c7 44 24 04 b9 00 00 	movl   $0xb9,0x4(%esp)
 82139ef:	00 
 82139f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82139f3:	89 04 24             	mov    %eax,(%esp)
 82139f6:	e8 27 86 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 82139fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8213a00:	e9 07 04 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213a05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213a08:	89 04 24             	mov    %eax,(%esp)
 8213a0b:	e8 7c 69 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8213a10:	83 f8 02             	cmp    $0x2,%eax
 8213a13:	7e 0f                	jle    8213a24 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0xe4>
 8213a15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213a18:	89 04 24             	mov    %eax,(%esp)
 8213a1b:	e8 12 ca f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8213a20:	85 c0                	test   %eax,%eax
 8213a22:	75 07                	jne    8213a2b <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0xeb>
 8213a24:	b8 01 00 00 00       	mov    $0x1,%eax
 8213a29:	eb 05                	jmp    8213a30 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 8213a2b:	b8 00 00 00 00       	mov    $0x0,%eax
 8213a30:	84 c0                	test   %al,%al
 8213a32:	74 29                	je     8213a5d <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x11d>
 8213a34:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213a3b:	00 
 8213a3c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213a43:	00 
 8213a44:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213a4b:	08 
 8213a4c:	c7 04 24 07 c2 00 00 	movl   $0xc207,(%esp)
 8213a53:	e8 7f ce 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213a58:	e9 af 03 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213a5d:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8213a63:	89 04 24             	mov    %eax,(%esp)
 8213a66:	e8 6d aa 01 00       	call   822e4d8 <_ZN32PCK_AUCTION_ASK_AVERAGE_PRICE_GAC1Ev>
 8213a6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213a6e:	89 04 24             	mov    %eax,(%esp)
 8213a71:	e8 20 52 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8213a76:	89 45 90             	mov    %eax,-0x70(%ebp)
 8213a79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213a7c:	89 04 24             	mov    %eax,(%esp)
 8213a7f:	e8 ca 81 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8213a84:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8213a87:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8213a8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213a8e:	8b 45 10             	mov    0x10(%ebp),%eax
 8213a91:	89 04 24             	mov    %eax,(%esp)
 8213a94:	e8 a7 97 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8213a99:	83 f0 01             	xor    $0x1,%eax
 8213a9c:	84 c0                	test   %al,%al
 8213a9e:	74 29                	je     8213ac9 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x189>
 8213aa0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213aa7:	00 
 8213aa8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213aaf:	00 
 8213ab0:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213ab7:	08 
 8213ab8:	c7 04 24 17 c2 00 00 	movl   $0xc217,(%esp)
 8213abf:	e8 13 ce 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213ac4:	e9 43 03 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213ac9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8213acc:	89 45 98             	mov    %eax,-0x68(%ebp)
 8213acf:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8213ad5:	83 c0 1e             	add    $0x1e,%eax
 8213ad8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213adc:	8b 45 10             	mov    0x10(%ebp),%eax
 8213adf:	89 04 24             	mov    %eax,(%esp)
 8213ae2:	e8 89 94 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8213ae7:	83 f0 01             	xor    $0x1,%eax
 8213aea:	84 c0                	test   %al,%al
 8213aec:	74 29                	je     8213b17 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x1d7>
 8213aee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213af5:	00 
 8213af6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213afd:	00 
 8213afe:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213b05:	08 
 8213b06:	c7 04 24 1a c2 00 00 	movl   $0xc21a,(%esp)
 8213b0d:	e8 c5 cd 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213b12:	e9 f5 02 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213b17:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 8213b1b:	75 4d                	jne    8213b6a <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x22a>
 8213b1d:	8d 45 ad             	lea    -0x53(%ebp),%eax
 8213b20:	89 04 24             	mov    %eax,(%esp)
 8213b23:	e8 24 ae 01 00       	call   822e94c <_ZN32PCK_AUCTION_ASK_AVERAGE_PRICE_GPC1Ev>
 8213b28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213b2b:	89 04 24             	mov    %eax,(%esp)
 8213b2e:	e8 63 51 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8213b33:	89 45 bf             	mov    %eax,-0x41(%ebp)
 8213b36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213b39:	89 04 24             	mov    %eax,(%esp)
 8213b3c:	e8 0d 81 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8213b41:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 8213b44:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8213b47:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8213b4a:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 8213b4e:	88 45 cb             	mov    %al,-0x35(%ebp)
 8213b51:	a1 4c be 40 09       	mov    0x940be4c,%eax
 8213b56:	8d 55 ad             	lea    -0x53(%ebp),%edx
 8213b59:	89 54 24 04          	mov    %edx,0x4(%esp)
 8213b5d:	89 04 24             	mov    %eax,(%esp)
 8213b60:	e8 c7 40 0e 00       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8213b65:	e9 14 02 00 00       	jmp    8213d7e <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x43e>
 8213b6a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8213b71:	e9 f6 00 00 00       	jmp    8213c6c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x32c>
 8213b76:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8213b79:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8213b7f:	83 c2 10             	add    $0x10,%edx
 8213b82:	01 d0                	add    %edx,%eax
 8213b84:	83 c0 0f             	add    $0xf,%eax
 8213b87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213b8b:	8b 45 10             	mov    0x10(%ebp),%eax
 8213b8e:	89 04 24             	mov    %eax,(%esp)
 8213b91:	e8 da 93 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8213b96:	83 f0 01             	xor    $0x1,%eax
 8213b99:	84 c0                	test   %al,%al
 8213b9b:	74 29                	je     8213bc6 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x286>
 8213b9d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213ba4:	00 
 8213ba5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213bac:	00 
 8213bad:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213bb4:	08 
 8213bb5:	c7 04 24 2f c2 00 00 	movl   $0xc22f,(%esp)
 8213bbc:	e8 16 cd 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213bc1:	e9 46 02 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213bc6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8213bc9:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8213bcf:	83 c2 10             	add    $0x10,%edx
 8213bd2:	01 d2                	add    %edx,%edx
 8213bd4:	01 d0                	add    %edx,%eax
 8213bd6:	83 c0 02             	add    $0x2,%eax
 8213bd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213bdd:	8b 45 10             	mov    0x10(%ebp),%eax
 8213be0:	89 04 24             	mov    %eax,(%esp)
 8213be3:	e8 d8 93 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8213be8:	83 f0 01             	xor    $0x1,%eax
 8213beb:	84 c0                	test   %al,%al
 8213bed:	74 29                	je     8213c18 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x2d8>
 8213bef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213bf6:	00 
 8213bf7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213bfe:	00 
 8213bff:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213c06:	08 
 8213c07:	c7 04 24 32 c2 00 00 	movl   $0xc232,(%esp)
 8213c0e:	e8 c4 cc 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213c13:	e9 f4 01 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213c18:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8213c1b:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8213c21:	83 c2 20             	add    $0x20,%edx
 8213c24:	01 d0                	add    %edx,%eax
 8213c26:	83 c0 0a             	add    $0xa,%eax
 8213c29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213c2d:	8b 45 10             	mov    0x10(%ebp),%eax
 8213c30:	89 04 24             	mov    %eax,(%esp)
 8213c33:	e8 ea 92 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8213c38:	83 f0 01             	xor    $0x1,%eax
 8213c3b:	84 c0                	test   %al,%al
 8213c3d:	74 29                	je     8213c68 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x328>
 8213c3f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213c46:	00 
 8213c47:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213c4e:	00 
 8213c4f:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213c56:	08 
 8213c57:	c7 04 24 35 c2 00 00 	movl   $0xc235,(%esp)
 8213c5e:	e8 74 cc 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213c63:	e9 a4 01 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213c68:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8213c6c:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 8213c70:	0f 9e c0             	setle  %al
 8213c73:	84 c0                	test   %al,%al
 8213c75:	0f 85 fb fe ff ff    	jne    8213b76 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x236>
 8213c7b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8213c7e:	89 c3                	mov    %eax,%ebx
 8213c80:	e8 16 85 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8213c85:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8213c89:	89 04 24             	mov    %eax,(%esp)
 8213c8c:	e8 a1 bd 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8213c91:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8213c94:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8213c98:	75 29                	jne    8213cc3 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x383>
 8213c9a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213ca1:	00 
 8213ca2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213ca9:	00 
 8213caa:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213cb1:	08 
 8213cb2:	c7 04 24 3a c2 00 00 	movl   $0xc23a,(%esp)
 8213cb9:	e8 19 cc 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213cbe:	e9 49 01 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213cc3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8213cc6:	8b 00                	mov    (%eax),%eax
 8213cc8:	83 c0 4c             	add    $0x4c,%eax
 8213ccb:	8b 10                	mov    (%eax),%edx
 8213ccd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8213cd0:	89 04 24             	mov    %eax,(%esp)
 8213cd3:	ff d2                	call   *%edx
 8213cd5:	84 c0                	test   %al,%al
 8213cd7:	74 35                	je     8213d0e <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x3ce>
 8213cd9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8213ce0:	eb 21                	jmp    8213d03 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x3c3>
 8213ce2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8213ce5:	83 c0 10             	add    $0x10,%eax
 8213ce8:	0f b7 44 45 80       	movzwl -0x80(%ebp,%eax,2),%eax
 8213ced:	66 85 c0             	test   %ax,%ax
 8213cf0:	75 0d                	jne    8213cff <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x3bf>
 8213cf2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8213cf5:	83 c0 10             	add    $0x10,%eax
 8213cf8:	66 c7 44 45 80 30 75 	movw   $0x7530,-0x80(%ebp,%eax,2)
 8213cff:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8213d03:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 8213d07:	0f 9e c0             	setle  %al
 8213d0a:	84 c0                	test   %al,%al
 8213d0c:	75 d4                	jne    8213ce2 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x3a2>
 8213d0e:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8213d14:	83 c0 22             	add    $0x22,%eax
 8213d17:	89 04 24             	mov    %eax,(%esp)
 8213d1a:	e8 11 6f 01 00       	call   822ac30 <_ZN12ROI_Category5_sortEv>
 8213d1f:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8213d25:	83 c0 2e             	add    $0x2e,%eax
 8213d28:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213d2c:	8b 45 10             	mov    0x10(%ebp),%eax
 8213d2f:	89 04 24             	mov    %eax,(%esp)
 8213d32:	e8 39 92 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8213d37:	83 f0 01             	xor    $0x1,%eax
 8213d3a:	84 c0                	test   %al,%al
 8213d3c:	74 29                	je     8213d67 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x427>
 8213d3e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213d45:	00 
 8213d46:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213d4d:	00 
 8213d4e:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213d55:	08 
 8213d56:	c7 04 24 47 c2 00 00 	movl   $0xc247,(%esp)
 8213d5d:	e8 75 cb 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213d62:	e9 a5 00 00 00       	jmp    8213e0c <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 8213d67:	a1 48 be 40 09       	mov    0x940be48,%eax
 8213d6c:	8d 95 7e ff ff ff    	lea    -0x82(%ebp),%edx
 8213d72:	89 54 24 04          	mov    %edx,0x4(%esp)
 8213d76:	89 04 24             	mov    %eax,(%esp)
 8213d79:	e8 9e 3d 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8213d7e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8213d85:	eb 75                	jmp    8213dfc <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4bc>
 8213d87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8213d8a:	8b 04 85 d8 01 37 09 	mov    0x93701d8(,%eax,4),%eax
 8213d91:	89 c3                	mov    %eax,%ebx
 8213d93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213d96:	89 04 24             	mov    %eax,(%esp)
 8213d99:	e8 b0 7e eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8213d9e:	39 c3                	cmp    %eax,%ebx
 8213da0:	0f 94 c0             	sete   %al
 8213da3:	84 c0                	test   %al,%al
 8213da5:	74 51                	je     8213df8 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4b8>
 8213da7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213daa:	89 04 24             	mov    %eax,(%esp)
 8213dad:	e8 9c 7e eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8213db2:	89 c3                	mov    %eax,%ebx
 8213db4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213dbb:	00 
 8213dbc:	c7 44 24 08 58 c2 00 	movl   $0xc258,0x8(%esp)
 8213dc3:	00 
 8213dc4:	c7 44 24 04 60 de bc 	movl   $0x8bcde60,0x4(%esp)
 8213dcb:	08 
 8213dcc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8213dcf:	89 04 24             	mov    %eax,(%esp)
 8213dd2:	e8 41 b9 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8213dd7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8213ddb:	c7 44 24 08 dc 32 bc 	movl   $0x8bc32dc,0x8(%esp)
 8213de2:	08 
 8213de3:	c7 44 24 04 f7 32 bc 	movl   $0x8bc32f7,0x4(%esp)
 8213dea:	08 
 8213deb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8213dee:	89 04 24             	mov    %eax,(%esp)
 8213df1:	e8 92 b9 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8213df6:	eb 0f                	jmp    8213e07 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x4c7>
 8213df8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8213dfc:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8213e00:	0f 9e c0             	setle  %al
 8213e03:	84 c0                	test   %al,%al
 8213e05:	75 80                	jne    8213d87 <_ZN33Dispatcher_AuctionAskAveragePrice12dispatch_sigEP5CUserR9PacketBuf+0x447>
 8213e07:	b8 00 00 00 00       	mov    $0x0,%eax
 8213e0c:	81 c4 94 00 00 00    	add    $0x94,%esp
 8213e12:	5b                   	pop    %ebx
 8213e13:	5d                   	pop    %ebp
 8213e14:	c3                   	ret

```

```c
// Dispatcher_AuctionAskAveragePrice::dispatch_sig @ 0x8213940

/* Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AuctionAskAveragePrice::dispatch_sig
          (Dispatcher_AuctionAskAveragePrice *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this_00;
  int iVar5;
  PCK_AUCTION_ASK_AVERAGE_PRICE_GA local_86 [2];
  short asStack_84 [8];
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  uchar uStack_68;
  uchar auStack_67 [3];
  ROI_Category aRStack_64 [8];
  char acStack_5c [4];
  uchar uStack_58;
  PCK_AUCTION_ASK_AVERAGE_PRICE_GP local_57 [18];
  undefined4 local_45;
  undefined4 local_41;
  uint local_3d;
  uint local_38;
  byte local_31;
  cMyTrace local_30 [16];
  uint local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_31);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xc1e5,
                     "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (1 < local_31) {
    uVar3 = LineFunc(0xc1e8,
                     "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_20 = (uint)local_31;
  cVar2 = IsAuctionServerDisconnected(local_31);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xb9,0x8c,local_20);
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
    uVar3 = LineFunc(0xc207,
                     "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    PCK_AUCTION_ASK_AVERAGE_PRICE_GA::PCK_AUCTION_ASK_AVERAGE_PRICE_GA(local_86);
    local_74 = CUser::GetUID(param_1);
    local_70 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&local_38);
    if (cVar2 == '\x01') {
      local_6c = local_38;
      cVar2 = PacketBuf::get_byte(param_2,&uStack_68);
      if (cVar2 == '\x01') {
        if (local_20 == 1) {
          PCK_AUCTION_ASK_AVERAGE_PRICE_GP::PCK_AUCTION_ASK_AVERAGE_PRICE_GP(local_57);
          local_45 = CUser::GetUID(param_1);
          local_41 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          local_3d = local_38;
          CCeraAuctionServerProxy::SendPacket
                    (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_57);
        }
        else {
          for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
            cVar2 = PacketBuf::get_byte(param_2,auStack_67 + local_18);
            if (cVar2 != '\x01') {
              uVar3 = LineFunc(0xc22f,
                               "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar3;
            }
            cVar2 = PacketBuf::get_short(param_2,asStack_84 + local_18 + 0x10);
            if (cVar2 != '\x01') {
              uVar3 = LineFunc(0xc232,
                               "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar3;
            }
            cVar2 = PacketBuf::get_byte(param_2,acStack_5c + local_18);
            if (cVar2 != '\x01') {
              uVar3 = LineFunc(0xc235,
                               "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar3;
            }
          }
          this_00 = (CDataManager *)G_CDataManager();
          local_1c = (int *)CDataManager::find_item(this_00,local_38);
          if (local_1c == (int *)0x0) {
            uVar3 = LineFunc(0xc23a,
                             "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          cVar2 = (**(code **)(*local_1c + 0x4c))(local_1c);
          if (cVar2 != '\0') {
            for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
              if (asStack_84[local_14 + 0x10] == 0) {
                asStack_84[local_14 + 0x10] = 30000;
              }
            }
          }
          ROI_Category::_sort(aRStack_64);
          cVar2 = PacketBuf::get_byte(param_2,&uStack_58);
          if (cVar2 != '\x01') {
            uVar3 = LineFunc(0xc247,
                             "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_86);
        }
        for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
          iVar4 = *(int *)(gmList + local_10 * 4);
          iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          if (iVar4 == iVar5) {
            uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cMyTrace::cMyTrace(local_30,
                               "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                               ,0xc258,0);
            cMyTrace::operator()
                      (local_30,"Trace Auction Delay, %s(%d)","REQ AuctionAskAveragePrice",uVar3);
            break;
          }
        }
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xc21a,
                         "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xc217,
                       "virtual int Dispatcher_AuctionAskAveragePrice::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

