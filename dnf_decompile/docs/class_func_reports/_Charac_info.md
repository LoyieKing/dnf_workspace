# _Charac_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Reset

```asm
// === 086822b8 _Charac_info::Reset  [0x086822b8-0x8682a91] ===
 86822b8:	55                   	push   %ebp
 86822b9:	89 e5                	mov    %esp,%ebp
 86822bb:	83 ec 18             	sub    $0x18,%esp
 86822be:	8b 45 08             	mov    0x8(%ebp),%eax
 86822c1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 86822c7:	8b 45 08             	mov    0x8(%ebp),%eax
 86822ca:	83 c0 04             	add    $0x4,%eax
 86822cd:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 86822d4:	00 
 86822d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86822dc:	00 
 86822dd:	89 04 24             	mov    %eax,(%esp)
 86822e0:	e8 db b9 9f ff       	call   807dcc0 <memset@plt>
 86822e5:	8b 45 08             	mov    0x8(%ebp),%eax
 86822e8:	c6 40 22 00          	movb   $0x0,0x22(%eax)
 86822ec:	8b 45 08             	mov    0x8(%ebp),%eax
 86822ef:	c6 40 23 00          	movb   $0x0,0x23(%eax)
 86822f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86822f6:	c6 40 26 00          	movb   $0x0,0x26(%eax)
 86822fa:	8b 45 08             	mov    0x8(%ebp),%eax
 86822fd:	66 c7 40 27 00 00    	movw   $0x0,0x27(%eax)
 8682303:	8b 45 08             	mov    0x8(%ebp),%eax
 8682306:	c6 40 29 00          	movb   $0x0,0x29(%eax)
 868230a:	8b 45 08             	mov    0x8(%ebp),%eax
 868230d:	c6 40 2a 00          	movb   $0x0,0x2a(%eax)
 8682311:	8b 45 08             	mov    0x8(%ebp),%eax
 8682314:	c7 40 2b 00 00 00 00 	movl   $0x0,0x2b(%eax)
 868231b:	8b 45 08             	mov    0x8(%ebp),%eax
 868231e:	c7 40 2f 00 00 00 00 	movl   $0x0,0x2f(%eax)
 8682325:	8b 45 08             	mov    0x8(%ebp),%eax
 8682328:	66 c7 40 33 00 00    	movw   $0x0,0x33(%eax)
 868232e:	8b 45 08             	mov    0x8(%ebp),%eax
 8682331:	66 c7 40 35 00 00    	movw   $0x0,0x35(%eax)
 8682337:	8b 45 08             	mov    0x8(%ebp),%eax
 868233a:	66 c7 40 37 00 00    	movw   $0x0,0x37(%eax)
 8682340:	8b 45 08             	mov    0x8(%ebp),%eax
 8682343:	83 c0 39             	add    $0x39,%eax
 8682346:	89 04 24             	mov    %eax,(%esp)
 8682349:	e8 8a 24 01 00       	call   86947d8 <_ZN10CommonTime5clearEv>
 868234e:	8b 45 08             	mov    0x8(%ebp),%eax
 8682351:	66 c7 40 77 00 00    	movw   $0x0,0x77(%eax)
 8682357:	8b 45 08             	mov    0x8(%ebp),%eax
 868235a:	66 c7 40 79 00 00    	movw   $0x0,0x79(%eax)
 8682360:	8b 45 08             	mov    0x8(%ebp),%eax
 8682363:	c7 40 7b 00 00 00 00 	movl   $0x0,0x7b(%eax)
 868236a:	8b 45 08             	mov    0x8(%ebp),%eax
 868236d:	c7 40 7f 00 00 00 00 	movl   $0x0,0x7f(%eax)
 8682374:	8b 45 08             	mov    0x8(%ebp),%eax
 8682377:	05 88 00 00 00       	add    $0x88,%eax
 868237c:	89 04 24             	mov    %eax,(%esp)
 868237f:	e8 e4 5e cc ff       	call   8348268 <_ZN15_Additioal_info5clearEv>
 8682384:	8b 45 08             	mov    0x8(%ebp),%eax
 8682387:	05 da 00 00 00       	add    $0xda,%eax
 868238c:	89 04 24             	mov    %eax,(%esp)
 868238f:	e8 72 76 e8 ff       	call   8509a06 <_ZN10CInventory5resetEv>
 8682394:	8b 45 08             	mov    0x8(%ebp),%eax
 8682397:	05 92 08 00 00       	add    $0x892,%eax
 868239c:	89 04 24             	mov    %eax,(%esp)
 868239f:	e8 64 2a f8 ff       	call   8604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>
 86823a4:	8b 45 08             	mov    0x8(%ebp),%eax
 86823a7:	05 aa 0d 00 00       	add    $0xdaa,%eax
 86823ac:	89 04 24             	mov    %eax,(%esp)
 86823af:	e8 0e 8d e8 ff       	call   850b0c2 <_ZN6CCargo5resetEv>
 86823b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86823b7:	c7 80 be 0d 00 00 00 	movl   $0x0,0xdbe(%eax)
 86823be:	00 00 00 
 86823c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86823c4:	c6 80 c2 0d 00 00 00 	movb   $0x0,0xdc2(%eax)
 86823cb:	8b 45 08             	mov    0x8(%ebp),%eax
 86823ce:	c7 80 02 0e 00 00 00 	movl   $0x0,0xe02(%eax)
 86823d5:	00 00 00 
 86823d8:	8b 45 08             	mov    0x8(%ebp),%eax
 86823db:	c7 80 f4 0d 00 00 00 	movl   $0x0,0xdf4(%eax)
 86823e2:	00 00 00 
 86823e5:	8b 45 08             	mov    0x8(%ebp),%eax
 86823e8:	c7 80 f8 0d 00 00 00 	movl   $0x0,0xdf8(%eax)
 86823ef:	00 00 00 
 86823f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86823f5:	c7 80 fe 0d 00 00 00 	movl   $0x0,0xdfe(%eax)
 86823fc:	00 00 00 
 86823ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8682402:	c7 80 06 0e 00 00 00 	movl   $0x0,0xe06(%eax)
 8682409:	00 00 00 
 868240c:	8b 45 08             	mov    0x8(%ebp),%eax
 868240f:	c7 80 0a 0e 00 00 00 	movl   $0x0,0xe0a(%eax)
 8682416:	00 00 00 
 8682419:	8b 45 08             	mov    0x8(%ebp),%eax
 868241c:	05 0e 0e 00 00       	add    $0xe0e,%eax
 8682421:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8682428:	00 
 8682429:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8682430:	00 
 8682431:	89 04 24             	mov    %eax,(%esp)
 8682434:	e8 87 b8 9f ff       	call   807dcc0 <memset@plt>
 8682439:	8b 45 08             	mov    0x8(%ebp),%eax
 868243c:	c7 80 22 0e 00 00 00 	movl   $0x0,0xe22(%eax)
 8682443:	00 00 00 
 8682446:	8b 45 08             	mov    0x8(%ebp),%eax
 8682449:	c7 80 26 0e 00 00 00 	movl   $0x0,0xe26(%eax)
 8682450:	00 00 00 
 8682453:	8b 45 08             	mov    0x8(%ebp),%eax
 8682456:	c7 80 2a 0e 00 00 00 	movl   $0x0,0xe2a(%eax)
 868245d:	00 00 00 
 8682460:	8b 45 08             	mov    0x8(%ebp),%eax
 8682463:	c7 80 33 0e 00 00 00 	movl   $0x0,0xe33(%eax)
 868246a:	00 00 00 
 868246d:	8b 45 08             	mov    0x8(%ebp),%eax
 8682470:	c7 80 37 0e 00 00 00 	movl   $0x0,0xe37(%eax)
 8682477:	00 00 00 
 868247a:	8b 45 08             	mov    0x8(%ebp),%eax
 868247d:	c7 80 2e 0e 00 00 00 	movl   $0x0,0xe2e(%eax)
 8682484:	00 00 00 
 8682487:	8b 45 08             	mov    0x8(%ebp),%eax
 868248a:	c6 80 32 0e 00 00 00 	movb   $0x0,0xe32(%eax)
 8682491:	8b 45 08             	mov    0x8(%ebp),%eax
 8682494:	c6 80 3b 0e 00 00 00 	movb   $0x0,0xe3b(%eax)
 868249b:	8b 45 08             	mov    0x8(%ebp),%eax
 868249e:	c6 80 83 00 00 00 00 	movb   $0x0,0x83(%eax)
 86824a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86824a8:	c7 80 84 00 00 00 00 	movl   $0x0,0x84(%eax)
 86824af:	00 00 00 
 86824b2:	8b 45 08             	mov    0x8(%ebp),%eax
 86824b5:	c7 80 3c 0e 00 00 00 	movl   $0x0,0xe3c(%eax)
 86824bc:	00 00 00 
 86824bf:	8b 45 08             	mov    0x8(%ebp),%eax
 86824c2:	c7 80 e9 0d 00 00 00 	movl   $0x0,0xde9(%eax)
 86824c9:	00 00 00 
 86824cc:	8b 45 08             	mov    0x8(%ebp),%eax
 86824cf:	66 c7 80 ed 0d 00 00 	movw   $0x0,0xded(%eax)
 86824d6:	00 00 
 86824d8:	8b 45 08             	mov    0x8(%ebp),%eax
 86824db:	c7 80 ef 0d 00 00 00 	movl   $0x0,0xdef(%eax)
 86824e2:	00 00 00 
 86824e5:	8b 45 08             	mov    0x8(%ebp),%eax
 86824e8:	c6 80 f3 0d 00 00 00 	movb   $0x0,0xdf3(%eax)
 86824ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86824f2:	66 c7 80 fc 0d 00 00 	movw   $0x0,0xdfc(%eax)
 86824f9:	00 00 
 86824fb:	8b 45 08             	mov    0x8(%ebp),%eax
 86824fe:	c7 80 41 0e 00 00 00 	movl   $0x0,0xe41(%eax)
 8682505:	00 00 00 
 8682508:	8b 45 08             	mov    0x8(%ebp),%eax
 868250b:	c7 80 49 0e 00 00 00 	movl   $0x0,0xe49(%eax)
 8682512:	00 00 00 
 8682515:	8b 45 08             	mov    0x8(%ebp),%eax
 8682518:	c7 80 4d 0e 00 00 00 	movl   $0x0,0xe4d(%eax)
 868251f:	00 00 00 
 8682522:	8b 45 08             	mov    0x8(%ebp),%eax
 8682525:	c7 80 45 0e 00 00 00 	movl   $0x0,0xe45(%eax)
 868252c:	00 00 00 
 868252f:	8b 45 08             	mov    0x8(%ebp),%eax
 8682532:	c7 80 51 0e 00 00 00 	movl   $0x0,0xe51(%eax)
 8682539:	00 00 00 
 868253c:	8b 45 08             	mov    0x8(%ebp),%eax
 868253f:	c7 80 55 0e 00 00 00 	movl   $0x0,0xe55(%eax)
 8682546:	00 00 00 
 8682549:	8b 45 08             	mov    0x8(%ebp),%eax
 868254c:	c7 80 59 0e 00 00 00 	movl   $0x0,0xe59(%eax)
 8682553:	00 00 00 
 8682556:	8b 45 08             	mov    0x8(%ebp),%eax
 8682559:	c7 80 61 0e 00 00 00 	movl   $0x0,0xe61(%eax)
 8682560:	00 00 00 
 8682563:	8b 45 08             	mov    0x8(%ebp),%eax
 8682566:	05 8d 0e 00 00       	add    $0xe8d,%eax
 868256b:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8682572:	00 
 8682573:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 868257a:	00 
 868257b:	89 04 24             	mov    %eax,(%esp)
 868257e:	e8 3d b7 9f ff       	call   807dcc0 <memset@plt>
 8682583:	8b 45 08             	mov    0x8(%ebp),%eax
 8682586:	c6 80 90 0e 00 00 01 	movb   $0x1,0xe90(%eax)
 868258d:	8b 45 08             	mov    0x8(%ebp),%eax
 8682590:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 8682594:	8b 45 08             	mov    0x8(%ebp),%eax
 8682597:	c6 80 65 0e 00 00 00 	movb   $0x0,0xe65(%eax)
 868259e:	8b 45 08             	mov    0x8(%ebp),%eax
 86825a1:	c7 80 5d 0e 00 00 00 	movl   $0x0,0xe5d(%eax)
 86825a8:	00 00 00 
 86825ab:	8b 45 08             	mov    0x8(%ebp),%eax
 86825ae:	c6 80 66 0e 00 00 00 	movb   $0x0,0xe66(%eax)
 86825b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86825b8:	c6 80 67 0e 00 00 00 	movb   $0x0,0xe67(%eax)
 86825bf:	8b 45 08             	mov    0x8(%ebp),%eax
 86825c2:	c7 80 68 0e 00 00 00 	movl   $0x0,0xe68(%eax)
 86825c9:	00 00 00 
 86825cc:	8b 45 08             	mov    0x8(%ebp),%eax
 86825cf:	c7 80 6c 0e 00 00 00 	movl   $0x0,0xe6c(%eax)
 86825d6:	00 00 00 
 86825d9:	8b 45 08             	mov    0x8(%ebp),%eax
 86825dc:	c7 80 71 0e 00 00 00 	movl   $0x0,0xe71(%eax)
 86825e3:	00 00 00 
 86825e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86825e9:	c7 80 75 0e 00 00 00 	movl   $0x0,0xe75(%eax)
 86825f0:	00 00 00 
 86825f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86825f6:	c7 80 79 0e 00 00 00 	movl   $0x0,0xe79(%eax)
 86825fd:	00 00 00 
 8682600:	8b 45 08             	mov    0x8(%ebp),%eax
 8682603:	c7 80 7d 0e 00 00 00 	movl   $0x0,0xe7d(%eax)
 868260a:	00 00 00 
 868260d:	8b 45 08             	mov    0x8(%ebp),%eax
 8682610:	c7 80 81 0e 00 00 00 	movl   $0x0,0xe81(%eax)
 8682617:	00 00 00 
 868261a:	8b 45 08             	mov    0x8(%ebp),%eax
 868261d:	c7 80 85 0e 00 00 00 	movl   $0x0,0xe85(%eax)
 8682624:	00 00 00 
 8682627:	8b 45 08             	mov    0x8(%ebp),%eax
 868262a:	c7 80 89 0e 00 00 00 	movl   $0x0,0xe89(%eax)
 8682631:	00 00 00 
 8682634:	8b 45 08             	mov    0x8(%ebp),%eax
 8682637:	c6 80 99 0e 00 00 00 	movb   $0x0,0xe99(%eax)
 868263e:	8b 45 08             	mov    0x8(%ebp),%eax
 8682641:	c7 40 71 00 00 00 00 	movl   $0x0,0x71(%eax)
 8682648:	8b 45 08             	mov    0x8(%ebp),%eax
 868264b:	c6 80 b2 0e 00 00 00 	movb   $0x0,0xeb2(%eax)
 8682652:	8b 45 08             	mov    0x8(%ebp),%eax
 8682655:	c6 80 b4 0e 00 00 00 	movb   $0x0,0xeb4(%eax)
 868265c:	8b 45 08             	mov    0x8(%ebp),%eax
 868265f:	c6 80 b8 0e 00 00 00 	movb   $0x0,0xeb8(%eax)
 8682666:	8b 45 08             	mov    0x8(%ebp),%eax
 8682669:	c6 80 b7 0e 00 00 00 	movb   $0x0,0xeb7(%eax)
 8682670:	8b 45 08             	mov    0x8(%ebp),%eax
 8682673:	05 b9 0e 00 00       	add    $0xeb9,%eax
 8682678:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 868267f:	00 
 8682680:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8682687:	00 
 8682688:	89 04 24             	mov    %eax,(%esp)
 868268b:	e8 30 b6 9f ff       	call   807dcc0 <memset@plt>
 8682690:	8b 45 08             	mov    0x8(%ebp),%eax
 8682693:	c6 80 bf 0e 00 00 00 	movb   $0x0,0xebf(%eax)
 868269a:	8b 45 08             	mov    0x8(%ebp),%eax
 868269d:	05 c0 0e 00 00       	add    $0xec0,%eax
 86826a2:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 86826a9:	00 
 86826aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86826b1:	00 
 86826b2:	89 04 24             	mov    %eax,(%esp)
 86826b5:	e8 06 b6 9f ff       	call   807dcc0 <memset@plt>
 86826ba:	8b 45 08             	mov    0x8(%ebp),%eax
 86826bd:	c6 80 c3 0e 00 00 00 	movb   $0x0,0xec3(%eax)
 86826c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86826c7:	c7 80 c4 0e 00 00 ff 	movl   $0xffffffff,0xec4(%eax)
 86826ce:	ff ff ff 
 86826d1:	8b 45 08             	mov    0x8(%ebp),%eax
 86826d4:	c7 80 c8 0e 00 00 00 	movl   $0x17d78400,0xec8(%eax)
 86826db:	84 d7 17 
 86826de:	8b 45 08             	mov    0x8(%ebp),%eax
 86826e1:	05 cc 0e 00 00       	add    $0xecc,%eax
 86826e6:	89 04 24             	mov    %eax,(%esp)
 86826e9:	e8 64 9a 01 00       	call   869c152 <_ZNSt3mapIi17stBloodBestRecordSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 86826ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86826f1:	c6 80 e4 0e 00 00 00 	movb   $0x0,0xee4(%eax)
 86826f8:	8b 45 08             	mov    0x8(%ebp),%eax
 86826fb:	ba 00 00 00 00       	mov    $0x0,%edx
 8682700:	89 90 e5 0e 00 00    	mov    %edx,0xee5(%eax)
 8682706:	8b 45 08             	mov    0x8(%ebp),%eax
 8682709:	66 c7 40 4f 00 00    	movw   $0x0,0x4f(%eax)
 868270f:	8b 45 08             	mov    0x8(%ebp),%eax
 8682712:	c6 80 e9 0e 00 00 00 	movb   $0x0,0xee9(%eax)
 8682719:	8b 45 08             	mov    0x8(%ebp),%eax
 868271c:	c6 80 ea 0e 00 00 00 	movb   $0x0,0xeea(%eax)
 8682723:	8b 45 08             	mov    0x8(%ebp),%eax
 8682726:	66 c7 80 eb 0e 00 00 	movw   $0x0,0xeeb(%eax)
 868272d:	00 00 
 868272f:	8b 45 08             	mov    0x8(%ebp),%eax
 8682732:	05 ed 0e 00 00       	add    $0xeed,%eax
 8682737:	c7 44 24 08 99 01 00 	movl   $0x199,0x8(%esp)
 868273e:	00 
 868273f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8682746:	00 
 8682747:	89 04 24             	mov    %eax,(%esp)
 868274a:	e8 71 b5 9f ff       	call   807dcc0 <memset@plt>
 868274f:	8b 45 08             	mov    0x8(%ebp),%eax
 8682752:	83 c0 55             	add    $0x55,%eax
 8682755:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 868275c:	00 
 868275d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8682764:	00 
 8682765:	89 04 24             	mov    %eax,(%esp)
 8682768:	e8 53 b5 9f ff       	call   807dcc0 <memset@plt>
 868276d:	8b 45 08             	mov    0x8(%ebp),%eax
 8682770:	66 c7 80 1f 12 00 00 	movw   $0x0,0x121f(%eax)
 8682777:	00 00 
 8682779:	8b 45 08             	mov    0x8(%ebp),%eax
 868277c:	c7 80 21 12 00 00 00 	movl   $0x0,0x1221(%eax)
 8682783:	00 00 00 
 8682786:	8b 45 08             	mov    0x8(%ebp),%eax
 8682789:	c7 80 25 12 00 00 00 	movl   $0x0,0x1225(%eax)
 8682790:	00 00 00 
 8682793:	8b 45 08             	mov    0x8(%ebp),%eax
 8682796:	66 c7 80 29 12 00 00 	movw   $0x0,0x1229(%eax)
 868279d:	00 00 
 868279f:	8b 45 08             	mov    0x8(%ebp),%eax
 86827a2:	c6 80 2b 12 00 00 00 	movb   $0x0,0x122b(%eax)
 86827a9:	8b 45 08             	mov    0x8(%ebp),%eax
 86827ac:	66 c7 80 2c 12 00 00 	movw   $0x0,0x122c(%eax)
 86827b3:	00 00 
 86827b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86827b8:	c7 80 2e 12 00 00 00 	movl   $0x0,0x122e(%eax)
 86827bf:	00 00 00 
 86827c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86827c5:	66 c7 80 32 12 00 00 	movw   $0x0,0x1232(%eax)
 86827cc:	00 00 
 86827ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86827d1:	66 c7 80 34 12 00 00 	movw   $0x0,0x1234(%eax)
 86827d8:	00 00 
 86827da:	8b 45 08             	mov    0x8(%ebp),%eax
 86827dd:	66 c7 80 36 12 00 00 	movw   $0x0,0x1236(%eax)
 86827e4:	00 00 
 86827e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86827e9:	c6 80 38 12 00 00 00 	movb   $0x0,0x1238(%eax)
 86827f0:	8b 45 08             	mov    0x8(%ebp),%eax
 86827f3:	c6 80 39 12 00 00 ff 	movb   $0xff,0x1239(%eax)
 86827fa:	8b 45 08             	mov    0x8(%ebp),%eax
 86827fd:	66 c7 80 3a 12 00 00 	movw   $0x0,0x123a(%eax)
 8682804:	00 00 
 8682806:	8b 45 08             	mov    0x8(%ebp),%eax
 8682809:	66 c7 80 3c 12 00 00 	movw   $0x0,0x123c(%eax)
 8682810:	00 00 
 8682812:	8b 45 08             	mov    0x8(%ebp),%eax
 8682815:	c6 80 3e 12 00 00 00 	movb   $0x0,0x123e(%eax)
 868281c:	8b 45 08             	mov    0x8(%ebp),%eax
 868281f:	c6 80 41 12 00 00 01 	movb   $0x1,0x1241(%eax)
 8682826:	8b 45 08             	mov    0x8(%ebp),%eax
 8682829:	c6 80 42 12 00 00 00 	movb   $0x0,0x1242(%eax)
 8682830:	8b 45 08             	mov    0x8(%ebp),%eax
 8682833:	c6 80 43 12 00 00 00 	movb   $0x0,0x1243(%eax)
 868283a:	8b 45 08             	mov    0x8(%ebp),%eax
 868283d:	c6 80 44 12 00 00 00 	movb   $0x0,0x1244(%eax)
 8682844:	8b 45 08             	mov    0x8(%ebp),%eax
 8682847:	c6 80 45 12 00 00 ff 	movb   $0xff,0x1245(%eax)
 868284e:	8b 45 08             	mov    0x8(%ebp),%eax
 8682851:	c6 80 46 12 00 00 00 	movb   $0x0,0x1246(%eax)
 8682858:	8b 45 08             	mov    0x8(%ebp),%eax
 868285b:	c7 80 47 12 00 00 00 	movl   $0x0,0x1247(%eax)
 8682862:	00 00 00 
 8682865:	8b 45 08             	mov    0x8(%ebp),%eax
 8682868:	c7 80 4b 12 00 00 00 	movl   $0x0,0x124b(%eax)
 868286f:	00 00 00 
 8682872:	8b 45 08             	mov    0x8(%ebp),%eax
 8682875:	c6 80 4f 12 00 00 00 	movb   $0x0,0x124f(%eax)
 868287c:	8b 45 08             	mov    0x8(%ebp),%eax
 868287f:	c7 80 50 12 00 00 00 	movl   $0x0,0x1250(%eax)
 8682886:	00 00 00 
 8682889:	8b 45 08             	mov    0x8(%ebp),%eax
 868288c:	05 54 12 00 00       	add    $0x1254,%eax
 8682891:	89 04 24             	mov    %eax,(%esp)
 8682894:	e8 d9 83 01 00       	call   869ac72 <_ZNSt3mapIi18STSkillCommandDataSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 8682899:	8b 45 08             	mov    0x8(%ebp),%eax
 868289c:	66 c7 80 6c 12 00 00 	movw   $0x0,0x126c(%eax)
 86828a3:	00 00 
 86828a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86828a8:	c6 80 6e 12 00 00 00 	movb   $0x0,0x126e(%eax)
 86828af:	8b 45 08             	mov    0x8(%ebp),%eax
 86828b2:	c7 80 6f 12 00 00 00 	movl   $0x0,0x126f(%eax)
 86828b9:	00 00 00 
 86828bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86828bf:	c6 80 73 12 00 00 00 	movb   $0x0,0x1273(%eax)
 86828c6:	8b 45 08             	mov    0x8(%ebp),%eax
 86828c9:	c6 80 74 12 00 00 00 	movb   $0x0,0x1274(%eax)
 86828d0:	8b 45 08             	mov    0x8(%ebp),%eax
 86828d3:	c6 80 75 12 00 00 00 	movb   $0x0,0x1275(%eax)
 86828da:	8b 45 08             	mov    0x8(%ebp),%eax
 86828dd:	c6 80 76 12 00 00 00 	movb   $0x0,0x1276(%eax)
 86828e4:	8b 45 08             	mov    0x8(%ebp),%eax
 86828e7:	c6 80 77 12 00 00 00 	movb   $0x0,0x1277(%eax)
 86828ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86828f1:	c6 80 78 12 00 00 00 	movb   $0x0,0x1278(%eax)
 86828f8:	8b 45 08             	mov    0x8(%ebp),%eax
 86828fb:	c6 80 79 12 00 00 00 	movb   $0x0,0x1279(%eax)
 8682902:	8b 45 08             	mov    0x8(%ebp),%eax
 8682905:	c6 80 7a 12 00 00 00 	movb   $0x0,0x127a(%eax)
 868290c:	8b 45 08             	mov    0x8(%ebp),%eax
 868290f:	05 40 0e 00 00       	add    $0xe40,%eax
 8682914:	89 04 24             	mov    %eax,(%esp)
 8682917:	e8 50 33 01 00       	call   8695c6c <_ZN20tagCharacVisibleFlag5resetEv>
 868291c:	8b 45 08             	mov    0x8(%ebp),%eax
 868291f:	c6 80 7b 12 00 00 00 	movb   $0x0,0x127b(%eax)
 8682926:	8b 45 08             	mov    0x8(%ebp),%eax
 8682929:	c7 80 7c 12 00 00 00 	movl   $0x0,0x127c(%eax)
 8682930:	00 00 00 
 8682933:	8b 45 08             	mov    0x8(%ebp),%eax
 8682936:	c6 80 80 12 00 00 00 	movb   $0x0,0x1280(%eax)
 868293d:	8b 45 08             	mov    0x8(%ebp),%eax
 8682940:	05 81 12 00 00       	add    $0x1281,%eax
 8682945:	89 04 24             	mov    %eax,(%esp)
 8682948:	e8 c9 ac dc ff       	call   844d616 <_ZN18stAuraAvatarOption5resetEv>
 868294d:	8b 45 08             	mov    0x8(%ebp),%eax
 8682950:	c7 80 91 12 00 00 00 	movl   $0x0,0x1291(%eax)
 8682957:	00 00 00 
 868295a:	8b 45 08             	mov    0x8(%ebp),%eax
 868295d:	c7 80 8d 12 00 00 00 	movl   $0x0,0x128d(%eax)
 8682964:	00 00 00 
 8682967:	8b 45 08             	mov    0x8(%ebp),%eax
 868296a:	c7 80 95 12 00 00 00 	movl   $0x0,0x1295(%eax)
 8682971:	00 00 00 
 8682974:	8b 45 08             	mov    0x8(%ebp),%eax
 8682977:	c7 80 99 12 00 00 00 	movl   $0x0,0x1299(%eax)
 868297e:	00 00 00 
 8682981:	8b 45 08             	mov    0x8(%ebp),%eax
 8682984:	05 9d 12 00 00       	add    $0x129d,%eax
 8682989:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8682990:	00 
 8682991:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8682998:	00 
 8682999:	89 04 24             	mov    %eax,(%esp)
 868299c:	e8 1f b3 9f ff       	call   807dcc0 <memset@plt>
 86829a1:	8b 45 08             	mov    0x8(%ebp),%eax
 86829a4:	05 a5 12 00 00       	add    $0x12a5,%eax
 86829a9:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 86829b0:	00 
 86829b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86829b8:	00 
 86829b9:	89 04 24             	mov    %eax,(%esp)
 86829bc:	e8 ff b2 9f ff       	call   807dcc0 <memset@plt>
 86829c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86829c4:	c7 80 ad 12 00 00 00 	movl   $0x0,0x12ad(%eax)
 86829cb:	00 00 00 
 86829ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86829d1:	c7 80 b1 12 00 00 00 	movl   $0x0,0x12b1(%eax)
 86829d8:	00 00 00 
 86829db:	8b 45 08             	mov    0x8(%ebp),%eax
 86829de:	66 c7 80 b5 12 00 00 	movw   $0x0,0x12b5(%eax)
 86829e5:	00 00 
 86829e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86829ea:	05 b7 12 00 00       	add    $0x12b7,%eax
 86829ef:	c7 44 24 08 00 02 00 	movl   $0x200,0x8(%esp)
 86829f6:	00 
 86829f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86829fe:	00 
 86829ff:	89 04 24             	mov    %eax,(%esp)
 8682a02:	e8 b9 b2 9f ff       	call   807dcc0 <memset@plt>
 8682a07:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a0a:	c6 80 b7 14 00 00 00 	movb   $0x0,0x14b7(%eax)
 8682a11:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a14:	c7 80 b8 14 00 00 00 	movl   $0x0,0x14b8(%eax)
 8682a1b:	00 00 00 
 8682a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a21:	c6 80 bc 14 00 00 00 	movb   $0x0,0x14bc(%eax)
 8682a28:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a2b:	c6 80 bd 14 00 00 00 	movb   $0x0,0x14bd(%eax)
 8682a32:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a35:	c7 80 be 14 00 00 00 	movl   $0x0,0x14be(%eax)
 8682a3c:	00 00 00 
 8682a3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a42:	c7 80 c2 14 00 00 00 	movl   $0x0,0x14c2(%eax)
 8682a49:	00 00 00 
 8682a4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a4f:	c7 80 c6 14 00 00 00 	movl   $0x0,0x14c6(%eax)
 8682a56:	00 00 00 
 8682a59:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a5c:	66 c7 80 ca 14 00 00 	movw   $0x0,0x14ca(%eax)
 8682a63:	00 00 
 8682a65:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a68:	66 c7 80 cc 14 00 00 	movw   $0x0,0x14cc(%eax)
 8682a6f:	00 00 
 8682a71:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a74:	c6 80 ce 14 00 00 00 	movb   $0x0,0x14ce(%eax)
 8682a7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a7e:	c6 80 cf 14 00 00 00 	movb   $0x0,0x14cf(%eax)
 8682a85:	8b 45 08             	mov    0x8(%ebp),%eax
 8682a88:	c6 80 d0 14 00 00 00 	movb   $0x0,0x14d0(%eax)
 8682a8f:	c9                   	leave
 8682a90:	c3                   	ret
 8682a91:	90                   	nop

```

