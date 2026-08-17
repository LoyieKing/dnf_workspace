# Dispatcher_AddSocketToAvatar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821a412 Dispatcher_AddSocketToAvatar::dispatch_sig  [0x0821a412-0x821abdf] ===
 821a412:	55                   	push   %ebp
 821a413:	89 e5                	mov    %esp,%ebp
 821a415:	56                   	push   %esi
 821a416:	53                   	push   %ebx
 821a417:	81 ec 40 01 00 00    	sub    $0x140,%esp
 821a41d:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 821a420:	89 04 24             	mov    %eax,(%esp)
 821a423:	e8 04 39 01 00       	call   822dd2c <_ZN24MSG_ADD_SOCKET_TO_AVATARC1Ev>
 821a428:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 821a42f:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 821a432:	83 c0 0d             	add    $0xd,%eax
 821a435:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a439:	8b 45 10             	mov    0x10(%ebp),%eax
 821a43c:	89 04 24             	mov    %eax,(%esp)
 821a43f:	e8 6c 2c 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821a444:	83 f0 01             	xor    $0x1,%eax
 821a447:	84 c0                	test   %al,%al
 821a449:	74 2b                	je     821a476 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x64>
 821a44b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821a452:	00 
 821a453:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821a45a:	00 
 821a45b:	c7 44 24 04 60 d7 bc 	movl   $0x8bcd760,0x4(%esp)
 821a462:	08 
 821a463:	c7 04 24 60 cd 00 00 	movl   $0xcd60,(%esp)
 821a46a:	e8 68 64 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821a46f:	89 c3                	mov    %eax,%ebx
 821a471:	e9 5e 07 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a476:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 821a479:	83 c0 0f             	add    $0xf,%eax
 821a47c:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a480:	8b 45 10             	mov    0x10(%ebp),%eax
 821a483:	89 04 24             	mov    %eax,(%esp)
 821a486:	e8 f3 2d 37 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 821a48b:	83 f0 01             	xor    $0x1,%eax
 821a48e:	84 c0                	test   %al,%al
 821a490:	74 2b                	je     821a4bd <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0xab>
 821a492:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821a499:	00 
 821a49a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821a4a1:	00 
 821a4a2:	c7 44 24 04 60 d7 bc 	movl   $0x8bcd760,0x4(%esp)
 821a4a9:	08 
 821a4aa:	c7 04 24 62 cd 00 00 	movl   $0xcd62,(%esp)
 821a4b1:	e8 21 64 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821a4b6:	89 c3                	mov    %eax,%ebx
 821a4b8:	e9 17 07 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a4bd:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 821a4c0:	83 c0 13             	add    $0x13,%eax
 821a4c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a4c7:	8b 45 10             	mov    0x10(%ebp),%eax
 821a4ca:	89 04 24             	mov    %eax,(%esp)
 821a4cd:	e8 de 2b 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821a4d2:	83 f0 01             	xor    $0x1,%eax
 821a4d5:	84 c0                	test   %al,%al
 821a4d7:	74 2b                	je     821a504 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0xf2>
 821a4d9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821a4e0:	00 
 821a4e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821a4e8:	00 
 821a4e9:	c7 44 24 04 60 d7 bc 	movl   $0x8bcd760,0x4(%esp)
 821a4f0:	08 
 821a4f1:	c7 04 24 64 cd 00 00 	movl   $0xcd64,(%esp)
 821a4f8:	e8 da 63 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821a4fd:	89 c3                	mov    %eax,%ebx
 821a4ff:	e9 d0 06 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a504:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a507:	89 04 24             	mov    %eax,(%esp)
 821a50a:	e8 7f fd eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821a50f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 821a512:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 821a516:	0f b7 d0             	movzwl %ax,%edx
 821a519:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 821a51f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821a523:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821a52a:	00 
 821a52b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 821a52e:	89 54 24 04          	mov    %edx,0x4(%esp)
 821a532:	89 04 24             	mov    %eax,(%esp)
 821a535:	e8 de 13 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 821a53a:	83 ec 04             	sub    $0x4,%esp
 821a53d:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 821a543:	89 04 24             	mov    %eax,(%esp)
 821a546:	e8 1b 48 f0 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 821a54b:	84 c0                	test   %al,%al
 821a54d:	74 25                	je     821a574 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x162>
 821a54f:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 821a556:	00 
 821a557:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a55e:	00 
 821a55f:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a562:	89 04 24             	mov    %eax,(%esp)
 821a565:	e8 d8 19 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a56a:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a56f:	e9 60 06 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a574:	8b 95 5d ff ff ff    	mov    -0xa3(%ebp),%edx
 821a57a:	8b 45 d2             	mov    -0x2e(%ebp),%eax
 821a57d:	39 c2                	cmp    %eax,%edx
 821a57f:	74 25                	je     821a5a6 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x194>
 821a581:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 821a588:	00 
 821a589:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a590:	00 
 821a591:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a594:	89 04 24             	mov    %eax,(%esp)
 821a597:	e8 a6 19 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a59c:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a5a1:	e9 2e 06 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a5a6:	8d 85 1e ff ff ff    	lea    -0xe2(%ebp),%eax
 821a5ac:	89 04 24             	mov    %eax,(%esp)
 821a5af:	e8 a0 12 eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 821a5b4:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 821a5b8:	0f b7 d0             	movzwl %ax,%edx
 821a5bb:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 821a5c1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821a5c5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821a5cc:	00 
 821a5cd:	8b 55 dc             	mov    -0x24(%ebp),%edx
 821a5d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 821a5d4:	89 04 24             	mov    %eax,(%esp)
 821a5d7:	e8 3c 13 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 821a5dc:	83 ec 04             	sub    $0x4,%esp
 821a5df:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 821a5e5:	89 85 1e ff ff ff    	mov    %eax,-0xe2(%ebp)
 821a5eb:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 821a5f1:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 821a5f7:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 821a5fd:	89 85 26 ff ff ff    	mov    %eax,-0xda(%ebp)
 821a603:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 821a609:	89 85 2a ff ff ff    	mov    %eax,-0xd6(%ebp)
 821a60f:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 821a615:	89 85 2e ff ff ff    	mov    %eax,-0xd2(%ebp)
 821a61b:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 821a621:	89 85 32 ff ff ff    	mov    %eax,-0xce(%ebp)
 821a627:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 821a62d:	89 85 36 ff ff ff    	mov    %eax,-0xca(%ebp)
 821a633:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 821a639:	89 85 3a ff ff ff    	mov    %eax,-0xc6(%ebp)
 821a63f:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 821a645:	89 85 3e ff ff ff    	mov    %eax,-0xc2(%ebp)
 821a64b:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 821a651:	89 85 42 ff ff ff    	mov    %eax,-0xbe(%ebp)
 821a657:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 821a65d:	89 85 46 ff ff ff    	mov    %eax,-0xba(%ebp)
 821a663:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 821a669:	89 85 4a ff ff ff    	mov    %eax,-0xb6(%ebp)
 821a66f:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 821a675:	89 85 4e ff ff ff    	mov    %eax,-0xb2(%ebp)
 821a67b:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 821a681:	89 85 52 ff ff ff    	mov    %eax,-0xae(%ebp)
 821a687:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 821a68d:	89 85 56 ff ff ff    	mov    %eax,-0xaa(%ebp)
 821a693:	0f b6 85 14 ff ff ff 	movzbl -0xec(%ebp),%eax
 821a69a:	88 85 5a ff ff ff    	mov    %al,-0xa6(%ebp)
 821a6a0:	8d 85 1e ff ff ff    	lea    -0xe2(%ebp),%eax
 821a6a6:	89 04 24             	mov    %eax,(%esp)
 821a6a9:	e8 b8 46 f0 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 821a6ae:	84 c0                	test   %al,%al
 821a6b0:	74 25                	je     821a6d7 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x2c5>
 821a6b2:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 821a6b9:	00 
 821a6ba:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a6c1:	00 
 821a6c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a6c5:	89 04 24             	mov    %eax,(%esp)
 821a6c8:	e8 75 18 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a6cd:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a6d2:	e9 fd 04 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a6d7:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 821a6dd:	89 c3                	mov    %eax,%ebx
 821a6df:	e8 b7 1a eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821a6e4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821a6e8:	89 04 24             	mov    %eax,(%esp)
 821a6eb:	e8 42 53 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 821a6f0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 821a6f3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 821a6f7:	74 12                	je     821a70b <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x2f9>
 821a6f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821a6fc:	89 04 24             	mov    %eax,(%esp)
 821a6ff:	e8 f6 6b ed ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 821a704:	83 f0 01             	xor    $0x1,%eax
 821a707:	84 c0                	test   %al,%al
 821a709:	74 07                	je     821a712 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x300>
 821a70b:	b8 01 00 00 00       	mov    $0x1,%eax
 821a710:	eb 05                	jmp    821a717 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x305>
 821a712:	b8 00 00 00 00       	mov    $0x0,%eax
 821a717:	84 c0                	test   %al,%al
 821a719:	74 25                	je     821a740 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x32e>
 821a71b:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 821a722:	00 
 821a723:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a72a:	00 
 821a72b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a72e:	89 04 24             	mov    %eax,(%esp)
 821a731:	e8 0c 18 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a736:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a73b:	e9 94 04 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a740:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821a743:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 821a746:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 821a74d:	00 
 821a74e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821a751:	89 04 24             	mov    %eax,(%esp)
 821a754:	e8 ff 22 01 00       	call   822ca58 <_ZNK14CStackableItem21verifyStackableActionEN15StackableAction4TypeE>
 821a759:	83 f0 01             	xor    $0x1,%eax
 821a75c:	84 c0                	test   %al,%al
 821a75e:	74 25                	je     821a785 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x373>
 821a760:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 821a767:	00 
 821a768:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a76f:	00 
 821a770:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a773:	89 04 24             	mov    %eax,(%esp)
 821a776:	e8 c7 17 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a77b:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a780:	e9 4f 04 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a785:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 821a78b:	89 04 24             	mov    %eax,(%esp)
 821a78e:	e8 6d 60 f3 ff       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 821a793:	83 f0 01             	xor    $0x1,%eax
 821a796:	84 c0                	test   %al,%al
 821a798:	74 25                	je     821a7bf <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x3ad>
 821a79a:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 821a7a1:	00 
 821a7a2:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a7a9:	00 
 821a7aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a7ad:	89 04 24             	mov    %eax,(%esp)
 821a7b0:	e8 8d 17 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a7b5:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a7ba:	e9 15 04 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a7bf:	8b 45 d2             	mov    -0x2e(%ebp),%eax
 821a7c2:	89 c3                	mov    %eax,%ebx
 821a7c4:	e8 d2 19 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821a7c9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821a7cd:	89 04 24             	mov    %eax,(%esp)
 821a7d0:	e8 5d 52 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 821a7d5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 821a7d8:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 821a7dc:	74 35                	je     821a813 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x401>
 821a7de:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821a7e1:	89 04 24             	mov    %eax,(%esp)
 821a7e4:	e8 6b 64 ef ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 821a7e9:	89 c3                	mov    %eax,%ebx
 821a7eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821a7ee:	89 04 24             	mov    %eax,(%esp)
 821a7f1:	e8 5e 64 ef ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 821a7f6:	39 c3                	cmp    %eax,%ebx
 821a7f8:	75 19                	jne    821a813 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x401>
 821a7fa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821a7fd:	8b 00                	mov    (%eax),%eax
 821a7ff:	83 c0 10             	add    $0x10,%eax
 821a802:	8b 10                	mov    (%eax),%edx
 821a804:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821a807:	89 04 24             	mov    %eax,(%esp)
 821a80a:	ff d2                	call   *%edx
 821a80c:	83 f0 01             	xor    $0x1,%eax
 821a80f:	84 c0                	test   %al,%al
 821a811:	74 07                	je     821a81a <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x408>
 821a813:	b8 01 00 00 00       	mov    $0x1,%eax
 821a818:	eb 05                	jmp    821a81f <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x40d>
 821a81a:	b8 00 00 00 00       	mov    $0x0,%eax
 821a81f:	84 c0                	test   %al,%al
 821a821:	74 25                	je     821a848 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x436>
 821a823:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 821a82a:	00 
 821a82b:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a832:	00 
 821a833:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a836:	89 04 24             	mov    %eax,(%esp)
 821a839:	e8 04 17 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a83e:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a843:	e9 8c 03 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a848:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821a84b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 821a84e:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 821a855:	00 
 821a856:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821a859:	89 04 24             	mov    %eax,(%esp)
 821a85c:	e8 65 60 2f 00       	call   85108c6 <_ZNK10CEquipItem11check_eTypeEc>
 821a861:	84 c0                	test   %al,%al
 821a863:	74 25                	je     821a88a <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x478>
 821a865:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 821a86c:	00 
 821a86d:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a874:	00 
 821a875:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a878:	89 04 24             	mov    %eax,(%esp)
 821a87b:	e8 c2 16 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a880:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a885:	e9 4a 03 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a88a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821a88d:	05 a0 03 00 00       	add    $0x3a0,%eax
 821a892:	89 04 24             	mov    %eax,(%esp)
 821a895:	e8 c6 20 f0 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 821a89a:	84 c0                	test   %al,%al
 821a89c:	74 25                	je     821a8c3 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4b1>
 821a89e:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 821a8a5:	00 
 821a8a6:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a8ad:	00 
 821a8ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a8b1:	89 04 24             	mov    %eax,(%esp)
 821a8b4:	e8 89 16 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a8b9:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a8be:	e9 11 03 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a8c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821a8c6:	05 a0 03 00 00       	add    $0x3a0,%eax
 821a8cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821a8d2:	00 
 821a8d3:	89 04 24             	mov    %eax,(%esp)
 821a8d6:	e8 99 fc ec ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 821a8db:	8b 00                	mov    (%eax),%eax
 821a8dd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821a8e0:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 821a8e4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 821a8e8:	75 20                	jne    821a90a <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4f8>
 821a8ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821a8ed:	8b 00                	mov    (%eax),%eax
 821a8ef:	83 c0 18             	add    $0x18,%eax
 821a8f2:	8b 10                	mov    (%eax),%edx
 821a8f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821a8f7:	89 04 24             	mov    %eax,(%esp)
 821a8fa:	ff d2                	call   *%edx
 821a8fc:	83 f0 01             	xor    $0x1,%eax
 821a8ff:	84 c0                	test   %al,%al
 821a901:	74 07                	je     821a90a <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4f8>
 821a903:	b8 01 00 00 00       	mov    $0x1,%eax
 821a908:	eb 05                	jmp    821a90f <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x4fd>
 821a90a:	b8 00 00 00 00       	mov    $0x0,%eax
 821a90f:	84 c0                	test   %al,%al
 821a911:	74 06                	je     821a919 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x507>
 821a913:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 821a917:	eb 3c                	jmp    821a955 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x543>
 821a919:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 821a91d:	75 1d                	jne    821a93c <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x52a>
 821a91f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821a922:	8b 00                	mov    (%eax),%eax
 821a924:	83 c0 18             	add    $0x18,%eax
 821a927:	8b 10                	mov    (%eax),%edx
 821a929:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821a92c:	89 04 24             	mov    %eax,(%esp)
 821a92f:	ff d2                	call   *%edx
 821a931:	84 c0                	test   %al,%al
 821a933:	74 07                	je     821a93c <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x52a>
 821a935:	b8 01 00 00 00       	mov    $0x1,%eax
 821a93a:	eb 05                	jmp    821a941 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x52f>
 821a93c:	b8 00 00 00 00       	mov    $0x0,%eax
 821a941:	84 c0                	test   %al,%al
 821a943:	74 06                	je     821a94b <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x539>
 821a945:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 821a949:	eb 0a                	jmp    821a955 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x543>
 821a94b:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 821a94f:	75 04                	jne    821a955 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x543>
 821a951:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 821a955:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 821a959:	83 f0 01             	xor    $0x1,%eax
 821a95c:	84 c0                	test   %al,%al
 821a95e:	74 25                	je     821a985 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x573>
 821a960:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 821a967:	00 
 821a968:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a96f:	00 
 821a970:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a973:	89 04 24             	mov    %eax,(%esp)
 821a976:	e8 c7 15 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a97b:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a980:	e9 4f 02 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a985:	8b 45 dc             	mov    -0x24(%ebp),%eax
 821a988:	89 04 24             	mov    %eax,(%esp)
 821a98b:	e8 dc 62 ef ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 821a990:	8b 85 62 ff ff ff    	mov    -0x9e(%ebp),%eax
 821a996:	89 04 24             	mov    %eax,(%esp)
 821a999:	e8 6f 28 01 00       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 821a99e:	84 c0                	test   %al,%al
 821a9a0:	74 25                	je     821a9c7 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x5b5>
 821a9a2:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 821a9a9:	00 
 821a9aa:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a9b1:	00 
 821a9b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a9b5:	89 04 24             	mov    %eax,(%esp)
 821a9b8:	e8 85 15 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a9bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a9c2:	e9 0d 02 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821a9c7:	8b 9d 62 ff ff ff    	mov    -0x9e(%ebp),%ebx
 821a9cd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 821a9d0:	89 04 24             	mov    %eax,(%esp)
 821a9d3:	e8 94 62 ef ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 821a9d8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821a9dc:	89 04 24             	mov    %eax,(%esp)
 821a9df:	e8 44 e8 0d 00       	call   82f9228 <_ZN8WongWork14CAvatarItemMgr14isSocketAvatarEi>
 821a9e4:	84 c0                	test   %al,%al
 821a9e6:	74 25                	je     821aa0d <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x5fb>
 821a9e8:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 821a9ef:	00 
 821a9f0:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 821a9f7:	00 
 821a9f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a9fb:	89 04 24             	mov    %eax,(%esp)
 821a9fe:	e8 3f 15 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821aa03:	bb 00 00 00 00       	mov    $0x0,%ebx
 821aa08:	e9 c7 01 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821aa0d:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 821aa10:	89 04 24             	mov    %eax,(%esp)
 821aa13:	e8 d0 5c f3 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 821aa18:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 821aa1c:	74 1d                	je     821aa3b <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x629>
 821aa1e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821aa21:	8b 00                	mov    (%eax),%eax
 821aa23:	83 c0 10             	add    $0x10,%eax
 821aa26:	8b 10                	mov    (%eax),%edx
 821aa28:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821aa2b:	89 04 24             	mov    %eax,(%esp)
 821aa2e:	ff d2                	call   *%edx
 821aa30:	84 c0                	test   %al,%al
 821aa32:	74 07                	je     821aa3b <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x629>
 821aa34:	b8 01 00 00 00       	mov    $0x1,%eax
 821aa39:	eb 05                	jmp    821aa40 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x62e>
 821aa3b:	b8 00 00 00 00       	mov    $0x0,%eax
 821aa40:	84 c0                	test   %al,%al
 821aa42:	74 1a                	je     821aa5e <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x64c>
 821aa44:	8b 45 e8             	mov    -0x18(%ebp),%eax
 821aa47:	8d 55 a5             	lea    -0x5b(%ebp),%edx
 821aa4a:	89 54 24 08          	mov    %edx,0x8(%esp)
 821aa4e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 821aa55:	ff 
 821aa56:	89 04 24             	mov    %eax,(%esp)
 821aa59:	e8 d8 64 f3 ff       	call   8150f36 <_ZNK10CEquipItem15getAvatarSocketEiR20stAvatarEmblemInfo_t>
 821aa5e:	8b 9d 62 ff ff ff    	mov    -0x9e(%ebp),%ebx
 821aa64:	8b 45 dc             	mov    -0x24(%ebp),%eax
 821aa67:	89 04 24             	mov    %eax,(%esp)
 821aa6a:	e8 fd 61 ef ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 821aa6f:	8d 55 a5             	lea    -0x5b(%ebp),%edx
 821aa72:	89 54 24 08          	mov    %edx,0x8(%esp)
 821aa76:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821aa7a:	89 04 24             	mov    %eax,(%esp)
 821aa7d:	e8 4c e7 0d 00       	call   82f91ce <_ZN8WongWork14CAvatarItemMgr19setEmblemSocketDataEiRK20stAvatarEmblemInfo_t>
 821aa82:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 821aa86:	0f b7 d8             	movzwl %ax,%ebx
 821aa89:	8b 45 0c             	mov    0xc(%ebp),%eax
 821aa8c:	89 04 24             	mov    %eax,(%esp)
 821aa8f:	e8 fa f7 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821aa94:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 821aa9b:	00 
 821aa9c:	c7 44 24 10 1b 00 00 	movl   $0x1b,0x10(%esp)
 821aaa3:	00 
 821aaa4:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 821aaab:	00 
 821aaac:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821aab0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821aab7:	00 
 821aab8:	89 04 24             	mov    %eax,(%esp)
 821aabb:	e8 4c 95 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 821aac0:	83 f0 01             	xor    $0x1,%eax
 821aac3:	84 c0                	test   %al,%al
 821aac5:	74 0a                	je     821aad1 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x6bf>
 821aac7:	bb 11 00 00 00       	mov    $0x11,%ebx
 821aacc:	e9 03 01 00 00       	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821aad1:	8b 85 62 ff ff ff    	mov    -0x9e(%ebp),%eax
 821aad7:	89 c3                	mov    %eax,%ebx
 821aad9:	8b 45 0c             	mov    0xc(%ebp),%eax
 821aadc:	89 04 24             	mov    %eax,(%esp)
 821aadf:	e8 6a 11 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 821aae4:	8d 55 a5             	lea    -0x5b(%ebp),%edx
 821aae7:	89 54 24 08          	mov    %edx,0x8(%esp)
 821aaeb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821aaef:	89 04 24             	mov    %eax,(%esp)
 821aaf2:	e8 25 5d 21 00       	call   843081c <_ZN24DB_UpdateAvatarJewelSlot11makeRequestEjjPK20stAvatarEmblemInfo_t>
 821aaf7:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 821aafb:	0f b7 c0             	movzwl %ax,%eax
 821aafe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821ab02:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821ab09:	00 
 821ab0a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821ab11:	00 
 821ab12:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ab15:	89 04 24             	mov    %eax,(%esp)
 821ab18:	e8 3d 1b 46 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 821ab1d:	8d 45 98             	lea    -0x68(%ebp),%eax
 821ab20:	89 04 24             	mov    %eax,(%esp)
 821ab23:	e8 24 32 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821ab28:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 821ab2f:	00 
 821ab30:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821ab37:	00 
 821ab38:	8d 45 98             	lea    -0x68(%ebp),%eax
 821ab3b:	89 04 24             	mov    %eax,(%esp)
 821ab3e:	e8 b9 0d eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821ab43:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821ab4a:	00 
 821ab4b:	8d 45 98             	lea    -0x68(%ebp),%eax
 821ab4e:	89 04 24             	mov    %eax,(%esp)
 821ab51:	e8 ca 0d eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821ab56:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 821ab5a:	0f b7 c0             	movzwl %ax,%eax
 821ab5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ab61:	8d 45 98             	lea    -0x68(%ebp),%eax
 821ab64:	89 04 24             	mov    %eax,(%esp)
 821ab67:	e8 38 f3 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821ab6c:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 821ab70:	0f b7 c0             	movzwl %ax,%eax
 821ab73:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ab77:	8d 45 98             	lea    -0x68(%ebp),%eax
 821ab7a:	89 04 24             	mov    %eax,(%esp)
 821ab7d:	e8 22 f3 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821ab82:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821ab89:	00 
 821ab8a:	8d 45 98             	lea    -0x68(%ebp),%eax
 821ab8d:	89 04 24             	mov    %eax,(%esp)
 821ab90:	e8 c3 0d eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821ab95:	8d 45 98             	lea    -0x68(%ebp),%eax
 821ab98:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ab9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ab9f:	89 04 24             	mov    %eax,(%esp)
 821aba2:	e8 13 da 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821aba7:	bb 00 00 00 00       	mov    $0x0,%ebx
 821abac:	8d 45 98             	lea    -0x68(%ebp),%eax
 821abaf:	89 04 24             	mov    %eax,(%esp)
 821abb2:	e8 c9 32 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821abb7:	eb 1b                	jmp    821abd4 <_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf+0x7c2>
 821abb9:	89 d3                	mov    %edx,%ebx
 821abbb:	89 c6                	mov    %eax,%esi
 821abbd:	8d 45 98             	lea    -0x68(%ebp),%eax
 821abc0:	89 04 24             	mov    %eax,(%esp)
 821abc3:	e8 b8 32 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821abc8:	89 f0                	mov    %esi,%eax
 821abca:	89 da                	mov    %ebx,%edx
 821abcc:	89 04 24             	mov    %eax,(%esp)
 821abcf:	e8 7c 8b 8c 00       	call   8ae3750 <_Unwind_Resume>
 821abd4:	89 d8                	mov    %ebx,%eax
 821abd6:	8d 65 f8             	lea    -0x8(%ebp),%esp
 821abd9:	83 c4 00             	add    $0x0,%esp
 821abdc:	5b                   	pop    %ebx
 821abdd:	5e                   	pop    %esi
 821abde:	5d                   	pop    %ebp
 821abdf:	c3                   	ret

