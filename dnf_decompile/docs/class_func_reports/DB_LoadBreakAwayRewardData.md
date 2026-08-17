# DB_LoadBreakAwayRewardData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084392dc DB_LoadBreakAwayRewardData::dispatch  [0x084392dc-0x843982b] ===
 84392dc:	55                   	push   %ebp
 84392dd:	89 e5                	mov    %esp,%ebp
 84392df:	57                   	push   %edi
 84392e0:	56                   	push   %esi
 84392e1:	53                   	push   %ebx
 84392e2:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 84392e8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84392ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84392f4:	00 
 84392f5:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84392fc:	00 
 84392fd:	89 04 24             	mov    %eax,(%esp)
 8439300:	e8 39 bf fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8439305:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8439308:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 843930f:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8439316:	e8 66 2e c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 843931b:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8439321:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8439324:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 843932b:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8439332:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8439339:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8439340:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8439347:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 843934e:	e8 4b 29 c9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8439353:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8439356:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 843935c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439360:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8439363:	89 04 24             	mov    %eax,(%esp)
 8439366:	e8 f5 4f c4 ff       	call   807e360 <localtime_r@plt>
 843936b:	c7 45 95 00 00 00 00 	movl   $0x0,-0x6b(%ebp)
 8439372:	66 c7 45 99 00 00    	movw   $0x0,-0x67(%ebp)
 8439378:	c6 45 9b 00          	movb   $0x0,-0x65(%ebp)
 843937c:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8439382:	8d 50 01             	lea    0x1(%eax),%edx
 8439385:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 843938b:	05 6c 07 00 00       	add    $0x76c,%eax
 8439390:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8439394:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439398:	c7 44 24 04 09 45 c5 	movl   $0x8c54509,0x4(%esp)
 843939f:	08 
 84393a0:	8d 45 95             	lea    -0x6b(%ebp),%eax
 84393a3:	89 04 24             	mov    %eax,(%esp)
 84393a6:	e8 95 50 c4 ff       	call   807e440 <sprintf@plt>
 84393ab:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84393ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84393b2:	8b 45 14             	mov    0x14(%ebp),%eax
 84393b5:	89 04 24             	mov    %eax,(%esp)
 84393b8:	e8 d9 33 1e 00       	call   861c796 <_ZN6StreamrsERj>
 84393bd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84393c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84393c4:	8b 45 14             	mov    0x14(%ebp),%eax
 84393c7:	89 04 24             	mov    %eax,(%esp)
 84393ca:	e8 c7 33 1e 00       	call   861c796 <_ZN6StreamrsERj>
 84393cf:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84393d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84393d6:	8b 45 14             	mov    0x14(%ebp),%eax
 84393d9:	89 04 24             	mov    %eax,(%esp)
 84393dc:	e8 b5 33 1e 00       	call   861c796 <_ZN6StreamrsERj>
 84393e1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84393e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84393e8:	8b 45 14             	mov    0x14(%ebp),%eax
 84393eb:	89 04 24             	mov    %eax,(%esp)
 84393ee:	e8 d1 31 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 84393f3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84393f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84393fa:	8b 45 14             	mov    0x14(%ebp),%eax
 84393fd:	89 04 24             	mov    %eax,(%esp)
 8439400:	e8 bf 31 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8439405:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8439408:	89 44 24 04          	mov    %eax,0x4(%esp)
 843940c:	8b 45 14             	mov    0x14(%ebp),%eax
 843940f:	89 04 24             	mov    %eax,(%esp)
 8439412:	e8 ad 31 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8439417:	8d 45 a0             	lea    -0x60(%ebp),%eax
 843941a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843941e:	8b 45 14             	mov    0x14(%ebp),%eax
 8439421:	89 04 24             	mov    %eax,(%esp)
 8439424:	e8 6d 33 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8439429:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 843942c:	85 c0                	test   %eax,%eax
 843942e:	75 59                	jne    8439489 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x1ad>
 8439430:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8439433:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843943a:	00 
 843943b:	89 04 24             	mov    %eax,(%esp)
 843943e:	e8 08 fc cc ff       	call   810904b <_Z14NumberToStringji>
 8439443:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 8439446:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8439449:	8d b2 80 51 01 00    	lea    0x15180(%edx),%esi
 843944f:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8439452:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8439455:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8439459:	c7 44 24 18 03 00 00 	movl   $0x3,0x18(%esp)
 8439460:	00 
 8439461:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8439465:	89 74 24 10          	mov    %esi,0x10(%esp)
 8439469:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843946d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8439471:	c7 44 24 04 10 45 c5 	movl   $0x8c54510,0x4(%esp)
 8439478:	08 
 8439479:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843947c:	89 04 24             	mov    %eax,(%esp)
 843947f:	e8 3c ad fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439484:	e9 2c 01 00 00       	jmp    84395b5 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x2d9>
 8439489:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 843948c:	83 f8 01             	cmp    $0x1,%eax
 843948f:	75 2d                	jne    84394be <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x1e2>
 8439491:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8439494:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8439497:	8b 45 9c             	mov    -0x64(%ebp),%eax
 843949a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 843949e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84394a2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84394a6:	c7 44 24 04 94 45 c5 	movl   $0x8c54594,0x4(%esp)
 84394ad:	08 
 84394ae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84394b1:	89 04 24             	mov    %eax,(%esp)
 84394b4:	e8 07 ad fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84394b9:	e9 f7 00 00 00       	jmp    84395b5 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x2d9>
 84394be:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84394c1:	83 f8 02             	cmp    $0x2,%eax
 84394c4:	75 59                	jne    843951f <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x243>
 84394c6:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84394c9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84394d0:	00 
 84394d1:	89 04 24             	mov    %eax,(%esp)
 84394d4:	e8 72 fb cc ff       	call   810904b <_Z14NumberToStringji>
 84394d9:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 84394dc:	8b 55 9c             	mov    -0x64(%ebp),%edx
 84394df:	8d b2 80 51 01 00    	lea    0x15180(%edx),%esi
 84394e5:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 84394e8:	8b 55 9c             	mov    -0x64(%ebp),%edx
 84394eb:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84394ef:	c7 44 24 18 03 00 00 	movl   $0x3,0x18(%esp)
 84394f6:	00 
 84394f7:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84394fb:	89 74 24 10          	mov    %esi,0x10(%esp)
 84394ff:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8439503:	89 54 24 08          	mov    %edx,0x8(%esp)
 8439507:	c7 44 24 04 e4 45 c5 	movl   $0x8c545e4,0x4(%esp)
 843950e:	08 
 843950f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8439512:	89 04 24             	mov    %eax,(%esp)
 8439515:	e8 a6 ac fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843951a:	e9 96 00 00 00       	jmp    84395b5 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x2d9>
 843951f:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8439522:	83 f8 03             	cmp    $0x3,%eax
 8439525:	75 3a                	jne    8439561 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x285>
 8439527:	8b 45 b8             	mov    -0x48(%ebp),%eax
 843952a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8439531:	00 
 8439532:	89 04 24             	mov    %eax,(%esp)
 8439535:	e8 11 fb cc ff       	call   810904b <_Z14NumberToStringji>
 843953a:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 843953d:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8439540:	89 44 24 10          	mov    %eax,0x10(%esp)
 8439544:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8439548:	89 54 24 08          	mov    %edx,0x8(%esp)
 843954c:	c7 44 24 04 6c 46 c5 	movl   $0x8c5466c,0x4(%esp)
 8439553:	08 
 8439554:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8439557:	89 04 24             	mov    %eax,(%esp)
 843955a:	e8 61 ac fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843955f:	eb 54                	jmp    84395b5 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x2d9>
 8439561:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8439564:	83 f8 04             	cmp    $0x4,%eax
 8439567:	75 42                	jne    84395ab <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x2cf>
 8439569:	8b 45 b8             	mov    -0x48(%ebp),%eax
 843956c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8439573:	00 
 8439574:	89 04 24             	mov    %eax,(%esp)
 8439577:	e8 cf fa cc ff       	call   810904b <_Z14NumberToStringji>
 843957c:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 843957f:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8439582:	89 44 24 14          	mov    %eax,0x14(%esp)
 8439586:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 843958d:	ff 
 843958e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8439592:	89 54 24 08          	mov    %edx,0x8(%esp)
 8439596:	c7 44 24 04 bc 46 c5 	movl   $0x8c546bc,0x4(%esp)
 843959d:	08 
 843959e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84395a1:	89 04 24             	mov    %eax,(%esp)
 84395a4:	e8 17 ac fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84395a9:	eb 0a                	jmp    84395b5 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x2d9>
 84395ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 84395b0:	e9 6a 02 00 00       	jmp    843981f <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x543>
 84395b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84395bc:	00 
 84395bd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84395c0:	89 04 24             	mov    %eax,(%esp)
 84395c3:	e8 5e ad fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84395c8:	83 f0 01             	xor    $0x1,%eax
 84395cb:	84 c0                	test   %al,%al
 84395cd:	75 11                	jne    84395e0 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x304>
 84395cf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84395d2:	89 04 24             	mov    %eax,(%esp)
 84395d5:	e8 36 ad fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84395da:	09 d0                	or     %edx,%eax
 84395dc:	85 c0                	test   %eax,%eax
 84395de:	75 07                	jne    84395e7 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x30b>
 84395e0:	b8 01 00 00 00       	mov    $0x1,%eax
 84395e5:	eb 05                	jmp    84395ec <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x310>
 84395e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84395ec:	84 c0                	test   %al,%al
 84395ee:	74 40                	je     8439630 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x354>
 84395f0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84395f7:	00 
 84395f8:	c7 44 24 08 1e 87 00 	movl   $0x871e,0x8(%esp)
 84395ff:	00 
 8439600:	c7 44 24 04 60 bb c5 	movl   $0x8c5bb60,0x4(%esp)
 8439607:	08 
 8439608:	8d 45 bc             	lea    -0x44(%ebp),%eax
 843960b:	89 04 24             	mov    %eax,(%esp)
 843960e:	e8 05 61 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8439613:	c7 44 24 04 18 47 c5 	movl   $0x8c54718,0x4(%esp)
 843961a:	08 
 843961b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 843961e:	89 04 24             	mov    %eax,(%esp)
 8439621:	e8 62 61 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8439626:	bb 00 00 00 00       	mov    $0x0,%ebx
 843962b:	e9 ef 01 00 00       	jmp    843981f <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x543>
 8439630:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 8439633:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8439636:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 843963c:	8b 45 a8             	mov    -0x58(%ebp),%eax
 843963f:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8439645:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8439648:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 843964e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8439651:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8439657:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 843965a:	8b 75 9c             	mov    -0x64(%ebp),%esi
 843965d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8439660:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8439667:	00 
 8439668:	89 04 24             	mov    %eax,(%esp)
 843966b:	e8 db f9 cc ff       	call   810904b <_Z14NumberToStringji>
 8439670:	89 c2                	mov    %eax,%edx
 8439672:	89 5c 24 2c          	mov    %ebx,0x2c(%esp)
 8439676:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 843967c:	89 44 24 28          	mov    %eax,0x28(%esp)
 8439680:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8439686:	89 44 24 24          	mov    %eax,0x24(%esp)
 843968a:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 8439690:	89 44 24 20          	mov    %eax,0x20(%esp)
 8439694:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 843969a:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 843969e:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84396a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84396a5:	89 44 24 14          	mov    %eax,0x14(%esp)
 84396a9:	89 74 24 10          	mov    %esi,0x10(%esp)
 84396ad:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84396b1:	8d 45 95             	lea    -0x6b(%ebp),%eax
 84396b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84396b8:	c7 44 24 04 54 47 c5 	movl   $0x8c54754,0x4(%esp)
 84396bf:	08 
 84396c0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84396c3:	89 04 24             	mov    %eax,(%esp)
 84396c6:	e8 f5 aa fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84396cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84396d2:	00 
 84396d3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84396d6:	89 04 24             	mov    %eax,(%esp)
 84396d9:	e8 48 ac fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84396de:	83 f0 01             	xor    $0x1,%eax
 84396e1:	84 c0                	test   %al,%al
 84396e3:	74 40                	je     8439725 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x449>
 84396e5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84396ec:	00 
 84396ed:	c7 44 24 08 40 87 00 	movl   $0x8740,0x8(%esp)
 84396f4:	00 
 84396f5:	c7 44 24 04 60 bb c5 	movl   $0x8c5bb60,0x4(%esp)
 84396fc:	08 
 84396fd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8439700:	89 04 24             	mov    %eax,(%esp)
 8439703:	e8 10 60 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8439708:	c7 44 24 04 04 48 c5 	movl   $0x8c54804,0x4(%esp)
 843970f:	08 
 8439710:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8439713:	89 04 24             	mov    %eax,(%esp)
 8439716:	e8 6d 60 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843971b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8439720:	e9 fa 00 00 00       	jmp    843981f <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x543>
 8439725:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843972a:	c7 44 24 08 45 87 00 	movl   $0x8745,0x8(%esp)
 8439731:	00 
 8439732:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8439739:	08 
 843973a:	89 04 24             	mov    %eax,(%esp)
 843973d:	e8 44 63 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8439742:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8439749:	00 
 843974a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843974e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8439751:	89 04 24             	mov    %eax,(%esp)
 8439754:	e8 cd f4 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8439759:	8d 45 8c             	lea    -0x74(%ebp),%eax
 843975c:	89 04 24             	mov    %eax,(%esp)
 843975f:	e8 e2 f4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8439764:	c7 44 24 04 43 01 00 	movl   $0x143,0x4(%esp)
 843976b:	00 
 843976c:	89 04 24             	mov    %eax,(%esp)
 843976f:	e8 e2 f4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8439774:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8439777:	89 04 24             	mov    %eax,(%esp)
 843977a:	e8 c7 f4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843977f:	8b 55 10             	mov    0x10(%ebp),%edx
 8439782:	89 54 24 04          	mov    %edx,0x4(%esp)
 8439786:	89 04 24             	mov    %eax,(%esp)
 8439789:	e8 c8 f4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843978e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8439791:	89 04 24             	mov    %eax,(%esp)
 8439794:	e8 b5 f4 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8439799:	89 04 24             	mov    %eax,(%esp)
 843979c:	e8 b1 9f 01 00       	call   8453752 <_ZN12CStreamGuard11GetInBufferI30SIG_BREAK_AWAY_PREVENT_MESSAGEEEPT_v>
 84397a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84397a4:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84397a7:	85 c0                	test   %eax,%eax
 84397a9:	74 08                	je     84397b3 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x4d7>
 84397ab:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84397ae:	83 f8 02             	cmp    $0x2,%eax
 84397b1:	75 1a                	jne    84397cd <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x4f1>
 84397b3:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 84397b6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84397b9:	89 50 04             	mov    %edx,0x4(%eax)
 84397bc:	8b 45 9c             	mov    -0x64(%ebp),%eax
 84397bf:	05 80 51 01 00       	add    $0x15180,%eax
 84397c4:	89 c2                	mov    %eax,%edx
 84397c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84397c9:	89 10                	mov    %edx,(%eax)
 84397cb:	eb 09                	jmp    84397d6 <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x4fa>
 84397cd:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 84397d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84397d3:	89 50 04             	mov    %edx,0x4(%eax)
 84397d6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84397db:	8d 55 8c             	lea    -0x74(%ebp),%edx
 84397de:	89 54 24 08          	mov    %edx,0x8(%esp)
 84397e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84397e9:	00 
 84397ea:	89 04 24             	mov    %eax,(%esp)
 84397ed:	e8 ec 77 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84397f2:	bb 01 00 00 00       	mov    $0x1,%ebx
 84397f7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84397fa:	89 04 24             	mov    %eax,(%esp)
 84397fd:	e8 d0 30 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8439802:	eb 1b                	jmp    843981f <_ZN26DB_LoadBreakAwayRewardData8dispatchEiiP6Stream+0x543>
 8439804:	89 d3                	mov    %edx,%ebx
 8439806:	89 c6                	mov    %eax,%esi
 8439808:	8d 45 8c             	lea    -0x74(%ebp),%eax
 843980b:	89 04 24             	mov    %eax,(%esp)
 843980e:	e8 bf 30 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8439813:	89 f0                	mov    %esi,%eax
 8439815:	89 da                	mov    %ebx,%edx
 8439817:	89 04 24             	mov    %eax,(%esp)
 843981a:	e8 31 9f 6a 00       	call   8ae3750 <_Unwind_Resume>
 843981f:	89 d8                	mov    %ebx,%eax
 8439821:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 8439827:	5b                   	pop    %ebx
 8439828:	5e                   	pop    %esi
 8439829:	5f                   	pop    %edi
 843982a:	5d                   	pop    %ebp
 843982b:	c3                   	ret

