# CPowerWarLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CPowerWarLog

```asm
// === 0848021e CPowerWarLog::CPowerWarLog  [0x0848021e-0x8480231] ===
 848021e:	55                   	push   %ebp
 848021f:	89 e5                	mov    %esp,%ebp
 8480221:	83 ec 18             	sub    $0x18,%esp
 8480224:	8b 45 08             	mov    0x8(%ebp),%eax
 8480227:	89 04 24             	mov    %eax,(%esp)
 848022a:	e8 03 00 00 00       	call   8480232 <_ZN12CPowerWarLog5ResetEv>
 848022f:	c9                   	leave
 8480230:	c3                   	ret
 8480231:	90                   	nop

```

```c
// CPowerWarLog::CPowerWarLog @ 0x848021e

/* CPowerWarLog::CPowerWarLog() */

void __thiscall CPowerWarLog::CPowerWarLog(CPowerWarLog *this)

{
  Reset(this);
  return;
}

```

---

## PrintPowerWarAssultReport

```asm
// === 084802cc CPowerWarLog::PrintPowerWarAssultReport  [0x084802cc-0x8480859] ===
 84802cc:	55                   	push   %ebp
 84802cd:	89 e5                	mov    %esp,%ebp
 84802cf:	53                   	push   %ebx
 84802d0:	81 ec 74 01 00 00    	sub    $0x174,%esp
 84802d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84802dd:	00 
 84802de:	c7 44 24 08 2f 03 00 	movl   $0x32f,0x8(%esp)
 84802e5:	00 
 84802e6:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84802ed:	08 
 84802ee:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 84802f4:	89 04 24             	mov    %eax,(%esp)
 84802f7:	e8 1c f4 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84802fc:	c7 44 24 04 50 1e c7 	movl   $0x8c71e50,0x4(%esp)
 8480303:	08 
 8480304:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 848030a:	89 04 24             	mov    %eax,(%esp)
 848030d:	e8 76 f4 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480312:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480319:	00 
 848031a:	c7 44 24 08 30 03 00 	movl   $0x330,0x8(%esp)
 8480321:	00 
 8480322:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 8480329:	08 
 848032a:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 8480330:	89 04 24             	mov    %eax,(%esp)
 8480333:	e8 e0 f3 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480338:	c7 44 24 04 c0 1e c7 	movl   $0x8c71ec0,0x4(%esp)
 848033f:	08 
 8480340:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 8480346:	89 04 24             	mov    %eax,(%esp)
 8480349:	e8 3a f4 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 848034e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480355:	00 
 8480356:	c7 44 24 08 31 03 00 	movl   $0x331,0x8(%esp)
 848035d:	00 
 848035e:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 8480365:	08 
 8480366:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 848036c:	89 04 24             	mov    %eax,(%esp)
 848036f:	e8 a4 f3 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480374:	c7 44 24 04 50 1e c7 	movl   $0x8c71e50,0x4(%esp)
 848037b:	08 
 848037c:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 8480382:	89 04 24             	mov    %eax,(%esp)
 8480385:	e8 fe f3 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 848038a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480391:	00 
 8480392:	c7 44 24 08 34 03 00 	movl   $0x334,0x8(%esp)
 8480399:	00 
 848039a:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84803a1:	08 
 84803a2:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84803a8:	89 04 24             	mov    %eax,(%esp)
 84803ab:	e8 68 f3 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84803b0:	c7 44 24 04 2e 1f c7 	movl   $0x8c71f2e,0x4(%esp)
 84803b7:	08 
 84803b8:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84803be:	89 04 24             	mov    %eax,(%esp)
 84803c1:	e8 c2 f3 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84803c6:	8b 45 08             	mov    0x8(%ebp),%eax
 84803c9:	8b 18                	mov    (%eax),%ebx
 84803cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84803d2:	00 
 84803d3:	c7 44 24 08 35 03 00 	movl   $0x335,0x8(%esp)
 84803da:	00 
 84803db:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84803e2:	08 
 84803e3:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 84803e9:	89 04 24             	mov    %eax,(%esp)
 84803ec:	e8 27 f3 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84803f1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84803f5:	c7 44 24 04 4c 1f c7 	movl   $0x8c71f4c,0x4(%esp)
 84803fc:	08 
 84803fd:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 8480403:	89 04 24             	mov    %eax,(%esp)
 8480406:	e8 7d f3 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 848040b:	8b 45 08             	mov    0x8(%ebp),%eax
 848040e:	8b 58 04             	mov    0x4(%eax),%ebx
 8480411:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480418:	00 
 8480419:	c7 44 24 08 36 03 00 	movl   $0x336,0x8(%esp)
 8480420:	00 
 8480421:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 8480428:	08 
 8480429:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 848042f:	89 04 24             	mov    %eax,(%esp)
 8480432:	e8 e1 f2 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480437:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 848043b:	c7 44 24 04 74 1f c7 	movl   $0x8c71f74,0x4(%esp)
 8480442:	08 
 8480443:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8480449:	89 04 24             	mov    %eax,(%esp)
 848044c:	e8 37 f3 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480451:	8b 45 08             	mov    0x8(%ebp),%eax
 8480454:	8b 58 08             	mov    0x8(%eax),%ebx
 8480457:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848045e:	00 
 848045f:	c7 44 24 08 37 03 00 	movl   $0x337,0x8(%esp)
 8480466:	00 
 8480467:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 848046e:	08 
 848046f:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 8480475:	89 04 24             	mov    %eax,(%esp)
 8480478:	e8 9b f2 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848047d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8480481:	c7 44 24 04 9c 1f c7 	movl   $0x8c71f9c,0x4(%esp)
 8480488:	08 
 8480489:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 848048f:	89 04 24             	mov    %eax,(%esp)
 8480492:	e8 f1 f2 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480497:	d9 ee                	fldz
 8480499:	dd 5d e8             	fstpl  -0x18(%ebp)
 848049c:	8b 45 08             	mov    0x8(%ebp),%eax
 848049f:	8b 00                	mov    (%eax),%eax
 84804a1:	85 c0                	test   %eax,%eax
 84804a3:	74 30                	je     84804d5 <_ZN12CPowerWarLog25PrintPowerWarAssultReportEv+0x209>
 84804a5:	8b 45 08             	mov    0x8(%ebp),%eax
 84804a8:	8b 40 08             	mov    0x8(%eax),%eax
 84804ab:	89 85 a4 fe ff ff    	mov    %eax,-0x15c(%ebp)
 84804b1:	db 85 a4 fe ff ff    	fildl  -0x15c(%ebp)
 84804b7:	8b 45 08             	mov    0x8(%ebp),%eax
 84804ba:	8b 00                	mov    (%eax),%eax
 84804bc:	89 85 a4 fe ff ff    	mov    %eax,-0x15c(%ebp)
 84804c2:	db 85 a4 fe ff ff    	fildl  -0x15c(%ebp)
 84804c8:	de f9                	fdivrp %st,%st(1)
 84804ca:	dd 05 d8 2f c7 08    	fldl   0x8c72fd8
 84804d0:	de c9                	fmulp  %st,%st(1)
 84804d2:	dd 5d e8             	fstpl  -0x18(%ebp)
 84804d5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84804dc:	00 
 84804dd:	c7 44 24 08 40 03 00 	movl   $0x340,0x8(%esp)
 84804e4:	00 
 84804e5:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84804ec:	08 
 84804ed:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84804f3:	89 04 24             	mov    %eax,(%esp)
 84804f6:	e8 1d f2 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84804fb:	dd 45 e8             	fldl   -0x18(%ebp)
 84804fe:	dd 5c 24 08          	fstpl  0x8(%esp)
 8480502:	c7 44 24 04 c4 1f c7 	movl   $0x8c71fc4,0x4(%esp)
 8480509:	08 
 848050a:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8480510:	89 04 24             	mov    %eax,(%esp)
 8480513:	e8 70 f2 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480518:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848051f:	00 
 8480520:	c7 44 24 08 43 03 00 	movl   $0x343,0x8(%esp)
 8480527:	00 
 8480528:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 848052f:	08 
 8480530:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8480536:	89 04 24             	mov    %eax,(%esp)
 8480539:	e8 da f1 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848053e:	c7 44 24 04 f0 1f c7 	movl   $0x8c71ff0,0x4(%esp)
 8480545:	08 
 8480546:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 848054c:	89 04 24             	mov    %eax,(%esp)
 848054f:	e8 34 f2 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480554:	8b 45 08             	mov    0x8(%ebp),%eax
 8480557:	8b 58 0c             	mov    0xc(%eax),%ebx
 848055a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480561:	00 
 8480562:	c7 44 24 08 44 03 00 	movl   $0x344,0x8(%esp)
 8480569:	00 
 848056a:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 8480571:	08 
 8480572:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8480578:	89 04 24             	mov    %eax,(%esp)
 848057b:	e8 98 f1 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480580:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8480584:	c7 44 24 04 1c 20 c7 	movl   $0x8c7201c,0x4(%esp)
 848058b:	08 
 848058c:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8480592:	89 04 24             	mov    %eax,(%esp)
 8480595:	e8 ee f1 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 848059a:	8b 45 08             	mov    0x8(%ebp),%eax
 848059d:	8b 58 14             	mov    0x14(%eax),%ebx
 84805a0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84805a7:	00 
 84805a8:	c7 44 24 08 45 03 00 	movl   $0x345,0x8(%esp)
 84805af:	00 
 84805b0:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84805b7:	08 
 84805b8:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84805be:	89 04 24             	mov    %eax,(%esp)
 84805c1:	e8 52 f1 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84805c6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84805ca:	c7 44 24 04 44 20 c7 	movl   $0x8c72044,0x4(%esp)
 84805d1:	08 
 84805d2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84805d8:	89 04 24             	mov    %eax,(%esp)
 84805db:	e8 a8 f1 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84805e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84805e3:	8b 58 1c             	mov    0x1c(%eax),%ebx
 84805e6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84805ed:	00 
 84805ee:	c7 44 24 08 46 03 00 	movl   $0x346,0x8(%esp)
 84805f5:	00 
 84805f6:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84805fd:	08 
 84805fe:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8480604:	89 04 24             	mov    %eax,(%esp)
 8480607:	e8 0c f1 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848060c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8480610:	c7 44 24 04 6c 20 c7 	movl   $0x8c7206c,0x4(%esp)
 8480617:	08 
 8480618:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 848061e:	89 04 24             	mov    %eax,(%esp)
 8480621:	e8 62 f1 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480626:	d9 ee                	fldz
 8480628:	dd 5d f0             	fstpl  -0x10(%ebp)
 848062b:	8b 45 08             	mov    0x8(%ebp),%eax
 848062e:	8b 40 04             	mov    0x4(%eax),%eax
 8480631:	85 c0                	test   %eax,%eax
 8480633:	74 31                	je     8480666 <_ZN12CPowerWarLog25PrintPowerWarAssultReportEv+0x39a>
 8480635:	8b 45 08             	mov    0x8(%ebp),%eax
 8480638:	8b 40 28             	mov    0x28(%eax),%eax
 848063b:	89 85 a4 fe ff ff    	mov    %eax,-0x15c(%ebp)
 8480641:	db 85 a4 fe ff ff    	fildl  -0x15c(%ebp)
 8480647:	8b 45 08             	mov    0x8(%ebp),%eax
 848064a:	8b 40 04             	mov    0x4(%eax),%eax
 848064d:	89 85 a4 fe ff ff    	mov    %eax,-0x15c(%ebp)
 8480653:	db 85 a4 fe ff ff    	fildl  -0x15c(%ebp)
 8480659:	de f9                	fdivrp %st,%st(1)
 848065b:	dd 05 d8 2f c7 08    	fldl   0x8c72fd8
 8480661:	de c9                	fmulp  %st,%st(1)
 8480663:	dd 5d f0             	fstpl  -0x10(%ebp)
 8480666:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 848066d:	00 
 848066e:	c7 44 24 08 4f 03 00 	movl   $0x34f,0x8(%esp)
 8480675:	00 
 8480676:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 848067d:	08 
 848067e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8480684:	89 04 24             	mov    %eax,(%esp)
 8480687:	e8 8c f0 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848068c:	dd 45 f0             	fldl   -0x10(%ebp)
 848068f:	dd 5c 24 08          	fstpl  0x8(%esp)
 8480693:	c7 44 24 04 94 20 c7 	movl   $0x8c72094,0x4(%esp)
 848069a:	08 
 848069b:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84806a1:	89 04 24             	mov    %eax,(%esp)
 84806a4:	e8 df f0 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84806a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84806b0:	00 
 84806b1:	c7 44 24 08 52 03 00 	movl   $0x352,0x8(%esp)
 84806b8:	00 
 84806b9:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84806c0:	08 
 84806c1:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84806c7:	89 04 24             	mov    %eax,(%esp)
 84806ca:	e8 49 f0 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84806cf:	c7 44 24 04 c0 20 c7 	movl   $0x8c720c0,0x4(%esp)
 84806d6:	08 
 84806d7:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84806dd:	89 04 24             	mov    %eax,(%esp)
 84806e0:	e8 a3 f0 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84806e5:	8b 45 08             	mov    0x8(%ebp),%eax
 84806e8:	8b 58 10             	mov    0x10(%eax),%ebx
 84806eb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84806f2:	00 
 84806f3:	c7 44 24 08 53 03 00 	movl   $0x353,0x8(%esp)
 84806fa:	00 
 84806fb:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 8480702:	08 
 8480703:	8d 45 88             	lea    -0x78(%ebp),%eax
 8480706:	89 04 24             	mov    %eax,(%esp)
 8480709:	e8 0a f0 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848070e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8480712:	c7 44 24 04 e4 20 c7 	movl   $0x8c720e4,0x4(%esp)
 8480719:	08 
 848071a:	8d 45 88             	lea    -0x78(%ebp),%eax
 848071d:	89 04 24             	mov    %eax,(%esp)
 8480720:	e8 63 f0 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480725:	8b 45 08             	mov    0x8(%ebp),%eax
 8480728:	8b 58 18             	mov    0x18(%eax),%ebx
 848072b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480732:	00 
 8480733:	c7 44 24 08 54 03 00 	movl   $0x354,0x8(%esp)
 848073a:	00 
 848073b:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 8480742:	08 
 8480743:	8d 45 98             	lea    -0x68(%ebp),%eax
 8480746:	89 04 24             	mov    %eax,(%esp)
 8480749:	e8 ca ef 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848074e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8480752:	c7 44 24 04 0c 21 c7 	movl   $0x8c7210c,0x4(%esp)
 8480759:	08 
 848075a:	8d 45 98             	lea    -0x68(%ebp),%eax
 848075d:	89 04 24             	mov    %eax,(%esp)
 8480760:	e8 23 f0 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480765:	8b 45 08             	mov    0x8(%ebp),%eax
 8480768:	8b 58 20             	mov    0x20(%eax),%ebx
 848076b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480772:	00 
 8480773:	c7 44 24 08 55 03 00 	movl   $0x355,0x8(%esp)
 848077a:	00 
 848077b:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 8480782:	08 
 8480783:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8480786:	89 04 24             	mov    %eax,(%esp)
 8480789:	e8 8a ef 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848078e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8480792:	c7 44 24 04 34 21 c7 	movl   $0x8c72134,0x4(%esp)
 8480799:	08 
 848079a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 848079d:	89 04 24             	mov    %eax,(%esp)
 84807a0:	e8 e3 ef 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84807a5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84807ac:	00 
 84807ad:	c7 44 24 08 57 03 00 	movl   $0x357,0x8(%esp)
 84807b4:	00 
 84807b5:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84807bc:	08 
 84807bd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84807c0:	89 04 24             	mov    %eax,(%esp)
 84807c3:	e8 50 ef 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84807c8:	c7 44 24 04 5c 21 c7 	movl   $0x8c7215c,0x4(%esp)
 84807cf:	08 
 84807d0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84807d3:	89 04 24             	mov    %eax,(%esp)
 84807d6:	e8 ad ef 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84807db:	8b 45 08             	mov    0x8(%ebp),%eax
 84807de:	8b 58 2c             	mov    0x2c(%eax),%ebx
 84807e1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84807e8:	00 
 84807e9:	c7 44 24 08 58 03 00 	movl   $0x358,0x8(%esp)
 84807f0:	00 
 84807f1:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 84807f8:	08 
 84807f9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84807fc:	89 04 24             	mov    %eax,(%esp)
 84807ff:	e8 14 ef 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8480804:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8480808:	c7 44 24 04 84 21 c7 	movl   $0x8c72184,0x4(%esp)
 848080f:	08 
 8480810:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8480813:	89 04 24             	mov    %eax,(%esp)
 8480816:	e8 6d ef 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 848081b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8480822:	00 
 8480823:	c7 44 24 08 59 03 00 	movl   $0x359,0x8(%esp)
 848082a:	00 
 848082b:	c7 44 24 04 00 2f c7 	movl   $0x8c72f00,0x4(%esp)
 8480832:	08 
 8480833:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8480836:	89 04 24             	mov    %eax,(%esp)
 8480839:	e8 da ee 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 848083e:	c7 44 24 04 50 1e c7 	movl   $0x8c71e50,0x4(%esp)
 8480845:	08 
 8480846:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8480849:	89 04 24             	mov    %eax,(%esp)
 848084c:	e8 37 ef 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8480851:	81 c4 74 01 00 00    	add    $0x174,%esp
 8480857:	5b                   	pop    %ebx
 8480858:	5d                   	pop    %ebp
 8480859:	c3                   	ret

```

