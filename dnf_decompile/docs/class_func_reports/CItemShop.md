# CItemShop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## GetOneADayItemList

```asm
// === 08513076 CItemShop::GetOneADayItemList  [0x08513076-0x8513081] ===
 8513076:	55                   	push   %ebp
 8513077:	89 e5                	mov    %esp,%ebp
 8513079:	8b 45 08             	mov    0x8(%ebp),%eax
 851307c:	83 c0 18             	add    $0x18,%eax
 851307f:	5d                   	pop    %ebp
 8513080:	c3                   	ret
 8513081:	90                   	nop

```

```c
// CItemShop::GetOneADayItemList @ 0x8513076

/* CItemShop::GetOneADayItemList() const */

CItemShop * __thiscall CItemShop::GetOneADayItemList(CItemShop *this)

{
  return this + 0x18;
}

```

---

## IsOneADayShop

```asm
// === 08513082 CItemShop::IsOneADayShop  [0x08513082-0x85130e7] ===
 8513082:	55                   	push   %ebp
 8513083:	89 e5                	mov    %esp,%ebp
 8513085:	83 ec 28             	sub    $0x28,%esp
 8513088:	8b 55 08             	mov    0x8(%ebp),%edx
 851308b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 851308e:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8513091:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8513095:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513099:	89 04 24             	mov    %eax,(%esp)
 851309c:	e8 61 60 00 00       	call   8519102 <_ZNKSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85130a1:	83 ec 04             	sub    $0x4,%esp
 85130a4:	8b 55 08             	mov    0x8(%ebp),%edx
 85130a7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85130aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 85130ae:	89 04 24             	mov    %eax,(%esp)
 85130b1:	e8 78 60 00 00       	call   851912e <_ZNKSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85130b6:	83 ec 04             	sub    $0x4,%esp
 85130b9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85130bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85130c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85130c3:	89 04 24             	mov    %eax,(%esp)
 85130c6:	e8 89 60 00 00       	call   8519154 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi14ItemShopScriptEEneERKS4_>
 85130cb:	84 c0                	test   %al,%al
 85130cd:	74 11                	je     85130e0 <_ZNK9CItemShop13IsOneADayShopEi+0x5e>
 85130cf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85130d2:	89 04 24             	mov    %eax,(%esp)
 85130d5:	e8 8e 60 00 00       	call   8519168 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi14ItemShopScriptEEptEv>
 85130da:	0f b6 40 48          	movzbl 0x48(%eax),%eax
 85130de:	eb 05                	jmp    85130e5 <_ZNK9CItemShop13IsOneADayShopEi+0x63>
 85130e0:	b8 00 00 00 00       	mov    $0x0,%eax
 85130e5:	c9                   	leave
 85130e6:	c3                   	ret
 85130e7:	90                   	nop

```

```c
// CItemShop::IsOneADayShop @ 0x8513082

/* CItemShop::IsOneADayShop(int) const */

undefined1 CItemShop::IsOneADayShop(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,ItemShopScript>> local_14 [4];
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_10 [12];
  
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  find((int *)local_14);
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,ItemShopScript>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,ItemShopScript>>::operator->(local_14);
    uVar2 = *(undefined1 *)(iVar3 + 0x48);
  }
  return uVar2;
}

```

---

## checkLimitNpcBuyItemList

