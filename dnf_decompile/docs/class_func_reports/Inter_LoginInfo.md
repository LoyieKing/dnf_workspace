# Inter_LoginInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c5294 Inter_LoginInfo::dispatch_sig  [0x084c5294-0x84c7aef] ===
 84c5294:	55                   	push   %ebp
 84c5295:	89 e5                	mov    %esp,%ebp
 84c5297:	57                   	push   %edi
 84c5298:	56                   	push   %esi
 84c5299:	53                   	push   %ebx
 84c529a:	81 ec 7c 02 00 00    	sub    $0x27c,%esp
 84c52a0:	8b 45 10             	mov    0x10(%ebp),%eax
 84c52a3:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84c52a6:	e8 fc 50 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c52ab:	89 04 24             	mov    %eax,(%esp)
 84c52ae:	e8 6d 18 c5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c52b3:	83 f8 0e             	cmp    $0xe,%eax
 84c52b6:	0f 94 c0             	sete   %al
 84c52b9:	84 c0                	test   %al,%al
 84c52bb:	74 18                	je     84c52d5 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x41>
 84c52bd:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c52c0:	8b 80 d0 39 00 00    	mov    0x39d0(%eax),%eax
 84c52c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c52ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c52cd:	89 04 24             	mov    %eax,(%esp)
 84c52d0:	e8 d7 ad d6 ff       	call   82300ac <_ZN5CUser14SetServerGroupE17ENUM_SERVER_GROUP>
 84c52d5:	e8 cd 50 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c52da:	89 04 24             	mov    %eax,(%esp)
 84c52dd:	e8 3e 18 c5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c52e2:	83 f8 07             	cmp    $0x7,%eax
 84c52e5:	0f 94 c0             	sete   %al
 84c52e8:	84 c0                	test   %al,%al
 84c52ea:	74 18                	je     84c5304 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x70>
 84c52ec:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c52ef:	8b 80 a8 39 00 00    	mov    0x39a8(%eax),%eax
 84c52f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c52f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c52fc:	89 04 24             	mov    %eax,(%esp)
 84c52ff:	e8 a8 ad d6 ff       	call   82300ac <_ZN5CUser14SetServerGroupE17ENUM_SERVER_GROUP>
 84c5304:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c5307:	05 3a 3a 00 00       	add    $0x3a3a,%eax
 84c530c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5310:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5313:	89 04 24             	mov    %eax,(%esp)
 84c5316:	e8 fd 75 02 00       	call   84ec918 <_ZN5CUser13setWebAddressEPc>
 84c531b:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5321:	89 04 24             	mov    %eax,(%esp)
 84c5324:	e8 23 8a 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c5329:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c5330:	00 
 84c5331:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5338:	00 
 84c5339:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c533f:	89 04 24             	mov    %eax,(%esp)
 84c5342:	e8 b5 65 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c5347:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c534a:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c5350:	83 f8 01             	cmp    $0x1,%eax
 84c5353:	74 0e                	je     84c5363 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xcf>
 84c5355:	83 f8 08             	cmp    $0x8,%eax
 84c5358:	0f 84 c5 00 00 00    	je     84c5423 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x18f>
 84c535e:	e9 44 01 00 00       	jmp    84c54a7 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x213>
 84c5363:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c536a:	00 
 84c536b:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5371:	89 04 24             	mov    %eax,(%esp)
 84c5374:	e8 a7 65 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5379:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84c5380:	00 
 84c5381:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5387:	89 04 24             	mov    %eax,(%esp)
 84c538a:	e8 91 65 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c538f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5396:	00 
 84c5397:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c539d:	89 04 24             	mov    %eax,(%esp)
 84c53a0:	e8 b3 65 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c53a5:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c53ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c53af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c53b2:	89 04 24             	mov    %eax,(%esp)
 84c53b5:	e8 00 32 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c53ba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c53c1:	00 
 84c53c2:	c7 44 24 08 0a 1b 00 	movl   $0x1b0a,0x8(%esp)
 84c53c9:	00 
 84c53ca:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c53d1:	08 
 84c53d2:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 84c53d8:	89 04 24             	mov    %eax,(%esp)
 84c53db:	e8 38 a3 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c53e0:	c7 44 24 04 74 74 c8 	movl   $0x8c87474,0x4(%esp)
 84c53e7:	08 
 84c53e8:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 84c53ee:	89 04 24             	mov    %eax,(%esp)
 84c53f1:	e8 92 a3 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c53f6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c53fd:	00 
 84c53fe:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c5405:	00 
 84c5406:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 84c540d:	00 
 84c540e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5411:	89 04 24             	mov    %eax,(%esp)
 84c5414:	e8 db 35 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c5419:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c541e:	e9 b1 26 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c5423:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c542a:	00 
 84c542b:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5431:	89 04 24             	mov    %eax,(%esp)
 84c5434:	e8 e7 64 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5439:	c7 44 24 04 60 00 00 	movl   $0x60,0x4(%esp)
 84c5440:	00 
 84c5441:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5447:	89 04 24             	mov    %eax,(%esp)
 84c544a:	e8 d1 64 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c544f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5456:	00 
 84c5457:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c545d:	89 04 24             	mov    %eax,(%esp)
 84c5460:	e8 f3 64 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c5465:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c546b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c546f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5472:	89 04 24             	mov    %eax,(%esp)
 84c5475:	e8 40 31 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c547a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5481:	00 
 84c5482:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c5489:	00 
 84c548a:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 84c5491:	00 
 84c5492:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5495:	89 04 24             	mov    %eax,(%esp)
 84c5498:	e8 57 35 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c549d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c54a2:	e9 2d 26 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c54a7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c54aa:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c54b0:	83 f8 09             	cmp    $0x9,%eax
 84c54b3:	0f 8e 00 01 00 00    	jle    84c55b9 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x325>
 84c54b9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c54bc:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c54c2:	83 f8 0c             	cmp    $0xc,%eax
 84c54c5:	0f 8f ee 00 00 00    	jg     84c55b9 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x325>
 84c54cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c54d2:	00 
 84c54d3:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c54d9:	89 04 24             	mov    %eax,(%esp)
 84c54dc:	e8 3f 64 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c54e1:	c6 45 ab 00          	movb   $0x0,-0x55(%ebp)
 84c54e5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c54e8:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c54ee:	83 e8 26             	sub    $0x26,%eax
 84c54f1:	88 45 ab             	mov    %al,-0x55(%ebp)
 84c54f4:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 84c54f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c54fc:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5502:	89 04 24             	mov    %eax,(%esp)
 84c5505:	e8 16 64 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c550a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c550d:	8b 80 d8 00 00 00    	mov    0xd8(%eax),%eax
 84c5513:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5517:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c551d:	89 04 24             	mov    %eax,(%esp)
 84c5520:	e8 fb 63 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5525:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c552c:	00 
 84c552d:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5533:	89 04 24             	mov    %eax,(%esp)
 84c5536:	e8 1d 64 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c553b:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5541:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5545:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5548:	89 04 24             	mov    %eax,(%esp)
 84c554b:	e8 6a 30 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c5550:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5557:	00 
 84c5558:	c7 44 24 08 67 1b 00 	movl   $0x1b67,0x8(%esp)
 84c555f:	00 
 84c5560:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c5567:	08 
 84c5568:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 84c556e:	89 04 24             	mov    %eax,(%esp)
 84c5571:	e8 a2 a1 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c5576:	c7 44 24 04 a4 74 c8 	movl   $0x8c874a4,0x4(%esp)
 84c557d:	08 
 84c557e:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 84c5584:	89 04 24             	mov    %eax,(%esp)
 84c5587:	e8 fc a1 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c558c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5593:	00 
 84c5594:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c559b:	00 
 84c559c:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 84c55a3:	00 
 84c55a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c55a7:	89 04 24             	mov    %eax,(%esp)
 84c55aa:	e8 45 34 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c55af:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c55b4:	e9 1b 25 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c55b9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c55bc:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c55c2:	83 f8 04             	cmp    $0x4,%eax
 84c55c5:	0f 85 f1 00 00 00    	jne    84c56bc <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x428>
 84c55cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c55d2:	00 
 84c55d3:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c55d9:	89 04 24             	mov    %eax,(%esp)
 84c55dc:	e8 3f 63 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c55e1:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84c55e8:	00 
 84c55e9:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c55ef:	89 04 24             	mov    %eax,(%esp)
 84c55f2:	e8 29 63 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c55f7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c55fa:	8b 90 50 3a 00 00    	mov    0x3a50(%eax),%edx
 84c5600:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c5603:	89 d0                	mov    %edx,%eax
 84c5605:	01 c0                	add    %eax,%eax
 84c5607:	01 d0                	add    %edx,%eax
 84c5609:	c1 e0 03             	shl    $0x3,%eax
 84c560c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c560f:	05 68 3a 00 00       	add    $0x3a68,%eax
 84c5614:	8b 00                	mov    (%eax),%eax
 84c5616:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c561a:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5620:	89 04 24             	mov    %eax,(%esp)
 84c5623:	e8 14 63 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c5628:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c562f:	00 
 84c5630:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5636:	89 04 24             	mov    %eax,(%esp)
 84c5639:	e8 1a 63 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c563e:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5644:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5648:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c564b:	89 04 24             	mov    %eax,(%esp)
 84c564e:	e8 67 2f 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c5653:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c565a:	00 
 84c565b:	c7 44 24 08 77 1b 00 	movl   $0x1b77,0x8(%esp)
 84c5662:	00 
 84c5663:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c566a:	08 
 84c566b:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 84c5671:	89 04 24             	mov    %eax,(%esp)
 84c5674:	e8 9f a0 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c5679:	c7 44 24 04 d8 74 c8 	movl   $0x8c874d8,0x4(%esp)
 84c5680:	08 
 84c5681:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 84c5687:	89 04 24             	mov    %eax,(%esp)
 84c568a:	e8 f9 a0 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c568f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5696:	00 
 84c5697:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c569e:	00 
 84c569f:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 84c56a6:	00 
 84c56a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c56aa:	89 04 24             	mov    %eax,(%esp)
 84c56ad:	e8 42 33 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c56b2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c56b7:	e9 18 24 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c56bc:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c56bf:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c56c5:	83 f8 05             	cmp    $0x5,%eax
 84c56c8:	0f 85 db 00 00 00    	jne    84c57a9 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x515>
 84c56ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c56d5:	00 
 84c56d6:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c56dc:	89 04 24             	mov    %eax,(%esp)
 84c56df:	e8 3c 62 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c56e4:	c7 44 24 04 48 00 00 	movl   $0x48,0x4(%esp)
 84c56eb:	00 
 84c56ec:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c56f2:	89 04 24             	mov    %eax,(%esp)
 84c56f5:	e8 26 62 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c56fa:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c56fd:	8b 80 14 39 00 00    	mov    0x3914(%eax),%eax
 84c5703:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5707:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c570d:	89 04 24             	mov    %eax,(%esp)
 84c5710:	e8 0b 62 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5715:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c571c:	00 
 84c571d:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5723:	89 04 24             	mov    %eax,(%esp)
 84c5726:	e8 2d 62 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c572b:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5731:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5735:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5738:	89 04 24             	mov    %eax,(%esp)
 84c573b:	e8 7a 2e 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c5740:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5747:	00 
 84c5748:	c7 44 24 08 a0 1b 00 	movl   $0x1ba0,0x8(%esp)
 84c574f:	00 
 84c5750:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c5757:	08 
 84c5758:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 84c575e:	89 04 24             	mov    %eax,(%esp)
 84c5761:	e8 b2 9f 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c5766:	c7 44 24 04 04 75 c8 	movl   $0x8c87504,0x4(%esp)
 84c576d:	08 
 84c576e:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 84c5774:	89 04 24             	mov    %eax,(%esp)
 84c5777:	e8 0c a0 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c577c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5783:	00 
 84c5784:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c578b:	00 
 84c578c:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 84c5793:	00 
 84c5794:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5797:	89 04 24             	mov    %eax,(%esp)
 84c579a:	e8 55 32 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c579f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c57a4:	e9 2b 23 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c57a9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c57ac:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c57b2:	83 f8 06             	cmp    $0x6,%eax
 84c57b5:	0f 85 c0 00 00 00    	jne    84c587b <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x5e7>
 84c57bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c57c2:	00 
 84c57c3:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c57c9:	89 04 24             	mov    %eax,(%esp)
 84c57cc:	e8 4f 61 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c57d1:	c7 44 24 04 49 00 00 	movl   $0x49,0x4(%esp)
 84c57d8:	00 
 84c57d9:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c57df:	89 04 24             	mov    %eax,(%esp)
 84c57e2:	e8 39 61 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c57e7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c57ee:	00 
 84c57ef:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c57f5:	89 04 24             	mov    %eax,(%esp)
 84c57f8:	e8 5b 61 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c57fd:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5803:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5807:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c580a:	89 04 24             	mov    %eax,(%esp)
 84c580d:	e8 a8 2d 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c5812:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5819:	00 
 84c581a:	c7 44 24 08 aa 1b 00 	movl   $0x1baa,0x8(%esp)
 84c5821:	00 
 84c5822:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c5829:	08 
 84c582a:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c5830:	89 04 24             	mov    %eax,(%esp)
 84c5833:	e8 e0 9e 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c5838:	c7 44 24 04 34 75 c8 	movl   $0x8c87534,0x4(%esp)
 84c583f:	08 
 84c5840:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c5846:	89 04 24             	mov    %eax,(%esp)
 84c5849:	e8 3a 9f 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c584e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5855:	00 
 84c5856:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c585d:	00 
 84c585e:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 84c5865:	00 
 84c5866:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5869:	89 04 24             	mov    %eax,(%esp)
 84c586c:	e8 83 31 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c5871:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c5876:	e9 59 22 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c587b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c587e:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c5884:	83 f8 09             	cmp    $0x9,%eax
 84c5887:	0f 85 c0 00 00 00    	jne    84c594d <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x6b9>
 84c588d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c5894:	00 
 84c5895:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c589b:	89 04 24             	mov    %eax,(%esp)
 84c589e:	e8 7d 60 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c58a3:	c7 44 24 04 a6 00 00 	movl   $0xa6,0x4(%esp)
 84c58aa:	00 
 84c58ab:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c58b1:	89 04 24             	mov    %eax,(%esp)
 84c58b4:	e8 67 60 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c58b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c58c0:	00 
 84c58c1:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c58c7:	89 04 24             	mov    %eax,(%esp)
 84c58ca:	e8 89 60 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c58cf:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c58d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c58d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c58dc:	89 04 24             	mov    %eax,(%esp)
 84c58df:	e8 d6 2c 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c58e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c58eb:	00 
 84c58ec:	c7 44 24 08 b4 1b 00 	movl   $0x1bb4,0x8(%esp)
 84c58f3:	00 
 84c58f4:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c58fb:	08 
 84c58fc:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c5902:	89 04 24             	mov    %eax,(%esp)
 84c5905:	e8 0e 9e 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c590a:	c7 44 24 04 6c 75 c8 	movl   $0x8c8756c,0x4(%esp)
 84c5911:	08 
 84c5912:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c5918:	89 04 24             	mov    %eax,(%esp)
 84c591b:	e8 68 9e 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c5920:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5927:	00 
 84c5928:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c592f:	00 
 84c5930:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 84c5937:	00 
 84c5938:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c593b:	89 04 24             	mov    %eax,(%esp)
 84c593e:	e8 b1 30 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c5943:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c5948:	e9 87 21 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c594d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c5950:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c5956:	83 f8 07             	cmp    $0x7,%eax
 84c5959:	0f 85 84 00 00 00    	jne    84c59e3 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x74f>
 84c595f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c5966:	00 
 84c5967:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c596d:	89 04 24             	mov    %eax,(%esp)
 84c5970:	e8 ab 5f c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5975:	c7 44 24 04 5f 00 00 	movl   $0x5f,0x4(%esp)
 84c597c:	00 
 84c597d:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5983:	89 04 24             	mov    %eax,(%esp)
 84c5986:	e8 95 5f c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c598b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5992:	00 
 84c5993:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5999:	89 04 24             	mov    %eax,(%esp)
 84c599c:	e8 b7 5f c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c59a1:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c59a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c59ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c59ae:	89 04 24             	mov    %eax,(%esp)
 84c59b1:	e8 04 2c 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c59b6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c59bd:	00 
 84c59be:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c59c5:	00 
 84c59c6:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 84c59cd:	00 
 84c59ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c59d1:	89 04 24             	mov    %eax,(%esp)
 84c59d4:	e8 1b 30 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c59d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c59de:	e9 f1 20 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c59e3:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c59e6:	0f b6 80 dd 38 00 00 	movzbl 0x38dd(%eax),%eax
 84c59ed:	0f b6 c0             	movzbl %al,%eax
 84c59f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c59f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c59f7:	89 04 24             	mov    %eax,(%esp)
 84c59fa:	e8 9d 6f 02 00       	call   84ec99c <_ZN5CUser14setHangameUserEb>
 84c59ff:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c5a02:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 84c5a08:	85 c0                	test   %eax,%eax
 84c5a0a:	0f 84 cd 00 00 00    	je     84c5add <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x849>
 84c5a10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c5a17:	00 
 84c5a18:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5a1e:	89 04 24             	mov    %eax,(%esp)
 84c5a21:	e8 fa 5e c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5a26:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5a2d:	00 
 84c5a2e:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5a34:	89 04 24             	mov    %eax,(%esp)
 84c5a37:	e8 e4 5e c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5a3c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5a43:	00 
 84c5a44:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5a4a:	89 04 24             	mov    %eax,(%esp)
 84c5a4d:	e8 06 5f c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c5a52:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5a58:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5a5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5a5f:	89 04 24             	mov    %eax,(%esp)
 84c5a62:	e8 53 2b 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c5a67:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c5a6a:	8b 98 b8 00 00 00    	mov    0xb8(%eax),%ebx
 84c5a70:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5a77:	00 
 84c5a78:	c7 44 24 08 f2 1b 00 	movl   $0x1bf2,0x8(%esp)
 84c5a7f:	00 
 84c5a80:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c5a87:	08 
 84c5a88:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84c5a8e:	89 04 24             	mov    %eax,(%esp)
 84c5a91:	e8 82 9c 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c5a96:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c5a9a:	c7 44 24 04 a8 75 c8 	movl   $0x8c875a8,0x4(%esp)
 84c5aa1:	08 
 84c5aa2:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84c5aa8:	89 04 24             	mov    %eax,(%esp)
 84c5aab:	e8 d8 9c 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c5ab0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5ab7:	00 
 84c5ab8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c5abf:	00 
 84c5ac0:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84c5ac7:	00 
 84c5ac8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5acb:	89 04 24             	mov    %eax,(%esp)
 84c5ace:	e8 21 2f 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c5ad3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c5ad8:	e9 f7 1f 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c5add:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5ae0:	89 04 24             	mov    %eax,(%esp)
 84c5ae3:	e8 94 48 c1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84c5ae8:	0f b7 c0             	movzwl %ax,%eax
 84c5aeb:	89 85 a0 fd ff ff    	mov    %eax,-0x260(%ebp)
 84c5af1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5af4:	89 04 24             	mov    %eax,(%esp)
 84c5af7:	e8 40 0d de ff       	call   82a683c <_ZNK5CUser10GetIncreIDEv>
 84c5afc:	98                   	cwtl
 84c5afd:	89 85 a4 fd ff ff    	mov    %eax,-0x25c(%ebp)
 84c5b03:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5b06:	89 04 24             	mov    %eax,(%esp)
 84c5b09:	e8 34 72 02 00       	call   84ecd42 <_ZNK5CUser10GetSlotIDXEv>
 84c5b0e:	0f bf f8             	movswl %ax,%edi
 84c5b11:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5b14:	89 04 24             	mov    %eax,(%esp)
 84c5b17:	e8 7a 31 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c5b1c:	89 c6                	mov    %eax,%esi
 84c5b1e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c5b21:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84c5b27:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c5b2e:	00 
 84c5b2f:	89 04 24             	mov    %eax,(%esp)
 84c5b32:	e8 14 35 c4 ff       	call   810904b <_Z14NumberToStringji>
 84c5b37:	89 c3                	mov    %eax,%ebx
 84c5b39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5b40:	00 
 84c5b41:	c7 44 24 08 f6 1b 00 	movl   $0x1bf6,0x8(%esp)
 84c5b48:	00 
 84c5b49:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c5b50:	08 
 84c5b51:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84c5b57:	89 04 24             	mov    %eax,(%esp)
 84c5b5a:	e8 b9 9b 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c5b5f:	8b 85 a0 fd ff ff    	mov    -0x260(%ebp),%eax
 84c5b65:	89 44 24 18          	mov    %eax,0x18(%esp)
 84c5b69:	8b 95 a4 fd ff ff    	mov    -0x25c(%ebp),%edx
 84c5b6f:	89 54 24 14          	mov    %edx,0x14(%esp)
 84c5b73:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c5b77:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c5b7b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c5b7f:	c7 44 24 04 fc 75 c8 	movl   $0x8c875fc,0x4(%esp)
 84c5b86:	08 
 84c5b87:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84c5b8d:	89 04 24             	mov    %eax,(%esp)
 84c5b90:	e8 f3 9b 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c5b95:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c5b98:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 84c5b9e:	e8 eb 65 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c5ba3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c5ba7:	89 04 24             	mov    %eax,(%esp)
 84c5baa:	e8 17 ed dc ff       	call   82948c6 <_ZN12CGameManager14GetUserByAccIdEj>
 84c5baf:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84c5bb2:	83 7d a4 00          	cmpl   $0x0,-0x5c(%ebp)
 84c5bb6:	0f 84 97 00 00 00    	je     84c5c53 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x9bf>
 84c5bbc:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84c5bbf:	05 e0 00 00 00       	add    $0xe0,%eax
 84c5bc4:	89 04 24             	mov    %eax,(%esp)
 84c5bc7:	e8 ec d0 de ff       	call   82b2cb8 <_ZN8CNetworkILi4096ELi450000EE10get_socketEv>
 84c5bcc:	83 f8 ff             	cmp    $0xffffffff,%eax
 84c5bcf:	74 16                	je     84c5be7 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x953>
 84c5bd1:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84c5bd4:	89 04 24             	mov    %eax,(%esp)
 84c5bd7:	e8 b0 47 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c5bdc:	85 c0                	test   %eax,%eax
 84c5bde:	74 07                	je     84c5be7 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x953>
 84c5be0:	b8 01 00 00 00       	mov    $0x1,%eax
 84c5be5:	eb 05                	jmp    84c5bec <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x958>
 84c5be7:	b8 00 00 00 00       	mov    $0x0,%eax
 84c5bec:	84 c0                	test   %al,%al
 84c5bee:	74 63                	je     84c5c53 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x9bf>
 84c5bf0:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 84c5bf7:	00 
 84c5bf8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5bff:	00 
 84c5c00:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84c5c03:	89 04 24             	mov    %eax,(%esp)
 84c5c06:	e8 37 63 1b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84c5c0b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5c12:	00 
 84c5c13:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c5c1a:	00 
 84c5c1b:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 84c5c22:	00 
 84c5c23:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84c5c26:	89 04 24             	mov    %eax,(%esp)
 84c5c29:	e8 c6 2d 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c5c2e:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 84c5c35:	00 
 84c5c36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5c3d:	00 
 84c5c3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5c41:	89 04 24             	mov    %eax,(%esp)
 84c5c44:	e8 f9 62 1b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84c5c49:	bb 18 1c 00 00       	mov    $0x1c18,%ebx
 84c5c4e:	e9 81 1e 00 00       	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c5c53:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c5c56:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c5c59:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84c5c5f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c5c63:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5c67:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5c6a:	89 04 24             	mov    %eax,(%esp)
 84c5c6d:	e8 8a 3f 18 00       	call   8649bfc <_ZN5CUser12set_acc_infoEjPKc>
 84c5c72:	c7 85 c4 fe ff ff 00 	movl   $0x0,-0x13c(%ebp)
 84c5c79:	00 00 00 
 84c5c7c:	c7 85 c8 fe ff ff 00 	movl   $0x0,-0x138(%ebp)
 84c5c83:	00 00 00 
 84c5c86:	c7 85 cc fe ff ff 00 	movl   $0x0,-0x134(%ebp)
 84c5c8d:	00 00 00 
 84c5c90:	c7 85 d0 fe ff ff 00 	movl   $0x0,-0x130(%ebp)
 84c5c97:	00 00 00 
 84c5c9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5c9d:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 84c5ca3:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84c5caa:	00 
 84c5cab:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 84c5cb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5cb5:	89 14 24             	mov    %edx,(%esp)
 84c5cb8:	e8 71 cb c9 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c5cbd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c5cc2:	be 00 00 00 00       	mov    $0x0,%esi
 84c5cc7:	bf 00 00 00 00       	mov    $0x0,%edi
 84c5ccc:	c6 85 ab fd ff ff 00 	movb   $0x0,-0x255(%ebp)
 84c5cd3:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c5cd6:	0f b6 80 b5 00 00 00 	movzbl 0xb5(%eax),%eax
 84c5cdd:	83 f0 01             	xor    $0x1,%eax
 84c5ce0:	84 c0                	test   %al,%al
 84c5ce2:	0f 84 aa 00 00 00    	je     84c5d92 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xafe>
 84c5ce8:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 84c5cee:	89 04 24             	mov    %eax,(%esp)
 84c5cf1:	e8 da a3 21 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84c5cf6:	bb 01 00 00 00       	mov    $0x1,%ebx
 84c5cfb:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 84c5d01:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c5d05:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 84c5d0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5d0f:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84c5d15:	89 04 24             	mov    %eax,(%esp)
 84c5d18:	e8 13 19 24 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84c5d1d:	be 01 00 00 00       	mov    $0x1,%esi
 84c5d22:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 84c5d28:	89 04 24             	mov    %eax,(%esp)
 84c5d2b:	e8 a0 a3 21 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84c5d30:	bf 01 00 00 00       	mov    $0x1,%edi
 84c5d35:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5d38:	89 04 24             	mov    %eax,(%esp)
 84c5d3b:	e8 32 b3 c3 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84c5d40:	8d 95 6f ff ff ff    	lea    -0x91(%ebp),%edx
 84c5d46:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c5d4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5d4e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84c5d54:	89 04 24             	mov    %eax,(%esp)
 84c5d57:	e8 d4 18 24 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84c5d5c:	c6 85 ab fd ff ff 01 	movb   $0x1,-0x255(%ebp)
 84c5d63:	e8 11 c9 c9 ff       	call   8162679 <_ZN4ARAD9SingletonI19RestrictGeolocationE3GetEv>
 84c5d68:	8d 95 60 ff ff ff    	lea    -0xa0(%ebp),%edx
 84c5d6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c5d72:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 84c5d78:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c5d7c:	89 04 24             	mov    %eax,(%esp)
 84c5d7f:	e8 a8 ad ca ff       	call   8170b2c <_ZN19RestrictGeolocation7isAllowESsSs>
 84c5d84:	83 f0 01             	xor    $0x1,%eax
 84c5d87:	84 c0                	test   %al,%al
 84c5d89:	74 07                	je     84c5d92 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xafe>
 84c5d8b:	b8 01 00 00 00       	mov    $0x1,%eax
 84c5d90:	eb 05                	jmp    84c5d97 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xb03>
 84c5d92:	b8 00 00 00 00       	mov    $0x0,%eax
 84c5d97:	88 85 aa fd ff ff    	mov    %al,-0x256(%ebp)
 84c5d9d:	80 bd ab fd ff ff 00 	cmpb   $0x0,-0x255(%ebp)
 84c5da4:	75 33                	jne    84c5dd9 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xb45>
 84c5da6:	eb 7d                	jmp    84c5e25 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xb91>
 84c5da8:	89 95 d8 fd ff ff    	mov    %edx,-0x228(%ebp)
 84c5dae:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
 84c5db4:	80 bd ab fd ff ff 00 	cmpb   $0x0,-0x255(%ebp)
 84c5dbb:	74 0e                	je     84c5dcb <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xb37>
 84c5dbd:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84c5dc3:	89 04 24             	mov    %eax,(%esp)
 84c5dc6:	e8 15 1e 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c5dcb:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
 84c5dd1:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
 84c5dd7:	eb 10                	jmp    84c5de9 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xb55>
 84c5dd9:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84c5ddf:	89 04 24             	mov    %eax,(%esp)
 84c5de2:	e8 f9 1d 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c5de7:	eb 3c                	jmp    84c5e25 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xb91>
 84c5de9:	89 95 e0 fd ff ff    	mov    %edx,-0x220(%ebp)
 84c5def:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
 84c5df5:	89 f9                	mov    %edi,%ecx
 84c5df7:	84 c9                	test   %cl,%cl
 84c5df9:	74 0e                	je     84c5e09 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xb75>
 84c5dfb:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 84c5e01:	89 04 24             	mov    %eax,(%esp)
 84c5e04:	e8 e7 a2 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c5e09:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
 84c5e0f:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
 84c5e15:	89 d7                	mov    %edx,%edi
 84c5e17:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
 84c5e1d:	89 f0                	mov    %esi,%eax
 84c5e1f:	84 c0                	test   %al,%al
 84c5e21:	74 26                	je     84c5e49 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xbb5>
 84c5e23:	eb 16                	jmp    84c5e3b <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xba7>
 84c5e25:	89 fa                	mov    %edi,%edx
 84c5e27:	84 d2                	test   %dl,%dl
 84c5e29:	74 28                	je     84c5e53 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xbbf>
 84c5e2b:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 84c5e31:	89 04 24             	mov    %eax,(%esp)
 84c5e34:	e8 b7 a2 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c5e39:	eb 18                	jmp    84c5e53 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xbbf>
 84c5e3b:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84c5e41:	89 04 24             	mov    %eax,(%esp)
 84c5e44:	e8 97 1d 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c5e49:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
 84c5e4f:	89 fa                	mov    %edi,%edx
 84c5e51:	eb 16                	jmp    84c5e69 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xbd5>
 84c5e53:	89 f1                	mov    %esi,%ecx
 84c5e55:	84 c9                	test   %cl,%cl
 84c5e57:	74 2f                	je     84c5e88 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xbf4>
 84c5e59:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84c5e5f:	89 04 24             	mov    %eax,(%esp)
 84c5e62:	e8 79 1d 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c5e67:	eb 1f                	jmp    84c5e88 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xbf4>
 84c5e69:	89 d6                	mov    %edx,%esi
 84c5e6b:	89 c7                	mov    %eax,%edi
 84c5e6d:	84 db                	test   %bl,%bl
 84c5e6f:	74 0e                	je     84c5e7f <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xbeb>
 84c5e71:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 84c5e77:	89 04 24             	mov    %eax,(%esp)
 84c5e7a:	e8 71 a2 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c5e7f:	89 f8                	mov    %edi,%eax
 84c5e81:	89 f2                	mov    %esi,%edx
 84c5e83:	e9 2e 1c 00 00       	jmp    84c7ab6 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2822>
 84c5e88:	84 db                	test   %bl,%bl
 84c5e8a:	74 0e                	je     84c5e9a <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xc06>
 84c5e8c:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 84c5e92:	89 04 24             	mov    %eax,(%esp)
 84c5e95:	e8 56 a2 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c5e9a:	80 bd aa fd ff ff 00 	cmpb   $0x0,-0x256(%ebp)
 84c5ea1:	74 7a                	je     84c5f1d <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xc89>
 84c5ea3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c5eaa:	00 
 84c5eab:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5eb1:	89 04 24             	mov    %eax,(%esp)
 84c5eb4:	e8 67 5a c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5eb9:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 84c5ec0:	00 
 84c5ec1:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5ec7:	89 04 24             	mov    %eax,(%esp)
 84c5eca:	e8 51 5a c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c5ecf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c5ed6:	00 
 84c5ed7:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5edd:	89 04 24             	mov    %eax,(%esp)
 84c5ee0:	e8 73 5a c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c5ee5:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c5eeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5eef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5ef2:	89 04 24             	mov    %eax,(%esp)
 84c5ef5:	e8 c0 26 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c5efa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c5f01:	00 
 84c5f02:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c5f09:	00 
 84c5f0a:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 84c5f11:	00 
 84c5f12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5f15:	89 04 24             	mov    %eax,(%esp)
 84c5f18:	e8 d7 2a 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c5f1d:	e8 85 44 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c5f22:	89 04 24             	mov    %eax,(%esp)
 84c5f25:	e8 f4 b3 c2 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84c5f2a:	84 c0                	test   %al,%al
 84c5f2c:	0f 84 80 01 00 00    	je     84c60b2 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xe1e>
 84c5f32:	c7 85 ac fe ff ff 00 	movl   $0x0,-0x154(%ebp)
 84c5f39:	00 00 00 
 84c5f3c:	c7 85 b0 fe ff ff 00 	movl   $0x0,-0x150(%ebp)
 84c5f43:	00 00 00 
 84c5f46:	c7 85 b4 fe ff ff 00 	movl   $0x0,-0x14c(%ebp)
 84c5f4d:	00 00 00 
 84c5f50:	c7 85 b8 fe ff ff 00 	movl   $0x0,-0x148(%ebp)
 84c5f57:	00 00 00 
 84c5f5a:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 84c5f60:	89 04 24             	mov    %eax,(%esp)
 84c5f63:	e8 68 a1 21 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84c5f68:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 84c5f6e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c5f72:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 84c5f78:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c5f7c:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c5f82:	89 04 24             	mov    %eax,(%esp)
 84c5f85:	e8 a6 16 24 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84c5f8a:	e8 ea c6 c9 ff       	call   8162679 <_ZN4ARAD9SingletonI19RestrictGeolocationE3GetEv>
 84c5f8f:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84c5f95:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c5f99:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84c5fa0:	00 
 84c5fa1:	8d 95 ac fe ff ff    	lea    -0x154(%ebp),%edx
 84c5fa7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c5fab:	89 04 24             	mov    %eax,(%esp)
 84c5fae:	e8 87 af ca ff       	call   8170f3a <_ZN19RestrictGeolocation14getCountryCodeEPcjSs>
 84c5fb3:	eb 18                	jmp    84c5fcd <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xd39>
 84c5fb5:	89 d3                	mov    %edx,%ebx
 84c5fb7:	89 c6                	mov    %eax,%esi
 84c5fb9:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c5fbf:	89 04 24             	mov    %eax,(%esp)
 84c5fc2:	e8 19 1c 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c5fc7:	89 f0                	mov    %esi,%eax
 84c5fc9:	89 da                	mov    %ebx,%edx
 84c5fcb:	eb 10                	jmp    84c5fdd <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xd49>
 84c5fcd:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c5fd3:	89 04 24             	mov    %eax,(%esp)
 84c5fd6:	e8 05 1c 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c5fdb:	eb 1b                	jmp    84c5ff8 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xd64>
 84c5fdd:	89 d3                	mov    %edx,%ebx
 84c5fdf:	89 c6                	mov    %eax,%esi
 84c5fe1:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 84c5fe7:	89 04 24             	mov    %eax,(%esp)
 84c5fea:	e8 01 a1 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c5fef:	89 f0                	mov    %esi,%eax
 84c5ff1:	89 da                	mov    %ebx,%edx
 84c5ff3:	e9 be 1a 00 00       	jmp    84c7ab6 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2822>
 84c5ff8:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 84c5ffe:	89 04 24             	mov    %eax,(%esp)
 84c6001:	e8 ea a0 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c6006:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 84c600c:	89 04 24             	mov    %eax,(%esp)
 84c600f:	e8 bc a0 21 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84c6014:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 84c601a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c601e:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 84c6024:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6028:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84c602e:	89 04 24             	mov    %eax,(%esp)
 84c6031:	e8 fa 15 24 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84c6036:	e8 3e c6 c9 ff       	call   8162679 <_ZN4ARAD9SingletonI19RestrictGeolocationE3GetEv>
 84c603b:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 84c6041:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c6045:	89 04 24             	mov    %eax,(%esp)
 84c6048:	e8 7f ae ca ff       	call   8170ecc <_ZN19RestrictGeolocation7isAllowESs>
 84c604d:	0f b6 c0             	movzbl %al,%eax
 84c6050:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6054:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6057:	89 04 24             	mov    %eax,(%esp)
 84c605a:	e8 e7 ce 1c 00       	call   8692f46 <_ZN5CUser24setAllowLocationGeoStateEb>
 84c605f:	eb 18                	jmp    84c6079 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xde5>
 84c6061:	89 d3                	mov    %edx,%ebx
 84c6063:	89 c6                	mov    %eax,%esi
 84c6065:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84c606b:	89 04 24             	mov    %eax,(%esp)
 84c606e:	e8 6d 1b 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c6073:	89 f0                	mov    %esi,%eax
 84c6075:	89 da                	mov    %ebx,%edx
 84c6077:	eb 10                	jmp    84c6089 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xdf5>
 84c6079:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84c607f:	89 04 24             	mov    %eax,(%esp)
 84c6082:	e8 59 1b 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c6087:	eb 1b                	jmp    84c60a4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xe10>
 84c6089:	89 d3                	mov    %edx,%ebx
 84c608b:	89 c6                	mov    %eax,%esi
 84c608d:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 84c6093:	89 04 24             	mov    %eax,(%esp)
 84c6096:	e8 55 a0 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c609b:	89 f0                	mov    %esi,%eax
 84c609d:	89 da                	mov    %ebx,%edx
 84c609f:	e9 12 1a 00 00       	jmp    84c7ab6 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2822>
 84c60a4:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 84c60aa:	89 04 24             	mov    %eax,(%esp)
 84c60ad:	e8 3e a0 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c60b2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c60b9:	00 
 84c60ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c60bd:	89 04 24             	mov    %eax,(%esp)
 84c60c0:	e8 ed 8c 1b 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 84c60c5:	e8 dd 42 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c60ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c60cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c60d1:	89 04 24             	mov    %eax,(%esp)
 84c60d4:	e8 c3 94 20 00       	call   86cf59c <_ZN9GameWorld15InsertLoginUserEP5CUser>
 84c60d9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c60de:	c7 44 24 08 7e 1c 00 	movl   $0x1c7e,0x8(%esp)
 84c60e5:	00 
 84c60e6:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c60ed:	08 
 84c60ee:	89 04 24             	mov    %eax,(%esp)
 84c60f1:	e8 90 99 dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c60f6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c60fd:	00 
 84c60fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6102:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 84c6108:	89 04 24             	mov    %eax,(%esp)
 84c610b:	e8 16 2b c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c6110:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 84c6116:	89 04 24             	mov    %eax,(%esp)
 84c6119:	e8 28 2b c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c611e:	c7 44 24 04 2e 01 00 	movl   $0x12e,0x4(%esp)
 84c6125:	00 
 84c6126:	89 04 24             	mov    %eax,(%esp)
 84c6129:	e8 28 2b c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c612e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6131:	89 04 24             	mov    %eax,(%esp)
 84c6134:	e8 5d 2b c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c6139:	89 c3                	mov    %eax,%ebx
 84c613b:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 84c6141:	89 04 24             	mov    %eax,(%esp)
 84c6144:	e8 fd 2a c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c6149:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c614d:	89 04 24             	mov    %eax,(%esp)
 84c6150:	e8 01 2b c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c6155:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 84c615b:	89 04 24             	mov    %eax,(%esp)
 84c615e:	e8 eb 2a c0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84c6163:	89 04 24             	mov    %eax,(%esp)
 84c6166:	e8 db b4 02 00       	call   84f1646 <_ZN12CStreamGuard11GetInBufferI24SIG_REQ_LOAD_GAME_OPTIONEEPT_v>
 84c616b:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84c616e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6171:	89 04 24             	mov    %eax,(%esp)
 84c6174:	e8 f5 41 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c6179:	8b 55 ac             	mov    -0x54(%ebp),%edx
 84c617c:	89 02                	mov    %eax,(%edx)
 84c617e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c6183:	8d 95 bc fe ff ff    	lea    -0x144(%ebp),%edx
 84c6189:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c618d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c6194:	00 
 84c6195:	89 04 24             	mov    %eax,(%esp)
 84c6198:	e8 41 ae 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c619d:	e8 ec 5f c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c61a2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c61a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c61a9:	89 04 24             	mov    %eax,(%esp)
 84c61ac:	e8 ad e2 dc ff       	call   829445e <_ZN12CGameManager17insertUserByAccIDEP5CUser>
 84c61b1:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c61b4:	8d 88 04 22 00 00    	lea    0x2204(%eax),%ecx
 84c61ba:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c61bd:	8d 90 84 22 00 00    	lea    0x2284(%eax),%edx
 84c61c3:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c61c6:	05 84 21 00 00       	add    $0x2184,%eax
 84c61cb:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84c61cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c61d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c61d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c61da:	89 04 24             	mov    %eax,(%esp)
 84c61dd:	e8 0a 68 02 00       	call   84ec9ec <_ZN5CUser17SetUserDetailInfoEPcS0_S0_>
 84c61e2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c61e5:	05 84 22 00 00       	add    $0x2284,%eax
 84c61ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c61ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c61f1:	89 04 24             	mov    %eax,(%esp)
 84c61f4:	e8 f7 8a 1b 00       	call   867ecf0 <_ZN5CUser8SetBirthEPKc>
 84c61f9:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84c6200:	e9 98 00 00 00       	jmp    84c629d <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1009>
 84c6205:	c6 45 d6 00          	movb   $0x0,-0x2a(%ebp)
 84c6209:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c620c:	8b 80 94 22 00 00    	mov    0x2294(%eax),%eax
 84c6212:	83 e8 01             	sub    $0x1,%eax
 84c6215:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 84c6218:	75 04                	jne    84c621e <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xf8a>
 84c621a:	c6 45 d6 01          	movb   $0x1,-0x2a(%ebp)
 84c621e:	0f b6 75 d6          	movzbl -0x2a(%ebp),%esi
 84c6222:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84c6225:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6228:	81 c2 29 02 00 00    	add    $0x229,%edx
 84c622e:	c1 e2 04             	shl    $0x4,%edx
 84c6231:	01 d0                	add    %edx,%eax
 84c6233:	83 c0 14             	add    $0x14,%eax
 84c6236:	8b 18                	mov    (%eax),%ebx
 84c6238:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84c623b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c623e:	81 c2 29 02 00 00    	add    $0x229,%edx
 84c6244:	c1 e2 04             	shl    $0x4,%edx
 84c6247:	01 d0                	add    %edx,%eax
 84c6249:	83 c0 10             	add    $0x10,%eax
 84c624c:	8b 08                	mov    (%eax),%ecx
 84c624e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84c6251:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6254:	81 c2 29 02 00 00    	add    $0x229,%edx
 84c625a:	c1 e2 04             	shl    $0x4,%edx
 84c625d:	01 d0                	add    %edx,%eax
 84c625f:	83 c0 0c             	add    $0xc,%eax
 84c6262:	8b 10                	mov    (%eax),%edx
 84c6264:	8b 7d d0             	mov    -0x30(%ebp),%edi
 84c6267:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c626a:	81 c7 29 02 00 00    	add    $0x229,%edi
 84c6270:	c1 e7 04             	shl    $0x4,%edi
 84c6273:	01 f8                	add    %edi,%eax
 84c6275:	83 c0 08             	add    $0x8,%eax
 84c6278:	8b 00                	mov    (%eax),%eax
 84c627a:	89 74 24 14          	mov    %esi,0x14(%esp)
 84c627e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84c6282:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84c6286:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c628a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c628e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6291:	89 04 24             	mov    %eax,(%esp)
 84c6294:	e8 4f 95 1e 00       	call   86af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>
 84c6299:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 84c629d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c62a0:	8b 80 94 22 00 00    	mov    0x2294(%eax),%eax
 84c62a6:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 84c62a9:	0f 9f c0             	setg   %al
 84c62ac:	84 c0                	test   %al,%al
 84c62ae:	0f 85 51 ff ff ff    	jne    84c6205 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0xf71>
 84c62b4:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c62b7:	8b 80 cc 00 00 00    	mov    0xcc(%eax),%eax
 84c62bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c62c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c62c4:	89 04 24             	mov    %eax,(%esp)
 84c62c7:	e8 fc 66 02 00       	call   84ec9c8 <_ZN5CUser10setRegDateEj>
 84c62cc:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c62cf:	8b 80 d4 00 00 00    	mov    0xd4(%eax),%eax
 84c62d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c62d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c62dc:	89 04 24             	mov    %eax,(%esp)
 84c62df:	e8 f6 66 02 00       	call   84ec9da <_ZN5CUser10setRegTimeEl>
 84c62e4:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c62e7:	8b 80 dc 00 00 00    	mov    0xdc(%eax),%eax
 84c62ed:	85 c0                	test   %eax,%eax
 84c62ef:	7e 31                	jle    84c6322 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x108e>
 84c62f1:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c62f4:	05 e0 00 00 00       	add    $0xe0,%eax
 84c62f9:	89 c2                	mov    %eax,%edx
 84c62fb:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c62fe:	8b 80 dc 00 00 00    	mov    0xdc(%eax),%eax
 84c6304:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c6308:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c630c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c630f:	89 04 24             	mov    %eax,(%esp)
 84c6312:	e8 53 39 18 00       	call   8649c6a <_ZN5CUser13SetCharacInfoEiPc>
 84c6317:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c631a:	89 04 24             	mov    %eax,(%esp)
 84c631d:	e8 8c 6b 1b 00       	call   867ceae <_ZN5CUser25SetNeedCheckOverEquipItemEv>
 84c6322:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6325:	8b 80 b0 15 00 00    	mov    0x15b0(%eax),%eax
 84c632b:	85 c0                	test   %eax,%eax
 84c632d:	0f 8e b7 00 00 00    	jle    84c63ea <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1156>
 84c6333:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6336:	8d 90 b4 15 00 00    	lea    0x15b4(%eax),%edx
 84c633c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c633f:	8b 80 b0 15 00 00    	mov    0x15b0(%eax),%eax
 84c6345:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c6349:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c634d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6350:	89 04 24             	mov    %eax,(%esp)
 84c6353:	e8 ec 81 1c 00       	call   868e544 <_ZN5CUser22SetCharacMercenaryInfoEiP21CHARAC_LOAD_MERCENARY>
 84c6358:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 84c635c:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84c6363:	eb 21                	jmp    84c6386 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x10f2>
 84c6365:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84c6368:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c636b:	6b c0 54             	imul   $0x54,%eax,%eax
 84c636e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84c6371:	05 dc 15 00 00       	add    $0x15dc,%eax
 84c6376:	8b 00                	mov    (%eax),%eax
 84c6378:	85 c0                	test   %eax,%eax
 84c637a:	74 06                	je     84c6382 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x10ee>
 84c637c:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 84c6380:	eb 28                	jmp    84c63aa <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1116>
 84c6382:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 84c6386:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6389:	8b 80 b0 15 00 00    	mov    0x15b0(%eax),%eax
 84c638f:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 84c6392:	7e 0d                	jle    84c63a1 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x110d>
 84c6394:	83 7d d8 23          	cmpl   $0x23,-0x28(%ebp)
 84c6398:	7f 07                	jg     84c63a1 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x110d>
 84c639a:	b8 01 00 00 00       	mov    $0x1,%eax
 84c639f:	eb 05                	jmp    84c63a6 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1112>
 84c63a1:	b8 00 00 00 00       	mov    $0x0,%eax
 84c63a6:	84 c0                	test   %al,%al
 84c63a8:	75 bb                	jne    84c6365 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x10d1>
 84c63aa:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 84c63ae:	74 3a                	je     84c63ea <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1156>
 84c63b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c63b3:	89 04 24             	mov    %eax,(%esp)
 84c63b6:	e8 9f 35 c3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84c63bb:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c63c2:	00 
 84c63c3:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84c63ca:	00 
 84c63cb:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c63d2:	00 
 84c63d3:	c7 44 24 08 aa 01 00 	movl   $0x1aa,0x8(%esp)
 84c63da:	00 
 84c63db:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c63de:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c63e2:	89 04 24             	mov    %eax,(%esp)
 84c63e5:	e8 94 28 c3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84c63ea:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84c63f1:	eb 23                	jmp    84c6416 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1182>
 84c63f3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84c63f6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c63f9:	81 c2 4c 0a 00 00    	add    $0xa4c,%edx
 84c63ff:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 84c6403:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6407:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c640a:	89 04 24             	mov    %eax,(%esp)
 84c640d:	e8 3c 74 18 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 84c6412:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84c6416:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6419:	0f b7 80 3a 29 00 00 	movzwl 0x293a(%eax),%eax
 84c6420:	0f b7 c0             	movzwl %ax,%eax
 84c6423:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 84c6426:	0f 9f c0             	setg   %al
 84c6429:	84 c0                	test   %al,%al
 84c642b:	75 c6                	jne    84c63f3 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x115f>
 84c642d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6430:	89 04 24             	mov    %eax,(%esp)
 84c6433:	e8 1e ac c3 ff       	call   8101056 <_ZN5CUser12GetSsnStringEv>
 84c6438:	89 85 ac fd ff ff    	mov    %eax,-0x254(%ebp)
 84c643e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6441:	89 04 24             	mov    %eax,(%esp)
 84c6444:	e8 c9 87 1b 00       	call   867ec12 <_ZN5CUser6getSexEv>
 84c6449:	0f b6 c0             	movzbl %al,%eax
 84c644c:	89 85 b0 fd ff ff    	mov    %eax,-0x250(%ebp)
 84c6452:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6455:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 84c645b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84c6462:	00 
 84c6463:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 84c6469:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c646d:	89 14 24             	mov    %edx,(%esp)
 84c6470:	e8 b9 c3 c9 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c6475:	89 c7                	mov    %eax,%edi
 84c6477:	e8 05 5d c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c647c:	89 04 24             	mov    %eax,(%esp)
 84c647f:	e8 46 46 c8 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84c6484:	89 c6                	mov    %eax,%esi
 84c6486:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6489:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84c648f:	89 85 b4 fd ff ff    	mov    %eax,-0x24c(%ebp)
 84c6495:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6498:	89 04 24             	mov    %eax,(%esp)
 84c649b:	e8 f6 27 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c64a0:	89 c3                	mov    %eax,%ebx
 84c64a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c64a5:	89 04 24             	mov    %eax,(%esp)
 84c64a8:	e8 e3 57 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c64ad:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84c64b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c64b7:	89 14 24             	mov    %edx,(%esp)
 84c64ba:	e8 cb bb c4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84c64bf:	8b 95 ac fd ff ff    	mov    -0x254(%ebp),%edx
 84c64c5:	89 54 24 18          	mov    %edx,0x18(%esp)
 84c64c9:	8b 8d b0 fd ff ff    	mov    -0x250(%ebp),%ecx
 84c64cf:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84c64d3:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c64d7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c64db:	8b 95 b4 fd ff ff    	mov    -0x24c(%ebp),%edx
 84c64e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c64e5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c64e9:	89 04 24             	mov    %eax,(%esp)
 84c64ec:	e8 a3 a7 fa ff       	call   8470c94 <_ZN19CMonitorServerProxy9SendLoginEijiPchS0_>
 84c64f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c64f4:	89 04 24             	mov    %eax,(%esp)
 84c64f7:	e8 5a ab c3 ff       	call   8101056 <_ZN5CUser12GetSsnStringEv>
 84c64fc:	89 85 b8 fd ff ff    	mov    %eax,-0x248(%ebp)
 84c6502:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6505:	89 04 24             	mov    %eax,(%esp)
 84c6508:	e8 05 87 1b 00       	call   867ec12 <_ZN5CUser6getSexEv>
 84c650d:	0f b6 c0             	movzbl %al,%eax
 84c6510:	89 85 bc fd ff ff    	mov    %eax,-0x244(%ebp)
 84c6516:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6519:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 84c651f:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84c6526:	00 
 84c6527:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 84c652d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6531:	89 14 24             	mov    %edx,(%esp)
 84c6534:	e8 f5 c2 c9 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c6539:	89 c7                	mov    %eax,%edi
 84c653b:	e8 41 5c c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c6540:	89 04 24             	mov    %eax,(%esp)
 84c6543:	e8 82 45 c8 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84c6548:	89 c6                	mov    %eax,%esi
 84c654a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c654d:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84c6553:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
 84c6559:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c655c:	89 04 24             	mov    %eax,(%esp)
 84c655f:	e8 32 27 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c6564:	89 c3                	mov    %eax,%ebx
 84c6566:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6569:	89 04 24             	mov    %eax,(%esp)
 84c656c:	e8 1f 57 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c6571:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84c6577:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c657b:	89 14 24             	mov    %edx,(%esp)
 84c657e:	e8 35 6e c5 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84c6583:	8b 8d b8 fd ff ff    	mov    -0x248(%ebp),%ecx
 84c6589:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84c658d:	8b 95 bc fd ff ff    	mov    -0x244(%ebp),%edx
 84c6593:	89 54 24 14          	mov    %edx,0x14(%esp)
 84c6597:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c659b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c659f:	8b 8d c0 fd ff ff    	mov    -0x240(%ebp),%ecx
 84c65a5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84c65a9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c65ad:	89 04 24             	mov    %eax,(%esp)
 84c65b0:	e8 75 75 fa ff       	call   846db2a <_ZN17CGuildServerProxy9SendLoginEijiPchS0_>
 84c65b5:	e8 c7 5b c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c65ba:	8b 98 78 03 00 00    	mov    0x378(%eax),%ebx
 84c65c0:	e8 bc 5b c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c65c5:	89 04 24             	mov    %eax,(%esp)
 84c65c8:	e8 fd 44 c8 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84c65cd:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c65d0:	8b 8a c0 00 00 00    	mov    0xc0(%edx),%ecx
 84c65d6:	8b 15 38 be 40 09    	mov    0x940be38,%edx
 84c65dc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84c65e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c65e4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84c65e8:	89 14 24             	mov    %edx,(%esp)
 84c65eb:	e8 22 6e fa ff       	call   846d412 <_ZN27CDoubleConnCheckServerProxy9SendLoginEjii>
 84c65f0:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c65f3:	8d 98 64 3f 00 00    	lea    0x3f64(%eax),%ebx
 84c65f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c65fc:	89 04 24             	mov    %eax,(%esp)
 84c65ff:	e8 04 6a 02 00       	call   84ed008 <_ZN5CUser14GetGoldControlEv>
 84c6604:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6608:	89 04 24             	mov    %eax,(%esp)
 84c660b:	e8 90 0c dc ff       	call   82872a0 <_ZN16Secu_GoldControl7SetInfoER14user_gold_info>
 84c6610:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84c6617:	e9 ec 00 00 00       	jmp    84c6708 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1474>
 84c661c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84c661f:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c6622:	89 d0                	mov    %edx,%eax
 84c6624:	01 c0                	add    %eax,%eax
 84c6626:	01 d0                	add    %edx,%eax
 84c6628:	c1 e0 03             	shl    $0x3,%eax
 84c662b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c662e:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c6633:	8b 00                	mov    (%eax),%eax
 84c6635:	83 f8 63             	cmp    $0x63,%eax
 84c6638:	0f 8e c2 00 00 00    	jle    84c6700 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x146c>
 84c663e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84c6641:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c6644:	89 d0                	mov    %edx,%eax
 84c6646:	01 c0                	add    %eax,%eax
 84c6648:	01 d0                	add    %edx,%eax
 84c664a:	c1 e0 03             	shl    $0x3,%eax
 84c664d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c6650:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c6655:	8b 00                	mov    (%eax),%eax
 84c6657:	3d c7 00 00 00       	cmp    $0xc7,%eax
 84c665c:	0f 8f a1 00 00 00    	jg     84c6703 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x146f>
 84c6662:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84c6665:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c6668:	89 d0                	mov    %edx,%eax
 84c666a:	01 c0                	add    %eax,%eax
 84c666c:	01 d0                	add    %edx,%eax
 84c666e:	c1 e0 03             	shl    $0x3,%eax
 84c6671:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c6674:	05 68 3a 00 00       	add    $0x3a68,%eax
 84c6679:	8b 18                	mov    (%eax),%ebx
 84c667b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c6682:	e8 17 56 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c6687:	39 c3                	cmp    %eax,%ebx
 84c6689:	7d 1d                	jge    84c66a8 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1414>
 84c668b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84c668e:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c6691:	89 d0                	mov    %edx,%eax
 84c6693:	01 c0                	add    %eax,%eax
 84c6695:	01 d0                	add    %edx,%eax
 84c6697:	c1 e0 03             	shl    $0x3,%eax
 84c669a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c669d:	05 68 3a 00 00       	add    $0x3a68,%eax
 84c66a2:	8b 00                	mov    (%eax),%eax
 84c66a4:	85 c0                	test   %eax,%eax
 84c66a6:	75 07                	jne    84c66af <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x141b>
 84c66a8:	b8 01 00 00 00       	mov    $0x1,%eax
 84c66ad:	eb 05                	jmp    84c66b4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1420>
 84c66af:	b8 00 00 00 00       	mov    $0x0,%eax
 84c66b4:	84 c0                	test   %al,%al
 84c66b6:	74 4c                	je     84c6704 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1470>
 84c66b8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84c66bb:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c66be:	89 d0                	mov    %edx,%eax
 84c66c0:	01 c0                	add    %eax,%eax
 84c66c2:	01 d0                	add    %edx,%eax
 84c66c4:	c1 e0 03             	shl    $0x3,%eax
 84c66c7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c66ca:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c66cf:	8b 00                	mov    (%eax),%eax
 84c66d1:	83 f8 65             	cmp    $0x65,%eax
 84c66d4:	75 2e                	jne    84c6704 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1470>
 84c66d6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84c66d9:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c66dc:	89 d0                	mov    %edx,%eax
 84c66de:	01 c0                	add    %eax,%eax
 84c66e0:	01 d0                	add    %edx,%eax
 84c66e2:	c1 e0 03             	shl    $0x3,%eax
 84c66e5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c66e8:	05 5c 3a 00 00       	add    $0x3a5c,%eax
 84c66ed:	8b 00                	mov    (%eax),%eax
 84c66ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c66f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c66f6:	89 04 24             	mov    %eax,(%esp)
 84c66f9:	e8 5e 0a dc ff       	call   828715c <_ZN5CUser14setStdDropRateEi>
 84c66fe:	eb 04                	jmp    84c6704 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1470>
 84c6700:	90                   	nop
 84c6701:	eb 01                	jmp    84c6704 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1470>
 84c6703:	90                   	nop
 84c6704:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84c6708:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c670b:	8b 80 50 3a 00 00    	mov    0x3a50(%eax),%eax
 84c6711:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84c6714:	0f 9f c0             	setg   %al
 84c6717:	84 c0                	test   %al,%al
 84c6719:	0f 85 fd fe ff ff    	jne    84c661c <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1388>
 84c671f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84c6726:	e9 84 01 00 00       	jmp    84c68af <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x161b>
 84c672b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c672e:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c6731:	89 d0                	mov    %edx,%eax
 84c6733:	01 c0                	add    %eax,%eax
 84c6735:	01 d0                	add    %edx,%eax
 84c6737:	c1 e0 03             	shl    $0x3,%eax
 84c673a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c673d:	05 68 3a 00 00       	add    $0x3a68,%eax
 84c6742:	8b 18                	mov    (%eax),%ebx
 84c6744:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c674b:	e8 4e 55 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c6750:	39 c3                	cmp    %eax,%ebx
 84c6752:	7d 1d                	jge    84c6771 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x14dd>
 84c6754:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c6757:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c675a:	89 d0                	mov    %edx,%eax
 84c675c:	01 c0                	add    %eax,%eax
 84c675e:	01 d0                	add    %edx,%eax
 84c6760:	c1 e0 03             	shl    $0x3,%eax
 84c6763:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c6766:	05 68 3a 00 00       	add    $0x3a68,%eax
 84c676b:	8b 00                	mov    (%eax),%eax
 84c676d:	85 c0                	test   %eax,%eax
 84c676f:	75 07                	jne    84c6778 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x14e4>
 84c6771:	b8 01 00 00 00       	mov    $0x1,%eax
 84c6776:	eb 05                	jmp    84c677d <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x14e9>
 84c6778:	b8 00 00 00 00       	mov    $0x0,%eax
 84c677d:	84 c0                	test   %al,%al
 84c677f:	0f 84 26 01 00 00    	je     84c68ab <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1617>
 84c6785:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c6788:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c678b:	89 d0                	mov    %edx,%eax
 84c678d:	01 c0                	add    %eax,%eax
 84c678f:	01 d0                	add    %edx,%eax
 84c6791:	c1 e0 03             	shl    $0x3,%eax
 84c6794:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c6797:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c679c:	8b 00                	mov    (%eax),%eax
 84c679e:	83 f8 04             	cmp    $0x4,%eax
 84c67a1:	75 13                	jne    84c67b6 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1522>
 84c67a3:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84c67aa:	00 
 84c67ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c67ae:	89 04 24             	mov    %eax,(%esp)
 84c67b1:	e8 da 30 1c 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84c67b6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c67b9:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c67bc:	89 d0                	mov    %edx,%eax
 84c67be:	01 c0                	add    %eax,%eax
 84c67c0:	01 d0                	add    %edx,%eax
 84c67c2:	c1 e0 03             	shl    $0x3,%eax
 84c67c5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c67c8:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c67cd:	8b 00                	mov    (%eax),%eax
 84c67cf:	83 f8 0b             	cmp    $0xb,%eax
 84c67d2:	75 13                	jne    84c67e7 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1553>
 84c67d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c67db:	00 
 84c67dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c67df:	89 04 24             	mov    %eax,(%esp)
 84c67e2:	e8 a9 30 1c 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84c67e7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c67ea:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c67ed:	89 d0                	mov    %edx,%eax
 84c67ef:	01 c0                	add    %eax,%eax
 84c67f1:	01 d0                	add    %edx,%eax
 84c67f3:	c1 e0 03             	shl    $0x3,%eax
 84c67f6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c67f9:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c67fe:	8b 00                	mov    (%eax),%eax
 84c6800:	83 f8 0c             	cmp    $0xc,%eax
 84c6803:	75 13                	jne    84c6818 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1584>
 84c6805:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84c680c:	00 
 84c680d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6810:	89 04 24             	mov    %eax,(%esp)
 84c6813:	e8 78 30 1c 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84c6818:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c681b:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c681e:	89 d0                	mov    %edx,%eax
 84c6820:	01 c0                	add    %eax,%eax
 84c6822:	01 d0                	add    %edx,%eax
 84c6824:	c1 e0 03             	shl    $0x3,%eax
 84c6827:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c682a:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c682f:	8b 00                	mov    (%eax),%eax
 84c6831:	83 f8 0d             	cmp    $0xd,%eax
 84c6834:	75 13                	jne    84c6849 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x15b5>
 84c6836:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 84c683d:	00 
 84c683e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6841:	89 04 24             	mov    %eax,(%esp)
 84c6844:	e8 47 30 1c 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84c6849:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c684c:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c684f:	89 d0                	mov    %edx,%eax
 84c6851:	01 c0                	add    %eax,%eax
 84c6853:	01 d0                	add    %edx,%eax
 84c6855:	c1 e0 03             	shl    $0x3,%eax
 84c6858:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c685b:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c6860:	8b 00                	mov    (%eax),%eax
 84c6862:	83 f8 0e             	cmp    $0xe,%eax
 84c6865:	75 13                	jne    84c687a <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x15e6>
 84c6867:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c686e:	00 
 84c686f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6872:	89 04 24             	mov    %eax,(%esp)
 84c6875:	e8 16 30 1c 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84c687a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c687d:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c6880:	89 d0                	mov    %edx,%eax
 84c6882:	01 c0                	add    %eax,%eax
 84c6884:	01 d0                	add    %edx,%eax
 84c6886:	c1 e0 03             	shl    $0x3,%eax
 84c6889:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c688c:	05 54 3a 00 00       	add    $0x3a54,%eax
 84c6891:	8b 00                	mov    (%eax),%eax
 84c6893:	83 f8 67             	cmp    $0x67,%eax
 84c6896:	75 13                	jne    84c68ab <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1617>
 84c6898:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 84c689f:	00 
 84c68a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c68a3:	89 04 24             	mov    %eax,(%esp)
 84c68a6:	e8 e5 2f 1c 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84c68ab:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84c68af:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c68b2:	8b 80 50 3a 00 00    	mov    0x3a50(%eax),%eax
 84c68b8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84c68bb:	0f 9f c0             	setg   %al
 84c68be:	84 c0                	test   %al,%al
 84c68c0:	0f 85 65 fe ff ff    	jne    84c672b <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1497>
 84c68c6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c68c9:	8b 80 24 3a 00 00    	mov    0x3a24(%eax),%eax
 84c68cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c68d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c68d6:	89 04 24             	mov    %eax,(%esp)
 84c68d9:	e8 8c 60 02 00       	call   84ec96a <_ZN5CUser24setTotalHackUserTradeCntEj>
 84c68de:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c68e1:	8b 90 2c 3a 00 00    	mov    0x3a2c(%eax),%edx
 84c68e7:	8b 80 28 3a 00 00    	mov    0x3a28(%eax),%eax
 84c68ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c68f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c68f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c68f8:	89 04 24             	mov    %eax,(%esp)
 84c68fb:	e8 40 60 02 00       	call   84ec940 <_ZN5CUser25setTotalHackUserTradeGoldEy>
 84c6900:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6903:	8d 90 a1 00 00 00    	lea    0xa1(%eax),%edx
 84c6909:	a1 d0 f7 41 09       	mov    0x941f7d0,%eax
 84c690e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c6912:	89 04 24             	mov    %eax,(%esp)
 84c6915:	e8 24 4d 02 00       	call   84eb63e <_ZN8WongWork25CAutoPunishRuleBlackIPMgr9isBlackIPEPKc>
 84c691a:	84 c0                	test   %al,%al
 84c691c:	74 3a                	je     84c6958 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x16c4>
 84c691e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6921:	89 04 24             	mov    %eax,(%esp)
 84c6924:	e8 31 30 c3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84c6929:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c6930:	00 
 84c6931:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84c6938:	00 
 84c6939:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c6940:	00 
 84c6941:	c7 44 24 08 2a 03 00 	movl   $0x32a,0x8(%esp)
 84c6948:	00 
 84c6949:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c694c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c6950:	89 04 24             	mov    %eax,(%esp)
 84c6953:	e8 26 23 c3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84c6958:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c695b:	0f b6 80 0c 3f 00 00 	movzbl 0x3f0c(%eax),%eax
 84c6962:	0f b6 c0             	movzbl %al,%eax
 84c6965:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6969:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c696c:	89 04 24             	mov    %eax,(%esp)
 84c696f:	e8 ca 65 02 00       	call   84ecf3e <_ZN5CUser22setRestingUserRestrictEb>
 84c6974:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c697b:	00 
 84c697c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c697f:	89 04 24             	mov    %eax,(%esp)
 84c6982:	e8 a5 65 02 00       	call   84ecf2c <_ZN5CUser23setHumanCertifyErrorCntEi>
 84c6987:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c698e:	00 
 84c698f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6992:	89 04 24             	mov    %eax,(%esp)
 84c6995:	e8 90 98 d6 ff       	call   823022a <_ZN5CUser17setHumanCertifiedEb>
 84c699a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c69a1:	e8 f8 52 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c69a6:	89 85 98 fe ff ff    	mov    %eax,-0x168(%ebp)
 84c69ac:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 84c69b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c69b6:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 84c69bc:	89 04 24             	mov    %eax,(%esp)
 84c69bf:	e8 9c 79 bb ff       	call   807e360 <localtime_r@plt>
 84c69c4:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84c69c7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c69ca:	8b 40 14             	mov    0x14(%eax),%eax
 84c69cd:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84c69d0:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c69d3:	8b 40 10             	mov    0x10(%eax),%eax
 84c69d6:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84c69d9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c69dc:	8b 40 0c             	mov    0xc(%eax),%eax
 84c69df:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84c69e2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c69e5:	8b 98 5c 39 00 00    	mov    0x395c(%eax),%ebx
 84c69eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c69ee:	89 04 24             	mov    %eax,(%esp)
 84c69f1:	e8 76 5e 02 00       	call   84ec86c <_ZN5CUser20getDungeonGainedGoldEv>
 84c69f6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c69fa:	89 04 24             	mov    %eax,(%esp)
 84c69fd:	e8 d6 5b 02 00       	call   84ec5d8 <_ZN18CDungeonGainedGold13setGainedGoldEj>
 84c6a02:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6a05:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c6a0c:	00 
 84c6a0d:	89 04 24             	mov    %eax,(%esp)
 84c6a10:	e8 19 56 02 00       	call   84ec02e <_ZN15CUserCharacInfo17SetReliablePersonEb>
 84c6a15:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6a18:	0f b6 80 64 39 00 00 	movzbl 0x3964(%eax),%eax
 84c6a1f:	84 c0                	test   %al,%al
 84c6a21:	0f 95 c0             	setne  %al
 84c6a24:	0f b6 d0             	movzbl %al,%edx
 84c6a27:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6a2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c6a2e:	89 04 24             	mov    %eax,(%esp)
 84c6a31:	e8 f8 55 02 00       	call   84ec02e <_ZN15CUserCharacInfo17SetReliablePersonEb>
 84c6a36:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c6a39:	c7 40 08 06 00 00 00 	movl   $0x6,0x8(%eax)
 84c6a40:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c6a43:	89 04 24             	mov    %eax,(%esp)
 84c6a46:	e8 d5 7d bb ff       	call   807e820 <mktime@plt>
 84c6a4b:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84c6a4e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6a51:	8b 80 58 39 00 00    	mov    0x3958(%eax),%eax
 84c6a57:	3b 45 c0             	cmp    -0x40(%ebp),%eax
 84c6a5a:	7e 1a                	jle    84c6a76 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x17e2>
 84c6a5c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6a5f:	8b 90 68 39 00 00    	mov    0x3968(%eax),%edx
 84c6a65:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6a68:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c6a6c:	89 04 24             	mov    %eax,(%esp)
 84c6a6f:	e8 d6 55 02 00       	call   84ec04a <_ZN15CUserCharacInfo21SetOverTradeGoldCountEj>
 84c6a74:	eb 13                	jmp    84c6a89 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x17f5>
 84c6a76:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6a79:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c6a80:	00 
 84c6a81:	89 04 24             	mov    %eax,(%esp)
 84c6a84:	e8 c1 55 02 00       	call   84ec04a <_ZN15CUserCharacInfo21SetOverTradeGoldCountEj>
 84c6a89:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6a8c:	8d 90 58 39 00 00    	lea    0x3958(%eax),%edx
 84c6a92:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 84c6a98:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6a9c:	89 14 24             	mov    %edx,(%esp)
 84c6a9f:	e8 bc 78 bb ff       	call   807e360 <localtime_r@plt>
 84c6aa4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84c6aa7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84c6aaa:	8b 40 14             	mov    0x14(%eax),%eax
 84c6aad:	3b 45 b4             	cmp    -0x4c(%ebp),%eax
 84c6ab0:	75 30                	jne    84c6ae2 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x184e>
 84c6ab2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84c6ab5:	8b 40 10             	mov    0x10(%eax),%eax
 84c6ab8:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 84c6abb:	75 25                	jne    84c6ae2 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x184e>
 84c6abd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84c6ac0:	8b 40 0c             	mov    0xc(%eax),%eax
 84c6ac3:	3b 45 bc             	cmp    -0x44(%ebp),%eax
 84c6ac6:	75 1a                	jne    84c6ae2 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x184e>
 84c6ac8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6acb:	8b 80 60 39 00 00    	mov    0x3960(%eax),%eax
 84c6ad1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6ad5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6ad8:	89 04 24             	mov    %eax,(%esp)
 84c6adb:	e8 9c 5e 02 00       	call   84ec97c <_ZN5CUser28SetReportMannerlessUserCountEi>
 84c6ae0:	eb 13                	jmp    84c6af5 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1861>
 84c6ae2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c6ae9:	00 
 84c6aea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6aed:	89 04 24             	mov    %eax,(%esp)
 84c6af0:	e8 87 5e 02 00       	call   84ec97c <_ZN5CUser28SetReportMannerlessUserCountEi>
 84c6af5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6af8:	8b 80 6c 39 00 00    	mov    0x396c(%eax),%eax
 84c6afe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6b02:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6b05:	89 04 24             	mov    %eax,(%esp)
 84c6b08:	e8 83 5f 02 00       	call   84eca90 <_ZN5CUser11SetSchoolNoEj>
 84c6b0d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6b10:	8b 80 70 39 00 00    	mov    0x3970(%eax),%eax
 84c6b16:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6b1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6b1d:	89 04 24             	mov    %eax,(%esp)
 84c6b20:	e8 7d 5f 02 00       	call   84ecaa2 <_ZN5CUser9SetRatingEf>
 84c6b25:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6b28:	05 74 39 00 00       	add    $0x3974,%eax
 84c6b2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6b31:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6b34:	89 04 24             	mov    %eax,(%esp)
 84c6b37:	e8 78 5f 02 00       	call   84ecab4 <_ZN5CUser13SetSchoolNameEPKc>
 84c6b3c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6b3f:	05 9c 39 00 00       	add    $0x399c,%eax
 84c6b44:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6b48:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6b4b:	89 04 24             	mov    %eax,(%esp)
 84c6b4e:	e8 01 5f 02 00       	call   84eca54 <_ZN5CUser13SetDailyBadgeEPs>
 84c6b53:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6b56:	0f b6 80 a2 39 00 00 	movzbl 0x39a2(%eax),%eax
 84c6b5d:	0f b6 c0             	movzbl %al,%eax
 84c6b60:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6b64:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6b67:	89 04 24             	mov    %eax,(%esp)
 84c6b6a:	e8 75 5f 02 00       	call   84ecae4 <_ZN5CUser19SetTutorialSkipableEh>
 84c6b6f:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 84c6b75:	89 04 24             	mov    %eax,(%esp)
 84c6b78:	e8 a7 d6 dd ff       	call   82a4224 <_ZN10CommonTime10SetCurTimeEv>
 84c6b7d:	0f b6 85 88 fe ff ff 	movzbl -0x178(%ebp),%eax
 84c6b84:	0f be d0             	movsbl %al,%edx
 84c6b87:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6b8a:	8b 80 c8 00 00 00    	mov    0xc8(%eax),%eax
 84c6b90:	89 d1                	mov    %edx,%ecx
 84c6b92:	29 c1                	sub    %eax,%ecx
 84c6b94:	89 c8                	mov    %ecx,%eax
 84c6b96:	05 d1 07 00 00       	add    $0x7d1,%eax
 84c6b9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6b9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6ba2:	89 04 24             	mov    %eax,(%esp)
 84c6ba5:	e8 14 95 d6 ff       	call   82300be <_ZN5CUser6SetAgeEj>
 84c6baa:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6bad:	0f b6 80 0e 3f 00 00 	movzbl 0x3f0e(%eax),%eax
 84c6bb4:	0f b6 c0             	movzbl %al,%eax
 84c6bb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6bbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6bbe:	89 04 24             	mov    %eax,(%esp)
 84c6bc1:	e8 b2 63 02 00       	call   84ecf78 <_ZN5CUser13setSecuRewardEb>
 84c6bc6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6bc9:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 84c6bd0:	0f b6 c0             	movzbl %al,%eax
 84c6bd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6bd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6bda:	89 04 24             	mov    %eax,(%esp)
 84c6bdd:	e8 c2 63 02 00       	call   84ecfa4 <_ZN5CUser11setSecuTypeEh>
 84c6be2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6be5:	0f b6 80 0f 3f 00 00 	movzbl 0x3f0f(%eax),%eax
 84c6bec:	0f b6 c0             	movzbl %al,%eax
 84c6bef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6bf3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6bf6:	89 04 24             	mov    %eax,(%esp)
 84c6bf9:	e8 d2 63 02 00       	call   84ecfd0 <_ZN5CUser13setRewardTypeEh>
 84c6bfe:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c01:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 84c6c08:	0f be c0             	movsbl %al,%eax
 84c6c0b:	83 e0 27             	and    $0x27,%eax
 84c6c0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6c12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6c15:	89 04 24             	mov    %eax,(%esp)
 84c6c18:	e8 cf 63 02 00       	call   84ecfec <_ZN5CUser12setSecuGradeEc>
 84c6c1d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c20:	0f b6 80 e0 39 00 00 	movzbl 0x39e0(%eax),%eax
 84c6c27:	84 c0                	test   %al,%al
 84c6c29:	0f 84 aa 00 00 00    	je     84c6cd9 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1a45>
 84c6c2f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c32:	8d b0 18 3a 00 00    	lea    0x3a18(%eax),%esi
 84c6c38:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c3b:	8b 80 14 3a 00 00    	mov    0x3a14(%eax),%eax
 84c6c41:	89 85 c4 fd ff ff    	mov    %eax,-0x23c(%ebp)
 84c6c47:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c4a:	0f b6 80 ec 39 00 00 	movzbl 0x39ec(%eax),%eax
 84c6c51:	0f be c0             	movsbl %al,%eax
 84c6c54:	89 85 c8 fd ff ff    	mov    %eax,-0x238(%ebp)
 84c6c5a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c5d:	8b 80 e4 39 00 00    	mov    0x39e4(%eax),%eax
 84c6c63:	89 85 cc fd ff ff    	mov    %eax,-0x234(%ebp)
 84c6c69:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c6c:	0f b6 80 e1 39 00 00 	movzbl 0x39e1(%eax),%eax
 84c6c73:	0f b6 c0             	movzbl %al,%eax
 84c6c76:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
 84c6c7c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c7f:	0f b6 80 e0 39 00 00 	movzbl 0x39e0(%eax),%eax
 84c6c86:	0f b6 f8             	movzbl %al,%edi
 84c6c89:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6c8c:	8d 98 ed 39 00 00    	lea    0x39ed(%eax),%ebx
 84c6c92:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6c95:	89 04 24             	mov    %eax,(%esp)
 84c6c98:	e8 83 90 d6 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84c6c9d:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 84c6ca1:	8b 95 c4 fd ff ff    	mov    -0x23c(%ebp),%edx
 84c6ca7:	89 54 24 18          	mov    %edx,0x18(%esp)
 84c6cab:	8b 8d c8 fd ff ff    	mov    -0x238(%ebp),%ecx
 84c6cb1:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84c6cb5:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
 84c6cbb:	89 54 24 10          	mov    %edx,0x10(%esp)
 84c6cbf:	8b 8d d0 fd ff ff    	mov    -0x230(%ebp),%ecx
 84c6cc5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84c6cc9:	89 7c 24 08          	mov    %edi,0x8(%esp)
 84c6ccd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6cd1:	89 04 24             	mov    %eax,(%esp)
 84c6cd4:	e8 c3 71 13 00       	call   85fde9c <_ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc>
 84c6cd9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6cdc:	0f b6 80 0c 39 00 00 	movzbl 0x390c(%eax),%eax
 84c6ce3:	0f be d8             	movsbl %al,%ebx
 84c6ce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6ce9:	89 04 24             	mov    %eax,(%esp)
 84c6cec:	e8 3d 90 d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6cf1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6cf5:	89 04 24             	mov    %eax,(%esp)
 84c6cf8:	e8 d9 50 02 00       	call   84ebdd6 <_ZN8Sanicova4CPad14setVersionInfoEc>
 84c6cfd:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6d00:	0f b6 80 e0 38 00 00 	movzbl 0x38e0(%eax),%eax
 84c6d07:	84 c0                	test   %al,%al
 84c6d09:	0f 84 33 02 00 00    	je     84c6f42 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1cae>
 84c6d0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6d12:	89 04 24             	mov    %eax,(%esp)
 84c6d15:	e8 14 90 d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6d1a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c6d21:	00 
 84c6d22:	89 04 24             	mov    %eax,(%esp)
 84c6d25:	e8 de 50 02 00       	call   84ebe08 <_ZN8Sanicova4CPad11setActivateEb>
 84c6d2a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6d2d:	8b 98 18 39 00 00    	mov    0x3918(%eax),%ebx
 84c6d33:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6d36:	89 04 24             	mov    %eax,(%esp)
 84c6d39:	e8 f0 8f d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6d3e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6d42:	89 04 24             	mov    %eax,(%esp)
 84c6d45:	e8 b0 50 02 00       	call   84ebdfa <_ZN8Sanicova4CPad12setCancelCntEi>
 84c6d4a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6d4d:	0f b6 80 0c 39 00 00 	movzbl 0x390c(%eax),%eax
 84c6d54:	0f be d8             	movsbl %al,%ebx
 84c6d57:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6d5a:	89 04 24             	mov    %eax,(%esp)
 84c6d5d:	e8 cc 8f d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6d62:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6d66:	89 04 24             	mov    %eax,(%esp)
 84c6d69:	e8 68 50 02 00       	call   84ebdd6 <_ZN8Sanicova4CPad14setVersionInfoEc>
 84c6d6e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6d71:	0f b6 80 0e 39 00 00 	movzbl 0x390e(%eax),%eax
 84c6d78:	0f b6 d8             	movzbl %al,%ebx
 84c6d7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6d7e:	89 04 24             	mov    %eax,(%esp)
 84c6d81:	e8 a8 8f d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6d86:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6d8a:	89 04 24             	mov    %eax,(%esp)
 84c6d8d:	e8 7c e5 d9 ff       	call   826530e <_ZN8Sanicova4CPad12setCertifiedEb>
 84c6d92:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6d95:	8b 98 10 39 00 00    	mov    0x3910(%eax),%ebx
 84c6d9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6d9e:	89 04 24             	mov    %eax,(%esp)
 84c6da1:	e8 88 8f d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6da6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6daa:	89 04 24             	mov    %eax,(%esp)
 84c6dad:	e8 6e 50 02 00       	call   84ebe20 <_ZN8Sanicova4CPad12setCheckTimeEl>
 84c6db2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c6db9:	e8 e0 4e c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c6dbe:	89 c3                	mov    %eax,%ebx
 84c6dc0:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6dc3:	8b b0 58 39 00 00    	mov    0x3958(%eax),%esi
 84c6dc9:	e8 b3 53 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c6dce:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84c6dd4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c6dd8:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c6ddc:	89 04 24             	mov    %eax,(%esp)
 84c6ddf:	e8 c4 52 fa ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84c6de4:	84 c0                	test   %al,%al
 84c6de6:	0f 84 bc 00 00 00    	je     84c6ea8 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1c14>
 84c6dec:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6def:	8b 80 14 39 00 00    	mov    0x3914(%eax),%eax
 84c6df5:	85 c0                	test   %eax,%eax
 84c6df7:	0f 8e cb 00 00 00    	jle    84c6ec8 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1c34>
 84c6dfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6e00:	89 04 24             	mov    %eax,(%esp)
 84c6e03:	e8 26 8f d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6e08:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c6e0f:	00 
 84c6e10:	89 04 24             	mov    %eax,(%esp)
 84c6e13:	e8 14 03 dc ff       	call   828712c <_ZN8Sanicova4CPad10setFailCntEi>
 84c6e18:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6e1b:	89 04 24             	mov    %eax,(%esp)
 84c6e1e:	e8 0b 8f d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6e23:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c6e2a:	00 
 84c6e2b:	89 04 24             	mov    %eax,(%esp)
 84c6e2e:	e8 c7 4f 02 00       	call   84ebdfa <_ZN8Sanicova4CPad12setCancelCntEi>
 84c6e33:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6e36:	89 04 24             	mov    %eax,(%esp)
 84c6e39:	e8 d4 8e d6 ff       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 84c6e3e:	89 c3                	mov    %eax,%ebx
 84c6e40:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6e43:	89 04 24             	mov    %eax,(%esp)
 84c6e46:	e8 e3 8e d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6e4b:	89 04 24             	mov    %eax,(%esp)
 84c6e4e:	e8 3b 81 d6 ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 84c6e53:	89 c6                	mov    %eax,%esi
 84c6e55:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6e58:	89 04 24             	mov    %eax,(%esp)
 84c6e5b:	e8 0e 35 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c6e60:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c6e64:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c6e68:	89 04 24             	mov    %eax,(%esp)
 84c6e6b:	e8 44 d0 f5 ff       	call   8423eb4 <_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc>
 84c6e70:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c6e77:	00 
 84c6e78:	c7 44 24 08 f5 1d 00 	movl   $0x1df5,0x8(%esp)
 84c6e7f:	00 
 84c6e80:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c6e87:	08 
 84c6e88:	8d 45 80             	lea    -0x80(%ebp),%eax
 84c6e8b:	89 04 24             	mov    %eax,(%esp)
 84c6e8e:	e8 85 88 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c6e93:	c7 44 24 04 47 76 c8 	movl   $0x8c87647,0x4(%esp)
 84c6e9a:	08 
 84c6e9b:	8d 45 80             	lea    -0x80(%ebp),%eax
 84c6e9e:	89 04 24             	mov    %eax,(%esp)
 84c6ea1:	e8 e2 88 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c6ea6:	eb 20                	jmp    84c6ec8 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1c34>
 84c6ea8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6eab:	8b 98 14 39 00 00    	mov    0x3914(%eax),%ebx
 84c6eb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6eb4:	89 04 24             	mov    %eax,(%esp)
 84c6eb7:	e8 72 8e d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6ebc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6ec0:	89 04 24             	mov    %eax,(%esp)
 84c6ec3:	e8 64 02 dc ff       	call   828712c <_ZN8Sanicova4CPad10setFailCntEi>
 84c6ec8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6ecb:	8d 98 e1 38 00 00    	lea    0x38e1(%eax),%ebx
 84c6ed1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6ed4:	89 04 24             	mov    %eax,(%esp)
 84c6ed7:	e8 52 8e d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6edc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6ee0:	89 04 24             	mov    %eax,(%esp)
 84c6ee3:	e8 52 02 dc ff       	call   828713a <_ZN8Sanicova4CPad11setPasswordEPc>
 84c6ee8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6eeb:	89 04 24             	mov    %eax,(%esp)
 84c6eee:	e8 0d 99 d6 ff       	call   8230800 <_ZN5CUser8getHadesEv>
 84c6ef3:	89 04 24             	mov    %eax,(%esp)
 84c6ef6:	e8 05 23 ff ff       	call   84b9200 <_ZN8XNuclear6CHades10Send_LoginEv>
 84c6efb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6efe:	89 04 24             	mov    %eax,(%esp)
 84c6f01:	e8 fa 98 d6 ff       	call   8230800 <_ZN5CUser8getHadesEv>
 84c6f06:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c6f0d:	00 
 84c6f0e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84c6f15:	00 
 84c6f16:	89 04 24             	mov    %eax,(%esp)
 84c6f19:	e8 6e 24 ff ff       	call   84b938c <_ZN8XNuclear6CHades13StdCateUpdateEtt>
 84c6f1e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6f21:	0f b6 80 0d 39 00 00 	movzbl 0x390d(%eax),%eax
 84c6f28:	0f b6 d8             	movzbl %al,%ebx
 84c6f2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6f2e:	89 04 24             	mov    %eax,(%esp)
 84c6f31:	e8 f8 8d d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6f36:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c6f3a:	89 04 24             	mov    %eax,(%esp)
 84c6f3d:	e8 70 4e 02 00       	call   84ebdb2 <_ZN8Sanicova4CPad18setAdvideChangePwdEb>
 84c6f42:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6f45:	89 04 24             	mov    %eax,(%esp)
 84c6f48:	e8 e1 8d d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c6f4d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c6f54:	00 
 84c6f55:	89 04 24             	mov    %eax,(%esp)
 84c6f58:	e8 b1 e3 d9 ff       	call   826530e <_ZN8Sanicova4CPad12setCertifiedEb>
 84c6f5d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6f60:	0f b7 80 de 38 00 00 	movzwl 0x38de(%eax),%eax
 84c6f67:	66 83 f8 0d          	cmp    $0xd,%ax
 84c6f6b:	75 15                	jne    84c6f82 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1cee>
 84c6f6d:	c7 44 24 04 e7 00 00 	movl   $0xe7,0x4(%esp)
 84c6f74:	00 
 84c6f75:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6f78:	89 04 24             	mov    %eax,(%esp)
 84c6f7b:	e8 da 5f 02 00       	call   84ecf5a <_ZN5CUser19setPunishTradeAlertEs>
 84c6f80:	eb 38                	jmp    84c6fba <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1d26>
 84c6f82:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6f85:	0f b7 80 de 38 00 00 	movzwl 0x38de(%eax),%eax
 84c6f8c:	66 83 f8 0e          	cmp    $0xe,%ax
 84c6f90:	75 15                	jne    84c6fa7 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1d13>
 84c6f92:	c7 44 24 04 e8 00 00 	movl   $0xe8,0x4(%esp)
 84c6f99:	00 
 84c6f9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6f9d:	89 04 24             	mov    %eax,(%esp)
 84c6fa0:	e8 b5 5f 02 00       	call   84ecf5a <_ZN5CUser19setPunishTradeAlertEs>
 84c6fa5:	eb 13                	jmp    84c6fba <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1d26>
 84c6fa7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c6fae:	00 
 84c6faf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6fb2:	89 04 24             	mov    %eax,(%esp)
 84c6fb5:	e8 a0 5f 02 00       	call   84ecf5a <_ZN5CUser19setPunishTradeAlertEs>
 84c6fba:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6fbd:	8b 80 d4 39 00 00    	mov    0x39d4(%eax),%eax
 84c6fc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6fc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6fca:	89 04 24             	mov    %eax,(%esp)
 84c6fcd:	e8 62 57 02 00       	call   84ec734 <_ZN5CUser28setOnlinePreliminaryCharacNoEj>
 84c6fd2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6fd5:	8b 80 d0 39 00 00    	mov    0x39d0(%eax),%eax
 84c6fdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6fdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6fe2:	89 04 24             	mov    %eax,(%esp)
 84c6fe5:	e8 38 57 02 00       	call   84ec722 <_ZN5CUser31setOnlinePreliminaryServerGroupE17ENUM_SERVER_GROUP>
 84c6fea:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c6fed:	8b 80 d8 39 00 00    	mov    0x39d8(%eax),%eax
 84c6ff3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c6ff7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c6ffa:	89 04 24             	mov    %eax,(%esp)
 84c6ffd:	e8 44 57 02 00       	call   84ec746 <_ZN5CUser28setOnlinePreliminaryPlayTypeEi>
 84c7002:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7005:	8b b0 d8 39 00 00    	mov    0x39d8(%eax),%esi
 84c700b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c700e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84c7014:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c701b:	00 
 84c701c:	89 04 24             	mov    %eax,(%esp)
 84c701f:	e8 27 20 c4 ff       	call   810904b <_Z14NumberToStringji>
 84c7024:	89 c3                	mov    %eax,%ebx
 84c7026:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c702d:	00 
 84c702e:	c7 44 24 08 33 1e 00 	movl   $0x1e33,0x8(%esp)
 84c7035:	00 
 84c7036:	c7 44 24 04 40 df c8 	movl   $0x8c8df40,0x4(%esp)
 84c703d:	08 
 84c703e:	8d 45 90             	lea    -0x70(%ebp),%eax
 84c7041:	89 04 24             	mov    %eax,(%esp)
 84c7044:	e8 cf 86 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c7049:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c704d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c7051:	c7 44 24 04 60 76 c8 	movl   $0x8c87660,0x4(%esp)
 84c7058:	08 
 84c7059:	8d 45 90             	lea    -0x70(%ebp),%eax
 84c705c:	89 04 24             	mov    %eax,(%esp)
 84c705f:	e8 24 87 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c7064:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7067:	8b 80 ac 39 00 00    	mov    0x39ac(%eax),%eax
 84c706d:	85 c0                	test   %eax,%eax
 84c706f:	74 14                	je     84c7085 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1df1>
 84c7071:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7074:	8b 80 a8 39 00 00    	mov    0x39a8(%eax),%eax
 84c707a:	85 c0                	test   %eax,%eax
 84c707c:	74 07                	je     84c7085 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1df1>
 84c707e:	b8 01 00 00 00       	mov    $0x1,%eax
 84c7083:	eb 05                	jmp    84c708a <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1df6>
 84c7085:	b8 00 00 00 00       	mov    $0x0,%eax
 84c708a:	0f b6 c0             	movzbl %al,%eax
 84c708d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7091:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7094:	89 04 24             	mov    %eax,(%esp)
 84c7097:	e8 5a 56 02 00       	call   84ec6f6 <_ZN5CUser20setTournamentAccountEb>
 84c709c:	e8 06 33 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c70a1:	89 04 24             	mov    %eax,(%esp)
 84c70a4:	e8 77 fa c4 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c70a9:	83 f8 07             	cmp    $0x7,%eax
 84c70ac:	0f 94 c0             	sete   %al
 84c70af:	84 c0                	test   %al,%al
 84c70b1:	0f 84 4c 01 00 00    	je     84c7203 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1f6f>
 84c70b7:	8d 85 f5 fd ff ff    	lea    -0x20b(%ebp),%eax
 84c70bd:	89 04 24             	mov    %eax,(%esp)
 84c70c0:	e8 87 81 fa ff       	call   846f24c <_ZN24Packet_Monitor_UDP_LoginC1Ev>
 84c70c5:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c70ca:	c7 44 24 08 3b 1e 00 	movl   $0x1e3b,0x8(%esp)
 84c70d1:	00 
 84c70d2:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c70d9:	08 
 84c70da:	89 04 24             	mov    %eax,(%esp)
 84c70dd:	e8 a4 89 dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c70e2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c70e9:	00 
 84c70ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c70ee:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 84c70f4:	89 04 24             	mov    %eax,(%esp)
 84c70f7:	e8 2a 1b c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c70fc:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 84c7102:	89 04 24             	mov    %eax,(%esp)
 84c7105:	e8 3c 1b c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c710a:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 84c7111:	00 
 84c7112:	89 04 24             	mov    %eax,(%esp)
 84c7115:	e8 3c 1b c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c711a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c711d:	89 04 24             	mov    %eax,(%esp)
 84c7120:	e8 71 1b c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c7125:	89 c3                	mov    %eax,%ebx
 84c7127:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 84c712d:	89 04 24             	mov    %eax,(%esp)
 84c7130:	e8 11 1b c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c7135:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c7139:	89 04 24             	mov    %eax,(%esp)
 84c713c:	e8 15 1b c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c7141:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7144:	89 04 24             	mov    %eax,(%esp)
 84c7147:	e8 4a 1b c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c714c:	89 85 ff fd ff ff    	mov    %eax,-0x201(%ebp)
 84c7152:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7155:	89 04 24             	mov    %eax,(%esp)
 84c7158:	e8 11 32 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c715d:	89 85 03 fe ff ff    	mov    %eax,-0x1fd(%ebp)
 84c7163:	e8 19 50 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c7168:	89 04 24             	mov    %eax,(%esp)
 84c716b:	e8 5a 39 c8 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84c7170:	88 85 07 fe ff ff    	mov    %al,-0x1f9(%ebp)
 84c7176:	c6 85 18 fe ff ff 01 	movb   $0x1,-0x1e8(%ebp)
 84c717d:	c7 85 19 fe ff ff 00 	movl   $0x0,-0x1e7(%ebp)
 84c7184:	00 00 00 
 84c7187:	c7 85 1d fe ff ff 00 	movl   $0x0,-0x1e3(%ebp)
 84c718e:	00 00 00 
 84c7191:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 84c7197:	89 04 24             	mov    %eax,(%esp)
 84c719a:	e8 af 1a c0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84c719f:	c7 44 24 08 33 00 00 	movl   $0x33,0x8(%esp)
 84c71a6:	00 
 84c71a7:	8d 95 f5 fd ff ff    	lea    -0x20b(%ebp),%edx
 84c71ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c71b1:	89 04 24             	mov    %eax,(%esp)
 84c71b4:	e8 99 74 c1 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84c71b9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c71be:	8d 95 80 fe ff ff    	lea    -0x180(%ebp),%edx
 84c71c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c71c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c71cf:	00 
 84c71d0:	89 04 24             	mov    %eax,(%esp)
 84c71d3:	e8 06 9e 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c71d8:	eb 1b                	jmp    84c71f5 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x1f61>
 84c71da:	89 d3                	mov    %edx,%ebx
 84c71dc:	89 c6                	mov    %eax,%esi
 84c71de:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 84c71e4:	89 04 24             	mov    %eax,(%esp)
 84c71e7:	e8 e6 56 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c71ec:	89 f0                	mov    %esi,%eax
 84c71ee:	89 da                	mov    %ebx,%edx
 84c71f0:	e9 a9 08 00 00       	jmp    84c7a9e <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x280a>
 84c71f5:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 84c71fb:	89 04 24             	mov    %eax,(%esp)
 84c71fe:	e8 cf 56 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c7203:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7206:	8b 80 34 3a 00 00    	mov    0x3a34(%eax),%eax
 84c720c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7210:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7213:	89 04 24             	mov    %eax,(%esp)
 84c7216:	e8 7f 56 02 00       	call   84ec89a <_ZN5CUser16setClientVersionEj>
 84c721b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c721e:	8b 80 58 39 00 00    	mov    0x3958(%eax),%eax
 84c7224:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7228:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c722b:	89 04 24             	mov    %eax,(%esp)
 84c722e:	e8 c5 56 02 00       	call   84ec8f8 <_ZN5CUser22SetAccountLastPlayTimeEl>
 84c7233:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7236:	0f b6 80 4a 3a 00 00 	movzbl 0x3a4a(%eax),%eax
 84c723d:	0f b6 c0             	movzbl %al,%eax
 84c7240:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7244:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7247:	89 04 24             	mov    %eax,(%esp)
 84c724a:	e8 8b 54 02 00       	call   84ec6da <_ZN5CUser25setJoinedSchoolPointEventEb>
 84c724f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7252:	c6 80 7c e4 08 00 00 	movb   $0x0,0x8e47c(%eax)
 84c7259:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c725c:	8d 90 18 e4 08 00    	lea    0x8e418(%eax),%edx
 84c7262:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7265:	05 e0 00 00 00       	add    $0xe0,%eax
 84c726a:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84c7271:	00 
 84c7272:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c7276:	89 04 24             	mov    %eax,(%esp)
 84c7279:	e8 b0 b5 c9 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c727e:	8b 15 d8 f7 41 09    	mov    0x941f7d8,%edx
 84c7284:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7288:	89 14 24             	mov    %edx,(%esp)
 84c728b:	e8 16 49 02 00       	call   84ebba6 <_ZN8WongWork15CBlackIPMonitor13getPunishTypeEPKc>
 84c7290:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c7293:	89 82 78 e4 08 00    	mov    %eax,0x8e478(%edx)
 84c7299:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c729c:	8b 80 78 e4 08 00    	mov    0x8e478(%eax),%eax
 84c72a2:	83 e0 01             	and    $0x1,%eax
 84c72a5:	84 c0                	test   %al,%al
 84c72a7:	74 58                	je     84c7301 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x206d>
 84c72a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c72ac:	8d 90 18 e4 08 00    	lea    0x8e418(%eax),%edx
 84c72b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c72b5:	05 e0 00 00 00       	add    $0xe0,%eax
 84c72ba:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84c72c1:	00 
 84c72c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c72c6:	89 04 24             	mov    %eax,(%esp)
 84c72c9:	e8 60 b5 c9 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c72ce:	8b 15 d8 f7 41 09    	mov    0x941f7d8,%edx
 84c72d4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c72db:	00 
 84c72dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c72e0:	89 14 24             	mov    %edx,(%esp)
 84c72e3:	e8 a4 49 02 00       	call   84ebc8c <_ZN8WongWork15CBlackIPMonitor10GetEndTimeEPKcNS_31ENUM_BLACKIPMONITOR_PUNISH_TYPEE>
 84c72e8:	89 c3                	mov    %eax,%ebx
 84c72ea:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c72f1:	e8 a8 49 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c72f6:	39 c3                	cmp    %eax,%ebx
 84c72f8:	7c 07                	jl     84c7301 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x206d>
 84c72fa:	b8 01 00 00 00       	mov    $0x1,%eax
 84c72ff:	eb 05                	jmp    84c7306 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2072>
 84c7301:	b8 00 00 00 00       	mov    $0x0,%eax
 84c7306:	84 c0                	test   %al,%al
 84c7308:	74 26                	je     84c7330 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x209c>
 84c730a:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 84c7311:	00 
 84c7312:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7315:	89 04 24             	mov    %eax,(%esp)
 84c7318:	e8 73 25 1c 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84c731d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7320:	89 04 24             	mov    %eax,(%esp)
 84c7323:	e8 46 30 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c7328:	89 04 24             	mov    %eax,(%esp)
 84c732b:	e8 9a e2 f6 ff       	call   84355ca <_ZN34DB_BlackipPrivateSecurityValuation11makeRequestEj>
 84c7330:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7333:	8b 80 4c 3a 00 00    	mov    0x3a4c(%eax),%eax
 84c7339:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84c733c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c7343:	e8 56 49 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c7348:	89 c3                	mov    %eax,%ebx
 84c734a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c734d:	8b b0 58 39 00 00    	mov    0x3958(%eax),%esi
 84c7353:	e8 29 4e c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c7358:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84c735e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c7362:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c7366:	89 04 24             	mov    %eax,(%esp)
 84c7369:	e8 3a 4d fa ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84c736e:	84 c0                	test   %al,%al
 84c7370:	74 0f                	je     84c7381 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x20ed>
 84c7372:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7375:	c7 80 4c 3a 00 00 00 	movl   $0x0,0x3a4c(%eax)
 84c737c:	00 00 00 
 84c737f:	eb 15                	jmp    84c7396 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2102>
 84c7381:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7384:	8b 80 4c 3a 00 00    	mov    0x3a4c(%eax),%eax
 84c738a:	8d 50 ff             	lea    -0x1(%eax),%edx
 84c738d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7390:	89 90 4c 3a 00 00    	mov    %edx,0x3a4c(%eax)
 84c7396:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7399:	8b 80 4c 3a 00 00    	mov    0x3a4c(%eax),%eax
 84c739f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c73a2:	81 c2 f0 e3 08 00    	add    $0x8e3f0,%edx
 84c73a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c73ac:	89 14 24             	mov    %edx,(%esp)
 84c73af:	e8 8a 41 02 00       	call   84eb53e <_ZN8WongWork12CMCAPManager8incPointEi>
 84c73b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c73b7:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 84c73bc:	89 04 24             	mov    %eax,(%esp)
 84c73bf:	e8 e0 7a d6 ff       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 84c73c4:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 84c73c7:	0f 94 c0             	sete   %al
 84c73ca:	84 c0                	test   %al,%al
 84c73cc:	74 10                	je     84c73de <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x214a>
 84c73ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c73d1:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 84c73d6:	89 04 24             	mov    %eax,(%esp)
 84c73d9:	e8 0c 7b d6 ff       	call   822eeea <_ZN8WongWork12CMCAPManager20disableCleanPadPointEv>
 84c73de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c73e1:	8b 80 78 e4 08 00    	mov    0x8e478(%eax),%eax
 84c73e7:	83 e0 02             	and    $0x2,%eax
 84c73ea:	85 c0                	test   %eax,%eax
 84c73ec:	74 58                	je     84c7446 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x21b2>
 84c73ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c73f1:	8d 90 18 e4 08 00    	lea    0x8e418(%eax),%edx
 84c73f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c73fa:	05 e0 00 00 00       	add    $0xe0,%eax
 84c73ff:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84c7406:	00 
 84c7407:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c740b:	89 04 24             	mov    %eax,(%esp)
 84c740e:	e8 1b b4 c9 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c7413:	8b 15 d8 f7 41 09    	mov    0x941f7d8,%edx
 84c7419:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84c7420:	00 
 84c7421:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7425:	89 14 24             	mov    %edx,(%esp)
 84c7428:	e8 5f 48 02 00       	call   84ebc8c <_ZN8WongWork15CBlackIPMonitor10GetEndTimeEPKcNS_31ENUM_BLACKIPMONITOR_PUNISH_TYPEE>
 84c742d:	89 c3                	mov    %eax,%ebx
 84c742f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c7436:	e8 63 48 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c743b:	39 c3                	cmp    %eax,%ebx
 84c743d:	7c 07                	jl     84c7446 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x21b2>
 84c743f:	b8 01 00 00 00       	mov    $0x1,%eax
 84c7444:	eb 05                	jmp    84c744b <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x21b7>
 84c7446:	b8 00 00 00 00       	mov    $0x0,%eax
 84c744b:	84 c0                	test   %al,%al
 84c744d:	74 3e                	je     84c748d <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x21f9>
 84c744f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7452:	c6 80 7c e4 08 00 01 	movb   $0x1,0x8e47c(%eax)
 84c7459:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c745c:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 84c7461:	89 04 24             	mov    %eax,(%esp)
 84c7464:	e8 3b 7a d6 ff       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 84c7469:	3d 1b 25 00 00       	cmp    $0x251b,%eax
 84c746e:	0f 96 c0             	setbe  %al
 84c7471:	84 c0                	test   %al,%al
 84c7473:	74 18                	je     84c748d <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x21f9>
 84c7475:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7478:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 84c747d:	c7 44 24 04 1c 25 00 	movl   $0x251c,0x4(%esp)
 84c7484:	00 
 84c7485:	89 04 24             	mov    %eax,(%esp)
 84c7488:	e8 b1 40 02 00       	call   84eb53e <_ZN8WongWork12CMCAPManager8incPointEi>
 84c748d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7490:	0f b6 80 04 3f 00 00 	movzbl 0x3f04(%eax),%eax
 84c7497:	84 c0                	test   %al,%al
 84c7499:	74 7a                	je     84c7515 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2281>
 84c749b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c749e:	89 04 24             	mov    %eax,(%esp)
 84c74a1:	e8 d2 52 02 00       	call   84ec778 <_ZN5CUser13SetReturnUserEv>
 84c74a6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c74a9:	8b 80 08 3f 00 00    	mov    0x3f08(%eax),%eax
 84c74af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c74b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c74b6:	89 04 24             	mov    %eax,(%esp)
 84c74b9:	e8 04 53 02 00       	call   84ec7c2 <_ZN5CUser23SetReturnUserExpireTimeEi>
 84c74be:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c74c1:	0f b6 80 05 3f 00 00 	movzbl 0x3f05(%eax),%eax
 84c74c8:	0f b6 c0             	movzbl %al,%eax
 84c74cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c74cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c74d2:	89 04 24             	mov    %eax,(%esp)
 84c74d5:	e8 be 52 02 00       	call   84ec798 <_ZN5CUser27SetReturnUserFirstUserLoginEb>
 84c74da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c74dd:	89 04 24             	mov    %eax,(%esp)
 84c74e0:	e8 cf 52 02 00       	call   84ec7b4 <_ZN5CUser23GetReturnUserExpireTimeEv>
 84c74e5:	89 c6                	mov    %eax,%esi
 84c74e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c74ea:	89 04 24             	mov    %eax,(%esp)
 84c74ed:	e8 8a 2e c1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84c74f2:	0f b7 d8             	movzwl %ax,%ebx
 84c74f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c74f8:	89 04 24             	mov    %eax,(%esp)
 84c74fb:	e8 96 17 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c7500:	89 74 24 08          	mov    %esi,0x8(%esp)
 84c7504:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c7508:	89 04 24             	mov    %eax,(%esp)
 84c750b:	e8 f6 31 17 00       	call   863a706 <_ZN23Timer_ReturnUserTimeout15registNextTimerEiij>
 84c7510:	e9 c2 00 00 00       	jmp    84c75d7 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2343>
 84c7515:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7518:	8b 80 58 39 00 00    	mov    0x3958(%eax),%eax
 84c751e:	85 c0                	test   %eax,%eax
 84c7520:	75 10                	jne    84c7532 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x229e>
 84c7522:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7525:	89 04 24             	mov    %eax,(%esp)
 84c7528:	e8 5b 52 02 00       	call   84ec788 <_ZN5CUser15ResetReturnUserEv>
 84c752d:	e9 a5 00 00 00       	jmp    84c75d7 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2343>
 84c7532:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7535:	8b 80 58 39 00 00    	mov    0x3958(%eax),%eax
 84c753b:	8d 98 00 38 b5 03    	lea    0x3b53800(%eax),%ebx
 84c7541:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c7548:	e8 51 47 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c754d:	39 c3                	cmp    %eax,%ebx
 84c754f:	0f 9c c0             	setl   %al
 84c7552:	84 c0                	test   %al,%al
 84c7554:	74 76                	je     84c75cc <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2338>
 84c7556:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7559:	89 04 24             	mov    %eax,(%esp)
 84c755c:	e8 17 52 02 00       	call   84ec778 <_ZN5CUser13SetReturnUserEv>
 84c7561:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c7568:	e8 31 47 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c756d:	05 00 75 12 00       	add    $0x127500,%eax
 84c7572:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7576:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7579:	89 04 24             	mov    %eax,(%esp)
 84c757c:	e8 41 52 02 00       	call   84ec7c2 <_ZN5CUser23SetReturnUserExpireTimeEi>
 84c7581:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c7588:	00 
 84c7589:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c758c:	89 04 24             	mov    %eax,(%esp)
 84c758f:	e8 04 52 02 00       	call   84ec798 <_ZN5CUser27SetReturnUserFirstUserLoginEb>
 84c7594:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7597:	89 04 24             	mov    %eax,(%esp)
 84c759a:	e8 15 52 02 00       	call   84ec7b4 <_ZN5CUser23GetReturnUserExpireTimeEv>
 84c759f:	89 c6                	mov    %eax,%esi
 84c75a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c75a4:	89 04 24             	mov    %eax,(%esp)
 84c75a7:	e8 d0 2d c1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84c75ac:	0f b7 d8             	movzwl %ax,%ebx
 84c75af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c75b2:	89 04 24             	mov    %eax,(%esp)
 84c75b5:	e8 dc 16 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c75ba:	89 74 24 08          	mov    %esi,0x8(%esp)
 84c75be:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c75c2:	89 04 24             	mov    %eax,(%esp)
 84c75c5:	e8 3c 31 17 00       	call   863a706 <_ZN23Timer_ReturnUserTimeout15registNextTimerEiij>
 84c75ca:	eb 0b                	jmp    84c75d7 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2343>
 84c75cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c75cf:	89 04 24             	mov    %eax,(%esp)
 84c75d2:	e8 b1 51 02 00       	call   84ec788 <_ZN5CUser15ResetReturnUserEv>
 84c75d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c75da:	89 04 24             	mov    %eax,(%esp)
 84c75dd:	e8 30 52 02 00       	call   84ec812 <_ZN5CUser30resetAccountMemberBonusFatigueEv>
 84c75e2:	e8 9a 4b c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c75e7:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84c75ed:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84c75f0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c75f7:	e8 a2 46 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c75fc:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c75ff:	8b 92 60 3f 00 00    	mov    0x3f60(%edx),%edx
 84c7605:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c7609:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c760d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c7610:	89 04 24             	mov    %eax,(%esp)
 84c7613:	e8 90 4a fa ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84c7618:	83 f0 01             	xor    $0x1,%eax
 84c761b:	84 c0                	test   %al,%al
 84c761d:	74 1c                	je     84c763b <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x23a7>
 84c761f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7622:	0f b7 80 5e 3f 00 00 	movzwl 0x3f5e(%eax),%eax
 84c7629:	98                   	cwtl
 84c762a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c762e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7631:	89 04 24             	mov    %eax,(%esp)
 84c7634:	e8 ab 51 02 00       	call   84ec7e4 <_ZN5CUser28incAccountMemberBonusFatigueEs>
 84c7639:	eb 0b                	jmp    84c7646 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x23b2>
 84c763b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c763e:	89 04 24             	mov    %eax,(%esp)
 84c7641:	e8 8e 51 02 00       	call   84ec7d4 <_ZN5CUser28EnableSaveMemberBonusFatigueEv>
 84c7646:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7649:	0f b6 80 10 3f 00 00 	movzbl 0x3f10(%eax),%eax
 84c7650:	0f b6 d0             	movzbl %al,%edx
 84c7653:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7656:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c765a:	89 04 24             	mov    %eax,(%esp)
 84c765d:	e8 84 49 02 00       	call   84ebfe6 <_ZN15CUserCharacInfo25setUserEventCharacterFlagEh>
 84c7662:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7665:	8b 80 14 3f 00 00    	mov    0x3f14(%eax),%eax
 84c766b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c766f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7672:	89 04 24             	mov    %eax,(%esp)
 84c7675:	e8 4c 93 18 00       	call   86509c6 <_ZN5CUser10SetMileageEi>
 84c767a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c767d:	0f b6 80 5c 3f 00 00 	movzbl 0x3f5c(%eax),%eax
 84c7684:	84 c0                	test   %al,%al
 84c7686:	0f 95 c0             	setne  %al
 84c7689:	0f b6 c0             	movzbl %al,%eax
 84c768c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7690:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7693:	89 04 24             	mov    %eax,(%esp)
 84c7696:	e8 85 57 02 00       	call   84ece20 <_ZN5CUser24setCharacLinkMessageFlagEb>
 84c769b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c769e:	0f b6 80 58 3f 00 00 	movzbl 0x3f58(%eax),%eax
 84c76a5:	84 c0                	test   %al,%al
 84c76a7:	74 1d                	je     84c76c6 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2432>
 84c76a9:	a1 6c f7 41 09       	mov    0x941f76c,%eax
 84c76ae:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c76b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c76b5:	89 04 24             	mov    %eax,(%esp)
 84c76b8:	e8 99 54 e5 ff       	call   831cb56 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA>
 84c76bd:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c76c0:	88 82 58 3f 00 00    	mov    %al,0x3f58(%edx)
 84c76c6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c76c9:	8b 80 54 3f 00 00    	mov    0x3f54(%eax),%eax
 84c76cf:	85 c0                	test   %eax,%eax
 84c76d1:	7e 2b                	jle    84c76fe <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x246a>
 84c76d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c76da:	00 
 84c76db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c76de:	89 04 24             	mov    %eax,(%esp)
 84c76e1:	e8 26 5e e5 ff       	call   831d50c <_ZN5CUser22setBreakAwayRewardDataEb>
 84c76e6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c76e9:	8b 80 54 3f 00 00    	mov    0x3f54(%eax),%eax
 84c76ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c76f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c76f6:	89 04 24             	mov    %eax,(%esp)
 84c76f9:	e8 ca 4f 02 00       	call   84ec6c8 <_ZN5CUser31setUserBreakAwayRewardLuckPointEi>
 84c76fe:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7701:	8b 80 48 3f 00 00    	mov    0x3f48(%eax),%eax
 84c7707:	85 c0                	test   %eax,%eax
 84c7709:	7e 6e                	jle    84c7779 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x24e5>
 84c770b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c770e:	8b 90 40 3f 00 00    	mov    0x3f40(%eax),%edx
 84c7714:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7717:	8b 80 44 3f 00 00    	mov    0x3f44(%eax),%eax
 84c771d:	39 c2                	cmp    %eax,%edx
 84c771f:	76 15                	jbe    84c7736 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x24a2>
 84c7721:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c7728:	00 
 84c7729:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c772c:	89 04 24             	mov    %eax,(%esp)
 84c772f:	e8 aa 5d e5 ff       	call   831d4de <_ZN5CUser23setBreakAwayRewardOrderE28ENUM_BREAK_AWAY_REWARD_ORDER>
 84c7734:	eb 13                	jmp    84c7749 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x24b5>
 84c7736:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84c773d:	00 
 84c773e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7741:	89 04 24             	mov    %eax,(%esp)
 84c7744:	e8 95 5d e5 ff       	call   831d4de <_ZN5CUser23setBreakAwayRewardOrderE28ENUM_BREAK_AWAY_REWARD_ORDER>
 84c7749:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c774c:	8b 80 48 3f 00 00    	mov    0x3f48(%eax),%eax
 84c7752:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7756:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7759:	89 04 24             	mov    %eax,(%esp)
 84c775c:	e8 fb 84 d6 ff       	call   822fc5c <_ZN5CUser27setBreakAwayDungeonClearCntEi>
 84c7761:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7764:	8b 80 4c 3f 00 00    	mov    0x3f4c(%eax),%eax
 84c776a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c776e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7771:	89 04 24             	mov    %eax,(%esp)
 84c7774:	e8 03 85 d6 ff       	call   822fc7c <_ZN5CUser21setBreakAwayQuestTimeEj>
 84c7779:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c777c:	8b 80 18 3f 00 00    	mov    0x3f18(%eax),%eax
 84c7782:	85 c0                	test   %eax,%eax
 84c7784:	78 18                	js     84c779e <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x250a>
 84c7786:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7789:	8b 80 18 3f 00 00    	mov    0x3f18(%eax),%eax
 84c778f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7793:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7796:	89 04 24             	mov    %eax,(%esp)
 84c7799:	e8 9e 4e 02 00       	call   84ec63c <_ZN5CUser22setBreakAwayAccureCeraEi>
 84c779e:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84c77a3:	c7 44 24 04 34 00 00 	movl   $0x34,0x4(%esp)
 84c77aa:	00 
 84c77ab:	89 04 24             	mov    %eax,(%esp)
 84c77ae:	e8 e5 e1 c4 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84c77b3:	8b 10                	mov    (%eax),%edx
 84c77b5:	83 c2 34             	add    $0x34,%edx
 84c77b8:	8b 12                	mov    (%edx),%edx
 84c77ba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c77c1:	00 
 84c77c2:	89 04 24             	mov    %eax,(%esp)
 84c77c5:	ff d2                	call   *%edx
 84c77c7:	84 c0                	test   %al,%al
 84c77c9:	74 15                	je     84c77e0 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x254c>
 84c77cb:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c77ce:	0f b6 80 58 3f 00 00 	movzbl 0x3f58(%eax),%eax
 84c77d5:	84 c0                	test   %al,%al
 84c77d7:	74 07                	je     84c77e0 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x254c>
 84c77d9:	b8 01 00 00 00       	mov    $0x1,%eax
 84c77de:	eb 05                	jmp    84c77e5 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2551>
 84c77e0:	b8 00 00 00 00       	mov    $0x0,%eax
 84c77e5:	84 c0                	test   %al,%al
 84c77e7:	74 1b                	je     84c7804 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2570>
 84c77e9:	a1 6c f7 41 09       	mov    0x941f76c,%eax
 84c77ee:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c77f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c77f5:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c77f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c77fc:	89 04 24             	mov    %eax,(%esp)
 84c77ff:	e8 74 56 e5 ff       	call   831ce78 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser>
 84c7804:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7807:	89 04 24             	mov    %eax,(%esp)
 84c780a:	e8 5f 2b c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c780f:	89 c3                	mov    %eax,%ebx
 84c7811:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7814:	89 04 24             	mov    %eax,(%esp)
 84c7817:	e8 7a 14 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c781c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c7820:	89 04 24             	mov    %eax,(%esp)
 84c7823:	e8 c4 3e f7 ff       	call   843b6ec <_ZN19DB_LoadAccountCargo11makeRequestEij>
 84c7828:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c782b:	0f b6 80 dc 38 00 00 	movzbl 0x38dc(%eax),%eax
 84c7832:	0f b6 c0             	movzbl %al,%eax
 84c7835:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7839:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c783c:	89 04 24             	mov    %eax,(%esp)
 84c783f:	e8 14 b3 1c 00       	call   8692b58 <_ZN5CUser9SetPuUserEb>
 84c7844:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7847:	0f b6 80 a1 3f 00 00 	movzbl 0x3fa1(%eax),%eax
 84c784e:	0f b6 d0             	movzbl %al,%edx
 84c7851:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7854:	0f b6 80 a0 3f 00 00 	movzbl 0x3fa0(%eax),%eax
 84c785b:	0f b6 c0             	movzbl %al,%eax
 84c785e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c7862:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7866:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7869:	89 04 24             	mov    %eax,(%esp)
 84c786c:	e8 0f 3c 1c 00       	call   868b480 <_ZN5CUser22setCharacSlotCountInfoEhh>
 84c7871:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7874:	8b 80 a4 3f 00 00    	mov    0x3fa4(%eax),%eax
 84c787a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c787e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7881:	89 04 24             	mov    %eax,(%esp)
 84c7884:	e8 95 48 cf ff       	call   81bc11e <_ZN5CUser24set_ontime_last_recv_idxEi>
 84c7889:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c788c:	05 3a 3a 00 00       	add    $0x3a3a,%eax
 84c7891:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7895:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7898:	89 04 24             	mov    %eax,(%esp)
 84c789b:	e8 78 50 02 00       	call   84ec918 <_ZN5CUser13setWebAddressEPc>
 84c78a0:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c78a3:	0f b6 80 a8 3f 00 00 	movzbl 0x3fa8(%eax),%eax
 84c78aa:	84 c0                	test   %al,%al
 84c78ac:	74 13                	je     84c78c1 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x262d>
 84c78ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c78b5:	00 
 84c78b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c78b9:	89 04 24             	mov    %eax,(%esp)
 84c78bc:	e8 71 57 02 00       	call   84ed032 <_ZN5CUser30setCheckPickUpRandomOptionItemEb>
 84c78c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c78c4:	89 04 24             	mov    %eax,(%esp)
 84c78c7:	e8 aa 5b 1c 00       	call   868d476 <_ZN5CUser25reset_server_fatigue_dataEv>
 84c78cc:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c78cf:	0f b7 80 aa 3f 00 00 	movzwl 0x3faa(%eax),%eax
 84c78d6:	0f bf d0             	movswl %ax,%edx
 84c78d9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c78dc:	0f b6 80 a9 3f 00 00 	movzbl 0x3fa9(%eax),%eax
 84c78e3:	0f b6 c0             	movzbl %al,%eax
 84c78e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c78ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c78ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c78f1:	89 04 24             	mov    %eax,(%esp)
 84c78f4:	e8 a9 5b 1c 00       	call   868d4a2 <_ZN5CUser20set_fatigue_count_dbEii>
 84c78f9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c78fc:	05 ac 3f 00 00       	add    $0x3fac,%eax
 84c7901:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7905:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7908:	89 04 24             	mov    %eax,(%esp)
 84c790b:	e8 54 5d 1c 00       	call   868d664 <_ZN5CUser24set_ingame_event_historyEP24SIG_INGAME_EVENT_HISTORY>
 84c7910:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c7913:	0f b6 80 24 41 00 00 	movzbl 0x4124(%eax),%eax
 84c791a:	84 c0                	test   %al,%al
 84c791c:	74 3a                	je     84c7958 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x26c4>
 84c791e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7921:	89 04 24             	mov    %eax,(%esp)
 84c7924:	e8 31 20 c3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84c7929:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c7930:	00 
 84c7931:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84c7938:	00 
 84c7939:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c7940:	00 
 84c7941:	c7 44 24 08 61 02 00 	movl   $0x261,0x8(%esp)
 84c7948:	00 
 84c7949:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c794c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c7950:	89 04 24             	mov    %eax,(%esp)
 84c7953:	e8 26 13 c3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84c7958:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c795b:	89 04 24             	mov    %eax,(%esp)
 84c795e:	e8 b7 51 02 00       	call   84ecb1a <_ZN5CUser19getAcccountHackInfoEv>
 84c7963:	89 04 24             	mov    %eax,(%esp)
 84c7966:	e8 b5 16 db ff       	call   8279020 <_ZN19Secu_AccountHacking12setLoginTimeEv>
 84c796b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c796e:	05 25 41 00 00       	add    $0x4125,%eax
 84c7973:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7977:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c797a:	89 04 24             	mov    %eax,(%esp)
 84c797d:	e8 7e 7f 1c 00       	call   868f900 <_ZN5CUser20loadInformNoticeFlagEPc>
 84c7982:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7985:	89 04 24             	mov    %eax,(%esp)
 84c7988:	e8 59 92 1c 00       	call   8690be6 <_ZN5CUser19ValidateStrikerInfoEv>
 84c798d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7990:	89 04 24             	mov    %eax,(%esp)
 84c7993:	e8 8e 86 1c 00       	call   8690026 <_ZN5CUser20CalcurateManageLevelEv>
 84c7998:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c799b:	89 04 24             	mov    %eax,(%esp)
 84c799e:	e8 61 85 1c 00       	call   868ff04 <_ZN5CUser21CalcurateUserMaxLevelEv>
 84c79a3:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c79a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c79aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c79ad:	89 04 24             	mov    %eax,(%esp)
 84c79b0:	e8 b9 98 1c 00       	call   869126e <_ZN5CUser12SetBingoDataER14SIG_LOGIN_DATA>
 84c79b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c79b8:	89 04 24             	mov    %eax,(%esp)
 84c79bb:	e8 fe 98 1c 00       	call   86912be <_ZN5CUser13initBingoDataEv>
 84c79c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c79c3:	89 04 24             	mov    %eax,(%esp)
 84c79c6:	e8 d9 2f 1c 00       	call   868a9a4 <_ZN5CUser24sendReturnUserFirstLoginEv>
 84c79cb:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c79ce:	05 40 41 00 00       	add    $0x4140,%eax
 84c79d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c79d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c79da:	89 04 24             	mov    %eax,(%esp)
 84c79dd:	e8 cc a1 1c 00       	call   8691bae <_ZN5CUser24SetGrowthWeaponEventInfoERK23SIG_GROWTH_WEAPON_EVENT>
 84c79e2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c79e5:	05 54 41 00 00       	add    $0x4154,%eax
 84c79ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c79ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c79f1:	89 04 24             	mov    %eax,(%esp)
 84c79f4:	e8 e5 a2 1c 00       	call   8691cde <_ZN5CUser26SetGrowthCreatureEventInfoERK30SIG_GIVE_GROWTH_CREATURE_EVENT>
 84c79f9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c79fc:	05 38 43 00 00       	add    $0x4338,%eax
 84c7a01:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7a05:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7a08:	89 04 24             	mov    %eax,(%esp)
 84c7a0b:	e8 ba a3 1c 00       	call   8691dca <_ZN5CUser32setCharacLevelUpGift_AccountOnceER29SIG_LEVELUP_GIFT_ACCOUNT_ONCE>
 84c7a10:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7a13:	89 04 24             	mov    %eax,(%esp)
 84c7a16:	e8 4f a4 1c 00       	call   8691e6a <_ZN5CUser13sendEventInfoEv>
 84c7a1b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7a22:	00 
 84c7a23:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7a26:	89 04 24             	mov    %eax,(%esp)
 84c7a29:	e8 6a b7 1c 00       	call   8693198 <_ZN5CUser23SetEventCreateDnfRewardEb>
 84c7a2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7a31:	89 04 24             	mov    %eax,(%esp)
 84c7a34:	e8 35 29 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c7a39:	89 c3                	mov    %eax,%ebx
 84c7a3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7a3e:	89 04 24             	mov    %eax,(%esp)
 84c7a41:	e8 50 12 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c7a46:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c7a4a:	89 04 24             	mov    %eax,(%esp)
 84c7a4d:	e8 8e 44 c9 ff       	call   815bee0 <_ZN25DBSelectCreateDnfUserInfo11makeRequestEij>
 84c7a52:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7a55:	c6 80 32 ec 08 00 00 	movb   $0x0,0x8ec32(%eax)
 84c7a5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7a5f:	89 04 24             	mov    %eax,(%esp)
 84c7a62:	e8 b7 73 ca ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 84c7a67:	89 04 24             	mov    %eax,(%esp)
 84c7a6a:	e8 99 b5 ca ff       	call   8173008 <_ZN6Taiwan14GarenaAuthData10getGcaTypeEv>
 84c7a6f:	0f b7 c0             	movzwl %ax,%eax
 84c7a72:	89 04 24             	mov    %eax,(%esp)
 84c7a75:	e8 e0 b5 ca ff       	call   817305a <_ZN6Taiwan15GarenaCyberCafeEt>
 84c7a7a:	84 c0                	test   %al,%al
 84c7a7c:	74 0b                	je     84c7a89 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x27f5>
 84c7a7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7a81:	89 04 24             	mov    %eax,(%esp)
 84c7a84:	e8 fd 4e c9 ff       	call   815c986 <_ZN25DBSelectPcroomDailyReward11makeRequestEP5CUser>
 84c7a89:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c7a8e:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 84c7a94:	89 04 24             	mov    %eax,(%esp)
 84c7a97:	e8 36 4e 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c7a9c:	eb 36                	jmp    84c7ad4 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2840>
 84c7a9e:	89 d3                	mov    %edx,%ebx
 84c7aa0:	89 c6                	mov    %eax,%esi
 84c7aa2:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 84c7aa8:	89 04 24             	mov    %eax,(%esp)
 84c7aab:	e8 22 4e 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c7ab0:	89 f0                	mov    %esi,%eax
 84c7ab2:	89 da                	mov    %ebx,%edx
 84c7ab4:	eb 00                	jmp    84c7ab6 <_ZN15Inter_LoginInfo12dispatch_sigEP5CUserPci+0x2822>
 84c7ab6:	89 d3                	mov    %edx,%ebx
 84c7ab8:	89 c6                	mov    %eax,%esi
 84c7aba:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c7ac0:	89 04 24             	mov    %eax,(%esp)
 84c7ac3:	e8 b8 63 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c7ac8:	89 f0                	mov    %esi,%eax
 84c7aca:	89 da                	mov    %ebx,%edx
 84c7acc:	89 04 24             	mov    %eax,(%esp)
 84c7acf:	e8 7c bc 61 00       	call   8ae3750 <_Unwind_Resume>
 84c7ad4:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 84c7ada:	89 04 24             	mov    %eax,(%esp)
 84c7add:	e8 9e 63 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c7ae2:	89 d8                	mov    %ebx,%eax
 84c7ae4:	81 c4 7c 02 00 00    	add    $0x27c,%esp
 84c7aea:	5b                   	pop    %ebx
 84c7aeb:	5e                   	pop    %esi
 84c7aec:	5f                   	pop    %edi
 84c7aed:	5d                   	pop    %ebp
 84c7aee:	c3                   	ret
 84c7aef:	90                   	nop

