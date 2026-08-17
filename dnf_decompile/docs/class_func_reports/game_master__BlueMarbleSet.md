# game_master__BlueMarbleSet

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## execute

```asm
// === 084b25a4 game_master::BlueMarbleSet::execute  [0x084b25a4-0x84b2639] ===
 84b25a4:	55                   	push   %ebp
 84b25a5:	89 e5                	mov    %esp,%ebp
 84b25a7:	83 ec 28             	sub    $0x28,%esp
 84b25aa:	8b 45 08             	mov    0x8(%ebp),%eax
 84b25ad:	89 04 24             	mov    %eax,(%esp)
 84b25b0:	e8 05 1a 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b25b5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b25b8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84b25bc:	74 6f                	je     84b262d <_ZN11game_master13BlueMarbleSet7executeEv+0x89>
 84b25be:	8b 45 08             	mov    0x8(%ebp),%eax
 84b25c1:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84b25c5:	84 c0                	test   %al,%al
 84b25c7:	74 18                	je     84b25e1 <_ZN11game_master13BlueMarbleSet7executeEv+0x3d>
 84b25c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b25cc:	89 04 24             	mov    %eax,(%esp)
 84b25cf:	e8 04 e9 1d 00       	call   8690ed8 <_ZN15CUserCharacInfo25resetBlueMarbleEnterCountEv>
 84b25d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b25d7:	89 04 24             	mov    %eax,(%esp)
 84b25da:	e8 ed e9 1d 00       	call   8690fcc <_ZN5CUser24sendBlueMarbleEnterCountEv>
 84b25df:	eb 56                	jmp    84b2637 <_ZN11game_master13BlueMarbleSet7executeEv+0x93>
 84b25e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b25e4:	89 04 24             	mov    %eax,(%esp)
 84b25e7:	e8 fa 2c 1a 00       	call   86552e6 <_ZN5CUser13getBlueMarbleEv>
 84b25ec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b25ef:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b25f3:	74 3b                	je     84b2630 <_ZN11game_master13BlueMarbleSet7executeEv+0x8c>
 84b25f5:	8b 45 08             	mov    0x8(%ebp),%eax
 84b25f8:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84b25fc:	84 c0                	test   %al,%al
 84b25fe:	74 33                	je     84b2633 <_ZN11game_master13BlueMarbleSet7executeEv+0x8f>
 84b2600:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2603:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b2607:	84 c0                	test   %al,%al
 84b2609:	74 2b                	je     84b2636 <_ZN11game_master13BlueMarbleSet7executeEv+0x92>
 84b260b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b260e:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b2612:	0f b6 c0             	movzbl %al,%eax
 84b2615:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b2619:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b261c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2620:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2623:	89 04 24             	mov    %eax,(%esp)
 84b2626:	e8 21 74 c2 ff       	call   80d9a4c <_ZN10BlueMarble12movePositionEP5CUseri>
 84b262b:	eb 0a                	jmp    84b2637 <_ZN11game_master13BlueMarbleSet7executeEv+0x93>
 84b262d:	90                   	nop
 84b262e:	eb 07                	jmp    84b2637 <_ZN11game_master13BlueMarbleSet7executeEv+0x93>
 84b2630:	90                   	nop
 84b2631:	eb 04                	jmp    84b2637 <_ZN11game_master13BlueMarbleSet7executeEv+0x93>
 84b2633:	90                   	nop
 84b2634:	eb 01                	jmp    84b2637 <_ZN11game_master13BlueMarbleSet7executeEv+0x93>
 84b2636:	90                   	nop
 84b2637:	c9                   	leave
 84b2638:	c3                   	ret
 84b2639:	90                   	nop

```

```c
// game_master::BlueMarbleSet::execute @ 0x84b25a4

/* game_master::BlueMarbleSet::execute() */

void __thiscall game_master::BlueMarbleSet::execute(BlueMarbleSet *this)

{
  CUserCharacInfo *this_00;
  BlueMarble *this_01;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUserCharacInfo *)0x0) {
    if (this[10] == (BlueMarbleSet)0x0) {
      this_01 = (BlueMarble *)CUser::getBlueMarble((CUser *)this_00);
      if (((this_01 != (BlueMarble *)0x0) && (this[9] != (BlueMarbleSet)0x0)) &&
         (this[8] != (BlueMarbleSet)0x0)) {
        BlueMarble::movePosition(this_01,(CUser *)this_00,(uint)(byte)this[8]);
      }
    }
    else {
      CUserCharacInfo::resetBlueMarbleEnterCount(this_00);
      CUser::sendBlueMarbleEnterCount((CUser *)this_00);
    }
  }
  return;
}

```