```asm
// === 08513580 CItemShop::checkLimitNpcBuyItemList  [0x08513580-0x85136ab] ===
 8513580:	55                   	push   %ebp
 8513581:	89 e5                	mov    %esp,%ebp
 8513583:	83 ec 38             	sub    $0x38,%esp
 8513586:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513589:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 851358c:	8b 55 08             	mov    0x8(%ebp),%edx
 851358f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8513592:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8513595:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8513599:	89 54 24 04          	mov    %edx,0x4(%esp)
 851359d:	89 04 24             	mov    %eax,(%esp)
 85135a0:	e8 29 5a 00 00       	call   8518fce <_ZNSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85135a5:	83 ec 04             	sub    $0x4,%esp
 85135a8:	8b 55 08             	mov    0x8(%ebp),%edx
 85135ab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85135ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 85135b2:	89 04 24             	mov    %eax,(%esp)
 85135b5:	e8 40 5a 00 00       	call   8518ffa <_ZNSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85135ba:	83 ec 04             	sub    $0x4,%esp
 85135bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85135c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85135c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85135c7:	89 04 24             	mov    %eax,(%esp)
 85135ca:	e8 51 5a 00 00       	call   8519020 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEeqERKS4_>
 85135cf:	84 c0                	test   %al,%al
 85135d1:	74 0a                	je     85135dd <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0x5d>
 85135d3:	b8 00 00 00 00       	mov    $0x0,%eax
 85135d8:	e9 cd 00 00 00       	jmp    85136aa <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0x12a>
 85135dd:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 85135e1:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 85135e5:	0f 85 ba 00 00 00    	jne    85136a5 <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0x125>
 85135eb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85135ee:	89 04 24             	mov    %eax,(%esp)
 85135f1:	e8 3e 5a 00 00       	call   8519034 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEptEv>
 85135f6:	8d 50 30             	lea    0x30(%eax),%edx
 85135f9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85135fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513600:	89 04 24             	mov    %eax,(%esp)
 8513603:	e8 40 ac b7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8513608:	83 ec 04             	sub    $0x4,%esp
 851360b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 851360e:	89 04 24             	mov    %eax,(%esp)
 8513611:	e8 1e 5a 00 00       	call   8519034 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEptEv>
 8513616:	8d 50 30             	lea    0x30(%eax),%edx
 8513619:	8d 45 d8             	lea    -0x28(%ebp),%eax
 851361c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513620:	89 04 24             	mov    %eax,(%esp)
 8513623:	e8 44 ac b7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8513628:	83 ec 04             	sub    $0x4,%esp
 851362b:	eb 48                	jmp    8513675 <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0xf5>
 851362d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8513630:	89 04 24             	mov    %eax,(%esp)
 8513633:	e8 94 b1 b7 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8513638:	89 45 f4             	mov    %eax,-0xc(%ebp)
 851363b:	eb 15                	jmp    8513652 <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0xd2>
 851363d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8513640:	8b 00                	mov    (%eax),%eax
 8513642:	3b 45 10             	cmp    0x10(%ebp),%eax
 8513645:	75 07                	jne    851364e <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0xce>
 8513647:	b8 01 00 00 00       	mov    $0x1,%eax
 851364c:	eb 5c                	jmp    85136aa <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0x12a>
 851364e:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8513652:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8513656:	75 e5                	jne    851363d <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0xbd>
 8513658:	8d 45 ec             	lea    -0x14(%ebp),%eax
 851365b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8513662:	00 
 8513663:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8513666:	89 54 24 04          	mov    %edx,0x4(%esp)
 851366a:	89 04 24             	mov    %eax,(%esp)
 851366d:	e8 94 e2 e2 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 8513672:	83 ec 04             	sub    $0x4,%esp
 8513675:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8513678:	89 44 24 04          	mov    %eax,0x4(%esp)
 851367c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 851367f:	89 04 24             	mov    %eax,(%esp)
 8513682:	e8 db 6d bd ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8513687:	84 c0                	test   %al,%al
 8513689:	74 11                	je     851369c <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0x11c>
 851368b:	80 75 f3 01          	xorb   $0x1,-0xd(%ebp)
 851368f:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8513693:	74 07                	je     851369c <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0x11c>
 8513695:	b8 01 00 00 00       	mov    $0x1,%eax
 851369a:	eb 05                	jmp    85136a1 <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0x121>
 851369c:	b8 00 00 00 00       	mov    $0x0,%eax
 85136a1:	84 c0                	test   %al,%al
 85136a3:	75 88                	jne    851362d <_ZN9CItemShop24checkLimitNpcBuyItemListEjm+0xad>
 85136a5:	b8 00 00 00 00       	mov    $0x0,%eax
 85136aa:	c9                   	leave
 85136ab:	c3                   	ret

```

```c
// CItemShop::checkLimitNpcBuyItemList @ 0x8513580

/* CItemShop::checkLimitNpcBuyItemList(unsigned int, unsigned long) */

undefined4 __thiscall
CItemShop::checkLimitNpcBuyItemList(CItemShop *this,uint param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  __normal_iterator local_2c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_28 [4];
  _Rb_tree_iterator<std::pair<int_const,ItemShopScript>> local_24 [4];
  uint local_20;
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [7];
  byte local_11;
  ulong *local_10;
  
  local_20 = param_1;
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  find((int *)local_24);
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator==
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    local_11 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->(local_24);
    std::vector<int,std::allocator<int>>::begin();
    std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->(local_24);
    std::vector<int,std::allocator<int>>::end();
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_28,local_2c);
      if ((bVar2) && (local_11 = local_11 ^ 1, local_11 != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      local_10 = (ulong *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_28);
      while (local_11 != 0) {
        if (*local_10 == param_2) {
          return 1;
        }
        local_11 = 0;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_28);
    }
  }
  return 0;
}

```

---

## checkValidShopItem

