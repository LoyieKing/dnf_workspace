# Dispatcher_AuctionSearchByNoItmeKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082161e4 Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig  [0x082161e4-0x8216965] ===
 82161e4:	55                   	push   %ebp
 82161e5:	89 e5                	mov    %esp,%ebp
 82161e7:	53                   	push   %ebx
 82161e8:	81 ec 94 00 00 00    	sub    $0x94,%esp
 82161ee:	8d 45 df             	lea    -0x21(%ebp),%eax
 82161f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82161f5:	8b 45 10             	mov    0x10(%ebp),%eax
 82161f8:	89 04 24             	mov    %eax,(%esp)
 82161fb:	e8 70 6d 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216200:	83 f0 01             	xor    $0x1,%eax
 8216203:	84 c0                	test   %al,%al
 8216205:	74 29                	je     8216230 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x4c>
 8216207:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821620e:	00 
 821620f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216216:	00 
 8216217:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 821621e:	08 
 821621f:	c7 04 24 19 c7 00 00 	movl   $0xc719,(%esp)
 8216226:	e8 ac a6 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821622b:	e9 2d 07 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216230:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8216234:	3c 01                	cmp    $0x1,%al
 8216236:	76 29                	jbe    8216261 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x7d>
 8216238:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821623f:	00 
 8216240:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216247:	00 
 8216248:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 821624f:	08 
 8216250:	c7 04 24 1c c7 00 00 	movl   $0xc71c,(%esp)
 8216257:	e8 7b a6 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821625c:	e9 fc 06 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216261:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8216265:	0f b6 c0             	movzbl %al,%eax
 8216268:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821626b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 821626e:	0f b6 c0             	movzbl %al,%eax
 8216271:	89 04 24             	mov    %eax,(%esp)
 8216274:	e8 79 d6 ff ff       	call   82138f2 <_Z27IsAuctionServerDisconnectedh>
 8216279:	84 c0                	test   %al,%al
 821627b:	74 2c                	je     82162a9 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0xc5>
 821627d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8216280:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8216284:	c7 44 24 08 8c 00 00 	movl   $0x8c,0x8(%esp)
 821628b:	00 
 821628c:	c7 44 24 04 bd 00 00 	movl   $0xbd,0x4(%esp)
 8216293:	00 
 8216294:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216297:	89 04 24             	mov    %eax,(%esp)
 821629a:	e8 83 5d 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 821629f:	b8 00 00 00 00       	mov    $0x0,%eax
 82162a4:	e9 b4 06 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 82162a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82162ac:	89 04 24             	mov    %eax,(%esp)
 82162af:	e8 d8 40 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82162b4:	83 f8 02             	cmp    $0x2,%eax
 82162b7:	7e 0f                	jle    82162c8 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0xe4>
 82162b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82162bc:	89 04 24             	mov    %eax,(%esp)
 82162bf:	e8 6e a1 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82162c4:	85 c0                	test   %eax,%eax
 82162c6:	75 07                	jne    82162cf <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0xeb>
 82162c8:	b8 01 00 00 00       	mov    $0x1,%eax
 82162cd:	eb 05                	jmp    82162d4 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 82162cf:	b8 00 00 00 00       	mov    $0x0,%eax
 82162d4:	84 c0                	test   %al,%al
 82162d6:	74 29                	je     8216301 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x11d>
 82162d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82162df:	00 
 82162e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82162e7:	00 
 82162e8:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82162ef:	08 
 82162f0:	c7 04 24 3f c7 00 00 	movl   $0xc73f,(%esp)
 82162f7:	e8 db a5 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82162fc:	e9 5c 06 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216301:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 8216305:	0f 85 23 02 00 00    	jne    821652e <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x34a>
 821630b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 821630e:	89 04 24             	mov    %eax,(%esp)
 8216311:	e8 e4 87 01 00       	call   822eafa <_ZN34PCK_AUCTION_SEARCH_BY_NOITEMKEY_GPC1Ev>
 8216316:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216319:	89 04 24             	mov    %eax,(%esp)
 821631c:	e8 75 29 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8216321:	89 45 be             	mov    %eax,-0x42(%ebp)
 8216324:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216327:	89 04 24             	mov    %eax,(%esp)
 821632a:	e8 1f 59 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 821632f:	89 45 c2             	mov    %eax,-0x3e(%ebp)
 8216332:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8216335:	83 c0 1a             	add    $0x1a,%eax
 8216338:	89 44 24 04          	mov    %eax,0x4(%esp)
 821633c:	8b 45 10             	mov    0x10(%ebp),%eax
 821633f:	89 04 24             	mov    %eax,(%esp)
 8216342:	e8 f9 6e 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8216347:	83 f0 01             	xor    $0x1,%eax
 821634a:	84 c0                	test   %al,%al
 821634c:	74 29                	je     8216377 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x193>
 821634e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216355:	00 
 8216356:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821635d:	00 
 821635e:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 8216365:	08 
 8216366:	c7 04 24 48 c7 00 00 	movl   $0xc748,(%esp)
 821636d:	e8 65 a5 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216372:	e9 e6 05 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216377:	8d 45 ac             	lea    -0x54(%ebp),%eax
 821637a:	83 c0 1e             	add    $0x1e,%eax
 821637d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216381:	8b 45 10             	mov    0x10(%ebp),%eax
 8216384:	89 04 24             	mov    %eax,(%esp)
 8216387:	e8 24 6d 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821638c:	83 f0 01             	xor    $0x1,%eax
 821638f:	84 c0                	test   %al,%al
 8216391:	74 29                	je     82163bc <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x1d8>
 8216393:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821639a:	00 
 821639b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82163a2:	00 
 82163a3:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82163aa:	08 
 82163ab:	c7 04 24 49 c7 00 00 	movl   $0xc749,(%esp)
 82163b2:	e8 20 a5 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82163b7:	e9 a1 05 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 82163bc:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82163bf:	83 c0 20             	add    $0x20,%eax
 82163c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82163c6:	8b 45 10             	mov    0x10(%ebp),%eax
 82163c9:	89 04 24             	mov    %eax,(%esp)
 82163cc:	e8 9f 6b 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82163d1:	83 f0 01             	xor    $0x1,%eax
 82163d4:	84 c0                	test   %al,%al
 82163d6:	74 29                	je     8216401 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x21d>
 82163d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82163df:	00 
 82163e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82163e7:	00 
 82163e8:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82163ef:	08 
 82163f0:	c7 04 24 4a c7 00 00 	movl   $0xc74a,(%esp)
 82163f7:	e8 db a4 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82163fc:	e9 5c 05 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216401:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8216404:	83 c0 21             	add    $0x21,%eax
 8216407:	89 44 24 04          	mov    %eax,0x4(%esp)
 821640b:	8b 45 10             	mov    0x10(%ebp),%eax
 821640e:	89 04 24             	mov    %eax,(%esp)
 8216411:	e8 5a 6b 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216416:	83 f0 01             	xor    $0x1,%eax
 8216419:	84 c0                	test   %al,%al
 821641b:	74 29                	je     8216446 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x262>
 821641d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216424:	00 
 8216425:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821642c:	00 
 821642d:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 8216434:	08 
 8216435:	c7 04 24 4b c7 00 00 	movl   $0xc74b,(%esp)
 821643c:	e8 96 a4 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216441:	e9 17 05 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216446:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8216449:	83 c0 22             	add    $0x22,%eax
 821644c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216450:	8b 45 10             	mov    0x10(%ebp),%eax
 8216453:	89 04 24             	mov    %eax,(%esp)
 8216456:	e8 15 6b 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821645b:	83 f0 01             	xor    $0x1,%eax
 821645e:	84 c0                	test   %al,%al
 8216460:	74 29                	je     821648b <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x2a7>
 8216462:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216469:	00 
 821646a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216471:	00 
 8216472:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 8216479:	08 
 821647a:	c7 04 24 4c c7 00 00 	movl   $0xc74c,(%esp)
 8216481:	e8 51 a4 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216486:	e9 d2 04 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 821648b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 821648e:	83 c0 23             	add    $0x23,%eax
 8216491:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216495:	8b 45 10             	mov    0x10(%ebp),%eax
 8216498:	89 04 24             	mov    %eax,(%esp)
 821649b:	e8 d0 6a 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82164a0:	83 f0 01             	xor    $0x1,%eax
 82164a3:	84 c0                	test   %al,%al
 82164a5:	74 29                	je     82164d0 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x2ec>
 82164a7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82164ae:	00 
 82164af:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82164b6:	00 
 82164b7:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82164be:	08 
 82164bf:	c7 04 24 4d c7 00 00 	movl   $0xc74d,(%esp)
 82164c6:	e8 0c a4 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82164cb:	e9 8d 04 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 82164d0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82164d3:	83 c0 24             	add    $0x24,%eax
 82164d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82164da:	8b 45 10             	mov    0x10(%ebp),%eax
 82164dd:	89 04 24             	mov    %eax,(%esp)
 82164e0:	e8 8b 6a 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82164e5:	83 f0 01             	xor    $0x1,%eax
 82164e8:	84 c0                	test   %al,%al
 82164ea:	74 29                	je     8216515 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x331>
 82164ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82164f3:	00 
 82164f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82164fb:	00 
 82164fc:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 8216503:	08 
 8216504:	c7 04 24 4e c7 00 00 	movl   $0xc74e,(%esp)
 821650b:	e8 c7 a3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216510:	e9 48 04 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216515:	a1 4c be 40 09       	mov    0x940be4c,%eax
 821651a:	8d 55 ac             	lea    -0x54(%ebp),%edx
 821651d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8216521:	89 04 24             	mov    %eax,(%esp)
 8216524:	e8 03 17 0e 00       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8216529:	e9 a1 03 00 00       	jmp    82168cf <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x6eb>
 821652e:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 8216534:	89 04 24             	mov    %eax,(%esp)
 8216537:	e8 fa 81 01 00       	call   822e736 <_ZN34PCK_AUCTION_SEARCH_BY_NOITEMKEY_GAC1Ev>
 821653c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821653f:	89 04 24             	mov    %eax,(%esp)
 8216542:	e8 4f 27 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8216547:	89 45 8b             	mov    %eax,-0x75(%ebp)
 821654a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821654d:	89 04 24             	mov    %eax,(%esp)
 8216550:	e8 f9 56 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216555:	89 45 8f             	mov    %eax,-0x71(%ebp)
 8216558:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 821655e:	83 c0 1a             	add    $0x1a,%eax
 8216561:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216565:	8b 45 10             	mov    0x10(%ebp),%eax
 8216568:	89 04 24             	mov    %eax,(%esp)
 821656b:	e8 d0 6c 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8216570:	83 f0 01             	xor    $0x1,%eax
 8216573:	84 c0                	test   %al,%al
 8216575:	74 29                	je     82165a0 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x3bc>
 8216577:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821657e:	00 
 821657f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216586:	00 
 8216587:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 821658e:	08 
 821658f:	c7 04 24 60 c7 00 00 	movl   $0xc760,(%esp)
 8216596:	e8 3c a3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821659b:	e9 bd 03 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 82165a0:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 82165a6:	83 c0 1e             	add    $0x1e,%eax
 82165a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82165ad:	8b 45 10             	mov    0x10(%ebp),%eax
 82165b0:	89 04 24             	mov    %eax,(%esp)
 82165b3:	e8 f8 6a 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 82165b8:	83 f0 01             	xor    $0x1,%eax
 82165bb:	84 c0                	test   %al,%al
 82165bd:	74 29                	je     82165e8 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x404>
 82165bf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82165c6:	00 
 82165c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82165ce:	00 
 82165cf:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82165d6:	08 
 82165d7:	c7 04 24 61 c7 00 00 	movl   $0xc761,(%esp)
 82165de:	e8 f4 a2 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82165e3:	e9 75 03 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 82165e8:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 82165ee:	83 c0 20             	add    $0x20,%eax
 82165f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82165f5:	8b 45 10             	mov    0x10(%ebp),%eax
 82165f8:	89 04 24             	mov    %eax,(%esp)
 82165fb:	e8 70 69 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216600:	83 f0 01             	xor    $0x1,%eax
 8216603:	84 c0                	test   %al,%al
 8216605:	74 29                	je     8216630 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x44c>
 8216607:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821660e:	00 
 821660f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216616:	00 
 8216617:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 821661e:	08 
 821661f:	c7 04 24 62 c7 00 00 	movl   $0xc762,(%esp)
 8216626:	e8 ac a2 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821662b:	e9 2d 03 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216630:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 8216636:	83 c0 21             	add    $0x21,%eax
 8216639:	89 44 24 04          	mov    %eax,0x4(%esp)
 821663d:	8b 45 10             	mov    0x10(%ebp),%eax
 8216640:	89 04 24             	mov    %eax,(%esp)
 8216643:	e8 28 69 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216648:	83 f0 01             	xor    $0x1,%eax
 821664b:	84 c0                	test   %al,%al
 821664d:	74 29                	je     8216678 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x494>
 821664f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216656:	00 
 8216657:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821665e:	00 
 821665f:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 8216666:	08 
 8216667:	c7 04 24 63 c7 00 00 	movl   $0xc763,(%esp)
 821666e:	e8 64 a2 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216673:	e9 e5 02 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216678:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 821667e:	83 c0 22             	add    $0x22,%eax
 8216681:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216685:	8b 45 10             	mov    0x10(%ebp),%eax
 8216688:	89 04 24             	mov    %eax,(%esp)
 821668b:	e8 e0 68 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216690:	83 f0 01             	xor    $0x1,%eax
 8216693:	84 c0                	test   %al,%al
 8216695:	74 29                	je     82166c0 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x4dc>
 8216697:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821669e:	00 
 821669f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82166a6:	00 
 82166a7:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82166ae:	08 
 82166af:	c7 04 24 64 c7 00 00 	movl   $0xc764,(%esp)
 82166b6:	e8 1c a2 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82166bb:	e9 9d 02 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 82166c0:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 82166c6:	83 c0 23             	add    $0x23,%eax
 82166c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82166cd:	8b 45 10             	mov    0x10(%ebp),%eax
 82166d0:	89 04 24             	mov    %eax,(%esp)
 82166d3:	e8 98 68 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82166d8:	83 f0 01             	xor    $0x1,%eax
 82166db:	84 c0                	test   %al,%al
 82166dd:	74 29                	je     8216708 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x524>
 82166df:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82166e6:	00 
 82166e7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82166ee:	00 
 82166ef:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82166f6:	08 
 82166f7:	c7 04 24 65 c7 00 00 	movl   $0xc765,(%esp)
 82166fe:	e8 d4 a1 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216703:	e9 55 02 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216708:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 821670e:	83 c0 24             	add    $0x24,%eax
 8216711:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216715:	8b 45 10             	mov    0x10(%ebp),%eax
 8216718:	89 04 24             	mov    %eax,(%esp)
 821671b:	e8 50 68 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216720:	83 f0 01             	xor    $0x1,%eax
 8216723:	84 c0                	test   %al,%al
 8216725:	74 29                	je     8216750 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x56c>
 8216727:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821672e:	00 
 821672f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216736:	00 
 8216737:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 821673e:	08 
 821673f:	c7 04 24 66 c7 00 00 	movl   $0xc766,(%esp)
 8216746:	e8 8c a1 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821674b:	e9 0d 02 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216750:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 8216756:	83 c0 25             	add    $0x25,%eax
 8216759:	89 44 24 04          	mov    %eax,0x4(%esp)
 821675d:	8b 45 10             	mov    0x10(%ebp),%eax
 8216760:	89 04 24             	mov    %eax,(%esp)
 8216763:	e8 58 68 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8216768:	83 f0 01             	xor    $0x1,%eax
 821676b:	84 c0                	test   %al,%al
 821676d:	74 29                	je     8216798 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x5b4>
 821676f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216776:	00 
 8216777:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821677e:	00 
 821677f:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 8216786:	08 
 8216787:	c7 04 24 6a c7 00 00 	movl   $0xc76a,(%esp)
 821678e:	e8 44 a1 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216793:	e9 c5 01 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216798:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 821679e:	83 c0 27             	add    $0x27,%eax
 82167a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82167a5:	8b 45 10             	mov    0x10(%ebp),%eax
 82167a8:	89 04 24             	mov    %eax,(%esp)
 82167ab:	e8 10 68 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82167b0:	83 f0 01             	xor    $0x1,%eax
 82167b3:	84 c0                	test   %al,%al
 82167b5:	74 29                	je     82167e0 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x5fc>
 82167b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82167be:	00 
 82167bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82167c6:	00 
 82167c7:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82167ce:	08 
 82167cf:	c7 04 24 6c c7 00 00 	movl   $0xc76c,(%esp)
 82167d6:	e8 fc a0 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82167db:	e9 7d 01 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 82167e0:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 82167e6:	83 c0 29             	add    $0x29,%eax
 82167e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82167ed:	8b 45 10             	mov    0x10(%ebp),%eax
 82167f0:	89 04 24             	mov    %eax,(%esp)
 82167f3:	e8 c8 67 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82167f8:	83 f0 01             	xor    $0x1,%eax
 82167fb:	84 c0                	test   %al,%al
 82167fd:	74 29                	je     8216828 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x644>
 82167ff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216806:	00 
 8216807:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821680e:	00 
 821680f:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 8216816:	08 
 8216817:	c7 04 24 6e c7 00 00 	movl   $0xc76e,(%esp)
 821681e:	e8 b4 a0 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216823:	e9 35 01 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216828:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 821682e:	83 c0 31             	add    $0x31,%eax
 8216831:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216835:	8b 45 10             	mov    0x10(%ebp),%eax
 8216838:	89 04 24             	mov    %eax,(%esp)
 821683b:	e8 30 67 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216840:	83 f0 01             	xor    $0x1,%eax
 8216843:	84 c0                	test   %al,%al
 8216845:	74 29                	je     8216870 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x68c>
 8216847:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821684e:	00 
 821684f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216856:	00 
 8216857:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 821685e:	08 
 821685f:	c7 04 24 72 c7 00 00 	movl   $0xc772,(%esp)
 8216866:	e8 6c a0 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821686b:	e9 ed 00 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 8216870:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 8216876:	83 c0 32             	add    $0x32,%eax
 8216879:	89 44 24 04          	mov    %eax,0x4(%esp)
 821687d:	8b 45 10             	mov    0x10(%ebp),%eax
 8216880:	89 04 24             	mov    %eax,(%esp)
 8216883:	e8 e8 66 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8216888:	83 f0 01             	xor    $0x1,%eax
 821688b:	84 c0                	test   %al,%al
 821688d:	74 29                	je     82168b8 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x6d4>
 821688f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216896:	00 
 8216897:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821689e:	00 
 821689f:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 82168a6:	08 
 82168a7:	c7 04 24 73 c7 00 00 	movl   $0xc773,(%esp)
 82168ae:	e8 24 a0 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82168b3:	e9 a5 00 00 00       	jmp    821695d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x779>
 82168b8:	a1 48 be 40 09       	mov    0x940be48,%eax
 82168bd:	8d 95 79 ff ff ff    	lea    -0x87(%ebp),%edx
 82168c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 82168c7:	89 04 24             	mov    %eax,(%esp)
 82168ca:	e8 4d 12 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 82168cf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82168d6:	eb 75                	jmp    821694d <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x769>
 82168d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82168db:	8b 04 85 d8 01 37 09 	mov    0x93701d8(,%eax,4),%eax
 82168e2:	89 c3                	mov    %eax,%ebx
 82168e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82168e7:	89 04 24             	mov    %eax,(%esp)
 82168ea:	e8 5f 53 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82168ef:	39 c3                	cmp    %eax,%ebx
 82168f1:	0f 94 c0             	sete   %al
 82168f4:	84 c0                	test   %al,%al
 82168f6:	74 51                	je     8216949 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x765>
 82168f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82168fb:	89 04 24             	mov    %eax,(%esp)
 82168fe:	e8 4b 53 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216903:	89 c3                	mov    %eax,%ebx
 8216905:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821690c:	00 
 821690d:	c7 44 24 08 84 c7 00 	movl   $0xc784,0x8(%esp)
 8216914:	00 
 8216915:	c7 44 24 04 20 dc bc 	movl   $0x8bcdc20,0x4(%esp)
 821691c:	08 
 821691d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8216920:	89 04 24             	mov    %eax,(%esp)
 8216923:	e8 f0 8d 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8216928:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821692c:	c7 44 24 08 6f 33 bc 	movl   $0x8bc336f,0x8(%esp)
 8216933:	08 
 8216934:	c7 44 24 04 f7 32 bc 	movl   $0x8bc32f7,0x4(%esp)
 821693b:	08 
 821693c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821693f:	89 04 24             	mov    %eax,(%esp)
 8216942:	e8 41 8e 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8216947:	eb 0f                	jmp    8216958 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x774>
 8216949:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 821694d:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8216951:	0f 9e c0             	setle  %al
 8216954:	84 c0                	test   %al,%al
 8216956:	75 80                	jne    82168d8 <_ZN35Dispatcher_AuctionSearchByNoItmeKey12dispatch_sigEP5CUserR9PacketBuf+0x6f4>
 8216958:	b8 00 00 00 00       	mov    $0x0,%eax
 821695d:	81 c4 94 00 00 00    	add    $0x94,%esp
 8216963:	5b                   	pop    %ebx
 8216964:	5d                   	pop    %ebp
 8216965:	c3                   	ret