```

```c
// DB_LoadBreakAwayRewardData::dispatch @ 0x84392dc

/* DB_LoadBreakAwayRewardData::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadBreakAwayRewardData::dispatch
          (DB_LoadBreakAwayRewardData *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  Stream *pSVar11;
  CStreamGuard *pCVar12;
  longlong lVar13;
  tm local_a4;
  CStreamGuard local_78 [9];
  char local_6f [7];
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  MySQL *local_28;
  undefined4 local_24;
  SIG_BREAK_AWAY_PREVENT_MESSAGE *local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_4c = 0;
  local_50 = 0;
  iVar9 = G_CEnvironment();
  local_24 = *(undefined4 *)(iVar9 + 0x378);
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_68,&local_a4);
  local_6f[0] = '\0';
  local_6f[1] = '\0';
  local_6f[2] = '\0';
  local_6f[3] = '\0';
  local_6f[4] = '\0';
  local_6f[5] = '\0';
  local_6f[6] = 0;
  sprintf(local_6f,"%d%02d",local_a4.tm_year + 0x76c,local_a4.tm_mon + 1);
  Stream::operator>>(param_3,&local_4c);
  Stream::operator>>(param_3,&local_50);
  Stream::operator>>(param_3,&local_54);
  Stream::operator>>(param_3,&local_58);
  Stream::operator>>(param_3,&local_5c);
  Stream::operator>>(param_3,&local_60);
  Stream::operator>>(param_3,&local_64);
  if (local_60 == 0) {
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, first_reward_time = %u, quest_time =%u, luck_point=%d, add_info=%d where m_id=%s"
                     ,local_68,local_68,local_68 + 0x15180,local_5c,3,uVar10);
  }
  else if (local_60 == 1) {
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, luck_point=%d where m_id=%u"
                     ,local_68,local_5c,local_4c);
  }
  else if (local_60 == 2) {
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, second_reward_time = %u, quest_time =%u, luck_point=%d, add_info=%d where m_id=%s"
                     ,local_68,local_68,local_68 + 0x15180,local_5c,3,uVar10);
  }
  else if (local_60 == 3) {
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, luck_point=%d where m_id=%s"
                     ,local_68,local_5c,uVar10);
  }
  else {
    if (local_60 != 4) {
      return 0;
    }
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "upDate churn_member_info set last_reward_time =%u, luck_point=%d, add_info=%d where m_id=%s"
                     ,local_68,local_5c,0xffffffff,uVar10);
  }
  cVar8 = MySQL::exec(local_28,true);
  if ((cVar8 == '\x01') && (lVar13 = MySQL::getAffectedRowCount(local_28), lVar13 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar7 = local_50;
  uVar6 = local_54;
  iVar5 = local_58;
  iVar4 = local_5c;
  iVar3 = local_60;
  uVar2 = local_64;
  iVar9 = local_68;
  if (bVar1) {
    cMyTrace::cMyTrace(local_48,
                       "virtual bool DB_LoadBreakAwayRewardData::dispatch(int, int, Stream*)",0x871e
                       ,5);
    cMyTrace::operator()(local_48,"BREAK_AWAY : ABNORMAL DB_LoadBreakAwayRewardData REWARD!!");
    uVar10 = 0;
  }
  else {
    uVar10 = NumberToString(local_4c,0);
    MySQL::set_query(local_28,
                     "inSert into churn_reward_history_%s(m_id,occ_time,server_id,charac_no,item_id,add_info,luck_point,cera,reward_order) values(%s, from_unixtime(%u), %d, %u, %u, %d, %d, %u, %d)"
                     ,local_6f,uVar10,iVar9,local_24,uVar7,uVar6,iVar5,iVar4,uVar2,iVar3);
    cVar8 = MySQL::exec(local_28,true);
    if (cVar8 == '\x01') {
      pSVar11 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8745);
      CStreamGuard::CStreamGuard(local_78,pSVar11,true);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_78);
                    /* try { // try from 0843976f to 084397f1 has its CatchHandler @ 08439804 */
      CStreamGuard::operator<<(pCVar12,0x143);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_78);
      CStreamGuard::operator<<(pCVar12,param_2);
      pCVar12 = (CStreamGuard *)CStreamGuard::operator->(local_78);
      local_20 = CStreamGuard::GetInBuffer<SIG_BREAK_AWAY_PREVENT_MESSAGE>(pCVar12);
      if ((local_60 == 0) || (local_60 == 2)) {
        *(int *)(local_20 + 4) = local_60;
        *(int *)local_20 = local_68 + 0x15180;
      }
      else {
        *(int *)(local_20 + 4) = local_60;
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_78);
      uVar10 = 1;
      CStreamGuard::~CStreamGuard(local_78);
    }
    else {
      cMyTrace::cMyTrace(local_38,
                         "virtual bool DB_LoadBreakAwayRewardData::dispatch(int, int, Stream*)",
                         0x8740,5);
      cMyTrace::operator()(local_38,"BREAK_AWAY : ABNORMAL DB_LoadBreakAwayRewardData LOG!!");
      uVar10 = 0;
    }
  }
  return uVar10;
}

