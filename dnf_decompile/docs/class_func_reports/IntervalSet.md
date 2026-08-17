# IntervalSet

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## AddInterval

```asm
// === 0857337a IntervalSet::AddInterval  [0x0857337a-0x8573393] ===
 857337a:	55                   	push   %ebp
 857337b:	89 e5                	mov    %esp,%ebp
 857337d:	83 ec 18             	sub    $0x18,%esp
 8573380:	8b 45 08             	mov    0x8(%ebp),%eax
 8573383:	8b 55 0c             	mov    0xc(%ebp),%edx
 8573386:	89 54 24 04          	mov    %edx,0x4(%esp)
 857338a:	89 04 24             	mov    %eax,(%esp)
 857338d:	e8 ce 2c 00 00       	call   8576060 <_ZNSt6vectorI8IntervalSaIS0_EE9push_backERKS0_>
 8573392:	c9                   	leave
 8573393:	c3                   	ret

```

```c
// IntervalSet::AddInterval @ 0x857337a

/* IntervalSet::AddInterval(Interval const&) */

void __thiscall IntervalSet::AddInterval(IntervalSet *this,Interval *param_1)

{
  std::vector<Interval,std::allocator<Interval>>::push_back
            ((vector<Interval,std::allocator<Interval>> *)this,param_1);
  return;
}

```

---

## Clear

```asm
// === 08573366 IntervalSet::Clear  [0x08573366-0x8573379] ===
 8573366:	55                   	push   %ebp
 8573367:	89 e5                	mov    %esp,%ebp
 8573369:	83 ec 18             	sub    $0x18,%esp
 857336c:	8b 45 08             	mov    0x8(%ebp),%eax
 857336f:	89 04 24             	mov    %eax,(%esp)
 8573372:	e8 cd 2c 00 00       	call   8576044 <_ZNSt6vectorI8IntervalSaIS0_EE5clearEv>
 8573377:	c9                   	leave
 8573378:	c3                   	ret
 8573379:	90                   	nop

```

```c
// IntervalSet::Clear @ 0x8573366

/* IntervalSet::Clear() */

void __thiscall IntervalSet::Clear(IntervalSet *this)

{
  std::vector<Interval,std::allocator<Interval>>::clear
            ((vector<Interval,std::allocator<Interval>> *)this);
  return;
}

```

---

## GetTotalIntervalSize

```asm
// === 0857363c IntervalSet::GetTotalIntervalSize  [0x0857363c-0x85736bd] ===
 857363c:	55                   	push   %ebp
 857363d:	89 e5                	mov    %esp,%ebp
 857363f:	83 ec 38             	sub    $0x38,%esp
 8573642:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573645:	89 04 24             	mov    %eax,(%esp)
 8573648:	e8 87 2a 00 00       	call   85760d4 <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEC1Ev>
 857364d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8573654:	8b 55 08             	mov    0x8(%ebp),%edx
 8573657:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 857365a:	89 54 24 04          	mov    %edx,0x4(%esp)
 857365e:	89 04 24             	mov    %eax,(%esp)
 8573661:	e8 7c 2a 00 00       	call   85760e2 <_ZNSt6vectorI8IntervalSaIS0_EE5beginEv>
 8573666:	83 ec 04             	sub    $0x4,%esp
 8573669:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857366c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 857366f:	eb 1c                	jmp    857368d <_ZN11IntervalSet20GetTotalIntervalSizeEv+0x51>
 8573671:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573674:	89 04 24             	mov    %eax,(%esp)
 8573677:	e8 dc 2a 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 857367c:	8b 40 04             	mov    0x4(%eax),%eax
 857367f:	01 45 f4             	add    %eax,-0xc(%ebp)
 8573682:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573685:	89 04 24             	mov    %eax,(%esp)
 8573688:	e8 1d 2d 00 00       	call   85763aa <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEppEv>
 857368d:	8b 55 08             	mov    0x8(%ebp),%edx
 8573690:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8573693:	89 54 24 04          	mov    %edx,0x4(%esp)
 8573697:	89 04 24             	mov    %eax,(%esp)
 857369a:	e8 67 2a 00 00       	call   8576106 <_ZNSt6vectorI8IntervalSaIS0_EE3endEv>
 857369f:	83 ec 04             	sub    $0x4,%esp
 85736a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85736a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85736a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85736ac:	89 04 24             	mov    %eax,(%esp)
 85736af:	e8 78 2a 00 00       	call   857612c <_ZN9__gnu_cxxneIP8IntervalSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 85736b4:	84 c0                	test   %al,%al
 85736b6:	75 b9                	jne    8573671 <_ZN11IntervalSet20GetTotalIntervalSizeEv+0x35>
 85736b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85736bb:	c9                   	leave
 85736bc:	c3                   	ret
 85736bd:	90                   	nop

```