---

## getParam

```asm
// === 084b235c game_master::BlueMarbleSet::getParam  [0x084b235c-0x84b25a3] ===
 84b235c:	55                   	push   %ebp
 84b235d:	89 e5                	mov    %esp,%ebp
 84b235f:	57                   	push   %edi
 84b2360:	56                   	push   %esi
 84b2361:	53                   	push   %ebx
 84b2362:	83 ec 7c             	sub    $0x7c,%esp
 84b2365:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84b236c:	8d 5d 9c             	lea    -0x64(%ebp),%ebx
 84b236f:	89 df                	mov    %ebx,%edi
 84b2371:	be 0f 00 00 00       	mov    $0xf,%esi
 84b2376:	eb 0e                	jmp    84b2386 <_ZN11game_master13BlueMarbleSet8getParamESs+0x2a>
 84b2378:	89 3c 24             	mov    %edi,(%esp)
 84b237b:	e8 50 42 25 00       	call   87065d0 <_ZNSsC1Ev>
 84b2380:	83 c7 04             	add    $0x4,%edi
 84b2383:	83 ee 01             	sub    $0x1,%esi
 84b2386:	83 fe ff             	cmp    $0xffffffff,%esi
 84b2389:	0f 95 c0             	setne  %al
 84b238c:	84 c0                	test   %al,%al
 84b238e:	75 e8                	jne    84b2378 <_ZN11game_master13BlueMarbleSet8getParamESs+0x1c>
 84b2390:	eb 34                	jmp    84b23c6 <_ZN11game_master13BlueMarbleSet8getParamESs+0x6a>
 84b2392:	89 d7                	mov    %edx,%edi
 84b2394:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84b2397:	85 db                	test   %ebx,%ebx
 84b2399:	74 1e                	je     84b23b9 <_ZN11game_master13BlueMarbleSet8getParamESs+0x5d>
 84b239b:	b8 0f 00 00 00       	mov    $0xf,%eax
 84b23a0:	29 f0                	sub    %esi,%eax
 84b23a2:	c1 e0 02             	shl    $0x2,%eax
 84b23a5:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 84b23a8:	39 de                	cmp    %ebx,%esi
 84b23aa:	74 0d                	je     84b23b9 <_ZN11game_master13BlueMarbleSet8getParamESs+0x5d>
 84b23ac:	83 ee 04             	sub    $0x4,%esi
 84b23af:	89 34 24             	mov    %esi,(%esp)
 84b23b2:	e8 29 58 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b23b7:	eb ef                	jmp    84b23a8 <_ZN11game_master13BlueMarbleSet8getParamESs+0x4c>
 84b23b9:	8b 45 94             	mov    -0x6c(%ebp),%eax
 84b23bc:	89 fa                	mov    %edi,%edx
 84b23be:	89 04 24             	mov    %eax,(%esp)
 84b23c1:	e8 8a 13 63 00       	call   8ae3750 <_Unwind_Resume>
 84b23c6:	e9 d6 00 00 00       	jmp    84b24a1 <_ZN11game_master13BlueMarbleSet8getParamESs+0x145>
 84b23cb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84b23ce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b23d1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b23d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b23dc:	00 
 84b23dd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b23e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b23e4:	89 04 24             	mov    %eax,(%esp)
 84b23e7:	e8 94 54 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84b23ec:	83 ec 04             	sub    $0x4,%esp
 84b23ef:	8b 45 08             	mov    0x8(%ebp),%eax
 84b23f2:	8b 50 0c             	mov    0xc(%eax),%edx
 84b23f5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b23f8:	c1 e2 02             	shl    $0x2,%edx
 84b23fb:	8d 14 10             	lea    (%eax,%edx,1),%edx
 84b23fe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b2401:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2405:	89 14 24             	mov    %edx,(%esp)
 84b2408:	e8 f3 58 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84b240d:	eb 18                	jmp    84b2427 <_ZN11game_master13BlueMarbleSet8getParamESs+0xcb>
 84b240f:	89 d3                	mov    %edx,%ebx
 84b2411:	89 c6                	mov    %eax,%esi
 84b2413:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b2416:	89 04 24             	mov    %eax,(%esp)
 84b2419:	e8 c2 57 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b241e:	89 f0                	mov    %esi,%eax
 84b2420:	89 da                	mov    %ebx,%edx
 84b2422:	e9 33 01 00 00       	jmp    84b255a <_ZN11game_master13BlueMarbleSet8getParamESs+0x1fe>
 84b2427:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b242a:	89 04 24             	mov    %eax,(%esp)
 84b242d:	e8 ae 57 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b2432:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b2435:	83 c0 01             	add    $0x1,%eax
 84b2438:	89 c2                	mov    %eax,%edx
 84b243a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b243d:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 84b2444:	ff 
 84b2445:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b2449:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b244c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2450:	89 04 24             	mov    %eax,(%esp)
 84b2453:	e8 28 54 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84b2458:	83 ec 04             	sub    $0x4,%esp
 84b245b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b245e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2462:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b2465:	89 04 24             	mov    %eax,(%esp)
 84b2468:	e8 93 58 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84b246d:	eb 18                	jmp    84b2487 <_ZN11game_master13BlueMarbleSet8getParamESs+0x12b>
 84b246f:	89 d3                	mov    %edx,%ebx
 84b2471:	89 c6                	mov    %eax,%esi
 84b2473:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b2476:	89 04 24             	mov    %eax,(%esp)
 84b2479:	e8 62 57 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b247e:	89 f0                	mov    %esi,%eax
 84b2480:	89 da                	mov    %ebx,%edx
 84b2482:	e9 d3 00 00 00       	jmp    84b255a <_ZN11game_master13BlueMarbleSet8getParamESs+0x1fe>
 84b2487:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b248a:	89 04 24             	mov    %eax,(%esp)
 84b248d:	e8 4e 57 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b2492:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2495:	8b 40 0c             	mov    0xc(%eax),%eax
 84b2498:	8d 50 01             	lea    0x1(%eax),%edx
 84b249b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b249e:	89 50 0c             	mov    %edx,0xc(%eax)
 84b24a1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b24a8:	00 
 84b24a9:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 84b24b0:	00 
 84b24b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b24b4:	89 04 24             	mov    %eax,(%esp)
 84b24b7:	e8 44 4b 25 00       	call   8707000 <_ZNKSs4findEcj>
 84b24bc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84b24bf:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 84b24c3:	0f 95 c0             	setne  %al
 84b24c6:	84 c0                	test   %al,%al
 84b24c8:	0f 85 fd fe ff ff    	jne    84b23cb <_ZN11game_master13BlueMarbleSet8getParamESs+0x6f>
 84b24ce:	8b 45 08             	mov    0x8(%ebp),%eax
 84b24d1:	8b 50 0c             	mov    0xc(%eax),%edx
 84b24d4:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b24d7:	c1 e2 02             	shl    $0x2,%edx
 84b24da:	8d 14 10             	lea    (%eax,%edx,1),%edx
 84b24dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b24e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b24e4:	89 14 24             	mov    %edx,(%esp)
 84b24e7:	e8 14 58 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84b24ec:	c7 44 24 04 cf 03 c8 	movl   $0x8c803cf,0x4(%esp)
 84b24f3:	08 
 84b24f4:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b24f7:	89 04 24             	mov    %eax,(%esp)
 84b24fa:	e8 31 45 25 00       	call   8706a30 <_ZNKSs7compareEPKc>
 84b24ff:	85 c0                	test   %eax,%eax
 84b2501:	0f 94 c0             	sete   %al
 84b2504:	84 c0                	test   %al,%al
 84b2506:	74 09                	je     84b2511 <_ZN11game_master13BlueMarbleSet8getParamESs+0x1b5>
 84b2508:	8b 45 08             	mov    0x8(%ebp),%eax
 84b250b:	c6 40 09 01          	movb   $0x1,0x9(%eax)
 84b250f:	eb 23                	jmp    84b2534 <_ZN11game_master13BlueMarbleSet8getParamESs+0x1d8>
 84b2511:	c7 44 24 04 d4 03 c8 	movl   $0x8c803d4,0x4(%esp)
 84b2518:	08 
 84b2519:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b251c:	89 04 24             	mov    %eax,(%esp)
 84b251f:	e8 0c 45 25 00       	call   8706a30 <_ZNKSs7compareEPKc>
 84b2524:	85 c0                	test   %eax,%eax
 84b2526:	0f 94 c0             	sete   %al
 84b2529:	84 c0                	test   %al,%al
 84b252b:	74 07                	je     84b2534 <_ZN11game_master13BlueMarbleSet8getParamESs+0x1d8>
 84b252d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2530:	c6 40 0a 01          	movb   $0x1,0xa(%eax)
 84b2534:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b2537:	83 c0 04             	add    $0x4,%eax
 84b253a:	89 04 24             	mov    %eax,(%esp)
 84b253d:	e8 ae 3f 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b2542:	89 04 24             	mov    %eax,(%esp)
 84b2545:	e8 a6 c1 bc ff       	call   807e6f0 <atoi@plt>
 84b254a:	89 c2                	mov    %eax,%edx
 84b254c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b254f:	88 50 08             	mov    %dl,0x8(%eax)
 84b2552:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b2555:	8d 58 40             	lea    0x40(%eax),%ebx
 84b2558:	eb 2a                	jmp    84b2584 <_ZN11game_master13BlueMarbleSet8getParamESs+0x228>
 84b255a:	89 d6                	mov    %edx,%esi
 84b255c:	89 c7                	mov    %eax,%edi
 84b255e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b2561:	8d 58 40             	lea    0x40(%eax),%ebx
 84b2564:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b2567:	39 c3                	cmp    %eax,%ebx
 84b2569:	74 0d                	je     84b2578 <_ZN11game_master13BlueMarbleSet8getParamESs+0x21c>
 84b256b:	83 eb 04             	sub    $0x4,%ebx
 84b256e:	89 1c 24             	mov    %ebx,(%esp)
 84b2571:	e8 6a 56 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b2576:	eb ec                	jmp    84b2564 <_ZN11game_master13BlueMarbleSet8getParamESs+0x208>
 84b2578:	89 f8                	mov    %edi,%eax
 84b257a:	89 f2                	mov    %esi,%edx
 84b257c:	89 04 24             	mov    %eax,(%esp)
 84b257f:	e8 cc 11 63 00       	call   8ae3750 <_Unwind_Resume>
 84b2584:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84b2587:	39 c3                	cmp    %eax,%ebx
 84b2589:	74 0d                	je     84b2598 <_ZN11game_master13BlueMarbleSet8getParamESs+0x23c>
 84b258b:	83 eb 04             	sub    $0x4,%ebx
 84b258e:	89 1c 24             	mov    %ebx,(%esp)
 84b2591:	e8 4a 56 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b2596:	eb ec                	jmp    84b2584 <_ZN11game_master13BlueMarbleSet8getParamESs+0x228>
 84b2598:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84b259b:	83 c4 00             	add    $0x0,%esp
 84b259e:	5b                   	pop    %ebx
 84b259f:	5e                   	pop    %esi
 84b25a0:	5f                   	pop    %edi
 84b25a1:	5d                   	pop    %ebp
 84b25a2:	c3                   	ret
 84b25a3:	90                   	nop

```

