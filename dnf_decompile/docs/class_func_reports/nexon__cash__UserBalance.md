# nexon__cash__UserBalance

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## addNewTransaction

```asm
// === 081b15ca nexon::cash::UserBalance::addNewTransaction  [0x081b15ca-0x81b15f9] ===
 81b15ca:	55                   	push   %ebp
 81b15cb:	89 e5                	mov    %esp,%ebp
 81b15cd:	83 ec 18             	sub    $0x18,%esp
 81b15d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b15d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b15d7:	c7 04 24 c0 55 bb 08 	movl   $0x8bb55c0,(%esp)
 81b15de:	e8 7d c5 ec ff       	call   807db60 <printf@plt>
 81b15e3:	8b 45 08             	mov    0x8(%ebp),%eax
 81b15e6:	8d 50 08             	lea    0x8(%eax),%edx
 81b15e9:	8d 45 0c             	lea    0xc(%ebp),%eax
 81b15ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b15f0:	89 14 24             	mov    %edx,(%esp)
 81b15f3:	e8 aa 03 00 00       	call   81b19a2 <_ZNSt6vectorIPN5nexon4cash11TransactionESaIS3_EE9push_backERKS3_>
 81b15f8:	c9                   	leave
 81b15f9:	c3                   	ret

```

```c
// nexon::cash::UserBalance::addNewTransaction @ 0x81b15ca

/* nexon::cash::UserBalance::addNewTransaction(nexon::cash::Transaction*) */

void __thiscall nexon::cash::UserBalance::addNewTransaction(UserBalance *this,Transaction *param_1)

{
  printf(" addNewTx: %p\n",param_1);
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::push_back
            ((vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>> *)
             (this + 8),&param_1);
  return;
}

```

---

## expire

```asm
// === 081b147c nexon::cash::UserBalance::expire  [0x081b147c-0x81b152f] ===
 81b147c:	55                   	push   %ebp
 81b147d:	89 e5                	mov    %esp,%ebp
 81b147f:	83 ec 38             	sub    $0x38,%esp
 81b1482:	8b 45 08             	mov    0x8(%ebp),%eax
 81b1485:	8d 50 08             	lea    0x8(%eax),%edx
 81b1488:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b148b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b148f:	89 04 24             	mov    %eax,(%esp)
 81b1492:	e8 e1 01 00 00       	call   81b1678 <_ZNSt6vectorIPN5nexon4cash11TransactionESaIS3_EE5beginEv>
 81b1497:	83 ec 04             	sub    $0x4,%esp
 81b149a:	eb 60                	jmp    81b14fc <_ZN5nexon4cash11UserBalance6expireEv+0x80>
 81b149c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b149f:	89 04 24             	mov    %eax,(%esp)
 81b14a2:	e8 47 02 00 00       	call   81b16ee <_ZNK9__gnu_cxx17__normal_iteratorIPPN5nexon4cash11TransactionESt6vectorIS4_SaIS4_EEEdeEv>
 81b14a7:	8b 00                	mov    (%eax),%eax
 81b14a9:	89 04 24             	mov    %eax,(%esp)
 81b14ac:	e8 a5 01 00 00       	call   81b1656 <_ZNK5nexon4cash11Transaction7expiredEv>
 81b14b1:	84 c0                	test   %al,%al
 81b14b3:	74 3c                	je     81b14f1 <_ZN5nexon4cash11UserBalance6expireEv+0x75>
 81b14b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b14b8:	89 04 24             	mov    %eax,(%esp)
 81b14bb:	e8 2e 02 00 00       	call   81b16ee <_ZNK9__gnu_cxx17__normal_iteratorIPPN5nexon4cash11TransactionESt6vectorIS4_SaIS4_EEEdeEv>
 81b14c0:	8b 00                	mov    (%eax),%eax
 81b14c2:	89 04 24             	mov    %eax,(%esp)
 81b14c5:	e8 ea ee ff ff       	call   81b03b4 <_ZN5nexon4cash11Transaction6cancelEv>
 81b14ca:	8b 45 08             	mov    0x8(%ebp),%eax
 81b14cd:	8d 48 08             	lea    0x8(%eax),%ecx
 81b14d0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81b14d3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81b14d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b14da:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81b14de:	89 04 24             	mov    %eax,(%esp)
 81b14e1:	e8 12 02 00 00       	call   81b16f8 <_ZNSt6vectorIPN5nexon4cash11TransactionESaIS3_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS3_S5_EE>
 81b14e6:	83 ec 04             	sub    $0x4,%esp
 81b14e9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b14ec:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81b14ef:	eb 0b                	jmp    81b14fc <_ZN5nexon4cash11UserBalance6expireEv+0x80>
 81b14f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b14f4:	89 04 24             	mov    %eax,(%esp)
 81b14f7:	e8 e2 02 00 00       	call   81b17de <_ZN9__gnu_cxx17__normal_iteratorIPPN5nexon4cash11TransactionESt6vectorIS4_SaIS4_EEEppEv>
 81b14fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81b14ff:	8d 50 08             	lea    0x8(%eax),%edx
 81b1502:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81b1505:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b1509:	89 04 24             	mov    %eax,(%esp)
 81b150c:	e8 8b 01 00 00       	call   81b169c <_ZNSt6vectorIPN5nexon4cash11TransactionESaIS3_EE3endEv>
 81b1511:	83 ec 04             	sub    $0x4,%esp
 81b1514:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81b1517:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b151b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b151e:	89 04 24             	mov    %eax,(%esp)
 81b1521:	e8 9c 01 00 00       	call   81b16c2 <_ZN9__gnu_cxxneIPPN5nexon4cash11TransactionESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 81b1526:	84 c0                	test   %al,%al
 81b1528:	0f 85 6e ff ff ff    	jne    81b149c <_ZN5nexon4cash11UserBalance6expireEv+0x20>
 81b152e:	c9                   	leave
 81b152f:	c3                   	ret

```