```asm
// === 08512cda CItemShop::checkValidShopItem  [0x08512cda-0x8512e05] ===
 8512cda:	55                   	push   %ebp
 8512cdb:	89 e5                	mov    %esp,%ebp
 8512cdd:	83 ec 38             	sub    $0x38,%esp
 8512ce0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8512ce3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8512ce6:	8b 55 08             	mov    0x8(%ebp),%edx
 8512ce9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512cec:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8512cef:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8512cf3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512cf7:	89 04 24             	mov    %eax,(%esp)
 8512cfa:	e8 cf 62 00 00       	call   8518fce <_ZNSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8512cff:	83 ec 04             	sub    $0x4,%esp
 8512d02:	8b 55 08             	mov    0x8(%ebp),%edx
 8512d05:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8512d08:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512d0c:	89 04 24             	mov    %eax,(%esp)
 8512d0f:	e8 e6 62 00 00       	call   8518ffa <_ZNSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8512d14:	83 ec 04             	sub    $0x4,%esp
 8512d17:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8512d1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512d1e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512d21:	89 04 24             	mov    %eax,(%esp)
 8512d24:	e8 f7 62 00 00       	call   8519020 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEeqERKS4_>
 8512d29:	84 c0                	test   %al,%al
 8512d2b:	74 0a                	je     8512d37 <_ZN9CItemShop18checkValidShopItemEjm+0x5d>
 8512d2d:	b8 00 00 00 00       	mov    $0x0,%eax
 8512d32:	e9 cd 00 00 00       	jmp    8512e04 <_ZN9CItemShop18checkValidShopItemEjm+0x12a>
 8512d37:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8512d3b:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8512d3f:	0f 85 ba 00 00 00    	jne    8512dff <_ZN9CItemShop18checkValidShopItemEjm+0x125>
 8512d45:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512d48:	89 04 24             	mov    %eax,(%esp)
 8512d4b:	e8 e4 62 00 00       	call   8519034 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEptEv>
 8512d50:	8d 50 18             	lea    0x18(%eax),%edx
 8512d53:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8512d56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512d5a:	89 04 24             	mov    %eax,(%esp)
 8512d5d:	e8 e6 b4 b7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8512d62:	83 ec 04             	sub    $0x4,%esp
 8512d65:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512d68:	89 04 24             	mov    %eax,(%esp)
 8512d6b:	e8 c4 62 00 00       	call   8519034 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEptEv>
 8512d70:	8d 50 18             	lea    0x18(%eax),%edx
 8512d73:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8512d76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512d7a:	89 04 24             	mov    %eax,(%esp)
 8512d7d:	e8 ea b4 b7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8512d82:	83 ec 04             	sub    $0x4,%esp
 8512d85:	eb 48                	jmp    8512dcf <_ZN9CItemShop18checkValidShopItemEjm+0xf5>
 8512d87:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8512d8a:	89 04 24             	mov    %eax,(%esp)
 8512d8d:	e8 3a ba b7 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8512d92:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8512d95:	eb 15                	jmp    8512dac <_ZN9CItemShop18checkValidShopItemEjm+0xd2>
 8512d97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512d9a:	8b 00                	mov    (%eax),%eax
 8512d9c:	3b 45 10             	cmp    0x10(%ebp),%eax
 8512d9f:	75 07                	jne    8512da8 <_ZN9CItemShop18checkValidShopItemEjm+0xce>
 8512da1:	b8 01 00 00 00       	mov    $0x1,%eax
 8512da6:	eb 5c                	jmp    8512e04 <_ZN9CItemShop18checkValidShopItemEjm+0x12a>
 8512da8:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8512dac:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8512db0:	75 e5                	jne    8512d97 <_ZN9CItemShop18checkValidShopItemEjm+0xbd>
 8512db2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8512db5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8512dbc:	00 
 8512dbd:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8512dc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512dc4:	89 04 24             	mov    %eax,(%esp)
 8512dc7:	e8 3a eb e2 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 8512dcc:	83 ec 04             	sub    $0x4,%esp
 8512dcf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8512dd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512dd6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8512dd9:	89 04 24             	mov    %eax,(%esp)
 8512ddc:	e8 81 76 bd ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8512de1:	84 c0                	test   %al,%al
 8512de3:	74 11                	je     8512df6 <_ZN9CItemShop18checkValidShopItemEjm+0x11c>
 8512de5:	80 75 f3 01          	xorb   $0x1,-0xd(%ebp)
 8512de9:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8512ded:	74 07                	je     8512df6 <_ZN9CItemShop18checkValidShopItemEjm+0x11c>
 8512def:	b8 01 00 00 00       	mov    $0x1,%eax
 8512df4:	eb 05                	jmp    8512dfb <_ZN9CItemShop18checkValidShopItemEjm+0x121>
 8512df6:	b8 00 00 00 00       	mov    $0x0,%eax
 8512dfb:	84 c0                	test   %al,%al
 8512dfd:	75 88                	jne    8512d87 <_ZN9CItemShop18checkValidShopItemEjm+0xad>
 8512dff:	b8 00 00 00 00       	mov    $0x0,%eax
 8512e04:	c9                   	leave
 8512e05:	c3                   	ret

```

