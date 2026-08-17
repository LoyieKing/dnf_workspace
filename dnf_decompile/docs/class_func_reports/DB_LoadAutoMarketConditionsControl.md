# DB_LoadAutoMarketConditionsControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084335dc DB_LoadAutoMarketConditionsControl::dispatch  [0x084335dc-0x8433ad9] ===
 84335dc:	55                   	push   %ebp
 84335dd:	89 e5                	mov    %esp,%ebp
 84335df:	56                   	push   %esi
 84335e0:	53                   	push   %ebx
 84335e1:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 84335e7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84335ec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84335f3:	00 
 84335f4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84335fb:	00 
 84335fc:	89 04 24             	mov    %eax,(%esp)
 84335ff:	e8 3a 1c fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8433604:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8433607:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 843360b:	8d 45 d7             	lea    -0x29(%ebp),%eax
 843360e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433612:	8b 45 14             	mov    0x14(%ebp),%eax
 8433615:	89 04 24             	mov    %eax,(%esp)
 8433618:	e8 5f 8e 1e 00       	call   861c47c <_ZN6StreamrsERb>
 843361d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8433624:	c7 44 24 08 6c 00 00 	movl   $0x6c,0x8(%esp)
 843362b:	00 
 843362c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8433633:	00 
 8433634:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 843363a:	89 04 24             	mov    %eax,(%esp)
 843363d:	e8 7e a6 c4 ff       	call   807dcc0 <memset@plt>
 8433642:	c7 44 24 04 8c 27 c5 	movl   $0x8c5278c,0x4(%esp)
 8433649:	08 
 843364a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843364d:	89 04 24             	mov    %eax,(%esp)
 8433650:	e8 6b 0b fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8433655:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843365c:	00 
 843365d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8433660:	89 04 24             	mov    %eax,(%esp)
 8433663:	e8 be 0c fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8433668:	83 f0 01             	xor    $0x1,%eax
 843366b:	84 c0                	test   %al,%al
 843366d:	74 0a                	je     8433679 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x9d>
 843366f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8433674:	e9 54 04 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 8433679:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843367c:	89 04 24             	mov    %eax,(%esp)
 843367f:	e8 e8 ec ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8433684:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8433687:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 843368b:	74 7b                	je     8433708 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x12c>
 843368d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8433690:	89 04 24             	mov    %eax,(%esp)
 8433693:	e8 24 0e fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8433698:	83 f0 01             	xor    $0x1,%eax
 843369b:	84 c0                	test   %al,%al
 843369d:	74 0a                	je     84336a9 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0xcd>
 843369f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84336a4:	e9 24 04 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 84336a9:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84336af:	83 c0 08             	add    $0x8,%eax
 84336b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84336b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84336bd:	00 
 84336be:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84336c1:	89 04 24             	mov    %eax,(%esp)
 84336c4:	e8 ff 1d d4 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 84336c9:	83 f0 01             	xor    $0x1,%eax
 84336cc:	84 c0                	test   %al,%al
 84336ce:	74 0a                	je     84336da <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0xfe>
 84336d0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84336d5:	e9 f3 03 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 84336da:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84336e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84336e4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84336eb:	00 
 84336ec:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84336ef:	89 04 24             	mov    %eax,(%esp)
 84336f2:	e8 d1 1d d4 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 84336f7:	83 f0 01             	xor    $0x1,%eax
 84336fa:	84 c0                	test   %al,%al
 84336fc:	74 0a                	je     8433708 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x12c>
 84336fe:	bb 00 00 00 00       	mov    $0x0,%ebx
 8433703:	e9 c5 03 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 8433708:	c7 44 24 04 dc 27 c5 	movl   $0x8c527dc,0x4(%esp)
 843370f:	08 
 8433710:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8433713:	89 04 24             	mov    %eax,(%esp)
 8433716:	e8 a5 0a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843371b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8433722:	00 
 8433723:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8433726:	89 04 24             	mov    %eax,(%esp)
 8433729:	e8 f8 0b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 843372e:	83 f0 01             	xor    $0x1,%eax
 8433731:	84 c0                	test   %al,%al
 8433733:	74 0a                	je     843373f <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x163>
 8433735:	bb 00 00 00 00       	mov    $0x0,%ebx
 843373a:	e9 8e 03 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 843373f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8433742:	89 04 24             	mov    %eax,(%esp)
 8433745:	e8 22 ec ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843374a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843374d:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 8433751:	74 4d                	je     84337a0 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x1c4>
 8433753:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 8433757:	74 47                	je     84337a0 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x1c4>
 8433759:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8433760:	00 
 8433761:	c7 44 24 08 0c 7c 00 	movl   $0x7c0c,0x8(%esp)
 8433768:	00 
 8433769:	c7 44 24 04 60 c0 c5 	movl   $0x8c5c060,0x4(%esp)
 8433770:	08 
 8433771:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8433774:	89 04 24             	mov    %eax,(%esp)
 8433777:	e8 9c bf 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 843377c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843377f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8433783:	c7 44 24 04 bc 28 c5 	movl   $0x8c528bc,0x4(%esp)
 843378a:	08 
 843378b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843378e:	89 04 24             	mov    %eax,(%esp)
 8433791:	e8 f2 bf 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8433796:	bb 00 00 00 00       	mov    $0x0,%ebx
 843379b:	e9 2d 03 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 84337a0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84337a7:	e9 bb 01 00 00       	jmp    8433967 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x38b>
 84337ac:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84337af:	89 04 24             	mov    %eax,(%esp)
 84337b2:	e8 05 0d fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84337b7:	83 f0 01             	xor    $0x1,%eax
 84337ba:	84 c0                	test   %al,%al
 84337bc:	74 0a                	je     84337c8 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x1ec>
 84337be:	bb 00 00 00 00       	mov    $0x0,%ebx
 84337c3:	e9 05 03 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 84337c8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84337cb:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84337d1:	6b d2 2c             	imul   $0x2c,%edx,%edx
 84337d4:	83 c2 10             	add    $0x10,%edx
 84337d7:	01 d0                	add    %edx,%eax
 84337d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84337dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84337e4:	00 
 84337e5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84337e8:	89 04 24             	mov    %eax,(%esp)
 84337eb:	e8 d8 1c d4 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 84337f0:	83 f0 01             	xor    $0x1,%eax
 84337f3:	84 c0                	test   %al,%al
 84337f5:	74 0a                	je     8433801 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x225>
 84337f7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84337fc:	e9 cc 02 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 8433801:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8433804:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 843380a:	6b d2 2c             	imul   $0x2c,%edx,%edx
 843380d:	83 c2 10             	add    $0x10,%edx
 8433810:	01 d0                	add    %edx,%eax
 8433812:	83 c0 08             	add    $0x8,%eax
 8433815:	89 44 24 08          	mov    %eax,0x8(%esp)
 8433819:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8433820:	00 
 8433821:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8433824:	89 04 24             	mov    %eax,(%esp)
 8433827:	e8 9c 1c d4 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 843382c:	83 f0 01             	xor    $0x1,%eax
 843382f:	84 c0                	test   %al,%al
 8433831:	74 0a                	je     843383d <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x261>
 8433833:	bb 00 00 00 00       	mov    $0x0,%ebx
 8433838:	e9 90 02 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 843383d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8433840:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8433846:	6b d2 2c             	imul   $0x2c,%edx,%edx
 8433849:	83 c2 20             	add    $0x20,%edx
 843384c:	01 d0                	add    %edx,%eax
 843384e:	83 c0 08             	add    $0x8,%eax
 8433851:	89 44 24 08          	mov    %eax,0x8(%esp)
 8433855:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843385c:	00 
 843385d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8433860:	89 04 24             	mov    %eax,(%esp)
 8433863:	e8 60 1c d4 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 8433868:	83 f0 01             	xor    $0x1,%eax
 843386b:	84 c0                	test   %al,%al
 843386d:	74 0a                	je     8433879 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x29d>
 843386f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8433874:	e9 54 02 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 8433879:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843387c:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8433882:	6b d2 2c             	imul   $0x2c,%edx,%edx
 8433885:	83 c2 20             	add    $0x20,%edx
 8433888:	01 d0                	add    %edx,%eax
 843388a:	89 44 24 08          	mov    %eax,0x8(%esp)
 843388e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8433895:	00 
 8433896:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8433899:	89 04 24             	mov    %eax,(%esp)
 843389c:	e8 27 1c d4 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 84338a1:	83 f0 01             	xor    $0x1,%eax
 84338a4:	84 c0                	test   %al,%al
 84338a6:	74 0a                	je     84338b2 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x2d6>
 84338a8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84338ad:	e9 1b 02 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 84338b2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84338b5:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84338bb:	6b d2 2c             	imul   $0x2c,%edx,%edx
 84338be:	83 c2 30             	add    $0x30,%edx
 84338c1:	01 d0                	add    %edx,%eax
 84338c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84338c7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84338ce:	00 
 84338cf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84338d2:	89 04 24             	mov    %eax,(%esp)
 84338d5:	e8 52 30 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84338da:	83 f0 01             	xor    $0x1,%eax
 84338dd:	84 c0                	test   %al,%al
 84338df:	74 0a                	je     84338eb <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x30f>
 84338e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84338e6:	e9 e2 01 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 84338eb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84338ee:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84338f4:	6b d2 2c             	imul   $0x2c,%edx,%edx
 84338f7:	83 c2 30             	add    $0x30,%edx
 84338fa:	01 d0                	add    %edx,%eax
 84338fc:	83 c0 04             	add    $0x4,%eax
 84338ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8433903:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 843390a:	00 
 843390b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843390e:	89 04 24             	mov    %eax,(%esp)
 8433911:	e8 16 30 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8433916:	83 f0 01             	xor    $0x1,%eax
 8433919:	84 c0                	test   %al,%al
 843391b:	74 0a                	je     8433927 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x34b>
 843391d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8433922:	e9 a6 01 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 8433927:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843392a:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8433930:	6b d2 2c             	imul   $0x2c,%edx,%edx
 8433933:	83 c2 30             	add    $0x30,%edx
 8433936:	01 d0                	add    %edx,%eax
 8433938:	83 c0 08             	add    $0x8,%eax
 843393b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843393f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8433946:	00 
 8433947:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843394a:	89 04 24             	mov    %eax,(%esp)
 843394d:	e8 da 2f ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8433952:	83 f0 01             	xor    $0x1,%eax
 8433955:	84 c0                	test   %al,%al
 8433957:	74 0a                	je     8433963 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x387>
 8433959:	bb 00 00 00 00       	mov    $0x0,%ebx
 843395e:	e9 6a 01 00 00       	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 8433963:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8433967:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843396a:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 843396d:	7d 0d                	jge    843397c <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x3a0>
 843396f:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8433973:	7f 07                	jg     843397c <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x3a0>
 8433975:	b8 01 00 00 00       	mov    $0x1,%eax
 843397a:	eb 05                	jmp    8433981 <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x3a5>
 843397c:	b8 00 00 00 00       	mov    $0x0,%eax
 8433981:	84 c0                	test   %al,%al
 8433983:	0f 85 23 fe ff ff    	jne    84337ac <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x1d0>
 8433989:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 843398d:	75 4e                	jne    84339dd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x401>
 843398f:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8433995:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8433998:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 843399e:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84339a1:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 84339a7:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84339aa:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 84339b0:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84339b3:	8b 45 80             	mov    -0x80(%ebp),%eax
 84339b6:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84339b9:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84339bc:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84339bf:	8b 45 88             	mov    -0x78(%ebp),%eax
 84339c2:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84339c5:	8b 45 8c             	mov    -0x74(%ebp),%eax
 84339c8:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84339cb:	8b 45 90             	mov    -0x70(%ebp),%eax
 84339ce:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84339d1:	8b 45 94             	mov    -0x6c(%ebp),%eax
 84339d4:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84339d7:	8b 45 98             	mov    -0x68(%ebp),%eax
 84339da:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84339dd:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84339e2:	c7 44 24 08 30 7c 00 	movl   $0x7c30,0x8(%esp)
 84339e9:	00 
 84339ea:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84339f1:	08 
 84339f2:	89 04 24             	mov    %eax,(%esp)
 84339f5:	e8 8c c0 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84339fa:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8433a01:	00 
 8433a02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433a06:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8433a09:	89 04 24             	mov    %eax,(%esp)
 8433a0c:	e8 15 52 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8433a11:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8433a14:	89 04 24             	mov    %eax,(%esp)
 8433a17:	e8 2a 52 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433a1c:	c7 44 24 04 5a 01 00 	movl   $0x15a,0x4(%esp)
 8433a23:	00 
 8433a24:	89 04 24             	mov    %eax,(%esp)
 8433a27:	e8 2a 52 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433a2c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8433a2f:	89 04 24             	mov    %eax,(%esp)
 8433a32:	e8 0f 52 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433a37:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8433a3e:	ff 
 8433a3f:	89 04 24             	mov    %eax,(%esp)
 8433a42:	e8 0f 52 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433a47:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8433a4a:	89 04 24             	mov    %eax,(%esp)
 8433a4d:	e8 fc 51 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8433a52:	89 04 24             	mov    %eax,(%esp)
 8433a55:	e8 04 f6 01 00       	call   845305e <_ZN12CStreamGuard11GetInBufferI34SIG_AUTO_MARKET_CONDITIONS_CONTROLEEPT_v>
 8433a5a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8433a5d:	c7 44 24 08 6c 00 00 	movl   $0x6c,0x8(%esp)
 8433a64:	00 
 8433a65:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8433a6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433a6f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8433a72:	89 04 24             	mov    %eax,(%esp)
 8433a75:	e8 26 9e c4 ff       	call   807d8a0 <memcpy@plt>
 8433a7a:	0f b6 55 d7          	movzbl -0x29(%ebp),%edx
 8433a7e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8433a81:	88 50 68             	mov    %dl,0x68(%eax)
 8433a84:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8433a89:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8433a8c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8433a90:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8433a97:	00 
 8433a98:	89 04 24             	mov    %eax,(%esp)
 8433a9b:	e8 3e d5 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8433aa0:	bb 01 00 00 00       	mov    $0x1,%ebx
 8433aa5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8433aa8:	89 04 24             	mov    %eax,(%esp)
 8433aab:	e8 22 8e 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8433ab0:	eb 1b                	jmp    8433acd <_ZN34DB_LoadAutoMarketConditionsControl8dispatchEiiP6Stream+0x4f1>
 8433ab2:	89 d3                	mov    %edx,%ebx
 8433ab4:	89 c6                	mov    %eax,%esi
 8433ab6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8433ab9:	89 04 24             	mov    %eax,(%esp)
 8433abc:	e8 11 8e 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8433ac1:	89 f0                	mov    %esi,%eax
 8433ac3:	89 da                	mov    %ebx,%edx
 8433ac5:	89 04 24             	mov    %eax,(%esp)
 8433ac8:	e8 83 fc 6a 00       	call   8ae3750 <_Unwind_Resume>
 8433acd:	89 d8                	mov    %ebx,%eax
 8433acf:	81 c4 b0 00 00 00    	add    $0xb0,%esp
 8433ad5:	5b                   	pop    %ebx
 8433ad6:	5e                   	pop    %esi
 8433ad7:	5d                   	pop    %ebp
 8433ad8:	c3                   	ret
 8433ad9:	90                   	nop