```c
// CPowerWarLog::PrintPowerWarAssultReport @ 0x84802cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPowerWarLog::PrintPowerWarAssultReport() */

void __thiscall CPowerWarLog::PrintPowerWarAssultReport(CPowerWarLog *this)

{
  undefined4 uVar1;
  cMyTrace local_15c [16];
  cMyTrace local_14c [16];
  cMyTrace local_13c [16];
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  double local_1c;
  double local_14;
  
  cMyTrace::cMyTrace(local_15c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x32f,0);
  cMyTrace::operator()
            (local_15c,
             "-------------------------------------------------------------------------------------------------------------"
            );
  cMyTrace::cMyTrace(local_14c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x330,0);
  cMyTrace::operator()
            (local_14c,
             "|                                  POWAR WAR ASSAULT RESULT REPORT                                          |"
            );
  cMyTrace::cMyTrace(local_13c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x331,0);
  cMyTrace::operator()
            (local_13c,
             "-------------------------------------------------------------------------------------------------------------"
            );
  cMyTrace::cMyTrace(local_12c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x334,0);
  cMyTrace::operator()(local_12c,"1. POWER WAR ATTEMPT REPORT");
  uVar1 = *(undefined4 *)this;
  cMyTrace::cMyTrace(local_11c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x335,0);
  cMyTrace::operator()(local_11c,"- POWER WAR ATTEMPT                : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 4);
  cMyTrace::cMyTrace(local_10c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x336,0);
  cMyTrace::operator()(local_10c,"- POWER WAR ATTEMPT SUCCESS        : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 8);
  cMyTrace::cMyTrace(local_fc,"void CPowerWarLog::PrintPowerWarAssultReport()",0x337,0);
  cMyTrace::operator()(local_fc,"- POWER WAR ATTEMPT FAILURE        : %d",uVar1);
  local_1c = 0.0;
  if (*(int *)this != 0) {
    local_1c = _DAT_08c72fd8 * ((double)*(int *)(this + 8) / (double)*(int *)this);
  }
  cMyTrace::cMyTrace(local_ec,"void CPowerWarLog::PrintPowerWarAssultReport()",0x340,0);
  cMyTrace::operator()(local_ec,"- POWER WAR ATTEMPT FAILURE RATIO  : %.2f%%",local_1c);
  cMyTrace::cMyTrace(local_dc,"void CPowerWarLog::PrintPowerWarAssultReport()",0x343,0);
  cMyTrace::operator()(local_dc,"2. POWER WAR LOADING & P2P FAILURE REPORT");
  uVar1 = *(undefined4 *)(this + 0xc);
  cMyTrace::cMyTrace(local_cc,"void CPowerWarLog::PrintPowerWarAssultReport()",0x344,0);
  cMyTrace::operator()(local_cc,"- POWER WAR LOADING TIMEOUT        : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 0x14);
  cMyTrace::cMyTrace(local_bc,"void CPowerWarLog::PrintPowerWarAssultReport()",0x345,0);
  cMyTrace::operator()(local_bc,"- POWER WAR P2P TIMEOUT            : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 0x1c);
  cMyTrace::cMyTrace(local_ac,"void CPowerWarLog::PrintPowerWarAssultReport()",0x346,0);
  cMyTrace::operator()(local_ac,"- POWER WAR P2P BAD                : %d",uVar1);
  local_14 = 0.0;
  if (*(int *)(this + 4) != 0) {
    local_14 = _DAT_08c72fd8 * ((double)*(int *)(this + 0x28) / (double)*(int *)(this + 4));
  }
  cMyTrace::cMyTrace(local_9c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x34f,0);
  cMyTrace::operator()(local_9c,"- POWER WAR FAILURE RATIO         : %.2f%%",local_14);
  cMyTrace::cMyTrace(local_8c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x352,0);
  cMyTrace::operator()(local_8c,"3. POWER WAR START SECEDE REPORT");
  uVar1 = *(undefined4 *)(this + 0x10);
  cMyTrace::cMyTrace(local_7c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x353,0);
  cMyTrace::operator()(local_7c,"- POWER WAR LOADING SECEDE        : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 0x18);
  cMyTrace::cMyTrace(local_6c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x354,0);
  cMyTrace::operator()(local_6c,"- POWER WAR P2P SECEDE            : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 0x20);
  cMyTrace::cMyTrace(local_5c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x355,0);
  cMyTrace::operator()(local_5c,"- POWER WAR P2P Bad               : %d",uVar1);
  cMyTrace::cMyTrace(local_4c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x357,0);
  cMyTrace::operator()(local_4c,"4. POWER WAR SUCCESS/FAILURE INFOMATION");
  uVar1 = *(undefined4 *)(this + 0x2c);
  cMyTrace::cMyTrace(local_3c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x358,0);
  cMyTrace::operator()(local_3c,"- SUCCESS COUNT                   : %d",uVar1);
  cMyTrace::cMyTrace(local_2c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x359,0);
  cMyTrace::operator()
            (local_2c,
             "-------------------------------------------------------------------------------------------------------------"
            );
  return;
}

```

