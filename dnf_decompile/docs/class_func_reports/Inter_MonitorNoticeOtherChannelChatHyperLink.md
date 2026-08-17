# Inter_MonitorNoticeOtherChannelChatHyperLink

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e5528 Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig  [0x084e5528-0x84e5c25] ===
 84e5528:	55                   	push   %ebp
 84e5529:	89 e5                	mov    %esp,%ebp
 84e552b:	56                   	push   %esi
 84e552c:	53                   	push   %ebx
 84e552d:	83 c4 80             	add    $0xffffff80,%esp
 84e5530:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5533:	89 04 24             	mov    %eax,(%esp)
 84e5536:	e8 51 4e bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e553b:	85 c0                	test   %eax,%eax
 84e553d:	0f 94 c0             	sete   %al
 84e5540:	84 c0                	test   %al,%al
 84e5542:	74 0a                	je     84e554e <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x26>
 84e5544:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e5549:	e9 ce 06 00 00       	jmp    84e5c1c <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x6f4>
 84e554e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e5551:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84e5554:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5557:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 84e555b:	3c 01                	cmp    $0x1,%al
 84e555d:	0f 85 83 01 00 00    	jne    84e56e6 <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x1be>
 84e5563:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e5566:	89 04 24             	mov    %eax,(%esp)
 84e5569:	e8 de 87 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e556e:	c7 44 24 08 73 01 00 	movl   $0x173,0x8(%esp)
 84e5575:	00 
 84e5576:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e557d:	00 
 84e557e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e5581:	89 04 24             	mov    %eax,(%esp)
 84e5584:	e8 73 63 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e5589:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e558c:	8b 40 0a             	mov    0xa(%eax),%eax
 84e558f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5593:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e5596:	89 04 24             	mov    %eax,(%esp)
 84e5599:	e8 82 63 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e559e:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 84e55a5:	00 
 84e55a6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e55a9:	89 04 24             	mov    %eax,(%esp)
 84e55ac:	e8 6f 63 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e55b1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e55b4:	83 c0 17             	add    $0x17,%eax
 84e55b7:	89 04 24             	mov    %eax,(%esp)
 84e55ba:	e8 f1 8d b9 ff       	call   807e3b0 <strlen@plt>
 84e55bf:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84e55c2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e55c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e55c9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e55cc:	89 04 24             	mov    %eax,(%esp)
 84e55cf:	e8 68 63 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e55d4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e55d7:	8d 50 17             	lea    0x17(%eax),%edx
 84e55da:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e55dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e55e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e55e5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e55e8:	89 04 24             	mov    %eax,(%esp)
 84e55eb:	e8 f4 1d cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e55f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e55f7:	00 
 84e55f8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e55fb:	89 04 24             	mov    %eax,(%esp)
 84e55fe:	e8 1d 63 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5603:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e560a:	00 
 84e560b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e560e:	89 04 24             	mov    %eax,(%esp)
 84e5611:	e8 26 63 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5616:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e561d:	00 
 84e561e:	c7 44 24 04 40 6f c8 	movl   $0x8c86f40,0x4(%esp)
 84e5625:	08 
 84e5626:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e5629:	89 04 24             	mov    %eax,(%esp)
 84e562c:	e8 3f 61 d4 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84e5631:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5634:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84e5638:	0f b6 c0             	movzbl %al,%eax
 84e563b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e563f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e5642:	89 04 24             	mov    %eax,(%esp)
 84e5645:	e8 d6 62 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e564a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84e5651:	eb 2a                	jmp    84e567d <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x155>
 84e5653:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e5656:	6b c0 68             	imul   $0x68,%eax,%eax
 84e5659:	83 c0 30             	add    $0x30,%eax
 84e565c:	03 45 d4             	add    -0x2c(%ebp),%eax
 84e565f:	83 c0 07             	add    $0x7,%eax
 84e5662:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 84e5669:	00 
 84e566a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e566e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e5671:	89 04 24             	mov    %eax,(%esp)
 84e5674:	e8 8f 88 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e5679:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84e567d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5680:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84e5684:	0f b6 c0             	movzbl %al,%eax
 84e5687:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84e568a:	0f 9f c0             	setg   %al
 84e568d:	84 c0                	test   %al,%al
 84e568f:	75 c2                	jne    84e5653 <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x12b>
 84e5691:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e5698:	00 
 84e5699:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e569c:	89 04 24             	mov    %eax,(%esp)
 84e569f:	e8 b4 62 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e56a4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e56a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e56ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e56ae:	89 04 24             	mov    %eax,(%esp)
 84e56b1:	e8 04 2f 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e56b6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e56bb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e56be:	89 04 24             	mov    %eax,(%esp)
 84e56c1:	e8 ba 87 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e56c6:	e9 51 05 00 00       	jmp    84e5c1c <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x6f4>
 84e56cb:	89 d3                	mov    %edx,%ebx
 84e56cd:	89 c6                	mov    %eax,%esi
 84e56cf:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84e56d2:	89 04 24             	mov    %eax,(%esp)
 84e56d5:	e8 a6 87 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e56da:	89 f0                	mov    %esi,%eax
 84e56dc:	89 da                	mov    %ebx,%edx
 84e56de:	89 04 24             	mov    %eax,(%esp)
 84e56e1:	e8 6a e0 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e56e6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e56e9:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 84e56ed:	3c 02                	cmp    $0x2,%al
 84e56ef:	0f 85 83 01 00 00    	jne    84e5878 <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x350>
 84e56f5:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e56f8:	89 04 24             	mov    %eax,(%esp)
 84e56fb:	e8 4c 86 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e5700:	c7 44 24 08 73 01 00 	movl   $0x173,0x8(%esp)
 84e5707:	00 
 84e5708:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e570f:	00 
 84e5710:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e5713:	89 04 24             	mov    %eax,(%esp)
 84e5716:	e8 e1 61 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e571b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e571e:	8b 40 0a             	mov    0xa(%eax),%eax
 84e5721:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5725:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e5728:	89 04 24             	mov    %eax,(%esp)
 84e572b:	e8 f0 61 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5730:	c7 44 24 04 4d 00 00 	movl   $0x4d,0x4(%esp)
 84e5737:	00 
 84e5738:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e573b:	89 04 24             	mov    %eax,(%esp)
 84e573e:	e8 dd 61 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5743:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5746:	83 c0 17             	add    $0x17,%eax
 84e5749:	89 04 24             	mov    %eax,(%esp)
 84e574c:	e8 5f 8c b9 ff       	call   807e3b0 <strlen@plt>
 84e5751:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e5754:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e5757:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e575b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e575e:	89 04 24             	mov    %eax,(%esp)
 84e5761:	e8 d6 61 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5766:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5769:	8d 50 17             	lea    0x17(%eax),%edx
 84e576c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e576f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e5773:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5777:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e577a:	89 04 24             	mov    %eax,(%esp)
 84e577d:	e8 62 1c cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e5782:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e5789:	00 
 84e578a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e578d:	89 04 24             	mov    %eax,(%esp)
 84e5790:	e8 8b 61 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5795:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e579c:	00 
 84e579d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e57a0:	89 04 24             	mov    %eax,(%esp)
 84e57a3:	e8 94 61 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e57a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e57af:	00 
 84e57b0:	c7 44 24 04 40 6f c8 	movl   $0x8c86f40,0x4(%esp)
 84e57b7:	08 
 84e57b8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e57bb:	89 04 24             	mov    %eax,(%esp)
 84e57be:	e8 ad 5f d4 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84e57c3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e57c6:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84e57ca:	0f b6 c0             	movzbl %al,%eax
 84e57cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e57d1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e57d4:	89 04 24             	mov    %eax,(%esp)
 84e57d7:	e8 44 61 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e57dc:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84e57e3:	eb 2a                	jmp    84e580f <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x2e7>
 84e57e5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e57e8:	6b c0 68             	imul   $0x68,%eax,%eax
 84e57eb:	83 c0 30             	add    $0x30,%eax
 84e57ee:	03 45 d4             	add    -0x2c(%ebp),%eax
 84e57f1:	83 c0 07             	add    $0x7,%eax
 84e57f4:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 84e57fb:	00 
 84e57fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5800:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e5803:	89 04 24             	mov    %eax,(%esp)
 84e5806:	e8 fd 86 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e580b:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84e580f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5812:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84e5816:	0f b6 c0             	movzbl %al,%eax
 84e5819:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84e581c:	0f 9f c0             	setg   %al
 84e581f:	84 c0                	test   %al,%al
 84e5821:	75 c2                	jne    84e57e5 <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x2bd>
 84e5823:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e582a:	00 
 84e582b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e582e:	89 04 24             	mov    %eax,(%esp)
 84e5831:	e8 22 61 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e5836:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e5839:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e583d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5840:	89 04 24             	mov    %eax,(%esp)
 84e5843:	e8 72 2d 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e5848:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e584d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e5850:	89 04 24             	mov    %eax,(%esp)
 84e5853:	e8 28 86 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5858:	e9 bf 03 00 00       	jmp    84e5c1c <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x6f4>
 84e585d:	89 d3                	mov    %edx,%ebx
 84e585f:	89 c6                	mov    %eax,%esi
 84e5861:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e5864:	89 04 24             	mov    %eax,(%esp)
 84e5867:	e8 14 86 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e586c:	89 f0                	mov    %esi,%eax
 84e586e:	89 da                	mov    %ebx,%edx
 84e5870:	89 04 24             	mov    %eax,(%esp)
 84e5873:	e8 d8 de 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e5878:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e587b:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 84e587f:	3c 03                	cmp    $0x3,%al
 84e5881:	0f 85 83 01 00 00    	jne    84e5a0a <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x4e2>
 84e5887:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e588a:	89 04 24             	mov    %eax,(%esp)
 84e588d:	e8 ba 84 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e5892:	c7 44 24 08 73 01 00 	movl   $0x173,0x8(%esp)
 84e5899:	00 
 84e589a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e58a1:	00 
 84e58a2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e58a5:	89 04 24             	mov    %eax,(%esp)
 84e58a8:	e8 4f 60 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e58ad:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e58b0:	8b 40 0a             	mov    0xa(%eax),%eax
 84e58b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e58b7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e58ba:	89 04 24             	mov    %eax,(%esp)
 84e58bd:	e8 5e 60 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e58c2:	c7 44 24 04 5a 00 00 	movl   $0x5a,0x4(%esp)
 84e58c9:	00 
 84e58ca:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e58cd:	89 04 24             	mov    %eax,(%esp)
 84e58d0:	e8 4b 60 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e58d5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e58d8:	83 c0 17             	add    $0x17,%eax
 84e58db:	89 04 24             	mov    %eax,(%esp)
 84e58de:	e8 cd 8a b9 ff       	call   807e3b0 <strlen@plt>
 84e58e3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e58e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e58e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e58ed:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e58f0:	89 04 24             	mov    %eax,(%esp)
 84e58f3:	e8 44 60 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e58f8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e58fb:	8d 50 17             	lea    0x17(%eax),%edx
 84e58fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5901:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e5905:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5909:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e590c:	89 04 24             	mov    %eax,(%esp)
 84e590f:	e8 d0 1a cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e5914:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e591b:	00 
 84e591c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e591f:	89 04 24             	mov    %eax,(%esp)
 84e5922:	e8 f9 5f be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5927:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e592e:	00 
 84e592f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e5932:	89 04 24             	mov    %eax,(%esp)
 84e5935:	e8 02 60 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e593a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e5941:	00 
 84e5942:	c7 44 24 04 40 6f c8 	movl   $0x8c86f40,0x4(%esp)
 84e5949:	08 
 84e594a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e594d:	89 04 24             	mov    %eax,(%esp)
 84e5950:	e8 1b 5e d4 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84e5955:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5958:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84e595c:	0f b6 c0             	movzbl %al,%eax
 84e595f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5963:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e5966:	89 04 24             	mov    %eax,(%esp)
 84e5969:	e8 b2 5f be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e596e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84e5975:	eb 2a                	jmp    84e59a1 <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x479>
 84e5977:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e597a:	6b c0 68             	imul   $0x68,%eax,%eax
 84e597d:	83 c0 30             	add    $0x30,%eax
 84e5980:	03 45 d4             	add    -0x2c(%ebp),%eax
 84e5983:	83 c0 07             	add    $0x7,%eax
 84e5986:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 84e598d:	00 
 84e598e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5992:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e5995:	89 04 24             	mov    %eax,(%esp)
 84e5998:	e8 6b 85 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e599d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84e59a1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e59a4:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84e59a8:	0f b6 c0             	movzbl %al,%eax
 84e59ab:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84e59ae:	0f 9f c0             	setg   %al
 84e59b1:	84 c0                	test   %al,%al
 84e59b3:	75 c2                	jne    84e5977 <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x44f>
 84e59b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e59bc:	00 
 84e59bd:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e59c0:	89 04 24             	mov    %eax,(%esp)
 84e59c3:	e8 90 5f be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e59c8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e59cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e59cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e59d2:	89 04 24             	mov    %eax,(%esp)
 84e59d5:	e8 e0 2b 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e59da:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e59df:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e59e2:	89 04 24             	mov    %eax,(%esp)
 84e59e5:	e8 96 84 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e59ea:	e9 2d 02 00 00       	jmp    84e5c1c <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x6f4>
 84e59ef:	89 d3                	mov    %edx,%ebx
 84e59f1:	89 c6                	mov    %eax,%esi
 84e59f3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84e59f6:	89 04 24             	mov    %eax,(%esp)
 84e59f9:	e8 82 84 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e59fe:	89 f0                	mov    %esi,%eax
 84e5a00:	89 da                	mov    %ebx,%edx
 84e5a02:	89 04 24             	mov    %eax,(%esp)
 84e5a05:	e8 46 dd 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e5a0a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e5a11:	ff 
 84e5a12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5a15:	89 04 24             	mov    %eax,(%esp)
 84e5a18:	e8 83 85 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e5a1d:	89 c2                	mov    %eax,%edx
 84e5a1f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5a22:	8b 40 13             	mov    0x13(%eax),%eax
 84e5a25:	39 c2                	cmp    %eax,%edx
 84e5a27:	0f 95 c0             	setne  %al
 84e5a2a:	84 c0                	test   %al,%al
 84e5a2c:	74 57                	je     84e5a85 <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x55d>
 84e5a2e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5a31:	8b 58 13             	mov    0x13(%eax),%ebx
 84e5a34:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e5a3b:	ff 
 84e5a3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5a3f:	89 04 24             	mov    %eax,(%esp)
 84e5a42:	e8 59 85 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e5a47:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84e5a4b:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e5a4f:	c7 44 24 10 60 a2 c8 	movl   $0x8c8a260,0x10(%esp)
 84e5a56:	08 
 84e5a57:	c7 44 24 0c 97 64 00 	movl   $0x6497,0xc(%esp)
 84e5a5e:	00 
 84e5a5f:	c7 44 24 08 c0 b5 c8 	movl   $0x8c8b5c0,0x8(%esp)
 84e5a66:	08 
 84e5a67:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e5a6e:	08 
 84e5a6f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e5a76:	e8 8f e1 5e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e5a7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e5a80:	e9 97 01 00 00       	jmp    84e5c1c <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x6f4>
 84e5a85:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5a88:	89 04 24             	mov    %eax,(%esp)
 84e5a8b:	e8 bc 82 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e5a90:	c7 44 24 08 73 01 00 	movl   $0x173,0x8(%esp)
 84e5a97:	00 
 84e5a98:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e5a9f:	00 
 84e5aa0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5aa3:	89 04 24             	mov    %eax,(%esp)
 84e5aa6:	e8 51 5e be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e5aab:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5aae:	8b 40 0a             	mov    0xa(%eax),%eax
 84e5ab1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5ab5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5ab8:	89 04 24             	mov    %eax,(%esp)
 84e5abb:	e8 60 5e be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5ac0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e5ac7:	00 
 84e5ac8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5acb:	89 04 24             	mov    %eax,(%esp)
 84e5ace:	e8 4d 5e be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5ad3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5ad6:	83 c0 17             	add    $0x17,%eax
 84e5ad9:	89 04 24             	mov    %eax,(%esp)
 84e5adc:	e8 cf 88 b9 ff       	call   807e3b0 <strlen@plt>
 84e5ae1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84e5ae4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84e5ae7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5aeb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5aee:	89 04 24             	mov    %eax,(%esp)
 84e5af1:	e8 46 5e be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5af6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5af9:	8d 50 17             	lea    0x17(%eax),%edx
 84e5afc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84e5aff:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e5b03:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5b07:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5b0a:	89 04 24             	mov    %eax,(%esp)
 84e5b0d:	e8 d2 18 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e5b12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e5b19:	00 
 84e5b1a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5b1d:	89 04 24             	mov    %eax,(%esp)
 84e5b20:	e8 fb 5d be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5b25:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5b28:	0f b6 80 6f 01 00 00 	movzbl 0x16f(%eax),%eax
 84e5b2f:	0f b6 c0             	movzbl %al,%eax
 84e5b32:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5b36:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5b39:	89 04 24             	mov    %eax,(%esp)
 84e5b3c:	e8 fb 5d be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5b41:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5b44:	0f b6 80 6f 01 00 00 	movzbl 0x16f(%eax),%eax
 84e5b4b:	0f b6 c0             	movzbl %al,%eax
 84e5b4e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84e5b51:	81 c2 70 01 00 00    	add    $0x170,%edx
 84e5b57:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e5b5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5b5f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5b62:	89 04 24             	mov    %eax,(%esp)
 84e5b65:	e8 7a 18 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e5b6a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5b6d:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84e5b71:	0f b6 c0             	movzbl %al,%eax
 84e5b74:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5b78:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5b7b:	89 04 24             	mov    %eax,(%esp)
 84e5b7e:	e8 9d 5d be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5b83:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e5b8a:	eb 2a                	jmp    84e5bb6 <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x68e>
 84e5b8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e5b8f:	6b c0 68             	imul   $0x68,%eax,%eax
 84e5b92:	83 c0 30             	add    $0x30,%eax
 84e5b95:	03 45 d4             	add    -0x2c(%ebp),%eax
 84e5b98:	83 c0 07             	add    $0x7,%eax
 84e5b9b:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 84e5ba2:	00 
 84e5ba3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5ba7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5baa:	89 04 24             	mov    %eax,(%esp)
 84e5bad:	e8 56 83 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e5bb2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e5bb6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84e5bb9:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 84e5bbd:	0f b6 c0             	movzbl %al,%eax
 84e5bc0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84e5bc3:	0f 9f c0             	setg   %al
 84e5bc6:	84 c0                	test   %al,%al
 84e5bc8:	75 c2                	jne    84e5b8c <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x664>
 84e5bca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e5bd1:	00 
 84e5bd2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5bd5:	89 04 24             	mov    %eax,(%esp)
 84e5bd8:	e8 7b 5d be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e5bdd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5be0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5be4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5be7:	89 04 24             	mov    %eax,(%esp)
 84e5bea:	e8 cb 29 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e5bef:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e5bf4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5bf7:	89 04 24             	mov    %eax,(%esp)
 84e5bfa:	e8 81 82 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5bff:	eb 1b                	jmp    84e5c1c <_ZN44Inter_MonitorNoticeOtherChannelChatHyperLink12dispatch_sigEP5CUserPci+0x6f4>
 84e5c01:	89 d3                	mov    %edx,%ebx
 84e5c03:	89 c6                	mov    %eax,%esi
 84e5c05:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84e5c08:	89 04 24             	mov    %eax,(%esp)
 84e5c0b:	e8 70 82 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5c10:	89 f0                	mov    %esi,%eax
 84e5c12:	89 da                	mov    %ebx,%edx
 84e5c14:	89 04 24             	mov    %eax,(%esp)
 84e5c17:	e8 34 db 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e5c1c:	89 d8                	mov    %ebx,%eax
 84e5c1e:	83 ec 80             	sub    $0xffffff80,%esp
 84e5c21:	5b                   	pop    %ebx
 84e5c22:	5e                   	pop    %esi
 84e5c23:	5d                   	pop    %ebp
 84e5c24:	c3                   	ret
 84e5c25:	90                   	nop

