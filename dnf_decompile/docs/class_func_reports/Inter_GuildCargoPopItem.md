# Inter_GuildCargoPopItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084de330 Inter_GuildCargoPopItem::dispatch_sig  [0x084de330-0x84debb3] ===
 84de330:	55                   	push   %ebp
 84de331:	89 e5                	mov    %esp,%ebp
 84de333:	57                   	push   %edi
 84de334:	56                   	push   %esi
 84de335:	53                   	push   %ebx
 84de336:	81 ec ec 00 00 00    	sub    $0xec,%esp
 84de33c:	8b 45 10             	mov    0x10(%ebp),%eax
 84de33f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84de342:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de345:	89 04 24             	mov    %eax,(%esp)
 84de348:	e8 3f c0 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84de34d:	83 f8 02             	cmp    $0x2,%eax
 84de350:	0f 9e c0             	setle  %al
 84de353:	84 c0                	test   %al,%al
 84de355:	74 0a                	je     84de361 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x31>
 84de357:	bb 00 00 00 00       	mov    $0x0,%ebx
 84de35c:	e9 46 08 00 00       	jmp    84deba7 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x877>
 84de361:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84de368:	ff 
 84de369:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de36c:	89 04 24             	mov    %eax,(%esp)
 84de36f:	e8 2c fc 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84de374:	89 c2                	mov    %eax,%edx
 84de376:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de379:	8b 40 0e             	mov    0xe(%eax),%eax
 84de37c:	39 c2                	cmp    %eax,%edx
 84de37e:	0f 95 c0             	setne  %al
 84de381:	84 c0                	test   %al,%al
 84de383:	74 0a                	je     84de38f <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x5f>
 84de385:	bb 00 00 00 00       	mov    $0x0,%ebx
 84de38a:	e9 18 08 00 00       	jmp    84deba7 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x877>
 84de38f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de392:	8b 40 22             	mov    0x22(%eax),%eax
 84de395:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 84de39b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de39e:	0f b7 40 20          	movzwl 0x20(%eax),%eax
 84de3a2:	0f b7 f8             	movzwl %ax,%edi
 84de3a5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de3a8:	8b 70 1c             	mov    0x1c(%eax),%esi
 84de3ab:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de3ae:	8b 40 17             	mov    0x17(%eax),%eax
 84de3b1:	89 c3                	mov    %eax,%ebx
 84de3b3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de3b6:	8b 48 4c             	mov    0x4c(%eax),%ecx
 84de3b9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de3bc:	0f b6 40 4b          	movzbl 0x4b(%eax),%eax
 84de3c0:	0f b6 d0             	movzbl %al,%edx
 84de3c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de3c6:	05 00 97 07 00       	add    $0x79700,%eax
 84de3cb:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 84de3d1:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84de3d7:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84de3db:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84de3df:	89 74 24 14          	mov    %esi,0x14(%esp)
 84de3e3:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84de3e7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84de3eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84de3ef:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 84de3f6:	00 
 84de3f7:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 84de3fd:	89 04 24             	mov    %eax,(%esp)
 84de400:	e8 7b 83 1a 00       	call   8686780 <_ZN15cUserHistoryLog23GuildCargoPopItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii>
 84de405:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de408:	0f b6 40 4b          	movzbl 0x4b(%eax),%eax
 84de40c:	3c c1                	cmp    $0xc1,%al
 84de40e:	74 2b                	je     84de43b <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x10b>
 84de410:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de413:	0f b6 40 4b          	movzbl 0x4b(%eax),%eax
 84de417:	0f b6 c0             	movzbl %al,%eax
 84de41a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84de41e:	c7 44 24 04 fc 00 00 	movl   $0xfc,0x4(%esp)
 84de425:	00 
 84de426:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de429:	89 04 24             	mov    %eax,(%esp)
 84de42c:	e8 11 db 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84de431:	bb 00 00 00 00       	mov    $0x0,%ebx
 84de436:	e9 6c 07 00 00       	jmp    84deba7 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x877>
 84de43b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de43e:	89 04 24             	mov    %eax,(%esp)
 84de441:	e8 48 be bf ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84de446:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84de449:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de44c:	8b 40 17             	mov    0x17(%eax),%eax
 84de44f:	89 c3                	mov    %eax,%ebx
 84de451:	e8 45 dd be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84de456:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84de45a:	89 04 24             	mov    %eax,(%esp)
 84de45d:	e8 d0 15 e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84de462:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84de465:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 84de46b:	89 04 24             	mov    %eax,(%esp)
 84de46e:	e8 e1 d3 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84de473:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84de477:	75 76                	jne    84de4ef <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x1bf>
 84de479:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de47c:	89 04 24             	mov    %eax,(%esp)
 84de47f:	e8 ca d7 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84de484:	89 c3                	mov    %eax,%ebx
 84de486:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de489:	8b 70 17             	mov    0x17(%eax),%esi
 84de48c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84de493:	00 
 84de494:	c7 44 24 08 6e 4a 00 	movl   $0x4a6e,0x8(%esp)
 84de49b:	00 
 84de49c:	c7 44 24 04 00 bc c8 	movl   $0x8c8bc00,0x4(%esp)
 84de4a3:	08 
 84de4a4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84de4a7:	89 04 24             	mov    %eax,(%esp)
 84de4aa:	e8 69 12 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84de4af:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84de4b3:	89 74 24 08          	mov    %esi,0x8(%esp)
 84de4b7:	c7 44 24 04 9c 99 c8 	movl   $0x8c8999c,0x4(%esp)
 84de4be:	08 
 84de4bf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84de4c2:	89 04 24             	mov    %eax,(%esp)
 84de4c5:	e8 be 12 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84de4ca:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84de4d1:	00 
 84de4d2:	c7 44 24 04 fc 00 00 	movl   $0xfc,0x4(%esp)
 84de4d9:	00 
 84de4da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de4dd:	89 04 24             	mov    %eax,(%esp)
 84de4e0:	e8 5d da 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84de4e5:	bb 00 00 00 00       	mov    $0x0,%ebx
 84de4ea:	e9 b8 06 00 00       	jmp    84deba7 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x877>
 84de4ef:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de4f2:	8b 00                	mov    (%eax),%eax
 84de4f4:	83 c0 08             	add    $0x8,%eax
 84de4f7:	8b 10                	mov    (%eax),%edx
 84de4f9:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 84de4ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de503:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de506:	89 04 24             	mov    %eax,(%esp)
 84de509:	ff d2                	call   *%edx
 84de50b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de50e:	8b 40 17             	mov    0x17(%eax),%eax
 84de511:	89 85 7d ff ff ff    	mov    %eax,-0x83(%ebp)
 84de517:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de51a:	8b 40 1c             	mov    0x1c(%eax),%eax
 84de51d:	89 45 82             	mov    %eax,-0x7e(%ebp)
 84de520:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de523:	0f b7 40 20          	movzwl 0x20(%eax),%eax
 84de527:	66 89 45 86          	mov    %ax,-0x7a(%ebp)
 84de52b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de52e:	8b 40 22             	mov    0x22(%eax),%eax
 84de531:	89 45 88             	mov    %eax,-0x78(%ebp)
 84de534:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de537:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84de53b:	0f b6 c0             	movzbl %al,%eax
 84de53e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de542:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 84de548:	89 04 24             	mov    %eax,(%esp)
 84de54b:	e8 98 22 c7 ff       	call   81507e8 <_ZN10Inven_Item11SetItemAttrEh>
 84de550:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de553:	0f b7 40 27          	movzwl 0x27(%eax),%eax
 84de557:	0f b7 d0             	movzwl %ax,%edx
 84de55a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de55d:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 84de561:	0f b6 c0             	movzbl %al,%eax
 84de564:	89 54 24 08          	mov    %edx,0x8(%esp)
 84de568:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de56c:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 84de572:	83 c0 11             	add    $0x11,%eax
 84de575:	89 04 24             	mov    %eax,(%esp)
 84de578:	e8 67 5b fd ff       	call   84b40e4 <_ZN17stAmplifyOption_t6assignEht>
 84de57d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de580:	8b 50 33             	mov    0x33(%eax),%edx
 84de583:	89 55 a0             	mov    %edx,-0x60(%ebp)
 84de586:	8b 50 37             	mov    0x37(%eax),%edx
 84de589:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 84de58c:	8b 50 3b             	mov    0x3b(%eax),%edx
 84de58f:	89 55 a8             	mov    %edx,-0x58(%ebp)
 84de592:	0f b7 40 3f          	movzwl 0x3f(%eax),%eax
 84de596:	66 89 45 ac          	mov    %ax,-0x54(%ebp)
 84de59a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de59d:	0f b6 40 41          	movzbl 0x41(%eax),%eax
 84de5a1:	88 45 ae             	mov    %al,-0x52(%ebp)
 84de5a4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84de5ab:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de5ae:	8b 00                	mov    (%eax),%eax
 84de5b0:	83 c0 14             	add    $0x14,%eax
 84de5b3:	8b 10                	mov    (%eax),%edx
 84de5b5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de5b8:	89 04 24             	mov    %eax,(%esp)
 84de5bb:	ff d2                	call   *%edx
 84de5bd:	84 c0                	test   %al,%al
 84de5bf:	74 1d                	je     84de5de <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x2ae>
 84de5c1:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 84de5c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de5cb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84de5ce:	89 04 24             	mov    %eax,(%esp)
 84de5d1:	e8 ce c4 02 00       	call   850aaa4 <_ZNK10CInventory25tryInsertItemIntoCreatureER10Inven_Item>
 84de5d6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84de5d9:	e9 29 01 00 00       	jmp    84de707 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x3d7>
 84de5de:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de5e1:	8b 00                	mov    (%eax),%eax
 84de5e3:	83 c0 10             	add    $0x10,%eax
 84de5e6:	8b 10                	mov    (%eax),%edx
 84de5e8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de5eb:	89 04 24             	mov    %eax,(%esp)
 84de5ee:	ff d2                	call   *%edx
 84de5f0:	84 c0                	test   %al,%al
 84de5f2:	0f 84 8a 00 00 00    	je     84de682 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x352>
 84de5f8:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 84de5fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de602:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 84de608:	89 44 24 08          	mov    %eax,0x8(%esp)
 84de60c:	8b 45 83             	mov    -0x7d(%ebp),%eax
 84de60f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84de613:	8b 45 87             	mov    -0x79(%ebp),%eax
 84de616:	89 44 24 10          	mov    %eax,0x10(%esp)
 84de61a:	8b 45 8b             	mov    -0x75(%ebp),%eax
 84de61d:	89 44 24 14          	mov    %eax,0x14(%esp)
 84de621:	8b 45 8f             	mov    -0x71(%ebp),%eax
 84de624:	89 44 24 18          	mov    %eax,0x18(%esp)
 84de628:	8b 45 93             	mov    -0x6d(%ebp),%eax
 84de62b:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84de62f:	8b 45 97             	mov    -0x69(%ebp),%eax
 84de632:	89 44 24 20          	mov    %eax,0x20(%esp)
 84de636:	8b 45 9b             	mov    -0x65(%ebp),%eax
 84de639:	89 44 24 24          	mov    %eax,0x24(%esp)
 84de63d:	8b 45 9f             	mov    -0x61(%ebp),%eax
 84de640:	89 44 24 28          	mov    %eax,0x28(%esp)
 84de644:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 84de647:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84de64b:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84de64e:	89 44 24 30          	mov    %eax,0x30(%esp)
 84de652:	8b 45 ab             	mov    -0x55(%ebp),%eax
 84de655:	89 44 24 34          	mov    %eax,0x34(%esp)
 84de659:	8b 45 af             	mov    -0x51(%ebp),%eax
 84de65c:	89 44 24 38          	mov    %eax,0x38(%esp)
 84de660:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84de663:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84de667:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 84de66b:	88 44 24 40          	mov    %al,0x40(%esp)
 84de66f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84de672:	89 04 24             	mov    %eax,(%esp)
 84de675:	e8 7a 4f 02 00       	call   85035f4 <_ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item>
 84de67a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84de67d:	e9 85 00 00 00       	jmp    84de707 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x3d7>
 84de682:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 84de688:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de68c:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 84de692:	89 44 24 08          	mov    %eax,0x8(%esp)
 84de696:	8b 45 83             	mov    -0x7d(%ebp),%eax
 84de699:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84de69d:	8b 45 87             	mov    -0x79(%ebp),%eax
 84de6a0:	89 44 24 10          	mov    %eax,0x10(%esp)
 84de6a4:	8b 45 8b             	mov    -0x75(%ebp),%eax
 84de6a7:	89 44 24 14          	mov    %eax,0x14(%esp)
 84de6ab:	8b 45 8f             	mov    -0x71(%ebp),%eax
 84de6ae:	89 44 24 18          	mov    %eax,0x18(%esp)
 84de6b2:	8b 45 93             	mov    -0x6d(%ebp),%eax
 84de6b5:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84de6b9:	8b 45 97             	mov    -0x69(%ebp),%eax
 84de6bc:	89 44 24 20          	mov    %eax,0x20(%esp)
 84de6c0:	8b 45 9b             	mov    -0x65(%ebp),%eax
 84de6c3:	89 44 24 24          	mov    %eax,0x24(%esp)
 84de6c7:	8b 45 9f             	mov    -0x61(%ebp),%eax
 84de6ca:	89 44 24 28          	mov    %eax,0x28(%esp)
 84de6ce:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 84de6d1:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84de6d5:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84de6d8:	89 44 24 30          	mov    %eax,0x30(%esp)
 84de6dc:	8b 45 ab             	mov    -0x55(%ebp),%eax
 84de6df:	89 44 24 34          	mov    %eax,0x34(%esp)
 84de6e3:	8b 45 af             	mov    -0x51(%ebp),%eax
 84de6e6:	89 44 24 38          	mov    %eax,0x38(%esp)
 84de6ea:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84de6ed:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84de6f1:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 84de6f5:	88 44 24 40          	mov    %al,0x40(%esp)
 84de6f9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84de6fc:	89 04 24             	mov    %eax,(%esp)
 84de6ff:	e8 c6 37 02 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 84de704:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84de707:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84de70b:	0f 89 09 01 00 00    	jns    84de81a <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x4ea>
 84de711:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de714:	89 04 24             	mov    %eax,(%esp)
 84de717:	e8 74 d5 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84de71c:	89 c3                	mov    %eax,%ebx
 84de71e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de721:	8b 70 0e             	mov    0xe(%eax),%esi
 84de724:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84de72b:	00 
 84de72c:	c7 44 24 08 85 99 c8 	movl   $0x8c89985,0x8(%esp)
 84de733:	08 
 84de734:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84de73b:	00 
 84de73c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84de743:	e8 b6 70 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84de748:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84de74f:	00 
 84de750:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84de757:	00 
 84de758:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84de75c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84de763:	00 
 84de764:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84de76b:	00 
 84de76c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84de773:	00 
 84de774:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84de778:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84de77f:	00 
 84de780:	8d 95 7b ff ff ff    	lea    -0x85(%ebp),%edx
 84de786:	89 54 24 04          	mov    %edx,0x4(%esp)
 84de78a:	89 04 24             	mov    %eax,(%esp)
 84de78d:	e8 56 6e 07 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84de792:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de795:	83 c0 41             	add    $0x41,%eax
 84de798:	89 04 24             	mov    %eax,(%esp)
 84de79b:	e8 b8 05 c4 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 84de7a0:	0f b6 c0             	movzbl %al,%eax
 84de7a3:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 84de7a9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de7ac:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84de7b0:	0f b6 f8             	movzbl %al,%edi
 84de7b3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de7b6:	8b 40 22             	mov    0x22(%eax),%eax
 84de7b9:	89 c6                	mov    %eax,%esi
 84de7bb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de7be:	0f b7 40 20          	movzwl 0x20(%eax),%eax
 84de7c2:	0f b7 d8             	movzwl %ax,%ebx
 84de7c5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de7c8:	8b 48 1c             	mov    0x1c(%eax),%ecx
 84de7cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de7ce:	8b 40 17             	mov    0x17(%eax),%eax
 84de7d1:	89 c2                	mov    %eax,%edx
 84de7d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de7d6:	05 00 97 07 00       	add    $0x79700,%eax
 84de7db:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 84de7e1:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 84de7e7:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84de7eb:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84de7ef:	89 74 24 14          	mov    %esi,0x14(%esp)
 84de7f3:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84de7f7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84de7fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84de7ff:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 84de806:	00 
 84de807:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 84de80d:	89 04 24             	mov    %eax,(%esp)
 84de810:	e8 7f 7e 1a 00       	call   8686694 <_ZN15cUserHistoryLog22GuildCargoItemRecoveryE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiih>
 84de815:	e9 b1 02 00 00       	jmp    84deacb <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x79b>
 84de81a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84de821:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de824:	8b 00                	mov    (%eax),%eax
 84de826:	83 c0 14             	add    $0x14,%eax
 84de829:	8b 10                	mov    (%eax),%edx
 84de82b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de82e:	89 04 24             	mov    %eax,(%esp)
 84de831:	ff d2                	call   *%edx
 84de833:	84 c0                	test   %al,%al
 84de835:	74 35                	je     84de86c <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x53c>
 84de837:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84de83e:	00 
 84de83f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84de846:	00 
 84de847:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 84de84e:	00 
 84de84f:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 84de855:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de859:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84de85c:	89 04 24             	mov    %eax,(%esp)
 84de85f:	e8 06 c0 02 00       	call   850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>
 84de864:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84de867:	e9 51 01 00 00       	jmp    84de9bd <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x68d>
 84de86c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de86f:	8b 00                	mov    (%eax),%eax
 84de871:	83 c0 10             	add    $0x10,%eax
 84de874:	8b 10                	mov    (%eax),%edx
 84de876:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de879:	89 04 24             	mov    %eax,(%esp)
 84de87c:	ff d2                	call   *%edx
 84de87e:	84 c0                	test   %al,%al
 84de880:	0f 84 9a 00 00 00    	je     84de920 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x5f0>
 84de886:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 84de88d:	00 
 84de88e:	c7 44 24 44 12 00 00 	movl   $0x12,0x44(%esp)
 84de895:	00 
 84de896:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 84de89c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de8a0:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 84de8a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84de8aa:	8b 45 83             	mov    -0x7d(%ebp),%eax
 84de8ad:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84de8b1:	8b 45 87             	mov    -0x79(%ebp),%eax
 84de8b4:	89 44 24 10          	mov    %eax,0x10(%esp)
 84de8b8:	8b 45 8b             	mov    -0x75(%ebp),%eax
 84de8bb:	89 44 24 14          	mov    %eax,0x14(%esp)
 84de8bf:	8b 45 8f             	mov    -0x71(%ebp),%eax
 84de8c2:	89 44 24 18          	mov    %eax,0x18(%esp)
 84de8c6:	8b 45 93             	mov    -0x6d(%ebp),%eax
 84de8c9:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84de8cd:	8b 45 97             	mov    -0x69(%ebp),%eax
 84de8d0:	89 44 24 20          	mov    %eax,0x20(%esp)
 84de8d4:	8b 45 9b             	mov    -0x65(%ebp),%eax
 84de8d7:	89 44 24 24          	mov    %eax,0x24(%esp)
 84de8db:	8b 45 9f             	mov    -0x61(%ebp),%eax
 84de8de:	89 44 24 28          	mov    %eax,0x28(%esp)
 84de8e2:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 84de8e5:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84de8e9:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84de8ec:	89 44 24 30          	mov    %eax,0x30(%esp)
 84de8f0:	8b 45 ab             	mov    -0x55(%ebp),%eax
 84de8f3:	89 44 24 34          	mov    %eax,0x34(%esp)
 84de8f7:	8b 45 af             	mov    -0x51(%ebp),%eax
 84de8fa:	89 44 24 38          	mov    %eax,0x38(%esp)
 84de8fe:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84de901:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84de905:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 84de909:	88 44 24 40          	mov    %al,0x40(%esp)
 84de90d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84de910:	89 04 24             	mov    %eax,(%esp)
 84de913:	e8 64 4d 02 00       	call   850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>
 84de918:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84de91b:	e9 9d 00 00 00       	jmp    84de9bd <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x68d>
 84de920:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 84de927:	00 
 84de928:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 84de92f:	00 
 84de930:	c7 44 24 44 28 00 00 	movl   $0x28,0x44(%esp)
 84de937:	00 
 84de938:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 84de93e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de942:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 84de948:	89 44 24 08          	mov    %eax,0x8(%esp)
 84de94c:	8b 45 83             	mov    -0x7d(%ebp),%eax
 84de94f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84de953:	8b 45 87             	mov    -0x79(%ebp),%eax
 84de956:	89 44 24 10          	mov    %eax,0x10(%esp)
 84de95a:	8b 45 8b             	mov    -0x75(%ebp),%eax
 84de95d:	89 44 24 14          	mov    %eax,0x14(%esp)
 84de961:	8b 45 8f             	mov    -0x71(%ebp),%eax
 84de964:	89 44 24 18          	mov    %eax,0x18(%esp)
 84de968:	8b 45 93             	mov    -0x6d(%ebp),%eax
 84de96b:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84de96f:	8b 45 97             	mov    -0x69(%ebp),%eax
 84de972:	89 44 24 20          	mov    %eax,0x20(%esp)
 84de976:	8b 45 9b             	mov    -0x65(%ebp),%eax
 84de979:	89 44 24 24          	mov    %eax,0x24(%esp)
 84de97d:	8b 45 9f             	mov    -0x61(%ebp),%eax
 84de980:	89 44 24 28          	mov    %eax,0x28(%esp)
 84de984:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 84de987:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84de98b:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84de98e:	89 44 24 30          	mov    %eax,0x30(%esp)
 84de992:	8b 45 ab             	mov    -0x55(%ebp),%eax
 84de995:	89 44 24 34          	mov    %eax,0x34(%esp)
 84de999:	8b 45 af             	mov    -0x51(%ebp),%eax
 84de99c:	89 44 24 38          	mov    %eax,0x38(%esp)
 84de9a0:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84de9a3:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84de9a7:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 84de9ab:	88 44 24 40          	mov    %al,0x40(%esp)
 84de9af:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84de9b2:	89 04 24             	mov    %eax,(%esp)
 84de9b5:	e8 cc 43 02 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 84de9ba:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84de9bd:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84de9c1:	0f 89 04 01 00 00    	jns    84deacb <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x79b>
 84de9c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de9ca:	89 04 24             	mov    %eax,(%esp)
 84de9cd:	e8 be d2 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84de9d2:	89 c3                	mov    %eax,%ebx
 84de9d4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84de9d7:	8b 70 0e             	mov    0xe(%eax),%esi
 84de9da:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84de9e1:	00 
 84de9e2:	c7 44 24 08 85 99 c8 	movl   $0x8c89985,0x8(%esp)
 84de9e9:	08 
 84de9ea:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84de9f1:	00 
 84de9f2:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84de9f9:	e8 00 6e 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84de9fe:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84dea05:	00 
 84dea06:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84dea0d:	00 
 84dea0e:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84dea12:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84dea19:	00 
 84dea1a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84dea21:	00 
 84dea22:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84dea29:	00 
 84dea2a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84dea2e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dea35:	00 
 84dea36:	8d 95 7b ff ff ff    	lea    -0x85(%ebp),%edx
 84dea3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dea40:	89 04 24             	mov    %eax,(%esp)
 84dea43:	e8 a0 6b 07 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84dea48:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84dea4b:	83 c0 41             	add    $0x41,%eax
 84dea4e:	89 04 24             	mov    %eax,(%esp)
 84dea51:	e8 02 03 c4 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 84dea56:	0f b6 c0             	movzbl %al,%eax
 84dea59:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 84dea5f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84dea62:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84dea66:	0f b6 f8             	movzbl %al,%edi
 84dea69:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84dea6c:	8b 40 22             	mov    0x22(%eax),%eax
 84dea6f:	89 c6                	mov    %eax,%esi
 84dea71:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84dea74:	0f b7 40 20          	movzwl 0x20(%eax),%eax
 84dea78:	0f b7 d8             	movzwl %ax,%ebx
 84dea7b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84dea7e:	8b 48 1c             	mov    0x1c(%eax),%ecx
 84dea81:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84dea84:	8b 40 17             	mov    0x17(%eax),%eax
 84dea87:	89 c2                	mov    %eax,%edx
 84dea89:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dea8c:	05 00 97 07 00       	add    $0x79700,%eax
 84dea91:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 84dea97:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 84dea9d:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84deaa1:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84deaa5:	89 74 24 14          	mov    %esi,0x14(%esp)
 84deaa9:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84deaad:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84deab1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84deab5:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 84deabc:	00 
 84deabd:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 84deac3:	89 04 24             	mov    %eax,(%esp)
 84deac6:	e8 c9 7b 1a 00       	call   8686694 <_ZN15cUserHistoryLog22GuildCargoItemRecoveryE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiih>
 84deacb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deace:	89 04 24             	mov    %eax,(%esp)
 84dead1:	e8 76 f2 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dead6:	c7 44 24 08 fc 00 00 	movl   $0xfc,0x8(%esp)
 84deadd:	00 
 84deade:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84deae5:	00 
 84deae6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deae9:	89 04 24             	mov    %eax,(%esp)
 84deaec:	e8 0b ce be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84deaf1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84deaf8:	00 
 84deaf9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deafc:	89 04 24             	mov    %eax,(%esp)
 84deaff:	e8 1c ce be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84deb04:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84deb07:	8b 40 4c             	mov    0x4c(%eax),%eax
 84deb0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84deb0e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deb11:	89 04 24             	mov    %eax,(%esp)
 84deb14:	e8 8b b3 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84deb19:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84deb1c:	8b 40 12             	mov    0x12(%eax),%eax
 84deb1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84deb23:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deb26:	89 04 24             	mov    %eax,(%esp)
 84deb29:	e8 f2 cd be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84deb2e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84deb31:	89 44 24 04          	mov    %eax,0x4(%esp)
 84deb35:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deb38:	89 04 24             	mov    %eax,(%esp)
 84deb3b:	e8 64 b3 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84deb40:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84deb43:	8b 40 1c             	mov    0x1c(%eax),%eax
 84deb46:	89 44 24 04          	mov    %eax,0x4(%esp)
 84deb4a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deb4d:	89 04 24             	mov    %eax,(%esp)
 84deb50:	e8 e7 cd be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84deb55:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84deb5c:	00 
 84deb5d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deb60:	89 04 24             	mov    %eax,(%esp)
 84deb63:	e8 f0 cd be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84deb68:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deb6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84deb6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84deb72:	89 04 24             	mov    %eax,(%esp)
 84deb75:	e8 40 9a 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84deb7a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84deb7f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deb82:	89 04 24             	mov    %eax,(%esp)
 84deb85:	e8 f6 f2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84deb8a:	eb 1b                	jmp    84deba7 <_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci+0x877>
 84deb8c:	89 d3                	mov    %edx,%ebx
 84deb8e:	89 c6                	mov    %eax,%esi
 84deb90:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84deb93:	89 04 24             	mov    %eax,(%esp)
 84deb96:	e8 e5 f2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84deb9b:	89 f0                	mov    %esi,%eax
 84deb9d:	89 da                	mov    %ebx,%edx
 84deb9f:	89 04 24             	mov    %eax,(%esp)
 84deba2:	e8 a9 4b 60 00       	call   8ae3750 <_Unwind_Resume>
 84deba7:	89 d8                	mov    %ebx,%eax
 84deba9:	81 c4 ec 00 00 00    	add    $0xec,%esp
 84debaf:	5b                   	pop    %ebx
 84debb0:	5e                   	pop    %esi
 84debb1:	5f                   	pop    %edi
 84debb2:	5d                   	pop    %ebp
 84debb3:	c3                   	ret

