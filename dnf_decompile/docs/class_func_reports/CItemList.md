# CItemList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## CItemList

```asm
// === 08510d12 CItemList::CItemList  [0x08510d12-0x8510df5] ===
 8510d12:	55                   	push   %ebp
 8510d13:	89 e5                	mov    %esp,%ebp
 8510d15:	56                   	push   %esi
 8510d16:	53                   	push   %ebx
 8510d17:	83 ec 10             	sub    $0x10,%esp
 8510d1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d1d:	83 c0 04             	add    $0x4,%eax
 8510d20:	89 04 24             	mov    %eax,(%esp)
 8510d23:	e8 e6 75 00 00       	call   851830e <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 8510d28:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d2b:	83 c0 18             	add    $0x18,%eax
 8510d2e:	89 04 24             	mov    %eax,(%esp)
 8510d31:	e8 ac 76 00 00       	call   85183e2 <_ZN9__gnu_cxx8hash_mapIiP14CCeraShopGoodsNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 8510d36:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d39:	83 c0 2c             	add    $0x2c,%eax
 8510d3c:	89 04 24             	mov    %eax,(%esp)
 8510d3f:	e8 72 77 00 00       	call   85184b6 <_ZN9__gnu_cxx8hash_mapIjiNS_4hashIjEESt8equal_toIjESaIiEEC1Ev>
 8510d44:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d47:	83 c0 40             	add    $0x40,%eax
 8510d4a:	89 04 24             	mov    %eax,(%esp)
 8510d4d:	e8 38 78 00 00       	call   851858a <_ZNSt6vectorI21stCeraShopBonusInfo_tSaIS0_EEC1Ev>
 8510d52:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d55:	83 c0 50             	add    $0x50,%eax
 8510d58:	89 04 24             	mov    %eax,(%esp)
 8510d5b:	e8 9c 78 00 00       	call   85185fc <_ZNSt6vectorI9BonusItemSaIS0_EEC1Ev>
 8510d60:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d63:	83 c0 5c             	add    $0x5c,%eax
 8510d66:	89 04 24             	mov    %eax,(%esp)
 8510d69:	e8 e0 47 e7 ff       	call   838554e <_ZNSt3mapImiSt4lessImESaISt4pairIKmiEEEC1Ev>
 8510d6e:	eb 7e                	jmp    8510dee <_ZN9CItemListC1Ev+0xdc>
 8510d70:	89 d3                	mov    %edx,%ebx
 8510d72:	89 c6                	mov    %eax,%esi
 8510d74:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d77:	83 c0 50             	add    $0x50,%eax
 8510d7a:	89 04 24             	mov    %eax,(%esp)
 8510d7d:	e8 8e 78 00 00       	call   8518610 <_ZNSt6vectorI9BonusItemSaIS0_EED1Ev>
 8510d82:	89 f0                	mov    %esi,%eax
 8510d84:	89 da                	mov    %ebx,%edx
 8510d86:	eb 00                	jmp    8510d88 <_ZN9CItemListC1Ev+0x76>
 8510d88:	89 d3                	mov    %edx,%ebx
 8510d8a:	89 c6                	mov    %eax,%esi
 8510d8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d8f:	83 c0 40             	add    $0x40,%eax
 8510d92:	89 04 24             	mov    %eax,(%esp)
 8510d95:	e8 04 78 00 00       	call   851859e <_ZNSt6vectorI21stCeraShopBonusInfo_tSaIS0_EED1Ev>
 8510d9a:	89 f0                	mov    %esi,%eax
 8510d9c:	89 da                	mov    %ebx,%edx
 8510d9e:	eb 00                	jmp    8510da0 <_ZN9CItemListC1Ev+0x8e>
 8510da0:	89 d3                	mov    %edx,%ebx
 8510da2:	89 c6                	mov    %eax,%esi
 8510da4:	8b 45 08             	mov    0x8(%ebp),%eax
 8510da7:	83 c0 2c             	add    $0x2c,%eax
 8510daa:	89 04 24             	mov    %eax,(%esp)
 8510dad:	e8 f8 44 00 00       	call   85152aa <_ZN9__gnu_cxx8hash_mapIjiNS_4hashIjEESt8equal_toIjESaIiEED1Ev>
 8510db2:	89 f0                	mov    %esi,%eax
 8510db4:	89 da                	mov    %ebx,%edx
 8510db6:	eb 00                	jmp    8510db8 <_ZN9CItemListC1Ev+0xa6>
 8510db8:	89 d3                	mov    %edx,%ebx
 8510dba:	89 c6                	mov    %eax,%esi
 8510dbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8510dbf:	83 c0 18             	add    $0x18,%eax
 8510dc2:	89 04 24             	mov    %eax,(%esp)
 8510dc5:	e8 cc 44 00 00       	call   8515296 <_ZN9__gnu_cxx8hash_mapIiP14CCeraShopGoodsNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8510dca:	89 f0                	mov    %esi,%eax
 8510dcc:	89 da                	mov    %ebx,%edx
 8510dce:	eb 00                	jmp    8510dd0 <_ZN9CItemListC1Ev+0xbe>
 8510dd0:	89 d3                	mov    %edx,%ebx
 8510dd2:	89 c6                	mov    %eax,%esi
 8510dd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8510dd7:	83 c0 04             	add    $0x4,%eax
 8510dda:	89 04 24             	mov    %eax,(%esp)
 8510ddd:	e8 a0 44 00 00       	call   8515282 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8510de2:	89 f0                	mov    %esi,%eax
 8510de4:	89 da                	mov    %ebx,%edx
 8510de6:	89 04 24             	mov    %eax,(%esp)
 8510de9:	e8 62 29 5d 00       	call   8ae3750 <_Unwind_Resume>
 8510dee:	83 c4 10             	add    $0x10,%esp
 8510df1:	5b                   	pop    %ebx
 8510df2:	5e                   	pop    %esi
 8510df3:	5d                   	pop    %ebp
 8510df4:	c3                   	ret
 8510df5:	90                   	nop

```

```c
// CItemList::CItemList @ 0x8510d12

/* CItemList::CItemList() */

void __thiscall CItemList::CItemList(CItemList *this)

{
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  hash_map((hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *)
           (this + 4));
                    /* try { // try from 08510d31 to 08510d35 has its CatchHandler @ 08510dd0 */
  __gnu_cxx::
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::hash_map((hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
              *)(this + 0x18));
                    /* try { // try from 08510d3f to 08510d43 has its CatchHandler @ 08510db8 */
  __gnu_cxx::
  hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
  ::hash_map((hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
              *)(this + 0x2c));
                    /* try { // try from 08510d4d to 08510d51 has its CatchHandler @ 08510da0 */
  std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>::vector
            ((vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>> *)(this + 0x40));
                    /* try { // try from 08510d5b to 08510d5f has its CatchHandler @ 08510d88 */
  std::vector<BonusItem,std::allocator<BonusItem>>::vector
            ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50));
                    /* try { // try from 08510d69 to 08510d6d has its CatchHandler @ 08510d70 */
  std::
  map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
  ::map((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
         *)(this + 0x5c));
  return;
}

```

---

## FindGoods

```asm
// === 08512358 CItemList::FindGoods  [0x08512358-0x85123d9] ===
 8512358:	55                   	push   %ebp
 8512359:	89 e5                	mov    %esp,%ebp
 851235b:	83 ec 38             	sub    $0x38,%esp
 851235e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8512361:	89 04 24             	mov    %eax,(%esp)
 8512364:	e8 75 67 00 00       	call   8518ade <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP14CCeraShopGoodsEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 8512369:	8b 45 08             	mov    0x8(%ebp),%eax
 851236c:	8d 50 18             	lea    0x18(%eax),%edx
 851236f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8512372:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512376:	89 04 24             	mov    %eax,(%esp)
 8512379:	e8 92 67 00 00       	call   8518b10 <_ZN9__gnu_cxx8hash_mapIiP14CCeraShopGoodsNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 851237e:	83 ec 04             	sub    $0x4,%esp
 8512381:	8b 45 08             	mov    0x8(%ebp),%eax
 8512384:	8d 48 18             	lea    0x18(%eax),%ecx
 8512387:	8d 45 e0             	lea    -0x20(%ebp),%eax
 851238a:	8d 55 0c             	lea    0xc(%ebp),%edx
 851238d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8512391:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8512395:	89 04 24             	mov    %eax,(%esp)
 8512398:	e8 47 67 00 00       	call   8518ae4 <_ZN9__gnu_cxx8hash_mapIiP14CCeraShopGoodsNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 851239d:	83 ec 04             	sub    $0x4,%esp
 85123a0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85123a3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85123a6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85123a9:	89 55 ec             	mov    %edx,-0x14(%ebp)
 85123ac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85123af:	89 44 24 04          	mov    %eax,0x4(%esp)
 85123b3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85123b6:	89 04 24             	mov    %eax,(%esp)
 85123b9:	e8 78 67 00 00       	call   8518b36 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP14CCeraShopGoodsEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 85123be:	84 c0                	test   %al,%al
 85123c0:	74 07                	je     85123c9 <_ZN9CItemList9FindGoodsEi+0x71>
 85123c2:	b8 00 00 00 00       	mov    $0x0,%eax
 85123c7:	eb 0e                	jmp    85123d7 <_ZN9CItemList9FindGoodsEi+0x7f>
 85123c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85123cc:	89 04 24             	mov    %eax,(%esp)
 85123cf:	e8 76 67 00 00       	call   8518b4a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP14CCeraShopGoodsEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 85123d4:	8b 40 04             	mov    0x4(%eax),%eax
 85123d7:	c9                   	leave
 85123d8:	c3                   	ret
 85123d9:	90                   	nop

```

```c
// CItemList::FindGoods @ 0x8512358

/* CItemList::FindGoods(int) */

undefined4 CItemList::FindGoods(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::end(local_14);
  __gnu_cxx::
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::find(&local_24);
  local_1c = local_24;
  local_18 = local_20;
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                          *)&local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetProperBonusItem

```asm
// === 08512e06 CItemList::GetProperBonusItem  [0x08512e06-0x8512e97] ===
 8512e06:	55                   	push   %ebp
 8512e07:	89 e5                	mov    %esp,%ebp
 8512e09:	83 ec 28             	sub    $0x28,%esp
 8512e0c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8512e13:	eb 64                	jmp    8512e79 <_ZN9CItemList18GetProperBonusItemEj+0x73>
 8512e15:	8b 45 08             	mov    0x8(%ebp),%eax
 8512e18:	8d 50 50             	lea    0x50(%eax),%edx
 8512e1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512e1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512e22:	89 14 24             	mov    %edx,(%esp)
 8512e25:	e8 3a 62 00 00       	call   8519064 <_ZNSt6vectorI9BonusItemSaIS0_EEixEj>
 8512e2a:	8b 00                	mov    (%eax),%eax
 8512e2c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8512e2f:	77 24                	ja     8512e55 <_ZN9CItemList18GetProperBonusItemEj+0x4f>
 8512e31:	8b 45 08             	mov    0x8(%ebp),%eax
 8512e34:	8d 50 50             	lea    0x50(%eax),%edx
 8512e37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512e3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512e3e:	89 14 24             	mov    %edx,(%esp)
 8512e41:	e8 1e 62 00 00       	call   8519064 <_ZNSt6vectorI9BonusItemSaIS0_EEixEj>
 8512e46:	8b 40 04             	mov    0x4(%eax),%eax
 8512e49:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8512e4c:	76 07                	jbe    8512e55 <_ZN9CItemList18GetProperBonusItemEj+0x4f>
 8512e4e:	b8 01 00 00 00       	mov    $0x1,%eax
 8512e53:	eb 05                	jmp    8512e5a <_ZN9CItemList18GetProperBonusItemEj+0x54>
 8512e55:	b8 00 00 00 00       	mov    $0x0,%eax
 8512e5a:	84 c0                	test   %al,%al
 8512e5c:	74 17                	je     8512e75 <_ZN9CItemList18GetProperBonusItemEj+0x6f>
 8512e5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8512e61:	8d 50 50             	lea    0x50(%eax),%edx
 8512e64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512e67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512e6b:	89 14 24             	mov    %edx,(%esp)
 8512e6e:	e8 f1 61 00 00       	call   8519064 <_ZNSt6vectorI9BonusItemSaIS0_EEixEj>
 8512e73:	eb 21                	jmp    8512e96 <_ZN9CItemList18GetProperBonusItemEj+0x90>
 8512e75:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8512e79:	8b 45 08             	mov    0x8(%ebp),%eax
 8512e7c:	83 c0 50             	add    $0x50,%eax
 8512e7f:	89 04 24             	mov    %eax,(%esp)
 8512e82:	e8 bb 61 00 00       	call   8519042 <_ZNKSt6vectorI9BonusItemSaIS0_EE4sizeEv>
 8512e87:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8512e8a:	0f 97 c0             	seta   %al
 8512e8d:	84 c0                	test   %al,%al
 8512e8f:	75 84                	jne    8512e15 <_ZN9CItemList18GetProperBonusItemEj+0xf>
 8512e91:	b8 00 00 00 00       	mov    $0x0,%eax
 8512e96:	c9                   	leave
 8512e97:	c3                   	ret

```

```c
// CItemList::GetProperBonusItem @ 0x8512e06

/* CItemList::GetProperBonusItem(unsigned int) */

undefined4 __thiscall CItemList::GetProperBonusItem(CItemList *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar5 = std::vector<BonusItem,std::allocator<BonusItem>>::size
                      ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50));
    if (uVar5 <= local_10) {
      return 0;
    }
    puVar2 = (uint *)std::vector<BonusItem,std::allocator<BonusItem>>::operator[]
                               ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50),
                                local_10);
    if ((param_1 < *puVar2) ||
       (iVar3 = std::vector<BonusItem,std::allocator<BonusItem>>::operator[]
                          ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50),local_10),
       *(uint *)(iVar3 + 4) <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  uVar4 = std::vector<BonusItem,std::allocator<BonusItem>>::operator[]
                    ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50),local_10);
  return uVar4;
}