```

```c
// DB_LoadAutoMarketConditionsControl::dispatch @ 0x84335dc

/* DB_LoadAutoMarketConditionsControl::dispatch(int, int, Stream*) */

undefined4 DB_LoadAutoMarketConditionsControl::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  Stream *in_stack_00000010;
  ulonglong local_a4;
  ulonglong uStack_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  CStreamGuard local_38 [11];
  SIG_AUTO_MARKET_CONDITIONS_CONTROL local_2d;
  cMyTrace local_2c [16];
  MySQL *local_1c;
  int local_18;
  SIG_AUTO_MARKET_CONDITIONS_CONTROL *local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_2d = (SIG_AUTO_MARKET_CONDITIONS_CONTROL)0x0;
  Stream::operator>>(in_stack_00000010,(bool *)&local_2d);
  local_18 = 0;
  memset(&local_a4,0,0x6c);
  MySQL::set_query(local_1c,
                   "seLect optimum_gold_supply, over_gold from auto_market_condition_ctrl limit 1");
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_18 = MySQL::get_n_rows(local_1c);
  if (local_18 != 0) {
    cVar2 = MySQL::fetch(local_1c);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_ulonglong(local_1c,0,&uStack_9c);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_ulonglong(local_1c,1,&local_a4);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  MySQL::set_query(local_1c,
                   "seLect total_gold, auction_gold, optimum_gold_supply, over_gold, gold_phase, item_phase, durability_phase from auto_market_condition_ctrl_daily where occ_time >= DATE_SUB(CURDATE(), INTERVAL 1 DAY) order by occ_time limit 2"
                  );
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 == '\x01') {
    local_18 = MySQL::get_n_rows(local_1c);
    if ((local_18 == 2) || (local_18 == 1)) {
      local_10 = 0;
      while( true ) {
        if ((local_10 < local_18) && (local_10 < 2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          if (local_18 == 1) {
            local_74[3] = local_94;
            local_64 = local_90;
            local_60 = local_8c;
            local_5c = local_88;
            local_58 = local_84;
            local_54 = local_80;
            local_50 = local_7c;
            local_4c = local_78;
            local_48 = local_74[0];
            local_44 = local_74[1];
            local_40 = local_74[2];
          }
          pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7c30);
          CStreamGuard::CStreamGuard(local_38,pSVar3,true);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08433a27 to 08433a9f has its CatchHandler @ 08433ab2 */
          CStreamGuard::operator<<(pCVar4,0x15a);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
          CStreamGuard::operator<<(pCVar4,-1);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_38);
          local_14 = CStreamGuard::GetInBuffer<SIG_AUTO_MARKET_CONDITIONS_CONTROL>(pCVar4);
          memcpy(local_14,&local_a4,0x6c);
          local_14[0x68] = local_2d;
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
          CStreamGuard::~CStreamGuard(local_38);
          return 1;
        }
        cVar2 = MySQL::fetch(local_1c);
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_ulonglong(local_1c,0,(ulonglong *)(&local_94 + local_10 * 0xb));
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_ulonglong(local_1c,1,(ulonglong *)(&local_8c + local_10 * 0xb));
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_ulonglong(local_1c,2,(ulonglong *)(&local_7c + local_10 * 0xb));
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_ulonglong(local_1c,3,(ulonglong *)(&local_84 + local_10 * 0xb));
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_int(local_1c,4,local_74 + local_10 * 0xb);
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_int(local_1c,5,local_74 + local_10 * 0xb + 1);
        if (cVar2 != '\x01') {
          return 0;
        }
        cVar2 = MySQL::get_int(local_1c,6,local_74 + local_10 * 0xb + 2);
        if (cVar2 != '\x01') break;
        local_10 = local_10 + 1;
      }
    }
    else {
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool DB_LoadAutoMarketConditionsControl::dispatch(int, int, Stream*)"
                         ,0x7c0c,0);
      cMyTrace::operator()(local_2c,"DB_LoadAutoMarketConditionsControl error %d",local_18);
    }
  }
  return 0;
}