```c
// IntervalSet::GetTotalIntervalSize @ 0x857363c

/* IntervalSet::GetTotalIntervalSize() */

int IntervalSet::GetTotalIntervalSize(void)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
  __normal_iterator(local_18);
  local_10 = 0;
  std::vector<Interval,std::allocator<Interval>>::begin();
  while( true ) {
    std::vector<Interval,std::allocator<Interval>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
            operator*(local_18);
    local_10 = local_10 + *(int *)(iVar2 + 4);
    __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
    operator++(local_18);
  }
  return local_10;
}

```

---

## MinusInterval

```asm
// === 08573394 IntervalSet::MinusInterval  [0x08573394-0x85735db] ===
 8573394:	55                   	push   %ebp
 8573395:	89 e5                	mov    %esp,%ebp
 8573397:	83 ec 58             	sub    $0x58,%esp
 857339a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 857339d:	89 04 24             	mov    %eax,(%esp)
 85733a0:	e8 2f 2d 00 00       	call   85760d4 <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEC1Ev>
 85733a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85733a8:	89 04 24             	mov    %eax,(%esp)
 85733ab:	e8 a8 2a 00 00       	call   8575e58 <_ZN8IntervalC1Ev>
 85733b0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85733b3:	89 04 24             	mov    %eax,(%esp)
 85733b6:	e8 9d 2a 00 00       	call   8575e58 <_ZN8IntervalC1Ev>
 85733bb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85733be:	89 04 24             	mov    %eax,(%esp)
 85733c1:	e8 92 2a 00 00       	call   8575e58 <_ZN8IntervalC1Ev>
 85733c6:	8b 55 08             	mov    0x8(%ebp),%edx
 85733c9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85733cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85733d0:	89 04 24             	mov    %eax,(%esp)
 85733d3:	e8 0a 2d 00 00       	call   85760e2 <_ZNSt6vectorI8IntervalSaIS0_EE5beginEv>
 85733d8:	83 ec 04             	sub    $0x4,%esp
 85733db:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85733de:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85733e1:	e9 c5 01 00 00       	jmp    85735ab <_ZN11IntervalSet13MinusIntervalERK8Interval+0x217>
 85733e6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85733e9:	89 04 24             	mov    %eax,(%esp)
 85733ec:	e8 67 2d 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 85733f1:	8b 00                	mov    (%eax),%eax
 85733f3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85733f6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85733f9:	89 04 24             	mov    %eax,(%esp)
 85733fc:	e8 57 2d 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 8573401:	8b 40 04             	mov    0x4(%eax),%eax
 8573404:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8573407:	8b 45 0c             	mov    0xc(%ebp),%eax
 857340a:	89 44 24 08          	mov    %eax,0x8(%esp)
 857340e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8573411:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573415:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8573418:	89 04 24             	mov    %eax,(%esp)
 857341b:	e8 40 fc ff ff       	call   8573060 <_Z17IntersectIntervalP8IntervalRKS_S2_>
 8573420:	84 c0                	test   %al,%al
 8573422:	0f 84 78 01 00 00    	je     85735a0 <_ZN11IntervalSet13MinusIntervalERK8Interval+0x20c>
 8573428:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 857342b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 857342e:	39 c2                	cmp    %eax,%edx
 8573430:	75 31                	jne    8573463 <_ZN11IntervalSet13MinusIntervalERK8Interval+0xcf>
 8573432:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8573435:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8573438:	39 c2                	cmp    %eax,%edx
 857343a:	75 27                	jne    8573463 <_ZN11IntervalSet13MinusIntervalERK8Interval+0xcf>
 857343c:	8b 55 08             	mov    0x8(%ebp),%edx
 857343f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8573442:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8573445:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8573449:	89 54 24 04          	mov    %edx,0x4(%esp)
 857344d:	89 04 24             	mov    %eax,(%esp)
 8573450:	e8 0d 2d 00 00       	call   8576162 <_ZNSt6vectorI8IntervalSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 8573455:	83 ec 04             	sub    $0x4,%esp
 8573458:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 857345b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 857345e:	e9 48 01 00 00       	jmp    85735ab <_ZN11IntervalSet13MinusIntervalERK8Interval+0x217>
 8573463:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8573466:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8573469:	39 c2                	cmp    %eax,%edx
 857346b:	75 46                	jne    85734b3 <_ZN11IntervalSet13MinusIntervalERK8Interval+0x11f>
 857346d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8573470:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8573473:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8573476:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8573479:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 857347c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857347f:	01 c2                	add    %eax,%edx
 8573481:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8573484:	89 d1                	mov    %edx,%ecx
 8573486:	29 c1                	sub    %eax,%ecx
 8573488:	89 c8                	mov    %ecx,%eax
 857348a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 857348d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573490:	89 04 24             	mov    %eax,(%esp)
 8573493:	e8 c0 2c 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 8573498:	8b 55 dc             	mov    -0x24(%ebp),%edx
 857349b:	89 10                	mov    %edx,(%eax)
 857349d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85734a0:	89 04 24             	mov    %eax,(%esp)
 85734a3:	e8 b0 2c 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 85734a8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85734ab:	89 50 04             	mov    %edx,0x4(%eax)
 85734ae:	e9 ed 00 00 00       	jmp    85735a0 <_ZN11IntervalSet13MinusIntervalERK8Interval+0x20c>
 85734b3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85734b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85734b9:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
 85734bc:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85734bf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85734c2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85734c5:	39 c1                	cmp    %eax,%ecx
 85734c7:	75 3b                	jne    8573504 <_ZN11IntervalSet13MinusIntervalERK8Interval+0x170>
 85734c9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85734cc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85734cf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85734d2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85734d5:	89 d1                	mov    %edx,%ecx
 85734d7:	29 c1                	sub    %eax,%ecx
 85734d9:	89 c8                	mov    %ecx,%eax
 85734db:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85734de:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85734e1:	89 04 24             	mov    %eax,(%esp)
 85734e4:	e8 6f 2c 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 85734e9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85734ec:	89 10                	mov    %edx,(%eax)
 85734ee:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85734f1:	89 04 24             	mov    %eax,(%esp)
 85734f4:	e8 5f 2c 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 85734f9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85734fc:	89 50 04             	mov    %edx,0x4(%eax)
 85734ff:	e9 9c 00 00 00       	jmp    85735a0 <_ZN11IntervalSet13MinusIntervalERK8Interval+0x20c>
 8573504:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8573507:	89 45 dc             	mov    %eax,-0x24(%ebp)
 857350a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 857350d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8573510:	89 d1                	mov    %edx,%ecx
 8573512:	29 c1                	sub    %eax,%ecx
 8573514:	89 c8                	mov    %ecx,%eax
 8573516:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8573519:	8d 45 ec             	lea    -0x14(%ebp),%eax
 857351c:	89 04 24             	mov    %eax,(%esp)
 857351f:	e8 34 2c 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 8573524:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8573527:	89 10                	mov    %edx,(%eax)
 8573529:	8d 45 ec             	lea    -0x14(%ebp),%eax
 857352c:	89 04 24             	mov    %eax,(%esp)
 857352f:	e8 24 2c 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 8573534:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8573537:	89 50 04             	mov    %edx,0x4(%eax)
 857353a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 857353d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8573540:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8573543:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8573546:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8573549:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857354c:	01 c2                	add    %eax,%edx
 857354e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8573551:	89 d1                	mov    %edx,%ecx
 8573553:	29 c1                	sub    %eax,%ecx
 8573555:	89 c8                	mov    %ecx,%eax
 8573557:	89 45 e0             	mov    %eax,-0x20(%ebp)
 857355a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 857355d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8573564:	00 
 8573565:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8573568:	89 54 24 04          	mov    %edx,0x4(%esp)
 857356c:	89 04 24             	mov    %eax,(%esp)
 857356f:	e8 d4 2c 00 00       	call   8576248 <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEppEi>
 8573574:	83 ec 04             	sub    $0x4,%esp
 8573577:	8b 55 08             	mov    0x8(%ebp),%edx
 857357a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 857357d:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 8573580:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8573584:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8573587:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 857358b:	89 54 24 04          	mov    %edx,0x4(%esp)
 857358f:	89 04 24             	mov    %eax,(%esp)
 8573592:	e8 e5 2c 00 00       	call   857627c <_ZNSt6vectorI8IntervalSaIS0_EE6insertEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_>
 8573597:	83 ec 04             	sub    $0x4,%esp
 857359a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 857359d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85735a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85735a3:	89 04 24             	mov    %eax,(%esp)
 85735a6:	e8 ff 2d 00 00       	call   85763aa <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEppEv>
 85735ab:	8b 55 08             	mov    0x8(%ebp),%edx
 85735ae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85735b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85735b5:	89 04 24             	mov    %eax,(%esp)
 85735b8:	e8 49 2b 00 00       	call   8576106 <_ZNSt6vectorI8IntervalSaIS0_EE3endEv>
 85735bd:	83 ec 04             	sub    $0x4,%esp
 85735c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85735c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85735c7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85735ca:	89 04 24             	mov    %eax,(%esp)
 85735cd:	e8 5a 2b 00 00       	call   857612c <_ZN9__gnu_cxxneIP8IntervalSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 85735d2:	84 c0                	test   %al,%al
 85735d4:	0f 85 0c fe ff ff    	jne    85733e6 <_ZN11IntervalSet13MinusIntervalERK8Interval+0x52>
 85735da:	c9                   	leave
 85735db:	c3                   	ret

```