```

---

## Load_Goods_File

```asm
// === 085123da CItemList::Load_Goods_File  [0x085123da-0x851292f] ===
 85123da:	55                   	push   %ebp
 85123db:	89 e5                	mov    %esp,%ebp
 85123dd:	57                   	push   %edi
 85123de:	56                   	push   %esi
 85123df:	53                   	push   %ebx
 85123e0:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 85123e6:	8d 9d ec fe ff ff    	lea    -0x114(%ebp),%ebx
 85123ec:	89 df                	mov    %ebx,%edi
 85123ee:	be 0f 00 00 00       	mov    $0xf,%esi
 85123f3:	eb 0e                	jmp    8512403 <_ZN9CItemList15Load_Goods_FileEPKc+0x29>
 85123f5:	89 3c 24             	mov    %edi,(%esp)
 85123f8:	e8 61 67 00 00       	call   8518b5e <_ZNSt6vectorI14STCeraShopItemSaIS0_EEC1Ev>
 85123fd:	83 c7 0c             	add    $0xc,%edi
 8512400:	83 ee 01             	sub    $0x1,%esi
 8512403:	83 fe ff             	cmp    $0xffffffff,%esi
 8512406:	0f 95 c0             	setne  %al
 8512409:	84 c0                	test   %al,%al
 851240b:	75 e8                	jne    85123f5 <_ZN9CItemList15Load_Goods_FileEPKc+0x1b>
 851240d:	eb 42                	jmp    8512451 <_ZN9CItemList15Load_Goods_FileEPKc+0x77>
 851240f:	89 d7                	mov    %edx,%edi
 8512411:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 8512417:	85 db                	test   %ebx,%ebx
 8512419:	74 26                	je     8512441 <_ZN9CItemList15Load_Goods_FileEPKc+0x67>
 851241b:	b8 0f 00 00 00       	mov    $0xf,%eax
 8512420:	29 f0                	sub    %esi,%eax
 8512422:	89 c2                	mov    %eax,%edx
 8512424:	89 d0                	mov    %edx,%eax
 8512426:	01 c0                	add    %eax,%eax
 8512428:	01 d0                	add    %edx,%eax
 851242a:	c1 e0 02             	shl    $0x2,%eax
 851242d:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8512430:	39 de                	cmp    %ebx,%esi
 8512432:	74 0d                	je     8512441 <_ZN9CItemList15Load_Goods_FileEPKc+0x67>
 8512434:	83 ee 0c             	sub    $0xc,%esi
 8512437:	89 34 24             	mov    %esi,(%esp)
 851243a:	e8 33 67 00 00       	call   8518b72 <_ZNSt6vectorI14STCeraShopItemSaIS0_EED1Ev>
 851243f:	eb ef                	jmp    8512430 <_ZN9CItemList15Load_Goods_FileEPKc+0x56>
 8512441:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 8512447:	89 fa                	mov    %edi,%edx
 8512449:	89 04 24             	mov    %eax,(%esp)
 851244c:	e8 ff 12 5d 00       	call   8ae3750 <_Unwind_Resume>
 8512451:	8b 45 08             	mov    0x8(%ebp),%eax
 8512454:	83 c0 40             	add    $0x40,%eax
 8512457:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 851245e:	00 
 851245f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8512466:	00 
 8512467:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 851246e:	00 
 851246f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8512476:	00 
 8512477:	89 44 24 08          	mov    %eax,0x8(%esp)
 851247b:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8512481:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512485:	8b 45 0c             	mov    0xc(%ebp),%eax
 8512488:	89 04 24             	mov    %eax,(%esp)
 851248b:	e8 25 b8 3e 00       	call   88fdcb5 <_Z22importCashShopItemListPcPSt6vectorI14STCeraShopItemSaIS1_EERS0_I21stCeraShopBonusInfo_tSaIS5_EEPvPiPSt3mapIiS0_IS0_IiSaIiEESaISD_EESt4lessIiESaISt4pairIKiSF_EEEPSD_>
 8512490:	83 f0 01             	xor    $0x1,%eax
 8512493:	84 c0                	test   %al,%al
 8512495:	74 3d                	je     85124d4 <_ZN9CItemList15Load_Goods_FileEPKc+0xfa>
 8512497:	8b 45 0c             	mov    0xc(%ebp),%eax
 851249a:	89 44 24 14          	mov    %eax,0x14(%esp)
 851249e:	c7 44 24 10 78 5e c9 	movl   $0x8c95e78,0x10(%esp)
 85124a5:	08 
 85124a6:	c7 44 24 0c 76 0a 00 	movl   $0xa76,0xc(%esp)
 85124ad:	00 
 85124ae:	c7 44 24 08 e0 6b c9 	movl   $0x8c96be0,0x8(%esp)
 85124b5:	08 
 85124b6:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 85124bd:	08 
 85124be:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85124c5:	e8 40 17 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85124ca:	be 00 00 00 00       	mov    $0x0,%esi
 85124cf:	e9 2c 04 00 00       	jmp    8512900 <_ZN9CItemList15Load_Goods_FileEPKc+0x526>
 85124d4:	e8 db a6 10 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 85124d9:	89 04 24             	mov    %eax,(%esp)
 85124dc:	e8 79 05 11 00       	call   8622a5a <_ZN11sync_script11CSyncScript25truncateCeraShopItemTableEv>
 85124e1:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 85124e8:	e9 ca 03 00 00       	jmp    85128b7 <_ZN9CItemList15Load_Goods_FileEPKc+0x4dd>
 85124ed:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85124f0:	8d 8d ec fe ff ff    	lea    -0x114(%ebp),%ecx
 85124f6:	89 d0                	mov    %edx,%eax
 85124f8:	01 c0                	add    %eax,%eax
 85124fa:	01 d0                	add    %edx,%eax
 85124fc:	c1 e0 02             	shl    $0x2,%eax
 85124ff:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8512502:	89 04 24             	mov    %eax,(%esp)
 8512505:	e8 c6 66 00 00       	call   8518bd0 <_ZNKSt6vectorI14STCeraShopItemSaIS0_EE4sizeEv>
 851250a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 851250d:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8512514:	e9 89 03 00 00       	jmp    85128a2 <_ZN9CItemList15Load_Goods_FileEPKc+0x4c8>
 8512519:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 851251c:	8b 55 c8             	mov    -0x38(%ebp),%edx
 851251f:	8d 9d ec fe ff ff    	lea    -0x114(%ebp),%ebx
 8512525:	89 d0                	mov    %edx,%eax
 8512527:	01 c0                	add    %eax,%eax
 8512529:	01 d0                	add    %edx,%eax
 851252b:	c1 e0 02             	shl    $0x2,%eax
 851252e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8512531:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8512535:	89 04 24             	mov    %eax,(%esp)
 8512538:	e8 b5 66 00 00       	call   8518bf2 <_ZNSt6vectorI14STCeraShopItemSaIS0_EEixEj>
 851253d:	89 c6                	mov    %eax,%esi
 851253f:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 8512546:	e8 05 1f 21 00       	call   8724450 <_Znwj>
 851254b:	89 c3                	mov    %eax,%ebx
 851254d:	89 d8                	mov    %ebx,%eax
 851254f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8512553:	89 04 24             	mov    %eax,(%esp)
 8512556:	e8 45 29 00 00       	call   8514ea0 <_ZN14CCeraShopGoodsC1ERK14STCeraShopItem>
 851255b:	eb 15                	jmp    8512572 <_ZN9CItemList15Load_Goods_FileEPKc+0x198>
 851255d:	89 d6                	mov    %edx,%esi
 851255f:	89 c7                	mov    %eax,%edi
 8512561:	89 1c 24             	mov    %ebx,(%esp)
 8512564:	e8 87 1f 21 00       	call   87244f0 <_ZdlPv>
 8512569:	89 f8                	mov    %edi,%eax
 851256b:	89 f2                	mov    %esi,%edx
 851256d:	e9 5b 03 00 00       	jmp    85128cd <_ZN9CItemList15Load_Goods_FileEPKc+0x4f3>
 8512572:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8512575:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8512578:	8d b5 ec fe ff ff    	lea    -0x114(%ebp),%esi
 851257e:	89 d0                	mov    %edx,%eax
 8512580:	01 c0                	add    %eax,%eax
 8512582:	01 d0                	add    %edx,%eax
 8512584:	c1 e0 02             	shl    $0x2,%eax
 8512587:	8d 04 06             	lea    (%esi,%eax,1),%eax
 851258a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 851258e:	89 04 24             	mov    %eax,(%esp)
 8512591:	e8 5c 66 00 00       	call   8518bf2 <_ZNSt6vectorI14STCeraShopItemSaIS0_EEixEj>
 8512596:	8d 50 08             	lea    0x8(%eax),%edx
 8512599:	8b 45 08             	mov    0x8(%ebp),%eax
 851259c:	83 c0 18             	add    $0x18,%eax
 851259f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85125a3:	89 04 24             	mov    %eax,(%esp)
 85125a6:	e8 61 66 00 00       	call   8518c0c <_ZN9__gnu_cxx8hash_mapIiP14CCeraShopGoodsNS_4hashIiEESt8equal_toIiESaIS2_EEixERKi>
 85125ab:	89 da                	mov    %ebx,%edx
 85125ad:	89 10                	mov    %edx,(%eax)
 85125af:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 85125b2:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85125b5:	8d 9d ec fe ff ff    	lea    -0x114(%ebp),%ebx
 85125bb:	89 d0                	mov    %edx,%eax
 85125bd:	01 c0                	add    %eax,%eax
 85125bf:	01 d0                	add    %edx,%eax
 85125c1:	c1 e0 02             	shl    $0x2,%eax
 85125c4:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85125c7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85125cb:	89 04 24             	mov    %eax,(%esp)
 85125ce:	e8 1f 66 00 00       	call   8518bf2 <_ZNSt6vectorI14STCeraShopItemSaIS0_EEixEj>
 85125d3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85125d6:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85125dd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85125e0:	8b 40 14             	mov    0x14(%eax),%eax
 85125e3:	83 f8 01             	cmp    $0x1,%eax
 85125e6:	75 0e                	jne    85125f6 <_ZN9CItemList15Load_Goods_FileEPKc+0x21c>
 85125e8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85125eb:	8b 40 38             	mov    0x38(%eax),%eax
 85125ee:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85125f1:	e9 b4 00 00 00       	jmp    85126aa <_ZN9CItemList15Load_Goods_FileEPKc+0x2d0>
 85125f6:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 85125f9:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85125fc:	8d 9d ec fe ff ff    	lea    -0x114(%ebp),%ebx
 8512602:	89 d0                	mov    %edx,%eax
 8512604:	01 c0                	add    %eax,%eax
 8512606:	01 d0                	add    %edx,%eax
 8512608:	c1 e0 02             	shl    $0x2,%eax
 851260b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 851260e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8512612:	89 04 24             	mov    %eax,(%esp)
 8512615:	e8 d8 65 00 00       	call   8518bf2 <_ZNSt6vectorI14STCeraShopItemSaIS0_EEixEj>
 851261a:	8d 50 08             	lea    0x8(%eax),%edx
 851261d:	8b 45 08             	mov    0x8(%ebp),%eax
 8512620:	83 c0 18             	add    $0x18,%eax
 8512623:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512627:	89 04 24             	mov    %eax,(%esp)
 851262a:	e8 dd 65 00 00       	call   8518c0c <_ZN9__gnu_cxx8hash_mapIiP14CCeraShopGoodsNS_4hashIiEESt8equal_toIiESaIS2_EEixERKi>
 851262f:	8b 00                	mov    (%eax),%eax
 8512631:	89 04 24             	mov    %eax,(%esp)
 8512634:	e8 33 7a c6 ff       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 8512639:	89 45 dc             	mov    %eax,-0x24(%ebp)
 851263c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 851263f:	89 04 24             	mov    %eax,(%esp)
 8512642:	e8 e1 e8 c3 ff       	call   8150f28 <_ZNK10CEquipItem19getAvatarTypeSelectEv>
 8512647:	89 45 e0             	mov    %eax,-0x20(%ebp)
 851264a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 851264d:	8b 40 38             	mov    0x38(%eax),%eax
 8512650:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8512653:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8512656:	8b 40 0c             	mov    0xc(%eax),%eax
 8512659:	85 c0                	test   %eax,%eax
 851265b:	75 24                	jne    8512681 <_ZN9CItemList15Load_Goods_FileEPKc+0x2a7>
 851265d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8512660:	8b 40 08             	mov    0x8(%eax),%eax
 8512663:	83 f8 ff             	cmp    $0xffffffff,%eax
 8512666:	74 19                	je     8512681 <_ZN9CItemList15Load_Goods_FileEPKc+0x2a7>
 8512668:	8b 45 e0             	mov    -0x20(%ebp),%eax
 851266b:	89 04 24             	mov    %eax,(%esp)
 851266e:	e8 43 fb c3 ff       	call   81521b6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE5emptyEv>
 8512673:	83 f0 01             	xor    $0x1,%eax
 8512676:	84 c0                	test   %al,%al
 8512678:	74 07                	je     8512681 <_ZN9CItemList15Load_Goods_FileEPKc+0x2a7>
 851267a:	b8 01 00 00 00       	mov    $0x1,%eax
 851267f:	eb 05                	jmp    8512686 <_ZN9CItemList15Load_Goods_FileEPKc+0x2ac>
 8512681:	b8 00 00 00 00       	mov    $0x0,%eax
 8512686:	84 c0                	test   %al,%al
 8512688:	74 20                	je     85126aa <_ZN9CItemList15Load_Goods_FileEPKc+0x2d0>
 851268a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 851268d:	0f b7 40 22          	movzwl 0x22(%eax),%eax
 8512691:	98                   	cwtl
 8512692:	83 e8 01             	sub    $0x1,%eax
 8512695:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512699:	8b 45 e0             	mov    -0x20(%ebp),%eax
 851269c:	89 04 24             	mov    %eax,(%esp)
 851269f:	e8 52 fc c3 ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 85126a4:	8b 40 0c             	mov    0xc(%eax),%eax
 85126a7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85126aa:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 85126ae:	0f 84 21 01 00 00    	je     85127d5 <_ZN9CItemList15Load_Goods_FileEPKc+0x3fb>
 85126b4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85126b7:	0f b7 40 22          	movzwl 0x22(%eax),%eax
 85126bb:	66 83 f8 01          	cmp    $0x1,%ax
 85126bf:	74 10                	je     85126d1 <_ZN9CItemList15Load_Goods_FileEPKc+0x2f7>
 85126c1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85126c4:	0f b7 40 22          	movzwl 0x22(%eax),%eax
 85126c8:	66 85 c0             	test   %ax,%ax
 85126cb:	0f 85 04 01 00 00    	jne    85127d5 <_ZN9CItemList15Load_Goods_FileEPKc+0x3fb>
 85126d1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85126d4:	8b 40 14             	mov    0x14(%eax),%eax
 85126d7:	89 c3                	mov    %eax,%ebx
 85126d9:	e8 bd 9a bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 85126de:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85126e2:	89 04 24             	mov    %eax,(%esp)
 85126e5:	e8 48 d3 e4 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85126ea:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85126ed:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85126f1:	0f 84 de 00 00 00    	je     85127d5 <_ZN9CItemList15Load_Goods_FileEPKc+0x3fb>
 85126f7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85126fa:	8b 40 08             	mov    0x8(%eax),%eax
 85126fd:	83 f8 ff             	cmp    $0xffffffff,%eax
 8512700:	0f 84 cf 00 00 00    	je     85127d5 <_ZN9CItemList15Load_Goods_FileEPKc+0x3fb>
 8512706:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8512709:	89 04 24             	mov    %eax,(%esp)
 851270c:	e8 db 1c 00 00       	call   85143ec <_ZNK5CItem15GetItemIconNameEv>
 8512711:	89 c6                	mov    %eax,%esi
 8512713:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8512716:	89 04 24             	mov    %eax,(%esp)
 8512719:	e8 64 c6 c0 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 851271e:	89 c3                	mov    %eax,%ebx
 8512720:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8512723:	0f b7 40 22          	movzwl 0x22(%eax),%eax
 8512727:	98                   	cwtl
 8512728:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 851272e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8512731:	8b 40 1c             	mov    0x1c(%eax),%eax
 8512734:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 851273a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 851273d:	8b 40 14             	mov    0x14(%eax),%eax
 8512740:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8512746:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8512749:	8b 40 08             	mov    0x8(%eax),%eax
 851274c:	89 c7                	mov    %eax,%edi
 851274e:	e8 61 a4 10 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8512753:	89 c2                	mov    %eax,%edx
 8512755:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8512759:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 851275d:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 8512763:	89 44 24 14          	mov    %eax,0x14(%esp)
 8512767:	8b 45 d8             	mov    -0x28(%ebp),%eax
 851276a:	89 44 24 10          	mov    %eax,0x10(%esp)
 851276e:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 8512774:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8512778:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 851277e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8512782:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8512786:	89 14 24             	mov    %edx,(%esp)
 8512789:	e8 2e 03 11 00       	call   8622abc <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_>
 851278e:	83 f0 01             	xor    $0x1,%eax
 8512791:	84 c0                	test   %al,%al
 8512793:	74 40                	je     85127d5 <_ZN9CItemList15Load_Goods_FileEPKc+0x3fb>
 8512795:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8512798:	8b 40 08             	mov    0x8(%eax),%eax
 851279b:	89 44 24 14          	mov    %eax,0x14(%esp)
 851279f:	c7 44 24 10 a0 5e c9 	movl   $0x8c95ea0,0x10(%esp)
 85127a6:	08 
 85127a7:	c7 44 24 0c 01 0b 00 	movl   $0xb01,0xc(%esp)
 85127ae:	00 
 85127af:	c7 44 24 08 e0 6b c9 	movl   $0x8c96be0,0x8(%esp)
 85127b6:	08 
 85127b7:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 85127be:	08 
 85127bf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85127c6:	e8 3f 14 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85127cb:	be 00 00 00 00       	mov    $0x0,%esi
 85127d0:	e9 2b 01 00 00       	jmp    8512900 <_ZN9CItemList15Load_Goods_FileEPKc+0x526>
 85127d5:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 85127d8:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85127db:	8d 9d ec fe ff ff    	lea    -0x114(%ebp),%ebx
 85127e1:	89 d0                	mov    %edx,%eax
 85127e3:	01 c0                	add    %eax,%eax
 85127e5:	01 d0                	add    %edx,%eax
 85127e7:	c1 e0 02             	shl    $0x2,%eax
 85127ea:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85127ed:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85127f1:	89 04 24             	mov    %eax,(%esp)
 85127f4:	e8 f9 63 00 00       	call   8518bf2 <_ZNSt6vectorI14STCeraShopItemSaIS0_EEixEj>
 85127f9:	8b 40 10             	mov    0x10(%eax),%eax
 85127fc:	85 c0                	test   %eax,%eax
 85127fe:	0f 95 c0             	setne  %al
 8512801:	84 c0                	test   %al,%al
 8512803:	0f 84 95 00 00 00    	je     851289e <_ZN9CItemList15Load_Goods_FileEPKc+0x4c4>
 8512809:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 851280c:	8b 55 c8             	mov    -0x38(%ebp),%edx
 851280f:	8d 9d ec fe ff ff    	lea    -0x114(%ebp),%ebx
 8512815:	89 d0                	mov    %edx,%eax
 8512817:	01 c0                	add    %eax,%eax
 8512819:	01 d0                	add    %edx,%eax
 851281b:	c1 e0 02             	shl    $0x2,%eax
 851281e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8512821:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8512825:	89 04 24             	mov    %eax,(%esp)
 8512828:	e8 c5 63 00 00       	call   8518bf2 <_ZNSt6vectorI14STCeraShopItemSaIS0_EEixEj>
 851282d:	8d 58 10             	lea    0x10(%eax),%ebx
 8512830:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8512833:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8512836:	8d b5 ec fe ff ff    	lea    -0x114(%ebp),%esi
 851283c:	89 d0                	mov    %edx,%eax
 851283e:	01 c0                	add    %eax,%eax
 8512840:	01 d0                	add    %edx,%eax
 8512842:	c1 e0 02             	shl    $0x2,%eax
 8512845:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8512848:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 851284c:	89 04 24             	mov    %eax,(%esp)
 851284f:	e8 9e 63 00 00       	call   8518bf2 <_ZNSt6vectorI14STCeraShopItemSaIS0_EEixEj>
 8512854:	8d 50 14             	lea    0x14(%eax),%edx
 8512857:	8d 45 c0             	lea    -0x40(%ebp),%eax
 851285a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 851285e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512862:	89 04 24             	mov    %eax,(%esp)
 8512865:	e8 cd f1 bf ff       	call   8111a37 <_ZSt9make_pairIRmRiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 851286a:	83 ec 04             	sub    $0x4,%esp
 851286d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8512870:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512874:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8512877:	89 04 24             	mov    %eax,(%esp)
 851287a:	e8 cb 63 00 00       	call   8518c4a <_ZNSt4pairIKjiEC1ImiEEOS_IT_T0_E>
 851287f:	8b 45 08             	mov    0x8(%ebp),%eax
 8512882:	8d 48 2c             	lea    0x2c(%eax),%ecx
 8512885:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8512888:	8d 55 b8             	lea    -0x48(%ebp),%edx
 851288b:	89 54 24 08          	mov    %edx,0x8(%esp)
 851288f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8512893:	89 04 24             	mov    %eax,(%esp)
 8512896:	e8 df 63 00 00       	call   8518c7a <_ZN9__gnu_cxx8hash_mapIjiNS_4hashIjEESt8equal_toIjESaIiEE6insertERKSt4pairIKjiE>
 851289b:	83 ec 04             	sub    $0x4,%esp
 851289e:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 85128a2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85128a5:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 85128a8:	0f 9c c0             	setl   %al
 85128ab:	84 c0                	test   %al,%al
 85128ad:	0f 85 66 fc ff ff    	jne    8512519 <_ZN9CItemList15Load_Goods_FileEPKc+0x13f>
 85128b3:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 85128b7:	83 7d c8 0f          	cmpl   $0xf,-0x38(%ebp)
 85128bb:	0f 9e c0             	setle  %al
 85128be:	84 c0                	test   %al,%al
 85128c0:	0f 85 27 fc ff ff    	jne    85124ed <_ZN9CItemList15Load_Goods_FileEPKc+0x113>
 85128c6:	be 01 00 00 00       	mov    $0x1,%esi
 85128cb:	eb 33                	jmp    8512900 <_ZN9CItemList15Load_Goods_FileEPKc+0x526>
 85128cd:	89 d6                	mov    %edx,%esi
 85128cf:	89 c7                	mov    %eax,%edi
 85128d1:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 85128d7:	8d 98 c0 00 00 00    	lea    0xc0(%eax),%ebx
 85128dd:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 85128e3:	39 c3                	cmp    %eax,%ebx
 85128e5:	74 0d                	je     85128f4 <_ZN9CItemList15Load_Goods_FileEPKc+0x51a>
 85128e7:	83 eb 0c             	sub    $0xc,%ebx
 85128ea:	89 1c 24             	mov    %ebx,(%esp)
 85128ed:	e8 80 62 00 00       	call   8518b72 <_ZNSt6vectorI14STCeraShopItemSaIS0_EED1Ev>
 85128f2:	eb e9                	jmp    85128dd <_ZN9CItemList15Load_Goods_FileEPKc+0x503>
 85128f4:	89 f8                	mov    %edi,%eax
 85128f6:	89 f2                	mov    %esi,%edx
 85128f8:	89 04 24             	mov    %eax,(%esp)
 85128fb:	e8 50 0e 5d 00       	call   8ae3750 <_Unwind_Resume>
 8512900:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8512906:	8d 98 c0 00 00 00    	lea    0xc0(%eax),%ebx
 851290c:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8512912:	39 c3                	cmp    %eax,%ebx
 8512914:	74 0d                	je     8512923 <_ZN9CItemList15Load_Goods_FileEPKc+0x549>
 8512916:	83 eb 0c             	sub    $0xc,%ebx
 8512919:	89 1c 24             	mov    %ebx,(%esp)
 851291c:	e8 51 62 00 00       	call   8518b72 <_ZNSt6vectorI14STCeraShopItemSaIS0_EED1Ev>
 8512921:	eb e9                	jmp    851290c <_ZN9CItemList15Load_Goods_FileEPKc+0x532>
 8512923:	89 f0                	mov    %esi,%eax
 8512925:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8512928:	83 c4 00             	add    $0x0,%esp
 851292b:	5b                   	pop    %ebx
 851292c:	5e                   	pop    %esi
 851292d:	5f                   	pop    %edi
 851292e:	5d                   	pop    %ebp
 851292f:	c3                   	ret

```

```c
// CItemList::Load_Goods_File @ 0x85123da

/* CItemList::Load_Goods_File(char const*) */

undefined4 __thiscall CItemList::Load_Goods_File(CItemList *this,char *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  CSyncScript *this_00;
  STCeraShopItem *pSVar6;
  CCeraShopGoods *this_01;
  undefined4 *puVar7;
  CDataManager *this_02;
  char *pcVar8;
  uint uVar9;
  vector<STCeraShopItem,std::allocator<STCeraShopItem>> *pvVar10;
  int iVar11;
  undefined4 uVar12;
  vector<STCeraShopItem,std::allocator<STCeraShopItem>> local_118 [192];
  hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
  local_58 [12];
  pair<unsigned_int_const,int> local_4c [8];
  ulong local_44 [2];
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  CEquipItem *local_28;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *local_24;
  CItem *local_20;
  
  pvVar10 = local_118;
  for (iVar11 = 0xf; iVar11 != -1; iVar11 = iVar11 + -1) {
                    /* try { // try from 085123f8 to 085123fc has its CatchHandler @ 0851240f */
    std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::vector(pvVar10);
    pvVar10 = pvVar10 + 0xc;
  }
                    /* try { // try from 0851248b to 0851254a has its CatchHandler @ 085128cd */
  cVar5 = importCashShopItemList
                    (param_1,(vector *)local_118,(vector *)(this + 0x40),(void *)0x0,(int *)0x0,
                     (map *)0x0,(vector *)0x0);
  if (cVar5 == '\x01') {
    this_00 = (CSyncScript *)sync_script::GetInstanceSyncScript();
    sync_script::CSyncScript::truncateCeraShopItemTable(this_00);
    for (local_3c = 0; local_3c < 0x10; local_3c = local_3c + 1) {
      local_38 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::size
                           (local_118 + local_3c * 0xc);
      for (local_34 = 0; (int)local_34 < local_38; local_34 = local_34 + 1) {
        pSVar6 = (STCeraShopItem *)
                 std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                           (local_118 + local_3c * 0xc,local_34);
        this_01 = operator_new(0x3c);
                    /* try { // try from 08512556 to 0851255a has its CatchHandler @ 0851255d */
        CCeraShopGoods::CCeraShopGoods(this_01,pSVar6);
        iVar11 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                           (local_118 + local_3c * 0xc,local_34);
                    /* try { // try from 085125a6 to 0851289a has its CatchHandler @ 085128cd */
        puVar7 = (undefined4 *)
                 __gnu_cxx::
                 hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                 ::operator[]((hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                               *)(this + 0x18),(int *)(iVar11 + 8));
        *puVar7 = this_01;
        local_30 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                             (local_118 + local_3c * 0xc,local_34);
        local_2c = 0;
        if (*(int *)(local_30 + 0x14) == 1) {
          local_2c = *(int *)(local_30 + 0x38);
        }
        else {
          iVar11 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                             (local_118 + local_3c * 0xc,local_34);
          puVar7 = (undefined4 *)
                   __gnu_cxx::
                   hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                   ::operator[]((hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                                 *)(this + 0x18),(int *)(iVar11 + 8));
          local_28 = (CEquipItem *)CCeraShopGoods::GetRelatedItem((CCeraShopGoods *)*puVar7);
          local_24 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
                     CEquipItem::getAvatarTypeSelect(local_28);
          local_2c = *(int *)(local_30 + 0x38);
          if ((*(int *)(local_30 + 0xc) == 0) && (*(int *)(local_30 + 8) != -1)) {
            cVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::empty();
            if (cVar5 == '\x01') goto LAB_08512681;
            bVar4 = true;
          }
          else {
LAB_08512681:
            bVar4 = false;
          }
          if (bVar4) {
            iVar11 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                     operator[](local_24,(int)*(short *)(local_30 + 0x22) - 1);
            local_2c = *(int *)(iVar11 + 0xc);
          }
        }
        if ((local_2c != 0) &&
           ((*(short *)(local_30 + 0x22) == 1 || (*(short *)(local_30 + 0x22) == 0)))) {
          iVar11 = *(int *)(local_30 + 0x14);
          this_02 = (CDataManager *)G_CDataManager();
          local_20 = (CItem *)CDataManager::find_item(this_02,iVar11);
          if ((local_20 != (CItem *)0x0) && (*(int *)(local_30 + 8) != -1)) {
            uVar12 = CItem::GetItemIconName(local_20);
            pcVar8 = (char *)CItem::GetItemName(local_20);
            sVar1 = *(short *)(local_30 + 0x22);
            iVar11 = *(int *)(local_30 + 0x1c);
            iVar2 = *(int *)(local_30 + 0x14);
            uVar3 = *(uint *)(local_30 + 8);
            uVar9 = sync_script::GetInstanceSyncScript();
            cVar5 = sync_script::CSyncScript::insertCeraShopItemIntoDB
                              (uVar9,uVar3,iVar2,iVar11,(short)local_2c,(char *)(int)sVar1,pcVar8);
            if (cVar5 != '\x01') {
              LogManager::logFormat
                        (1,"item.cpp","bool CItemList::Load_Goods_File(const char*)",0xb01,
                         "insertCeraShopItemIntoDB() fail IPG - %d",*(undefined4 *)(local_30 + 8),
                         pcVar8,uVar12);
              uVar12 = 0;
              goto LAB_08512900;
            }
          }
        }
        iVar11 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                           (local_118 + local_3c * 0xc,local_34);
        if (*(int *)(iVar11 + 0x10) != 0) {
          std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                    (local_118 + local_3c * 0xc,local_34);
          iVar11 = std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::operator[]
                             (local_118 + local_3c * 0xc,local_34);
          std::make_pair<unsigned_long&,int&>(local_44,(int *)(iVar11 + 0x14));
          std::pair<unsigned_int_const,int>::pair<unsigned_long,int>(local_4c,(pair *)local_44);
          __gnu_cxx::
          hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
          ::insert(local_58,this + 0x2c);
        }
      }
    }
    uVar12 = 1;
  }
  else {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::Load_Goods_File(const char*)",0xa76,
               "importCashShopItemList() fail file - %s",param_1);
    uVar12 = 0;
  }
