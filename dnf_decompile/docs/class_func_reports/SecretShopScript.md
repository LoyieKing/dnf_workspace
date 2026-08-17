# SecretShopScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CopyItem

```asm
// === 08a8306c SecretShopScript::CopyItem  [0x08a8306c-0x8a830e1] ===
 8a8306c:	55                   	push   %ebp
 8a8306d:	89 e5                	mov    %esp,%ebp
 8a8306f:	83 ec 18             	sub    $0x18,%esp
 8a83072:	8b 45 10             	mov    0x10(%ebp),%eax
 8a83075:	8b 10                	mov    (%eax),%edx
 8a83077:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a8307a:	89 10                	mov    %edx,(%eax)
 8a8307c:	8b 45 10             	mov    0x10(%ebp),%eax
 8a8307f:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 8a83083:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a83086:	88 50 04             	mov    %dl,0x4(%eax)
 8a83089:	8b 45 10             	mov    0x10(%ebp),%eax
 8a8308c:	8b 50 10             	mov    0x10(%eax),%edx
 8a8308f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a83092:	89 50 0c             	mov    %edx,0xc(%eax)
 8a83095:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a83098:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8a8309c:	84 c0                	test   %al,%al
 8a8309e:	75 1d                	jne    8a830bd <_ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo+0x51>
 8a830a0:	8b 45 10             	mov    0x10(%ebp),%eax
 8a830a3:	8b 40 08             	mov    0x8(%eax),%eax
 8a830a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a830aa:	8b 45 08             	mov    0x8(%ebp),%eax
 8a830ad:	89 04 24             	mov    %eax,(%esp)
 8a830b0:	e8 d3 00 00 00       	call   8a83188 <_ZN16SecretShopScript16GetRandItemPriceEi>
 8a830b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a830b8:	89 42 08             	mov    %eax,0x8(%edx)
 8a830bb:	eb 23                	jmp    8a830e0 <_ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo+0x74>
 8a830bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a830c0:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8a830c4:	3c 01                	cmp    $0x1,%al
 8a830c6:	75 18                	jne    8a830e0 <_ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo+0x74>
 8a830c8:	8b 45 10             	mov    0x10(%ebp),%eax
 8a830cb:	8b 50 08             	mov    0x8(%eax),%edx
 8a830ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a830d1:	89 50 10             	mov    %edx,0x10(%eax)
 8a830d4:	8b 45 10             	mov    0x10(%ebp),%eax
 8a830d7:	8b 50 0c             	mov    0xc(%eax),%edx
 8a830da:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a830dd:	89 50 14             	mov    %edx,0x14(%eax)
 8a830e0:	c9                   	leave
 8a830e1:	c3                   	ret

```

```c
// SecretShopScript::CopyItem @ 0x8a8306c

/* SecretShopScript::CopyItem(secretshop::SALE_INFO&, stSaleInfo&) */

void __thiscall
SecretShopScript::CopyItem(SecretShopScript *this,SALE_INFO *param_1,stSaleInfo *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  param_1[4] = *(SALE_INFO *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  if (param_1[4] == (SALE_INFO)0x0) {
    uVar1 = GetRandItemPrice(this,*(int *)(param_2 + 8));
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  else if (param_1[4] == (SALE_INFO)0x1) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  }
  return;
}

```

---

## GetDomainRate

```asm
// === 08a82ff6 SecretShopScript::GetDomainRate  [0x08a82ff6-0x8a8306b] ===
 8a82ff6:	55                   	push   %ebp
 8a82ff7:	89 e5                	mov    %esp,%ebp
 8a82ff9:	83 ec 28             	sub    $0x28,%esp
 8a82ffc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a83003:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a83006:	8d 50 08             	lea    0x8(%eax),%edx
 8a83009:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8300c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a83010:	89 04 24             	mov    %eax,(%esp)
 8a83013:	e8 3a 09 00 00       	call   8a83952 <_ZNSt3mapIi10stSaleInfoSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8a83018:	83 ec 04             	sub    $0x4,%esp
 8a8301b:	eb 1c                	jmp    8a83039 <_ZN16SecretShopScript13GetDomainRateER14stDungeonSales+0x43>
 8a8301d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a83020:	89 04 24             	mov    %eax,(%esp)
 8a83023:	e8 8a 09 00 00       	call   8a839b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEptEv>
 8a83028:	8b 40 18             	mov    0x18(%eax),%eax
 8a8302b:	01 45 f4             	add    %eax,-0xc(%ebp)
 8a8302e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a83031:	89 04 24             	mov    %eax,(%esp)
 8a83034:	e8 87 09 00 00       	call   8a839c0 <_ZNSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEppEv>
 8a83039:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a8303c:	8d 50 08             	lea    0x8(%eax),%edx
 8a8303f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a83042:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a83046:	89 04 24             	mov    %eax,(%esp)
 8a83049:	e8 2a 09 00 00       	call   8a83978 <_ZNSt3mapIi10stSaleInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a8304e:	83 ec 04             	sub    $0x4,%esp
 8a83051:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a83054:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a83058:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8305b:	89 04 24             	mov    %eax,(%esp)
 8a8305e:	e8 3b 09 00 00       	call   8a8399e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEneERKS4_>
 8a83063:	84 c0                	test   %al,%al
 8a83065:	75 b6                	jne    8a8301d <_ZN16SecretShopScript13GetDomainRateER14stDungeonSales+0x27>
 8a83067:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a8306a:	c9                   	leave
 8a8306b:	c3                   	ret

```

```c
// SecretShopScript::GetDomainRate @ 0x8a82ff6

/* SecretShopScript::GetDomainRate(stDungeonSales&) */

int SecretShopScript::GetDomainRate(stDungeonSales *param_1)

{
  char cVar1;
  int iVar2;
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_18 [4];
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::begin
            (local_18);
  while( true ) {
    std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_18);
    local_10 = local_10 + *(int *)(iVar2 + 0x18);
    std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_18);
  }
  return local_10;
}

```

---

## GetItemByDungeonIdx

