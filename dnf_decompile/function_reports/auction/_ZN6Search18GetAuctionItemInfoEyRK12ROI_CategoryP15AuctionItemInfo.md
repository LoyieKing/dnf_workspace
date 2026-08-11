# _ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo

`Search::GetAuctionItemInfo(unsigned long long, ROI_Category const&, AuctionItemInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8081760` | `0x30b` | `0x808aa00` | `0x30e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,235 +1,236 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,-0x50(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,-0x4c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 add    $0x54,%eax
 mov    %eax,-0x24(%ebp)
 movl   $0x89,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0x24(%ebp),%eax
 lea    0x28(%eax),%ecx
 lea    -0x30(%ebp),%eax
 lea    -0x50(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    -0x24(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEneERKS6_>
 test   %al,%al
 je     <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0xa2>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEptEv>
 mov    0x8(%eax),%eax
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
 je     <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0xac>
 jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0xb6>
 mov    $0x24,%eax
-jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x300>
+jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x303>
 mov    $0x24,%eax
-jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x300>
+jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x303>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12ROI_Category7isEmptyEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0xee>
 mov    -0x28(%ebp),%eax
 lea    0x54(%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12ROI_Category10isMatchingERKS_>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0xee>
 mov    $0x24,%eax
-jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x300>
+jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x303>
 mov    -0x50(%ebp),%eax
 mov    -0x4c(%ebp),%edx
 mov    0x18(%ebp),%ecx
 mov    %eax,(%ecx)
 mov    %edx,0x4(%ecx)
 mov    -0x28(%ebp),%eax
 mov    (%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %edx,0x8(%eax)
 mov    -0x28(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %edx,0xc(%eax)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ROI_AverageKeyC1Ev>
 mov    -0x28(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo9GetItemIdEv>
 mov    %eax,-0x48(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0x54(%eax),%edx
 mov    %edx,-0x44(%ebp)
 mov    0x58(%eax),%edx
 mov    %edx,-0x40(%ebp)
 mov    0x5c(%eax),%eax
 mov    %eax,-0x3c(%ebp)
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x175>
 mov    -0x1c(%ebp),%ecx
 mov    -0x1c(%ebp),%edx
 mov    -0x28(%ebp),%ebx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x20,%eax
 movzbl 0x11(%eax),%eax
 movzbl %al,%eax
 lea    0x8(%ecx),%edx
 mov    %ax,-0x48(%ebp,%edx,2)
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x2,-0x1c(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x14d>
 lea    -0x48(%ebp),%eax
-add    $0x16,%eax
+add    $0x10,%eax
+add    $0x6,%eax
 mov    %eax,0x4(%esp)
 lea    -0x48(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZSt4sortIPsEvT_S1_>
 mov    0x18(%ebp),%eax
 lea    0x10(%eax),%edi
 mov    -0x28(%ebp),%eax
 add    $0x3f,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 movzbl %al,%esi
 mov    -0x28(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo15GetUpgradeValueEv>
 movzbl %al,%ebx
 mov    -0x28(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo9GetItemIdEv>
 mov    -0x24(%ebp),%edx
 lea    0xd8(%edx),%ecx
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 lea    -0x48(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x207>
+je     <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x20a>
 mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x300>
+jmp    <T> <_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo+0x303>
 mov    -0x28(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary16getCharacterNameEi>
 mov    0x18(%ebp),%edx
 add    $0x14,%edx
 movl   $0xc,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    -0x28(%ebp),%eax
 mov    0x10(%eax),%eax
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary15getExpiringTimeEll>
 mov    0x18(%ebp),%edx
 mov    %al,0x29(%edx)
 mov    0x18(%ebp),%eax
 mov    -0x28(%ebp),%edx
 mov    0x14(%edx),%ecx
 mov    %ecx,0x2a(%eax)
 mov    0x18(%edx),%ecx
 mov    %ecx,0x2e(%eax)
 mov    0x1c(%edx),%ecx
 mov    %ecx,0x32(%eax)
 mov    0x20(%edx),%ecx
 mov    %ecx,0x36(%eax)
 mov    0x24(%edx),%ecx
 mov    %ecx,0x3a(%eax)
 mov    0x28(%edx),%ecx
 mov    %ecx,0x3e(%eax)
 mov    0x2c(%edx),%ecx
 mov    %ecx,0x42(%eax)
 mov    0x30(%edx),%ecx
 mov    %ecx,0x46(%eax)
 mov    0x34(%edx),%ecx
 mov    %ecx,0x4a(%eax)
 mov    0x38(%edx),%ecx
 mov    %ecx,0x4e(%eax)
 mov    0x3c(%edx),%ecx
 mov    %ecx,0x52(%eax)
 mov    0x40(%edx),%ecx
 mov    %ecx,0x56(%eax)
 mov    0x44(%edx),%ecx
 mov    %ecx,0x5a(%eax)
 movzbl 0x48(%edx),%edx
 mov    %dl,0x5e(%eax)
 mov    -0x28(%ebp),%eax
 mov    0x4c(%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %edx,0x81(%eax)
 mov    -0x28(%ebp),%eax
 mov    0x50(%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %edx,0x85(%eax)
 mov    -0x28(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo14getAbilityTypeEv>
 mov    0x18(%ebp),%edx
 mov    %al,0x3a(%edx)
 mov    -0x28(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo15getAbilityValueEv>
 mov    0x18(%ebp),%edx
 mov    %ax,0x3b(%edx)
 mov    $0x0,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: DWORD GetAuctionItemInfo(Search * this, __int64 auctionId, ROI_Category
   * _roi_search_category, AuctionItemInfo * pAuctionItemInfo) */

DWORD __thiscall
Search::_ZN6Search18GetAuctionItemInfoEyRK12ROI_CategoryP15AuctionItemInfo
          (Search *this,__int64 auctionId,ROI_Category *_roi_search_category,
          AuctionItemInfo *pAuctionItemInfo)

{
  char cVar1;
  bool bVar2;
  uchar uVar3;
  uchar itemUpgradeValue;
  ushort uVar4;
  pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*> *ppVar5;
  ulong itemId;
  char *__src;
  ROI_AverageKey local_4c;
  undefined1 local_34 [8];
  AuctionDictionaryData *local_2c;
  AuctionDictionary *local_28;
  _Base_ptr local_24;
  size_t local_20;
  
                    /* Unresolved local var: AuctionDictionaryData * p_auction_dictionary_data@[???]
                       Unresolved local var: AuctionDictionary * p_auction_dictionary@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                       iter@[???]
                       Unresolved local var: ROI_AverageKey _roi_average_key@[???] */
  local_28 = &this->mpAuction->mAuctionDic;
  memset(pAuctionItemInfo,0,0x89);
  std::
  map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
  ::find((map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
          *)local_34,(ulonglong *)&local_28->mAuctionDicTable);
  std::
  map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
  ::end((map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
         *)(local_34 + 4));
  bVar2 = std::
          _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
          ::operator!=((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                        *)local_34,
                       (_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                        *)(local_34 + 4));
  if (bVar2) {
    ppVar5 = std::
             _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
             ::operator->((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                           *)local_34);
    local_2c = ppVar5->second;
    if (local_2c == (AuctionDictionaryData *)0x0) {
      local_24 = (_Base_ptr)0x24;
    }
    else {
      bVar2 = ROI_Category::isEmpty(_roi_search_category);
      if ((bVar2) ||
         (bVar2 = ROI_Category::isMatching(&local_2c->_reg_roi_category_key,_roi_search_category),
         bVar2)) {
        pAuctionItemInfo->auction_id = auctionId;
        pAuctionItemInfo->price = local_2c->price;
        pAuctionItemInfo->instant_price = local_2c->instant_price;
        ROI_AverageKey::ROI_AverageKey(&local_4c);
        local_4c.baseItem_index = DnfItemInfo::GetItemId(&local_2c->item_info);
        local_4c.option_category.field_0._high_category_key._0_4_ =
             *(undefined4 *)&(local_2c->_reg_roi_category_key).field_0;
        local_4c.option_category.field_0._high_category_key._4_4_ =
             *(undefined4 *)((int)&(local_2c->_reg_roi_category_key).field_0 + 4);
        local_4c.option_category.field_1 = (local_2c->_reg_roi_category_key).field_1;
                    /* Unresolved local var: int i@[???] */
        for (local_20 = 0; (int)local_20 < 3; local_20 = local_20 + 1) {
          *(ushort *)((int)&local_4c.baseItem_index + (local_20 + 8) * 2) =
               (ushort)(local_2c->item_info).random_option_.option_[local_20].option_index_;
        }
        std::sort<short_int*>
                  ((short *)&local_4c.field_2.option_index_key,(short *)((int)&local_4c.field_2 + 6)
                  );
        uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate(&(local_2c->item_info).separate_info);
        itemUpgradeValue = DnfItemInfo::GetUpgradeValue(&local_2c->item_info);
        itemId = DnfItemInfo::GetItemId(&local_2c->item_info);
        local_24 = (_Base_ptr)
                   AveragePriceDictionary::
                   _ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi
                             (&local_28->mAvrgPriceDic,itemId,itemUpgradeValue,&local_4c,uVar3,
                              &pAuctionItemInfo->average_price);
        if (local_24 == (_Base_ptr)0x0) {
          __src = AuctionDictionary::_ZN17AuctionDictionary16getCharacterNameEi
                            (local_28,local_2c->owner_id);
          strncpy(pAuctionItemInfo->owner_name,__src,0xc);
          uVar3 = AuctionDictionary::_ZN17AuctionDictionary15getExpiringTimeEll
                            (local_28,local_2c->expire_time,0);
          pAuctionItemInfo->expire_time = uVar3;
          *(undefined4 *)&pAuctionItemInfo->item_info = *(undefined4 *)&local_2c->item_info;
          *(undefined4 *)((int)&(pAuctionItemInfo->item_info).item_id + 3) =
               *(undefined4 *)((int)&(local_2c->item_info).item_id + 3);
          *(undefined4 *)((int)&(pAuctionItemInfo->item_info).add_info + 2) =
               *(undefined4 *)((int)&(local_2c->item_info).add_info + 2);
          (pAuctionItemInfo->item_info).extendInfo = (local_2c->item_info).extendInfo;
          uVar4 = (local_2c->item_info).abilityValue_;
          cVar1 = (local_2c->item_info).guid_.data_[0];
          (pAuctionItemInfo->item_info).abilityType_ = (local_2c->item_info).abilityType_;
          (pAuctionItemInfo->item_info).abilityValue_ = uVar4;
          (pAuctionItemInfo->item_info).guid_.data_[0] = cVar1;
          *(undefined4 *)((pAuctionItemInfo->item_info).guid_.data_ + 1) =
               *(undefined4 *)((local_2c->item_info).guid_.data_ + 1);
          *(undefined4 *)((pAuctionItemInfo->item_info).guid_.data_ + 5) =
               *(undefined4 *)((local_2c->item_info).guid_.data_ + 5);
          *(undefined4 *)((pAuctionItemInfo->item_info).guid_.data_ + 9) =
               *(undefined4 *)((local_2c->item_info).guid_.data_ + 9);
          *(undefined4 *)((pAuctionItemInfo->item_info).random_option_.option_ + 1) =
               *(undefined4 *)((local_2c->item_info).random_option_.option_ + 1);
          *(undefined4 *)&(pAuctionItemInfo->item_info).random_option_.option_[2].first_value_ =
               *(undefined4 *)&(local_2c->item_info).random_option_.option_[2].first_value_;
          *(undefined4 *)&(pAuctionItemInfo->item_info).random_option_.modify_option_.first_value_ =
               *(undefined4 *)&(local_2c->item_info).random_option_.modify_option_.first_value_;
          (pAuctionItemInfo->item_info).reserved_capacity.reserved_1[0] =
               (local_2c->item_info).reserved_capacity.reserved_1[0];
          (pAuctionItemInfo->item_info).reserved_capacity.reserved_1[1] =
               (local_2c->item_info).reserved_capacity.reserved_1[1];
          (pAuctionItemInfo->item_info).reserved_capacity.reserved_2 =
               (local_2c->item_info).reserved_capacity.reserved_2;
          pAuctionItemInfo->black_point = local_2c->black_point;
          pAuctionItemInfo->unit_price = local_2c->unit_price;
          uVar3 = DnfItemInfo::getAbilityType(&local_2c->item_info);
          (pAuctionItemInfo->item_info).abilityType_ = uVar3;
          uVar4 = DnfItemInfo::getAbilityValue(&local_2c->item_info);
          (pAuctionItemInfo->item_info).abilityValue_ = uVar4;
          local_24 = (_Base_ptr)0x0;
        }
      }
      else {
        local_24 = (_Base_ptr)0x24;
      }
    }
  }
  else {
    local_24 = (_Base_ptr)0x24;
  }
  return (DWORD)local_24;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.h 等 489 个文件*