LAB_08512900:
  pvVar10 = (vector<STCeraShopItem,std::allocator<STCeraShopItem>> *)local_58;
  while (pvVar10 != local_118) {
    pvVar10 = pvVar10 + -0xc;
    std::vector<STCeraShopItem,std::allocator<STCeraShopItem>>::~vector(pvVar10);
  }
  return uVar12;
}

```

---

## create_item

```asm
// === 08511fb8 CItemList::create_item  [0x08511fb8-0x851222f] ===
 8511fb8:	55                   	push   %ebp
 8511fb9:	89 e5                	mov    %esp,%ebp
 8511fbb:	56                   	push   %esi
 8511fbc:	53                   	push   %ebx
 8511fbd:	83 ec 60             	sub    $0x60,%esp
 8511fc0:	8b 45 14             	mov    0x14(%ebp),%eax
 8511fc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511fc7:	8b 45 10             	mov    0x10(%ebp),%eax
 8511fca:	89 04 24             	mov    %eax,(%esp)
 8511fcd:	e8 b2 98 bb ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8511fd2:	8b 45 10             	mov    0x10(%ebp),%eax
 8511fd5:	8b 40 02             	mov    0x2(%eax),%eax
 8511fd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511fdc:	8b 45 08             	mov    0x8(%ebp),%eax
 8511fdf:	89 04 24             	mov    %eax,(%esp)
 8511fe2:	e8 a3 fe ff ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8511fe7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8511fea:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8511fee:	75 73                	jne    8512063 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0xab>
 8511ff0:	8b 45 10             	mov    0x10(%ebp),%eax
 8511ff3:	8b 40 02             	mov    0x2(%eax),%eax
 8511ff6:	89 44 24 14          	mov    %eax,0x14(%esp)
 8511ffa:	c7 44 24 10 24 5e c9 	movl   $0x8c95e24,0x10(%esp)
 8512001:	08 
 8512002:	c7 44 24 0c 8f 09 00 	movl   $0x98f,0xc(%esp)
 8512009:	00 
 851200a:	c7 44 24 08 20 6c c9 	movl   $0x8c96c20,0x8(%esp)
 8512011:	08 
 8512012:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8512019:	08 
 851201a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8512021:	e8 e4 1b 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8512026:	8b 45 10             	mov    0x10(%ebp),%eax
 8512029:	c7 40 02 ff ff ff ff 	movl   $0xffffffff,0x2(%eax)
 8512030:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8512037:	00 
 8512038:	8b 45 10             	mov    0x10(%ebp),%eax
 851203b:	89 04 24             	mov    %eax,(%esp)
 851203e:	e8 41 98 bb ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8512043:	8b 45 10             	mov    0x10(%ebp),%eax
 8512046:	66 c7 40 0b 00 00    	movw   $0x0,0xb(%eax)
 851204c:	8b 45 10             	mov    0x10(%ebp),%eax
 851204f:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 8512053:	8b 45 10             	mov    0x10(%ebp),%eax
 8512056:	89 04 24             	mov    %eax,(%esp)
 8512059:	e8 34 98 bb ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 851205e:	e9 c5 01 00 00       	jmp    8512228 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x270>
 8512063:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8512066:	8b 00                	mov    (%eax),%eax
 8512068:	83 c0 08             	add    $0x8,%eax
 851206b:	8b 10                	mov    (%eax),%edx
 851206d:	8b 45 10             	mov    0x10(%ebp),%eax
 8512070:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512074:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8512077:	89 04 24             	mov    %eax,(%esp)
 851207a:	ff d2                	call   *%edx
 851207c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 851207f:	89 04 24             	mov    %eax,(%esp)
 8512082:	e8 73 f2 bd ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8512087:	84 c0                	test   %al,%al
 8512089:	0f 84 8d 00 00 00    	je     851211c <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x164>
 851208f:	8b 45 10             	mov    0x10(%ebp),%eax
 8512092:	89 04 24             	mov    %eax,(%esp)
 8512095:	e8 a0 57 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 851209a:	c1 e8 1f             	shr    $0x1f,%eax
 851209d:	84 c0                	test   %al,%al
 851209f:	74 13                	je     85120b4 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0xfc>
 85120a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85120a8:	00 
 85120a9:	8b 45 10             	mov    0x10(%ebp),%eax
 85120ac:	89 04 24             	mov    %eax,(%esp)
 85120af:	e8 d0 97 bb ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 85120b4:	8b 45 10             	mov    0x10(%ebp),%eax
 85120b7:	89 04 24             	mov    %eax,(%esp)
 85120ba:	e8 7b 57 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 85120bf:	3d e7 03 00 00       	cmp    $0x3e7,%eax
 85120c4:	0f 9f c0             	setg   %al
 85120c7:	84 c0                	test   %al,%al
 85120c9:	74 51                	je     851211c <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x164>
 85120cb:	8b 45 10             	mov    0x10(%ebp),%eax
 85120ce:	8b 70 02             	mov    0x2(%eax),%esi
 85120d1:	8b 45 10             	mov    0x10(%ebp),%eax
 85120d4:	89 04 24             	mov    %eax,(%esp)
 85120d7:	e8 5e 57 be ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 85120dc:	89 c3                	mov    %eax,%ebx
 85120de:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85120e5:	00 
 85120e6:	c7 44 24 08 a1 09 00 	movl   $0x9a1,0x8(%esp)
 85120ed:	00 
 85120ee:	c7 44 24 04 20 6c c9 	movl   $0x8c96c20,0x4(%esp)
 85120f5:	08 
 85120f6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85120f9:	89 04 24             	mov    %eax,(%esp)
 85120fc:	e8 17 d6 03 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8512101:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8512105:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8512109:	c7 44 24 04 34 5e c9 	movl   $0x8c95e34,0x4(%esp)
 8512110:	08 
 8512111:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8512114:	89 04 24             	mov    %eax,(%esp)
 8512117:	e8 6c d6 03 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 851211c:	8b 45 10             	mov    0x10(%ebp),%eax
 851211f:	83 c0 11             	add    $0x11,%eax
 8512122:	89 04 24             	mov    %eax,(%esp)
 8512125:	e8 32 96 bb ff       	call   80cb75c <_ZN17stAmplifyOption_t5resetEv>
 851212a:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 851212e:	0f 85 f4 00 00 00    	jne    8512228 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x270>
 8512134:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8512139:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8512140:	00 
 8512141:	8b 55 10             	mov    0x10(%ebp),%edx
 8512144:	89 54 24 08          	mov    %edx,0x8(%esp)
 8512148:	8b 55 e0             	mov    -0x20(%ebp),%edx
 851214b:	89 54 24 04          	mov    %edx,0x4(%esp)
 851214f:	89 04 24             	mov    %eax,(%esp)
 8512152:	e8 29 28 d2 ff       	call   8234980 <_ZNK14CItemAmplifier19checkInvestableItemEPK5CItemRK10Inven_Itemi>
 8512157:	84 c0                	test   %al,%al
 8512159:	74 1b                	je     8512176 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x1be>
 851215b:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8512160:	8b 55 10             	mov    0x10(%ebp),%edx
 8512163:	89 54 24 08          	mov    %edx,0x8(%esp)
 8512167:	8b 55 e0             	mov    -0x20(%ebp),%edx
 851216a:	89 54 24 04          	mov    %edx,0x4(%esp)
 851216e:	89 04 24             	mov    %eax,(%esp)
 8512171:	e8 44 2d 00 00       	call   8514eba <_ZNK14CItemAmplifier19generateAmplifyItemEPK5CItemR10Inven_Item>
 8512176:	8b 45 10             	mov    0x10(%ebp),%eax
 8512179:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 851217d:	3c 01                	cmp    $0x1,%al
 851217f:	0f 85 a3 00 00 00    	jne    8512228 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x270>
 8512185:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8512188:	89 04 24             	mov    %eax,(%esp)
 851218b:	e8 08 cc c0 ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 8512190:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8512193:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 851219a:	e8 e8 f9 19 00       	call   86b1b87 <_Z12get_rand_inti>
 851219f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85121a2:	e8 f4 9f bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 85121a7:	8b 80 50 4a 00 00    	mov    0x4a50(%eax),%eax
 85121ad:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85121b0:	db 45 e4             	fildl  -0x1c(%ebp)
 85121b3:	b8 64 00 00 00       	mov    $0x64,%eax
 85121b8:	2b 45 ec             	sub    -0x14(%ebp),%eax
 85121bb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85121be:	db 45 c4             	fildl  -0x3c(%ebp)
 85121c1:	d9 05 94 6d c9 08    	flds   0x8c96d94
 85121c7:	de f9                	fdivrp %st,%st(1)
 85121c9:	de c9                	fmulp  %st,%st(1)
 85121cb:	d9 7d c2             	fnstcw -0x3e(%ebp)
 85121ce:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
 85121d2:	b4 0c                	mov    $0xc,%ah
 85121d4:	66 89 45 c0          	mov    %ax,-0x40(%ebp)
 85121d8:	d9 6d c0             	fldcw  -0x40(%ebp)
 85121db:	db 5d f0             	fistpl -0x10(%ebp)
 85121de:	d9 6d c2             	fldcw  -0x3e(%ebp)
 85121e1:	db 45 e4             	fildl  -0x1c(%ebp)
 85121e4:	db 45 f0             	fildl  -0x10(%ebp)
 85121e7:	db 45 e8             	fildl  -0x18(%ebp)
 85121ea:	d9 05 98 6d c9 08    	flds   0x8c96d98
 85121f0:	de f9                	fdivrp %st,%st(1)
 85121f2:	de c9                	fmulp  %st,%st(1)
 85121f4:	de c1                	faddp  %st,%st(1)
 85121f6:	d9 6d c0             	fldcw  -0x40(%ebp)
 85121f9:	db 5d f4             	fistpl -0xc(%ebp)
 85121fc:	d9 6d c2             	fldcw  -0x3e(%ebp)
 85121ff:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8512203:	79 09                	jns    851220e <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x256>
 8512205:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 851220c:	eb 0e                	jmp    851221c <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x264>
 851220e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512211:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8512214:	7e 06                	jle    851221c <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi+0x264>
 8512216:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8512219:	89 45 f4             	mov    %eax,-0xc(%ebp)
 851221c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 851221f:	89 c2                	mov    %eax,%edx
 8512221:	8b 45 10             	mov    0x10(%ebp),%eax
 8512224:	66 89 50 0b          	mov    %dx,0xb(%eax)
 8512228:	83 c4 60             	add    $0x60,%esp
 851222b:	5b                   	pop    %ebx
 851222c:	5e                   	pop    %esi
 851222d:	5d                   	pop    %ebp
 851222e:	c3                   	ret
 851222f:	90                   	nop

```

```c
// CItemList::create_item @ 0x8511fb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int) */

void __thiscall CItemList::create_item(CItemList *this,int param_2,Inven_Item *param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  cMyTrace local_34 [16];
  CItem *local_24;
  int local_20;
  int local_1c;
  int local_10;
  
  Inven_Item::set_add_info(param_3,param_4);
  local_24 = (CItem *)find_item(this,*(int *)(param_3 + 2));
  if (local_24 == (CItem *)0x0) {
    LogManager::logFormat
              (1,"item.cpp","void CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)",
               0x98f,"find_item(%d)",*(undefined4 *)(param_3 + 2));
    *(undefined4 *)(param_3 + 2) = 0xffffffff;
    Inven_Item::set_add_info(param_3,0);
    *(undefined2 *)(param_3 + 0xb) = 0;
    param_3[1] = (Inven_Item)0x0;
    Inven_Item::ResetItemAttr(param_3);
  }
  else {
    (**(code **)(*(int *)local_24 + 8))(local_24,param_3);
    cVar2 = CItem::is_stackable(local_24);
    if (cVar2 != '\0') {
      iVar3 = Inven_Item::get_add_info(param_3);
      if (iVar3 < 0) {
        Inven_Item::set_add_info(param_3,0);
      }
      iVar3 = Inven_Item::get_add_info(param_3);
      if (999 < iVar3) {
        uVar1 = *(undefined4 *)(param_3 + 2);
        uVar4 = Inven_Item::get_add_info(param_3);
        cMyTrace::cMyTrace(local_34,
                           "void CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)",
                           0x9a1,5);
        cMyTrace::operator()
                  (local_34,"CItemList::create_item, add_info >= STACK_LIMIT_ERROR , %d ITEM #%d",
                   uVar4,uVar1);
      }
    }
    stAmplifyOption_t::reset((stAmplifyOption_t *)(param_3 + 0x11));
    if (param_2 == 1) {
      cVar2 = CItemAmplifier::checkInvestableItem(GlobalData::s_itemAmplifier_,local_24,param_3,0);
      if (cVar2 != '\0') {
        CItemAmplifier::generateAmplifyItem(GlobalData::s_itemAmplifier_,local_24,param_3);
      }
      if (param_3[1] == (Inven_Item)0x1) {
        local_20 = CEquipItem::get_endurance((CEquipItem *)local_24);
        local_1c = get_rand_int(100);
        iVar3 = G_CDataManager();
        local_10 = (int)ROUND(((float)local_1c / _DAT_08c96d98) *
                              (float)(int)ROUND(((float)(100 - *(int *)(iVar3 + 0x4a50)) /
                                                _DAT_08c96d94) * (float)local_20) + (float)local_20)
        ;
        if (local_10 < 0) {
          local_10 = 1;
        }
        else if (local_20 < local_10) {
          local_10 = local_20;
        }
        *(short *)(param_3 + 0xb) = (short)local_10;
      }
    }
  }
  return;
}

```

---

## destroy

```asm
// === 08510f06 CItemList::destroy  [0x08510f06-0x8510ff9] ===
 8510f06:	55                   	push   %ebp
 8510f07:	89 e5                	mov    %esp,%ebp
 8510f09:	53                   	push   %ebx
 8510f0a:	83 ec 34             	sub    $0x34,%esp
 8510f0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8510f10:	8d 50 04             	lea    0x4(%eax),%edx
 8510f13:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8510f16:	89 54 24 04          	mov    %edx,0x4(%esp)
 8510f1a:	89 04 24             	mov    %eax,(%esp)
 8510f1d:	e8 b8 36 e8 ff       	call   83945da <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 8510f22:	83 ec 04             	sub    $0x4,%esp
 8510f25:	8b 45 08             	mov    0x8(%ebp),%eax
 8510f28:	8d 50 04             	lea    0x4(%eax),%edx
 8510f2b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8510f2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8510f32:	89 04 24             	mov    %eax,(%esp)
 8510f35:	e8 e2 36 e8 ff       	call   839461c <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8510f3a:	83 ec 04             	sub    $0x4,%esp
 8510f3d:	eb 34                	jmp    8510f73 <_ZN9CItemList7destroyEv+0x6d>
 8510f3f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8510f42:	89 04 24             	mov    %eax,(%esp)
 8510f45:	e8 d0 77 00 00       	call   851871a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEdeEv>
 8510f4a:	8b 40 04             	mov    0x4(%eax),%eax
 8510f4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8510f50:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8510f54:	74 12                	je     8510f68 <_ZN9CItemList7destroyEv+0x62>
 8510f56:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8510f59:	8b 00                	mov    (%eax),%eax
 8510f5b:	83 c0 04             	add    $0x4,%eax
 8510f5e:	8b 10                	mov    (%eax),%edx
 8510f60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8510f63:	89 04 24             	mov    %eax,(%esp)
 8510f66:	ff d2                	call   *%edx
 8510f68:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8510f6b:	89 04 24             	mov    %eax,(%esp)
 8510f6e:	e8 0f 77 00 00       	call   8518682 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 8510f73:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8510f76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8510f7a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8510f7d:	89 04 24             	mov    %eax,(%esp)
 8510f80:	e8 e9 76 00 00       	call   851866e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8510f85:	84 c0                	test   %al,%al
 8510f87:	75 b6                	jne    8510f3f <_ZN9CItemList7destroyEv+0x39>
 8510f89:	8b 45 08             	mov    0x8(%ebp),%eax
 8510f8c:	83 c0 04             	add    $0x4,%eax
 8510f8f:	89 04 24             	mov    %eax,(%esp)
 8510f92:	e8 91 77 00 00       	call   8518728 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 8510f97:	8b 45 08             	mov    0x8(%ebp),%eax
 8510f9a:	8b 00                	mov    (%eax),%eax
 8510f9c:	85 c0                	test   %eax,%eax
 8510f9e:	74 54                	je     8510ff4 <_ZN9CItemList7destroyEv+0xee>
 8510fa0:	8b 45 08             	mov    0x8(%ebp),%eax
 8510fa3:	8b 00                	mov    (%eax),%eax
 8510fa5:	85 c0                	test   %eax,%eax
 8510fa7:	74 42                	je     8510feb <_ZN9CItemList7destroyEv+0xe5>
 8510fa9:	8b 45 08             	mov    0x8(%ebp),%eax
 8510fac:	8b 08                	mov    (%eax),%ecx
 8510fae:	8b 45 08             	mov    0x8(%ebp),%eax
 8510fb1:	8b 00                	mov    (%eax),%eax
 8510fb3:	83 e8 04             	sub    $0x4,%eax
 8510fb6:	8b 10                	mov    (%eax),%edx
 8510fb8:	89 d0                	mov    %edx,%eax
 8510fba:	c1 e0 02             	shl    $0x2,%eax
 8510fbd:	01 d0                	add    %edx,%eax
 8510fbf:	c1 e0 02             	shl    $0x2,%eax
 8510fc2:	8d 1c 01             	lea    (%ecx,%eax,1),%ebx
 8510fc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8510fc8:	8b 00                	mov    (%eax),%eax
 8510fca:	39 c3                	cmp    %eax,%ebx
 8510fcc:	74 0d                	je     8510fdb <_ZN9CItemList7destroyEv+0xd5>
 8510fce:	83 eb 14             	sub    $0x14,%ebx
 8510fd1:	89 1c 24             	mov    %ebx,(%esp)
 8510fd4:	e8 a9 42 00 00       	call   8515282 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8510fd9:	eb ea                	jmp    8510fc5 <_ZN9CItemList7destroyEv+0xbf>
 8510fdb:	8b 45 08             	mov    0x8(%ebp),%eax
 8510fde:	8b 00                	mov    (%eax),%eax
 8510fe0:	83 e8 04             	sub    $0x4,%eax
 8510fe3:	89 04 24             	mov    %eax,(%esp)
 8510fe6:	e8 c5 3b 21 00       	call   8724bb0 <_ZdaPv>
 8510feb:	8b 45 08             	mov    0x8(%ebp),%eax
 8510fee:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8510ff4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8510ff7:	c9                   	leave
 8510ff8:	c3                   	ret
 8510ff9:	90                   	nop

```

```c
// CItemList::destroy @ 0x8510f06

/* CItemList::destroy() */

void __thiscall CItemList::destroy(CItemList *this)