```

---

## makeRequest

```asm
// === 08433ada DB_LoadAutoMarketConditionsControl::makeRequest  [0x08433ada-0x8433bb7] ===
 8433ada:	55                   	push   %ebp
 8433adb:	89 e5                	mov    %esp,%ebp
 8433add:	56                   	push   %esi
 8433ade:	53                   	push   %ebx
 8433adf:	83 ec 30             	sub    $0x30,%esp
 8433ae2:	8b 45 08             	mov    0x8(%ebp),%eax
 8433ae5:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8433ae8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8433aed:	c7 44 24 08 43 7c 00 	movl   $0x7c43,0x8(%esp)
 8433af4:	00 
 8433af5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8433afc:	08 
 8433afd:	89 04 24             	mov    %eax,(%esp)
 8433b00:	e8 81 bf e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8433b05:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8433b0c:	00 
 8433b0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433b11:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433b14:	89 04 24             	mov    %eax,(%esp)
 8433b17:	e8 0a 51 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8433b1c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433b1f:	89 04 24             	mov    %eax,(%esp)
 8433b22:	e8 1f 51 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433b27:	c7 44 24 04 5a 01 00 	movl   $0x15a,0x4(%esp)
 8433b2e:	00 
 8433b2f:	89 04 24             	mov    %eax,(%esp)
 8433b32:	e8 1f 51 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433b37:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433b3a:	89 04 24             	mov    %eax,(%esp)
 8433b3d:	e8 04 51 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433b42:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8433b49:	ff 
 8433b4a:	89 04 24             	mov    %eax,(%esp)
 8433b4d:	e8 04 51 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433b52:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 8433b56:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433b59:	89 04 24             	mov    %eax,(%esp)
 8433b5c:	e8 e5 50 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433b61:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8433b65:	89 04 24             	mov    %eax,(%esp)
 8433b68:	e8 c3 98 01 00       	call   844d430 <_ZN12CStreamGuardlsEb>
 8433b6d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8433b72:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8433b75:	89 54 24 08          	mov    %edx,0x8(%esp)
 8433b79:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8433b80:	00 
 8433b81:	89 04 24             	mov    %eax,(%esp)
 8433b84:	e8 55 d4 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8433b89:	eb 1b                	jmp    8433ba6 <_ZN34DB_LoadAutoMarketConditionsControl11makeRequestEb+0xcc>
 8433b8b:	89 d3                	mov    %edx,%ebx
 8433b8d:	89 c6                	mov    %eax,%esi
 8433b8f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433b92:	89 04 24             	mov    %eax,(%esp)
 8433b95:	e8 38 8d 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8433b9a:	89 f0                	mov    %esi,%eax
 8433b9c:	89 da                	mov    %ebx,%edx
 8433b9e:	89 04 24             	mov    %eax,(%esp)
 8433ba1:	e8 aa fb 6a 00       	call   8ae3750 <_Unwind_Resume>
 8433ba6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433ba9:	89 04 24             	mov    %eax,(%esp)
 8433bac:	e8 21 8d 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8433bb1:	83 c4 30             	add    $0x30,%esp
 8433bb4:	5b                   	pop    %ebx
 8433bb5:	5e                   	pop    %esi
 8433bb6:	5d                   	pop    %ebp
 8433bb7:	c3                   	ret

```

```c
// DB_LoadAutoMarketConditionsControl::makeRequest @ 0x8433ada

/* DB_LoadAutoMarketConditionsControl::makeRequest(bool) */

void DB_LoadAutoMarketConditionsControl::makeRequest(bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7c43);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08433b32 to 08433b88 has its CatchHandler @ 08433b8b */
  CStreamGuard::operator<<(pCVar2,0x15a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