```

```c
// Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig @ 0x82161e4

/* Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig
          (Dispatcher_AuctionSearchByNoItmeKey *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  PCK_AUCTION_SEARCH_BY_NOITEMKEY_GA local_8b [18];
  undefined4 local_79;
  undefined4 local_75;
  uint uStack_71;
  ushort uStack_6d;
  uchar uStack_6b;
  uchar uStack_6a;
  uchar uStack_69;
  uchar uStack_68;
  uchar uStack_67;
  short sStack_66;
  short sStack_64;
  short asStack_62 [4];
  uchar uStack_5a;
  uchar uStack_59;
  PCK_AUCTION_SEARCH_BY_NOITEMKEY_GP local_58 [18];
  undefined4 local_46;
  undefined4 local_42;
  uint uStack_3e;
  ushort uStack_3a;
  uchar uStack_38;
  uchar uStack_37;
  uchar uStack_36;
  uchar uStack_35;
  uchar auStack_34 [15];
  byte local_25;
  cMyTrace local_24 [16];
  uint local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_25);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xc719,
                     "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (1 < local_25) {
    uVar3 = LineFunc(0xc71c,
                     "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_14 = (uint)local_25;
  cVar2 = IsAuctionServerDisconnected(local_25);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xbd,0x8c,local_14);
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
    uVar3 = LineFunc(0xc73f,
                     "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (local_14 == 1) {
    PCK_AUCTION_SEARCH_BY_NOITEMKEY_GP::PCK_AUCTION_SEARCH_BY_NOITEMKEY_GP(local_58);
    local_46 = CUser::GetUID(param_1);
    local_42 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&uStack_3e);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc748,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&uStack_3a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc749,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_38);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74a,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_37);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74b,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_36);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74c,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_35);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74d,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,auStack_34);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc74e,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    CCeraAuctionServerProxy::SendPacket(GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_58);
  }
  else {
    PCK_AUCTION_SEARCH_BY_NOITEMKEY_GA::PCK_AUCTION_SEARCH_BY_NOITEMKEY_GA(local_8b);
    local_79 = CUser::GetUID(param_1);
    local_75 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,&uStack_71);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc760,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&uStack_6d);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc761,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_6b);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc762,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_6a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc763,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_69);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc764,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_68);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc765,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_67);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc766,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&sStack_66);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc76a,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,&sStack_64);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc76c,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_short(param_2,asStack_62);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc76e,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_5a);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc772,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    cVar2 = PacketBuf::get_byte(param_2,&uStack_59);
    if (cVar2 != '\x01') {
      uVar3 = LineFunc(0xc773,
                       "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_8b);
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
  cMyTrace::cMyTrace(local_24,
                     "virtual int Dispatcher_AuctionSearchByNoItmeKey::dispatch_sig(CUser*, PacketBuf&)"
                     ,0xc784,0);
  cMyTrace::operator()(local_24,"Trace Auction Delay, %s(%d)","REQ AuctionSearchByNoItmeKey",uVar3);
  return 0;
}

```