{
  char cVar1;
  int iVar2;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *this_00;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_20 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_18 [8];
  int *local_10;
  
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  begin(local_18);
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  end(local_20);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)local_18,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator*((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                         *)local_18);
    local_10 = *(int **)(iVar2 + 4);
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 4))(local_10);
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                  *)local_18);
  }
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  clear((hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *)
        (this + 4));
  if (*(int *)this != 0) {
    if (*(int *)this != 0) {
      this_00 = (hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>
                 *)(*(int *)this + *(int *)(*(int *)this + -4) * 0x14);
      while (this_00 !=
             *(hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>
               **)this) {
        this_00 = this_00 + -0x14;
        __gnu_cxx::
        hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
        ~hash_map(this_00);
      }
      operator_delete__((void *)(*(int *)this + -4));
    }
    *(undefined4 *)this = 0;
  }
  return;
}

```

---

## find_item

```asm
// === 08511e8a CItemList::find_item  [0x08511e8a-0x8511f1d] ===
 8511e8a:	55                   	push   %ebp
 8511e8b:	89 e5                	mov    %esp,%ebp
 8511e8d:	83 ec 38             	sub    $0x38,%esp
 8511e90:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8511e93:	89 04 24             	mov    %eax,(%esp)
 8511e96:	e8 a1 68 00 00       	call   851873c <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 8511e9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8511e9e:	8d 48 04             	lea    0x4(%eax),%ecx
 8511ea1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8511ea4:	8d 55 0c             	lea    0xc(%ebp),%edx
 8511ea7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8511eab:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8511eaf:	89 04 24             	mov    %eax,(%esp)
 8511eb2:	e8 8b 68 00 00       	call   8518742 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 8511eb7:	83 ec 04             	sub    $0x4,%esp
 8511eba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511ebd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8511ec0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8511ec3:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8511ec6:	8b 45 08             	mov    0x8(%ebp),%eax
 8511ec9:	8d 50 04             	lea    0x4(%eax),%edx
 8511ecc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8511ecf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511ed3:	89 04 24             	mov    %eax,(%esp)
 8511ed6:	e8 41 27 e8 ff       	call   839461c <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8511edb:	83 ec 04             	sub    $0x4,%esp
 8511ede:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8511ee1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511ee5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8511ee8:	89 04 24             	mov    %eax,(%esp)
 8511eeb:	e8 7e 68 00 00       	call   851876e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 8511ef0:	84 c0                	test   %al,%al
 8511ef2:	74 1a                	je     8511f0e <_ZN9CItemList9find_itemEi+0x84>
 8511ef4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8511ef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511efb:	c7 04 24 f0 5d c9 08 	movl   $0x8c95df0,(%esp)
 8511f02:	e8 59 bc b6 ff       	call   807db60 <printf@plt>
 8511f07:	b8 00 00 00 00       	mov    $0x0,%eax
 8511f0c:	eb 0e                	jmp    8511f1c <_ZN9CItemList9find_itemEi+0x92>
 8511f0e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8511f11:	89 04 24             	mov    %eax,(%esp)
 8511f14:	e8 b1 6b 00 00       	call   8518aca <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8511f19:	8b 40 04             	mov    0x4(%eax),%eax
 8511f1c:	c9                   	leave
 8511f1d:	c3                   	ret

```

```c
// CItemList::find_item @ 0x8511e8a

/* CItemList::find_item(int) */

