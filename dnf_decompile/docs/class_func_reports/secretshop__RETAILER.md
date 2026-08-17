# secretshop__RETAILER

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## GetSaleInfo

```asm
// === 08ab12a0 secretshop::RETAILER::GetSaleInfo  [0x08ab12a0-0x8ab1343] ===
 8ab12a0:	55                   	push   %ebp
 8ab12a1:	89 e5                	mov    %esp,%ebp
 8ab12a3:	83 ec 38             	sub    $0x38,%esp
 8ab12a6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab12a9:	89 04 24             	mov    %eax,(%esp)
 8ab12ac:	e8 d5 03 00 00       	call   8ab1686 <_ZN9__gnu_cxx17__normal_iteratorIPN10secretshop9SALE_INFOESt6vectorIS2_SaIS2_EEEC1Ev>
 8ab12b1:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab12b4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab12b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab12bb:	89 04 24             	mov    %eax,(%esp)
 8ab12be:	e8 15 b0 b4 ff       	call   85fc2d8 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE3endEv>
 8ab12c3:	83 ec 04             	sub    $0x4,%esp
 8ab12c6:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab12c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab12cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab12d0:	89 04 24             	mov    %eax,(%esp)
 8ab12d3:	e8 dc af b4 ff       	call   85fc2b4 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE5beginEv>
 8ab12d8:	83 ec 04             	sub    $0x4,%esp
 8ab12db:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab12de:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ab12e1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ab12e5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8ab12e8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab12ec:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ab12ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab12f3:	89 04 24             	mov    %eax,(%esp)
 8ab12f6:	e8 e2 26 fd ff       	call   8a839dd <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN10secretshop9SALE_INFOESt6vectorIS3_SaIS3_EEEEiET_S9_S9_RKT0_>
 8ab12fb:	83 ec 04             	sub    $0x4,%esp
 8ab12fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ab1301:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ab1304:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab1307:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab130a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab130e:	89 04 24             	mov    %eax,(%esp)
 8ab1311:	e8 c2 af b4 ff       	call   85fc2d8 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE3endEv>
 8ab1316:	83 ec 04             	sub    $0x4,%esp
 8ab1319:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab131c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab1320:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab1323:	89 04 24             	mov    %eax,(%esp)
 8ab1326:	e8 d3 af b4 ff       	call   85fc2fe <_ZN9__gnu_cxxneIPN10secretshop9SALE_INFOESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8ab132b:	84 c0                	test   %al,%al
 8ab132d:	74 0d                	je     8ab133c <_ZN10secretshop8RETAILER11GetSaleInfoEi+0x9c>
 8ab132f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab1332:	89 04 24             	mov    %eax,(%esp)
 8ab1335:	e8 f0 af b4 ff       	call   85fc32a <_ZNK9__gnu_cxx17__normal_iteratorIPN10secretshop9SALE_INFOESt6vectorIS2_SaIS2_EEEdeEv>
 8ab133a:	eb 05                	jmp    8ab1341 <_ZN10secretshop8RETAILER11GetSaleInfoEi+0xa1>
 8ab133c:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab1341:	c9                   	leave
 8ab1342:	c3                   	ret
 8ab1343:	90                   	nop

```

```c
// secretshop::RETAILER::GetSaleInfo @ 0x8ab12a0

/* secretshop::RETAILER::GetSaleInfo(int) */

undefined4 secretshop::RETAILER::GetSaleInfo(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  __gnu_cxx::
  __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
  ::__normal_iterator((__normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
                       *)&local_1c);
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>,int>
            (&local_20,local_14,local_18,&stack0x00000008);
  local_1c = local_20;
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_10);
  if (bVar1) {
    uVar2 = __gnu_cxx::
            __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
            ::operator*((__normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
                         *)&local_1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

