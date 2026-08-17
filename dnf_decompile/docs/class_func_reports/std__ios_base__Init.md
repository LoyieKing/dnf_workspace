# std__ios_base__Init

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Init

```asm
// === 086da1e0 std::ios_base::Init::Init  [0x086da1e0-0x86da99f] ===
 86da1e0:	55                   	push   %ebp
 86da1e1:	89 e5                	mov    %esp,%ebp
 86da1e3:	56                   	push   %esi
 86da1e4:	53                   	push   %ebx
 86da1e5:	bb 60 e5 07 08       	mov    $0x807e560,%ebx
 86da1ea:	83 ec 10             	sub    $0x10,%esp
 86da1ed:	85 db                	test   %ebx,%ebx
 86da1ef:	0f 84 dd 06 00 00    	je     86da8d2 <_ZNSt8ios_base4InitC1Ev+0x6f2>
 86da1f5:	b8 01 00 00 00       	mov    $0x1,%eax
 86da1fa:	f0 0f c1 05 f4 17 49 	lock xadd %eax,0x94917f4
 86da201:	09 
 86da202:	85 c0                	test   %eax,%eax
 86da204:	74 0a                	je     86da210 <_ZNSt8ios_base4InitC1Ev+0x30>
 86da206:	83 c4 10             	add    $0x10,%esp
 86da209:	5b                   	pop    %ebx
 86da20a:	5e                   	pop    %esi
 86da20b:	5d                   	pop    %ebp
 86da20c:	c3                   	ret
 86da20d:	8d 76 00             	lea    0x0(%esi),%esi
 86da210:	8b 35 c8 56 3f 09    	mov    0x93f56c8,%esi
 86da216:	c6 05 a0 cf 3a 09 01 	movb   $0x1,0x93acfa0
 86da21d:	c7 05 20 b8 48 09 68 	movl   $0x8d00368,0x948b820
 86da224:	03 d0 08 
 86da227:	c7 05 24 b8 48 09 00 	movl   $0x0,0x948b824
 86da22e:	00 00 00 
 86da231:	c7 05 28 b8 48 09 00 	movl   $0x0,0x948b828
 86da238:	00 00 00 
 86da23b:	c7 05 2c b8 48 09 00 	movl   $0x0,0x948b82c
 86da242:	00 00 00 
 86da245:	c7 05 30 b8 48 09 00 	movl   $0x0,0x948b830
 86da24c:	00 00 00 
 86da24f:	c7 05 34 b8 48 09 00 	movl   $0x0,0x948b834
 86da256:	00 00 00 
 86da259:	c7 05 38 b8 48 09 00 	movl   $0x0,0x948b838
 86da260:	00 00 00 
 86da263:	c7 04 24 3c b8 48 09 	movl   $0x948b83c,(%esp)
 86da26a:	e8 e1 2d 00 00       	call   86dd050 <_ZNSt6localeC1Ev>
 86da26f:	89 35 40 b8 48 09    	mov    %esi,0x948b840
 86da275:	8b 35 c0 56 3f 09    	mov    0x93f56c0,%esi
 86da27b:	c7 05 20 b8 48 09 48 	movl   $0x8cffa48,0x948b820
 86da282:	fa cf 08 
 86da285:	c7 05 44 b8 48 09 ff 	movl   $0xffffffff,0x948b844
 86da28c:	ff ff ff 
 86da28f:	c7 05 60 b8 48 09 68 	movl   $0x8d00368,0x948b860
 86da296:	03 d0 08 
 86da299:	c7 05 64 b8 48 09 00 	movl   $0x0,0x948b864
 86da2a0:	00 00 00 
 86da2a3:	c7 05 68 b8 48 09 00 	movl   $0x0,0x948b868
 86da2aa:	00 00 00 
 86da2ad:	c7 05 6c b8 48 09 00 	movl   $0x0,0x948b86c
 86da2b4:	00 00 00 
 86da2b7:	c7 05 70 b8 48 09 00 	movl   $0x0,0x948b870
 86da2be:	00 00 00 
 86da2c1:	c7 05 74 b8 48 09 00 	movl   $0x0,0x948b874
 86da2c8:	00 00 00 
 86da2cb:	c7 05 78 b8 48 09 00 	movl   $0x0,0x948b878
 86da2d2:	00 00 00 
 86da2d5:	c7 04 24 7c b8 48 09 	movl   $0x948b87c,(%esp)
 86da2dc:	e8 6f 2d 00 00       	call   86dd050 <_ZNSt6localeC1Ev>
 86da2e1:	89 35 80 b8 48 09    	mov    %esi,0x948b880
 86da2e7:	8b 35 c4 56 3f 09    	mov    0x93f56c4,%esi
 86da2ed:	c7 05 60 b8 48 09 48 	movl   $0x8cffa48,0x948b860
 86da2f4:	fa cf 08 
 86da2f7:	c7 05 84 b8 48 09 ff 	movl   $0xffffffff,0x948b884
 86da2fe:	ff ff ff 
 86da301:	c7 05 a0 b8 48 09 68 	movl   $0x8d00368,0x948b8a0
 86da308:	03 d0 08 
 86da30b:	c7 05 a4 b8 48 09 00 	movl   $0x0,0x948b8a4
 86da312:	00 00 00 
 86da315:	c7 05 a8 b8 48 09 00 	movl   $0x0,0x948b8a8
 86da31c:	00 00 00 
 86da31f:	c7 05 ac b8 48 09 00 	movl   $0x0,0x948b8ac
 86da326:	00 00 00 
 86da329:	c7 05 b0 b8 48 09 00 	movl   $0x0,0x948b8b0
 86da330:	00 00 00 
 86da333:	c7 05 b4 b8 48 09 00 	movl   $0x0,0x948b8b4
 86da33a:	00 00 00 
 86da33d:	c7 05 b8 b8 48 09 00 	movl   $0x0,0x948b8b8
 86da344:	00 00 00 
 86da347:	c7 04 24 bc b8 48 09 	movl   $0x948b8bc,(%esp)
 86da34e:	e8 fd 2c 00 00       	call   86dd050 <_ZNSt6localeC1Ev>
 86da353:	c7 05 a0 b8 48 09 48 	movl   $0x8cffa48,0x948b8a0
 86da35a:	fa cf 08 
 86da35d:	89 35 c0 b8 48 09    	mov    %esi,0x948b8c0
 86da363:	c7 05 c4 b8 48 09 ff 	movl   $0xffffffff,0x948b8c4
 86da36a:	ff ff ff 
 86da36d:	c7 04 24 c4 b3 48 09 	movl   $0x948b3c4,(%esp)
 86da374:	e8 77 cd 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86da379:	c7 05 34 b4 48 09 00 	movl   $0x0,0x948b434
 86da380:	00 00 00 
 86da383:	c6 05 38 b4 48 09 00 	movb   $0x0,0x948b438
 86da38a:	c6 05 39 b4 48 09 00 	movb   $0x0,0x948b439
 86da391:	c7 05 3c b4 48 09 00 	movl   $0x0,0x948b43c
 86da398:	00 00 00 
 86da39b:	c7 05 40 b4 48 09 00 	movl   $0x0,0x948b440
 86da3a2:	00 00 00 
 86da3a5:	c7 05 44 b4 48 09 00 	movl   $0x0,0x948b444
 86da3ac:	00 00 00 
 86da3af:	c7 05 48 b4 48 09 00 	movl   $0x0,0x948b448
 86da3b6:	00 00 00 
 86da3b9:	c7 05 c0 b3 48 09 8c 	movl   $0x8cffb8c,0x948b3c0
 86da3c0:	fb cf 08 
 86da3c3:	c7 05 c4 b3 48 09 a0 	movl   $0x8cffba0,0x948b3c4
 86da3ca:	fb cf 08 
 86da3cd:	c7 44 24 04 20 b8 48 	movl   $0x948b820,0x4(%esp)
 86da3d4:	09 
 86da3d5:	c7 04 24 c4 b3 48 09 	movl   $0x948b3c4,(%esp)
 86da3dc:	e8 ff 6a 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86da3e1:	c7 04 24 28 b3 48 09 	movl   $0x948b328,(%esp)
 86da3e8:	e8 03 cd 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86da3ed:	c7 05 98 b3 48 09 00 	movl   $0x0,0x948b398
 86da3f4:	00 00 00 
 86da3f7:	c6 05 9c b3 48 09 00 	movb   $0x0,0x948b39c
 86da3fe:	c6 05 9d b3 48 09 00 	movb   $0x0,0x948b39d
 86da405:	c7 05 a0 b3 48 09 00 	movl   $0x0,0x948b3a0
 86da40c:	00 00 00 
 86da40f:	c7 05 a4 b3 48 09 00 	movl   $0x0,0x948b3a4
 86da416:	00 00 00 
 86da419:	c7 05 a8 b3 48 09 00 	movl   $0x0,0x948b3a8
 86da420:	00 00 00 
 86da423:	c7 05 ac b3 48 09 00 	movl   $0x0,0x948b3ac
 86da42a:	00 00 00 
 86da42d:	c7 05 20 b3 48 09 ac 	movl   $0x8cfecac,0x948b320
 86da434:	ec cf 08 
 86da437:	c7 05 28 b3 48 09 c0 	movl   $0x8cfecc0,0x948b328
 86da43e:	ec cf 08 
 86da441:	c7 05 24 b3 48 09 00 	movl   $0x0,0x948b324
 86da448:	00 00 00 
 86da44b:	c7 44 24 04 60 b8 48 	movl   $0x948b860,0x4(%esp)
 86da452:	09 
 86da453:	c7 04 24 28 b3 48 09 	movl   $0x948b328,(%esp)
 86da45a:	e8 81 6a 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86da45f:	c7 04 24 64 b4 48 09 	movl   $0x948b464,(%esp)
 86da466:	e8 85 cc 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86da46b:	c7 05 d4 b4 48 09 00 	movl   $0x0,0x948b4d4
 86da472:	00 00 00 
 86da475:	c6 05 d8 b4 48 09 00 	movb   $0x0,0x948b4d8
 86da47c:	c6 05 d9 b4 48 09 00 	movb   $0x0,0x948b4d9
 86da483:	c7 05 dc b4 48 09 00 	movl   $0x0,0x948b4dc
 86da48a:	00 00 00 
 86da48d:	c7 05 e0 b4 48 09 00 	movl   $0x0,0x948b4e0
 86da494:	00 00 00 
 86da497:	c7 05 e4 b4 48 09 00 	movl   $0x0,0x948b4e4
 86da49e:	00 00 00 
 86da4a1:	c7 05 e8 b4 48 09 00 	movl   $0x0,0x948b4e8
 86da4a8:	00 00 00 
 86da4ab:	c7 05 60 b4 48 09 8c 	movl   $0x8cffb8c,0x948b460
 86da4b2:	fb cf 08 
 86da4b5:	c7 05 64 b4 48 09 a0 	movl   $0x8cffba0,0x948b464
 86da4bc:	fb cf 08 
 86da4bf:	c7 44 24 04 a0 b8 48 	movl   $0x948b8a0,0x4(%esp)
 86da4c6:	09 
 86da4c7:	c7 04 24 64 b4 48 09 	movl   $0x948b464,(%esp)
 86da4ce:	e8 0d 6a 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86da4d3:	c7 04 24 04 b5 48 09 	movl   $0x948b504,(%esp)
 86da4da:	e8 11 cc 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86da4df:	c7 05 74 b5 48 09 00 	movl   $0x0,0x948b574
 86da4e6:	00 00 00 
 86da4e9:	c6 05 78 b5 48 09 00 	movb   $0x0,0x948b578
 86da4f0:	c6 05 79 b5 48 09 00 	movb   $0x0,0x948b579
 86da4f7:	c7 05 7c b5 48 09 00 	movl   $0x0,0x948b57c
 86da4fe:	00 00 00 
 86da501:	c7 05 80 b5 48 09 00 	movl   $0x0,0x948b580
 86da508:	00 00 00 
 86da50b:	c7 05 84 b5 48 09 00 	movl   $0x0,0x948b584
 86da512:	00 00 00 
 86da515:	c7 05 88 b5 48 09 00 	movl   $0x0,0x948b588
 86da51c:	00 00 00 
 86da51f:	c7 05 00 b5 48 09 8c 	movl   $0x8cffb8c,0x948b500
 86da526:	fb cf 08 
 86da529:	c7 05 04 b5 48 09 a0 	movl   $0x8cffba0,0x948b504
 86da530:	fb cf 08 
 86da533:	c7 44 24 04 a0 b8 48 	movl   $0x948b8a0,0x4(%esp)
 86da53a:	09 
 86da53b:	c7 04 24 04 b5 48 09 	movl   $0x948b504,(%esp)
 86da542:	e8 99 69 00 00       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 86da547:	8b 35 c8 56 3f 09    	mov    0x93f56c8,%esi
 86da54d:	c7 05 98 b3 48 09 c0 	movl   $0x948b3c0,0x948b398
 86da554:	b3 48 09 
 86da557:	c7 05 70 b4 48 09 00 	movl   $0x2000,0x948b470
 86da55e:	20 00 00 
 86da561:	c7 05 d4 b4 48 09 c0 	movl   $0x948b3c0,0x948b4d4
 86da568:	b3 48 09 
 86da56b:	c7 05 c0 ba 48 09 28 	movl   $0x8d00328,0x948bac0
 86da572:	03 d0 08 
 86da575:	c7 05 c4 ba 48 09 00 	movl   $0x0,0x948bac4
 86da57c:	00 00 00 
 86da57f:	c7 05 c8 ba 48 09 00 	movl   $0x0,0x948bac8
 86da586:	00 00 00 
 86da589:	c7 05 cc ba 48 09 00 	movl   $0x0,0x948bacc
 86da590:	00 00 00 
 86da593:	c7 05 d0 ba 48 09 00 	movl   $0x0,0x948bad0
 86da59a:	00 00 00 
 86da59d:	c7 05 d4 ba 48 09 00 	movl   $0x0,0x948bad4
 86da5a4:	00 00 00 
 86da5a7:	c7 05 d8 ba 48 09 00 	movl   $0x0,0x948bad8
 86da5ae:	00 00 00 
 86da5b1:	c7 04 24 dc ba 48 09 	movl   $0x948badc,(%esp)
 86da5b8:	e8 93 2a 00 00       	call   86dd050 <_ZNSt6localeC1Ev>
 86da5bd:	89 35 e0 ba 48 09    	mov    %esi,0x948bae0
 86da5c3:	8b 35 c0 56 3f 09    	mov    0x93f56c0,%esi
 86da5c9:	c7 05 c0 ba 48 09 08 	movl   $0x8cffa08,0x948bac0
 86da5d0:	fa cf 08 
 86da5d3:	c7 05 e4 ba 48 09 ff 	movl   $0xffffffff,0x948bae4
 86da5da:	ff ff ff 
 86da5dd:	c7 05 00 bb 48 09 28 	movl   $0x8d00328,0x948bb00
 86da5e4:	03 d0 08 
 86da5e7:	c7 05 04 bb 48 09 00 	movl   $0x0,0x948bb04
 86da5ee:	00 00 00 
 86da5f1:	c7 05 08 bb 48 09 00 	movl   $0x0,0x948bb08
 86da5f8:	00 00 00 
 86da5fb:	c7 05 0c bb 48 09 00 	movl   $0x0,0x948bb0c
 86da602:	00 00 00 
 86da605:	c7 05 10 bb 48 09 00 	movl   $0x0,0x948bb10
 86da60c:	00 00 00 
 86da60f:	c7 05 14 bb 48 09 00 	movl   $0x0,0x948bb14
 86da616:	00 00 00 
 86da619:	c7 05 18 bb 48 09 00 	movl   $0x0,0x948bb18
 86da620:	00 00 00 
 86da623:	c7 04 24 1c bb 48 09 	movl   $0x948bb1c,(%esp)
 86da62a:	e8 21 2a 00 00       	call   86dd050 <_ZNSt6localeC1Ev>
 86da62f:	89 35 20 bb 48 09    	mov    %esi,0x948bb20
 86da635:	8b 35 c4 56 3f 09    	mov    0x93f56c4,%esi
 86da63b:	c7 05 00 bb 48 09 08 	movl   $0x8cffa08,0x948bb00
 86da642:	fa cf 08 
 86da645:	c7 05 24 bb 48 09 ff 	movl   $0xffffffff,0x948bb24
 86da64c:	ff ff ff 
 86da64f:	c7 05 40 bb 48 09 28 	movl   $0x8d00328,0x948bb40
 86da656:	03 d0 08 
 86da659:	c7 05 44 bb 48 09 00 	movl   $0x0,0x948bb44
 86da660:	00 00 00 
 86da663:	c7 05 48 bb 48 09 00 	movl   $0x0,0x948bb48
 86da66a:	00 00 00 
 86da66d:	c7 05 4c bb 48 09 00 	movl   $0x0,0x948bb4c
 86da674:	00 00 00 
 86da677:	c7 05 50 bb 48 09 00 	movl   $0x0,0x948bb50
 86da67e:	00 00 00 
 86da681:	c7 05 54 bb 48 09 00 	movl   $0x0,0x948bb54
 86da688:	00 00 00 
 86da68b:	c7 05 58 bb 48 09 00 	movl   $0x0,0x948bb58
 86da692:	00 00 00 
 86da695:	c7 04 24 5c bb 48 09 	movl   $0x948bb5c,(%esp)
 86da69c:	e8 af 29 00 00       	call   86dd050 <_ZNSt6localeC1Ev>
 86da6a1:	c7 05 40 bb 48 09 08 	movl   $0x8cffa08,0x948bb40
 86da6a8:	fa cf 08 
 86da6ab:	89 35 60 bb 48 09    	mov    %esi,0x948bb60
 86da6b1:	c7 05 64 bb 48 09 ff 	movl   $0xffffffff,0x948bb64
 86da6b8:	ff ff ff 
 86da6bb:	c7 04 24 44 b6 48 09 	movl   $0x948b644,(%esp)
 86da6c2:	e8 29 ca 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86da6c7:	c7 05 b4 b6 48 09 00 	movl   $0x0,0x948b6b4
 86da6ce:	00 00 00 
 86da6d1:	c7 05 b8 b6 48 09 00 	movl   $0x0,0x948b6b8
 86da6d8:	00 00 00 
 86da6db:	c6 05 bc b6 48 09 00 	movb   $0x0,0x948b6bc
 86da6e2:	c7 05 c0 b6 48 09 00 	movl   $0x0,0x948b6c0
 86da6e9:	00 00 00 
 86da6ec:	c7 05 c4 b6 48 09 00 	movl   $0x0,0x948b6c4
 86da6f3:	00 00 00 
 86da6f6:	c7 05 c8 b6 48 09 00 	movl   $0x0,0x948b6c8
 86da6fd:	00 00 00 
 86da700:	c7 05 cc b6 48 09 00 	movl   $0x0,0x948b6cc
 86da707:	00 00 00 
 86da70a:	c7 05 40 b6 48 09 4c 	movl   $0x8cffb4c,0x948b640
 86da711:	fb cf 08 
 86da714:	c7 05 44 b6 48 09 60 	movl   $0x8cffb60,0x948b644
 86da71b:	fb cf 08 
 86da71e:	c7 44 24 04 c0 ba 48 	movl   $0x948bac0,0x4(%esp)
 86da725:	09 
 86da726:	c7 04 24 44 b6 48 09 	movl   $0x948b644,(%esp)
 86da72d:	e8 ee 61 00 00       	call   86e0920 <_ZNSt9basic_iosIwSt11char_traitsIwEE4initEPSt15basic_streambufIwS1_E>
 86da732:	c7 04 24 a8 b5 48 09 	movl   $0x948b5a8,(%esp)
 86da739:	e8 b2 c9 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86da73e:	c7 05 18 b6 48 09 00 	movl   $0x0,0x948b618
 86da745:	00 00 00 
 86da748:	c7 05 1c b6 48 09 00 	movl   $0x0,0x948b61c
 86da74f:	00 00 00 
 86da752:	c6 05 20 b6 48 09 00 	movb   $0x0,0x948b620
 86da759:	c7 05 24 b6 48 09 00 	movl   $0x0,0x948b624
 86da760:	00 00 00 
 86da763:	c7 05 28 b6 48 09 00 	movl   $0x0,0x948b628
 86da76a:	00 00 00 
 86da76d:	c7 05 2c b6 48 09 00 	movl   $0x0,0x948b62c
 86da774:	00 00 00 
 86da777:	c7 05 30 b6 48 09 00 	movl   $0x0,0x948b630
 86da77e:	00 00 00 
 86da781:	c7 05 a0 b5 48 09 6c 	movl   $0x8cfec6c,0x948b5a0
 86da788:	ec cf 08 
 86da78b:	c7 05 a8 b5 48 09 80 	movl   $0x8cfec80,0x948b5a8
 86da792:	ec cf 08 
 86da795:	c7 05 a4 b5 48 09 00 	movl   $0x0,0x948b5a4
 86da79c:	00 00 00 
 86da79f:	c7 44 24 04 00 bb 48 	movl   $0x948bb00,0x4(%esp)
 86da7a6:	09 
 86da7a7:	c7 04 24 a8 b5 48 09 	movl   $0x948b5a8,(%esp)
 86da7ae:	e8 6d 61 00 00       	call   86e0920 <_ZNSt9basic_iosIwSt11char_traitsIwEE4initEPSt15basic_streambufIwS1_E>
 86da7b3:	c7 04 24 e4 b6 48 09 	movl   $0x948b6e4,(%esp)
 86da7ba:	e8 31 c9 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86da7bf:	c7 05 54 b7 48 09 00 	movl   $0x0,0x948b754
 86da7c6:	00 00 00 
 86da7c9:	c7 05 58 b7 48 09 00 	movl   $0x0,0x948b758
 86da7d0:	00 00 00 
 86da7d3:	c6 05 5c b7 48 09 00 	movb   $0x0,0x948b75c
 86da7da:	c7 05 60 b7 48 09 00 	movl   $0x0,0x948b760
 86da7e1:	00 00 00 
 86da7e4:	c7 05 64 b7 48 09 00 	movl   $0x0,0x948b764
 86da7eb:	00 00 00 
 86da7ee:	c7 05 68 b7 48 09 00 	movl   $0x0,0x948b768
 86da7f5:	00 00 00 
 86da7f8:	c7 05 6c b7 48 09 00 	movl   $0x0,0x948b76c
 86da7ff:	00 00 00 
 86da802:	c7 05 e0 b6 48 09 4c 	movl   $0x8cffb4c,0x948b6e0
 86da809:	fb cf 08 
 86da80c:	c7 05 e4 b6 48 09 60 	movl   $0x8cffb60,0x948b6e4
 86da813:	fb cf 08 
 86da816:	c7 44 24 04 40 bb 48 	movl   $0x948bb40,0x4(%esp)
 86da81d:	09 
 86da81e:	c7 04 24 e4 b6 48 09 	movl   $0x948b6e4,(%esp)
 86da825:	e8 f6 60 00 00       	call   86e0920 <_ZNSt9basic_iosIwSt11char_traitsIwEE4initEPSt15basic_streambufIwS1_E>
 86da82a:	c7 04 24 84 b7 48 09 	movl   $0x948b784,(%esp)
 86da831:	e8 ba c8 04 00       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 86da836:	c7 05 f4 b7 48 09 00 	movl   $0x0,0x948b7f4
 86da83d:	00 00 00 
 86da840:	c7 05 f8 b7 48 09 00 	movl   $0x0,0x948b7f8
 86da847:	00 00 00 
 86da84a:	c6 05 fc b7 48 09 00 	movb   $0x0,0x948b7fc
 86da851:	c7 05 00 b8 48 09 00 	movl   $0x0,0x948b800
 86da858:	00 00 00 
 86da85b:	c7 05 04 b8 48 09 00 	movl   $0x0,0x948b804
 86da862:	00 00 00 
 86da865:	c7 05 08 b8 48 09 00 	movl   $0x0,0x948b808
 86da86c:	00 00 00 
 86da86f:	c7 05 0c b8 48 09 00 	movl   $0x0,0x948b80c
 86da876:	00 00 00 
 86da879:	c7 05 80 b7 48 09 4c 	movl   $0x8cffb4c,0x948b780
 86da880:	fb cf 08 
 86da883:	c7 05 84 b7 48 09 60 	movl   $0x8cffb60,0x948b784
 86da88a:	fb cf 08 
 86da88d:	c7 44 24 04 40 bb 48 	movl   $0x948bb40,0x4(%esp)
 86da894:	09 
 86da895:	c7 04 24 84 b7 48 09 	movl   $0x948b784,(%esp)
 86da89c:	e8 7f 60 00 00       	call   86e0920 <_ZNSt9basic_iosIwSt11char_traitsIwEE4initEPSt15basic_streambufIwS1_E>
 86da8a1:	85 db                	test   %ebx,%ebx
 86da8a3:	c7 05 18 b6 48 09 40 	movl   $0x948b640,0x948b618
 86da8aa:	b6 48 09 
 86da8ad:	c7 05 f0 b6 48 09 00 	movl   $0x2000,0x948b6f0
 86da8b4:	20 00 00 
 86da8b7:	c7 05 54 b7 48 09 40 	movl   $0x948b640,0x948b754
 86da8be:	b6 48 09 
 86da8c1:	74 22                	je     86da8e5 <_ZNSt8ios_base4InitC1Ev+0x705>
 86da8c3:	f0 83 05 f4 17 49 09 	lock addl $0x1,0x94917f4
 86da8ca:	01 
 86da8cb:	83 c4 10             	add    $0x10,%esp
 86da8ce:	5b                   	pop    %ebx
 86da8cf:	5e                   	pop    %esi
 86da8d0:	5d                   	pop    %ebp
 86da8d1:	c3                   	ret
 86da8d2:	a1 f4 17 49 09       	mov    0x94917f4,%eax
 86da8d7:	8d 50 01             	lea    0x1(%eax),%edx
 86da8da:	89 15 f4 17 49 09    	mov    %edx,0x94917f4
 86da8e0:	e9 1d f9 ff ff       	jmp    86da202 <_ZNSt8ios_base4InitC1Ev+0x22>
 86da8e5:	83 05 f4 17 49 09 01 	addl   $0x1,0x94917f4
 86da8ec:	e9 15 f9 ff ff       	jmp    86da206 <_ZNSt8ios_base4InitC1Ev+0x26>
 86da8f1:	89 c3                	mov    %eax,%ebx
 86da8f3:	89 1c 24             	mov    %ebx,(%esp)
 86da8f6:	e8 55 8e 40 00       	call   8ae3750 <_Unwind_Resume>
 86da8fb:	89 c3                	mov    %eax,%ebx
 86da8fd:	c7 04 24 84 b7 48 09 	movl   $0x948b784,(%esp)
 86da904:	e8 e7 62 00 00       	call   86e0bf0 <_ZNSt9basic_iosIwSt11char_traitsIwEED1Ev>
 86da909:	eb e8                	jmp    86da8f3 <_ZNSt8ios_base4InitC1Ev+0x713>
 86da90b:	89 c3                	mov    %eax,%ebx
 86da90d:	c7 04 24 e4 b6 48 09 	movl   $0x948b6e4,(%esp)
 86da914:	e8 d7 62 00 00       	call   86e0bf0 <_ZNSt9basic_iosIwSt11char_traitsIwEED1Ev>
 86da919:	eb d8                	jmp    86da8f3 <_ZNSt8ios_base4InitC1Ev+0x713>
 86da91b:	eb d4                	jmp    86da8f1 <_ZNSt8ios_base4InitC1Ev+0x711>
 86da91d:	89 c3                	mov    %eax,%ebx
 86da91f:	c7 04 24 44 b6 48 09 	movl   $0x948b644,(%esp)
 86da926:	e8 c5 62 00 00       	call   86e0bf0 <_ZNSt9basic_iosIwSt11char_traitsIwEED1Ev>
 86da92b:	eb c6                	jmp    86da8f3 <_ZNSt8ios_base4InitC1Ev+0x713>
 86da92d:	eb c2                	jmp    86da8f1 <_ZNSt8ios_base4InitC1Ev+0x711>
 86da92f:	89 c3                	mov    %eax,%ebx
 86da931:	c7 04 24 a8 b5 48 09 	movl   $0x948b5a8,(%esp)
 86da938:	e8 b3 62 00 00       	call   86e0bf0 <_ZNSt9basic_iosIwSt11char_traitsIwEED1Ev>
 86da93d:	eb b4                	jmp    86da8f3 <_ZNSt8ios_base4InitC1Ev+0x713>
 86da93f:	eb b0                	jmp    86da8f1 <_ZNSt8ios_base4InitC1Ev+0x711>
 86da941:	89 c3                	mov    %eax,%ebx
 86da943:	c7 04 24 c4 b3 48 09 	movl   $0x948b3c4,(%esp)
 86da94a:	e8 c1 62 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86da94f:	eb a2                	jmp    86da8f3 <_ZNSt8ios_base4InitC1Ev+0x713>
 86da951:	eb 9e                	jmp    86da8f1 <_ZNSt8ios_base4InitC1Ev+0x711>
 86da953:	89 c3                	mov    %eax,%ebx
 86da955:	c7 04 24 28 b3 48 09 	movl   $0x948b328,(%esp)
 86da95c:	e8 af 62 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86da961:	eb 90                	jmp    86da8f3 <_ZNSt8ios_base4InitC1Ev+0x713>
 86da963:	eb 8c                	jmp    86da8f1 <_ZNSt8ios_base4InitC1Ev+0x711>
 86da965:	89 c3                	mov    %eax,%ebx
 86da967:	c7 04 24 64 b4 48 09 	movl   $0x948b464,(%esp)
 86da96e:	e8 9d 62 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86da973:	e9 7b ff ff ff       	jmp    86da8f3 <_ZNSt8ios_base4InitC1Ev+0x713>
 86da978:	e9 74 ff ff ff       	jmp    86da8f1 <_ZNSt8ios_base4InitC1Ev+0x711>
 86da97d:	89 c3                	mov    %eax,%ebx
 86da97f:	c7 04 24 04 b5 48 09 	movl   $0x948b504,(%esp)
 86da986:	e8 85 62 00 00       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 86da98b:	e9 63 ff ff ff       	jmp    86da8f3 <_ZNSt8ios_base4InitC1Ev+0x713>
 86da990:	e9 5c ff ff ff       	jmp    86da8f1 <_ZNSt8ios_base4InitC1Ev+0x711>
 86da995:	90                   	nop
 86da996:	90                   	nop
 86da997:	90                   	nop
 86da998:	90                   	nop
 86da999:	90                   	nop
 86da99a:	90                   	nop
 86da99b:	90                   	nop
 86da99c:	90                   	nop
 86da99d:	90                   	nop
 86da99e:	90                   	nop
 86da99f:	90                   	nop

```