undefined4 __thiscall CItemList::find_item(CItemList *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
  ::_Hashtable_iterator();
  piVar4 = &param_1;
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  find(&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)&local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    printf("[CItemList::find_item] Can\'t find item : index(%d)\n",param_1,piVar4);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## find_item_08511f1e

```asm
// === 08511f1e CItemList::find_item  [0x08511f1e-0x8511fb7] ===
 8511f1e:	55                   	push   %ebp
 8511f1f:	89 e5                	mov    %esp,%ebp
 8511f21:	83 ec 38             	sub    $0x38,%esp
 8511f24:	8b 45 08             	mov    0x8(%ebp),%eax
 8511f27:	8d 50 04             	lea    0x4(%eax),%edx
 8511f2a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8511f2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511f31:	89 04 24             	mov    %eax,(%esp)
 8511f34:	e8 a1 26 e8 ff       	call   83945da <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 8511f39:	83 ec 04             	sub    $0x4,%esp
 8511f3c:	eb 44                	jmp    8511f82 <_ZN9CItemList9find_itemEPKc+0x64>
 8511f3e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8511f41:	89 04 24             	mov    %eax,(%esp)
 8511f44:	e8 81 6b 00 00       	call   8518aca <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8511f49:	8b 40 04             	mov    0x4(%eax),%eax
 8511f4c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8511f4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8511f52:	89 04 24             	mov    %eax,(%esp)
 8511f55:	e8 28 ce c0 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 8511f5a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8511f5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511f61:	89 04 24             	mov    %eax,(%esp)
 8511f64:	e8 77 c5 b6 ff       	call   807e4e0 <strcmp@plt>
 8511f69:	85 c0                	test   %eax,%eax
 8511f6b:	0f 94 c0             	sete   %al
 8511f6e:	84 c0                	test   %al,%al
 8511f70:	74 05                	je     8511f77 <_ZN9CItemList9find_itemEPKc+0x59>
 8511f72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8511f75:	eb 3e                	jmp    8511fb5 <_ZN9CItemList9find_itemEPKc+0x97>
 8511f77:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8511f7a:	89 04 24             	mov    %eax,(%esp)
 8511f7d:	e8 00 67 00 00       	call   8518682 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 8511f82:	8b 45 08             	mov    0x8(%ebp),%eax
 8511f85:	8d 50 04             	lea    0x4(%eax),%edx
 8511f88:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8511f8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511f8f:	89 04 24             	mov    %eax,(%esp)
 8511f92:	e8 85 26 e8 ff       	call   839461c <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8511f97:	83 ec 04             	sub    $0x4,%esp
 8511f9a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8511f9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511fa1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8511fa4:	89 04 24             	mov    %eax,(%esp)
 8511fa7:	e8 c2 66 00 00       	call   851866e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8511fac:	84 c0                	test   %al,%al
 8511fae:	75 8e                	jne    8511f3e <_ZN9CItemList9find_itemEPKc+0x20>
 8511fb0:	b8 00 00 00 00       	mov    $0x0,%eax
 8511fb5:	c9                   	leave
 8511fb6:	c3                   	ret
 8511fb7:	90                   	nop

```

```c
// CItemList::find_item @ 0x8511f1e

/* CItemList::find_item(char const*) */

CItem * __thiscall CItemList::find_item(CItemList *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *__s1;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_20 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_18 [8];
  CItem *local_10;
  
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  begin(local_20);
  while( true ) {
    __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
    end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)local_20,(_Hashtable_iterator *)local_18);
    if (cVar1 == '\0') {
      return (CItem *)0x0;
    }
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)local_20);
    local_10 = *(CItem **)(iVar2 + 4);
    __s1 = (char *)CItem::GetItemName(local_10);
    iVar2 = strcmp(__s1,param_1);
    if (iVar2 == 0) break;
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                  *)local_20);
  }
  return local_10;
}

```

---

## getCeraShopBonusItem

```asm
// === 08512930 CItemList::getCeraShopBonusItem  [0x08512930-0x8512a9f] ===
 8512930:	55                   	push   %ebp
 8512931:	89 e5                	mov    %esp,%ebp
 8512933:	83 ec 38             	sub    $0x38,%esp
 8512936:	8b 45 10             	mov    0x10(%ebp),%eax
 8512939:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 851293f:	8b 45 14             	mov    0x14(%ebp),%eax
 8512942:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8512948:	8b 45 08             	mov    0x8(%ebp),%eax
 851294b:	8d 50 40             	lea    0x40(%eax),%edx
 851294e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8512951:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512955:	89 04 24             	mov    %eax,(%esp)
 8512958:	e8 49 63 00 00       	call   8518ca6 <_ZNKSt6vectorI21stCeraShopBonusInfo_tSaIS0_EE5beginEv>
 851295d:	83 ec 04             	sub    $0x4,%esp
 8512960:	8b 45 08             	mov    0x8(%ebp),%eax
 8512963:	8d 50 40             	lea    0x40(%eax),%edx
 8512966:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8512969:	89 54 24 04          	mov    %edx,0x4(%esp)
 851296d:	89 04 24             	mov    %eax,(%esp)
 8512970:	e8 5d 63 00 00       	call   8518cd2 <_ZNKSt6vectorI21stCeraShopBonusInfo_tSaIS0_EE3endEv>
 8512975:	83 ec 04             	sub    $0x4,%esp
 8512978:	e9 07 01 00 00       	jmp    8512a84 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x154>
 851297d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8512980:	89 04 24             	mov    %eax,(%esp)
 8512983:	e8 b8 63 00 00       	call   8518d40 <_ZNK9__gnu_cxx17__normal_iteratorIPK21stCeraShopBonusInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8512988:	8b 00                	mov    (%eax),%eax
 851298a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 851298d:	7f 1a                	jg     85129a9 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x79>
 851298f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8512992:	89 04 24             	mov    %eax,(%esp)
 8512995:	e8 a6 63 00 00       	call   8518d40 <_ZNK9__gnu_cxx17__normal_iteratorIPK21stCeraShopBonusInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 851299a:	8b 40 04             	mov    0x4(%eax),%eax
 851299d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85129a0:	7c 07                	jl     85129a9 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x79>
 85129a2:	b8 01 00 00 00       	mov    $0x1,%eax
 85129a7:	eb 05                	jmp    85129ae <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x7e>
 85129a9:	b8 00 00 00 00       	mov    $0x0,%eax
 85129ae:	84 c0                	test   %al,%al
 85129b0:	0f 84 c3 00 00 00    	je     8512a79 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x149>
 85129b6:	c7 04 24 e8 03 00 00 	movl   $0x3e8,(%esp)
 85129bd:	e8 c5 f1 19 00       	call   86b1b87 <_Z12get_rand_inti>
 85129c2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85129c5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85129cc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85129cf:	89 04 24             	mov    %eax,(%esp)
 85129d2:	e8 69 63 00 00       	call   8518d40 <_ZNK9__gnu_cxx17__normal_iteratorIPK21stCeraShopBonusInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 85129d7:	8d 50 08             	lea    0x8(%eax),%edx
 85129da:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85129dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85129e1:	89 04 24             	mov    %eax,(%esp)
 85129e4:	e8 61 63 00 00       	call   8518d4a <_ZNKSt6vectorI25stCeraShopBonusItemInfo_tSaIS0_EE5beginEv>
 85129e9:	83 ec 04             	sub    $0x4,%esp
 85129ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85129ef:	89 04 24             	mov    %eax,(%esp)
 85129f2:	e8 49 63 00 00       	call   8518d40 <_ZNK9__gnu_cxx17__normal_iteratorIPK21stCeraShopBonusInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 85129f7:	8d 50 08             	lea    0x8(%eax),%edx
 85129fa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85129fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8512a01:	89 04 24             	mov    %eax,(%esp)
 8512a04:	e8 6d 63 00 00       	call   8518d76 <_ZNKSt6vectorI25stCeraShopBonusItemInfo_tSaIS0_EE3endEv>
 8512a09:	83 ec 04             	sub    $0x4,%esp
 8512a0c:	eb 55                	jmp    8512a63 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x133>
 8512a0e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8512a11:	89 04 24             	mov    %eax,(%esp)
 8512a14:	e8 cb 63 00 00       	call   8518de4 <_ZNK9__gnu_cxx17__normal_iteratorIPK25stCeraShopBonusItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8512a19:	8b 50 08             	mov    0x8(%eax),%edx
 8512a1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512a1f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8512a22:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8512a25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512a28:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8512a2b:	7e 2b                	jle    8512a58 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x128>
 8512a2d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8512a30:	89 04 24             	mov    %eax,(%esp)
 8512a33:	e8 ac 63 00 00       	call   8518de4 <_ZNK9__gnu_cxx17__normal_iteratorIPK25stCeraShopBonusItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8512a38:	8b 10                	mov    (%eax),%edx
 8512a3a:	8b 45 10             	mov    0x10(%ebp),%eax
 8512a3d:	89 10                	mov    %edx,(%eax)
 8512a3f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8512a42:	89 04 24             	mov    %eax,(%esp)
 8512a45:	e8 9a 63 00 00       	call   8518de4 <_ZNK9__gnu_cxx17__normal_iteratorIPK25stCeraShopBonusItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8512a4a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8512a4e:	0f b7 d0             	movzwl %ax,%edx
 8512a51:	8b 45 14             	mov    0x14(%ebp),%eax
 8512a54:	89 10                	mov    %edx,(%eax)
 8512a56:	eb 46                	jmp    8512a9e <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x16e>
 8512a58:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8512a5b:	89 04 24             	mov    %eax,(%esp)
 8512a5e:	e8 6b 63 00 00       	call   8518dce <_ZN9__gnu_cxx17__normal_iteratorIPK25stCeraShopBonusItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 8512a63:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8512a66:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512a6a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8512a6d:	89 04 24             	mov    %eax,(%esp)
 8512a70:	e8 2d 63 00 00       	call   8518da2 <_ZN9__gnu_cxxneIPK25stCeraShopBonusItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8512a75:	84 c0                	test   %al,%al
 8512a77:	75 95                	jne    8512a0e <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0xde>
 8512a79:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8512a7c:	89 04 24             	mov    %eax,(%esp)
 8512a7f:	e8 a6 62 00 00       	call   8518d2a <_ZN9__gnu_cxx17__normal_iteratorIPK21stCeraShopBonusInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 8512a84:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8512a87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512a8b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8512a8e:	89 04 24             	mov    %eax,(%esp)
 8512a91:	e8 68 62 00 00       	call   8518cfe <_ZN9__gnu_cxxneIPK21stCeraShopBonusInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8512a96:	84 c0                	test   %al,%al
 8512a98:	0f 85 df fe ff ff    	jne    851297d <_ZNK9CItemList20getCeraShopBonusItemEiRmRj+0x4d>
 8512a9e:	c9                   	leave
 8512a9f:	c3                   	ret

```

```c
// CItemList::getCeraShopBonusItem @ 0x8512930

/* CItemList::getCeraShopBonusItem(int, unsigned long&, unsigned int&) const */

void __thiscall
CItemList::getCeraShopBonusItem(CItemList *this,int param_1,ulong *param_2,uint *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  ulong *puVar4;
  __normal_iterator local_24 [4];
  __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  *param_2 = 0xffffffff;
  *param_3 = 0;
  std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>::begin();
  std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>::end();
  do {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
                    ::operator->(local_18);
    if ((param_1 < *piVar2) ||
       (iVar3 = __gnu_cxx::
                __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
                ::operator->(local_18), *(int *)(iVar3 + 4) < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_14 = get_rand_int(1000);
      local_10 = 0;
      __gnu_cxx::
      __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
      ::operator->(local_18);
      std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>::begin();
      __gnu_cxx::
      __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
      ::operator->(local_18);
      std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>::end();
      while (bVar1 = __gnu_cxx::operator!=(local_20,local_24), bVar1) {
        iVar3 = __gnu_cxx::
                __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
                ::operator->(local_20);
        local_10 = *(int *)(iVar3 + 8) + local_10;
        if (local_14 < local_10) {
          puVar4 = (ulong *)__gnu_cxx::
                            __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
                            ::operator->(local_20);
          *param_2 = *puVar4;
          iVar3 = __gnu_cxx::
                  __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
                  ::operator->(local_20);
          *param_3 = (uint)*(ushort *)(iVar3 + 4);
          return;
        }
        __gnu_cxx::
        __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
        ::operator++(local_20);
      }
    }
    __gnu_cxx::
    __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
    ::operator++(local_18);
  } while( true );
}

```

---

## get_lotto_item

```asm
// === 08512230 CItemList::get_lotto_item  [0x08512230-0x8512357] ===
 8512230:	55                   	push   %ebp
 8512231:	89 e5                	mov    %esp,%ebp
 8512233:	83 ec 28             	sub    $0x28,%esp
 8512236:	8b 45 10             	mov    0x10(%ebp),%eax
 8512239:	89 45 f0             	mov    %eax,-0x10(%ebp)
 851223c:	8b 45 0c             	mov    0xc(%ebp),%eax
 851223f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8512243:	8b 45 08             	mov    0x8(%ebp),%eax
 8512246:	89 04 24             	mov    %eax,(%esp)
 8512249:	e8 3c fc ff ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 851224e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8512251:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8512255:	75 3d                	jne    8512294 <_ZN9CItemList14get_lotto_itemEiPc+0x64>
 8512257:	8b 45 f0             	mov    -0x10(%ebp),%eax
 851225a:	c7 40 02 00 00 00 00 	movl   $0x0,0x2(%eax)
 8512261:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8512268:	00 
 8512269:	8b 45 f0             	mov    -0x10(%ebp),%eax
 851226c:	89 04 24             	mov    %eax,(%esp)
 851226f:	e8 10 96 bb ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8512274:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8512277:	66 c7 40 0b 00 00    	movw   $0x0,0xb(%eax)
 851227d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8512280:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 8512284:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8512287:	89 04 24             	mov    %eax,(%esp)
 851228a:	e8 03 96 bb ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 851228f:	e9 c2 00 00 00       	jmp    8512356 <_ZN9CItemList14get_lotto_itemEiPc+0x126>
 8512294:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512297:	89 04 24             	mov    %eax,(%esp)
 851229a:	e8 5b f0 bd ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 851229f:	83 f0 01             	xor    $0x1,%eax
 85122a2:	84 c0                	test   %al,%al
 85122a4:	74 3a                	je     85122e0 <_ZN9CItemList14get_lotto_itemEiPc+0xb0>
 85122a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85122a9:	c7 40 02 00 00 00 00 	movl   $0x0,0x2(%eax)
 85122b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85122b7:	00 
 85122b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85122bb:	89 04 24             	mov    %eax,(%esp)
 85122be:	e8 c1 95 bb ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 85122c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85122c6:	66 c7 40 0b 00 00    	movw   $0x0,0xb(%eax)
 85122cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85122cf:	c6 40 01 01          	movb   $0x1,0x1(%eax)
 85122d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85122d6:	89 04 24             	mov    %eax,(%esp)
 85122d9:	e8 b4 95 bb ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 85122de:	eb 76                	jmp    8512356 <_ZN9CItemList14get_lotto_itemEiPc+0x126>
 85122e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85122e3:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 85122e9:	83 f8 06             	cmp    $0x6,%eax
 85122ec:	74 56                	je     8512344 <_ZN9CItemList14get_lotto_itemEiPc+0x114>
 85122ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85122f1:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 85122f7:	83 f8 07             	cmp    $0x7,%eax
 85122fa:	74 48                	je     8512344 <_ZN9CItemList14get_lotto_itemEiPc+0x114>
 85122fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85122ff:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 8512305:	83 f8 0d             	cmp    $0xd,%eax
 8512308:	74 3a                	je     8512344 <_ZN9CItemList14get_lotto_itemEiPc+0x114>
 851230a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 851230d:	c7 40 02 00 00 00 00 	movl   $0x0,0x2(%eax)
 8512314:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 851231b:	00 
 851231c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 851231f:	89 04 24             	mov    %eax,(%esp)
 8512322:	e8 5d 95 bb ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8512327:	8b 45 f0             	mov    -0x10(%ebp),%eax
 851232a:	66 c7 40 0b 00 00    	movw   $0x0,0xb(%eax)
 8512330:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8512333:	c6 40 01 02          	movb   $0x2,0x1(%eax)
 8512337:	8b 45 f0             	mov    -0x10(%ebp),%eax
 851233a:	89 04 24             	mov    %eax,(%esp)
 851233d:	e8 50 95 bb ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 8512342:	eb 12                	jmp    8512356 <_ZN9CItemList14get_lotto_itemEiPc+0x126>
 8512344:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8512347:	8b 55 10             	mov    0x10(%ebp),%edx
 851234a:	89 54 24 04          	mov    %edx,0x4(%esp)
 851234e:	89 04 24             	mov    %eax,(%esp)
 8512351:	e8 a6 c8 ff ff       	call   850ebfc <_ZN14CStackableItem14get_lotto_itemEPc>
 8512356:	c9                   	leave
 8512357:	c3                   	ret

```

```c
// CItemList::get_lotto_item @ 0x8512230

/* CItemList::get_lotto_item(int, char*) */

void __thiscall CItemList::get_lotto_item(CItemList *this,int param_1,char *param_2)

{
  char cVar1;
  CItem *this_00;
  
  this_00 = (CItem *)find_item(this,param_1);
  if (this_00 == (CItem *)0x0) {
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    Inven_Item::set_add_info((Inven_Item *)param_2,0);
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[1] = '\0';
    Inven_Item::ResetItemAttr((Inven_Item *)param_2);
  }
  else {
    cVar1 = CItem::is_stackable(this_00);
    if (cVar1 == '\x01') {
      if (((*(int *)(this_00 + 0x2b0) == 6) || (*(int *)(this_00 + 0x2b0) == 7)) ||
         (*(int *)(this_00 + 0x2b0) == 0xd)) {
        CStackableItem::get_lotto_item((CStackableItem *)this_00,param_2);
      }
      else {
        param_2[2] = '\0';
        param_2[3] = '\0';
        param_2[4] = '\0';
        param_2[5] = '\0';
        Inven_Item::set_add_info((Inven_Item *)param_2,0);
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[1] = '\x02';
        Inven_Item::ResetItemAttr((Inven_Item *)param_2);
      }
    }
    else {
      param_2[2] = '\0';
      param_2[3] = '\0';
      param_2[4] = '\0';
      param_2[5] = '\0';
      Inven_Item::set_add_info((Inven_Item *)param_2,0);
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[1] = '\x01';
      Inven_Item::ResetItemAttr((Inven_Item *)param_2);
    }
  }
  return;
}

```

---

## init

```asm
// === 08510ffa CItemList::init  [0x08510ffa-0x851129d] ===
 8510ffa:	55                   	push   %ebp
 8510ffb:	89 e5                	mov    %esp,%ebp
 8510ffd:	57                   	push   %edi
 8510ffe:	56                   	push   %esi
 8510fff:	53                   	push   %ebx
 8511000:	83 ec 3c             	sub    $0x3c,%esp
 8511003:	c7 04 24 b8 0f 00 00 	movl   $0xfb8,(%esp)
 851100a:	e8 b1 1d 21 00       	call   8722dc0 <_Znaj>
 851100f:	89 c3                	mov    %eax,%ebx
 8511011:	89 d8                	mov    %ebx,%eax
 8511013:	c7 00 c9 00 00 00    	movl   $0xc9,(%eax)
 8511019:	89 d8                	mov    %ebx,%eax
 851101b:	8d 78 04             	lea    0x4(%eax),%edi
 851101e:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8511021:	be c8 00 00 00       	mov    $0xc8,%esi
 8511026:	eb 12                	jmp    851103a <_ZN9CItemList4initEv+0x40>
 8511028:	8b 45 dc             	mov    -0x24(%ebp),%eax
 851102b:	89 04 24             	mov    %eax,(%esp)
 851102e:	e8 db 72 00 00       	call   851830e <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 8511033:	83 45 dc 14          	addl   $0x14,-0x24(%ebp)
 8511037:	83 ee 01             	sub    $0x1,%esi
 851103a:	83 fe ff             	cmp    $0xffffffff,%esi
 851103d:	0f 95 c0             	setne  %al
 8511040:	84 c0                	test   %al,%al
 8511042:	75 e4                	jne    8511028 <_ZN9CItemList4initEv+0x2e>
 8511044:	eb 4f                	jmp    8511095 <_ZN9CItemList4initEv+0x9b>
 8511046:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8511049:	89 45 e0             	mov    %eax,-0x20(%ebp)
 851104c:	85 ff                	test   %edi,%edi
 851104e:	74 27                	je     8511077 <_ZN9CItemList4initEv+0x7d>
 8511050:	b8 c8 00 00 00       	mov    $0xc8,%eax
 8511055:	29 f0                	sub    %esi,%eax
 8511057:	89 c2                	mov    %eax,%edx
 8511059:	89 d0                	mov    %edx,%eax
 851105b:	c1 e0 02             	shl    $0x2,%eax
 851105e:	01 d0                	add    %edx,%eax
 8511060:	c1 e0 02             	shl    $0x2,%eax
 8511063:	8d 34 07             	lea    (%edi,%eax,1),%esi
 8511066:	39 fe                	cmp    %edi,%esi
 8511068:	74 0d                	je     8511077 <_ZN9CItemList4initEv+0x7d>
 851106a:	83 ee 14             	sub    $0x14,%esi
 851106d:	89 34 24             	mov    %esi,(%esp)
 8511070:	e8 0d 42 00 00       	call   8515282 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8511075:	eb ef                	jmp    8511066 <_ZN9CItemList4initEv+0x6c>
 8511077:	8b 45 e0             	mov    -0x20(%ebp),%eax
 851107a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 851107d:	89 d6                	mov    %edx,%esi
 851107f:	89 c7                	mov    %eax,%edi
 8511081:	89 1c 24             	mov    %ebx,(%esp)
 8511084:	e8 27 3b 21 00       	call   8724bb0 <_ZdaPv>
 8511089:	89 f8                	mov    %edi,%eax
 851108b:	89 f2                	mov    %esi,%edx
 851108d:	89 04 24             	mov    %eax,(%esp)
 8511090:	e8 bb 26 5d 00       	call   8ae3750 <_Unwind_Resume>
 8511095:	89 d8                	mov    %ebx,%eax
 8511097:	8d 50 04             	lea    0x4(%eax),%edx
 851109a:	8b 45 08             	mov    0x8(%ebp),%eax
 851109d:	89 10                	mov    %edx,(%eax)
 851109f:	8b 45 08             	mov    0x8(%ebp),%eax
 85110a2:	8b 00                	mov    (%eax),%eax
 85110a4:	85 c0                	test   %eax,%eax
 85110a6:	75 36                	jne    85110de <_ZN9CItemList4initEv+0xe4>
 85110a8:	c7 44 24 10 f4 5a c9 	movl   $0x8c95af4,0x10(%esp)
 85110af:	08 
 85110b0:	c7 44 24 0c 8c 07 00 	movl   $0x78c,0xc(%esp)
 85110b7:	00 
 85110b8:	c7 44 24 08 ee 6c c9 	movl   $0x8c96cee,0x8(%esp)
 85110bf:	08 
 85110c0:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 85110c7:	08 
 85110c8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85110cf:	e8 36 2b 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85110d4:	b8 00 00 00 00       	mov    $0x0,%eax
 85110d9:	e9 b8 01 00 00       	jmp    8511296 <_ZN9CItemList4initEv+0x29c>
 85110de:	8b 45 08             	mov    0x8(%ebp),%eax
 85110e1:	89 04 24             	mov    %eax,(%esp)
 85110e4:	e8 4f 06 00 00       	call   8511738 <_ZN9CItemList15load_item_filesEv>
 85110e9:	83 f0 01             	xor    $0x1,%eax
 85110ec:	84 c0                	test   %al,%al
 85110ee:	74 36                	je     8511126 <_ZN9CItemList4initEv+0x12c>
 85110f0:	c7 44 24 10 35 5b c9 	movl   $0x8c95b35,0x10(%esp)
 85110f7:	08 
 85110f8:	c7 44 24 0c 92 07 00 	movl   $0x792,0xc(%esp)
 85110ff:	00 
 8511100:	c7 44 24 08 ee 6c c9 	movl   $0x8c96cee,0x8(%esp)
 8511107:	08 
 8511108:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 851110f:	08 
 8511110:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511117:	e8 ee 2a 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 851111c:	b8 00 00 00 00       	mov    $0x0,%eax
 8511121:	e9 70 01 00 00       	jmp    8511296 <_ZN9CItemList4initEv+0x29c>
 8511126:	a1 50 f7 41 09       	mov    0x941f750,%eax
 851112b:	89 04 24             	mov    %eax,(%esp)
 851112e:	e8 e5 cc e1 ff       	call   832de18 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv>
 8511133:	e8 63 b0 bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8511138:	89 04 24             	mov    %eax,(%esp)
 851113b:	e8 a6 2e 00 00       	call   8513fe6 <_ZN12CDataManager20GetCeraShopGoodsNameEv>
 8511140:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511144:	8b 45 08             	mov    0x8(%ebp),%eax
 8511147:	89 04 24             	mov    %eax,(%esp)
 851114a:	e8 8b 12 00 00       	call   85123da <_ZN9CItemList15Load_Goods_FileEPKc>
 851114f:	83 f0 01             	xor    $0x1,%eax
 8511152:	84 c0                	test   %al,%al
 8511154:	74 36                	je     851118c <_ZN9CItemList4initEv+0x192>
 8511156:	c7 44 24 10 4c 5b c9 	movl   $0x8c95b4c,0x10(%esp)
 851115d:	08 
 851115e:	c7 44 24 0c a5 07 00 	movl   $0x7a5,0xc(%esp)
 8511165:	00 
 8511166:	c7 44 24 08 ee 6c c9 	movl   $0x8c96cee,0x8(%esp)
 851116d:	08 
 851116e:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511175:	08 
 8511176:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 851117d:	e8 88 2a 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8511182:	b8 00 00 00 00       	mov    $0x0,%eax
 8511187:	e9 0a 01 00 00       	jmp    8511296 <_ZN9CItemList4initEv+0x29c>
 851118c:	e8 0a b0 bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8511191:	89 04 24             	mov    %eax,(%esp)
 8511194:	e8 65 2e 00 00       	call   8513ffe <_ZN12CDataManager19SuddenShopFileName1Ev>
 8511199:	89 44 24 04          	mov    %eax,0x4(%esp)
 851119d:	8b 45 08             	mov    0x8(%ebp),%eax
 85111a0:	89 04 24             	mov    %eax,(%esp)
 85111a3:	e8 32 12 00 00       	call   85123da <_ZN9CItemList15Load_Goods_FileEPKc>
 85111a8:	83 f0 01             	xor    $0x1,%eax
 85111ab:	84 c0                	test   %al,%al
 85111ad:	74 36                	je     85111e5 <_ZN9CItemList4initEv+0x1eb>
 85111af:	c7 44 24 10 7c 5b c9 	movl   $0x8c95b7c,0x10(%esp)
 85111b6:	08 
 85111b7:	c7 44 24 0c c8 07 00 	movl   $0x7c8,0xc(%esp)
 85111be:	00 
 85111bf:	c7 44 24 08 ee 6c c9 	movl   $0x8c96cee,0x8(%esp)
 85111c6:	08 
 85111c7:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 85111ce:	08 
 85111cf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85111d6:	e8 2f 2a 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85111db:	b8 00 00 00 00       	mov    $0x0,%eax
 85111e0:	e9 b1 00 00 00       	jmp    8511296 <_ZN9CItemList4initEv+0x29c>
 85111e5:	e8 b1 af bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 85111ea:	89 04 24             	mov    %eax,(%esp)
 85111ed:	e8 24 2e 00 00       	call   8514016 <_ZN12CDataManager19SuddenShopFileName2Ev>
 85111f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85111f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85111f9:	89 04 24             	mov    %eax,(%esp)
 85111fc:	e8 d9 11 00 00       	call   85123da <_ZN9CItemList15Load_Goods_FileEPKc>
 8511201:	83 f0 01             	xor    $0x1,%eax
 8511204:	84 c0                	test   %al,%al
 8511206:	74 33                	je     851123b <_ZN9CItemList4initEv+0x241>
 8511208:	c7 44 24 10 b0 5b c9 	movl   $0x8c95bb0,0x10(%esp)
 851120f:	08 
 8511210:	c7 44 24 0c ce 07 00 	movl   $0x7ce,0xc(%esp)
 8511217:	00 
 8511218:	c7 44 24 08 ee 6c c9 	movl   $0x8c96cee,0x8(%esp)
 851121f:	08 
 8511220:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511227:	08 
 8511228:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 851122f:	e8 d6 29 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8511234:	b8 00 00 00 00       	mov    $0x0,%eax
 8511239:	eb 5b                	jmp    8511296 <_ZN9CItemList4initEv+0x29c>
 851123b:	e8 5b af bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8511240:	89 04 24             	mov    %eax,(%esp)
 8511243:	e8 e6 2d 00 00       	call   851402e <_ZN12CDataManager19SuddenShopFileName3Ev>
 8511248:	89 44 24 04          	mov    %eax,0x4(%esp)
 851124c:	8b 45 08             	mov    0x8(%ebp),%eax
 851124f:	89 04 24             	mov    %eax,(%esp)
 8511252:	e8 83 11 00 00       	call   85123da <_ZN9CItemList15Load_Goods_FileEPKc>
 8511257:	83 f0 01             	xor    $0x1,%eax
 851125a:	84 c0                	test   %al,%al
 851125c:	74 33                	je     8511291 <_ZN9CItemList4initEv+0x297>
 851125e:	c7 44 24 10 e4 5b c9 	movl   $0x8c95be4,0x10(%esp)
 8511265:	08 
 8511266:	c7 44 24 0c d4 07 00 	movl   $0x7d4,0xc(%esp)
 851126d:	00 
 851126e:	c7 44 24 08 ee 6c c9 	movl   $0x8c96cee,0x8(%esp)
 8511275:	08 
 8511276:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 851127d:	08 
 851127e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511285:	e8 80 29 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 851128a:	b8 00 00 00 00       	mov    $0x0,%eax
 851128f:	eb 05                	jmp    8511296 <_ZN9CItemList4initEv+0x29c>
 8511291:	b8 01 00 00 00       	mov    $0x1,%eax
 8511296:	83 c4 3c             	add    $0x3c,%esp
 8511299:	5b                   	pop    %ebx
 851129a:	5e                   	pop    %esi
 851129b:	5f                   	pop    %edi
 851129c:	5d                   	pop    %ebp
 851129d:	c3                   	ret

```

```c
// CItemList::init @ 0x8510ffa

/* CItemList::init() */

undefined4 __thiscall CItemList::init(CItemList *this)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CDataManager *pCVar4;
  char *pcVar5;
  int iVar6;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *local_28;
  
  puVar2 = operator_new__(0xfb8);
  *puVar2 = 0xc9;
  local_28 = (hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *)
             (puVar2 + 1);
  for (iVar6 = 200; iVar6 != -1; iVar6 = iVar6 + -1) {
                    /* try { // try from 0851102e to 08511032 has its CatchHandler @ 08511046 */
    __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
    hash_map(local_28);
    local_28 = local_28 + 0x14;
  }
  *(undefined4 **)this = puVar2 + 1;
  if (*(int *)this == 0) {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::init()",0x78c,
               "m_pGradeItemList = new ITEM_LIST[ITEM_GRADE_COUNT] fail");
    uVar3 = 0;
  }
  else {
    cVar1 = load_item_files(this);
    if (cVar1 == '\x01') {
      ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem();
      pCVar4 = (CDataManager *)G_CDataManager();
      pcVar5 = (char *)CDataManager::GetCeraShopGoodsName(pCVar4);
      cVar1 = Load_Goods_File(this,pcVar5);
      if (cVar1 == '\x01') {
        pCVar4 = (CDataManager *)G_CDataManager();
        pcVar5 = (char *)CDataManager::SuddenShopFileName1(pCVar4);
        cVar1 = Load_Goods_File(this,pcVar5);
        if (cVar1 == '\x01') {
          pCVar4 = (CDataManager *)G_CDataManager();
          pcVar5 = (char *)CDataManager::SuddenShopFileName2(pCVar4);
          cVar1 = Load_Goods_File(this,pcVar5);
          if (cVar1 == '\x01') {
            pCVar4 = (CDataManager *)G_CDataManager();
            pcVar5 = (char *)CDataManager::SuddenShopFileName3(pCVar4);
            cVar1 = Load_Goods_File(this,pcVar5);
            if (cVar1 == '\x01') {
              uVar3 = 1;
            }
            else {
              LogManager::logFormat
                        (1,"item.cpp","bool CItemList::init()",0x7d4,
                         "SuddenShopFileName3() of ItemVendingMachine fail ");
              uVar3 = 0;
            }
          }
          else {
            LogManager::logFormat
                      (1,"item.cpp","bool CItemList::init()",0x7ce,
                       "SuddenShopFileName2() of ItemVendingMachine fail ");
            uVar3 = 0;
          }
        }
        else {
          LogManager::logFormat
                    (1,"item.cpp","bool CItemList::init()",0x7c8,
                     "SuddenShopFileName1() of ItemVendingMachine fail ");
          uVar3 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"item.cpp","bool CItemList::init()",0x7a5,
                   "Load_Goods_File() of ItemVendingMachine fail ");
        uVar3 = 0;
      }
    }
    else {
      LogManager::logFormat(1,"item.cpp","bool CItemList::init()",0x792,"load_item_files() fail");
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## insert_item

```asm
// === 0851129e CItemList::insert_item  [0x0851129e-0x8511737] ===
 851129e:	55                   	push   %ebp
 851129f:	89 e5                	mov    %esp,%ebp
 85112a1:	56                   	push   %esi
 85112a2:	53                   	push   %ebx
 85112a3:	81 ec 30 01 00 00    	sub    $0x130,%esp
 85112a9:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 85112af:	89 04 24             	mov    %eax,(%esp)
 85112b2:	e8 85 74 00 00       	call   851873c <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 85112b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85112ba:	8b 08                	mov    (%eax),%ecx
 85112bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 85112bf:	89 d0                	mov    %edx,%eax
 85112c1:	c1 e0 02             	shl    $0x2,%eax
 85112c4:	01 d0                	add    %edx,%eax
 85112c6:	c1 e0 02             	shl    $0x2,%eax
 85112c9:	01 c1                	add    %eax,%ecx
 85112cb:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 85112d1:	8d 55 10             	lea    0x10(%ebp),%edx
 85112d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85112d8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85112dc:	89 04 24             	mov    %eax,(%esp)
 85112df:	e8 5e 74 00 00       	call   8518742 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 85112e4:	83 ec 04             	sub    $0x4,%esp
 85112e7:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 85112ed:	8b 95 f4 fe ff ff    	mov    -0x10c(%ebp),%edx
 85112f3:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 85112f9:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 85112ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8511302:	8b 08                	mov    (%eax),%ecx
 8511304:	8b 55 0c             	mov    0xc(%ebp),%edx
 8511307:	89 d0                	mov    %edx,%eax
 8511309:	c1 e0 02             	shl    $0x2,%eax
 851130c:	01 d0                	add    %edx,%eax
 851130e:	c1 e0 02             	shl    $0x2,%eax
 8511311:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8511314:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 851131a:	89 54 24 04          	mov    %edx,0x4(%esp)
 851131e:	89 04 24             	mov    %eax,(%esp)
 8511321:	e8 f6 32 e8 ff       	call   839461c <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8511326:	83 ec 04             	sub    $0x4,%esp
 8511329:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 851132f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511333:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8511339:	89 04 24             	mov    %eax,(%esp)
 851133c:	e8 2d 74 00 00       	call   851876e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 8511341:	84 c0                	test   %al,%al
 8511343:	0f 84 a9 00 00 00    	je     85113f2 <_ZN9CItemList11insert_itemEiiP5CItem+0x154>
 8511349:	8d 45 14             	lea    0x14(%ebp),%eax
 851134c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8511350:	8d 45 10             	lea    0x10(%ebp),%eax
 8511353:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511357:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 851135d:	89 04 24             	mov    %eax,(%esp)
 8511360:	e8 1d 74 00 00       	call   8518782 <_ZNSt4pairIKiP5CItemEC1IRiRS2_EEOT_OT0_>
 8511365:	8b 45 08             	mov    0x8(%ebp),%eax
 8511368:	8b 08                	mov    (%eax),%ecx
 851136a:	8b 55 0c             	mov    0xc(%ebp),%edx
 851136d:	89 d0                	mov    %edx,%eax
 851136f:	c1 e0 02             	shl    $0x2,%eax
 8511372:	01 d0                	add    %edx,%eax
 8511374:	c1 e0 02             	shl    $0x2,%eax
 8511377:	01 c1                	add    %eax,%ecx
 8511379:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 851137f:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 8511385:	89 54 24 08          	mov    %edx,0x8(%esp)
 8511389:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 851138d:	89 04 24             	mov    %eax,(%esp)
 8511390:	e8 1b 74 00 00       	call   85187b0 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 8511395:	83 ec 04             	sub    $0x4,%esp
 8511398:	8d 45 14             	lea    0x14(%ebp),%eax
 851139b:	89 44 24 08          	mov    %eax,0x8(%esp)
 851139f:	8d 45 10             	lea    0x10(%ebp),%eax
 85113a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85113a6:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 85113ac:	89 04 24             	mov    %eax,(%esp)
 85113af:	e8 ce 73 00 00       	call   8518782 <_ZNSt4pairIKiP5CItemEC1IRiRS2_EEOT_OT0_>
 85113b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85113b7:	8d 48 04             	lea    0x4(%eax),%ecx
 85113ba:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 85113c0:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 85113c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85113ca:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85113ce:	89 04 24             	mov    %eax,(%esp)
 85113d1:	e8 da 73 00 00       	call   85187b0 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 85113d6:	83 ec 04             	sub    $0x4,%esp
 85113d9:	8b 45 14             	mov    0x14(%ebp),%eax
 85113dc:	89 04 24             	mov    %eax,(%esp)
 85113df:	e8 20 30 00 00       	call   8514404 <_ZN5CItem21GetQuestItemDropBounsEv>
 85113e4:	85 c0                	test   %eax,%eax
 85113e6:	0f 95 c0             	setne  %al
 85113e9:	84 c0                	test   %al,%al
 85113eb:	75 49                	jne    8511436 <_ZN9CItemList11insert_itemEiiP5CItem+0x198>
 85113ed:	e9 c0 00 00 00       	jmp    85114b2 <_ZN9CItemList11insert_itemEiiP5CItem+0x214>
 85113f2:	8b 45 10             	mov    0x10(%ebp),%eax
 85113f5:	89 44 24 18          	mov    %eax,0x18(%esp)
 85113f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85113fc:	89 44 24 14          	mov    %eax,0x14(%esp)
 8511400:	c7 44 24 10 18 5c c9 	movl   $0x8c95c18,0x10(%esp)
 8511407:	08 
 8511408:	c7 44 24 0c 1f 08 00 	movl   $0x81f,0xc(%esp)
 851140f:	00 
 8511410:	c7 44 24 08 c0 6c c9 	movl   $0x8c96cc0,0x8(%esp)
 8511417:	08 
 8511418:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 851141f:	08 
 8511420:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511427:	e8 de 27 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 851142c:	b8 00 00 00 00       	mov    $0x0,%eax
 8511431:	e9 f8 02 00 00       	jmp    851172e <_ZN9CItemList11insert_itemEiiP5CItem+0x490>
 8511436:	8b 45 14             	mov    0x14(%ebp),%eax
 8511439:	89 04 24             	mov    %eax,(%esp)
 851143c:	e8 c3 2f 00 00       	call   8514404 <_ZN5CItem21GetQuestItemDropBounsEv>
 8511441:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8511447:	8b 45 10             	mov    0x10(%ebp),%eax
 851144a:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8511450:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8511456:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 851145c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8511460:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8511466:	89 54 24 04          	mov    %edx,0x4(%esp)
 851146a:	89 04 24             	mov    %eax,(%esp)
 851146d:	e8 6a 73 00 00       	call   85187dc <_ZSt9make_pairImiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8511472:	83 ec 04             	sub    $0x4,%esp
 8511475:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 851147b:	89 44 24 04          	mov    %eax,0x4(%esp)
 851147f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8511485:	89 04 24             	mov    %eax,(%esp)
 8511488:	e8 2f 19 e8 ff       	call   8392dbc <_ZNSt4pairIKmiEC1ImiEEOS_IT_T0_E>
 851148d:	8b 45 08             	mov    0x8(%ebp),%eax
 8511490:	8d 48 5c             	lea    0x5c(%eax),%ecx
 8511493:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8511499:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 851149f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85114a3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85114a7:	89 04 24             	mov    %eax,(%esp)
 85114aa:	e8 3d 19 e8 ff       	call   8392dec <_ZNSt3mapImiSt4lessImESaISt4pairIKmiEEE6insertERKS4_>
 85114af:	83 ec 04             	sub    $0x4,%esp
 85114b2:	8b 45 14             	mov    0x14(%ebp),%eax
 85114b5:	8b 00                	mov    (%eax),%eax
 85114b7:	83 c0 4c             	add    $0x4c,%eax
 85114ba:	8b 10                	mov    (%eax),%edx
 85114bc:	8b 45 14             	mov    0x14(%ebp),%eax
 85114bf:	89 04 24             	mov    %eax,(%esp)
 85114c2:	ff d2                	call   *%edx
 85114c4:	84 c0                	test   %al,%al
 85114c6:	0f 84 5d 02 00 00    	je     8511729 <_ZN9CItemList11insert_itemEiiP5CItem+0x48b>
 85114cc:	8b 45 14             	mov    0x14(%ebp),%eax
 85114cf:	89 04 24             	mov    %eax,(%esp)
 85114d2:	e8 3b fe bd ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 85114d7:	0f b7 f0             	movzwl %ax,%esi
 85114da:	8b 45 14             	mov    0x14(%ebp),%eax
 85114dd:	89 04 24             	mov    %eax,(%esp)
 85114e0:	e8 09 fe bd ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 85114e5:	0f b6 d8             	movzbl %al,%ebx
 85114e8:	8b 45 14             	mov    0x14(%ebp),%eax
 85114eb:	89 04 24             	mov    %eax,(%esp)
 85114ee:	e8 e3 fd bd ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85114f3:	0f b6 c0             	movzbl %al,%eax
 85114f6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85114fa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85114fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511502:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8511508:	89 04 24             	mov    %eax,(%esp)
 851150b:	e8 72 2a 00 00       	call   8513f82 <_ZN11BaseItemKeyC1Ehht>
 8511510:	e8 86 ac bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8511515:	8d 88 70 4e 00 00    	lea    0x4e70(%eax),%ecx
 851151b:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8511521:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8511527:	89 54 24 08          	mov    %edx,0x8(%esp)
 851152b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 851152f:	89 04 24             	mov    %eax,(%esp)
 8511532:	e8 ef 72 00 00       	call   8518826 <_ZNSt3mapIiS_Ii13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE4findERS4_>
 8511537:	83 ec 04             	sub    $0x4,%esp
 851153a:	8b 45 14             	mov    0x14(%ebp),%eax
 851153d:	89 04 24             	mov    %eax,(%esp)
 8511540:	e8 03 f7 bf ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8511545:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 851154b:	e8 4b ac bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8511550:	8d 90 70 4e 00 00    	lea    0x4e70(%eax),%edx
 8511556:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 851155c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511560:	89 04 24             	mov    %eax,(%esp)
 8511563:	e8 62 17 e8 ff       	call   8392cca <_ZNSt3mapIiS_Ii13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE3endEv>
 8511568:	83 ec 04             	sub    $0x4,%esp
 851156b:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8511571:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511575:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 851157b:	89 04 24             	mov    %eax,(%esp)
 851157e:	e8 6d 17 e8 ff       	call   8392cf0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEneERKSA_>
 8511583:	84 c0                	test   %al,%al
 8511585:	74 6e                	je     85115f5 <_ZN9CItemList11insert_itemEiiP5CItem+0x357>
 8511587:	8b 45 14             	mov    0x14(%ebp),%eax
 851158a:	89 04 24             	mov    %eax,(%esp)
 851158d:	e8 c2 f6 bf ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8511592:	89 45 98             	mov    %eax,-0x68(%ebp)
 8511595:	8d 45 90             	lea    -0x70(%ebp),%eax
 8511598:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 851159e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85115a2:	8d 55 98             	lea    -0x68(%ebp),%edx
 85115a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85115a9:	89 04 24             	mov    %eax,(%esp)
 85115ac:	e8 a1 72 00 00       	call   8518852 <_ZSt9make_pairIiR13BaseItemValueESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 85115b1:	83 ec 04             	sub    $0x4,%esp
 85115b4:	8d 45 90             	lea    -0x70(%ebp),%eax
 85115b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85115bb:	8d 45 88             	lea    -0x78(%ebp),%eax
 85115be:	89 04 24             	mov    %eax,(%esp)
 85115c1:	e8 d2 72 00 00       	call   8518898 <_ZNSt4pairIKi13BaseItemValueEC1IiS1_EEOS_IT_T0_E>
 85115c6:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 85115cc:	89 04 24             	mov    %eax,(%esp)
 85115cf:	e8 4e 17 e8 ff       	call   8392d22 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85115d4:	8d 48 04             	lea    0x4(%eax),%ecx
 85115d7:	8d 45 80             	lea    -0x80(%ebp),%eax
 85115da:	8d 55 88             	lea    -0x78(%ebp),%edx
 85115dd:	89 54 24 08          	mov    %edx,0x8(%esp)
 85115e1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85115e5:	89 04 24             	mov    %eax,(%esp)
 85115e8:	e8 db 72 00 00       	call   85188c8 <_ZNSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 85115ed:	83 ec 04             	sub    $0x4,%esp
 85115f0:	e9 34 01 00 00       	jmp    8511729 <_ZN9CItemList11insert_itemEiiP5CItem+0x48b>
 85115f5:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 85115fb:	89 04 24             	mov    %eax,(%esp)
 85115fe:	e8 f1 72 00 00       	call   85188f4 <_ZNSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 8511603:	8b 45 14             	mov    0x14(%ebp),%eax
 8511606:	89 04 24             	mov    %eax,(%esp)
 8511609:	e8 46 f6 bf ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 851160e:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8511611:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8511614:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 851161a:	89 54 24 08          	mov    %edx,0x8(%esp)
 851161e:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8511621:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511625:	89 04 24             	mov    %eax,(%esp)
 8511628:	e8 25 72 00 00       	call   8518852 <_ZSt9make_pairIiR13BaseItemValueESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 851162d:	83 ec 04             	sub    $0x4,%esp
 8511630:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8511633:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511637:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 851163a:	89 04 24             	mov    %eax,(%esp)
 851163d:	e8 56 72 00 00       	call   8518898 <_ZNSt4pairIKi13BaseItemValueEC1IiS1_EEOS_IT_T0_E>
 8511642:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8511645:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8511648:	89 54 24 08          	mov    %edx,0x8(%esp)
 851164c:	8d 95 00 ff ff ff    	lea    -0x100(%ebp),%edx
 8511652:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511656:	89 04 24             	mov    %eax,(%esp)
 8511659:	e8 6a 72 00 00       	call   85188c8 <_ZNSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 851165e:	83 ec 04             	sub    $0x4,%esp
 8511661:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8511664:	8d 95 00 ff ff ff    	lea    -0x100(%ebp),%edx
 851166a:	89 54 24 08          	mov    %edx,0x8(%esp)
 851166e:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8511674:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511678:	89 04 24             	mov    %eax,(%esp)
 851167b:	e8 87 72 00 00       	call   8518907 <_ZSt9make_pairIRiRSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS2_EEEES5_INSt17__decay_and_stripIT_E6__typeENSB_IT0_E6__typeEEOSC_OSF_>
 8511680:	83 ec 04             	sub    $0x4,%esp
 8511683:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8511686:	89 44 24 04          	mov    %eax,0x4(%esp)
 851168a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 851168d:	89 04 24             	mov    %eax,(%esp)
 8511690:	e8 b7 72 00 00       	call   851894c <_ZNSt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS_IS0_S2_EEEEC1IiS7_EEOS_IT_T0_E>
 8511695:	e8 01 ab bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 851169a:	8d 88 70 4e 00 00    	lea    0x4e70(%eax),%ecx
 85116a0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85116a3:	8d 55 c0             	lea    -0x40(%ebp),%edx
 85116a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85116aa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85116ae:	89 04 24             	mov    %eax,(%esp)
 85116b1:	e8 d0 72 00 00       	call   8518986 <_ZNSt3mapIiS_Ii13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE6insertERKS8_>
 85116b6:	83 ec 04             	sub    $0x4,%esp
 85116b9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85116bc:	89 04 24             	mov    %eax,(%esp)
 85116bf:	e8 36 d8 eb ff       	call   83ceefa <_ZNSt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS_IS0_S2_EEEED1Ev>
 85116c4:	eb 2a                	jmp    85116f0 <_ZN9CItemList11insert_itemEiiP5CItem+0x452>
 85116c6:	89 d3                	mov    %edx,%ebx
 85116c8:	89 c6                	mov    %eax,%esi
 85116ca:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85116cd:	89 04 24             	mov    %eax,(%esp)
 85116d0:	e8 25 d8 eb ff       	call   83ceefa <_ZNSt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS_IS0_S2_EEEED1Ev>
 85116d5:	89 f0                	mov    %esi,%eax
 85116d7:	89 da                	mov    %ebx,%edx
 85116d9:	eb 00                	jmp    85116db <_ZN9CItemList11insert_itemEiiP5CItem+0x43d>
 85116db:	89 d3                	mov    %edx,%ebx
 85116dd:	89 c6                	mov    %eax,%esi
 85116df:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85116e2:	89 04 24             	mov    %eax,(%esp)
 85116e5:	e8 d4 3b 00 00       	call   85152be <_ZNSt4pairIiSt3mapIi13BaseItemValueSt4lessIiESaIS_IKiS1_EEEED1Ev>
 85116ea:	89 f0                	mov    %esi,%eax
 85116ec:	89 da                	mov    %ebx,%edx
 85116ee:	eb 0d                	jmp    85116fd <_ZN9CItemList11insert_itemEiiP5CItem+0x45f>
 85116f0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85116f3:	89 04 24             	mov    %eax,(%esp)
 85116f6:	e8 c3 3b 00 00       	call   85152be <_ZNSt4pairIiSt3mapIi13BaseItemValueSt4lessIiESaIS_IKiS1_EEEED1Ev>
 85116fb:	eb 1e                	jmp    851171b <_ZN9CItemList11insert_itemEiiP5CItem+0x47d>
 85116fd:	89 d3                	mov    %edx,%ebx
 85116ff:	89 c6                	mov    %eax,%esi
 8511701:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8511707:	89 04 24             	mov    %eax,(%esp)
 851170a:	e8 d7 d7 eb ff       	call   83ceee6 <_ZNSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 851170f:	89 f0                	mov    %esi,%eax
 8511711:	89 da                	mov    %ebx,%edx
 8511713:	89 04 24             	mov    %eax,(%esp)
 8511716:	e8 35 20 5d 00       	call   8ae3750 <_Unwind_Resume>
 851171b:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8511721:	89 04 24             	mov    %eax,(%esp)
 8511724:	e8 bd d7 eb ff       	call   83ceee6 <_ZNSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 8511729:	b8 01 00 00 00       	mov    $0x1,%eax
 851172e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8511731:	83 c4 00             	add    $0x0,%esp
 8511734:	5b                   	pop    %ebx
 8511735:	5e                   	pop    %esi
 8511736:	5d                   	pop    %ebp
 8511737:	c3                   	ret

```

```c
// CItemList::insert_item @ 0x851129e

/* CItemList::insert_item(int, int, CItem*) */

undefined4 __thiscall CItemList::insert_item(CItemList *this,int param_1,int param_2,CItem *param_3)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  CItemList *pCVar7;
  pair<int_const,CItem*> *ppVar8;
  int local_114;
  undefined4 local_110;
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_104 [24];
  undefined4 local_ec;
  _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
  local_e8 [4];
  BaseItemKey local_e4 [4];
  int local_e0;
  undefined4 local_dc;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_d8 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_d0 [12];
  pair<int_const,CItem*> local_c4 [8];
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_bc [12];
  pair<int_const,CItem*> local_b0 [8];
  pair local_a8 [8];
  pair<unsigned_long_const,int> local_a0 [8];
  ulong local_98 [2];
  undefined4 local_90;
  int local_8c;
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  local_88 [4];
  pair local_84 [8];
  pair<int_const,BaseItemValue> local_7c [8];
  int local_74 [2];
  undefined4 local_6c;
  pair local_68 [8];
  pair<int_const,BaseItemValue> local_60 [8];
  int local_58 [2];
  undefined4 local_50;
  pair local_4c [8];
  pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
  local_44 [28];
  pair<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
  local_28 [28];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
  ::_Hashtable_iterator();
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  find(&local_114);
  local_e0 = local_114;
  local_dc = local_110;
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  end(local_d8);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                        *)&local_e0,(_Hashtable_iterator *)local_d8);
  if (cVar1 == '\0') {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::insert_item(int, int, CItem*)",0x81f,
               "Insert Fail Item Group[%d] Index: %d",param_1,param_2);
    uVar6 = 0;
  }
  else {
    std::pair<int_const,CItem*>::pair<int&,CItem*&>(local_c4,&param_2,&param_3);
    __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
    insert(local_d0,(pair *)(*(int *)this + param_1 * 0x14));
    std::pair<int_const,CItem*>::pair<int&,CItem*&>(local_b0,&param_2,&param_3);
    pCVar7 = this + 4;
    ppVar8 = local_b0;
    __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
    insert(local_bc,pCVar7);
    iVar5 = CItem::GetQuestItemDropBouns(param_3);
    if (iVar5 != 0) {
      local_90 = CItem::GetQuestItemDropBouns(param_3);
      local_8c = param_2;
      std::make_pair<unsigned_long,int>(local_98,&local_8c);
      std::pair<unsigned_long_const,int>::pair<unsigned_long,int>(local_a0,(pair *)local_98);
      pCVar7 = this + 0x5c;
      ppVar8 = (pair<int_const,CItem*> *)local_a0;
      std::
      map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
      ::insert(local_a8);
    }
    cVar1 = (**(code **)(*(int *)param_3 + 0x4c))(param_3,pCVar7,ppVar8);
    if (cVar1 != '\0') {
      uVar4 = CItem::getItemGroupName(param_3);
      uVar2 = CItem::getUsableLevel(param_3);
      uVar3 = CItem::get_rarity(param_3);
      BaseItemKey::BaseItemKey(local_e4,uVar3,uVar2,uVar4);
      G_CDataManager();
      std::
      map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
      ::find((int *)local_e8);
      local_ec = CItem::get_index(param_3);
      G_CDataManager();
      std::
      map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
      ::end(local_88);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
              ::operator!=(local_e8,(_Rb_tree_iterator *)local_88);
      if (cVar1 == '\0') {
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        map(local_104);
        local_50 = CItem::get_grade(param_3);
                    /* try { // try from 08511628 to 0851167f has its CatchHandler @ 085116fd */
        std::make_pair<int,BaseItemValue&>(local_58,(BaseItemValue *)&local_50);
        std::pair<int_const,BaseItemValue>::pair<int,BaseItemValue>(local_60,(pair *)local_58);
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        insert(local_68);
        std::
        make_pair<int&,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>&>
                  ((int *)local_28,(map *)local_e4);
                    /* try { // try from 08511690 to 08511694 has its CatchHandler @ 085116db */
        std::
        pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
        ::
        pair<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
                  (local_44,local_28);
                    /* try { // try from 08511695 to 085116b5 has its CatchHandler @ 085116c6 */
        G_CDataManager();
        std::
        map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
        ::insert(local_4c);
                    /* try { // try from 085116bf to 085116c3 has its CatchHandler @ 085116db */
        std::
        pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
        ::~pair(local_44);
                    /* try { // try from 085116f6 to 085116fa has its CatchHandler @ 085116fd */
        std::
        pair<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>
        ::~pair(local_28);
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        ~map(local_104);
      }
      else {
        local_6c = CItem::get_grade(param_3);
        std::make_pair<int,BaseItemValue&>(local_74,(BaseItemValue *)&local_6c);
        std::pair<int_const,BaseItemValue>::pair<int,BaseItemValue>(local_7c,(pair *)local_74);
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
        ::operator->(local_e8);
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        insert(local_84);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}

```

---

## load_item_files

```asm
// === 08511738 CItemList::load_item_files  [0x08511738-0x8511e89] ===
 8511738:	55                   	push   %ebp
 8511739:	89 e5                	mov    %esp,%ebp
 851173b:	57                   	push   %edi
 851173c:	56                   	push   %esi
 851173d:	53                   	push   %ebx
 851173e:	81 ec 3c 0e 00 00    	sub    $0xe3c,%esp
 8511744:	8d 85 84 fa ff ff    	lea    -0x57c(%ebp),%eax
 851174a:	89 04 24             	mov    %eax,(%esp)
 851174d:	e8 c6 da 47 00       	call   898f218 <_ZN17STStackableScriptC1Ev>
 8511752:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8511759:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8511760:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8511767:	8d 45 a8             	lea    -0x58(%ebp),%eax
 851176a:	89 04 24             	mov    %eax,(%esp)
 851176d:	e8 66 25 da ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 8511772:	e8 3d b4 10 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8511777:	89 04 24             	mov    %eax,(%esp)
 851177a:	e8 f5 0b 11 00       	call   8622374 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv>
 851177f:	8d 85 e4 f1 ff ff    	lea    -0xe1c(%ebp),%eax
 8511785:	c7 44 24 04 00 ac 4f 	movl   $0x94fac00,0x4(%esp)
 851178c:	09 
 851178d:	89 04 24             	mov    %eax,(%esp)
 8511790:	e8 5d 49 bd ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8511795:	83 ec 04             	sub    $0x4,%esp
 8511798:	8b 85 e4 f1 ff ff    	mov    -0xe1c(%ebp),%eax
 851179e:	89 45 a8             	mov    %eax,-0x58(%ebp)
 85117a1:	e9 a7 02 00 00       	jmp    8511a4d <_ZN9CItemList15load_item_filesEv+0x315>
 85117a6:	8d 85 f0 f1 ff ff    	lea    -0xe10(%ebp),%eax
 85117ac:	89 04 24             	mov    %eax,(%esp)
 85117af:	e8 ce c3 47 00       	call   898db82 <_ZN17STEquipmentScriptC1Ev>
 85117b4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85117b7:	89 04 24             	mov    %eax,(%esp)
 85117ba:	e8 f9 49 bd ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 85117bf:	83 c0 04             	add    $0x4,%eax
 85117c2:	89 04 24             	mov    %eax,(%esp)
 85117c5:	e8 26 4d 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 85117ca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85117cd:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85117d1:	75 0a                	jne    85117dd <_ZN9CItemList15load_item_filesEv+0xa5>
 85117d3:	be 00 00 00 00       	mov    $0x0,%esi
 85117d8:	e9 55 02 00 00       	jmp    8511a32 <_ZN9CItemList15load_item_filesEv+0x2fa>
 85117dd:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85117e0:	89 04 24             	mov    %eax,(%esp)
 85117e3:	e8 d0 49 bd ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 85117e8:	8b 00                	mov    (%eax),%eax
 85117ea:	89 44 24 10          	mov    %eax,0x10(%esp)
 85117ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85117f5:	00 
 85117f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85117fd:	00 
 85117fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8511801:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511805:	8d 85 f0 f1 ff ff    	lea    -0xe10(%ebp),%eax
 851180b:	89 04 24             	mov    %eax,(%esp)
 851180e:	e8 d8 02 48 00       	call   8991aeb <_Z21ImportEquipmentScriptP17STEquipmentScriptPKcbii>
 8511813:	83 f0 01             	xor    $0x1,%eax
 8511816:	84 c0                	test   %al,%al
 8511818:	74 42                	je     851185c <_ZN9CItemList15load_item_filesEv+0x124>
 851181a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 851181d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8511821:	c7 44 24 10 40 5c c9 	movl   $0x8c95c40,0x10(%esp)
 8511828:	08 
 8511829:	c7 44 24 0c e8 08 00 	movl   $0x8e8,0xc(%esp)
 8511830:	00 
 8511831:	c7 44 24 08 80 6c c9 	movl   $0x8c96c80,0x8(%esp)
 8511838:	08 
 8511839:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511840:	08 
 8511841:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511848:	e8 bd 23 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 851184d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8511852:	be 01 00 00 00       	mov    $0x1,%esi
 8511857:	e9 d6 01 00 00       	jmp    8511a32 <_ZN9CItemList15load_item_filesEv+0x2fa>
 851185c:	e8 53 b3 10 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8511861:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8511868:	00 
 8511869:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8511870:	00 
 8511871:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8511878:	00 
 8511879:	8d 95 f0 f1 ff ff    	lea    -0xe10(%ebp),%edx
 851187f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511883:	89 04 24             	mov    %eax,(%esp)
 8511886:	e8 f3 bf 10 00       	call   861d87e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii>
 851188b:	83 f0 01             	xor    $0x1,%eax
 851188e:	84 c0                	test   %al,%al
 8511890:	74 3f                	je     85118d1 <_ZN9CItemList15load_item_filesEv+0x199>
 8511892:	8b 85 a4 f3 ff ff    	mov    -0xc5c(%ebp),%eax
 8511898:	83 f8 16             	cmp    $0x16,%eax
 851189b:	74 34                	je     85118d1 <_ZN9CItemList15load_item_filesEv+0x199>
 851189d:	8b 85 a4 f3 ff ff    	mov    -0xc5c(%ebp),%eax
 85118a3:	83 f8 17             	cmp    $0x17,%eax
 85118a6:	74 29                	je     85118d1 <_ZN9CItemList15load_item_filesEv+0x199>
 85118a8:	8b 85 a4 f3 ff ff    	mov    -0xc5c(%ebp),%eax
 85118ae:	83 f8 18             	cmp    $0x18,%eax
 85118b1:	74 1e                	je     85118d1 <_ZN9CItemList15load_item_filesEv+0x199>
 85118b3:	8b 85 a4 f3 ff ff    	mov    -0xc5c(%ebp),%eax
 85118b9:	83 f8 19             	cmp    $0x19,%eax
 85118bc:	74 13                	je     85118d1 <_ZN9CItemList15load_item_filesEv+0x199>
 85118be:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85118c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85118c5:	c7 04 24 68 5c c9 08 	movl   $0x8c95c68,(%esp)
 85118cc:	e8 8f c2 b6 ff       	call   807db60 <printf@plt>
 85118d1:	c7 04 24 3c 02 00 00 	movl   $0x23c,(%esp)
 85118d8:	e8 73 2b 21 00       	call   8724450 <_Znwj>
 85118dd:	89 c6                	mov    %eax,%esi
 85118df:	89 f0                	mov    %esi,%eax
 85118e1:	89 04 24             	mov    %eax,(%esp)
 85118e4:	e8 95 3b 00 00       	call   851547e <_ZN10CEquipItemC1Ev>
 85118e9:	eb 15                	jmp    8511900 <_ZN9CItemList15load_item_filesEv+0x1c8>
 85118eb:	89 d3                	mov    %edx,%ebx
 85118ed:	89 c7                	mov    %eax,%edi
 85118ef:	89 34 24             	mov    %esi,(%esp)
 85118f2:	e8 f9 2b 21 00       	call   87244f0 <_ZdlPv>
 85118f7:	89 f8                	mov    %edi,%eax
 85118f9:	89 da                	mov    %ebx,%edx
 85118fb:	e9 17 01 00 00       	jmp    8511a17 <_ZN9CItemList15load_item_filesEv+0x2df>
 8511900:	89 75 dc             	mov    %esi,-0x24(%ebp)
 8511903:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8511907:	75 3b                	jne    8511944 <_ZN9CItemList15load_item_filesEv+0x20c>
 8511909:	c7 44 24 10 96 5c c9 	movl   $0x8c95c96,0x10(%esp)
 8511910:	08 
 8511911:	c7 44 24 0c 03 09 00 	movl   $0x903,0xc(%esp)
 8511918:	00 
 8511919:	c7 44 24 08 80 6c c9 	movl   $0x8c96c80,0x8(%esp)
 8511920:	08 
 8511921:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511928:	08 
 8511929:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511930:	e8 d5 22 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8511935:	bb 00 00 00 00       	mov    $0x0,%ebx
 851193a:	be 01 00 00 00       	mov    $0x1,%esi
 851193f:	e9 ee 00 00 00       	jmp    8511a32 <_ZN9CItemList15load_item_filesEv+0x2fa>
 8511944:	8d 85 f0 f1 ff ff    	lea    -0xe10(%ebp),%eax
 851194a:	89 44 24 04          	mov    %eax,0x4(%esp)
 851194e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8511951:	89 04 24             	mov    %eax,(%esp)
 8511954:	e8 2b e4 ff ff       	call   850fd84 <_ZN10CEquipItem8set_itemER17STEquipmentScript>
 8511959:	8b 45 dc             	mov    -0x24(%ebp),%eax
 851195c:	89 04 24             	mov    %eax,(%esp)
 851195f:	e8 b4 ee ff ff       	call   8510818 <_ZN10CEquipItem6verifyEv>
 8511964:	83 f0 01             	xor    $0x1,%eax
 8511967:	84 c0                	test   %al,%al
 8511969:	74 42                	je     85119ad <_ZN9CItemList15load_item_filesEv+0x275>
 851196b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 851196e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8511972:	c7 44 24 10 ab 5c c9 	movl   $0x8c95cab,0x10(%esp)
 8511979:	08 
 851197a:	c7 44 24 0c 0a 09 00 	movl   $0x90a,0xc(%esp)
 8511981:	00 
 8511982:	c7 44 24 08 80 6c c9 	movl   $0x8c96c80,0x8(%esp)
 8511989:	08 
 851198a:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511991:	08 
 8511992:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511999:	e8 6c 22 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 851199e:	bb 00 00 00 00       	mov    $0x0,%ebx
 85119a3:	be 01 00 00 00       	mov    $0x1,%esi
 85119a8:	e9 85 00 00 00       	jmp    8511a32 <_ZN9CItemList15load_item_filesEv+0x2fa>
 85119ad:	8b 7d dc             	mov    -0x24(%ebp),%edi
 85119b0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85119b3:	89 04 24             	mov    %eax,(%esp)
 85119b6:	e8 8d f2 bf ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 85119bb:	89 c6                	mov    %eax,%esi
 85119bd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85119c0:	89 04 24             	mov    %eax,(%esp)
 85119c3:	e8 8c f2 bf ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 85119c8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85119cc:	89 74 24 08          	mov    %esi,0x8(%esp)
 85119d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85119d4:	8b 45 08             	mov    0x8(%ebp),%eax
 85119d7:	89 04 24             	mov    %eax,(%esp)
 85119da:	e8 bf f8 ff ff       	call   851129e <_ZN9CItemList11insert_itemEiiP5CItem>
 85119df:	a1 50 f7 41 09       	mov    0x941f750,%eax
 85119e4:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85119e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85119eb:	89 04 24             	mov    %eax,(%esp)
 85119ee:	e8 0d c1 e1 ff       	call   832db00 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item15check_N_addItemER10CEquipItem>
 85119f3:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85119f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85119fd:	00 
 85119fe:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8511a01:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511a05:	89 04 24             	mov    %eax,(%esp)
 8511a08:	e8 d7 fc e2 ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 8511a0d:	83 ec 04             	sub    $0x4,%esp
 8511a10:	be 02 00 00 00       	mov    $0x2,%esi
 8511a15:	eb 1b                	jmp    8511a32 <_ZN9CItemList15load_item_filesEv+0x2fa>
 8511a17:	89 d3                	mov    %edx,%ebx
 8511a19:	89 c6                	mov    %eax,%esi
 8511a1b:	8d 85 f0 f1 ff ff    	lea    -0xe10(%ebp),%eax
 8511a21:	89 04 24             	mov    %eax,(%esp)
 8511a24:	e8 6f c8 47 00       	call   898e298 <_ZN17STEquipmentScriptD1Ev>
 8511a29:	89 f0                	mov    %esi,%eax
 8511a2b:	89 da                	mov    %ebx,%edx
 8511a2d:	e9 1e 04 00 00       	jmp    8511e50 <_ZN9CItemList15load_item_filesEv+0x718>
 8511a32:	8d 85 f0 f1 ff ff    	lea    -0xe10(%ebp),%eax
 8511a38:	89 04 24             	mov    %eax,(%esp)
 8511a3b:	e8 58 c8 47 00       	call   898e298 <_ZN17STEquipmentScriptD1Ev>
 8511a40:	85 f6                	test   %esi,%esi
 8511a42:	74 39                	je     8511a7d <_ZN9CItemList15load_item_filesEv+0x345>
 8511a44:	83 fe 01             	cmp    $0x1,%esi
 8511a47:	0f 84 21 04 00 00    	je     8511e6e <_ZN9CItemList15load_item_filesEv+0x736>
 8511a4d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8511a50:	c7 44 24 04 00 ac 4f 	movl   $0x94fac00,0x4(%esp)
 8511a57:	09 
 8511a58:	89 04 24             	mov    %eax,(%esp)
 8511a5b:	e8 b8 46 bd ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8511a60:	83 ec 04             	sub    $0x4,%esp
 8511a63:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8511a66:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511a6a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8511a6d:	89 04 24             	mov    %eax,(%esp)
 8511a70:	e8 c9 46 bd ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8511a75:	84 c0                	test   %al,%al
 8511a77:	0f 85 29 fd ff ff    	jne    85117a6 <_ZN9CItemList15load_item_filesEv+0x6e>
 8511a7d:	8d 85 e4 f1 ff ff    	lea    -0xe1c(%ebp),%eax
 8511a83:	c7 44 24 04 00 dc 4f 	movl   $0x94fdc00,0x4(%esp)
 8511a8a:	09 
 8511a8b:	89 04 24             	mov    %eax,(%esp)
 8511a8e:	e8 5f 46 bd ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8511a93:	83 ec 04             	sub    $0x4,%esp
 8511a96:	8b 85 e4 f1 ff ff    	mov    -0xe1c(%ebp),%eax
 8511a9c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8511a9f:	e9 6d 03 00 00       	jmp    8511e11 <_ZN9CItemList15load_item_filesEv+0x6d9>
 8511aa4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8511aa7:	89 04 24             	mov    %eax,(%esp)
 8511aaa:	e8 09 47 bd ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8511aaf:	83 c0 04             	add    $0x4,%eax
 8511ab2:	89 04 24             	mov    %eax,(%esp)
 8511ab5:	e8 36 4a 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8511aba:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8511abd:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8511ac1:	0f 84 7c 03 00 00    	je     8511e43 <_ZN9CItemList15load_item_filesEv+0x70b>
 8511ac7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8511aca:	89 04 24             	mov    %eax,(%esp)
 8511acd:	e8 e6 46 bd ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8511ad2:	8b 00                	mov    (%eax),%eax
 8511ad4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8511ad8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8511adf:	00 
 8511ae0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8511ae3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511ae7:	8d 85 84 fa ff ff    	lea    -0x57c(%ebp),%eax
 8511aed:	89 04 24             	mov    %eax,(%esp)
 8511af0:	e8 d3 d3 49 00       	call   89aeec8 <_Z21ImportStackableScriptP17STStackableScriptPKcbi>
 8511af5:	83 f0 01             	xor    $0x1,%eax
 8511af8:	84 c0                	test   %al,%al
 8511afa:	74 3d                	je     8511b39 <_ZN9CItemList15load_item_filesEv+0x401>
 8511afc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8511aff:	89 44 24 14          	mov    %eax,0x14(%esp)
 8511b03:	c7 44 24 10 c8 5c c9 	movl   $0x8c95cc8,0x10(%esp)
 8511b0a:	08 
 8511b0b:	c7 44 24 0c 26 09 00 	movl   $0x926,0xc(%esp)
 8511b12:	00 
 8511b13:	c7 44 24 08 80 6c c9 	movl   $0x8c96c80,0x8(%esp)
 8511b1a:	08 
 8511b1b:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511b22:	08 
 8511b23:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511b2a:	e8 db 20 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8511b2f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8511b34:	e9 35 03 00 00       	jmp    8511e6e <_ZN9CItemList15load_item_filesEv+0x736>
 8511b39:	e8 17 f6 c8 ff       	call   81a1155 <_ZN14GlobalInstanceI17Arad_GiftItem_SetE4instEv>
 8511b3e:	8d 95 84 fa ff ff    	lea    -0x57c(%ebp),%edx
 8511b44:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511b48:	89 04 24             	mov    %eax,(%esp)
 8511b4b:	e8 ce 13 c9 ff       	call   81a2f1e <_ZN17Arad_GiftItem_Set4openEP17STStackableScript>
 8511b50:	85 c0                	test   %eax,%eax
 8511b52:	0f 95 c0             	setne  %al
 8511b55:	84 c0                	test   %al,%al
 8511b57:	74 4a                	je     8511ba3 <_ZN9CItemList15load_item_filesEv+0x46b>
 8511b59:	8b 95 e0 fa ff ff    	mov    -0x520(%ebp),%edx
 8511b5f:	8b 85 84 fa ff ff    	mov    -0x57c(%ebp),%eax
 8511b65:	89 54 24 18          	mov    %edx,0x18(%esp)
 8511b69:	89 44 24 14          	mov    %eax,0x14(%esp)
 8511b6d:	c7 44 24 10 f0 5c c9 	movl   $0x8c95cf0,0x10(%esp)
 8511b74:	08 
 8511b75:	c7 44 24 0c 31 09 00 	movl   $0x931,0xc(%esp)
 8511b7c:	00 
 8511b7d:	c7 44 24 08 80 6c c9 	movl   $0x8c96c80,0x8(%esp)
 8511b84:	08 
 8511b85:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511b8c:	08 
 8511b8d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511b94:	e8 71 20 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8511b99:	bb 00 00 00 00       	mov    $0x0,%ebx
 8511b9e:	e9 cb 02 00 00       	jmp    8511e6e <_ZN9CItemList15load_item_filesEv+0x736>
 8511ba3:	e8 0c b0 10 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8511ba8:	8d 95 84 fa ff ff    	lea    -0x57c(%ebp),%edx
 8511bae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511bb2:	89 04 24             	mov    %eax,(%esp)
 8511bb5:	e8 ae ed 10 00       	call   8620968 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript>
 8511bba:	83 f0 01             	xor    $0x1,%eax
 8511bbd:	84 c0                	test   %al,%al
 8511bbf:	74 13                	je     8511bd4 <_ZN9CItemList15load_item_filesEv+0x49c>
 8511bc1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8511bc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511bc8:	c7 04 24 2c 5d c9 08 	movl   $0x8c95d2c,(%esp)
 8511bcf:	e8 8c bf b6 ff       	call   807db60 <printf@plt>
 8511bd4:	c7 04 24 f0 03 00 00 	movl   $0x3f0,(%esp)
 8511bdb:	e8 70 28 21 00       	call   8724450 <_Znwj>
 8511be0:	89 c3                	mov    %eax,%ebx
 8511be2:	89 d8                	mov    %ebx,%eax
 8511be4:	89 04 24             	mov    %eax,(%esp)
 8511be7:	e8 76 3b 00 00       	call   8515762 <_ZN14CStackableItemC1Ev>
 8511bec:	eb 15                	jmp    8511c03 <_ZN9CItemList15load_item_filesEv+0x4cb>
 8511bee:	89 d6                	mov    %edx,%esi
 8511bf0:	89 c7                	mov    %eax,%edi
 8511bf2:	89 1c 24             	mov    %ebx,(%esp)
 8511bf5:	e8 f6 28 21 00       	call   87244f0 <_ZdlPv>
 8511bfa:	89 f8                	mov    %edi,%eax
 8511bfc:	89 f2                	mov    %esi,%edx
 8511bfe:	e9 4d 02 00 00       	jmp    8511e50 <_ZN9CItemList15load_item_filesEv+0x718>
 8511c03:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 8511c06:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8511c0a:	75 36                	jne    8511c42 <_ZN9CItemList15load_item_filesEv+0x50a>
 8511c0c:	c7 44 24 10 59 5d c9 	movl   $0x8c95d59,0x10(%esp)
 8511c13:	08 
 8511c14:	c7 44 24 0c 41 09 00 	movl   $0x941,0xc(%esp)
 8511c1b:	00 
 8511c1c:	c7 44 24 08 80 6c c9 	movl   $0x8c96c80,0x8(%esp)
 8511c23:	08 
 8511c24:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511c2b:	08 
 8511c2c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511c33:	e8 d2 1f 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8511c38:	bb 00 00 00 00       	mov    $0x0,%ebx
 8511c3d:	e9 2c 02 00 00       	jmp    8511e6e <_ZN9CItemList15load_item_filesEv+0x736>
 8511c42:	8d 85 84 fa ff ff    	lea    -0x57c(%ebp),%eax
 8511c48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511c4c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511c4f:	89 04 24             	mov    %eax,(%esp)
 8511c52:	e8 c7 bb ff ff       	call   850d81e <_ZN14CStackableItem8set_itemER17STStackableScript>
 8511c57:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511c5a:	89 04 24             	mov    %eax,(%esp)
 8511c5d:	e8 b2 dd ff ff       	call   850fa14 <_ZN14CStackableItem6verifyEv>
 8511c62:	83 f0 01             	xor    $0x1,%eax
 8511c65:	84 c0                	test   %al,%al
 8511c67:	74 3d                	je     8511ca6 <_ZN9CItemList15load_item_filesEv+0x56e>
 8511c69:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8511c6c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8511c70:	c7 44 24 10 74 5d c9 	movl   $0x8c95d74,0x10(%esp)
 8511c77:	08 
 8511c78:	c7 44 24 0c 48 09 00 	movl   $0x948,0xc(%esp)
 8511c7f:	00 
 8511c80:	c7 44 24 08 80 6c c9 	movl   $0x8c96c80,0x8(%esp)
 8511c87:	08 
 8511c88:	c7 44 24 04 2c 5b c9 	movl   $0x8c95b2c,0x4(%esp)
 8511c8f:	08 
 8511c90:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8511c97:	e8 6e 1f 5c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8511c9c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8511ca1:	e9 c8 01 00 00       	jmp    8511e6e <_ZN9CItemList15load_item_filesEv+0x736>
 8511ca6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511ca9:	8b 00                	mov    (%eax),%eax
 8511cab:	83 c0 0c             	add    $0xc,%eax
 8511cae:	8b 10                	mov    (%eax),%edx
 8511cb0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511cb3:	89 04 24             	mov    %eax,(%esp)
 8511cb6:	ff d2                	call   *%edx
 8511cb8:	83 f8 07             	cmp    $0x7,%eax
 8511cbb:	0f 94 c0             	sete   %al
 8511cbe:	84 c0                	test   %al,%al
 8511cc0:	74 72                	je     8511d34 <_ZN9CItemList15load_item_filesEv+0x5fc>
 8511cc2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511cc5:	05 c4 01 00 00       	add    $0x1c4,%eax
 8511cca:	89 04 24             	mov    %eax,(%esp)
 8511ccd:	e8 42 bb bc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8511cd2:	89 c3                	mov    %eax,%ebx
 8511cd4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511cd7:	05 d4 01 00 00       	add    $0x1d4,%eax
 8511cdc:	89 04 24             	mov    %eax,(%esp)
 8511cdf:	e8 dc c4 b7 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8511ce4:	39 c3                	cmp    %eax,%ebx
 8511ce6:	0f 95 c0             	setne  %al
 8511ce9:	84 c0                	test   %al,%al
 8511ceb:	74 47                	je     8511d34 <_ZN9CItemList15load_item_filesEv+0x5fc>
 8511ced:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8511cf4:	00 
 8511cf5:	c7 44 24 08 4f 09 00 	movl   $0x94f,0x8(%esp)
 8511cfc:	00 
 8511cfd:	c7 44 24 04 80 6c c9 	movl   $0x8c96c80,0x4(%esp)
 8511d04:	08 
 8511d05:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8511d08:	89 04 24             	mov    %eax,(%esp)
 8511d0b:	e8 08 da 03 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8511d10:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8511d13:	89 44 24 08          	mov    %eax,0x8(%esp)
 8511d17:	c7 44 24 04 98 5d c9 	movl   $0x8c95d98,0x4(%esp)
 8511d1e:	08 
 8511d1f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8511d22:	89 04 24             	mov    %eax,(%esp)
 8511d25:	e8 5e da 03 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8511d2a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8511d2f:	e9 3a 01 00 00       	jmp    8511e6e <_ZN9CItemList15load_item_filesEv+0x736>
 8511d34:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511d37:	8b 00                	mov    (%eax),%eax
 8511d39:	83 c0 0c             	add    $0xc,%eax
 8511d3c:	8b 10                	mov    (%eax),%edx
 8511d3e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511d41:	89 04 24             	mov    %eax,(%esp)
 8511d44:	ff d2                	call   *%edx
 8511d46:	83 f8 0d             	cmp    $0xd,%eax
 8511d49:	0f 94 c0             	sete   %al
 8511d4c:	84 c0                	test   %al,%al
 8511d4e:	74 72                	je     8511dc2 <_ZN9CItemList15load_item_filesEv+0x68a>
 8511d50:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511d53:	05 c4 01 00 00       	add    $0x1c4,%eax
 8511d58:	89 04 24             	mov    %eax,(%esp)
 8511d5b:	e8 b4 ba bc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8511d60:	89 c3                	mov    %eax,%ebx
 8511d62:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511d65:	05 d4 01 00 00       	add    $0x1d4,%eax
 8511d6a:	89 04 24             	mov    %eax,(%esp)
 8511d6d:	e8 4e c4 b7 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8511d72:	39 c3                	cmp    %eax,%ebx
 8511d74:	0f 95 c0             	setne  %al
 8511d77:	84 c0                	test   %al,%al
 8511d79:	74 47                	je     8511dc2 <_ZN9CItemList15load_item_filesEv+0x68a>
 8511d7b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8511d82:	00 
 8511d83:	c7 44 24 08 57 09 00 	movl   $0x957,0x8(%esp)
 8511d8a:	00 
 8511d8b:	c7 44 24 04 80 6c c9 	movl   $0x8c96c80,0x4(%esp)
 8511d92:	08 
 8511d93:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8511d96:	89 04 24             	mov    %eax,(%esp)
 8511d99:	e8 7a d9 03 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8511d9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8511da1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8511da5:	c7 44 24 04 c4 5d c9 	movl   $0x8c95dc4,0x4(%esp)
 8511dac:	08 
 8511dad:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8511db0:	89 04 24             	mov    %eax,(%esp)
 8511db3:	e8 d0 d9 03 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8511db8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8511dbd:	e9 ac 00 00 00       	jmp    8511e6e <_ZN9CItemList15load_item_filesEv+0x736>
 8511dc2:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8511dc5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511dc8:	89 04 24             	mov    %eax,(%esp)
 8511dcb:	e8 78 ee bf ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8511dd0:	89 c3                	mov    %eax,%ebx
 8511dd2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8511dd5:	89 04 24             	mov    %eax,(%esp)
 8511dd8:	e8 77 ee bf ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8511ddd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8511de1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8511de5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511de9:	8b 45 08             	mov    0x8(%ebp),%eax
 8511dec:	89 04 24             	mov    %eax,(%esp)
 8511def:	e8 aa f4 ff ff       	call   851129e <_ZN9CItemList11insert_itemEiiP5CItem>
 8511df4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8511df7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8511dfe:	00 
 8511dff:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8511e02:	89 54 24 04          	mov    %edx,0x4(%esp)
 8511e06:	89 04 24             	mov    %eax,(%esp)
 8511e09:	e8 d6 f8 e2 ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 8511e0e:	83 ec 04             	sub    $0x4,%esp
 8511e11:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8511e14:	c7 44 24 04 00 dc 4f 	movl   $0x94fdc00,0x4(%esp)
 8511e1b:	09 
 8511e1c:	89 04 24             	mov    %eax,(%esp)
 8511e1f:	e8 f4 42 bd ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8511e24:	83 ec 04             	sub    $0x4,%esp
 8511e27:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8511e2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8511e2e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8511e31:	89 04 24             	mov    %eax,(%esp)
 8511e34:	e8 05 43 bd ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8511e39:	84 c0                	test   %al,%al
 8511e3b:	0f 85 63 fc ff ff    	jne    8511aa4 <_ZN9CItemList15load_item_filesEv+0x36c>
 8511e41:	eb 01                	jmp    8511e44 <_ZN9CItemList15load_item_filesEv+0x70c>
 8511e43:	90                   	nop
 8511e44:	e8 4b ac 10 00       	call   861ca94 <_ZN11sync_script16DisplayMaxLengthEv>
 8511e49:	bb 01 00 00 00       	mov    $0x1,%ebx
 8511e4e:	eb 1e                	jmp    8511e6e <_ZN9CItemList15load_item_filesEv+0x736>
 8511e50:	89 d3                	mov    %edx,%ebx
 8511e52:	89 c6                	mov    %eax,%esi
 8511e54:	8d 85 84 fa ff ff    	lea    -0x57c(%ebp),%eax
 8511e5a:	89 04 24             	mov    %eax,(%esp)
 8511e5d:	e8 da e2 47 00       	call   899013c <_ZN17STStackableScriptD1Ev>
 8511e62:	89 f0                	mov    %esi,%eax
 8511e64:	89 da                	mov    %ebx,%edx
 8511e66:	89 04 24             	mov    %eax,(%esp)
 8511e69:	e8 e2 18 5d 00       	call   8ae3750 <_Unwind_Resume>
 8511e6e:	8d 85 84 fa ff ff    	lea    -0x57c(%ebp),%eax
 8511e74:	89 04 24             	mov    %eax,(%esp)
 8511e77:	e8 c0 e2 47 00       	call   899013c <_ZN17STStackableScriptD1Ev>
 8511e7c:	89 d8                	mov    %ebx,%eax
 8511e7e:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8511e81:	83 c4 00             	add    $0x0,%esp
 8511e84:	5b                   	pop    %ebx
 8511e85:	5e                   	pop    %esi
 8511e86:	5f                   	pop    %edi
 8511e87:	5d                   	pop    %ebp
 8511e88:	c3                   	ret
 8511e89:	90                   	nop

```

```c
// CItemList::load_item_files @ 0x8511738

/* CItemList::load_item_files() */

undefined4 __thiscall CItemList::load_item_files(CItemList *this)

{
  char cVar1;
  CSyncScript *pCVar2;
  CEquipItem *pCVar3;
  int iVar4;
  int *piVar5;
  Arad_GiftItem_Set *this_00;
  CStackableItem *pCVar6;
  int iVar7;
  undefined4 unaff_EBX;
  undefined4 local_e20 [3];
  STEquipmentScript local_e14 [436];
  int local_c60;
  undefined4 local_580 [23];
  undefined4 local_524;
  undefined4 local_5c;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_58 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_54 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_50 [4];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_2c [4];
  CEquipItem *local_28;
  CStackableItem *local_24;
  char *local_20;
  
  STStackableScript::STStackableScript((STStackableScript *)local_580);
  local_28 = (CEquipItem *)0x0;
  local_24 = (CStackableItem *)0x0;
  local_20 = (char *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
                    /* try { // try from 08511772 to 085117b3 has its CatchHandler @ 08511e50 */
  pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::truncate_dnf_item_info_table(pCVar2);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_e20);
  local_5c = local_e20[0];
  do {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_58);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c,
                       (_Rb_tree_iterator *)local_58);
    if (cVar1 == '\0') {
LAB_08511a7d:
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      begin((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *)
            local_e20);
      local_5c = local_e20[0];
      goto LAB_08511e11;
    }
    STEquipmentScript::STEquipmentScript(local_e14);
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
                    /* try { // try from 085117c5 to 085118dc has its CatchHandler @ 08511a17 */
    local_20 = (char *)std::string::c_str((string *)(iVar4 + 4));
    if (local_20 == (char *)0x0) {
      iVar4 = 0;
    }
    else {
      piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
      cVar1 = ImportEquipmentScript(local_e14,local_20,false,0,*piVar5);
      if (cVar1 == '\x01') {
        pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
        cVar1 = sync_script::CSyncScript::insert_equiptment_item_to_db(pCVar2,local_e14,0,0,0);
        if ((((cVar1 != '\x01') && (local_c60 != 0x16)) && (local_c60 != 0x17)) &&
           ((local_c60 != 0x18 && (local_c60 != 0x19)))) {
          printf("insert_equiptment_item_to_db() fail file - %s",local_20);
        }
        pCVar3 = operator_new(0x23c);
                    /* try { // try from 085118e4 to 085118e8 has its CatchHandler @ 085118eb */
        CEquipItem::CEquipItem(pCVar3);
        local_28 = pCVar3;
        if (pCVar3 == (CEquipItem *)0x0) {
                    /* try { // try from 08511930 to 08511a0c has its CatchHandler @ 08511a17 */
          LogManager::logFormat
                    (1,"item.cpp","bool CItemList::load_item_files()",0x903,"new CEquipItem error");
          unaff_EBX = 0;
          iVar4 = 1;
        }
        else {
          CEquipItem::set_item(pCVar3,local_e14);
          cVar1 = CEquipItem::verify(local_28);
          pCVar3 = local_28;
          if (cVar1 == '\x01') {
            iVar4 = CItem::get_index((CItem *)local_28);
            iVar7 = CItem::get_grade((CItem *)local_28);
            insert_item(this,iVar7,iVar4,(CItem *)pCVar3);
            ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem
                      (GlobalData::s_pCompoundBindCube,local_28);
            std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                      (local_54,(int)&local_5c);
            iVar4 = 2;
          }
          else {
            LogManager::logFormat
                      (1,"item.cpp","bool CItemList::load_item_files()",0x90a,
                       "Equip item verify fail. [%s]",local_20);
            unaff_EBX = 0;
            iVar4 = 1;
          }
        }
      }
      else {
        LogManager::logFormat
                  (1,"item.cpp","bool CItemList::load_item_files()",0x8e8,
                   "ImportEquipmentScript() fail file - %s",local_20);
        unaff_EBX = 0;
        iVar4 = 1;
      }
    }
                    /* try { // try from 08511a3b to 08511bdf has its CatchHandler @ 08511e50 */
    STEquipmentScript::~STEquipmentScript(local_e14);
    if (iVar4 == 0) goto LAB_08511a7d;
  } while (iVar4 != 1);
LAB_08511e6e:
  STStackableScript::~STStackableScript((STStackableScript *)local_580);
  return unaff_EBX;
LAB_08511e11:
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_50);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c,
                     (_Rb_tree_iterator *)local_50);
  if (cVar1 == '\0') goto LAB_08511e44;
  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
  local_20 = (char *)std::string::c_str((string *)(iVar4 + 4));
  if (local_20 == (char *)0x0) goto LAB_08511e44;
  piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_5c);
  cVar1 = ImportStackableScript((STStackableScript *)local_580,local_20,false,*piVar5);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::load_item_files()",0x926,
               "importStackableScript fail file - %s",local_20);
    unaff_EBX = 0;
    goto LAB_08511e6e;
  }
  this_00 = (Arad_GiftItem_Set *)GlobalInstance<Arad_GiftItem_Set>::inst();
  iVar4 = Arad_GiftItem_Set::open(this_00,(STStackableScript *)local_580);
  if (iVar4 != 0) {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::load_item_files()",0x931,
               "[ERROR] Arad GiftItem Setting!! [item_idx:%d][levelt:%d]",local_580[0],local_524);
    unaff_EBX = 0;
    goto LAB_08511e6e;
  }
  pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar1 = sync_script::CSyncScript::insert_stackable_item_to_db
                    (pCVar2,(STStackableScript *)local_580);
  if (cVar1 != '\x01') {
    printf("insert_stackable_item_to_db() fail file - %s",local_20);
  }
  pCVar6 = operator_new(0x3f0);
                    /* try { // try from 08511be7 to 08511beb has its CatchHandler @ 08511bee */
  CStackableItem::CStackableItem(pCVar6);
  local_24 = pCVar6;
  if (pCVar6 == (CStackableItem *)0x0) {
                    /* try { // try from 08511c33 to 08511e48 has its CatchHandler @ 08511e50 */
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::load_item_files()",0x941,"ptemp_stack_data is null");
    unaff_EBX = 0;
    goto LAB_08511e6e;
  }
  CStackableItem::set_item(pCVar6,(STStackableScript *)local_580);
  cVar1 = CStackableItem::verify(local_24);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::load_item_files()",0x948,
               "Stackable item verify fail. [%s]",local_20);
    unaff_EBX = 0;
    goto LAB_08511e6e;
  }
  iVar4 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
  if (iVar4 == 7) {
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (local_24 + 0x1c4));
    iVar7 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(local_24 + 0x1d4));
    if (iVar4 != iVar7) {
      cMyTrace::cMyTrace(local_4c,"bool CItemList::load_item_files()",0x94f,5);
      cMyTrace::operator()(local_4c,"Stackable item set_item fail (file [%s])",local_20);
      unaff_EBX = 0;
      goto LAB_08511e6e;
    }
  }
  iVar4 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
  if (iVar4 == 0xd) {
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (local_24 + 0x1c4));
    iVar7 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(local_24 + 0x1d4));
    if (iVar4 != iVar7) {
      cMyTrace::cMyTrace(local_3c,"bool CItemList::load_item_files()",0x957,5);
      cMyTrace::operator()(local_3c,"Stackable item set_item fail 2 (file [%s])",local_20);
      unaff_EBX = 0;
      goto LAB_08511e6e;
    }
  }
  pCVar6 = local_24;
  iVar4 = CItem::get_index((CItem *)local_24);
  iVar7 = CItem::get_grade((CItem *)local_24);
  insert_item(this,iVar7,iVar4,(CItem *)pCVar6);
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_2c,(int)&local_5c);
  goto LAB_08511e11;