```asm
// === 08a82a0e SecretShopScript::GetItemByDungeonIdx  [0x08a82a0e-0x8a82b33] ===
 8a82a0e:	55                   	push   %ebp
 8a82a0f:	89 e5                	mov    %esp,%ebp
 8a82a11:	83 ec 38             	sub    $0x38,%esp
 8a82a14:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8a82a17:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8a82a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82a1d:	8d 48 48             	lea    0x48(%eax),%ecx
 8a82a20:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82a23:	8d 55 14             	lea    0x14(%ebp),%edx
 8a82a26:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a82a2a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a82a2e:	89 04 24             	mov    %eax,(%esp)
 8a82a31:	e8 ac 0d 00 00       	call   8a837e2 <_ZNSt3mapIi10stNpcSalesSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8a82a36:	83 ec 04             	sub    $0x4,%esp
 8a82a39:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82a3c:	8d 50 48             	lea    0x48(%eax),%edx
 8a82a3f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a82a42:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82a46:	89 04 24             	mov    %eax,(%esp)
 8a82a49:	e8 c0 0d 00 00       	call   8a8380e <_ZNSt3mapIi10stNpcSalesSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a82a4e:	83 ec 04             	sub    $0x4,%esp
 8a82a51:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a82a54:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82a58:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82a5b:	89 04 24             	mov    %eax,(%esp)
 8a82a5e:	e8 d1 0d 00 00       	call   8a83834 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stNpcSalesEEeqERKS4_>
 8a82a63:	84 c0                	test   %al,%al
 8a82a65:	74 0a                	je     8a82a71 <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x63>
 8a82a67:	b8 00 00 00 00       	mov    $0x0,%eax
 8a82a6c:	e9 c1 00 00 00       	jmp    8a82b32 <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x124>
 8a82a71:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82a74:	89 04 24             	mov    %eax,(%esp)
 8a82a77:	e8 cc 0d 00 00       	call   8a83848 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stNpcSalesEEptEv>
 8a82a7c:	8d 48 08             	lea    0x8(%eax),%ecx
 8a82a7f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82a82:	8d 55 18             	lea    0x18(%ebp),%edx
 8a82a85:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a82a89:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a82a8d:	89 04 24             	mov    %eax,(%esp)
 8a82a90:	e8 c1 0d 00 00       	call   8a83856 <_ZNSt3mapIi14stDungeonSalesSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8a82a95:	83 ec 04             	sub    $0x4,%esp
 8a82a98:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82a9b:	89 04 24             	mov    %eax,(%esp)
 8a82a9e:	e8 a5 0d 00 00       	call   8a83848 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stNpcSalesEEptEv>
 8a82aa3:	8d 50 08             	lea    0x8(%eax),%edx
 8a82aa6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a82aa9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82aad:	89 04 24             	mov    %eax,(%esp)
 8a82ab0:	e8 cd 0d 00 00       	call   8a83882 <_ZNSt3mapIi14stDungeonSalesSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a82ab5:	83 ec 04             	sub    $0x4,%esp
 8a82ab8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a82abb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82abf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82ac2:	89 04 24             	mov    %eax,(%esp)
 8a82ac5:	e8 de 0d 00 00       	call   8a838a8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14stDungeonSalesEEeqERKS4_>
 8a82aca:	84 c0                	test   %al,%al
 8a82acc:	74 07                	je     8a82ad5 <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0xc7>
 8a82ace:	b8 00 00 00 00       	mov    $0x0,%eax
 8a82ad3:	eb 5d                	jmp    8a82b32 <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x124>
 8a82ad5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82ad8:	89 04 24             	mov    %eax,(%esp)
 8a82adb:	e8 dc 0d 00 00       	call   8a838bc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14stDungeonSalesEEptEv>
 8a82ae0:	83 c0 04             	add    $0x4,%eax
 8a82ae3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8a82ae7:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82aea:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82aee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a82af1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82af5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82af8:	89 04 24             	mov    %eax,(%esp)
 8a82afb:	e8 44 02 00 00       	call   8a82d44 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales>
 8a82b00:	83 f0 01             	xor    $0x1,%eax
 8a82b03:	84 c0                	test   %al,%al
 8a82b05:	74 07                	je     8a82b0e <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x100>
 8a82b07:	b8 00 00 00 00       	mov    $0x0,%eax
 8a82b0c:	eb 24                	jmp    8a82b32 <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x124>
 8a82b0e:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8a82b12:	74 19                	je     8a82b2d <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x11f>
 8a82b14:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82b17:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82b1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a82b1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82b22:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82b25:	89 04 24             	mov    %eax,(%esp)
 8a82b28:	e8 43 01 00 00       	call   8a82c70 <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE>
 8a82b2d:	b8 01 00 00 00       	mov    $0x1,%eax
 8a82b32:	c9                   	leave
 8a82b33:	c3                   	ret

```

```c
// SecretShopScript::GetItemByDungeonIdx @ 0x8a82a0e

/* SecretShopScript::GetItemByDungeonIdx(CMTRand*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, int, int, bool) */

undefined4 __thiscall
SecretShopScript::GetItemByDungeonIdx
          (SecretShopScript *this,CMTRand *param_1,vector *param_2,int param_3,int param_4,
          bool param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,stDungeonSales>> local_1c [4];
  _Rb_tree_iterator<std::pair<int_const,stNpcSales>> local_18 [4];
  map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>> local_14 [4];
  map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
  local_10 [12];
  
  std::map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>>::find
            ((int *)local_18);
  std::map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>>::end
            (local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator->(local_18);
    std::map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
    ::find((int *)local_1c);
    std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator->(local_18);
    std::map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonSales>>::operator==
                      (local_1c,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonSales>>::operator->(local_1c);
      cVar1 = GetItems(this,param_1,param_2,(stDungeonSales *)(iVar3 + 4));
      if (cVar1 == '\x01') {
        if (param_5) {
          GetItemByEvent(this,param_1,param_2);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetItemByDungeonLev

```asm
// === 08a82b34 SecretShopScript::GetItemByDungeonLev  [0x08a82b34-0x8a82c6f] ===
 8a82b34:	55                   	push   %ebp
 8a82b35:	89 e5                	mov    %esp,%ebp
 8a82b37:	83 ec 48             	sub    $0x48,%esp
 8a82b3a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8a82b3d:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8a82b40:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82b43:	8d 48 48             	lea    0x48(%eax),%ecx
 8a82b46:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82b49:	8d 55 14             	lea    0x14(%ebp),%edx
 8a82b4c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a82b50:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a82b54:	89 04 24             	mov    %eax,(%esp)
 8a82b57:	e8 86 0c 00 00       	call   8a837e2 <_ZNSt3mapIi10stNpcSalesSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8a82b5c:	83 ec 04             	sub    $0x4,%esp
 8a82b5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82b62:	8d 50 48             	lea    0x48(%eax),%edx
 8a82b65:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a82b68:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82b6c:	89 04 24             	mov    %eax,(%esp)
 8a82b6f:	e8 9a 0c 00 00       	call   8a8380e <_ZNSt3mapIi10stNpcSalesSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a82b74:	83 ec 04             	sub    $0x4,%esp
 8a82b77:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a82b7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82b7e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82b81:	89 04 24             	mov    %eax,(%esp)
 8a82b84:	e8 ab 0c 00 00       	call   8a83834 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stNpcSalesEEeqERKS4_>
 8a82b89:	84 c0                	test   %al,%al
 8a82b8b:	74 0a                	je     8a82b97 <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x63>
 8a82b8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8a82b92:	e9 d6 00 00 00       	jmp    8a82c6d <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x139>
 8a82b97:	8b 45 18             	mov    0x18(%ebp),%eax
 8a82b9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82b9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82ba1:	89 04 24             	mov    %eax,(%esp)
 8a82ba4:	e8 39 05 00 00       	call   8a830e2 <_ZN16SecretShopScript11GetLevelIdxEi>
 8a82ba9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8a82bac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82baf:	89 04 24             	mov    %eax,(%esp)
 8a82bb2:	e8 91 0c 00 00       	call   8a83848 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stNpcSalesEEptEv>
 8a82bb7:	8d 48 20             	lea    0x20(%eax),%ecx
 8a82bba:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a82bbd:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8a82bc0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a82bc4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a82bc8:	89 04 24             	mov    %eax,(%esp)
 8a82bcb:	e8 86 0c 00 00       	call   8a83856 <_ZNSt3mapIi14stDungeonSalesSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8a82bd0:	83 ec 04             	sub    $0x4,%esp
 8a82bd3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82bd6:	89 04 24             	mov    %eax,(%esp)
 8a82bd9:	e8 6a 0c 00 00       	call   8a83848 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stNpcSalesEEptEv>
 8a82bde:	8d 50 20             	lea    0x20(%eax),%edx
 8a82be1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a82be4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82be8:	89 04 24             	mov    %eax,(%esp)
 8a82beb:	e8 92 0c 00 00       	call   8a83882 <_ZNSt3mapIi14stDungeonSalesSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a82bf0:	83 ec 04             	sub    $0x4,%esp
 8a82bf3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a82bf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82bfa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a82bfd:	89 04 24             	mov    %eax,(%esp)
 8a82c00:	e8 a3 0c 00 00       	call   8a838a8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14stDungeonSalesEEeqERKS4_>
 8a82c05:	84 c0                	test   %al,%al
 8a82c07:	74 07                	je     8a82c10 <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0xdc>
 8a82c09:	b8 00 00 00 00       	mov    $0x0,%eax
 8a82c0e:	eb 5d                	jmp    8a82c6d <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x139>
 8a82c10:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a82c13:	89 04 24             	mov    %eax,(%esp)
 8a82c16:	e8 a1 0c 00 00       	call   8a838bc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14stDungeonSalesEEptEv>
 8a82c1b:	83 c0 04             	add    $0x4,%eax
 8a82c1e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8a82c22:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82c25:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82c29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a82c2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82c30:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82c33:	89 04 24             	mov    %eax,(%esp)
 8a82c36:	e8 09 01 00 00       	call   8a82d44 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales>
 8a82c3b:	83 f0 01             	xor    $0x1,%eax
 8a82c3e:	84 c0                	test   %al,%al
 8a82c40:	74 07                	je     8a82c49 <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x115>
 8a82c42:	b8 00 00 00 00       	mov    $0x0,%eax
 8a82c47:	eb 24                	jmp    8a82c6d <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x139>
 8a82c49:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 8a82c4d:	74 19                	je     8a82c68 <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib+0x134>
 8a82c4f:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82c52:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82c56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a82c59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82c5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82c60:	89 04 24             	mov    %eax,(%esp)
 8a82c63:	e8 08 00 00 00       	call   8a82c70 <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE>
 8a82c68:	b8 01 00 00 00       	mov    $0x1,%eax
 8a82c6d:	c9                   	leave
 8a82c6e:	c3                   	ret
 8a82c6f:	90                   	nop

