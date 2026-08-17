# secretshop__SHOPPER

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## BuyItem

```asm
// === 08ab13e8 secretshop::SHOPPER::BuyItem  [0x08ab13e8-0x8ab14b7] ===
 8ab13e8:	55                   	push   %ebp
 8ab13e9:	89 e5                	mov    %esp,%ebp
 8ab13eb:	83 ec 48             	sub    $0x48,%esp
 8ab13ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab13f1:	89 04 24             	mov    %eax,(%esp)
 8ab13f4:	e8 9b 02 00 00       	call   8ab1694 <_ZN9__gnu_cxx17__normal_iteratorIPN10secretshop8BUY_INFOESt6vectorIS2_SaIS2_EEEC1Ev>
 8ab13f9:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab13fc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab13ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab1403:	89 04 24             	mov    %eax,(%esp)
 8ab1406:	e8 bb 02 00 00       	call   8ab16c6 <_ZNSt6vectorIN10secretshop8BUY_INFOESaIS1_EE3endEv>
 8ab140b:	83 ec 04             	sub    $0x4,%esp
 8ab140e:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab1411:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab1414:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab1418:	89 04 24             	mov    %eax,(%esp)
 8ab141b:	e8 82 02 00 00       	call   8ab16a2 <_ZNSt6vectorIN10secretshop8BUY_INFOESaIS1_EE5beginEv>
 8ab1420:	83 ec 04             	sub    $0x4,%esp
 8ab1423:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ab1426:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab1429:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ab142d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8ab1430:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab1434:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ab1437:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab143b:	89 04 24             	mov    %eax,(%esp)
 8ab143e:	e8 a9 02 00 00       	call   8ab16ec <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN10secretshop8BUY_INFOESt6vectorIS3_SaIS3_EEEEiET_S9_S9_RKT0_>
 8ab1443:	83 ec 04             	sub    $0x4,%esp
 8ab1446:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ab1449:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ab144c:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab144f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab1452:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab1456:	89 04 24             	mov    %eax,(%esp)
 8ab1459:	e8 68 02 00 00       	call   8ab16c6 <_ZNSt6vectorIN10secretshop8BUY_INFOESaIS1_EE3endEv>
 8ab145e:	83 ec 04             	sub    $0x4,%esp
 8ab1461:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab1464:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab1468:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab146b:	89 04 24             	mov    %eax,(%esp)
 8ab146e:	e8 cd 02 00 00       	call   8ab1740 <_ZN9__gnu_cxxneIPN10secretshop8BUY_INFOESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8ab1473:	84 c0                	test   %al,%al
 8ab1475:	74 16                	je     8ab148d <_ZN10secretshop7SHOPPER7BuyItemEii+0xa5>
 8ab1477:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab147a:	89 04 24             	mov    %eax,(%esp)
 8ab147d:	e8 ea 02 00 00       	call   8ab176c <_ZNK9__gnu_cxx17__normal_iteratorIPN10secretshop8BUY_INFOESt6vectorIS2_SaIS2_EEEdeEv>
 8ab1482:	8b 50 04             	mov    0x4(%eax),%edx
 8ab1485:	03 55 10             	add    0x10(%ebp),%edx
 8ab1488:	89 50 04             	mov    %edx,0x4(%eax)
 8ab148b:	eb 29                	jmp    8ab14b6 <_ZN10secretshop7SHOPPER7BuyItemEii+0xce>
 8ab148d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab1490:	89 04 24             	mov    %eax,(%esp)
 8ab1493:	e8 6e 01 00 00       	call   8ab1606 <_ZN10secretshop8BUY_INFOC1Ev>
 8ab1498:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab149b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ab149e:	8b 45 10             	mov    0x10(%ebp),%eax
 8ab14a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ab14a4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab14a7:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8ab14aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab14ae:	89 04 24             	mov    %eax,(%esp)
 8ab14b1:	e8 c0 02 00 00       	call   8ab1776 <_ZNSt6vectorIN10secretshop8BUY_INFOESaIS1_EE9push_backERKS1_>
 8ab14b6:	c9                   	leave
 8ab14b7:	c3                   	ret

```