```c
// std::ios_base::Init::Init @ 0x86da1e0

/* WARNING: Removing unreachable block (ram,0x086da8d2) */
/* WARNING: Removing unreachable block (ram,0x086da8e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::ios_base::Init::Init() */

void __thiscall std::ios_base::Init::Init(Init *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = _S_refcount;
  uVar2 = stdout;
  LOCK();
  _S_refcount = _S_refcount + 1;
  UNLOCK();
  if (iVar3 != 0) {
    return;
  }
  _S_synced_with_stdio = 1;
  __gnu_internal::buf_cout_sync._0_4_ = &PTR__streambuf_08d00368;
  __gnu_internal::buf_cout_sync._4_4_ = 0;
  __gnu_internal::buf_cout_sync._8_4_ = 0;
  __gnu_internal::buf_cout_sync._12_4_ = 0;
  __gnu_internal::buf_cout_sync._16_4_ = 0;
  __gnu_internal::buf_cout_sync._20_4_ = 0;
  __gnu_internal::buf_cout_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_cout_sync + 0x1c));
  uVar1 = stdin;
  __gnu_internal::buf_cout_sync._32_4_ = uVar2;
  __gnu_internal::buf_cout_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa48;
  __gnu_internal::buf_cout_sync._36_4_ = 0xffffffff;
  __gnu_internal::buf_cin_sync._0_4_ = &PTR__streambuf_08d00368;
  __gnu_internal::buf_cin_sync._4_4_ = 0;
  __gnu_internal::buf_cin_sync._8_4_ = 0;
  __gnu_internal::buf_cin_sync._12_4_ = 0;
  __gnu_internal::buf_cin_sync._16_4_ = 0;
  __gnu_internal::buf_cin_sync._20_4_ = 0;
  __gnu_internal::buf_cin_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_cin_sync + 0x1c));
  uVar2 = stderr;
  __gnu_internal::buf_cin_sync._32_4_ = uVar1;
  __gnu_internal::buf_cin_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa48;
  __gnu_internal::buf_cin_sync._36_4_ = 0xffffffff;
  __gnu_internal::buf_cerr_sync._0_4_ = &PTR__streambuf_08d00368;
  __gnu_internal::buf_cerr_sync._4_4_ = 0;
  __gnu_internal::buf_cerr_sync._8_4_ = 0;
  __gnu_internal::buf_cerr_sync._12_4_ = 0;
  __gnu_internal::buf_cerr_sync._16_4_ = 0;
  __gnu_internal::buf_cerr_sync._20_4_ = 0;
  __gnu_internal::buf_cerr_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_cerr_sync + 0x1c));
  __gnu_internal::buf_cerr_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa48;
  __gnu_internal::buf_cerr_sync._32_4_ = uVar2;
  __gnu_internal::buf_cerr_sync._36_4_ = 0xffffffff;
                    /* try { // try from 086da374 to 086da378 has its CatchHandler @ 086da8f1 */
  ios_base((ios_base *)(cout + 4));
  cout._116_4_ = 0;
  cout[0x78] = 0;
  cout[0x79] = 0;
  cout._124_4_ = 0;
  cout._128_4_ = 0;
  cout._132_4_ = 0;
  cout._136_4_ = 0;
  cout._0_4_ = 0x8cffb8c;
  cout._4_4_ = 0x8cffba0;
                    /* try { // try from 086da3dc to 086da3e0 has its CatchHandler @ 086da941 */
  ios::init((ios *)(cout + 4),(streambuf *)__gnu_internal::buf_cout_sync);
                    /* try { // try from 086da3e8 to 086da3ec has its CatchHandler @ 086da951 */
  ios_base((ios_base *)(cin + 8));
  cin._120_4_ = 0;
  cin[0x7c] = 0;
  cin[0x7d] = 0;
  cin._128_4_ = 0;
  cin._132_4_ = 0;
  cin._136_4_ = 0;
  cin._140_4_ = 0;
  cin._0_4_ = 0x8cfecac;
  cin._8_4_ = 0x8cfecc0;
  cin._4_4_ = 0;
                    /* try { // try from 086da45a to 086da45e has its CatchHandler @ 086da953 */
  ios::init((ios *)(cin + 8),(streambuf *)__gnu_internal::buf_cin_sync);
                    /* try { // try from 086da466 to 086da46a has its CatchHandler @ 086da963 */
  ios_base((ios_base *)&DAT_0948b464);
  _DAT_0948b4d4 = (undefined1 *)0x0;
  DAT_0948b4d8 = 0;
  DAT_0948b4d9 = 0;
  _DAT_0948b4dc = 0;
  _DAT_0948b4e0 = 0;
  _DAT_0948b4e4 = 0;
  _DAT_0948b4e8 = 0;
  cerr = 0x8cffb8c;
  _DAT_0948b464 = 0x8cffba0;
                    /* try { // try from 086da4ce to 086da4d2 has its CatchHandler @ 086da965 */
  ios::init((ios *)&DAT_0948b464,(streambuf *)__gnu_internal::buf_cerr_sync);
                    /* try { // try from 086da4da to 086da4de has its CatchHandler @ 086da978 */
  ios_base((ios_base *)(clog + 4));
  clog._116_4_ = 0;
  clog[0x78] = 0;
  clog[0x79] = 0;
  clog._124_4_ = 0;
  clog._128_4_ = 0;
  clog._132_4_ = 0;
  clog._136_4_ = 0;
  clog._0_4_ = 0x8cffb8c;
  clog._4_4_ = 0x8cffba0;
                    /* try { // try from 086da542 to 086da546 has its CatchHandler @ 086da97d */
  ios::init((ios *)(clog + 4),(streambuf *)__gnu_internal::buf_cerr_sync);
  uVar1 = stdout;
  cin._120_4_ = cout;
  _DAT_0948b470 = 0x2000;
  _DAT_0948b4d4 = cout;
  __gnu_internal::buf_wcout_sync._0_4_ = &PTR__wstreambuf_08d00328;
  __gnu_internal::buf_wcout_sync._4_4_ = 0;
  __gnu_internal::buf_wcout_sync._8_4_ = 0;
  __gnu_internal::buf_wcout_sync._12_4_ = 0;
  __gnu_internal::buf_wcout_sync._16_4_ = 0;
  __gnu_internal::buf_wcout_sync._20_4_ = 0;
  __gnu_internal::buf_wcout_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_wcout_sync + 0x1c));
  uVar2 = stdin;
  __gnu_internal::buf_wcout_sync._32_4_ = uVar1;
  __gnu_internal::buf_wcout_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa08;
  __gnu_internal::buf_wcout_sync._36_4_ = 0xffffffff;
  __gnu_internal::buf_wcin_sync._0_4_ = &PTR__wstreambuf_08d00328;
  __gnu_internal::buf_wcin_sync._4_4_ = 0;
  __gnu_internal::buf_wcin_sync._8_4_ = 0;
  __gnu_internal::buf_wcin_sync._12_4_ = 0;
  __gnu_internal::buf_wcin_sync._16_4_ = 0;
  __gnu_internal::buf_wcin_sync._20_4_ = 0;
  __gnu_internal::buf_wcin_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_wcin_sync + 0x1c));
  uVar1 = stderr;
  __gnu_internal::buf_wcin_sync._32_4_ = uVar2;
  __gnu_internal::buf_wcin_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa08;
  __gnu_internal::buf_wcin_sync._36_4_ = 0xffffffff;
  __gnu_internal::buf_wcerr_sync._0_4_ = &PTR__wstreambuf_08d00328;
  __gnu_internal::buf_wcerr_sync._4_4_ = 0;
  __gnu_internal::buf_wcerr_sync._8_4_ = 0;
  __gnu_internal::buf_wcerr_sync._12_4_ = 0;
  __gnu_internal::buf_wcerr_sync._16_4_ = 0;
  __gnu_internal::buf_wcerr_sync._20_4_ = 0;
  __gnu_internal::buf_wcerr_sync._24_4_ = 0;
  locale::locale((locale *)(__gnu_internal::buf_wcerr_sync + 0x1c));
  __gnu_internal::buf_wcerr_sync._0_4_ = &PTR__stdio_sync_filebuf_08cffa08;
  __gnu_internal::buf_wcerr_sync._32_4_ = uVar1;
  __gnu_internal::buf_wcerr_sync._36_4_ = 0xffffffff;
                    /* try { // try from 086da6c2 to 086da6c6 has its CatchHandler @ 086da990 */
  ios_base((ios_base *)(wcout + 4));
  wcout._116_4_ = 0;
  wcout._120_4_ = 0;
  wcout[0x7c] = 0;
  wcout._128_4_ = 0;
  wcout._132_4_ = 0;
  wcout._136_4_ = 0;
  wcout._140_4_ = 0;
  wcout._0_4_ = 0x8cffb4c;
  wcout._4_4_ = 0x8cffb60;
                    /* try { // try from 086da72d to 086da731 has its CatchHandler @ 086da91d */
  wios::init((wios *)(wcout + 4),(wstreambuf *)__gnu_internal::buf_wcout_sync);
                    /* try { // try from 086da739 to 086da73d has its CatchHandler @ 086da92d */
  ios_base((ios_base *)(wcin + 8));
  wcin._120_4_ = 0;
  wcin._124_4_ = 0;
  wcin[0x80] = 0;
  wcin._132_4_ = 0;
  wcin._136_4_ = 0;
  wcin._140_4_ = 0;
  wcin._144_4_ = 0;
  wcin._0_4_ = 0x8cfec6c;
  wcin._8_4_ = 0x8cfec80;
  wcin._4_4_ = 0;
                    /* try { // try from 086da7ae to 086da7b2 has its CatchHandler @ 086da92f */
  wios::init((wios *)(wcin + 8),(wstreambuf *)__gnu_internal::buf_wcin_sync);
                    /* try { // try from 086da7ba to 086da7be has its CatchHandler @ 086da93f */
  ios_base((ios_base *)(wcerr + 4));
  wcerr._116_4_ = 0;
  wcerr._120_4_ = 0;
  wcerr[0x7c] = 0;
  wcerr._128_4_ = 0;
  wcerr._132_4_ = 0;
  wcerr._136_4_ = 0;
  wcerr._140_4_ = 0;
  wcerr._0_4_ = 0x8cffb4c;
  wcerr._4_4_ = 0x8cffb60;
                    /* try { // try from 086da825 to 086da829 has its CatchHandler @ 086da90b */
  wios::init((wios *)(wcerr + 4),(wstreambuf *)__gnu_internal::buf_wcerr_sync);
                    /* try { // try from 086da831 to 086da835 has its CatchHandler @ 086da91b */
  ios_base((ios_base *)(wclog + 4));
  wclog._116_4_ = 0;
  wclog._120_4_ = 0;
  wclog[0x7c] = 0;
  wclog._128_4_ = 0;
  wclog._132_4_ = 0;
  wclog._136_4_ = 0;
  wclog._140_4_ = 0;
  wclog._0_4_ = 0x8cffb4c;
  wclog._4_4_ = 0x8cffb60;
                    /* try { // try from 086da89c to 086da8a0 has its CatchHandler @ 086da8fb */
  wios::init((wios *)(wclog + 4),(wstreambuf *)__gnu_internal::buf_wcerr_sync);
  wcin._120_4_ = wcout;
  wcerr._16_4_ = 0x2000;
  wcerr._116_4_ = wcout;
  LOCK();
  _S_refcount = _S_refcount + 1;
  UNLOCK();
  return;
}

```