```

```c
// SecretShopScript::GetItemByDungeonLev @ 0x8a82b34

/* SecretShopScript::GetItemByDungeonLev(CMTRand*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, int, int, bool) */

undefined4 __thiscall
SecretShopScript::GetItemByDungeonLev
          (SecretShopScript *this,CMTRand *param_1,vector *param_2,int param_3,int param_4,
          bool param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,stDungeonSales>> local_20 [4];
  undefined4 local_1c;
  _Rb_tree_iterator<std::pair<int_const,stNpcSales>> local_18 [4];
  map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>> local_14 [4];
  map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
  local_10 [12];
  
  std::map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>>::find
            ((int *)local_18);
  std::map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>>::end
            (local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    local_1c = GetLevelIdx(this,param_4);
    std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator->(local_18);
    std::map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
    ::find((int *)local_20);
    std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator->(local_18);
    std::map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonSales>>::operator==
                      (local_20,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonSales>>::operator->(local_20);
      cVar1 = GetItems(this,param_1,param_2,(stDungeonSales *)(iVar3 + 4));
      if (cVar1 == '\x01') {
        if (param_5) {
          GetItemByEvent(this,param_1,param_2);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetItemByEvent

```asm
// === 08a82c70 SecretShopScript::GetItemByEvent  [0x08a82c70-0x8a82d43] ===
 8a82c70:	55                   	push   %ebp
 8a82c71:	89 e5                	mov    %esp,%ebp
 8a82c73:	56                   	push   %esi
 8a82c74:	53                   	push   %ebx
 8a82c75:	83 ec 20             	sub    $0x20,%esp
 8a82c78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82c7b:	89 04 24             	mov    %eax,(%esp)
 8a82c7e:	e8 7f 83 82 ff       	call   82ab002 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEC1Ev>
 8a82c83:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82c86:	83 c0 60             	add    $0x60,%eax
 8a82c89:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8a82c8d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82c90:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82c94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a82c97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82c9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82c9e:	89 04 24             	mov    %eax,(%esp)
 8a82ca1:	e8 9e 00 00 00       	call   8a82d44 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales>
 8a82ca6:	83 f0 01             	xor    $0x1,%eax
 8a82ca9:	84 c0                	test   %al,%al
 8a82cab:	74 07                	je     8a82cb4 <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE+0x44>
 8a82cad:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a82cb2:	eb 7b                	jmp    8a82d2f <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE+0xbf>
 8a82cb4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a82cbb:	eb 3b                	jmp    8a82cf8 <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE+0x88>
 8a82cbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a82cc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82cc4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82cc7:	89 04 24             	mov    %eax,(%esp)
 8a82cca:	e8 c9 96 b7 ff       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 8a82ccf:	c6 40 18 01          	movb   $0x1,0x18(%eax)
 8a82cd3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a82cd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82cda:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82cdd:	89 04 24             	mov    %eax,(%esp)
 8a82ce0:	e8 b3 96 b7 ff       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 8a82ce5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82ce9:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82cec:	89 04 24             	mov    %eax,(%esp)
 8a82cef:	e8 d6 0b 00 00       	call   8a838ca <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE9push_backERKS1_>
 8a82cf4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a82cf8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82cfb:	89 04 24             	mov    %eax,(%esp)
 8a82cfe:	e8 73 96 b7 ff       	call   85fc376 <_ZNKSt6vectorIN10secretshop9SALE_INFOESaIS1_EE4sizeEv>
 8a82d03:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8a82d06:	0f 9f c0             	setg   %al
 8a82d09:	84 c0                	test   %al,%al
 8a82d0b:	75 b0                	jne    8a82cbd <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE+0x4d>
 8a82d0d:	bb 01 00 00 00       	mov    $0x1,%ebx
 8a82d12:	eb 1b                	jmp    8a82d2f <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE+0xbf>
 8a82d14:	89 d3                	mov    %edx,%ebx
 8a82d16:	89 c6                	mov    %eax,%esi
 8a82d18:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82d1b:	89 04 24             	mov    %eax,(%esp)
 8a82d1e:	e8 f3 82 82 ff       	call   82ab016 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EED1Ev>
 8a82d23:	89 f0                	mov    %esi,%eax
 8a82d25:	89 da                	mov    %ebx,%edx
 8a82d27:	89 04 24             	mov    %eax,(%esp)
 8a82d2a:	e8 21 0a 06 00       	call   8ae3750 <_Unwind_Resume>
 8a82d2f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82d32:	89 04 24             	mov    %eax,(%esp)
 8a82d35:	e8 dc 82 82 ff       	call   82ab016 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EED1Ev>
 8a82d3a:	89 d8                	mov    %ebx,%eax
 8a82d3c:	83 c4 20             	add    $0x20,%esp
 8a82d3f:	5b                   	pop    %ebx
 8a82d40:	5e                   	pop    %esi
 8a82d41:	5d                   	pop    %ebp
 8a82d42:	c3                   	ret
 8a82d43:	90                   	nop

```

```c
// SecretShopScript::GetItemByEvent @ 0x8a82c70

/* SecretShopScript::GetItemByEvent(CMTRand*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&) */

undefined4 __thiscall
SecretShopScript::GetItemByEvent(SecretShopScript *this,CMTRand *param_1,vector *param_2)

{
  char cVar1;
  SALE_INFO *pSVar2;
  int iVar3;
  undefined4 uVar4;
  vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> local_1c [12];
  uint local_10;
  
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::vector(local_1c);
                    /* try { // try from 08a82ca1 to 08a82cf3 has its CatchHandler @ 08a82d14 */
  cVar1 = GetItems(this,param_1,(vector *)local_1c,(stDungeonSales *)(this + 0x60));
  if (cVar1 == '\x01') {
    local_10 = 0;
    while( true ) {
      iVar3 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::size
                        (local_1c);
      if (iVar3 <= (int)local_10) break;
      iVar3 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                        (local_1c,local_10);
      *(undefined1 *)(iVar3 + 0x18) = 1;
      pSVar2 = (SALE_INFO *)
               std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                         (local_1c,local_10);
      std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::push_back
                ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)param_2,
                 pSVar2);
      local_10 = local_10 + 1;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::~vector(local_1c);
  return uVar4;
}

```

---

## GetItems

```asm
// === 08a82d44 SecretShopScript::GetItems  [0x08a82d44-0x8a82f69] ===
 8a82d44:	55                   	push   %ebp
 8a82d45:	89 e5                	mov    %esp,%ebp
 8a82d47:	83 ec 78             	sub    $0x78,%esp
 8a82d4a:	8b 45 14             	mov    0x14(%ebp),%eax
 8a82d4d:	83 c0 08             	add    $0x8,%eax
 8a82d50:	89 04 24             	mov    %eax,(%esp)
 8a82d53:	e8 e6 0b 00 00       	call   8a8393e <_ZNKSt3mapIi10stSaleInfoSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 8a82d58:	8b 55 14             	mov    0x14(%ebp),%edx
 8a82d5b:	8b 52 04             	mov    0x4(%edx),%edx
 8a82d5e:	39 d0                	cmp    %edx,%eax
 8a82d60:	0f 92 c0             	setb   %al
 8a82d63:	84 c0                	test   %al,%al
 8a82d65:	0f 84 9e 00 00 00    	je     8a82e09 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0xc5>
 8a82d6b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a82d6e:	89 04 24             	mov    %eax,(%esp)
 8a82d71:	e8 34 05 00 00       	call   8a832aa <_ZN10secretshop9SALE_INFOC1Ev>
 8a82d76:	8b 45 14             	mov    0x14(%ebp),%eax
 8a82d79:	8d 50 08             	lea    0x8(%eax),%edx
 8a82d7c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8a82d7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82d83:	89 04 24             	mov    %eax,(%esp)
 8a82d86:	e8 c7 0b 00 00       	call   8a83952 <_ZNSt3mapIi10stSaleInfoSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8a82d8b:	83 ec 04             	sub    $0x4,%esp
 8a82d8e:	eb 41                	jmp    8a82dd1 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x8d>
 8a82d90:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8a82d93:	89 04 24             	mov    %eax,(%esp)
 8a82d96:	e8 17 0c 00 00       	call   8a839b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEptEv>
 8a82d9b:	83 c0 04             	add    $0x4,%eax
 8a82d9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82da2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a82da5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82da9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82dac:	89 04 24             	mov    %eax,(%esp)
 8a82daf:	e8 b8 02 00 00       	call   8a8306c <_ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo>
 8a82db4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a82db7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82dbb:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82dbe:	89 04 24             	mov    %eax,(%esp)
 8a82dc1:	e8 04 0b 00 00       	call   8a838ca <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE9push_backERKS1_>
 8a82dc6:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8a82dc9:	89 04 24             	mov    %eax,(%esp)
 8a82dcc:	e8 ef 0b 00 00       	call   8a839c0 <_ZNSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEppEv>
 8a82dd1:	8b 45 14             	mov    0x14(%ebp),%eax
 8a82dd4:	8d 50 08             	lea    0x8(%eax),%edx
 8a82dd7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a82dda:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82dde:	89 04 24             	mov    %eax,(%esp)
 8a82de1:	e8 92 0b 00 00       	call   8a83978 <_ZNSt3mapIi10stSaleInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a82de6:	83 ec 04             	sub    $0x4,%esp
 8a82de9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a82dec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82df0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8a82df3:	89 04 24             	mov    %eax,(%esp)
 8a82df6:	e8 a3 0b 00 00       	call   8a8399e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEneERKS4_>
 8a82dfb:	84 c0                	test   %al,%al
 8a82dfd:	75 91                	jne    8a82d90 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x4c>
 8a82dff:	b8 01 00 00 00       	mov    $0x1,%eax
 8a82e04:	e9 5f 01 00 00       	jmp    8a82f68 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x224>
 8a82e09:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8a82e10:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a82e17:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a82e1e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a82e21:	89 04 24             	mov    %eax,(%esp)
 8a82e24:	e8 81 04 00 00       	call   8a832aa <_ZN10secretshop9SALE_INFOC1Ev>
 8a82e29:	e9 14 01 00 00       	jmp    8a82f42 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x1fe>
 8a82e2e:	8b 45 14             	mov    0x14(%ebp),%eax
 8a82e31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82e35:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82e38:	89 04 24             	mov    %eax,(%esp)
 8a82e3b:	e8 b6 01 00 00       	call   8a82ff6 <_ZN16SecretShopScript13GetDomainRateER14stDungeonSales>
 8a82e40:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a82e43:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a82e46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82e4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a82e4d:	89 04 24             	mov    %eax,(%esp)
 8a82e50:	e8 69 8c 64 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 8a82e55:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8a82e58:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a82e5f:	8b 45 14             	mov    0x14(%ebp),%eax
 8a82e62:	8d 50 08             	lea    0x8(%eax),%edx
 8a82e65:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a82e68:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82e6c:	89 04 24             	mov    %eax,(%esp)
 8a82e6f:	e8 de 0a 00 00       	call   8a83952 <_ZNSt3mapIi10stSaleInfoSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8a82e74:	83 ec 04             	sub    $0x4,%esp
 8a82e77:	e9 84 00 00 00       	jmp    8a82f00 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x1bc>
 8a82e7c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a82e7f:	89 04 24             	mov    %eax,(%esp)
 8a82e82:	e8 2b 0b 00 00       	call   8a839b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEptEv>
 8a82e87:	8b 40 18             	mov    0x18(%eax),%eax
 8a82e8a:	01 45 f0             	add    %eax,-0x10(%ebp)
 8a82e8d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a82e90:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8a82e93:	76 60                	jbe    8a82ef5 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x1b1>
 8a82e95:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a82e98:	89 04 24             	mov    %eax,(%esp)
 8a82e9b:	e8 12 0b 00 00       	call   8a839b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEptEv>
 8a82ea0:	8b 40 04             	mov    0x4(%eax),%eax
 8a82ea3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82ea7:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82eaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82eae:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82eb1:	89 04 24             	mov    %eax,(%esp)
 8a82eb4:	e8 b1 00 00 00       	call   8a82f6a <_ZN16SecretShopScript11IsExistItemERSt6vectorIN10secretshop9SALE_INFOESaIS2_EEi>
 8a82eb9:	84 c0                	test   %al,%al
 8a82ebb:	75 77                	jne    8a82f34 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x1f0>
 8a82ebd:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a82ec0:	89 04 24             	mov    %eax,(%esp)
 8a82ec3:	e8 ea 0a 00 00       	call   8a839b2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEptEv>
 8a82ec8:	83 c0 04             	add    $0x4,%eax
 8a82ecb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82ecf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a82ed2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82ed6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82ed9:	89 04 24             	mov    %eax,(%esp)
 8a82edc:	e8 8b 01 00 00       	call   8a8306c <_ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo>
 8a82ee1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a82ee4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82ee8:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82eeb:	89 04 24             	mov    %eax,(%esp)
 8a82eee:	e8 d7 09 00 00       	call   8a838ca <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE9push_backERKS1_>
 8a82ef3:	eb 40                	jmp    8a82f35 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x1f1>
 8a82ef5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a82ef8:	89 04 24             	mov    %eax,(%esp)
 8a82efb:	e8 c0 0a 00 00       	call   8a839c0 <_ZNSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEppEv>
 8a82f00:	8b 45 14             	mov    0x14(%ebp),%eax
 8a82f03:	8d 50 08             	lea    0x8(%eax),%edx
 8a82f06:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82f09:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82f0d:	89 04 24             	mov    %eax,(%esp)
 8a82f10:	e8 63 0a 00 00       	call   8a83978 <_ZNSt3mapIi10stSaleInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a82f15:	83 ec 04             	sub    $0x4,%esp
 8a82f18:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82f1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82f1f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8a82f22:	89 04 24             	mov    %eax,(%esp)
 8a82f25:	e8 74 0a 00 00       	call   8a8399e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stSaleInfoEEneERKS4_>
 8a82f2a:	84 c0                	test   %al,%al
 8a82f2c:	0f 85 4a ff ff ff    	jne    8a82e7c <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x138>
 8a82f32:	eb 01                	jmp    8a82f35 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x1f1>
 8a82f34:	90                   	nop
 8a82f35:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a82f39:	81 7d f4 10 27 00 00 	cmpl   $0x2710,-0xc(%ebp)
 8a82f40:	7f 20                	jg     8a82f62 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x21e>
 8a82f42:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82f45:	89 04 24             	mov    %eax,(%esp)
 8a82f48:	e8 29 94 b7 ff       	call   85fc376 <_ZNKSt6vectorIN10secretshop9SALE_INFOESaIS1_EE4sizeEv>
 8a82f4d:	8b 55 14             	mov    0x14(%ebp),%edx
 8a82f50:	8b 52 04             	mov    0x4(%edx),%edx
 8a82f53:	39 d0                	cmp    %edx,%eax
 8a82f55:	0f 92 c0             	setb   %al
 8a82f58:	84 c0                	test   %al,%al
 8a82f5a:	0f 85 ce fe ff ff    	jne    8a82e2e <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0xea>
 8a82f60:	eb 01                	jmp    8a82f63 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales+0x21f>
 8a82f62:	90                   	nop
 8a82f63:	b8 01 00 00 00       	mov    $0x1,%eax
 8a82f68:	c9                   	leave
 8a82f69:	c3                   	ret

```

```c
// SecretShopScript::GetItems @ 0x8a82d44

/* SecretShopScript::GetItems(CMTRand*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, stDungeonSales&) */

undefined4 __thiscall
SecretShopScript::GetItems
          (SecretShopScript *this,CMTRand *param_1,vector *param_2,stDungeonSales *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_64 [4];
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_60 [4];
  SALE_INFO local_5c [28];
  SALE_INFO local_40 [28];
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_24 [4];
  ulong local_20;
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_1c [4];
  uint local_18;
  uint local_14;
  int local_10;
  
  uVar2 = std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::
          size((map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> *
               )(param_3 + 8));
  if (uVar2 < *(uint *)(param_3 + 4)) {
    secretshop::SALE_INFO::SALE_INFO(local_5c);
    std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::begin
              (local_60);
    while( true ) {
      std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::end
                (local_24);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_60,
                         (_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_60);
      CopyItem(this,local_5c,(stSaleInfo *)(iVar3 + 4));
      std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::push_back
                ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)param_2,
                 local_5c);
      std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_60);
    }
  }
  else {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    secretshop::SALE_INFO::SALE_INFO(local_40);
    do {
      uVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::size
                        ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                         param_2);
      if (*(uint *)(param_3 + 4) <= uVar2) {
        return 1;
      }
      local_20 = GetDomainRate((stDungeonSales *)this);
      local_18 = CMTRand::randInt(param_1,&local_20);
      local_14 = 0;
      std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::begin
                (local_64);
      while( true ) {
        std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::end
                  (local_1c);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64,
                           (_Rb_tree_iterator *)local_1c);
        if (cVar1 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64);
        local_14 = local_14 + *(int *)(iVar3 + 0x18);
        if (local_18 < local_14) {
          std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64);
          cVar1 = IsExistItem((vector *)this,(int)param_2);
          if (cVar1 == '\0') {
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64);
            CopyItem(this,local_40,(stSaleInfo *)(iVar3 + 4));
            std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::push_back
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_40);
          }
          break;
        }
        std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_64);
      }
      local_10 = local_10 + 1;
    } while (local_10 < 0x2711);
  }
  return 1;
}

```

---

## GetLevelIdx

```asm
// === 08a830e2 SecretShopScript::GetLevelIdx  [0x08a830e2-0x8a83187] ===
 8a830e2:	55                   	push   %ebp
 8a830e3:	89 e5                	mov    %esp,%ebp
 8a830e5:	83 ec 28             	sub    $0x28,%esp
 8a830e8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a830eb:	8d 50 30             	lea    0x30(%eax),%edx
 8a830ee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a830f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a830f5:	89 04 24             	mov    %eax,(%esp)
 8a830f8:	e8 35 09 00 00       	call   8a83a32 <_ZNKSt3setI14stLevelSectionSt4lessIS0_ESaIS0_EE5beginEv>
 8a830fd:	83 ec 04             	sub    $0x4,%esp
 8a83100:	eb 50                	jmp    8a83152 <_ZN16SecretShopScript11GetLevelIdxEi+0x70>
 8a83102:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a83105:	89 04 24             	mov    %eax,(%esp)
 8a83108:	e8 85 09 00 00       	call   8a83a92 <_ZNKSt23_Rb_tree_const_iteratorI14stLevelSectionEdeEv>
 8a8310d:	8b 40 04             	mov    0x4(%eax),%eax
 8a83110:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a83113:	7f 1a                	jg     8a8312f <_ZN16SecretShopScript11GetLevelIdxEi+0x4d>
 8a83115:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a83118:	89 04 24             	mov    %eax,(%esp)
 8a8311b:	e8 72 09 00 00       	call   8a83a92 <_ZNKSt23_Rb_tree_const_iteratorI14stLevelSectionEdeEv>
 8a83120:	8b 40 08             	mov    0x8(%eax),%eax
 8a83123:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a83126:	7c 07                	jl     8a8312f <_ZN16SecretShopScript11GetLevelIdxEi+0x4d>
 8a83128:	b8 01 00 00 00       	mov    $0x1,%eax
 8a8312d:	eb 05                	jmp    8a83134 <_ZN16SecretShopScript11GetLevelIdxEi+0x52>
 8a8312f:	b8 00 00 00 00       	mov    $0x0,%eax
 8a83134:	84 c0                	test   %al,%al
 8a83136:	74 0f                	je     8a83147 <_ZN16SecretShopScript11GetLevelIdxEi+0x65>
 8a83138:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8313b:	89 04 24             	mov    %eax,(%esp)
 8a8313e:	e8 4f 09 00 00       	call   8a83a92 <_ZNKSt23_Rb_tree_const_iteratorI14stLevelSectionEdeEv>
 8a83143:	8b 00                	mov    (%eax),%eax
 8a83145:	eb 3e                	jmp    8a83185 <_ZN16SecretShopScript11GetLevelIdxEi+0xa3>
 8a83147:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8314a:	89 04 24             	mov    %eax,(%esp)
 8a8314d:	e8 4e 09 00 00       	call   8a83aa0 <_ZNSt23_Rb_tree_const_iteratorI14stLevelSectionEppEv>
 8a83152:	8b 45 08             	mov    0x8(%ebp),%eax
 8a83155:	8d 50 30             	lea    0x30(%eax),%edx
 8a83158:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a8315b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8315f:	89 04 24             	mov    %eax,(%esp)
 8a83162:	e8 f1 08 00 00       	call   8a83a58 <_ZNKSt3setI14stLevelSectionSt4lessIS0_ESaIS0_EE3endEv>
 8a83167:	83 ec 04             	sub    $0x4,%esp
 8a8316a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a8316d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a83171:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a83174:	89 04 24             	mov    %eax,(%esp)
 8a83177:	e8 02 09 00 00       	call   8a83a7e <_ZNKSt23_Rb_tree_const_iteratorI14stLevelSectionEneERKS1_>
 8a8317c:	84 c0                	test   %al,%al
 8a8317e:	75 82                	jne    8a83102 <_ZN16SecretShopScript11GetLevelIdxEi+0x20>
 8a83180:	b8 00 00 00 00       	mov    $0x0,%eax
 8a83185:	c9                   	leave
 8a83186:	c3                   	ret
 8a83187:	90                   	nop

```

```c
// SecretShopScript::GetLevelIdx @ 0x8a830e2

/* SecretShopScript::GetLevelIdx(int) */

undefined4 __thiscall SecretShopScript::GetLevelIdx(SecretShopScript *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  set<stLevelSection,std::less<stLevelSection>,std::allocator<stLevelSection>> local_14 [4];
  set<stLevelSection,std::less<stLevelSection>,std::allocator<stLevelSection>> local_10 [12];
  
  std::set<stLevelSection,std::less<stLevelSection>,std::allocator<stLevelSection>>::begin(local_14)
  ;
  while( true ) {
    std::set<stLevelSection,std::less<stLevelSection>,std::allocator<stLevelSection>>::end(local_10)
    ;
    cVar2 = std::_Rb_tree_const_iterator<stLevelSection>::operator!=
                      ((_Rb_tree_const_iterator<stLevelSection> *)local_14,
                       (_Rb_tree_const_iterator *)local_10);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar3 = std::_Rb_tree_const_iterator<stLevelSection>::operator*
                      ((_Rb_tree_const_iterator<stLevelSection> *)local_14);
    if ((param_1 < *(int *)(iVar3 + 4)) ||
       (iVar3 = std::_Rb_tree_const_iterator<stLevelSection>::operator*
                          ((_Rb_tree_const_iterator<stLevelSection> *)local_14),
       *(int *)(iVar3 + 8) < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    std::_Rb_tree_const_iterator<stLevelSection>::operator++
              ((_Rb_tree_const_iterator<stLevelSection> *)local_14);
  }
  puVar4 = (undefined4 *)
           std::_Rb_tree_const_iterator<stLevelSection>::operator*
                     ((_Rb_tree_const_iterator<stLevelSection> *)local_14);
  return *puVar4;
}

```

---

## GetNpcByDungeonIdx

```asm
// === 08a828f8 SecretShopScript::GetNpcByDungeonIdx  [0x08a828f8-0x8a8293b] ===
 8a828f8:	55                   	push   %ebp
 8a828f9:	89 e5                	mov    %esp,%ebp
 8a828fb:	83 ec 28             	sub    $0x28,%esp
 8a828fe:	8b 55 08             	mov    0x8(%ebp),%edx
 8a82901:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a82904:	8d 4d 14             	lea    0x14(%ebp),%ecx
 8a82907:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a8290b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8290f:	89 04 24             	mov    %eax,(%esp)
 8a82912:	e8 81 0e 00 00       	call   8a83798 <_ZNSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS0_EEE11equal_rangeERS4_>
 8a82917:	83 ec 04             	sub    $0x4,%esp
 8a8291a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a8291d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8a82921:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82924:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82928:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a8292b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8292f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a82932:	89 04 24             	mov    %eax,(%esp)
 8a82935:	e8 5e 00 00 00       	call   8a82998 <_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E>
 8a8293a:	c9                   	leave
 8a8293b:	c3                   	ret

```

```c
// SecretShopScript::GetNpcByDungeonIdx @ 0x8a828f8

/* SecretShopScript::GetNpcByDungeonIdx(int&, int, int) */

void SecretShopScript::GetNpcByDungeonIdx(int *param_1,int param_2,int param_3)

{
  int local_14 [4];
  
  std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>::
  equal_range(local_14);
  GetNpcIdx((SecretShopScript *)param_1,(int *)param_2,param_3,(pair *)local_14);
  return;
}

```

---

## GetNpcByDungeonLev

```asm
// === 08a8293c SecretShopScript::GetNpcByDungeonLev  [0x08a8293c-0x8a82997] ===
 8a8293c:	55                   	push   %ebp
 8a8293d:	89 e5                	mov    %esp,%ebp
 8a8293f:	83 ec 28             	sub    $0x28,%esp
 8a82942:	8b 45 14             	mov    0x14(%ebp),%eax
 8a82945:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82949:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8294c:	89 04 24             	mov    %eax,(%esp)
 8a8294f:	e8 8e 07 00 00       	call   8a830e2 <_ZN16SecretShopScript11GetLevelIdxEi>
 8a82954:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a82957:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8295a:	8d 48 18             	lea    0x18(%eax),%ecx
 8a8295d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82960:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8a82963:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a82967:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a8296b:	89 04 24             	mov    %eax,(%esp)
 8a8296e:	e8 25 0e 00 00       	call   8a83798 <_ZNSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS0_EEE11equal_rangeERS4_>
 8a82973:	83 ec 04             	sub    $0x4,%esp
 8a82976:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82979:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8a8297d:	8b 45 10             	mov    0x10(%ebp),%eax
 8a82980:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a82984:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a82987:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a8298b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8298e:	89 04 24             	mov    %eax,(%esp)
 8a82991:	e8 02 00 00 00       	call   8a82998 <_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E>
 8a82996:	c9                   	leave
 8a82997:	c3                   	ret

```

```c
// SecretShopScript::GetNpcByDungeonLev @ 0x8a8293c

/* SecretShopScript::GetNpcByDungeonLev(int&, int, int) */

void __thiscall
SecretShopScript::GetNpcByDungeonLev(SecretShopScript *this,int *param_1,int param_2,int param_3)

{
  int local_18 [2];
  undefined4 local_10;
  
  local_10 = GetLevelIdx(this,param_3);
  std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>::
  equal_range(local_18);
  GetNpcIdx(this,param_1,param_2,(pair *)local_18);
  return;
}

```

---

## GetNpcIdx

```asm
// === 08a82998 SecretShopScript::GetNpcIdx  [0x08a82998-0x8a82a0d] ===
 8a82998:	55                   	push   %ebp
 8a82999:	89 e5                	mov    %esp,%ebp
 8a8299b:	83 ec 28             	sub    $0x28,%esp
 8a8299e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a829a5:	8b 45 14             	mov    0x14(%ebp),%eax
 8a829a8:	8b 00                	mov    (%eax),%eax
 8a829aa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8a829ad:	eb 3f                	jmp    8a829ee <_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E+0x56>
 8a829af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a829b2:	89 04 24             	mov    %eax,(%esp)
 8a829b5:	e8 d0 0d 00 00       	call   8a8378a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEptEv>
 8a829ba:	83 c0 04             	add    $0x4,%eax
 8a829bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a829c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a829c3:	8b 40 08             	mov    0x8(%eax),%eax
 8a829c6:	01 45 f0             	add    %eax,-0x10(%ebp)
 8a829c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a829cc:	3b 45 10             	cmp    0x10(%ebp),%eax
 8a829cf:	7e 12                	jle    8a829e3 <_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E+0x4b>
 8a829d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a829d4:	8b 50 04             	mov    0x4(%eax),%edx
 8a829d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a829da:	89 10                	mov    %edx,(%eax)
 8a829dc:	b8 01 00 00 00       	mov    $0x1,%eax
 8a829e1:	eb 29                	jmp    8a82a0c <_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E+0x74>
 8a829e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a829e6:	89 04 24             	mov    %eax,(%esp)
 8a829e9:	e8 d6 0d 00 00       	call   8a837c4 <_ZNSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEppEv>
 8a829ee:	8b 45 14             	mov    0x14(%ebp),%eax
 8a829f1:	83 c0 04             	add    $0x4,%eax
 8a829f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a829f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a829fb:	89 04 24             	mov    %eax,(%esp)
 8a829fe:	e8 73 0d 00 00       	call   8a83776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEneERKS4_>
 8a82a03:	84 c0                	test   %al,%al
 8a82a05:	75 a8                	jne    8a829af <_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E+0x17>
 8a82a07:	b8 00 00 00 00       	mov    $0x0,%eax
 8a82a0c:	c9                   	leave
 8a82a0d:	c3                   	ret

```

```c
// SecretShopScript::GetNpcIdx @ 0x8a82998

/* SecretShopScript::GetNpcIdx(int&, int, std::pair<std::_Rb_tree_iterator<std::pair<int const,
   stDungeonNpc> >, std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> > >&) */

undefined4 __thiscall
SecretShopScript::GetNpcIdx(SecretShopScript *this,int *param_1,int param_2,pair *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_18 = *(undefined4 *)param_3;
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_18,
                       (_Rb_tree_iterator *)(param_3 + 4));
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_18);
    local_10 = iVar2 + 4;
    local_14 = local_14 + *(int *)(iVar2 + 0xc);
    if (param_2 < local_14) break;
    std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_18);
  }
  *param_1 = *(int *)(iVar2 + 8);
  return 1;
}

```

---

## GetRandItemPrice

```asm
// === 08a83188 SecretShopScript::GetRandItemPrice  [0x08a83188-0x8a8324d] ===
 8a83188:	55                   	push   %ebp
 8a83189:	89 e5                	mov    %esp,%ebp
 8a8318b:	53                   	push   %ebx
 8a8318c:	83 ec 24             	sub    $0x24,%esp
 8a8318f:	e8 0c ab 5f ff       	call   807dca0 <rand@plt>
 8a83194:	89 c1                	mov    %eax,%ecx
 8a83196:	ba 56 55 55 55       	mov    $0x55555556,%edx
 8a8319b:	89 c8                	mov    %ecx,%eax
 8a8319d:	f7 ea                	imul   %edx
 8a8319f:	89 c8                	mov    %ecx,%eax
 8a831a1:	c1 f8 1f             	sar    $0x1f,%eax
 8a831a4:	89 d3                	mov    %edx,%ebx
 8a831a6:	29 c3                	sub    %eax,%ebx
 8a831a8:	89 d8                	mov    %ebx,%eax
 8a831aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a831ad:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a831b0:	89 d0                	mov    %edx,%eax
 8a831b2:	01 c0                	add    %eax,%eax
 8a831b4:	01 d0                	add    %edx,%eax
 8a831b6:	89 ca                	mov    %ecx,%edx
 8a831b8:	29 c2                	sub    %eax,%edx
 8a831ba:	89 d0                	mov    %edx,%eax
 8a831bc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a831bf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8a831c3:	75 3a                	jne    8a831ff <_ZN16SecretShopScript16GetRandItemPriceEi+0x77>
 8a831c5:	db 45 0c             	fildl  0xc(%ebp)
 8a831c8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a831cb:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 8a831d1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a831d4:	db 45 e4             	fildl  -0x1c(%ebp)
 8a831d7:	dd 05 b0 82 e2 08    	fldl   0x8e282b0
 8a831dd:	de f9                	fdivrp %st,%st(1)
 8a831df:	de c9                	fmulp  %st,%st(1)
 8a831e1:	d9 7d e2             	fnstcw -0x1e(%ebp)
 8a831e4:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8a831e8:	b4 0c                	mov    $0xc,%ah
 8a831ea:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8a831ee:	d9 6d e0             	fldcw  -0x20(%ebp)
 8a831f1:	db 5d e4             	fistpl -0x1c(%ebp)
 8a831f4:	d9 6d e2             	fldcw  -0x1e(%ebp)
 8a831f7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a831fa:	03 45 0c             	add    0xc(%ebp),%eax
 8a831fd:	eb 49                	jmp    8a83248 <_ZN16SecretShopScript16GetRandItemPriceEi+0xc0>
 8a831ff:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8a83203:	75 40                	jne    8a83245 <_ZN16SecretShopScript16GetRandItemPriceEi+0xbd>
 8a83205:	db 45 0c             	fildl  0xc(%ebp)
 8a83208:	8b 45 08             	mov    0x8(%ebp),%eax
 8a8320b:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 8a83211:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a83214:	db 45 e4             	fildl  -0x1c(%ebp)
 8a83217:	dd 05 b0 82 e2 08    	fldl   0x8e282b0
 8a8321d:	de f9                	fdivrp %st,%st(1)
 8a8321f:	de c9                	fmulp  %st,%st(1)
 8a83221:	d9 7d e2             	fnstcw -0x1e(%ebp)
 8a83224:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8a83228:	b4 0c                	mov    $0xc,%ah
 8a8322a:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8a8322e:	d9 6d e0             	fldcw  -0x20(%ebp)
 8a83231:	db 5d e4             	fistpl -0x1c(%ebp)
 8a83234:	d9 6d e2             	fldcw  -0x1e(%ebp)
 8a83237:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a8323a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a8323d:	89 d1                	mov    %edx,%ecx
 8a8323f:	29 c1                	sub    %eax,%ecx
 8a83241:	89 c8                	mov    %ecx,%eax
 8a83243:	eb 03                	jmp    8a83248 <_ZN16SecretShopScript16GetRandItemPriceEi+0xc0>
 8a83245:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a83248:	83 c4 24             	add    $0x24,%esp
 8a8324b:	5b                   	pop    %ebx
 8a8324c:	5d                   	pop    %ebp
 8a8324d:	c3                   	ret

```

```c
// SecretShopScript::GetRandItemPrice @ 0x8a83188

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretShopScript::GetRandItemPrice(int) */

int __thiscall SecretShopScript::GetRandItemPrice(SecretShopScript *this,int param_1)

{
  int iVar1;
  
  iVar1 = rand();
  if (iVar1 % 3 == 0) {
    param_1 = (int)ROUND(((double)*(int *)(this + 0x80) / _DAT_08e282b0) * (double)param_1) +
              param_1;
  }
  else if (iVar1 % 3 == 1) {
    param_1 = param_1 - (int)ROUND(((double)*(int *)(this + 0x80) / _DAT_08e282b0) * (double)param_1
                                  );
  }
  return param_1;
}

```

---

## IsExistItem

```asm
// === 08a82f6a SecretShopScript::IsExistItem  [0x08a82f6a-0x8a82ff5] ===
 8a82f6a:	55                   	push   %ebp
 8a82f6b:	89 e5                	mov    %esp,%ebp
 8a82f6d:	83 ec 28             	sub    $0x28,%esp
 8a82f70:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82f73:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a82f76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82f7a:	89 04 24             	mov    %eax,(%esp)
 8a82f7d:	e8 56 93 b7 ff       	call   85fc2d8 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE3endEv>
 8a82f82:	83 ec 04             	sub    $0x4,%esp
 8a82f85:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a82f88:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a82f8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82f8f:	89 04 24             	mov    %eax,(%esp)
 8a82f92:	e8 1d 93 b7 ff       	call   85fc2b4 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE5beginEv>
 8a82f97:	83 ec 04             	sub    $0x4,%esp
 8a82f9a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82f9d:	8d 55 10             	lea    0x10(%ebp),%edx
 8a82fa0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8a82fa4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8a82fa7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a82fab:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8a82fae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82fb2:	89 04 24             	mov    %eax,(%esp)
 8a82fb5:	e8 23 0a 00 00       	call   8a839dd <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN10secretshop9SALE_INFOESt6vectorIS3_SaIS3_EEEEiET_S9_S9_RKT0_>
 8a82fba:	83 ec 04             	sub    $0x4,%esp
 8a82fbd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a82fc0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a82fc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82fc7:	89 04 24             	mov    %eax,(%esp)
 8a82fca:	e8 09 93 b7 ff       	call   85fc2d8 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE3endEv>
 8a82fcf:	83 ec 04             	sub    $0x4,%esp
 8a82fd2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a82fd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82fd9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a82fdc:	89 04 24             	mov    %eax,(%esp)
 8a82fdf:	e8 1a 93 b7 ff       	call   85fc2fe <_ZN9__gnu_cxxneIPN10secretshop9SALE_INFOESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8a82fe4:	84 c0                	test   %al,%al
 8a82fe6:	74 07                	je     8a82fef <_ZN16SecretShopScript11IsExistItemERSt6vectorIN10secretshop9SALE_INFOESaIS2_EEi+0x85>
 8a82fe8:	b8 01 00 00 00       	mov    $0x1,%eax
 8a82fed:	eb 05                	jmp    8a82ff4 <_ZN16SecretShopScript11IsExistItemERSt6vectorIN10secretshop9SALE_INFOESaIS2_EEi+0x8a>
 8a82fef:	b8 00 00 00 00       	mov    $0x0,%eax
 8a82ff4:	c9                   	leave
 8a82ff5:	c3                   	ret

```

```c
// SecretShopScript::IsExistItem @ 0x8a82f6a

/* SecretShopScript::IsExistItem(std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, int) */

bool SecretShopScript::IsExistItem(vector *param_1,int param_2)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>,int>
            (local_1c,local_14,local_18,&stack0x0000000c);
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
  bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
  return bVar1;
}

```

---

## verifyNpc

```asm
// === 08a82804 SecretShopScript::verifyNpc  [0x08a82804-0x8a828f7] ===
 8a82804:	55                   	push   %ebp
 8a82805:	89 e5                	mov    %esp,%ebp
 8a82807:	83 ec 38             	sub    $0x38,%esp
 8a8280a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a82811:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a82814:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a82817:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a8281b:	89 04 24             	mov    %eax,(%esp)
 8a8281e:	e8 07 0f 00 00       	call   8a8372a <_ZNSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8a82823:	83 ec 04             	sub    $0x4,%esp
 8a82826:	e9 9c 00 00 00       	jmp    8a828c7 <_ZN16SecretShopScript9verifyNpcERSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS1_EEE+0xc3>
 8a8282b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a8282e:	89 04 24             	mov    %eax,(%esp)
 8a82831:	e8 54 0f 00 00       	call   8a8378a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEptEv>
 8a82836:	89 c2                	mov    %eax,%edx
 8a82838:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a8283b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a8283f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a82842:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a82846:	89 04 24             	mov    %eax,(%esp)
 8a82849:	e8 4a 0f 00 00       	call   8a83798 <_ZNSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS0_EEE11equal_rangeERS4_>
 8a8284e:	83 ec 04             	sub    $0x4,%esp
 8a82851:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a82858:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a8285b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8a8285e:	eb 1c                	jmp    8a8287c <_ZN16SecretShopScript9verifyNpcERSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS1_EEE+0x78>
 8a82860:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a82863:	89 04 24             	mov    %eax,(%esp)
 8a82866:	e8 1f 0f 00 00       	call   8a8378a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEptEv>
 8a8286b:	8b 40 0c             	mov    0xc(%eax),%eax
 8a8286e:	01 45 f4             	add    %eax,-0xc(%ebp)
 8a82871:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a82874:	89 04 24             	mov    %eax,(%esp)
 8a82877:	e8 48 0f 00 00       	call   8a837c4 <_ZNSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEppEv>
 8a8287c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a8287f:	83 c0 04             	add    $0x4,%eax
 8a82882:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a82886:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a82889:	89 04 24             	mov    %eax,(%esp)
 8a8288c:	e8 e5 0e 00 00       	call   8a83776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEneERKS4_>
 8a82891:	84 c0                	test   %al,%al
 8a82893:	75 cb                	jne    8a82860 <_ZN16SecretShopScript9verifyNpcERSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS1_EEE+0x5c>
 8a82895:	81 7d f4 10 27 00 00 	cmpl   $0x2710,-0xc(%ebp)
 8a8289c:	74 1e                	je     8a828bc <_ZN16SecretShopScript9verifyNpcERSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS1_EEE+0xb8>
 8a8289e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a828a1:	89 04 24             	mov    %eax,(%esp)
 8a828a4:	e8 e1 0e 00 00       	call   8a8378a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEptEv>
 8a828a9:	8b 40 04             	mov    0x4(%eax),%eax
 8a828ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a828b0:	c7 04 24 84 7e e2 08 	movl   $0x8e27e84,(%esp)
 8a828b7:	e8 a4 b2 5f ff       	call   807db60 <printf@plt>
 8a828bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a828bf:	89 04 24             	mov    %eax,(%esp)
 8a828c2:	e8 fd 0e 00 00       	call   8a837c4 <_ZNSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEppEv>
 8a828c7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a828ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a828cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a828d1:	89 04 24             	mov    %eax,(%esp)
 8a828d4:	e8 77 0e 00 00       	call   8a83750 <_ZNSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a828d9:	83 ec 04             	sub    $0x4,%esp
 8a828dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a828df:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a828e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a828e6:	89 04 24             	mov    %eax,(%esp)
 8a828e9:	e8 88 0e 00 00       	call   8a83776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi12stDungeonNpcEEneERKS4_>
 8a828ee:	84 c0                	test   %al,%al
 8a828f0:	0f 85 35 ff ff ff    	jne    8a8282b <_ZN16SecretShopScript9verifyNpcERSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS1_EEE+0x27>
 8a828f6:	c9                   	leave
 8a828f7:	c3                   	ret

```

```c
// SecretShopScript::verifyNpc @ 0x8a82804

/* SecretShopScript::verifyNpc(std::multimap<int, stDungeonNpc, std::less<int>,
   std::allocator<std::pair<int const, stDungeonNpc> > >&) */

void SecretShopScript::verifyNpc(multimap *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  int local_20;
  _Rb_tree_iterator a_Stack_1c [4];
  multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>
  local_18 [4];
  multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>::
  begin(local_18);
  while( true ) {
    std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    uVar2 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)local_18);
    std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>
    ::equal_range(&local_20);
    local_10 = 0;
    local_24 = local_20;
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_24,
                         a_Stack_1c);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_24);
      local_10 = local_10 + *(int *)(iVar3 + 0xc);
      std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_24);
    }
    if (local_10 != 10000) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_20);
      printf("[SecretShop Error] NPC ratio is wrong!(index:%d)\n",*(undefined4 *)(iVar3 + 4),uVar2);
    }
    std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)local_18);
  }
  return;
}

```