```c
// CItemShop::checkValidShopItem @ 0x8512cda

/* CItemShop::checkValidShopItem(unsigned int, unsigned long) */

undefined4 __thiscall CItemShop::checkValidShopItem(CItemShop *this,uint param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  __normal_iterator local_2c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_28 [4];
  _Rb_tree_iterator<std::pair<int_const,ItemShopScript>> local_24 [4];
  uint local_20;
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [7];
  byte local_11;
  ulong *local_10;
  
  local_20 = param_1;
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  find((int *)local_24);
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator==
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    local_11 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->(local_24);
    std::vector<int,std::allocator<int>>::begin();
    std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->(local_24);
    std::vector<int,std::allocator<int>>::end();
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_28,local_2c);
      if ((bVar2) && (local_11 = local_11 ^ 1, local_11 != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      local_10 = (ulong *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_28);
      while (local_11 != 0) {
        if (*local_10 == param_2) {
          return 1;
        }
        local_11 = 0;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_28);
    }
  }
  return 0;
}

```

---

## loadItemShopFiles

```asm
// === 08512aa0 CItemShop::loadItemShopFiles  [0x08512aa0-0x8512cd9] ===
 8512aa0:	55                   	push   %ebp
 8512aa1:	89 e5                	mov    %esp,%ebp
 8512aa3:	56                   	push   %esi
 8512aa4:	53                   	push   %ebx
 8512aa5:	81 ec 30 01 00 00    	sub    $0x130,%esp
 8512aab:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8512ab1:	89 04 24             	mov    %eax,(%esp)
 8512ab4:	e8 0f 16 00 00       	call   85140c8 <_ZN14ItemShopScriptC1Ev>
 8512ab9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8512ac0:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8512ac6:	89 04 24             	mov    %eax,(%esp)
 8512ac9:	e8 0a 12 da ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 8512ace:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8512ad4:	c7 44 24 04 60 e2 4f 	movl   $0x94fe260,0x4(%esp)
 8512adb:	09 
 8512adc:	89 04 24             	mov    %eax,(%esp)
 8512adf:	e8 0e 36 bd ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8512ae4:	83 ec 04             	sub    $0x4,%esp
 8512ae7:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 8512aed:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8512af3:	e9 67 01 00 00       	jmp    8512c5f <_ZN9CItemShop17loadItemShopFilesEv+0x1bf>
 8512af8:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8512afe:	89 04 24             	mov    %eax,(%esp)
 8512b01:	e8 b2 36 bd ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8512b06:	83 c0 04             	add    $0x4,%eax
 8512b09:	89 04 24             	mov    %eax,(%esp)
 8512b0c:	e8 df 39 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8512b11:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8512b14:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8512b18:	0f 84 7c 01 00 00    	je     8512c9a <_ZN9CItemShop17loadItemShopFilesEv+0x1fa>
 8512b1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512b21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512b25:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8512b2b:	89 04 24             	mov    %eax,(%esp)
 8512b2e:	e8 81 9a 4c 00       	call   89dc5b4 <_Z20importItemShopScriptP14ItemShopScriptPKc>
 8512b33:	83 f0 01             	xor    $0x1,%eax
 8512b36:	84 c0                	test   %al,%al
 8512b38:	74 3d                	je     8512b77 <_ZN9CItemShop17loadItemShopFilesEv+0xd7>
 8512b3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512b3d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8512b41:	c7 44 24 10 40 5c c9 	movl   $0x8c95c40,0x10(%esp)
 8512b48:	08 
 8512b49:	c7 44 24 0c 26 0c 00 	movl   $0xc26,0xc(%esp)
 8512b50:	00 
 8512b51:	c7 44 24 08 a0 6b c9 	movl   $0x8c96ba0,0x8(%esp)
 8512b58:	08 
 8512b59:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8512b60:	08 
 8512b61:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8512b68:	e8 9d 10 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8512b6d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8512b72:	e9 49 01 00 00       	jmp    8512cc0 <_ZN9CItemShop17loadItemShopFilesEv+0x220>
 8512b77:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512b7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512b7e:	c7 04 24 60 e2 4f 09 	movl   $0x94fe260,(%esp)
 8512b85:	e8 cc 82 3a 00       	call   88bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>
 8512b8a:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 8512b90:	0f b6 85 3c ff ff ff 	movzbl -0xc4(%ebp),%eax
 8512b97:	84 c0                	test   %al,%al
 8512b99:	74 15                	je     8512bb0 <_ZN9CItemShop17loadItemShopFilesEv+0x110>
 8512b9b:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8512ba1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512ba5:	8b 45 08             	mov    0x8(%ebp),%eax
 8512ba8:	89 04 24             	mov    %eax,(%esp)
 8512bab:	e8 ec 03 00 00       	call   8512f9c <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript>
 8512bb0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8512bb3:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 8512bb9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8512bbd:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 8512bc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512bc7:	89 04 24             	mov    %eax,(%esp)
 8512bca:	e8 1f 62 00 00       	call   8518dee <_ZSt9make_pairIRiR14ItemShopScriptESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8512bcf:	83 ec 04             	sub    $0x4,%esp
 8512bd2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8512bd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512bd9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8512bdf:	89 04 24             	mov    %eax,(%esp)
 8512be2:	e8 81 63 00 00       	call   8518f68 <_ZNSt4pairIKi14ItemShopScriptEC1IiS1_EEOS_IT_T0_E>
 8512be7:	8b 55 08             	mov    0x8(%ebp),%edx
 8512bea:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8512bf0:	8d 8d 54 ff ff ff    	lea    -0xac(%ebp),%ecx
 8512bf6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8512bfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512bfe:	89 04 24             	mov    %eax,(%esp)
 8512c01:	e8 9c 63 00 00       	call   8518fa2 <_ZNSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8512c06:	83 ec 04             	sub    $0x4,%esp
 8512c09:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8512c0f:	89 04 24             	mov    %eax,(%esp)
 8512c12:	e8 17 dc eb ff       	call   83d082e <_ZNSt4pairIKi14ItemShopScriptED1Ev>
 8512c17:	eb 2d                	jmp    8512c46 <_ZN9CItemShop17loadItemShopFilesEv+0x1a6>
 8512c19:	89 d3                	mov    %edx,%ebx
 8512c1b:	89 c6                	mov    %eax,%esi
 8512c1d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8512c23:	89 04 24             	mov    %eax,(%esp)
 8512c26:	e8 03 dc eb ff       	call   83d082e <_ZNSt4pairIKi14ItemShopScriptED1Ev>
 8512c2b:	89 f0                	mov    %esi,%eax
 8512c2d:	89 da                	mov    %ebx,%edx
 8512c2f:	eb 00                	jmp    8512c31 <_ZN9CItemShop17loadItemShopFilesEv+0x191>
 8512c31:	89 d3                	mov    %edx,%ebx
 8512c33:	89 c6                	mov    %eax,%esi
 8512c35:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8512c38:	89 04 24             	mov    %eax,(%esp)
 8512c3b:	e8 d4 2e 00 00       	call   8515b14 <_ZNSt4pairIi14ItemShopScriptED1Ev>
 8512c40:	89 f0                	mov    %esi,%eax
 8512c42:	89 da                	mov    %ebx,%edx
 8512c44:	eb 5c                	jmp    8512ca2 <_ZN9CItemShop17loadItemShopFilesEv+0x202>
 8512c46:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8512c49:	89 04 24             	mov    %eax,(%esp)
 8512c4c:	e8 c3 2e 00 00       	call   8515b14 <_ZNSt4pairIi14ItemShopScriptED1Ev>
 8512c51:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8512c57:	89 04 24             	mov    %eax,(%esp)
 8512c5a:	e8 b1 39 bd ff       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 8512c5f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8512c65:	c7 44 24 04 60 e2 4f 	movl   $0x94fe260,0x4(%esp)
 8512c6c:	09 
 8512c6d:	89 04 24             	mov    %eax,(%esp)
 8512c70:	e8 a3 34 bd ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8512c75:	83 ec 04             	sub    $0x4,%esp
 8512c78:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8512c7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512c82:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8512c88:	89 04 24             	mov    %eax,(%esp)
 8512c8b:	e8 ae 34 bd ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8512c90:	84 c0                	test   %al,%al
 8512c92:	0f 85 60 fe ff ff    	jne    8512af8 <_ZN9CItemShop17loadItemShopFilesEv+0x58>
 8512c98:	eb 01                	jmp    8512c9b <_ZN9CItemShop17loadItemShopFilesEv+0x1fb>
 8512c9a:	90                   	nop
 8512c9b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8512ca0:	eb 1e                	jmp    8512cc0 <_ZN9CItemShop17loadItemShopFilesEv+0x220>
 8512ca2:	89 d3                	mov    %edx,%ebx
 8512ca4:	89 c6                	mov    %eax,%esi
 8512ca6:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8512cac:	89 04 24             	mov    %eax,(%esp)
 8512caf:	e8 b6 da eb ff       	call   83d076a <_ZN14ItemShopScriptD1Ev>
 8512cb4:	89 f0                	mov    %esi,%eax
 8512cb6:	89 da                	mov    %ebx,%edx
 8512cb8:	89 04 24             	mov    %eax,(%esp)
 8512cbb:	e8 90 0a 5d 00       	call   8ae3750 <_Unwind_Resume>
 8512cc0:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8512cc6:	89 04 24             	mov    %eax,(%esp)
 8512cc9:	e8 9c da eb ff       	call   83d076a <_ZN14ItemShopScriptD1Ev>
 8512cce:	89 d8                	mov    %ebx,%eax
 8512cd0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8512cd3:	83 c4 00             	add    $0x0,%esp
 8512cd6:	5b                   	pop    %ebx
 8512cd7:	5e                   	pop    %esi
 8512cd8:	5d                   	pop    %ebp
 8512cd9:	c3                   	ret

```