---

## ~Init

```asm
// === 086da140 std::ios_base::Init::~Init  [0x086da140-0x86da1df] ===
 86da140:	55                   	push   %ebp
 86da141:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 86da146:	89 e5                	mov    %esp,%ebp
 86da148:	83 ec 18             	sub    $0x18,%esp
 86da14b:	85 c0                	test   %eax,%eax
 86da14d:	74 63                	je     86da1b2 <_ZNSt8ios_base4InitD1Ev+0x72>
 86da14f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86da154:	f0 0f c1 05 f4 17 49 	lock xadd %eax,0x94917f4
 86da15b:	09 
 86da15c:	83 f8 02             	cmp    $0x2,%eax
 86da15f:	74 07                	je     86da168 <_ZNSt8ios_base4InitD1Ev+0x28>
 86da161:	c9                   	leave
 86da162:	c3                   	ret
 86da163:	90                   	nop
 86da164:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86da168:	c7 04 24 c0 b3 48 09 	movl   $0x948b3c0,(%esp)
 86da16f:	e8 cc 21 02 00       	call   86fc340 <_ZNSo5flushEv>
 86da174:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 86da17b:	e8 c0 21 02 00       	call   86fc340 <_ZNSo5flushEv>
 86da180:	c7 04 24 00 b5 48 09 	movl   $0x948b500,(%esp)
 86da187:	e8 b4 21 02 00       	call   86fc340 <_ZNSo5flushEv>
 86da18c:	c7 04 24 40 b6 48 09 	movl   $0x948b640,(%esp)
 86da193:	e8 28 25 02 00       	call   86fc6c0 <_ZNSt13basic_ostreamIwSt11char_traitsIwEE5flushEv>
 86da198:	c7 04 24 e0 b6 48 09 	movl   $0x948b6e0,(%esp)
 86da19f:	e8 1c 25 02 00       	call   86fc6c0 <_ZNSt13basic_ostreamIwSt11char_traitsIwEE5flushEv>
 86da1a4:	c7 04 24 80 b7 48 09 	movl   $0x948b780,(%esp)
 86da1ab:	e8 10 25 02 00       	call   86fc6c0 <_ZNSt13basic_ostreamIwSt11char_traitsIwEE5flushEv>
 86da1b0:	c9                   	leave
 86da1b1:	c3                   	ret
 86da1b2:	a1 f4 17 49 09       	mov    0x94917f4,%eax
 86da1b7:	8d 50 ff             	lea    -0x1(%eax),%edx
 86da1ba:	89 15 f4 17 49 09    	mov    %edx,0x94917f4
 86da1c0:	eb 9a                	jmp    86da15c <_ZNSt8ios_base4InitD1Ev+0x1c>
 86da1c2:	89 04 24             	mov    %eax,(%esp)
 86da1c5:	e8 16 bb 04 00       	call   8725ce0 <__cxa_begin_catch>
 86da1ca:	e8 61 ba 04 00       	call   8725c30 <__cxa_end_catch>
 86da1cf:	c9                   	leave
 86da1d0:	c3                   	ret
 86da1d1:	90                   	nop
 86da1d2:	90                   	nop
 86da1d3:	90                   	nop
 86da1d4:	90                   	nop
 86da1d5:	90                   	nop
 86da1d6:	90                   	nop
 86da1d7:	90                   	nop
 86da1d8:	90                   	nop
 86da1d9:	90                   	nop
 86da1da:	90                   	nop
 86da1db:	90                   	nop
 86da1dc:	90                   	nop
 86da1dd:	90                   	nop
 86da1de:	90                   	nop
 86da1df:	90                   	nop

```

```c
// std::ios_base::Init::~Init @ 0x86da140

/* WARNING: Removing unreachable block (ram,0x086da1b2) */
/* std::ios_base::Init::~Init() */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
  int iVar1;
  
  iVar1 = _S_refcount;
  LOCK();
  _S_refcount = _S_refcount + -1;
  UNLOCK();
  if (iVar1 == 2) {
                    /* try { // try from 086da16f to 086da1af has its CatchHandler @ 086da1c2 */
    ostream::flush((ostream *)cout);
    ostream::flush((ostream *)&cerr);
    ostream::flush((ostream *)clog);
    wostream::flush((wostream *)wcout);
    wostream::flush((wostream *)wcerr);
    wostream::flush((wostream *)wclog);
    return;
  }
  return;
}

```