```c
// nexon::cash::UserBalance::expire @ 0x81b147c

/* nexon::cash::UserBalance::expire() */

void __thiscall nexon::cash::UserBalance::expire(UserBalance *this)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 local_20 [3];
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::begin();
  while( true ) {
    std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_14,local_10);
    if (!bVar2) break;
    puVar3 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
             ::operator*((__normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
                          *)&local_14);
    cVar1 = Transaction::expired((Transaction *)*puVar3);
    if (cVar1 == '\0') {
      __gnu_cxx::
      __normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
      ::operator++((__normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
                    *)&local_14);
    }
    else {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
               ::operator*((__normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
                            *)&local_14);
      Transaction::cancel((Transaction *)*puVar3);
      std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::erase
                (local_20,this + 8,local_14);
      local_14 = local_20[0];
    }
  }
  return;
}

```

---

## removeTransaction

```asm
// === 081b1530 nexon::cash::UserBalance::removeTransaction  [0x081b1530-0x81b15c9] ===
 81b1530:	55                   	push   %ebp
 81b1531:	89 e5                	mov    %esp,%ebp
 81b1533:	83 ec 38             	sub    $0x38,%esp
 81b1536:	8b 45 08             	mov    0x8(%ebp),%eax
 81b1539:	8d 50 08             	lea    0x8(%eax),%edx
 81b153c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b153f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b1543:	89 04 24             	mov    %eax,(%esp)
 81b1546:	e8 51 01 00 00       	call   81b169c <_ZNSt6vectorIPN5nexon4cash11TransactionESaIS3_EE3endEv>
 81b154b:	83 ec 04             	sub    $0x4,%esp
 81b154e:	8b 45 08             	mov    0x8(%ebp),%eax
 81b1551:	8d 50 08             	lea    0x8(%eax),%edx
 81b1554:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b1557:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b155b:	89 04 24             	mov    %eax,(%esp)
 81b155e:	e8 39 01 00 00       	call   81b169c <_ZNSt6vectorIPN5nexon4cash11TransactionESaIS3_EE3endEv>
 81b1563:	83 ec 04             	sub    $0x4,%esp
 81b1566:	8b 45 08             	mov    0x8(%ebp),%eax
 81b1569:	8d 50 08             	lea    0x8(%eax),%edx
 81b156c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81b156f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b1573:	89 04 24             	mov    %eax,(%esp)
 81b1576:	e8 fd 00 00 00       	call   81b1678 <_ZNSt6vectorIPN5nexon4cash11TransactionESaIS3_EE5beginEv>
 81b157b:	83 ec 04             	sub    $0x4,%esp
 81b157e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b1581:	8d 55 0c             	lea    0xc(%ebp),%edx
 81b1584:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81b1588:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81b158b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b158f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81b1592:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b1596:	89 04 24             	mov    %eax,(%esp)
 81b1599:	e8 55 02 00 00       	call   81b17f3 <_ZSt6removeIN9__gnu_cxx17__normal_iteratorIPPN5nexon4cash11TransactionESt6vectorIS5_SaIS5_EEEES5_ET_SB_SB_RKT0_>
 81b159e:	83 ec 04             	sub    $0x4,%esp
 81b15a1:	8b 45 08             	mov    0x8(%ebp),%eax
 81b15a4:	8d 48 08             	lea    0x8(%eax),%ecx
 81b15a7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81b15aa:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81b15ad:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81b15b1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81b15b4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b15b8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81b15bc:	89 04 24             	mov    %eax,(%esp)
 81b15bf:	e8 14 03 00 00       	call   81b18d8 <_ZNSt6vectorIPN5nexon4cash11TransactionESaIS3_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS3_S5_EES9_>
 81b15c4:	83 ec 04             	sub    $0x4,%esp
 81b15c7:	c9                   	leave
 81b15c8:	c3                   	ret
 81b15c9:	90                   	nop

```

```c
// nexon::cash::UserBalance::removeTransaction @ 0x81b1530

/* nexon::cash::UserBalance::removeTransaction(nexon::cash::Transaction*) */

void nexon::cash::UserBalance::removeTransaction(Transaction *param_1)

{
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::end();
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::end();
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::begin();
  std::
  remove<__gnu_cxx::__normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>,nexon::cash::Transaction*>
            (&local_18,local_10,local_14,&stack0x00000008);
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::erase
            (local_20,param_1 + 8,local_18,local_1c);
  return;
}

```