```c
// CItemShop::loadItemShopFiles @ 0x8512aa0

/* CItemShop::loadItemShopFiles() */

undefined4 __thiscall CItemShop::loadItemShopFiles(CItemShop *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_110;
  undefined4 local_10c [17];
  char local_c8;
  undefined4 local_c0;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_bc [4];
  pair local_b8 [8];
  pair<int_const,ItemShopScript> local_b0 [80];
  pair<int,ItemShopScript> local_60 [80];
  char *local_10;
  
  ItemShopScript::ItemShopScript((ItemShopScript *)local_10c);
  local_10 = (char *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_c0);
                    /* try { // try from 08512adf to 08512bce has its CatchHandler @ 08512ca2 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )&local_110);
  local_c0 = local_110;
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_bc);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_c0,
                       (_Rb_tree_iterator *)local_bc);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_c0);
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = importItemShopScript((ItemShopScript *)local_10c,local_10);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"item.cpp","bool CItemShop::loadItemShopFiles()",0xc26,
                 "ImportEquipmentScript() fail file - %s",local_10);
      uVar3 = 0;
      goto LAB_08512cc0;
    }
    local_10c[0] = STScriptFileList::FindIndexByFullScan
                             ((STScriptFileList *)g_itemShopScriptFileList,local_10);
    if (local_c8 != '\0') {
      setOneADayItemListNo(this,(ItemShopScript *)local_10c);
    }
    std::make_pair<int&,ItemShopScript&>((int *)local_60,(ItemShopScript *)local_10c);
                    /* try { // try from 08512be2 to 08512be6 has its CatchHandler @ 08512c31 */
    std::pair<int_const,ItemShopScript>::pair<int,ItemShopScript>(local_b0,local_60);
                    /* try { // try from 08512c01 to 08512c05 has its CatchHandler @ 08512c19 */
    std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
    ::insert(local_b8);
                    /* try { // try from 08512c12 to 08512c16 has its CatchHandler @ 08512c31 */
    std::pair<int_const,ItemShopScript>::~pair(local_b0);
                    /* try { // try from 08512c4c to 08512c74 has its CatchHandler @ 08512ca2 */
    std::pair<int,ItemShopScript>::~pair(local_60);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_c0);
  }
  uVar3 = 1;
LAB_08512cc0:
  ItemShopScript::~ItemShopScript((ItemShopScript *)local_10c);
  return uVar3;
}

```