LAB_08511e44:
  sync_script::DisplayMaxLength();
  unaff_EBX = 1;
  goto LAB_08511e6e;
}

```

---

## ~CItemList

```asm
// === 08510df6 CItemList::~CItemList  [0x08510df6-0x8510f05] ===
 8510df6:	55                   	push   %ebp
 8510df7:	89 e5                	mov    %esp,%ebp
 8510df9:	56                   	push   %esi
 8510dfa:	53                   	push   %ebx
 8510dfb:	83 ec 10             	sub    $0x10,%esp
 8510dfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e01:	89 04 24             	mov    %eax,(%esp)
 8510e04:	e8 fd 00 00 00       	call   8510f06 <_ZN9CItemList7destroyEv>
 8510e09:	eb 18                	jmp    8510e23 <_ZN9CItemListD1Ev+0x2d>
 8510e0b:	89 d3                	mov    %edx,%ebx
 8510e0d:	89 c6                	mov    %eax,%esi
 8510e0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e12:	83 c0 5c             	add    $0x5c,%eax
 8510e15:	89 04 24             	mov    %eax,(%esp)
 8510e18:	e8 3d 09 e6 ff       	call   837175a <_ZNSt3mapImiSt4lessImESaISt4pairIKmiEEED1Ev>
 8510e1d:	89 f0                	mov    %esi,%eax
 8510e1f:	89 da                	mov    %ebx,%edx
 8510e21:	eb 10                	jmp    8510e33 <_ZN9CItemListD1Ev+0x3d>
 8510e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e26:	83 c0 5c             	add    $0x5c,%eax
 8510e29:	89 04 24             	mov    %eax,(%esp)
 8510e2c:	e8 29 09 e6 ff       	call   837175a <_ZNSt3mapImiSt4lessImESaISt4pairIKmiEEED1Ev>
 8510e31:	eb 18                	jmp    8510e4b <_ZN9CItemListD1Ev+0x55>
 8510e33:	89 d3                	mov    %edx,%ebx
 8510e35:	89 c6                	mov    %eax,%esi
 8510e37:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e3a:	83 c0 50             	add    $0x50,%eax
 8510e3d:	89 04 24             	mov    %eax,(%esp)
 8510e40:	e8 cb 77 00 00       	call   8518610 <_ZNSt6vectorI9BonusItemSaIS0_EED1Ev>
 8510e45:	89 f0                	mov    %esi,%eax
 8510e47:	89 da                	mov    %ebx,%edx
 8510e49:	eb 10                	jmp    8510e5b <_ZN9CItemListD1Ev+0x65>
 8510e4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e4e:	83 c0 50             	add    $0x50,%eax
 8510e51:	89 04 24             	mov    %eax,(%esp)
 8510e54:	e8 b7 77 00 00       	call   8518610 <_ZNSt6vectorI9BonusItemSaIS0_EED1Ev>
 8510e59:	eb 18                	jmp    8510e73 <_ZN9CItemListD1Ev+0x7d>
 8510e5b:	89 d3                	mov    %edx,%ebx
 8510e5d:	89 c6                	mov    %eax,%esi
 8510e5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e62:	83 c0 40             	add    $0x40,%eax
 8510e65:	89 04 24             	mov    %eax,(%esp)
 8510e68:	e8 31 77 00 00       	call   851859e <_ZNSt6vectorI21stCeraShopBonusInfo_tSaIS0_EED1Ev>
 8510e6d:	89 f0                	mov    %esi,%eax
 8510e6f:	89 da                	mov    %ebx,%edx
 8510e71:	eb 10                	jmp    8510e83 <_ZN9CItemListD1Ev+0x8d>
 8510e73:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e76:	83 c0 40             	add    $0x40,%eax
 8510e79:	89 04 24             	mov    %eax,(%esp)
 8510e7c:	e8 1d 77 00 00       	call   851859e <_ZNSt6vectorI21stCeraShopBonusInfo_tSaIS0_EED1Ev>
 8510e81:	eb 18                	jmp    8510e9b <_ZN9CItemListD1Ev+0xa5>
 8510e83:	89 d3                	mov    %edx,%ebx
 8510e85:	89 c6                	mov    %eax,%esi
 8510e87:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e8a:	83 c0 2c             	add    $0x2c,%eax
 8510e8d:	89 04 24             	mov    %eax,(%esp)
 8510e90:	e8 15 44 00 00       	call   85152aa <_ZN9__gnu_cxx8hash_mapIjiNS_4hashIjEESt8equal_toIjESaIiEED1Ev>
 8510e95:	89 f0                	mov    %esi,%eax
 8510e97:	89 da                	mov    %ebx,%edx
 8510e99:	eb 10                	jmp    8510eab <_ZN9CItemListD1Ev+0xb5>
 8510e9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8510e9e:	83 c0 2c             	add    $0x2c,%eax
 8510ea1:	89 04 24             	mov    %eax,(%esp)
 8510ea4:	e8 01 44 00 00       	call   85152aa <_ZN9__gnu_cxx8hash_mapIjiNS_4hashIjEESt8equal_toIjESaIiEED1Ev>
 8510ea9:	eb 18                	jmp    8510ec3 <_ZN9CItemListD1Ev+0xcd>
 8510eab:	89 d3                	mov    %edx,%ebx
 8510ead:	89 c6                	mov    %eax,%esi
 8510eaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8510eb2:	83 c0 18             	add    $0x18,%eax
 8510eb5:	89 04 24             	mov    %eax,(%esp)
 8510eb8:	e8 d9 43 00 00       	call   8515296 <_ZN9__gnu_cxx8hash_mapIiP14CCeraShopGoodsNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8510ebd:	89 f0                	mov    %esi,%eax
 8510ebf:	89 da                	mov    %ebx,%edx
 8510ec1:	eb 10                	jmp    8510ed3 <_ZN9CItemListD1Ev+0xdd>
 8510ec3:	8b 45 08             	mov    0x8(%ebp),%eax
 8510ec6:	83 c0 18             	add    $0x18,%eax
 8510ec9:	89 04 24             	mov    %eax,(%esp)
 8510ecc:	e8 c5 43 00 00       	call   8515296 <_ZN9__gnu_cxx8hash_mapIiP14CCeraShopGoodsNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8510ed1:	eb 1e                	jmp    8510ef1 <_ZN9CItemListD1Ev+0xfb>
 8510ed3:	89 d3                	mov    %edx,%ebx
 8510ed5:	89 c6                	mov    %eax,%esi
 8510ed7:	8b 45 08             	mov    0x8(%ebp),%eax
 8510eda:	83 c0 04             	add    $0x4,%eax
 8510edd:	89 04 24             	mov    %eax,(%esp)
 8510ee0:	e8 9d 43 00 00       	call   8515282 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8510ee5:	89 f0                	mov    %esi,%eax
 8510ee7:	89 da                	mov    %ebx,%edx
 8510ee9:	89 04 24             	mov    %eax,(%esp)
 8510eec:	e8 5f 28 5d 00       	call   8ae3750 <_Unwind_Resume>
 8510ef1:	8b 45 08             	mov    0x8(%ebp),%eax
 8510ef4:	83 c0 04             	add    $0x4,%eax
 8510ef7:	89 04 24             	mov    %eax,(%esp)
 8510efa:	e8 83 43 00 00       	call   8515282 <_ZN9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8510eff:	83 c4 10             	add    $0x10,%esp
 8510f02:	5b                   	pop    %ebx
 8510f03:	5e                   	pop    %esi
 8510f04:	5d                   	pop    %ebp
 8510f05:	c3                   	ret