```c
// secretshop::SHOPPER::BuyItem @ 0x8ab13e8

/* secretshop::SHOPPER::BuyItem(int, int) */

void __thiscall secretshop::SHOPPER::BuyItem(SHOPPER *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_30 [3];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  __gnu_cxx::
  __normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
  ::__normal_iterator((__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
                       *)&local_1c);
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::end();
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>,int>
            (local_30,local_14,local_18,&param_1);
  local_1c = local_30[0];
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_10);
  if (bVar1) {
    iVar2 = __gnu_cxx::
            __normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
            ::operator*((__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
                         *)&local_1c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_2;
  }
  else {
    BUY_INFO::BUY_INFO((BUY_INFO *)&local_24);
    local_24 = param_1;
    local_20 = param_2;
    std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::push_back
              ((vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>> *)this,
               (BUY_INFO *)&local_24);
  }
  return;
}

```

---

## GetBuyInfo

```asm
// === 08ab1344 secretshop::SHOPPER::GetBuyInfo  [0x08ab1344-0x8ab13e7] ===
 8ab1344:	55                   	push   %ebp
 8ab1345:	89 e5                	mov    %esp,%ebp
 8ab1347:	83 ec 38             	sub    $0x38,%esp
 8ab134a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab134d:	89 04 24             	mov    %eax,(%esp)
 8ab1350:	e8 3f 03 00 00       	call   8ab1694 <_ZN9__gnu_cxx17__normal_iteratorIPN10secretshop8BUY_INFOESt6vectorIS2_SaIS2_EEEC1Ev>
 8ab1355:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab1358:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab135b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab135f:	89 04 24             	mov    %eax,(%esp)
 8ab1362:	e8 5f 03 00 00       	call   8ab16c6 <_ZNSt6vectorIN10secretshop8BUY_INFOESaIS1_EE3endEv>
 8ab1367:	83 ec 04             	sub    $0x4,%esp
 8ab136a:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab136d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab1370:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab1374:	89 04 24             	mov    %eax,(%esp)
 8ab1377:	e8 26 03 00 00       	call   8ab16a2 <_ZNSt6vectorIN10secretshop8BUY_INFOESaIS1_EE5beginEv>
 8ab137c:	83 ec 04             	sub    $0x4,%esp
 8ab137f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab1382:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab1385:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ab1389:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8ab138c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab1390:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ab1393:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab1397:	89 04 24             	mov    %eax,(%esp)
 8ab139a:	e8 4d 03 00 00       	call   8ab16ec <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN10secretshop8BUY_INFOESt6vectorIS3_SaIS3_EEEEiET_S9_S9_RKT0_>
 8ab139f:	83 ec 04             	sub    $0x4,%esp
 8ab13a2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ab13a5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ab13a8:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab13ab:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab13ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab13b2:	89 04 24             	mov    %eax,(%esp)
 8ab13b5:	e8 0c 03 00 00       	call   8ab16c6 <_ZNSt6vectorIN10secretshop8BUY_INFOESaIS1_EE3endEv>
 8ab13ba:	83 ec 04             	sub    $0x4,%esp
 8ab13bd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab13c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab13c4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab13c7:	89 04 24             	mov    %eax,(%esp)
 8ab13ca:	e8 71 03 00 00       	call   8ab1740 <_ZN9__gnu_cxxneIPN10secretshop8BUY_INFOESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8ab13cf:	84 c0                	test   %al,%al
 8ab13d1:	74 0d                	je     8ab13e0 <_ZN10secretshop7SHOPPER10GetBuyInfoEi+0x9c>
 8ab13d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab13d6:	89 04 24             	mov    %eax,(%esp)
 8ab13d9:	e8 8e 03 00 00       	call   8ab176c <_ZNK9__gnu_cxx17__normal_iteratorIPN10secretshop8BUY_INFOESt6vectorIS2_SaIS2_EEEdeEv>
 8ab13de:	eb 05                	jmp    8ab13e5 <_ZN10secretshop7SHOPPER10GetBuyInfoEi+0xa1>
 8ab13e0:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab13e5:	c9                   	leave
 8ab13e6:	c3                   	ret
 8ab13e7:	90                   	nop

```

```c
// secretshop::SHOPPER::GetBuyInfo @ 0x8ab1344

/* secretshop::SHOPPER::GetBuyInfo(int) */

undefined4 secretshop::SHOPPER::GetBuyInfo(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  __gnu_cxx::
  __normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
  ::__normal_iterator((__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
                       *)&local_1c);
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::end();
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>,int>
            (&local_20,local_14,local_18,&stack0x00000008);
  local_1c = local_20;
  std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_10);
  if (bVar1) {
    uVar2 = __gnu_cxx::
            __normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
            ::operator*((__normal_iterator<secretshop::BUY_INFO*,std::vector<secretshop::BUY_INFO,std::allocator<secretshop::BUY_INFO>>>
                         *)&local_1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