```

```c
// Dispatcher_AddSocketToAvatar::dispatch_sig @ 0x821a412

/* Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AddSocketToAvatar::dispatch_sig
          (Dispatcher_AddSocketToAvatar *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  CAvatarItemMgr *pCVar9;
  CInventory *pCVar10;
  uint uVar11;
  undefined1 local_12c [8];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_e6;
  undefined2 uStack_e4;
  undefined2 local_e2;
  undefined2 uStack_e0;
  undefined4 local_de;
  undefined4 local_da;
  undefined4 local_d6;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined1 local_aa;
  Inven_Item local_a9 [2];
  ulong local_a7;
  uint local_a2;
  PacketGuard local_6c [13];
  stAvatarEmblemInfo_t local_5f [30];
  MSG_ADD_SOCKET_TO_AVATAR local_41 [13];
  ushort local_34;
  ulong local_32;
  ushort local_2e [3];
  CInventory *local_28;
  CItem *local_24;
  CStackableItem *local_20;
  CItem *local_1c;
  CEquipItem *local_18;
  int local_14;
  char local_d;
  
  MSG_ADD_SOCKET_TO_AVATAR::MSG_ADD_SOCKET_TO_AVATAR(local_41);
  local_2e[1] = 0;
  local_2e[2] = 0;
  cVar3 = PacketBuf::get_short(param_2,&local_34);
  if (cVar3 != '\x01') {
    uVar4 = LineFunc(0xcd60,
                     "virtual int Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_32);
  if (cVar3 != '\x01') {
    uVar4 = LineFunc(0xcd62,
                     "virtual int Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  cVar3 = PacketBuf::get_short(param_2,local_2e);
  if (cVar3 != '\x01') {
    uVar4 = LineFunc(0xcd64,
                     "virtual int Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  local_28 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  uVar11 = (uint)local_34;
  CInventory::GetInvenSlot((int)local_a9,(int)local_28);
  cVar3 = Inven_Item::isEmpty(local_a9);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xd1,4,uVar11);
    return 0;
  }
  if (local_a7 != local_32) {
    CUser::SendCmdErrorPacket(param_1,0xd1,4,uVar11);
    return 0;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_e6);
  uVar11 = (uint)local_2e[0];
  CInventory::GetInvenSlot((int)local_12c,(int)local_28);
  local_e6 = (undefined2)local_12c._0_4_;
  uStack_e4 = SUB42(local_12c._0_4_,2);
  local_e2 = (undefined2)local_12c._4_4_;
  uStack_e0 = SUB42(local_12c._4_4_,2);
  local_de = local_124;
  local_da = local_120;
  local_d6 = local_11c;
  local_d2 = local_118;
  local_ce = local_114;
  local_ca = local_110;
  local_c6 = local_10c;
  local_c2 = local_108;
  local_be = local_104;
  local_ba = local_100;
  local_b6 = local_fc;
  local_b2 = local_f8;
  local_ae = local_f4;
  local_aa = local_f0;
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_e6);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x16,uVar11);
    return 0;
  }
  iVar6 = CONCAT22(local_e2,uStack_e4);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_24 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
  if ((local_24 == (CItem *)0x0) || (cVar3 = CItem::is_stackable(local_24), cVar3 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
    return 0;
  }
  local_20 = (CStackableItem *)local_24;
  cVar3 = CStackableItem::verifyStackableAction((CStackableItem *)local_24,0x20);
  if (cVar3 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0xd1,4);
    return 0;
  }
  cVar3 = Inven_Item::isAvatarItemType(local_a9);
  if (cVar3 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
    return 0;
  }
  pCVar5 = (CDataManager *)G_CDataManager();
  local_1c = (CItem *)CDataManager::find_item(pCVar5,local_32);
  if (local_1c != (CItem *)0x0) {
    iVar6 = CItem::get_grade(local_1c);
    iVar7 = CItem::get_grade(local_24);
    if ((iVar6 == iVar7) &&
       (cVar3 = (**(code **)(*(int *)local_1c + 0x10))(local_1c), cVar3 == '\x01')) {
      bVar1 = false;
      goto LAB_0821a81f;
    }
  }
  bVar1 = true;
LAB_0821a81f:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
    return 0;
  }
  local_18 = (CEquipItem *)local_1c;
  cVar3 = CEquipItem::check_eType((CEquipItem *)local_1c,'\b');
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
    return 0;
  }
  cVar3 = std::vector<int,std::allocator<int>>::empty();
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x16);
    return 0;
  }
  piVar8 = (int *)std::vector<int,std::allocator<int>>::operator[]
                            ((vector<int,std::allocator<int>> *)(local_20 + 0x3a0),0);
  local_14 = *piVar8;
  local_d = '\0';
  if ((local_14 == 0) && (cVar3 = (**(code **)(*(int *)local_18 + 0x18))(local_18), cVar3 != '\x01')
     ) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    local_d = '\x01';
  }
  else {
    if ((local_14 == 1) && (cVar3 = (**(code **)(*(int *)local_18 + 0x18))(local_18), cVar3 != '\0')
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_d = '\x01';
    }
    else if (local_14 == 2) {
      local_d = '\x01';
    }
  }
  if (local_d == '\x01') {
    CInventory::GetAvatarItemMgrW(local_28);
    cVar3 = WongWork::CAvatarItemMgr::IsTempKey(local_a2);
    uVar11 = local_a2;
    if (cVar3 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
      return 0;
    }
    pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(local_28);
    cVar3 = WongWork::CAvatarItemMgr::isSocketAvatar(pCVar9,uVar11);
    if (cVar3 == '\0') {
      stAvatarEmblemInfo_t::init(local_5f);
      if ((local_1c == (CItem *)0x0) ||
         (cVar3 = (**(code **)(*(int *)local_1c + 0x10))(local_1c), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CEquipItem::getAvatarSocket((CEquipItem *)local_1c,-1,local_5f);
      }
      uVar11 = local_a2;
      pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(local_28);
      WongWork::CAvatarItemMgr::setEmblemSocketData(pCVar9,uVar11,local_5f);
      uVar2 = local_2e[0];
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::delete_item(pCVar10,1,uVar2,1,0x1b,1);
      if (cVar3 == '\x01') {
        uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        DB_UpdateAvatarJewelSlot::makeRequest(uVar11,local_a2,local_5f);
        CUser::SendUpdateItemList(param_1,1,1,local_34);
        PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 0821ab3e to 0821aba6 has its CatchHandler @ 0821abb9 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0xd1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_6c,(uint)local_34);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_6c,(uint)local_2e[0]);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
        CUser::Send(param_1,local_6c);
        uVar4 = 0;
        PacketGuard::~PacketGuard(local_6c);
      }
      else {
        uVar4 = 0x11;
      }
      return uVar4;
    }
    CUser::SendCmdErrorPacket(param_1,0xd1,0x13);
    return 0;
  }
  CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
  return 0;
}

```