```c
// IntervalSet::MinusInterval @ 0x8573394

/* IntervalSet::MinusInterval(Interval const&) */

void __thiscall IntervalSet::MinusInterval(IntervalSet *this,Interval *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> local_10 [12];
  
  __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
  __normal_iterator((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> *)
                    &local_18);
  Interval::Interval((Interval *)&local_20);
  Interval::Interval((Interval *)&local_28);
  Interval::Interval((Interval *)&local_30);
  std::vector<Interval,std::allocator<Interval>>::begin();
  local_18 = local_40[0];
LAB_085735ab:
  do {
    std::vector<Interval,std::allocator<Interval>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,local_14);
    if (!bVar2) {
      return;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
                    operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                               *)&local_18);
    local_30 = *piVar3;
    iVar4 = __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
            operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> *
                      )&local_18);
    local_2c = *(int *)(iVar4 + 4);
    cVar1 = IntersectInterval((Interval *)&local_20,(Interval *)&local_30,param_1);
    if (cVar1 != '\0') {
      if ((local_20 == local_30) && (local_1c == local_2c)) {
        std::vector<Interval,std::allocator<Interval>>::erase(local_40,this,local_18);
        local_18 = local_40[0];
        goto LAB_085735ab;
      }
      if (local_20 == local_30) {
        local_28 = local_20 + local_1c;
        local_24 = (local_30 + local_2c) - local_28;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                        ::operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                                     *)&local_18);
        *piVar3 = local_28;
        iVar4 = __gnu_cxx::
                __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
                operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                           *)&local_18);
        *(int *)(iVar4 + 4) = local_24;
      }
      else if (local_20 + local_1c == local_30 + local_2c) {
        local_28 = local_30;
        local_24 = local_20 - local_30;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                        ::operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                                     *)&local_18);
        *piVar3 = local_28;
        iVar4 = __gnu_cxx::
                __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
                operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                           *)&local_18);
        *(int *)(iVar4 + 4) = local_24;
      }
      else {
        local_28 = local_30;
        local_24 = local_20 - local_30;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                        ::operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                                     *)&local_18);
        *piVar3 = local_28;
        iVar4 = __gnu_cxx::
                __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
                operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                           *)&local_18);
        *(int *)(iVar4 + 4) = local_24;
        local_28 = local_20 + local_1c;
        local_24 = (local_30 + local_2c) - local_28;
        __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
        operator++(local_10,(int)&local_18);
        std::vector<Interval,std::allocator<Interval>>::insert(local_40,this,local_18,&local_28);
        local_18 = local_40[0];
      }
    }
    __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
    operator++((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> *)
               &local_18);
  } while( true );
}

```

