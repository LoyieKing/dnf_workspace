# advancealtar__DB_StatisticAdvanceAltar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 081412b2 advancealtar::DB_StatisticAdvanceAltar::dispatch  [0x081412b2-0x8141780] ===
 81412b2:	55                   	push   %ebp
 81412b3:	89 e5                	mov    %esp,%ebp
 81412b5:	57                   	push   %edi
 81412b6:	56                   	push   %esi
 81412b7:	53                   	push   %ebx
 81412b8:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 81412be:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 81412c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81412ca:	00 
 81412cb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81412d2:	00 
 81412d3:	89 04 24             	mov    %eax,(%esp)
 81412d6:	e8 63 3f 2b 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81412db:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81412de:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81412e4:	89 04 24             	mov    %eax,(%esp)
 81412e7:	e8 d4 0c 57 00       	call   86b1fc0 <_Z19__GetCurrentDNFDateR2tm>
 81412ec:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 81412f3:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 81412fa:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8141301:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8141307:	8b 55 80             	mov    -0x80(%ebp),%edx
 814130a:	8d 4a 01             	lea    0x1(%edx),%ecx
 814130d:	8b 55 84             	mov    -0x7c(%ebp),%edx
 8141310:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 8141316:	89 44 24 10          	mov    %eax,0x10(%esp)
 814131a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 814131e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8141322:	c7 44 24 04 67 db b6 	movl   $0x8b6db67,0x4(%esp)
 8141329:	08 
 814132a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814132d:	89 04 24             	mov    %eax,(%esp)
 8141330:	e8 0b d1 f3 ff       	call   807e440 <sprintf@plt>
 8141335:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 814133c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 814133f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141343:	8b 45 14             	mov    0x14(%ebp),%eax
 8141346:	89 04 24             	mov    %eax,(%esp)
 8141349:	e8 76 b2 4d 00       	call   861c5c4 <_ZN6StreamrsERi>
 814134e:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8141355:	e9 82 01 00 00       	jmp    81414dc <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x22a>
 814135a:	8b 45 14             	mov    0x14(%ebp),%eax
 814135d:	89 04 24             	mov    %eax,(%esp)
 8141360:	e8 7b 14 00 00       	call   81427e0 <_ZN6Stream12GetOutBufferI26STAdvanceAltarEntranceDataEEPT_v>
 8141365:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8141368:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 814136c:	75 2c                	jne    814139a <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0xe8>
 814136e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8141375:	e8 86 44 5e 00       	call   8725800 <__cxa_allocate_exception>
 814137a:	89 c2                	mov    %eax,%edx
 814137c:	c7 02 24 06 00 00    	movl   $0x624,(%edx)
 8141382:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8141389:	00 
 814138a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8141391:	09 
 8141392:	89 04 24             	mov    %eax,(%esp)
 8141395:	e8 b6 38 5e 00       	call   8724c50 <__cxa_throw>
 814139a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814139d:	8b 40 0c             	mov    0xc(%eax),%eax
 81413a0:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 81413a6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81413a9:	8b 78 08             	mov    0x8(%eax),%edi
 81413ac:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81413af:	8b 70 04             	mov    0x4(%eax),%esi
 81413b2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81413b5:	8b 18                	mov    (%eax),%ebx
 81413b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81413be:	00 
 81413bf:	c7 44 24 08 26 06 00 	movl   $0x626,0x8(%esp)
 81413c6:	00 
 81413c7:	c7 44 24 04 c0 eb b6 	movl   $0x8b6ebc0,0x4(%esp)
 81413ce:	08 
 81413cf:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81413d2:	89 04 24             	mov    %eax,(%esp)
 81413d5:	e8 3e e3 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81413da:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 81413e0:	89 44 24 14          	mov    %eax,0x14(%esp)
 81413e4:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81413e8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81413ec:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81413f0:	c7 44 24 04 76 db b6 	movl   $0x8b6db76,0x4(%esp)
 81413f7:	08 
 81413f8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81413fb:	89 04 24             	mov    %eax,(%esp)
 81413fe:	e8 85 e3 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8141403:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8141406:	8b 18                	mov    (%eax),%ebx
 8141408:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814140b:	8b 48 0c             	mov    0xc(%eax),%ecx
 814140e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8141411:	8b 50 08             	mov    0x8(%eax),%edx
 8141414:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8141417:	8b 40 04             	mov    0x4(%eax),%eax
 814141a:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 814141e:	8d 5d a4             	lea    -0x5c(%ebp),%ebx
 8141421:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8141425:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8141429:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814142d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8141431:	c7 44 24 04 94 db b6 	movl   $0x8b6db94,0x4(%esp)
 8141438:	08 
 8141439:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814143c:	89 04 24             	mov    %eax,(%esp)
 814143f:	e8 7c 2d 2b 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8141444:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814144b:	00 
 814144c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814144f:	89 04 24             	mov    %eax,(%esp)
 8141452:	e8 cf 2e 2b 00       	call   83f4326 <_ZN5MySQL4execEb>
 8141457:	83 f0 01             	xor    $0x1,%eax
 814145a:	84 c0                	test   %al,%al
 814145c:	75 11                	jne    814146f <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x1bd>
 814145e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8141461:	89 04 24             	mov    %eax,(%esp)
 8141464:	e8 a7 2e 2b 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8141469:	09 d0                	or     %edx,%eax
 814146b:	85 c0                	test   %eax,%eax
 814146d:	75 07                	jne    8141476 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x1c4>
 814146f:	b8 01 00 00 00       	mov    $0x1,%eax
 8141474:	eb 05                	jmp    814147b <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x1c9>
 8141476:	b8 00 00 00 00       	mov    $0x0,%eax
 814147b:	84 c0                	test   %al,%al
 814147d:	74 59                	je     81414d8 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x226>
 814147f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8141482:	8b 58 0c             	mov    0xc(%eax),%ebx
 8141485:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8141488:	8b 48 08             	mov    0x8(%eax),%ecx
 814148b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814148e:	8b 50 04             	mov    0x4(%eax),%edx
 8141491:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8141494:	8b 00                	mov    (%eax),%eax
 8141496:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 814149a:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 814149e:	89 54 24 10          	mov    %edx,0x10(%esp)
 81414a2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81414a6:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81414a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81414ad:	c7 44 24 04 54 dc b6 	movl   $0x8b6dc54,0x4(%esp)
 81414b4:	08 
 81414b5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81414b8:	89 04 24             	mov    %eax,(%esp)
 81414bb:	e8 00 2d 2b 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81414c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81414c7:	00 
 81414c8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81414cb:	89 04 24             	mov    %eax,(%esp)
 81414ce:	e8 53 2e 2b 00       	call   83f4326 <_ZN5MySQL4execEb>
 81414d3:	83 f0 01             	xor    $0x1,%eax
 81414d6:	84 c0                	test   %al,%al
 81414d8:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 81414dc:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81414df:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
 81414e2:	0f 9c c0             	setl   %al
 81414e5:	84 c0                	test   %al,%al
 81414e7:	0f 85 6d fe ff ff    	jne    814135a <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0xa8>
 81414ed:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 81414f4:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81414f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81414fb:	8b 45 14             	mov    0x14(%ebp),%eax
 81414fe:	89 04 24             	mov    %eax,(%esp)
 8141501:	e8 be b0 4d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8141506:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 814150d:	e9 dc 01 00 00       	jmp    81416ee <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x43c>
 8141512:	8b 45 14             	mov    0x14(%ebp),%eax
 8141515:	89 04 24             	mov    %eax,(%esp)
 8141518:	e8 17 13 00 00       	call   8142834 <_ZN6Stream12GetOutBufferI27STAdvanceAltarLayerStatDataEEPT_v>
 814151d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8141520:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8141524:	75 2c                	jne    8141552 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x2a0>
 8141526:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 814152d:	e8 ce 42 5e 00       	call   8725800 <__cxa_allocate_exception>
 8141532:	89 c2                	mov    %eax,%edx
 8141534:	c7 02 4d 06 00 00    	movl   $0x64d,(%edx)
 814153a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8141541:	00 
 8141542:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8141549:	09 
 814154a:	89 04 24             	mov    %eax,(%esp)
 814154d:	e8 fe 36 5e 00       	call   8724c50 <__cxa_throw>
 8141552:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8141555:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8141559:	0f b7 c0             	movzwl %ax,%eax
 814155c:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8141562:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8141565:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8141569:	0f b7 c0             	movzwl %ax,%eax
 814156c:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8141572:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8141575:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8141579:	0f b7 f8             	movzwl %ax,%edi
 814157c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814157f:	8b 70 04             	mov    0x4(%eax),%esi
 8141582:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8141585:	0f b7 00             	movzwl (%eax),%eax
 8141588:	0f b7 d8             	movzwl %ax,%ebx
 814158b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8141592:	00 
 8141593:	c7 44 24 08 4f 06 00 	movl   $0x64f,0x8(%esp)
 814159a:	00 
 814159b:	c7 44 24 04 c0 eb b6 	movl   $0x8b6ebc0,0x4(%esp)
 81415a2:	08 
 81415a3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81415a6:	89 04 24             	mov    %eax,(%esp)
 81415a9:	e8 6a e1 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81415ae:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 81415b4:	89 44 24 18          	mov    %eax,0x18(%esp)
 81415b8:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 81415be:	89 44 24 14          	mov    %eax,0x14(%esp)
 81415c2:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81415c6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81415ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81415ce:	c7 44 24 04 dc dc b6 	movl   $0x8b6dcdc,0x4(%esp)
 81415d5:	08 
 81415d6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81415d9:	89 04 24             	mov    %eax,(%esp)
 81415dc:	e8 a7 e1 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81415e1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81415e4:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81415e8:	0f b7 f0             	movzwl %ax,%esi
 81415eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81415ee:	8b 58 04             	mov    0x4(%eax),%ebx
 81415f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81415f4:	0f b7 00             	movzwl (%eax),%eax
 81415f7:	0f b7 c8             	movzwl %ax,%ecx
 81415fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81415fd:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8141601:	0f b7 d0             	movzwl %ax,%edx
 8141604:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8141607:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 814160b:	0f b7 c0             	movzwl %ax,%eax
 814160e:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8141612:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8141616:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 814161a:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 814161d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8141621:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8141625:	89 44 24 08          	mov    %eax,0x8(%esp)
 8141629:	c7 44 24 04 fc dc b6 	movl   $0x8b6dcfc,0x4(%esp)
 8141630:	08 
 8141631:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8141634:	89 04 24             	mov    %eax,(%esp)
 8141637:	e8 84 2b 2b 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 814163c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8141643:	00 
 8141644:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8141647:	89 04 24             	mov    %eax,(%esp)
 814164a:	e8 d7 2c 2b 00       	call   83f4326 <_ZN5MySQL4execEb>
 814164f:	83 f0 01             	xor    $0x1,%eax
 8141652:	84 c0                	test   %al,%al
 8141654:	75 11                	jne    8141667 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x3b5>
 8141656:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8141659:	89 04 24             	mov    %eax,(%esp)
 814165c:	e8 af 2c 2b 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8141661:	09 d0                	or     %edx,%eax
 8141663:	85 c0                	test   %eax,%eax
 8141665:	75 07                	jne    814166e <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x3bc>
 8141667:	b8 01 00 00 00       	mov    $0x1,%eax
 814166c:	eb 05                	jmp    8141673 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x3c1>
 814166e:	b8 00 00 00 00       	mov    $0x0,%eax
 8141673:	84 c0                	test   %al,%al
 8141675:	74 73                	je     81416ea <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x438>
 8141677:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814167a:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 814167e:	0f b7 f0             	movzwl %ax,%esi
 8141681:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8141684:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8141688:	0f b7 d8             	movzwl %ax,%ebx
 814168b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814168e:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8141692:	0f b7 c8             	movzwl %ax,%ecx
 8141695:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8141698:	8b 50 04             	mov    0x4(%eax),%edx
 814169b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814169e:	0f b7 00             	movzwl (%eax),%eax
 81416a1:	0f b7 c0             	movzwl %ax,%eax
 81416a4:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81416a8:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81416ac:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81416b0:	89 54 24 10          	mov    %edx,0x10(%esp)
 81416b4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81416b8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81416bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81416bf:	c7 44 24 04 ac dd b6 	movl   $0x8b6ddac,0x4(%esp)
 81416c6:	08 
 81416c7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81416ca:	89 04 24             	mov    %eax,(%esp)
 81416cd:	e8 ee 2a 2b 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81416d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81416d9:	00 
 81416da:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81416dd:	89 04 24             	mov    %eax,(%esp)
 81416e0:	e8 41 2c 2b 00       	call   83f4326 <_ZN5MySQL4execEb>
 81416e5:	83 f0 01             	xor    $0x1,%eax
 81416e8:	84 c0                	test   %al,%al
 81416ea:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 81416ee:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81416f1:	39 45 dc             	cmp    %eax,-0x24(%ebp)
 81416f4:	0f 9c c0             	setl   %al
 81416f7:	84 c0                	test   %al,%al
 81416f9:	0f 85 13 fe ff ff    	jne    8141512 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x260>
 81416ff:	bb 01 00 00 00       	mov    $0x1,%ebx
 8141704:	eb 6e                	jmp    8141774 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x4c2>
 8141706:	83 fa 01             	cmp    $0x1,%edx
 8141709:	74 08                	je     8141713 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x461>
 814170b:	89 04 24             	mov    %eax,(%esp)
 814170e:	e8 3d 20 9a 00       	call   8ae3750 <_Unwind_Resume>
 8141713:	89 04 24             	mov    %eax,(%esp)
 8141716:	e8 c5 45 5e 00       	call   8725ce0 <__cxa_begin_catch>
 814171b:	8b 00                	mov    (%eax),%eax
 814171d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8141720:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8141723:	89 44 24 14          	mov    %eax,0x14(%esp)
 8141727:	c7 44 24 10 38 de b6 	movl   $0x8b6de38,0x10(%esp)
 814172e:	08 
 814172f:	c7 44 24 0c 74 06 00 	movl   $0x674,0xc(%esp)
 8141736:	00 
 8141737:	c7 44 24 08 c0 eb b6 	movl   $0x8b6ebc0,0x8(%esp)
 814173e:	08 
 814173f:	c7 44 24 04 00 d8 b6 	movl   $0x8b6d800,0x4(%esp)
 8141746:	08 
 8141747:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 814174e:	e8 b7 24 99 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8141753:	bb 00 00 00 00       	mov    $0x0,%ebx
 8141758:	e8 d3 44 5e 00       	call   8725c30 <__cxa_end_catch>
 814175d:	eb 15                	jmp    8141774 <_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream+0x4c2>
 814175f:	89 d3                	mov    %edx,%ebx
 8141761:	89 c6                	mov    %eax,%esi
 8141763:	e8 c8 44 5e 00       	call   8725c30 <__cxa_end_catch>
 8141768:	89 f0                	mov    %esi,%eax
 814176a:	89 da                	mov    %ebx,%edx
 814176c:	89 04 24             	mov    %eax,(%esp)
 814176f:	e8 dc 1f 9a 00       	call   8ae3750 <_Unwind_Resume>
 8141774:	89 d8                	mov    %ebx,%eax
 8141776:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 814177c:	5b                   	pop    %ebx
 814177d:	5e                   	pop    %esi
 814177e:	5f                   	pop    %edi
 814177f:	5d                   	pop    %ebp
 8141780:	c3                   	ret