```

```c
// Inter_LoginInfo::dispatch_sig @ 0x84c5294

/* Inter_LoginInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoginInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  user_gold_info *puVar1;
  SIG_LOGIN_DATA *pSVar2;
  SIG_LOGIN_DATA *pSVar3;
  SIG_LOGIN_DATA SVar4;
  SIG_LOGIN_DATA SVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  uchar uVar12;
  undefined1 uVar13;
  SIG_LOGIN_DATA SVar14;
  short sVar15;
  short sVar16;
  ushort uVar17;
  GameWorld *pGVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  CGameManager *pCVar22;
  char *pcVar23;
  RestrictGeolocation *pRVar24;
  Stream *pSVar25;
  CStreamGuard *pCVar26;
  CHackAnalyzer *pCVar38;
  char *pcVar27;
  CEnvironment *pCVar28;
  int iVar29;
  CMonitorServerProxy *this;
  CGuildServerProxy *this_00;
  Secu_GoldControl *this_01;
  CDungeonGainedGold *this_02;
  CSecurityCard *this_03;
  CPad *pCVar30;
  long lVar31;
  uint uVar32;
  CHades *pCVar33;
  long lVar34;
  int *piVar35;
  Secu_AccountHacking *this_04;
  GarenaAuthData *this_05;
  undefined4 uVar36;
  CUser *pCVar39;
  undefined1 uVar37;
  Packet_Monitor_UDP_Login local_20f [10];
  undefined4 local_205;
  undefined4 local_201;
  undefined1 local_1fd;
  undefined1 local_1ec;
  undefined4 local_1eb;
  undefined4 local_1e7;
  tm local_1dc;
  tm local_1b0;
  CStreamGuard local_184 [8];
  CommonTime local_17c [16];
  time_t local_16c;
  char local_168 [16];
  char local_158 [16];
  CStreamGuard local_148 [8];
  char local_140 [16];
  PacketGuard local_130 [12];
  cMyTrace local_124 [16];
  cMyTrace local_114 [16];
  cMyTrace local_104 [16];
  cMyTrace local_f4 [16];
  cMyTrace local_e4 [16];
  cMyTrace local_d4 [16];
  cMyTrace local_c4 [16];
  cMyTrace local_b4 [16];
  string local_a4 [7];
  allocator<char> local_9d;
  string local_9c [7];
  allocator<char> local_95;
  string local_94 [7];
  allocator<char> local_8d;
  string local_8c [7];
  allocator<char> local_85;
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  SIG_LOGIN_DATA *local_64;
  CUser *local_60;
  byte local_59;
  SIG_REQ_LOAD_GAME_OPTION *local_58;
  tm *local_54;
  int local_50;
  int local_4c;
  int local_48;
  time_t local_44;
  tm *local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_2e;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_64 = (SIG_LOGIN_DATA *)param_3;
  pGVar18 = (GameWorld *)G_GameWorld();
  iVar19 = GameWorld::GetChannelType(pGVar18);
  pCVar39._0_2_ = SUB42(param_2,0);
  if (iVar19 == 0xe) {
    CUser::SetServerGroup(pCVar39._0_2_,(char)*(undefined4 *)(local_64 + 0x39d0));
  }
  pGVar18 = (GameWorld *)G_GameWorld();
  iVar19 = GameWorld::GetChannelType(pGVar18);
  if (iVar19 == 7) {
    CUser::SetServerGroup(pCVar39._0_2_,(char)*(undefined4 *)(local_64 + 0x39a8));
  }
  CUser::setWebAddress((CUser *)param_2,(char *)(local_64 + 0x3a3a));
  PacketGuard::PacketGuard(local_130);
                    /* try { // try from 084c5342 to 084c5c71 has its CatchHandler @ 084c7ab6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_130,1,1);
  if (*(int *)(local_64 + 0xb8) == 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,6);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_124,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1b0a,0);
    cMyTrace::operator()(local_124,"pInfo->err_code == SIG_LOGIN_DATA::E_CANTFIND",0x74);
    CUser::DisConnSig(pCVar39._0_2_,0xb,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 8) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x60);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    CUser::DisConnSig(pCVar39._0_2_,0x21,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if ((9 < *(int *)(local_64 + 0xb8)) && (*(int *)(local_64 + 0xb8) < 0xd)) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    local_59 = (char)*(undefined4 *)(local_64 + 0xb8) - 0x26;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,(uint)local_59);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,*(int *)(local_64 + 0xd8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_114,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1b67,0);
    cMyTrace::operator()(local_114,"pInfo->err_code == SIG_LOGIN_DATA::PUNISH_REASON",0xa4);
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 4) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,8);
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_130,
               *(int *)(local_64 + *(int *)(local_64 + 0x3a50) * 0x18 + 0x3a68));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_104,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1b77,0);
    cMyTrace::operator()(local_104,"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH",0xd8);
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 5) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x48);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,*(int *)(local_64 + 0x3914));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_f4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1ba0,0);
    cMyTrace::operator()(local_f4,"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH_MOUSE",4);
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 6) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x49);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_e4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1baa,0);
    cMyTrace::operator()(local_e4,"pInfo->err_code == SIG_LOGIN_DATA::E_AUTH_MOUSE_DENY",0x34);
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 9) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0xa6);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    cMyTrace::cMyTrace(local_d4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1bb4,0);
    cMyTrace::operator()(local_d4,"pInfo->err_code == SIG_LOGIN_DATA::E_PASSPAD_WRONG_VERSION",0x6c)
    ;
    CUser::DisConnSig(pCVar39._0_2_,0x1a,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  if (*(int *)(local_64 + 0xb8) == 7) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x5f);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    CUser::DisConnSig(pCVar39._0_2_,0x20,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  CUser::setHangameUser((CUser *)param_2,(bool)local_64[0x38dd]);
  if (*(int *)(local_64 + 0xb8) != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    uVar36 = *(undefined4 *)(local_64 + 0xb8);
    cMyTrace::cMyTrace(local_c4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                       0x1bf2,0);
    cMyTrace::operator()
              (local_c4,
               "[Inter_LoginInfo::dispatch_sig] Abnormal LoginError: SIG_LOGIN_DATA::ERROR_OK(%d)",
               0xa8,uVar36);
    CUser::DisConnSig(pCVar39._0_2_,0xe,1,0);
    uVar36 = 0;
    goto LAB_084c7ad4;
  }
  uVar20 = CUser::get_unique_id((CUser *)param_2);
  sVar15 = CUser::GetIncreID((CUser *)param_2);
  sVar16 = CUser::GetSlotIDX((CUser *)param_2);
  uVar36 = CUser::GetUID((CUser *)param_2);
  uVar21 = NumberToString(*(uint *)(local_64 + 0xc0),0);
  cMyTrace::cMyTrace(local_b4,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",0x1bf6
                     ,0);
  cMyTrace::operator()
            (local_b4,"[USER LOGIN] DB ID : %s (UID: %d)(SlotIDX: %d)(IncreID: %d)(SocketID: %d)\n",
             0xfc,uVar21,uVar36,(int)sVar16,(int)sVar15,uVar20 & 0xffff);
  uVar20 = *(uint *)(local_64 + 0xc0);
  pCVar22 = (CGameManager *)G_CGameManager();
  local_60 = (CUser *)CGameManager::GetUserByAccId(pCVar22,uVar20);
  if (local_60 != (CUser *)0x0) {
    iVar19 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(local_60 + 0xe0));
    if ((iVar19 == -1) || (iVar19 = CUser::get_state(local_60), iVar19 == 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      CUser::SendCmdErrorPacket(SUB42(local_60,0),1,0x12);
      CUser::DisConnSig(SUB42(local_60,0),0xc,1,0);
      CUser::SendCmdErrorPacket(pCVar39._0_2_,1,0x12);
      uVar36 = 0x1c18;
      goto LAB_084c7ad4;
    }
  }
  CUser::set_acc_info((CUser *)param_2,*(uint *)(local_64 + 0xc0),(char *)local_64);
  local_140[0] = '\0';
  local_140[1] = '\0';
  local_140[2] = '\0';
  local_140[3] = '\0';
  local_140[4] = '\0';
  local_140[5] = '\0';
  local_140[6] = '\0';
  local_140[7] = '\0';
  local_140[8] = '\0';
  local_140[9] = '\0';
  local_140[10] = '\0';
  local_140[0xb] = '\0';
  local_140[0xc] = '\0';
  local_140[0xd] = '\0';
  local_140[0xe] = '\0';
  local_140[0xf] = '\0';
  CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(param_2 + 0xe0),local_140,0x10);
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  bVar9 = false;
  if (local_64[0xb5] == (SIG_LOGIN_DATA)0x1) {
LAB_084c5d92:
    bVar8 = false;
  }
  else {
    std::allocator<char>::allocator();
    bVar7 = true;
                    /* try { // try from 084c5d18 to 084c5d83 has its CatchHandler @ 084c5da8 */
    std::string::string(local_a4,local_140,(allocator *)&local_9d);
    bVar6 = true;
    std::allocator<char>::allocator();
    bVar11 = true;
    pcVar23 = (char *)CUser::get_acc_name((CUser *)param_2);
    std::string::string(local_9c,pcVar23,(allocator *)&local_95);
    bVar9 = true;
    pRVar24 = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
    cVar10 = RestrictGeolocation::isAllow(pRVar24,(string)local_9c,(string)local_a4);
    if (cVar10 == '\x01') goto LAB_084c5d92;
    bVar8 = true;
  }
  if (bVar9) {
                    /* try { // try from 084c5de2 to 084c5de6 has its CatchHandler @ 084c5de9 */
    std::string::~string(local_9c);
  }
  if (bVar11) {
    std::allocator<char>::~allocator(&local_95);
  }
  if (bVar6) {
                    /* try { // try from 084c5e62 to 084c5e66 has its CatchHandler @ 084c5e69 */
    std::string::~string(local_a4);
  }
  if (bVar7) {
    std::allocator<char>::~allocator(&local_9d);
  }
  if (bVar8) {
                    /* try { // try from 084c5eb4 to 084c5f21 has its CatchHandler @ 084c7ab6 */
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_130,0x41);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_130,true);
    CUser::Send((CUser *)param_2,local_130);
    CUser::DisConnSig(pCVar39._0_2_,0x15,1,0);
  }
  pGVar18 = (GameWorld *)G_GameWorld();
  cVar10 = GameWorld::IsIntegratedPvPBaseChannel(pGVar18);
  if (cVar10 != '\0') {
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    local_158[8] = '\0';
    local_158[9] = '\0';
    local_158[10] = '\0';
    local_158[0xb] = '\0';
    local_158[0xc] = '\0';
    local_158[0xd] = '\0';
    local_158[0xe] = '\0';
    local_158[0xf] = '\0';
    std::allocator<char>::allocator();
                    /* try { // try from 084c5f85 to 084c5f89 has its CatchHandler @ 084c5fdd */
    std::string::string(local_94,local_140,(allocator *)&local_8d);
                    /* try { // try from 084c5f8a to 084c5fb2 has its CatchHandler @ 084c5fb5 */
    pRVar24 = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
    RestrictGeolocation::getCountryCode(pRVar24,local_158,0x10,(string)local_94);
                    /* try { // try from 084c5fd6 to 084c5fda has its CatchHandler @ 084c5fdd */
    std::string::~string(local_94);
    std::allocator<char>::~allocator(&local_8d);
    std::allocator<char>::allocator();
                    /* try { // try from 084c6031 to 084c6035 has its CatchHandler @ 084c6089 */
    std::string::string(local_8c,local_158,(allocator *)&local_85);
                    /* try { // try from 084c6036 to 084c605e has its CatchHandler @ 084c6061 */
    pRVar24 = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
    bVar11 = (bool)RestrictGeolocation::isAllow(pRVar24,(string)local_8c);
    CUser::setAllowLocationGeoState((CUser *)param_2,bVar11);
                    /* try { // try from 084c6082 to 084c6086 has its CatchHandler @ 084c6089 */
    std::string::~string(local_8c);
    std::allocator<char>::~allocator(&local_85);
  }
                    /* try { // try from 084c60c0 to 084c60f5 has its CatchHandler @ 084c7ab6 */
  CUser::set_state(pCVar39._0_2_,2);
  pGVar18 = (GameWorld *)G_GameWorld();
  uVar37 = SUB41(param_2,0);
  GameWorld::InsertLoginUser(pGVar18,(CUser *)param_2);
  pSVar25 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x1c7e);
  CStreamGuard::CStreamGuard(local_148,pSVar25,true);
  pCVar26 = (CStreamGuard *)CStreamGuard::operator*(local_148);
                    /* try { // try from 084c6129 to 084c70e1 has its CatchHandler @ 084c7a9e */
  CStreamGuard::operator<<(pCVar26,0x12e);
  iVar19 = CUser::GetUID((CUser *)param_2);
  pCVar26 = (CStreamGuard *)CStreamGuard::operator*(local_148);
  CStreamGuard::operator<<(pCVar26,iVar19);
  pCVar26 = (CStreamGuard *)CStreamGuard::operator->(local_148);
  local_58 = CStreamGuard::GetInBuffer<SIG_REQ_LOAD_GAME_OPTION>(pCVar26);
  uVar36 = CUser::get_acc_id((CUser *)param_2);
  *(undefined4 *)local_58 = uVar36;
  MsgQueueMgr::put((MsgQueueMgr *)GlobalData::s_msgq_mgr,2,local_148);
  pCVar22 = (CGameManager *)G_CGameManager();
  CGameManager::insertUserByAccID(pCVar22,(CUser *)param_2);
  CUser::SetUserDetailInfo
            ((CUser *)param_2,(char *)(local_64 + 0x2184),(char *)(local_64 + 0x2284),
             (char *)(local_64 + 0x2204));
  CUser::SetBirth((CUser *)param_2,(char *)(local_64 + 0x2284));
  for (local_34 = 0; local_34 < *(int *)(local_64 + 0x2294); local_34 = local_34 + 1) {
    local_2e = *(int *)(local_64 + 0x2294) + -1 == local_34;
    WongWork::CHandlePremium::handleSetUserPremium
              ((undefined2)pCVar39._0_2_,
               (char)*(undefined4 *)(local_64 + (local_34 + 0x229) * 0x10 + 8),
               *(undefined4 *)(local_64 + (local_34 + 0x229) * 0x10 + 0xc),
               *(undefined4 *)(local_64 + (local_34 + 0x229) * 0x10 + 0x10),
               *(undefined4 *)(local_64 + (local_34 + 0x229) * 0x10 + 0x14),local_2e);
  }
  CUser::setRegDate((CUser *)param_2,*(uint *)(local_64 + 0xcc));
  CUser::setRegTime((CUser *)param_2,*(long *)(local_64 + 0xd4));
  if (0 < *(int *)(local_64 + 0xdc)) {
    CUser::SetCharacInfo((CUser *)param_2,*(int *)(local_64 + 0xdc),(char *)(local_64 + 0xe0));
    CUser::SetNeedCheckOverEquipItem((CUser *)param_2);
  }
  if (0 < *(int *)(local_64 + 0x15b0)) {
    CUser::SetCharacMercenaryInfo
              ((CUser *)param_2,*(int *)(local_64 + 0x15b0),
               (CHARAC_LOAD_MERCENARY *)(local_64 + 0x15b4));
    local_2d = '\x01';
    local_2c = 0;
    while( true ) {
      if ((local_2c < *(int *)(local_64 + 0x15b0)) && (local_2c < 0x24)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) goto LAB_084c63aa;
      if (*(int *)(local_64 + local_2c * 0x54 + 0x15dc) != 0) break;
      local_2c = local_2c + 1;
    }
    local_2d = '\0';
LAB_084c63aa:
    if (local_2d != '\0') {
      pCVar38._0_2_ = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar38._0_2_,uVar37,0x1aa,1,0,0);
    }
  }
  for (local_28 = 0; local_28 < (int)(uint)*(ushort *)(local_64 + 0x293a); local_28 = local_28 + 1)
  {
    CUser::SetRestrictedGoods((CUser *)param_2,*(int *)(local_64 + (local_28 + 0xa4c) * 4 + 0xc));
  }
  pcVar23 = (char *)CUser::GetSsnString((CUser *)param_2);
  uVar12 = CUser::getSex((CUser *)param_2);
  pcVar27 = (char *)CNetwork<4096,450000>::GetPeerIP2
                              ((CNetwork<4096,450000> *)(param_2 + 0xe0),local_168,0x10);
  pCVar28 = (CEnvironment *)G_CEnvironment();
  iVar19 = CEnvironment::get_channel_no(pCVar28);
  uVar20 = *(uint *)(local_64 + 0xc0);
  iVar29 = CUser::GetUID((CUser *)param_2);
  uVar13 = CUser::GetServerGroup((CUser *)param_2);
  this = (CMonitorServerProxy *)
         CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                   ((CServerProxyMgr<CMonitorServerProxy> *)GlobalData::s_monitor_proxy_mgr,uVar13);
  CMonitorServerProxy::SendLogin(this,iVar29,uVar20,iVar19,pcVar27,uVar12,pcVar23);
  pcVar23 = (char *)CUser::GetSsnString((CUser *)param_2);
  uVar12 = CUser::getSex((CUser *)param_2);
  pcVar27 = (char *)CNetwork<4096,450000>::GetPeerIP2
                              ((CNetwork<4096,450000> *)(param_2 + 0xe0),local_168,0x10);
  pCVar28 = (CEnvironment *)G_CEnvironment();
  iVar19 = CEnvironment::get_channel_no(pCVar28);
  uVar20 = *(uint *)(local_64 + 0xc0);
  iVar29 = CUser::GetUID((CUser *)param_2);
  uVar13 = CUser::GetServerGroup((CUser *)param_2);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                      ((CServerProxyMgr<CGuildServerProxy> *)GlobalData::s_guild_proxy_mgr,uVar13);
  CGuildServerProxy::SendLogin(this_00,iVar29,uVar20,iVar19,pcVar27,uVar12,pcVar23);
  iVar19 = G_CEnvironment();
  iVar19 = *(int *)(iVar19 + 0x378);
  pCVar28 = (CEnvironment *)G_CEnvironment();
  iVar29 = CEnvironment::get_channel_no(pCVar28);
  CDoubleConnCheckServerProxy::SendLogin
            (GlobalData::s_double_check_proxy,*(uint *)(local_64 + 0xc0),iVar29,iVar19);
  puVar1 = (user_gold_info *)(local_64 + 0x3f64);
  this_01 = (Secu_GoldControl *)CUser::GetGoldControl((CUser *)param_2);
  Secu_GoldControl::SetInfo(this_01,puVar1);
  for (local_24 = 0; local_24 < *(int *)(local_64 + 0x3a50); local_24 = local_24 + 1) {
    if ((99 < *(int *)(local_64 + local_24 * 0x18 + 0x3a54)) &&
       (*(int *)(local_64 + local_24 * 0x18 + 0x3a54) < 200)) {
      iVar19 = *(int *)(local_64 + local_24 * 0x18 + 0x3a68);
      iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if ((iVar19 < iVar29) && (*(int *)(local_64 + local_24 * 0x18 + 0x3a68) != 0)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if ((bVar11) && (*(int *)(local_64 + local_24 * 0x18 + 0x3a54) == 0x65)) {
        CUser::setStdDropRate((CUser *)param_2,*(int *)(local_64 + local_24 * 0x18 + 0x3a5c));
      }
    }
  }
  for (local_20 = 0; local_20 < *(int *)(local_64 + 0x3a50); local_20 = local_20 + 1) {
    iVar19 = *(int *)(local_64 + local_20 * 0x18 + 0x3a68);
    iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if ((iVar19 < iVar29) && (*(int *)(local_64 + local_20 * 0x18 + 0x3a68) != 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 4) {
        CUser::SetTradePunishType((CUser *)param_2,8);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0xb) {
        CUser::SetTradePunishType((CUser *)param_2,1);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0xc) {
        CUser::SetTradePunishType((CUser *)param_2,4);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0xd) {
        CUser::SetTradePunishType((CUser *)param_2,0x20);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0xe) {
        CUser::SetTradePunishType((CUser *)param_2,2);
      }
      if (*(int *)(local_64 + local_20 * 0x18 + 0x3a54) == 0x67) {
        CUser::SetTradePunishType((CUser *)param_2,0x80);
      }
    }
  }
  CUser::setTotalHackUserTradeCnt((CUser *)param_2,*(uint *)(local_64 + 0x3a24));
  uVar36 = *(undefined4 *)(local_64 + 0x3a28);
  CUser::setTotalHackUserTradeGold
            (CONCAT26((short)((uint)uVar36 >> 0x10),
                      CONCAT15((char)((uint)uVar36 >> 8),CONCAT14((char)uVar36,param_2))));
  cVar10 = WongWork::CAutoPunishRuleBlackIPMgr::isBlackIP
                     (GlobalData::g_autoPunishRuleBlackIPMgr,(char *)(local_64 + 0xa1));
  if (cVar10 != '\0') {
    pCVar38._0_2_ = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar38._0_2_,uVar37,0x32a,1,0,0);
  }
  CUser::setRestingUserRestrict((CUser *)param_2,(bool)local_64[0x3f0c]);
  CUser::setHumanCertifyErrorCnt((CUser *)param_2,0);
  CUser::setHumanCertified((CUser *)param_2,true);
  local_16c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_54 = localtime_r(&local_16c,&local_1b0);
  local_50 = local_54->tm_year;
  local_4c = local_54->tm_mon;
  local_48 = local_54->tm_mday;
  uVar20 = *(uint *)(local_64 + 0x395c);
  this_02 = (CDungeonGainedGold *)CUser::getDungeonGainedGold((CUser *)param_2);
  CDungeonGainedGold::setGainedGold(this_02,uVar20);
  CUserCharacInfo::SetReliablePerson((CUserCharacInfo *)param_2,true);
  CUserCharacInfo::SetReliablePerson
            ((CUserCharacInfo *)param_2,local_64[0x3964] != (SIG_LOGIN_DATA)0x0);
  local_54->tm_hour = 6;
  local_44 = mktime(local_54);
  if (local_44 < *(int *)(local_64 + 0x3958)) {
    CUserCharacInfo::SetOverTradeGoldCount((CUserCharacInfo *)param_2,*(uint *)(local_64 + 0x3968));
  }
  else {
    CUserCharacInfo::SetOverTradeGoldCount((CUserCharacInfo *)param_2,0);
  }
  local_40 = localtime_r((time_t *)(local_64 + 0x3958),&local_1dc);
  if (((local_40->tm_year == local_50) && (local_40->tm_mon == local_4c)) &&
     (local_40->tm_mday == local_48)) {
    CUser::SetReportMannerlessUserCount((CUser *)param_2,*(int *)(local_64 + 0x3960));
  }
  else {
    CUser::SetReportMannerlessUserCount((CUser *)param_2,0);
  }
  CUser::SetSchoolNo((CUser *)param_2,*(uint *)(local_64 + 0x396c));
  CUser::SetRating((CUser *)param_2,*(float *)(local_64 + 0x3970));
  CUser::SetSchoolName((CUser *)param_2,(char *)(local_64 + 0x3974));
  CUser::SetDailyBadge((CUser *)param_2,(short *)(local_64 + 0x399c));
  CUser::SetTutorialSkipable((CUser *)param_2,(uchar)local_64[0x39a2]);
  CommonTime::SetCurTime(local_17c);
  CUser::SetAge((CUser *)param_2,((int)(char)local_17c[0] - *(int *)(local_64 + 200)) + 0x7d1);
  CUser::setSecuReward((CUser *)param_2,(bool)local_64[0x3f0e]);
  CUser::setSecuType((CUser *)param_2,(uchar)local_64[0x3f0d]);
  CUser::setRewardType((CUser *)param_2,(uchar)local_64[0x3f0f]);
  CUser::setSecuGrade((CUser *)param_2,(byte)local_64[0x3f0d] & 0x27);
  if (local_64[0x39e0] != (SIG_LOGIN_DATA)0x0) {
    pSVar2 = local_64 + 0x3a18;
    iVar19 = *(int *)(local_64 + 0x3a14);
    SVar14 = local_64[0x39ec];
    iVar29 = *(int *)(local_64 + 0x39e4);
    SVar4 = local_64[0x39e1];
    SVar5 = local_64[0x39e0];
    pSVar3 = local_64 + 0x39ed;
    this_03 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
    WongWork::CSecurityCard::setSecurityCardInfo
              (this_03,(char *)pSVar3,(bool)SVar5,(bool)SVar4,iVar29,(int)(char)SVar14,iVar19,
               (char *)pSVar2);
  }
  SVar14 = local_64[0x390c];
  pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
  Sanicova::CPad::setVersionInfo(pCVar30,(char)SVar14);
  if (local_64[0x38e0] != (SIG_LOGIN_DATA)0x0) {
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setActivate(pCVar30,true);
    iVar19 = *(int *)(local_64 + 0x3918);
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setCancelCnt(pCVar30,iVar19);
    SVar14 = local_64[0x390c];
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setVersionInfo(pCVar30,(char)SVar14);
    SVar14 = local_64[0x390e];
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setCertified(pCVar30,(bool)SVar14);
    lVar34 = *(long *)(local_64 + 0x3910);
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setCheckTime(pCVar30,lVar34);
    lVar31 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar34 = *(long *)(local_64 + 0x3958);
    iVar19 = G_CEnvironment();
    cVar10 = CheckDailyScheduleTime(*(int *)(iVar19 + 0x37c),lVar34,lVar31);
    if (cVar10 == '\0') {
      iVar19 = *(int *)(local_64 + 0x3914);
      pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setFailCnt(pCVar30,iVar19);
    }
    else if (0 < *(int *)(local_64 + 0x3914)) {
      pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setFailCnt(pCVar30,0);
      pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setCancelCnt(pCVar30,0);
      pcVar23 = (char *)CUser::getWebAddress((CUser *)param_2);
      pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
      uVar20 = Sanicova::CPad::getFailCnt(pCVar30);
      uVar32 = CUser::get_acc_id((CUser *)param_2);
      DB_PassPadUpdateFailCnt::makeRequest(uVar32,uVar20,pcVar23);
      cMyTrace::cMyTrace(local_84,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",
                         0x1df5,0);
      cMyTrace::operator()(local_84,"GOBLIN PAD RESET OK!!!",0x47);
    }
    pSVar2 = local_64 + 0x38e1;
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setPassword(pCVar30,(char *)pSVar2);
    pCVar33 = (CHades *)CUser::getHades((CUser *)param_2);
    XNuclear::CHades::Send_Login(pCVar33);
    pCVar33 = (CHades *)CUser::getHades((CUser *)param_2);
    XNuclear::CHades::StdCateUpdate(pCVar33,3,0);
    SVar14 = local_64[0x390d];
    pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::setAdvideChangePwd(pCVar30,(bool)SVar14);
  }
  pCVar30 = (CPad *)CUser::getPad((CUser *)param_2);
  Sanicova::CPad::setCertified(pCVar30,true);
  if (*(short *)(local_64 + 0x38de) == 0xd) {
    CUser::setPunishTradeAlert((CUser *)param_2,0xe7);
  }
  else if (*(short *)(local_64 + 0x38de) == 0xe) {
    CUser::setPunishTradeAlert((CUser *)param_2,0xe8);
  }
  else {
    CUser::setPunishTradeAlert((CUser *)param_2,0);
  }
  CUser::setOnlinePreliminaryCharacNo((CUser *)param_2,*(uint *)(local_64 + 0x39d4));
  CUser::setOnlinePreliminaryServerGroup(pCVar39._0_2_,(char)*(undefined4 *)(local_64 + 0x39d0));
  CUser::setOnlinePreliminaryPlayType((CUser *)param_2,*(int *)(local_64 + 0x39d8));
  uVar36 = *(undefined4 *)(local_64 + 0x39d8);
  uVar21 = NumberToString(*(uint *)(local_64 + 0xc0),0);
  cMyTrace::cMyTrace(local_74,"virtual int Inter_LoginInfo::dispatch_sig(CUser*, char*, int)",0x1e33
                     ,0);
  cMyTrace::operator()(local_74,"OnlinePreliminary m_id(%s), play_type(%d)",0x60,uVar21,uVar36);
  if ((*(int *)(local_64 + 0x39ac) == 0) || (*(int *)(local_64 + 0x39a8) == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  CUser::setTournamentAccount((CUser *)param_2,bVar11);
  pGVar18 = (GameWorld *)G_GameWorld();
  iVar19 = GameWorld::GetChannelType(pGVar18);
  if (iVar19 == 7) {
    Packet_Monitor_UDP_Login::Packet_Monitor_UDP_Login(local_20f);
    pSVar25 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x1e3b);
    CStreamGuard::CStreamGuard(local_184,pSVar25,true);
    pCVar26 = (CStreamGuard *)CStreamGuard::operator*(local_184);
                    /* try { // try from 084c7115 to 084c71d7 has its CatchHandler @ 084c71da */
    CStreamGuard::operator<<(pCVar26,0x41);
    iVar19 = CUser::GetUID((CUser *)param_2);
    pCVar26 = (CStreamGuard *)CStreamGuard::operator*(local_184);
    CStreamGuard::operator<<(pCVar26,iVar19);
    local_205 = CUser::GetUID((CUser *)param_2);
    local_201 = CUser::get_acc_id((CUser *)param_2);
    pCVar28 = (CEnvironment *)G_CEnvironment();
    local_1fd = CEnvironment::get_channel_no(pCVar28);
    local_1ec = 1;
    local_1eb = 0;
    local_1e7 = 0;
    pCVar26 = (CStreamGuard *)CStreamGuard::operator->(local_184);
    CStreamGuard::put_binary(pCVar26,local_20f,0x33);
    MsgQueueMgr::put((MsgQueueMgr *)GlobalData::s_msgq_mgr,1,local_184);
                    /* try { // try from 084c71fe to 084c7a88 has its CatchHandler @ 084c7a9e */
    CStreamGuard::~CStreamGuard(local_184);
  }
  CUser::setClientVersion((CUser *)param_2,*(uint *)(local_64 + 0x3a34));
  CUser::SetAccountLastPlayTime((CUser *)param_2,*(long *)(local_64 + 0x3958));
  CUser::setJoinedSchoolPointEvent((CUser *)param_2,(bool)local_64[0x3a4a]);
  param_2[0x8e47c] = '\0';
  pcVar23 = (char *)CNetwork<4096,450000>::GetPeerIP2
                              ((CNetwork<4096,450000> *)(param_2 + 0xe0),param_2 + 0x8e418,0x14);
  uVar36 = WongWork::CBlackIPMonitor::getPunishType(GlobalData::g_blackIPMonitor,pcVar23);
  *(undefined4 *)(param_2 + 0x8e478) = uVar36;
  if ((*(uint *)(param_2 + 0x8e478) & 1) == 0) {
LAB_084c7301:
    bVar11 = false;
  }
  else {
    uVar13 = CNetwork<4096,450000>::GetPeerIP2
                       ((CNetwork<4096,450000> *)(param_2 + 0xe0),param_2 + 0x8e418,0x14);
    iVar19 = WongWork::CBlackIPMonitor::GetEndTime(SUB42(GlobalData::g_blackIPMonitor,0),uVar13,1);
    iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar19 < iVar29) goto LAB_084c7301;
    bVar11 = true;
  }
  if (bVar11) {
    CUser::SetTradePunishType((CUser *)param_2,0x10);
    uVar20 = CUser::get_acc_id((CUser *)param_2);
    DB_BlackipPrivateSecurityValuation::makeRequest(uVar20);
  }
  local_3c = *(int *)(local_64 + 0x3a4c);
  lVar31 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  lVar34 = *(long *)(local_64 + 0x3958);
  iVar19 = G_CEnvironment();
  cVar10 = CheckDailyScheduleTime(*(int *)(iVar19 + 0x37c),lVar34,lVar31);
  if (cVar10 == '\0') {
    *(int *)(local_64 + 0x3a4c) = *(int *)(local_64 + 0x3a4c) + -1;
  }
  else {
    *(undefined4 *)(local_64 + 0x3a4c) = 0;
  }
  WongWork::CMCAPManager::incPoint((CMCAPManager *)(param_2 + 0x8e3f0),*(int *)(local_64 + 0x3a4c));
  iVar19 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_2 + 0x8e3f0));
  if (iVar19 == local_3c) {
    WongWork::CMCAPManager::disableCleanPadPoint((CMCAPManager *)(param_2 + 0x8e3f0));
  }
  if ((*(uint *)(param_2 + 0x8e478) & 2) == 0) {
LAB_084c7446:
    bVar11 = false;
  }
  else {
    uVar13 = CNetwork<4096,450000>::GetPeerIP2
                       ((CNetwork<4096,450000> *)(param_2 + 0xe0),param_2 + 0x8e418,0x14);
    iVar19 = WongWork::CBlackIPMonitor::GetEndTime(SUB42(GlobalData::g_blackIPMonitor,0),uVar13,2);
    iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar19 < iVar29) goto LAB_084c7446;
    bVar11 = true;
  }
  if (bVar11) {
    param_2[0x8e47c] = '\x01';
    uVar20 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_2 + 0x8e3f0));
    if (uVar20 < 0x251c) {
      WongWork::CMCAPManager::incPoint((CMCAPManager *)(param_2 + 0x8e3f0),0x251c);
    }
  }
  if (local_64[0x3f04] == (SIG_LOGIN_DATA)0x0) {
    if (*(int *)(local_64 + 0x3958) == 0) {
      CUser::ResetReturnUser((CUser *)param_2);
    }
    else {
      iVar19 = *(int *)(local_64 + 0x3958);
      iVar29 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (iVar19 + 0x3b53800 < iVar29) {
        CUser::SetReturnUser((CUser *)param_2);
        iVar19 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        CUser::SetReturnUserExpireTime((CUser *)param_2,iVar19 + 0x127500);
        CUser::SetReturnUserFirstUserLogin((CUser *)param_2,true);
        uVar20 = CUser::GetReturnUserExpireTime((CUser *)param_2);
        uVar32 = CUser::get_unique_id((CUser *)param_2);
        iVar19 = CUser::GetUID((CUser *)param_2);
        Timer_ReturnUserTimeout::registNextTimer(iVar19,uVar32 & 0xffff,uVar20);
      }
      else {
        CUser::ResetReturnUser((CUser *)param_2);
      }
    }
  }
  else {
    CUser::SetReturnUser((CUser *)param_2);
    CUser::SetReturnUserExpireTime((CUser *)param_2,*(int *)(local_64 + 0x3f08));
    CUser::SetReturnUserFirstUserLogin((CUser *)param_2,(bool)local_64[0x3f05]);
    uVar20 = CUser::GetReturnUserExpireTime((CUser *)param_2);
    uVar32 = CUser::get_unique_id((CUser *)param_2);
    iVar19 = CUser::GetUID((CUser *)param_2);
    Timer_ReturnUserTimeout::registNextTimer(iVar19,uVar32 & 0xffff,uVar20);
  }
  CUser::resetAccountMemberBonusFatigue((CUser *)param_2);
  iVar19 = G_CEnvironment();
  local_38 = *(int *)(iVar19 + 0x37c);
  lVar34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar10 = CheckDailyScheduleTime(local_38,*(long *)(local_64 + 0x3f60),lVar34);
  if (cVar10 == '\x01') {
    CUser::EnableSaveMemberBonusFatigue((CUser *)param_2);
  }
  else {
    CUser::incAccountMemberBonusFatigue((CUser *)param_2,*(short *)(local_64 + 0x3f5e));
  }
  CUserCharacInfo::setUserEventCharacterFlag((CUserCharacInfo *)param_2,(uchar)local_64[0x3f10]);
  CUser::SetMileage((CUser *)param_2,*(int *)(local_64 + 0x3f14));
  CUser::setCharacLinkMessageFlag((CUser *)param_2,local_64[0x3f5c] != (SIG_LOGIN_DATA)0x0);
  if (local_64[0x3f58] != (SIG_LOGIN_DATA)0x0) {
    SVar14 = (SIG_LOGIN_DATA)
             break_away_prevent::CBreakAwayPreventSystem::updateUvList
                       (GlobalData::s_BreakAwaySys,local_64);
    local_64[0x3f58] = SVar14;
  }
  if (0 < *(int *)(local_64 + 0x3f54)) {
    CUser::setBreakAwayRewardData((CUser *)param_2,true);
    CUser::setUserBreakAwayRewardLuckPoint((CUser *)param_2,*(int *)(local_64 + 0x3f54));
  }
  if (0 < *(int *)(local_64 + 0x3f48)) {
    if (*(uint *)(local_64 + 0x3f44) < *(uint *)(local_64 + 0x3f40)) {
      CUser::setBreakAwayRewardOrder(pCVar39._0_2_,1);
    }
    else {
      CUser::setBreakAwayRewardOrder(pCVar39._0_2_,3);
    }
    CUser::setBreakAwayDungeonClearCnt((CUser *)param_2,*(int *)(local_64 + 0x3f48));
    CUser::setBreakAwayQuestTime((CUser *)param_2,*(uint *)(local_64 + 0x3f4c));
  }
  if (-1 < *(int *)(local_64 + 0x3f18)) {
    CUser::setBreakAwayAccureCera((CUser *)param_2,*(int *)(local_64 + 0x3f18));
  }
  piVar35 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x34);
  cVar10 = (**(code **)(*piVar35 + 0x34))((short)piVar35,0);
  if ((cVar10 == '\0') || (local_64[0x3f58] == (SIG_LOGIN_DATA)0x0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (bVar11) {
    break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem
              (GlobalData::s_BreakAwaySys,local_64,(CUser *)param_2);
  }
  uVar20 = CUser::get_acc_id((CUser *)param_2);
  iVar19 = CUser::GetUID((CUser *)param_2);
  DB_LoadAccountCargo::makeRequest(iVar19,uVar20);
  CUser::SetPuUser((CUser *)param_2,(bool)local_64[0x38dc]);
  CUser::setCharacSlotCountInfo((CUser *)param_2,(uchar)local_64[0x3fa0],(uchar)local_64[0x3fa1]);
  CUser::set_ontime_last_recv_idx((CUser *)param_2,*(int *)(local_64 + 0x3fa4));
  CUser::setWebAddress((CUser *)param_2,(char *)(local_64 + 0x3a3a));
  if (local_64[0x3fa8] != (SIG_LOGIN_DATA)0x0) {
    CUser::setCheckPickUpRandomOptionItem((CUser *)param_2,true);
  }
  CUser::reset_server_fatigue_data((CUser *)param_2);
  CUser::set_fatigue_count_db
            ((CUser *)param_2,(uint)(byte)local_64[0x3fa9],(int)*(short *)(local_64 + 0x3faa));
  CUser::set_ingame_event_history((CUser *)param_2,(SIG_INGAME_EVENT_HISTORY *)(local_64 + 0x3fac));
  if (local_64[0x4124] != (SIG_LOGIN_DATA)0x0) {
    pCVar38._0_2_ = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar38._0_2_,uVar37,0x261,1,0,0);
  }
  this_04 = (Secu_AccountHacking *)CUser::getAcccountHackInfo((CUser *)param_2);
  Secu_AccountHacking::setLoginTime(this_04);
  CUser::loadInformNoticeFlag((CUser *)param_2,(char *)(local_64 + 0x4125));
  CUser::ValidateStrikerInfo((CUser *)param_2);
  CUser::CalcurateManageLevel((CUser *)param_2);
  CUser::CalcurateUserMaxLevel((CUser *)param_2);
  CUser::SetBingoData((CUser *)param_2,local_64);
  CUser::initBingoData((CUser *)param_2);
  CUser::sendReturnUserFirstLogin((CUser *)param_2);
  CUser::SetGrowthWeaponEventInfo((CUser *)param_2,(SIG_GROWTH_WEAPON_EVENT *)(local_64 + 0x4140));
  CUser::SetGrowthCreatureEventInfo
            ((CUser *)param_2,(SIG_GIVE_GROWTH_CREATURE_EVENT *)(local_64 + 0x4154));
  CUser::setCharacLevelUpGift_AccountOnce
            ((CUser *)param_2,(SIG_LEVELUP_GIFT_ACCOUNT_ONCE *)(local_64 + 0x4338));
  CUser::sendEventInfo();
  CUser::SetEventCreateDnfReward((CUser *)param_2,false);
  uVar20 = CUser::get_acc_id((CUser *)param_2);
  iVar19 = CUser::GetUID((CUser *)param_2);
  DBSelectCreateDnfUserInfo::makeRequest(iVar19,uVar20);
  param_2[0x8ec32] = '\0';
  this_05 = (GarenaAuthData *)CUser::getGarenaAuthData((CUser *)param_2);
  uVar17 = Taiwan::GarenaAuthData::getGcaType(this_05);
  cVar10 = Taiwan::GarenaCyberCafe(uVar17);
  if (cVar10 != '\0') {
    DBSelectPcroomDailyReward::makeRequest((CUser *)param_2);
  }
  uVar36 = 0;
                    /* try { // try from 084c7a97 to 084c7a9b has its CatchHandler @ 084c7ab6 */
  CStreamGuard::~CStreamGuard(local_148);
LAB_084c7ad4:
  PacketGuard::~PacketGuard(local_130);
  return uVar36;
}

```