```

```c
// CItemList::~CItemList @ 0x8510df6

/* CItemList::~CItemList() */

void __thiscall CItemList::~CItemList(CItemList *this)

{
                    /* try { // try from 08510e04 to 08510e08 has its CatchHandler @ 08510e0b */
  destroy(this);
                    /* try { // try from 08510e2c to 08510e30 has its CatchHandler @ 08510e33 */
  std::
  map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
  ::~map((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
          *)(this + 0x5c));
                    /* try { // try from 08510e54 to 08510e58 has its CatchHandler @ 08510e5b */
  std::vector<BonusItem,std::allocator<BonusItem>>::~vector
            ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50));
                    /* try { // try from 08510e7c to 08510e80 has its CatchHandler @ 08510e83 */
  std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>::~vector
            ((vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>> *)(this + 0x40));
                    /* try { // try from 08510ea4 to 08510ea8 has its CatchHandler @ 08510eab */
  __gnu_cxx::
  hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
  ::~hash_map((hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
               *)(this + 0x2c));
                    /* try { // try from 08510ecc to 08510ed0 has its CatchHandler @ 08510ed3 */
  __gnu_cxx::
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::~hash_map((hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
               *)(this + 0x18));
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  ~hash_map((hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *)
            (this + 4));
  return;
}

```