```

```c
// advancealtar::DB_StatisticAdvanceAltar::dispatch @ 0x81412b2

/* advancealtar::DB_StatisticAdvanceAltar::dispatch(int, int, Stream*) */

undefined4 advancealtar::DB_StatisticAdvanceAltar::dispatch(int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  undefined4 *puVar11;
  longlong lVar12;
  Stream *in_stack_00000010;
  tm local_94;
  int local_68;
  int local_64;
  char local_60 [12];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  MySQL *local_34;
  int local_30;
  STAdvanceAltarEntranceData *local_2c;
  int local_28;
  STAdvanceAltarLayerStatData *local_24;
  
                    /* try { // try from 081412d6 to 081416e4 has its CatchHandler @ 08141706 */
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  __GetCurrentDNFDate(&local_94);
  local_60[0] = '\0';
  local_60[1] = '\0';
  local_60[2] = '\0';
  local_60[3] = '\0';
  local_60[4] = '\0';
  local_60[5] = '\0';
  local_60[6] = '\0';
  local_60[7] = '\0';
  local_60[8] = '\0';
  local_60[9] = '\0';
  local_60[10] = '\0';
  local_60[0xb] = '\0';
  sprintf(local_60,"%04d-%02d-%02d",local_94.tm_year + 0x76c,local_94.tm_mon + 1,local_94.tm_mday);
  local_64 = 0;
  Stream::operator>>(in_stack_00000010,&local_64);
  for (local_30 = 0; local_30 < local_64; local_30 = local_30 + 1) {
    local_2c = Stream::GetOutBuffer<STAdvanceAltarEntranceData>(in_stack_00000010);
    if (local_2c == (STAdvanceAltarEntranceData *)0x0) {
      puVar11 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar11 = 0x624;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar11,&int::typeinfo,0);
    }
    uVar8 = *(undefined4 *)(local_2c + 0xc);
    uVar5 = *(undefined4 *)(local_2c + 8);
    uVar6 = *(undefined4 *)(local_2c + 4);
    uVar7 = *(undefined4 *)local_2c;
    cMyTrace::cMyTrace(local_54,
                       "virtual bool advancealtar::DB_StatisticAdvanceAltar::dispatch(int, int, Stream*)"
                       ,0x626,0);
    cMyTrace::operator()(local_54,"[AdvanceAltar] %u,%u,%u,%u",uVar7,uVar6,uVar5,uVar8);
    MySQL::set_query(local_34,
                     " upDate log_advance_alter_entrance  set entrance_count = entrance_count + %u  , success_count = success_count + %u  , obtain_star = obtain_star + %u  where occ_date = \'%s\' and stage_id = %u"
                     ,*(undefined4 *)(local_2c + 4),*(undefined4 *)(local_2c + 8),
                     *(undefined4 *)(local_2c + 0xc),local_60,*(undefined4 *)local_2c);
    cVar10 = MySQL::exec(local_34,true);
    if (cVar10 == '\x01') {
      lVar12 = MySQL::getAffectedRowCount(local_34);
      if (lVar12 == 0) goto LAB_0814146f;
      bVar9 = false;
    }
    else {
LAB_0814146f:
      bVar9 = true;
    }
    if (bVar9) {
      MySQL::set_query(local_34,
                       " inSert into log_advance_alter_entrance(occ_date,  stage_id, entrance_count, success_count, obtain_star)  values(\'%s\', %u, %u, %u, %u) "
                       ,local_60,*(undefined4 *)local_2c,*(undefined4 *)(local_2c + 4),
                       *(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
      MySQL::exec(local_34,true);
    }
  }
  local_68 = 0;
  Stream::operator>>(in_stack_00000010,&local_68);
  local_28 = 0;
  do {
    if (local_68 <= local_28) {
      return 1;
    }
    local_24 = Stream::GetOutBuffer<STAdvanceAltarLayerStatData>(in_stack_00000010);
    if (local_24 == (STAdvanceAltarLayerStatData *)0x0) {
      puVar11 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar11 = 0x64d;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar11,&int::typeinfo,0);
    }
    uVar1 = *(ushort *)(local_24 + 0xc);
    uVar2 = *(ushort *)(local_24 + 10);
    uVar3 = *(ushort *)(local_24 + 8);
    uVar8 = *(undefined4 *)(local_24 + 4);
    uVar4 = *(ushort *)local_24;
    cMyTrace::cMyTrace(local_44,
                       "virtual bool advancealtar::DB_StatisticAdvanceAltar::dispatch(int, int, Stream*)"
                       ,0x64f,0);
    cMyTrace::operator()
              (local_44,"[AdvanceAltar] %u,%u,%u,%u,%u",(uint)uVar4,uVar8,(uint)uVar3,(uint)uVar2,
               (uint)uVar1);
    MySQL::set_query(local_34,
                     " upDate log_advance_alter_layer_stat  set use_count = use_count + %u, use_star = use_star + %u  where occ_date = \'%s\' and item_type = %u and item_id = %u and item_level = %u"
                     ,(uint)*(ushort *)(local_24 + 10),(uint)*(ushort *)(local_24 + 0xc),local_60,
                     (uint)*(ushort *)local_24,*(undefined4 *)(local_24 + 4),
                     (uint)*(ushort *)(local_24 + 8));
    cVar10 = MySQL::exec(local_34,true);
    if (cVar10 == '\x01') {
      lVar12 = MySQL::getAffectedRowCount(local_34);
      if (lVar12 == 0) goto LAB_08141667;
      bVar9 = false;
    }
    else {
LAB_08141667:
      bVar9 = true;
    }
    if (bVar9) {
      MySQL::set_query(local_34,
                       " inSert into log_advance_alter_layer_stat(occ_date,  item_type, item_id, item_level, use_count, use_star) values(\'%s\', %u, %u, %u, %u, %u)"
                       ,local_60,(uint)*(ushort *)local_24,*(undefined4 *)(local_24 + 4),
                       (uint)*(ushort *)(local_24 + 8),(uint)*(ushort *)(local_24 + 10),
                       (uint)*(ushort *)(local_24 + 0xc));
      MySQL::exec(local_34,true);
    }
    local_28 = local_28 + 1;
  } while( true );
}

```