---

## Sort

```asm
// === 085735dc IntervalSet::Sort  [0x085735dc-0x857363b] ===
 85735dc:	55                   	push   %ebp
 85735dd:	89 e5                	mov    %esp,%ebp
 85735df:	53                   	push   %ebx
 85735e0:	83 ec 14             	sub    $0x14,%esp
 85735e3:	8b 45 08             	mov    0x8(%ebp),%eax
 85735e6:	89 04 24             	mov    %eax,(%esp)
 85735e9:	e8 d2 2d 00 00       	call   85763c0 <_ZNKSt6vectorI8IntervalSaIS0_EE4sizeEv>
 85735ee:	85 c0                	test   %eax,%eax
 85735f0:	0f 94 c0             	sete   %al
 85735f3:	84 c0                	test   %al,%al
 85735f5:	75 3e                	jne    8573635 <_ZN11IntervalSet4SortEv+0x59>
 85735f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85735fa:	89 04 24             	mov    %eax,(%esp)
 85735fd:	e8 be 2d 00 00       	call   85763c0 <_ZNKSt6vectorI8IntervalSaIS0_EE4sizeEv>
 8573602:	89 c3                	mov    %eax,%ebx
 8573604:	8b 45 08             	mov    0x8(%ebp),%eax
 8573607:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857360e:	00 
 857360f:	89 04 24             	mov    %eax,(%esp)
 8573612:	e8 c5 2d 00 00       	call   85763dc <_ZNSt6vectorI8IntervalSaIS0_EEixEj>
 8573617:	c7 44 24 0c ac 2e 57 	movl   $0x8572eac,0xc(%esp)
 857361e:	08 
 857361f:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8573626:	00 
 8573627:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 857362b:	89 04 24             	mov    %eax,(%esp)
 857362e:	e8 3d b2 b0 ff       	call   807e870 <qsort@plt>
 8573633:	eb 01                	jmp    8573636 <_ZN11IntervalSet4SortEv+0x5a>
 8573635:	90                   	nop
 8573636:	83 c4 14             	add    $0x14,%esp
 8573639:	5b                   	pop    %ebx
 857363a:	5d                   	pop    %ebp
 857363b:	c3                   	ret

```

```c
// IntervalSet::Sort @ 0x85735dc

/* IntervalSet::Sort() */

void __thiscall IntervalSet::Sort(IntervalSet *this)

{
  int iVar1;
  size_t __nmemb;
  void *__base;
  
  iVar1 = std::vector<Interval,std::allocator<Interval>>::size
                    ((vector<Interval,std::allocator<Interval>> *)this);
  if (iVar1 != 0) {
    __nmemb = std::vector<Interval,std::allocator<Interval>>::size
                        ((vector<Interval,std::allocator<Interval>> *)this);
    __base = (void *)std::vector<Interval,std::allocator<Interval>>::operator[]
                               ((vector<Interval,std::allocator<Interval>> *)this,0);
    qsort(__base,__nmemb,8,CompareIntervalForSort);
  }
  return;
}

```