```

```c
// Inter_GuildCargoPopItem::dispatch_sig @ 0x84de330

/* Inter_GuildCargoPopItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoPopItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  CDataManager *this;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 local_89;
  undefined2 uStack_87;
  undefined2 uStack_85;
  undefined1 uStack_83;
  undefined4 uStack_82;
  undefined1 local_7e;
  undefined4 uStack_7d;
  undefined4 uStack_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 uStack_65;
  undefined4 uStack_61;
  undefined4 uStack_5d;
  undefined1 uStack_59;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_55;
  undefined4 local_51;
  undefined1 local_4d;
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  int local_30;
  CInventory *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  
  local_30 = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar4) &&
     (iVar4 = CUser::get_charac_no((CUser *)param_2,-1), iVar4 == *(int *)(local_30 + 0xe))) {
    cUserHistoryLog::GuildCargoPopItemResult
              ((cUserHistoryLog *)(param_2 + 0x79700),0xb,*(undefined1 *)(local_30 + 0x4b),
               *(undefined4 *)(local_30 + 0x4c),*(undefined4 *)(local_30 + 0x17),
               *(undefined4 *)(local_30 + 0x1c),*(undefined2 *)(local_30 + 0x20),
               *(undefined4 *)(local_30 + 0x22));
    if (*(char *)(local_30 + 0x4b) == -0x3f) {
      local_2c = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      iVar4 = *(int *)(local_30 + 0x17);
      this = (CDataManager *)G_CDataManager();
      local_28 = (int *)CDataManager::find_item(this,iVar4);
      Inven_Item::Inven_Item((Inven_Item *)&local_89);
      if (local_28 == (int *)0x0) {
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        uVar1 = *(undefined4 *)(local_30 + 0x17);
        cMyTrace::cMyTrace(local_40,
                           "virtual int Inter_GuildCargoPopItem::dispatch_sig(CUser*, char*, int)",
                           0x4a6e,0);
        cMyTrace::operator()
                  (local_40,"ERROR OCCURRED! GUILD CARGO POP ITEM - fail find item(%d), User(%d)",
                   uVar1,uVar5);
        CUser::SendCmdErrorPacket((CUser *)param_2,0xfc,0xc5);
      }
      else {
        (**(code **)(*local_28 + 8))(local_28,&local_89);
        uStack_87 = (undefined2)*(undefined4 *)(local_30 + 0x17);
        uStack_85 = (undefined2)((uint)*(undefined4 *)(local_30 + 0x17) >> 0x10);
        uStack_82 = *(undefined4 *)(local_30 + 0x1c);
        local_7e = (undefined1)*(undefined2 *)(local_30 + 0x20);
        uStack_7d._0_1_ = (undefined1)((ushort)*(undefined2 *)(local_30 + 0x20) >> 8);
        uStack_7d._1_3_ = (undefined3)*(undefined4 *)(local_30 + 0x22);
        uStack_79._0_1_ = (undefined1)((uint)*(undefined4 *)(local_30 + 0x22) >> 0x18);
        Inven_Item::SetItemAttr((Inven_Item *)&local_89,*(uchar *)(local_30 + 0x1b));
        stAmplifyOption_t::assign
                  ((stAmplifyOption_t *)((int)&uStack_79 + 1),*(uchar *)(local_30 + 0x26),
                   *(ushort *)(local_30 + 0x27));
        uStack_65._1_3_ = (undefined3)*(undefined4 *)(local_30 + 0x33);
        uStack_61._1_3_ = (undefined3)*(undefined4 *)(local_30 + 0x37);
        uStack_61 = CONCAT31(uStack_61._1_3_,(char)((uint)*(undefined4 *)(local_30 + 0x33) >> 0x18))
        ;
        uStack_5d._1_3_ = (undefined3)*(undefined4 *)(local_30 + 0x3b);
        uStack_5d = CONCAT31(uStack_5d._1_3_,(char)((uint)*(undefined4 *)(local_30 + 0x37) >> 0x18))
        ;
        uStack_59 = (undefined1)((uint)*(undefined4 *)(local_30 + 0x3b) >> 0x18);
        local_58 = *(undefined2 *)(local_30 + 0x3f);
        local_56 = *(undefined1 *)(local_30 + 0x41);
        local_24 = 0;
        cVar2 = (**(code **)(*local_28 + 0x14))(local_28);
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*local_28 + 0x10))(local_28);
          if (cVar2 == '\0') {
            local_24 = CInventory::tryInsertItemIntoInventory
                                 (local_2c,CONCAT22(uStack_87,local_89),
                                  CONCAT13((undefined1)uStack_82,CONCAT12(uStack_83,uStack_85)),
                                  CONCAT13(local_7e,uStack_82._1_3_),uStack_7d,uStack_79,local_75,
                                  local_71,local_6d,local_69,uStack_65,uStack_61,uStack_5d,
                                  CONCAT13(local_56,CONCAT21(local_58,uStack_59)),local_55,local_51,
                                  local_4d);
          }
          else {
            local_24 = CInventory::tryInsertAvatarIntoInventory
                                 (local_2c,CONCAT22(uStack_87,local_89),
                                  CONCAT13((undefined1)uStack_82,CONCAT12(uStack_83,uStack_85)),
                                  CONCAT13(local_7e,uStack_82._1_3_),uStack_7d,uStack_79,local_75,
                                  local_71,local_6d,local_69,uStack_65,uStack_61,uStack_5d,
                                  CONCAT13(local_56,CONCAT21(local_58,uStack_59)),local_55,local_51,
                                  local_4d);
          }
        }
        else {
          local_24 = CInventory::tryInsertItemIntoCreature(local_2c,(Inven_Item *)&local_89);
        }
        if (local_24 < 0) {
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          uVar1 = *(undefined4 *)(local_30 + 0xe);
          uVar6 = RDARScriptStringManager::findString
                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                             "game_server_msg_114",(bool *)0x0);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar6,&local_89,0,uVar1,0,0,0,uVar5,0,0);
          uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(local_30 + 0x41));
          cUserHistoryLog::GuildCargoItemRecovery
                    ((cUserHistoryLog *)(param_2 + 0x79700),0xc,*(undefined4 *)(local_30 + 0x17),
                     *(undefined4 *)(local_30 + 0x1c),*(undefined2 *)(local_30 + 0x20),
                     *(undefined4 *)(local_30 + 0x22),*(undefined1 *)(local_30 + 0x1b),uVar3);
        }
        else {
          local_20 = 0;
          cVar2 = (**(code **)(*local_28 + 0x14))(local_28);
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*local_28 + 0x10))(local_28);
            if (cVar2 == '\0') {
              local_20 = CInventory::insertItemIntoInventory
                                   (local_2c,CONCAT22(uStack_87,local_89),
                                    CONCAT13((undefined1)uStack_82,CONCAT12(uStack_83,uStack_85)),
                                    CONCAT13(local_7e,uStack_82._1_3_),uStack_7d,uStack_79,local_75,
                                    local_71,local_6d,local_69,uStack_65,uStack_61,uStack_5d,
                                    CONCAT13(local_56,CONCAT21(local_58,uStack_59)),local_55,
                                    local_51,local_4d,0x28,1,0);
            }
            else {
              local_20 = CInventory::insertAvatarIntoInventory
                                   (local_2c,CONCAT22(uStack_87,local_89),
                                    CONCAT13((undefined1)uStack_82,CONCAT12(uStack_83,uStack_85)),
                                    CONCAT13(local_7e,uStack_82._1_3_),uStack_7d,uStack_79,local_75,
                                    local_71,local_6d,local_69,uStack_65,uStack_61,uStack_5d,
                                    CONCAT13(local_56,CONCAT21(local_58,uStack_59)),local_55,
                                    local_51,local_4d,0x12,1);
            }
          }
          else {
            local_20 = CInventory::insertItemIntoCreature(local_2c,&local_89,0x28,1,0);
          }
          if (local_20 < 0) {
            uVar5 = CUser::GetServerGroup((CUser *)param_2);
            uVar1 = *(undefined4 *)(local_30 + 0xe);
            uVar6 = RDARScriptStringManager::findString
                              ((RDARScriptStringManager *)g_scriptStringManager_,4,
                               "game_server_msg_114",(bool *)0x0);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar6,&local_89,0,uVar1,0,0,0,uVar5,0,0);
            uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate
                              ((UpgradeSeparateInfo *)(local_30 + 0x41));
            cUserHistoryLog::GuildCargoItemRecovery
                      ((cUserHistoryLog *)(param_2 + 0x79700),0xc,*(undefined4 *)(local_30 + 0x17),
                       *(undefined4 *)(local_30 + 0x1c),*(undefined2 *)(local_30 + 0x20),
                       *(undefined4 *)(local_30 + 0x22),*(undefined1 *)(local_30 + 0x1b),uVar3);
          }
        }
        PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 084deaec to 084deb79 has its CatchHandler @ 084deb8c */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,1,0xfc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,*(int *)(local_30 + 0x4c));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,*(int *)(local_30 + 0x12));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,local_24);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_4c,*(int *)(local_30 + 0x1c));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
        CUser::Send((CUser *)param_2,local_4c);
        PacketGuard::~PacketGuard(local_4c);
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xfc,*(undefined1 *)(local_30 + 0x4b));
    }
  }
  return 0;
}

```