```c
// _Charac_info::Reset @ 0x86822b8

/* _Charac_info::Reset() */

void __thiscall _Charac_info::Reset(_Charac_info *this)

{
  *(undefined4 *)this = 0;
  memset(this + 4,0,0x1e);
  this[0x22] = (_Charac_info)0x0;
  this[0x23] = (_Charac_info)0x0;
  this[0x26] = (_Charac_info)0x0;
  *(undefined2 *)(this + 0x27) = 0;
  this[0x29] = (_Charac_info)0x0;
  this[0x2a] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x2b) = 0;
  *(undefined4 *)(this + 0x2f) = 0;
  *(undefined2 *)(this + 0x33) = 0;
  *(undefined2 *)(this + 0x35) = 0;
  *(undefined2 *)(this + 0x37) = 0;
  CommonTime::clear((CommonTime *)(this + 0x39));
  *(undefined2 *)(this + 0x77) = 0;
  *(undefined2 *)(this + 0x79) = 0;
  *(undefined4 *)(this + 0x7b) = 0;
  *(undefined4 *)(this + 0x7f) = 0;
  _Additioal_info::clear((_Additioal_info *)(this + 0x88));
  CInventory::reset((CInventory *)(this + 0xda));
  SkillSlot::clear_all_skills_both((SkillSlot *)(this + 0x892));
  CCargo::reset((CCargo *)(this + 0xdaa));
  *(undefined4 *)(this + 0xdbe) = 0;
  this[0xdc2] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xe02) = 0;
  *(undefined4 *)(this + 0xdf4) = 0;
  *(undefined4 *)(this + 0xdf8) = 0;
  *(undefined4 *)(this + 0xdfe) = 0;
  *(undefined4 *)(this + 0xe06) = 0;
  *(undefined4 *)(this + 0xe0a) = 0;
  memset(this + 0xe0e,0,0x14);
  *(undefined4 *)(this + 0xe22) = 0;
  *(undefined4 *)(this + 0xe26) = 0;
  *(undefined4 *)(this + 0xe2a) = 0;
  *(undefined4 *)(this + 0xe33) = 0;
  *(undefined4 *)(this + 0xe37) = 0;
  *(undefined4 *)(this + 0xe2e) = 0;
  this[0xe32] = (_Charac_info)0x0;
  this[0xe3b] = (_Charac_info)0x0;
  this[0x83] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0xe3c) = 0;
  *(undefined4 *)(this + 0xde9) = 0;
  *(undefined2 *)(this + 0xded) = 0;
  *(undefined4 *)(this + 0xdef) = 0;
  this[0xdf3] = (_Charac_info)0x0;
  *(undefined2 *)(this + 0xdfc) = 0;
  *(undefined4 *)(this + 0xe41) = 0;
  *(undefined4 *)(this + 0xe49) = 0;
  *(undefined4 *)(this + 0xe4d) = 0;
  *(undefined4 *)(this + 0xe45) = 0;
  *(undefined4 *)(this + 0xe51) = 0;
  *(undefined4 *)(this + 0xe55) = 0;
  *(undefined4 *)(this + 0xe59) = 0;
  *(undefined4 *)(this + 0xe61) = 0;
  memset(this + 0xe8d,0,0xc);
  this[0xe90] = (_Charac_info)0x1;
  this[0x24] = (_Charac_info)0x0;
  this[0xe65] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xe5d) = 0;
  this[0xe66] = (_Charac_info)0x0;
  this[0xe67] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xe68) = 0;
  *(undefined4 *)(this + 0xe6c) = 0;
  *(undefined4 *)(this + 0xe71) = 0;
  *(undefined4 *)(this + 0xe75) = 0;
  *(undefined4 *)(this + 0xe79) = 0;
  *(undefined4 *)(this + 0xe7d) = 0;
  *(undefined4 *)(this + 0xe81) = 0;
  *(undefined4 *)(this + 0xe85) = 0;
  *(undefined4 *)(this + 0xe89) = 0;
  this[0xe99] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x71) = 0;
  this[0xeb2] = (_Charac_info)0x0;
  this[0xeb4] = (_Charac_info)0x0;
  this[0xeb8] = (_Charac_info)0x0;
  this[0xeb7] = (_Charac_info)0x0;
  memset(this + 0xeb9,0,6);
  this[0xebf] = (_Charac_info)0x0;
  memset(this + 0xec0,0,3);
  this[0xec3] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xec4) = 0xffffffff;
  *(undefined4 *)(this + 0xec8) = 400000000;
  std::
  map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>::
  clear((map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
         *)(this + 0xecc));
  this[0xee4] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xee5) = 0;
  *(undefined2 *)(this + 0x4f) = 0;
  this[0xee9] = (_Charac_info)0x0;
  this[0xeea] = (_Charac_info)0x0;
  *(undefined2 *)(this + 0xeeb) = 0;
  memset(this + 0xeed,0,0x199);
  memset(this + 0x55,0,0x10);
  *(undefined2 *)(this + 0x121f) = 0;
  *(undefined4 *)(this + 0x1221) = 0;
  *(undefined4 *)(this + 0x1225) = 0;
  *(undefined2 *)(this + 0x1229) = 0;
  this[0x122b] = (_Charac_info)0x0;
  *(undefined2 *)(this + 0x122c) = 0;
  *(undefined4 *)(this + 0x122e) = 0;
  *(undefined2 *)(this + 0x1232) = 0;
  *(undefined2 *)(this + 0x1234) = 0;
  *(undefined2 *)(this + 0x1236) = 0;
  this[0x1238] = (_Charac_info)0x0;
  this[0x1239] = (_Charac_info)0xff;
  *(undefined2 *)(this + 0x123a) = 0;
  *(undefined2 *)(this + 0x123c) = 0;
  this[0x123e] = (_Charac_info)0x0;
  this[0x1241] = (_Charac_info)0x1;
  this[0x1242] = (_Charac_info)0x0;
  this[0x1243] = (_Charac_info)0x0;
  this[0x1244] = (_Charac_info)0x0;
  this[0x1245] = (_Charac_info)0xff;
  this[0x1246] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x1247) = 0;
  *(undefined4 *)(this + 0x124b) = 0;
  this[0x124f] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x1250) = 0;
  std::
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  ::clear((map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
           *)(this + 0x1254));
  *(undefined2 *)(this + 0x126c) = 0;
  this[0x126e] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x126f) = 0;
  this[0x1273] = (_Charac_info)0x0;
  this[0x1274] = (_Charac_info)0x0;
  this[0x1275] = (_Charac_info)0x0;
  this[0x1276] = (_Charac_info)0x0;
  this[0x1277] = (_Charac_info)0x0;
  this[0x1278] = (_Charac_info)0x0;
  this[0x1279] = (_Charac_info)0x0;
  this[0x127a] = (_Charac_info)0x0;
  tagCharacVisibleFlag::reset((tagCharacVisibleFlag *)(this + 0xe40));
  this[0x127b] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x127c) = 0;
  this[0x1280] = (_Charac_info)0x0;
  stAuraAvatarOption::reset((stAuraAvatarOption *)(this + 0x1281));
  *(undefined4 *)(this + 0x1291) = 0;
  *(undefined4 *)(this + 0x128d) = 0;
  *(undefined4 *)(this + 0x1295) = 0;
  *(undefined4 *)(this + 0x1299) = 0;
  memset(this + 0x129d,0,8);
  memset(this + 0x12a5,0,8);
  *(undefined4 *)(this + 0x12ad) = 0;
  *(undefined4 *)(this + 0x12b1) = 0;
  *(undefined2 *)(this + 0x12b5) = 0;
  memset(this + 0x12b7,0,0x200);
  this[0x14b7] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x14b8) = 0;
  this[0x14bc] = (_Charac_info)0x0;
  this[0x14bd] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x14be) = 0;
  *(undefined4 *)(this + 0x14c2) = 0;
  *(undefined4 *)(this + 0x14c6) = 0;
  *(undefined2 *)(this + 0x14ca) = 0;
  *(undefined2 *)(this + 0x14cc) = 0;
  this[0x14ce] = (_Charac_info)0x0;
  this[0x14cf] = (_Charac_info)0x0;
  this[0x14d0] = (_Charac_info)0x0;
  return;
}

```