```

---

## makeRequest

```asm
// === 0843915c DB_LoadBreakAwayRewardData::makeRequest  [0x0843915c-0x84392db] ===
 843915c:	55                   	push   %ebp
 843915d:	89 e5                	mov    %esp,%ebp
 843915f:	56                   	push   %esi
 8439160:	53                   	push   %ebx
 8439161:	83 ec 20             	sub    $0x20,%esp
 8439164:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8439169:	c7 44 24 08 d3 86 00 	movl   $0x86d3,0x8(%esp)
 8439170:	00 
 8439171:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8439178:	08 
 8439179:	89 04 24             	mov    %eax,(%esp)
 843917c:	e8 05 69 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8439181:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8439188:	00 
 8439189:	89 44 24 04          	mov    %eax,0x4(%esp)
 843918d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439190:	89 04 24             	mov    %eax,(%esp)
 8439193:	e8 8e fa c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8439198:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843919b:	89 04 24             	mov    %eax,(%esp)
 843919e:	e8 a3 fa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84391a3:	c7 44 24 04 42 01 00 	movl   $0x142,0x4(%esp)
 84391aa:	00 
 84391ab:	89 04 24             	mov    %eax,(%esp)
 84391ae:	e8 a3 fa c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84391b3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84391b6:	89 04 24             	mov    %eax,(%esp)
 84391b9:	e8 88 fa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84391be:	8b 55 08             	mov    0x8(%ebp),%edx
 84391c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84391c5:	89 04 24             	mov    %eax,(%esp)
 84391c8:	e8 89 fa c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84391cd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84391d0:	89 04 24             	mov    %eax,(%esp)
 84391d3:	e8 6e fa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84391d8:	8b 55 0c             	mov    0xc(%ebp),%edx
 84391db:	89 54 24 04          	mov    %edx,0x4(%esp)
 84391df:	89 04 24             	mov    %eax,(%esp)
 84391e2:	e8 ab 90 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84391e7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84391ea:	89 04 24             	mov    %eax,(%esp)
 84391ed:	e8 54 fa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84391f2:	8b 55 10             	mov    0x10(%ebp),%edx
 84391f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84391f9:	89 04 24             	mov    %eax,(%esp)
 84391fc:	e8 91 90 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8439201:	8b 45 14             	mov    0x14(%ebp),%eax
 8439204:	8b 18                	mov    (%eax),%ebx
 8439206:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439209:	89 04 24             	mov    %eax,(%esp)
 843920c:	e8 35 fa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8439211:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8439215:	89 04 24             	mov    %eax,(%esp)
 8439218:	e8 75 90 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843921d:	8b 45 14             	mov    0x14(%ebp),%eax
 8439220:	8b 58 04             	mov    0x4(%eax),%ebx
 8439223:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439226:	89 04 24             	mov    %eax,(%esp)
 8439229:	e8 18 fa c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843922e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8439232:	89 04 24             	mov    %eax,(%esp)
 8439235:	e8 1c fa c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843923a:	8b 45 14             	mov    0x14(%ebp),%eax
 843923d:	8b 58 08             	mov    0x8(%eax),%ebx
 8439240:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439243:	89 04 24             	mov    %eax,(%esp)
 8439246:	e8 fb f9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843924b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843924f:	89 04 24             	mov    %eax,(%esp)
 8439252:	e8 ff f9 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8439257:	8b 45 14             	mov    0x14(%ebp),%eax
 843925a:	8b 58 10             	mov    0x10(%eax),%ebx
 843925d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439260:	89 04 24             	mov    %eax,(%esp)
 8439263:	e8 de f9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8439268:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843926c:	89 04 24             	mov    %eax,(%esp)
 843926f:	e8 e2 f9 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8439274:	8b 45 14             	mov    0x14(%ebp),%eax
 8439277:	8b 58 0c             	mov    0xc(%eax),%ebx
 843927a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843927d:	89 04 24             	mov    %eax,(%esp)
 8439280:	e8 c1 f9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8439285:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8439289:	89 04 24             	mov    %eax,(%esp)
 843928c:	e8 01 90 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8439291:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8439296:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8439299:	89 54 24 08          	mov    %edx,0x8(%esp)
 843929d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84392a4:	00 
 84392a5:	89 04 24             	mov    %eax,(%esp)
 84392a8:	e8 31 7d 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84392ad:	eb 1b                	jmp    84392ca <_ZN26DB_LoadBreakAwayRewardData11makeRequestEijjR18STBreakAwayRewards+0x16e>
 84392af:	89 d3                	mov    %edx,%ebx
 84392b1:	89 c6                	mov    %eax,%esi
 84392b3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84392b6:	89 04 24             	mov    %eax,(%esp)
 84392b9:	e8 14 36 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84392be:	89 f0                	mov    %esi,%eax
 84392c0:	89 da                	mov    %ebx,%edx
 84392c2:	89 04 24             	mov    %eax,(%esp)
 84392c5:	e8 86 a4 6a 00       	call   8ae3750 <_Unwind_Resume>
 84392ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84392cd:	89 04 24             	mov    %eax,(%esp)
 84392d0:	e8 fd 35 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84392d5:	83 c4 20             	add    $0x20,%esp
 84392d8:	5b                   	pop    %ebx
 84392d9:	5e                   	pop    %esi
 84392da:	5d                   	pop    %ebp
 84392db:	c3                   	ret

```

```c
// DB_LoadBreakAwayRewardData::makeRequest @ 0x843915c

/* DB_LoadBreakAwayRewardData::makeRequest(int, unsigned int, unsigned int, STBreakAwayRewards&) */

void DB_LoadBreakAwayRewardData::makeRequest
               (int param_1,uint param_2,uint param_3,STBreakAwayRewards *param_4)

{
  uint uVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_14 [8];
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x86d3);
  CStreamGuard::CStreamGuard(local_14,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084391ae to 084392ac has its CatchHandler @ 084392af */
  CStreamGuard::operator<<(pCVar4,0x142);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,param_3);
  uVar1 = *(uint *)param_4;
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,uVar1);
  iVar2 = *(int *)(param_4 + 4);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,iVar2);
  iVar2 = *(int *)(param_4 + 8);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,iVar2);
  iVar2 = *(int *)(param_4 + 0x10);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,iVar2);
  uVar1 = *(uint *)(param_4 + 0xc);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,uVar1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