---

## setOneADayItemListNo

```asm
// === 08512f9c CItemShop::setOneADayItemListNo  [0x08512f9c-0x8513075] ===
 8512f9c:	55                   	push   %ebp
 8512f9d:	89 e5                	mov    %esp,%ebp
 8512f9f:	83 ec 38             	sub    $0x38,%esp
 8512fa2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8512fa5:	89 04 24             	mov    %eax,(%esp)
 8512fa8:	e8 e1 2c ca ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8512fad:	8b 45 0c             	mov    0xc(%ebp),%eax
 8512fb0:	8b 00                	mov    (%eax),%eax
 8512fb2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8512fb5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8512fbc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8512fc3:	e8 d6 8c bb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8512fc8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8512fcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8512fce:	8b 40 48             	mov    0x48(%eax),%eax
 8512fd1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8512fd4:	89 d1                	mov    %edx,%ecx
 8512fd6:	29 c1                	sub    %eax,%ecx
 8512fd8:	89 c8                	mov    %ecx,%eax
 8512fda:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8512fdd:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8512fe1:	7e 51                	jle    8513034 <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript+0x98>
 8512fe3:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8512fe6:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 8512feb:	89 c8                	mov    %ecx,%eax
 8512fed:	f7 ea                	imul   %edx
 8512fef:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 8512ff2:	89 c2                	mov    %eax,%edx
 8512ff4:	c1 fa 10             	sar    $0x10,%edx
 8512ff7:	89 c8                	mov    %ecx,%eax
 8512ff9:	c1 f8 1f             	sar    $0x1f,%eax
 8512ffc:	89 d1                	mov    %edx,%ecx
 8512ffe:	29 c1                	sub    %eax,%ecx
 8513000:	89 c8                	mov    %ecx,%eax
 8513002:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8513005:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8513009:	78 1a                	js     8513025 <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript+0x89>
 851300b:	8b 45 0c             	mov    0xc(%ebp),%eax
 851300e:	83 c0 38             	add    $0x38,%eax
 8513011:	89 04 24             	mov    %eax,(%esp)
 8513014:	e8 35 ec e7 ff       	call   8391c4e <_ZNKSt6vectorIS_IiSaIiEESaIS1_EE4sizeEv>
 8513019:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 851301c:	7e 07                	jle    8513025 <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript+0x89>
 851301e:	b8 01 00 00 00       	mov    $0x1,%eax
 8513023:	eb 05                	jmp    851302a <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript+0x8e>
 8513025:	b8 00 00 00 00       	mov    $0x0,%eax
 851302a:	84 c0                	test   %al,%al
 851302c:	74 06                	je     8513034 <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript+0x98>
 851302e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8513031:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8513034:	8b 45 08             	mov    0x8(%ebp),%eax
 8513037:	8d 50 18             	lea    0x18(%eax),%edx
 851303a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 851303d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8513041:	89 14 24             	mov    %edx,(%esp)
 8513044:	e8 27 ca df ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8513049:	8b 45 e8             	mov    -0x18(%ebp),%eax
 851304c:	8b 55 0c             	mov    0xc(%ebp),%edx
 851304f:	83 c2 38             	add    $0x38,%edx
 8513052:	89 44 24 04          	mov    %eax,0x4(%esp)
 8513056:	89 14 24             	mov    %edx,(%esp)
 8513059:	e8 78 60 00 00       	call   85190d6 <_ZNSt6vectorIS_IiSaIiEESaIS1_EE2atEj>
 851305e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8513061:	83 c2 14             	add    $0x14,%edx
 8513064:	89 44 24 04          	mov    %eax,0x4(%esp)
 8513068:	89 14 24             	mov    %edx,(%esp)
 851306b:	e8 62 9f bb ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8513070:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8513073:	c9                   	leave
 8513074:	c3                   	ret
 8513075:	90                   	nop

```