---

## Reset

```asm
// === 08480232 CPowerWarLog::Reset  [0x08480232-0x84802cb] ===
 8480232:	55                   	push   %ebp
 8480233:	89 e5                	mov    %esp,%ebp
 8480235:	8b 45 08             	mov    0x8(%ebp),%eax
 8480238:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 848023e:	8b 45 08             	mov    0x8(%ebp),%eax
 8480241:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8480248:	8b 45 08             	mov    0x8(%ebp),%eax
 848024b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8480252:	8b 45 08             	mov    0x8(%ebp),%eax
 8480255:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 848025c:	8b 45 08             	mov    0x8(%ebp),%eax
 848025f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8480266:	8b 45 08             	mov    0x8(%ebp),%eax
 8480269:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8480270:	8b 45 08             	mov    0x8(%ebp),%eax
 8480273:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 848027a:	8b 45 08             	mov    0x8(%ebp),%eax
 848027d:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8480284:	8b 45 08             	mov    0x8(%ebp),%eax
 8480287:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 848028e:	8b 45 08             	mov    0x8(%ebp),%eax
 8480291:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8480298:	8b 45 08             	mov    0x8(%ebp),%eax
 848029b:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 84802a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84802a5:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 84802ac:	8b 45 08             	mov    0x8(%ebp),%eax
 84802af:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 84802b6:	8b 45 08             	mov    0x8(%ebp),%eax
 84802b9:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 84802c0:	8b 45 08             	mov    0x8(%ebp),%eax
 84802c3:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 84802ca:	5d                   	pop    %ebp
 84802cb:	c3                   	ret

```

```c
// CPowerWarLog::Reset @ 0x8480232

/* CPowerWarLog::Reset() */

void __thiscall CPowerWarLog::Reset(CPowerWarLog *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}

```