```c
// game_master::BlueMarbleSet::getParam @ 0x84b235c

/* game_master::BlueMarbleSet::getParam(std::string) */

void __thiscall game_master::BlueMarbleSet::getParam(BlueMarbleSet *this,string param_1)

{
  char *__nptr;
  string *psVar1;
  int iVar2;
  string local_68 [4];
  string asStack_64 [60];
  string local_28 [4];
  string local_24 [4];
  int local_20;
  
  local_20 = 0;
  psVar1 = local_68;
  for (iVar2 = 0xf; iVar2 != -1; iVar2 = iVar2 + -1) {
                    /* try { // try from 084b237b to 084b237f has its CatchHandler @ 084b2392 */
    std::string::string(psVar1);
    psVar1 = psVar1 + 4;
  }
  while (local_20 = std::string::find((string *)param_1._M_dataplus._M_p,' ',0), local_20 != -1) {
                    /* try { // try from 084b23e7 to 084b23eb has its CatchHandler @ 084b255a */
    std::string::substr((uint)local_28,(uint)param_1._M_dataplus._M_p);
                    /* try { // try from 084b2408 to 084b240c has its CatchHandler @ 084b240f */
    std::string::operator=(local_68 + *(int *)(this + 0xc) * 4,local_28);
                    /* try { // try from 084b242d to 084b2457 has its CatchHandler @ 084b255a */
    std::string::~string(local_28);
    std::string::substr((uint)local_24,(uint)param_1._M_dataplus._M_p);
                    /* try { // try from 084b2468 to 084b246c has its CatchHandler @ 084b246f */
    std::string::operator=((string *)param_1._M_dataplus._M_p,local_24);
                    /* try { // try from 084b248d to 084b2541 has its CatchHandler @ 084b255a */
    std::string::~string(local_24);
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  std::string::operator=(local_68 + *(int *)(this + 0xc) * 4,(string *)param_1._M_dataplus._M_p);
  iVar2 = std::string::compare(local_68,"move");
  if (iVar2 == 0) {
    this[9] = (BlueMarbleSet)0x1;
  }
  else {
    iVar2 = std::string::compare(local_68,"enter");
    if (iVar2 == 0) {
      this[10] = (BlueMarbleSet)0x1;
    }
  }
  __nptr = (char *)std::string::c_str(asStack_64);
  iVar2 = atoi(__nptr);
  this[8] = SUB41(iVar2,0);
  psVar1 = local_28;
  while (psVar1 != local_68) {
    psVar1 = psVar1 + -4;
    std::string::~string(psVar1);
  }
  return;
}

```