```c
// CItemShop::setOneADayItemListNo @ 0x8512f9c

/* CItemShop::setOneADayItemListNo(ItemShopScript&) */

uint __thiscall CItemShop::setOneADayItemListNo(CItemShop *this,ItemShopScript *param_1)

{
  bool bVar1;
  int iVar2;
  vector *pvVar3;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  std::pair<int,int>::pair((pair<int,int> *)&local_20);
  local_20 = *(undefined4 *)param_1;
  local_1c = 0;
  local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14 = local_18 - *(int *)(param_1 + 0x48);
  if (local_14 < 1) goto LAB_08513034;
  local_10 = local_14 / 0x15180;
  if ((int)local_10 < 0) {
LAB_08513025:
    bVar1 = false;
  }
  else {
    iVar2 = std::
            vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            ::size((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                    *)(param_1 + 0x38));
    if (iVar2 <= (int)local_10) goto LAB_08513025;
    bVar1 = true;
  }
  if (bVar1) {
    local_1c = local_10;
  }
LAB_08513034:
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x18),
             (pair *)&local_20);
  pvVar3 = (vector *)
           std::
           vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
           ::at((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                 *)(param_1 + 0x38),local_1c);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(param_1 + 0x14),pvVar3);
  return local_1c;
}

```

---

## testupdateOneADayItemList

```asm
// === 08512f88 CItemShop::testupdateOneADayItemList  [0x08512f88-0x8512f9b] ===
 8512f88:	55                   	push   %ebp
 8512f89:	89 e5                	mov    %esp,%ebp
 8512f8b:	83 ec 18             	sub    $0x18,%esp
 8512f8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8512f91:	89 04 24             	mov    %eax,(%esp)
 8512f94:	e8 ff fe ff ff       	call   8512e98 <_ZN9CItemShop21updateOneADayItemListEv>
 8512f99:	c9                   	leave
 8512f9a:	c3                   	ret
 8512f9b:	90                   	nop

```

```c
// CItemShop::testupdateOneADayItemList @ 0x8512f88

/* CItemShop::testupdateOneADayItemList() */

void __thiscall CItemShop::testupdateOneADayItemList(CItemShop *this)

{
  updateOneADayItemList(this);
  return;
}

```

---

## updateOneADayItemList