```

```c
// Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig @ 0x84e5528

/* Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_60 [12];
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  PacketGuard local_3c [12];
  int local_30;
  size_t local_2c;
  size_t local_28;
  int local_24;
  size_t local_20;
  int local_1c;
  size_t local_18;
  int local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_30 = param_3;
    if (*(char *)(param_3 + 0x35) == '\x01') {
      PacketGuard::PacketGuard(local_48);
                    /* try { // try from 084e5584 to 084e56b5 has its CatchHandler @ 084e56cb */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,*(int *)(local_30 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0x15);
      local_28 = strlen((char *)(local_30 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,local_28);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_48,(char *)(local_30 + 0x17),local_28)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_48,"",0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)*(byte *)(local_30 + 0x36));
      for (local_24 = 0; local_24 < (int)(uint)*(byte *)(local_30 + 0x36); local_24 = local_24 + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_48,(char *)(local_24 * 0x68 + local_30 + 0x37),0x68);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
      CUser::Send((CUser *)param_2,local_48);
      PacketGuard::~PacketGuard(local_48);
    }
    else if (*(char *)(param_3 + 0x35) == '\x02') {
      PacketGuard::PacketGuard(local_54);
                    /* try { // try from 084e5716 to 084e5847 has its CatchHandler @ 084e585d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,*(int *)(local_30 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0x4d);
      local_20 = strlen((char *)(local_30 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,local_20);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_54,(char *)(local_30 + 0x17),local_20)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_54,"",0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,(uint)*(byte *)(local_30 + 0x36));
      for (local_1c = 0; local_1c < (int)(uint)*(byte *)(local_30 + 0x36); local_1c = local_1c + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_54,(char *)(local_1c * 0x68 + local_30 + 0x37),0x68);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
      CUser::Send((CUser *)param_2,local_54);
      PacketGuard::~PacketGuard(local_54);
    }
    else if (*(char *)(param_3 + 0x35) == '\x03') {
      PacketGuard::PacketGuard(local_60);
                    /* try { // try from 084e58a8 to 084e59d9 has its CatchHandler @ 084e59ef */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,*(int *)(local_30 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0x5a);
      local_18 = strlen((char *)(local_30 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_18);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_60,(char *)(local_30 + 0x17),local_18)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_60,"",0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(uint)*(byte *)(local_30 + 0x36));
      for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_30 + 0x36); local_14 = local_14 + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_60,(char *)(local_14 * 0x68 + local_30 + 0x37),0x68);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      CUser::Send((CUser *)param_2,local_60);
      PacketGuard::~PacketGuard(local_60);
    }
    else {
      iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == *(int *)(local_30 + 0x13)) {
        PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084e5aa6 to 084e5bee has its CatchHandler @ 084e5c01 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x173);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,*(int *)(local_30 + 10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
        local_2c = strlen((char *)(local_30 + 0x17));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_2c);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_3c,(char *)(local_30 + 0x17),local_2c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_3c,(uint)*(byte *)(local_30 + 0x16f));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_3c,(char *)(local_30 + 0x170),
                   (uint)*(byte *)(local_30 + 0x16f));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_3c,(uint)*(byte *)(local_30 + 0x36));
        for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_30 + 0x36); local_10 = local_10 + 1
            ) {
          InterfacePacketBuf::put_binary
                    ((InterfacePacketBuf *)local_3c,(char *)(local_10 * 0x68 + local_30 + 0x37),0x68
                    );
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        CUser::Send((CUser *)param_2,local_3c);
        PacketGuard::~PacketGuard(local_3c);
      }
      else {
        uVar1 = *(undefined4 *)(local_30 + 0x13);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig(CUser*, char*, int)"
                   ,0x6497,
                   "Inter_MonitorNoticeOtherChannelChatHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar1);
      }
    }
  }
  return 0;
}

```