---

## parse

```asm
// === 084b22ca game_master::BlueMarbleSet::parse  [0x084b22ca-0x84b235b] ===
 84b22ca:	55                   	push   %ebp
 84b22cb:	89 e5                	mov    %esp,%ebp
 84b22cd:	56                   	push   %esi
 84b22ce:	53                   	push   %ebx
 84b22cf:	83 ec 20             	sub    $0x20,%esp
 84b22d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b22d5:	c6 40 09 00          	movb   $0x0,0x9(%eax)
 84b22d9:	8b 45 08             	mov    0x8(%ebp),%eax
 84b22dc:	c6 40 0a 00          	movb   $0x0,0xa(%eax)
 84b22e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84b22e3:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 84b22e7:	8b 45 08             	mov    0x8(%ebp),%eax
 84b22ea:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 84b22f1:	8b 45 08             	mov    0x8(%ebp),%eax
 84b22f4:	8b 40 04             	mov    0x4(%eax),%eax
 84b22f7:	83 c0 0c             	add    $0xc,%eax
 84b22fa:	89 04 24             	mov    %eax,(%esp)
 84b22fd:	e8 66 cd de ff       	call   829f068 <_Z4trimRSs>
 84b2302:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2305:	8b 40 04             	mov    0x4(%eax),%eax
 84b2308:	83 c0 0c             	add    $0xc,%eax
 84b230b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b230f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b2312:	89 04 24             	mov    %eax,(%esp)
 84b2315:	e8 96 56 25 00       	call   87079b0 <_ZNSsC1ERKSs>
 84b231a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b231d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b2321:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2324:	89 04 24             	mov    %eax,(%esp)
 84b2327:	e8 30 00 00 00       	call   84b235c <_ZN11game_master13BlueMarbleSet8getParamESs>
 84b232c:	eb 1b                	jmp    84b2349 <_ZN11game_master13BlueMarbleSet5parseEv+0x7f>
 84b232e:	89 d3                	mov    %edx,%ebx
 84b2330:	89 c6                	mov    %eax,%esi
 84b2332:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b2335:	89 04 24             	mov    %eax,(%esp)
 84b2338:	e8 a3 58 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b233d:	89 f0                	mov    %esi,%eax
 84b233f:	89 da                	mov    %ebx,%edx
 84b2341:	89 04 24             	mov    %eax,(%esp)
 84b2344:	e8 07 14 63 00       	call   8ae3750 <_Unwind_Resume>
 84b2349:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b234c:	89 04 24             	mov    %eax,(%esp)
 84b234f:	e8 8c 58 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b2354:	83 c4 20             	add    $0x20,%esp
 84b2357:	5b                   	pop    %ebx
 84b2358:	5e                   	pop    %esi
 84b2359:	5d                   	pop    %ebp
 84b235a:	c3                   	ret
 84b235b:	90                   	nop

```

```c
// game_master::BlueMarbleSet::parse @ 0x84b22ca

/* game_master::BlueMarbleSet::parse() */

void __thiscall game_master::BlueMarbleSet::parse(BlueMarbleSet *this)

{
  string local_10 [4];
  
  this[9] = (BlueMarbleSet)0x0;
  this[10] = (BlueMarbleSet)0x0;
  this[8] = (BlueMarbleSet)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::string(local_10,(string *)(*(int *)(this + 4) + 0xc));
                    /* try { // try from 084b2327 to 084b232b has its CatchHandler @ 084b232e */
  getParam(this,(string)local_10);
  std::string::~string(local_10);
  return;
}

```