```asm
// === 08512e98 CItemShop::updateOneADayItemList  [0x08512e98-0x8512f87] ===
 8512e98:	55                   	push   %ebp
 8512e99:	89 e5                	mov    %esp,%ebp
 8512e9b:	53                   	push   %ebx
 8512e9c:	83 ec 34             	sub    $0x34,%esp
 8512e9f:	8b 55 08             	mov    0x8(%ebp),%edx
 8512ea2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512ea5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512ea9:	89 04 24             	mov    %eax,(%esp)
 8512eac:	e8 cd 61 00 00       	call   851907e <_ZNSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8512eb1:	83 ec 04             	sub    $0x4,%esp
 8512eb4:	8b 55 08             	mov    0x8(%ebp),%edx
 8512eb7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8512eba:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512ebe:	89 04 24             	mov    %eax,(%esp)
 8512ec1:	e8 34 61 00 00       	call   8518ffa <_ZNSt3mapIi14ItemShopScriptSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8512ec6:	83 ec 04             	sub    $0x4,%esp
 8512ec9:	8b 45 08             	mov    0x8(%ebp),%eax
 8512ecc:	83 c0 18             	add    $0x18,%eax
 8512ecf:	89 04 24             	mov    %eax,(%esp)
 8512ed2:	e8 6b 74 c6 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8512ed7:	e9 8d 00 00 00       	jmp    8512f69 <_ZN9CItemShop21updateOneADayItemListEv+0xd1>
 8512edc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512edf:	89 04 24             	mov    %eax,(%esp)
 8512ee2:	e8 4d 61 00 00       	call   8519034 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEptEv>
 8512ee7:	0f b6 40 48          	movzbl 0x48(%eax),%eax
 8512eeb:	84 c0                	test   %al,%al
 8512eed:	74 6f                	je     8512f5e <_ZN9CItemShop21updateOneADayItemListEv+0xc6>
 8512eef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512ef2:	89 04 24             	mov    %eax,(%esp)
 8512ef5:	e8 3a 61 00 00       	call   8519034 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEptEv>
 8512efa:	83 c0 04             	add    $0x4,%eax
 8512efd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512f01:	8b 45 08             	mov    0x8(%ebp),%eax
 8512f04:	89 04 24             	mov    %eax,(%esp)
 8512f07:	e8 90 00 00 00       	call   8512f9c <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript>
 8512f0c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8512f0f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512f12:	89 04 24             	mov    %eax,(%esp)
 8512f15:	e8 1a 61 00 00       	call   8519034 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEptEv>
 8512f1a:	8b 58 04             	mov    0x4(%eax),%ebx
 8512f1d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8512f24:	00 
 8512f25:	c7 44 24 08 69 0c 00 	movl   $0xc69,0x8(%esp)
 8512f2c:	00 
 8512f2d:	c7 44 24 04 60 6b c9 	movl   $0x8c96b60,0x4(%esp)
 8512f34:	08 
 8512f35:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8512f38:	89 04 24             	mov    %eax,(%esp)
 8512f3b:	e8 d8 c7 03 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8512f40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512f43:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8512f47:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8512f4b:	c7 44 24 04 cc 5e c9 	movl   $0x8c95ecc,0x4(%esp)
 8512f52:	08 
 8512f53:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8512f56:	89 04 24             	mov    %eax,(%esp)
 8512f59:	e8 2a c8 03 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8512f5e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512f61:	89 04 24             	mov    %eax,(%esp)
 8512f64:	e8 4f 61 00 00       	call   85190b8 <_ZNSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEppEv>
 8512f69:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8512f6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512f70:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512f73:	89 04 24             	mov    %eax,(%esp)
 8512f76:	e8 29 61 00 00       	call   85190a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14ItemShopScriptEEneERKS4_>
 8512f7b:	84 c0                	test   %al,%al
 8512f7d:	0f 85 59 ff ff ff    	jne    8512edc <_ZN9CItemShop21updateOneADayItemListEv+0x44>
 8512f83:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8512f86:	c9                   	leave
 8512f87:	c3                   	ret

```

```c
// CItemShop::updateOneADayItemList @ 0x8512e98

/* CItemShop::updateOneADayItemList() */

void __thiscall CItemShop::updateOneADayItemList(CItemShop *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_28 [4];
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_24 [4];
  cMyTrace local_20 [16];
  undefined4 local_10;
  
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  begin(local_24);
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  end(local_28);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x18));
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24,
                       (_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24);
    if (*(char *)(iVar3 + 0x48) != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24);
      local_10 = setOneADayItemListNo(this,(ItemShopScript *)(iVar3 + 4));
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24);
      uVar1 = *(undefined4 *)(iVar3 + 4);
      cMyTrace::cMyTrace(local_20,"void CItemShop::updateOneADayItemList()",0xc69,0);
      cMyTrace::operator()(local_20,"updateOneADayItemList shop_id:%d list_no:%d",uVar1,local_10);
    }
    std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24);
  }
  return;
}

```

