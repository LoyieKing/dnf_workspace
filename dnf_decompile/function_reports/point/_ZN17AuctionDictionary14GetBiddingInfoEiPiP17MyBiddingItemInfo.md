# _ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo

`AuctionDictionary::GetBiddingInfo(int, int*, MyBiddingItemInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80549b0` | `0x315` | `0x805a4e6` | `0x312` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,229 +1,227 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 movl   $0x0,-0x14(%ebp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPySt6vectorIySaIyEEEC1Ev>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2c>
 mov    $0x29,%eax
-jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x310>
+jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x30d>
 mov    0x8(%ebp),%eax
 lea    0x3130(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN19CharacterDictionary16GetAuctionIdListEiRPNS_23CharacterDictionaryDataE>
 mov    -0x20(%ebp),%eax
 test   %eax,%eax
 jne    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x60>
 mov    0x10(%ebp),%eax
 movl   $0x0,(%eax)
-jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x30b>
+jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x308>
 movl   $0x0,&_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEC1Ev>
 mov    -0x20(%ebp),%eax
 mov    %eax,%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIySaIyEE5beginEv>
 sub    $0x4,%esp
 mov    -0x2c(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2ce>
-mov    0x10(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,%edx
+jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2cc>
+mov    0x10(%ebp),%eax
+mov    (%eax),%edx
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 cmp    %eax,%edx
-jne    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0xb3>
+jne    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0xb1>
 movl   $0x29,-0x14(%ebp)
-jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2ff>
+jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2fd>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPySt6vectorIySaIyEEEdeEv>
 mov    0x8(%ebp),%edx
 lea    0x28(%edx),%ecx
 lea    -0x2c(%ebp),%edx
 mov    %eax,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    -0x2c(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEneERKS6_>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2c5>
+je     <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2c3>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEptEv>
 mov    0x8(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 mov    %eax,%ebx
 add    0x14(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPySt6vectorIySaIyEEEdeEv>
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    %eax,(%ebx)
 mov    %edx,0x4(%ebx)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 add    0x14(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    (%edx),%edx
 mov    %edx,0x8(%eax)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 add    0x14(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    0x4(%edx),%edx
 mov    %edx,0xc(%eax)
 mov    -0x10(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary16getCharacterNameEi>
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%edx
 imul   $0x7d,%edx,%edx
 add    0x14(%ebp),%edx
 add    $0x10,%edx
 movl   $0xc,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 add    0x14(%ebp),%eax
 fld1
 fstpl  0x1d(%eax)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 mov    %eax,%ebx
 add    0x14(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 mov    0x10(%eax),%eax
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary15getExpiringTimeEll>
 mov    %al,0x25(%ebx)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 add    0x14(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    0x14(%edx),%ecx
 mov    %ecx,0x26(%eax)
 mov    0x18(%edx),%ecx
 mov    %ecx,0x2a(%eax)
 mov    0x1c(%edx),%ecx
 mov    %ecx,0x2e(%eax)
 mov    0x20(%edx),%ecx
 mov    %ecx,0x32(%eax)
 mov    0x24(%edx),%ecx
 mov    %ecx,0x36(%eax)
 mov    0x28(%edx),%ecx
 mov    %ecx,0x3a(%eax)
 mov    0x2c(%edx),%ecx
 mov    %ecx,0x3e(%eax)
 mov    0x30(%edx),%ecx
 mov    %ecx,0x42(%eax)
 mov    0x34(%edx),%ecx
 mov    %ecx,0x46(%eax)
 mov    0x38(%edx),%ecx
 mov    %ecx,0x4a(%eax)
 mov    0x3c(%edx),%ecx
 mov    %ecx,0x4e(%eax)
 mov    0x40(%edx),%ecx
 mov    %ecx,0x52(%eax)
 mov    0x44(%edx),%ecx
 mov    %ecx,0x56(%eax)
 movzbl 0x48(%edx),%edx
 mov    %dl,0x5a(%eax)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 add    0x14(%ebp),%eax
 mov    0x27(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0xc(%ebp)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 mov    %eax,%ebx
 add    0x14(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo14getAbilityTypeEv>
 mov    %al,0x36(%ebx)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 imul   $0x7d,%eax,%eax
 mov    %eax,%ebx
 add    0x14(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo15getAbilityValueEv>
 mov    %ax,0x37(%ebx)
 mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
 add    $0x1,%eax
 mov    %eax,&_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPySt6vectorIySaIyEEEppEv>
-jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2ce>
+jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2cc>
 movl   $0x24,-0x14(%ebp)
-jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2ff>
+jmp    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x2fd>
 mov    -0x20(%ebp),%eax
 mov    %eax,%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIySaIyEE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPySt6vectorIySaIyEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 test   %al,%al
 jne    <T> <_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo+0x97>
-mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%eax
-mov    %eax,%edx
+mov    &_ZZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfoE9index_cnt,%edx
 mov    0x10(%ebp),%eax
 mov    %edx,(%eax)
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: int GetBiddingInfo(AuctionDictionary * this, int buyerId, int *
   pInOutItemNum, MyBiddingItemInfo * pOutMyBiddingItemInfoArray) */

int __thiscall
AuctionDictionary::_ZN17AuctionDictionary14GetBiddingInfoEiPiP17MyBiddingItemInfo
          (AuctionDictionary *this,int buyerId,int *pInOutItemNum,
          MyBiddingItemInfo *pOutMyBiddingItemInfoArray)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uchar uVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*> *ppVar8;
  ulonglong *puVar9;
  char *__src;
  STItemInfo *pSVar10;
  MyBiddingItemInfo *pMVar11;
  undefined1 local_30 [20];
  _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
  local_1c;
  _Rb_tree_color local_18;
  AuctionDictionaryData *local_14;
  _Base_ptr local_10;
  
                    /* Unresolved local var: int error_code@[???]
                       Unresolved local var: CharacterDictionaryData * ptr_data@[???]
                       Unresolved local var: AuctionIdListIterator id_list_iter@[???]
                       Unresolved local var: AuctionDictionaryData * ptr_auc_data@[???] */
  local_18 = _S_red;
  __gnu_cxx::
  __normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
  ::__normal_iterator((__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                       *)(local_30 + 8));
  if (*pInOutItemNum == 0) {
    iVar7 = 0x29;
  }
  else {
    CharacterDictionary::GetAuctionIdList
              (&this->mBidderDic,buyerId,(CharacterDictionaryData **)(local_30 + 0xc));
    if ((_Base_ptr)local_30._12_4_ == (_Base_ptr)0x0) {
      *pInOutItemNum = 0;
    }
    else {
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                       auc_dic_iter@[???] */
      GetBiddingInfo::lexical_block_0::index_cnt = 0;
      std::
      _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
      ::_Rb_tree_iterator((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                           *)(local_30 + 4));
      std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>::begin
                ((vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_> *)local_30
                );
      local_30._8_4_ = local_30._0_4_;
      while( true ) {
        std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>::end
                  ((vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_> *)
                   (local_30 + 0x10));
        bVar5 = __gnu_cxx::
                operator!=<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                          ((__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                            *)(local_30 + 8),
                           (__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                            *)(local_30 + 0x10));
                    /* Unresolved local var: int check_category@[???] */
        if ((!bVar5) || (*pInOutItemNum == GetBiddingInfo::lexical_block_0::index_cnt)) break;
        __gnu_cxx::
        __normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
        ::operator*((__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                     *)(local_30 + 8));
        std::
        map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
        ::find((map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
                *)local_30,(ulonglong *)&this->mAuctionDicTable);
        local_30._4_4_ = local_30._0_4_;
        std::
        map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
        ::end((map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
               *)&local_1c);
        bVar5 = std::
                _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                ::operator!=((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                              *)(local_30 + 4),&local_1c);
        if (!bVar5) break;
        ppVar8 = std::
                 _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                 ::operator->((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                               *)(local_30 + 4));
        local_14 = ppVar8->second;
        pMVar11 = pOutMyBiddingItemInfoArray + GetBiddingInfo::lexical_block_0::index_cnt;
        puVar9 = __gnu_cxx::
                 __normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                 ::operator*((__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                              *)(local_30 + 8));
        uVar1 = *(undefined4 *)((int)puVar9 + 4);
        *(int *)&pMVar11->auction_id = (int)*puVar9;
        *(undefined4 *)((int)&pMVar11->auction_id + 4) = uVar1;
        pOutMyBiddingItemInfoArray[GetBiddingInfo::lexical_block_0::index_cnt].price =
             local_14->price;
        pOutMyBiddingItemInfoArray[GetBiddingInfo::lexical_block_0::index_cnt].instant_price =
             local_14->instant_price;
        __src = getCharacterName(this,local_14->owner_id);
        strncpy(pOutMyBiddingItemInfoArray[GetBiddingInfo::lexical_block_0::index_cnt].owner_name,
                __src,0xc);
        pOutMyBiddingItemInfoArray[GetBiddingInfo::lexical_block_0::index_cnt].owner_reliability =
             1.0;
        uVar3 = GetBiddingInfo::lexical_block_0::index_cnt;
        uVar4 = getExpiringTime(this,local_14->expire_time,0);
        pOutMyBiddingItemInfoArray[uVar3].expire_time = uVar4;
        uVar3 = GetBiddingInfo::lexical_block_0::index_cnt;
        *(undefined4 *)
         &pOutMyBiddingItemInfoArray[GetBiddingInfo::lexical_block_0::index_cnt].item_info =
             *(undefined4 *)&local_14->item_info;
        *(undefined4 *)((int)&pOutMyBiddingItemInfoArray[uVar3].item_info.item_id + 3) =
             *(undefined4 *)((int)&(local_14->item_info).item_id + 3);
        *(undefined4 *)((int)&pOutMyBiddingItemInfoArray[uVar3].item_info.add_info + 2) =
             *(undefined4 *)((int)&(local_14->item_info).add_info + 2);
        pOutMyBiddingItemInfoArray[uVar3].item_info.extendInfo = (local_14->item_info).extendInfo;
        uVar6 = (local_14->item_info).abilityValue_;
        cVar2 = (local_14->item_info).guid_.data_[0];
        pMVar11 = pOutMyBiddingItemInfoArray + uVar3;
        (pMVar11->item_info).abilityType_ = (local_14->item_info).abilityType_;
        (pMVar11->item_info).abilityValue_ = uVar6;
        (pMVar11->item_info).guid_.data_[0] = cVar2;
        *(undefined4 *)(pOutMyBiddingItemInfoArray[uVar3].item_info.guid_.data_ + 1) =
             *(undefined4 *)((local_14->item_info).guid_.data_ + 1);
        *(undefined4 *)(pOutMyBiddingItemInfoArray[uVar3].item_info.guid_.data_ + 5) =
             *(undefined4 *)((local_14->item_info).guid_.data_ + 5);
        *(undefined4 *)(pOutMyBiddingItemInfoArray[uVar3].item_info.guid_.data_ + 9) =
             *(undefined4 *)((local_14->item_info).guid_.data_ + 9);
        *(undefined4 *)(pOutMyBiddingItemInfoArray[uVar3].item_info.random_option_.option_ + 1) =
             *(undefined4 *)((local_14->item_info).random_option_.option_ + 1);
        *(undefined4 *)
         &pOutMyBiddingItemInfoArray[uVar3].item_info.random_option_.option_[2].first_value_ =
             *(undefined4 *)&(local_14->item_info).random_option_.option_[2].first_value_;
        *(undefined4 *)
         &pOutMyBiddingItemInfoArray[uVar3].item_info.random_option_.modify_option_.first_value_ =
             *(undefined4 *)&(local_14->item_info).random_option_.modify_option_.first_value_;
        pOutMyBiddingItemInfoArray[uVar3].item_info.reserved_capacity.reserved_1[0] =
             (local_14->item_info).reserved_capacity.reserved_1[0];
        pOutMyBiddingItemInfoArray[uVar3].item_info.reserved_capacity.reserved_1[1] =
             (local_14->item_info).reserved_capacity.reserved_1[1];
        pOutMyBiddingItemInfoArray[uVar3].item_info.reserved_capacity.reserved_2 =
             (local_14->item_info).reserved_capacity.reserved_2;
        pSVar10 = Auction::GetItemInfo
                            (this->mpAuction,
                             pOutMyBiddingItemInfoArray[GetBiddingInfo::lexical_block_0::index_cnt].
                             item_info.item_id);
        uVar3 = GetBiddingInfo::lexical_block_0::index_cnt;
        local_10 = (_Base_ptr)(uint)pSVar10->category_;
        uVar4 = DnfItemInfo::getAbilityType(&local_14->item_info);
        pOutMyBiddingItemInfoArray[uVar3].item_info.abilityType_ = uVar4;
        uVar3 = GetBiddingInfo::lexical_block_0::index_cnt;
        uVar6 = DnfItemInfo::getAbilityValue(&local_14->item_info);
        pOutMyBiddingItemInfoArray[uVar3].item_info.abilityValue_ = uVar6;
        GetBiddingInfo::lexical_block_0::index_cnt = GetBiddingInfo::lexical_block_0::index_cnt + 1;
        __gnu_cxx::
        __normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
        ::operator++((__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                      *)(local_30 + 8));
      }
      *pInOutItemNum = GetBiddingInfo::lexical_block_0::index_cnt;
    }
    iVar7 = 0;
  }
  return iVar7;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
