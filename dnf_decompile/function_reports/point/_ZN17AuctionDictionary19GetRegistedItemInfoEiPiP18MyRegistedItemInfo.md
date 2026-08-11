# _ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo

`AuctionDictionary::GetRegistedItemInfo(int, int*, MyRegistedItemInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80545ee` | `0x335` | `0x8057da6` | `0x336` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,237 +1,237 @@
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
 jne    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x2c>
 mov    $0x29,%eax
-jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x330>
+jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x331>
 mov    0x8(%ebp),%eax
 lea    0x3114(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN19CharacterDictionary16GetAuctionIdListEiRPNS_23CharacterDictionaryDataE>
 mov    -0x20(%ebp),%eax
 test   %eax,%eax
 jne    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x60>
 mov    0x10(%ebp),%eax
 movl   $0x0,(%eax)
-jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x32d>
+jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x32e>
 movl   $0x0,&_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt
 mov    -0x20(%ebp),%eax
 mov    %eax,%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIySaIyEE5beginEv>
 sub    $0x4,%esp
 mov    -0x2c(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEC1Ev>
-jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x2f0>
+jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x2f1>
 mov    0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,%edx
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 cmp    %eax,%edx
 jne    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0xb3>
 movl   $0x29,-0x14(%ebp)
-jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x321>
+jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x322>
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
-je     <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x175>
+je     <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x2e8>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEptEv>
 mov    0x8(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 mov    %eax,%ebx
 add    0x14(%ebp),%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPySt6vectorIySaIyEEEdeEv>
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    %eax,(%ebx)
 mov    %edx,0x4(%ebx)
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 add    0x14(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    (%edx),%edx
 mov    %edx,0x8(%eax)
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 add    0x14(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    0x4(%edx),%edx
 mov    %edx,0xc(%eax)
 mov    -0x10(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x181>
-jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x1bb>
-movl   $0x24,-0x14(%ebp)
-jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x321>
+je     <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x1b1>
 mov    -0x10(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary16getCharacterNameEi>
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%edx
 imul   $0x75,%edx,%edx
 add    0x14(%ebp),%edx
 add    $0x10,%edx
 movl   $0xc,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
-jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x1e1>
+jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x1d7>
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 add    0x14(%ebp),%eax
 add    $0x10,%eax
 movl   $0xd,0x8(%esp)
 movl   $"",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 add    0x14(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    0x14(%edx),%ecx
 mov    %ecx,0x1e(%eax)
 mov    0x18(%edx),%ecx
 mov    %ecx,0x22(%eax)
 mov    0x1c(%edx),%ecx
 mov    %ecx,0x26(%eax)
 mov    0x20(%edx),%ecx
 mov    %ecx,0x2a(%eax)
 mov    0x24(%edx),%ecx
 mov    %ecx,0x2e(%eax)
 mov    0x28(%edx),%ecx
 mov    %ecx,0x32(%eax)
 mov    0x2c(%edx),%ecx
 mov    %ecx,0x36(%eax)
 mov    0x30(%edx),%ecx
 mov    %ecx,0x3a(%eax)
 mov    0x34(%edx),%ecx
 mov    %ecx,0x3e(%eax)
 mov    0x38(%edx),%ecx
 mov    %ecx,0x42(%eax)
 mov    0x3c(%edx),%ecx
 mov    %ecx,0x46(%eax)
 mov    0x40(%edx),%ecx
 mov    %ecx,0x4a(%eax)
 mov    0x44(%edx),%ecx
 mov    %ecx,0x4e(%eax)
 movzbl 0x48(%edx),%edx
 mov    %dl,0x52(%eax)
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 mov    %eax,%ebx
 add    0x14(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 mov    0x10(%eax),%eax
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary15getExpiringTimeEll>
 mov    %al,0x1d(%ebx)
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 add    0x14(%ebp),%eax
 mov    0x1f(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0xc(%ebp)
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 mov    %eax,%ebx
 add    0x14(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo14getAbilityTypeEv>
 mov    %al,0x2e(%ebx)
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 imul   $0x75,%eax,%eax
 mov    %eax,%ebx
 add    0x14(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo15getAbilityValueEv>
 mov    %ax,0x2f(%ebx)
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 add    $0x1,%eax
 mov    %eax,&_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPySt6vectorIySaIyEEEppEv>
+jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x2f1>
+movl   $0x24,-0x14(%ebp)
+jmp    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x322>
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
 jne    <T> <_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo+0x97>
 mov    &_ZZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfoE9index_cnt,%eax
 mov    %eax,%edx
 mov    0x10(%ebp),%eax
 mov    %edx,(%eax)
 mov    -0x14(%ebp),%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: int GetRegistedItemInfo(AuctionDictionary * this, int ownerId, int *
   pInOutItemNum, MyRegistedItemInfo * pOutMyRegistedItemInfoArray) */

int __thiscall
AuctionDictionary::_ZN17AuctionDictionary19GetRegistedItemInfoEiPiP18MyRegistedItemInfo
          (AuctionDictionary *this,int ownerId,int *pInOutItemNum,
          MyRegistedItemInfo *pOutMyRegistedItemInfoArray)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uchar uVar4;
  bool bVar5;
  ushort uVar6;
  pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*> *ppVar7;
  ulonglong *puVar8;
  char *__src;
  STItemInfo *pSVar9;
  MyRegistedItemInfo *pMVar10;
  undefined1 local_30 [20];
  _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
  local_1c;
  _Rb_tree_color local_18;
  AuctionDictionaryData *local_14;
  _Base_ptr local_10;
  
                    /* Unresolved local var: int error_code@[???]
                       Unresolved local var: AuctionDictionaryData * ptr_auc_data@[???]
                       Unresolved local var: CharacterDictionaryData * ptr_data@[???]
                       Unresolved local var: AuctionIdListIterator id_list_iter@[???] */
  local_18 = _S_red;
  __gnu_cxx::
  __normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
  ::__normal_iterator((__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                       *)(local_30 + 8));
  if (*pInOutItemNum == 0) {
    local_18 = 0x29;
  }
  else {
    CharacterDictionary::GetAuctionIdList
              (&this->mRegisterDic,ownerId,(CharacterDictionaryData **)(local_30 + 0xc));
    if ((_Base_ptr)local_30._12_4_ == (_Base_ptr)0x0) {
      *pInOutItemNum = 0;
    }
    else {
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                       auc_dic_iter@[???] */
      GetRegistedItemInfo::lexical_block_0::index_cnt = 0;
      std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>::begin
                ((vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_> *)local_30
                );
      local_30._8_4_ = local_30._0_4_;
      std::
      _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
      ::_Rb_tree_iterator((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                           *)(local_30 + 4));
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
        if (!bVar5) break;
                    /* Unresolved local var: int check_category@[???] */
        if (*pInOutItemNum == GetRegistedItemInfo::lexical_block_0::index_cnt) {
          local_18 = 0x29;
          break;
        }
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
        if (!bVar5) {
          local_18 = 0x24;
          break;
        }
        ppVar7 = std::
                 _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                 ::operator->((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                               *)(local_30 + 4));
        local_14 = ppVar7->second;
        pMVar10 = pOutMyRegistedItemInfoArray + GetRegistedItemInfo::lexical_block_0::index_cnt;
        puVar8 = __gnu_cxx::
                 __normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                 ::operator*((__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                              *)(local_30 + 8));
        uVar1 = *(undefined4 *)((int)puVar8 + 4);
        *(int *)&pMVar10->auction_id = (int)*puVar8;
        *(undefined4 *)((int)&pMVar10->auction_id + 4) = uVar1;
        pOutMyRegistedItemInfoArray[GetRegistedItemInfo::lexical_block_0::index_cnt].price =
             local_14->price;
        pOutMyRegistedItemInfoArray[GetRegistedItemInfo::lexical_block_0::index_cnt].instant_price =
             local_14->instant_price;
        if (local_14->buyer_id == -1) {
          strncpy(pOutMyRegistedItemInfoArray[GetRegistedItemInfo::lexical_block_0::index_cnt].
                  buyer_name,"",0xd);
        }
        else {
          __src = _ZN17AuctionDictionary16getCharacterNameEi(this,local_14->buyer_id);
          strncpy(pOutMyRegistedItemInfoArray[GetRegistedItemInfo::lexical_block_0::index_cnt].
                  buyer_name,__src,0xc);
        }
        uVar3 = GetRegistedItemInfo::lexical_block_0::index_cnt;
        *(undefined4 *)
         &pOutMyRegistedItemInfoArray[GetRegistedItemInfo::lexical_block_0::index_cnt].item_info =
             *(undefined4 *)&local_14->item_info;
        *(undefined4 *)((int)&pOutMyRegistedItemInfoArray[uVar3].item_info.item_id + 3) =
             *(undefined4 *)((int)&(local_14->item_info).item_id + 3);
        *(undefined4 *)((int)&pOutMyRegistedItemInfoArray[uVar3].item_info.add_info + 2) =
             *(undefined4 *)((int)&(local_14->item_info).add_info + 2);
        pOutMyRegistedItemInfoArray[uVar3].item_info.extendInfo = (local_14->item_info).extendInfo;
        uVar6 = (local_14->item_info).abilityValue_;
        cVar2 = (local_14->item_info).guid_.data_[0];
        pMVar10 = pOutMyRegistedItemInfoArray + uVar3;
        (pMVar10->item_info).abilityType_ = (local_14->item_info).abilityType_;
        (pMVar10->item_info).abilityValue_ = uVar6;
        (pMVar10->item_info).guid_.data_[0] = cVar2;
        *(undefined4 *)(pOutMyRegistedItemInfoArray[uVar3].item_info.guid_.data_ + 1) =
             *(undefined4 *)((local_14->item_info).guid_.data_ + 1);
        *(undefined4 *)(pOutMyRegistedItemInfoArray[uVar3].item_info.guid_.data_ + 5) =
             *(undefined4 *)((local_14->item_info).guid_.data_ + 5);
        *(undefined4 *)(pOutMyRegistedItemInfoArray[uVar3].item_info.guid_.data_ + 9) =
             *(undefined4 *)((local_14->item_info).guid_.data_ + 9);
        *(undefined4 *)(pOutMyRegistedItemInfoArray[uVar3].item_info.random_option_.option_ + 1) =
             *(undefined4 *)((local_14->item_info).random_option_.option_ + 1);
        *(undefined4 *)
         &pOutMyRegistedItemInfoArray[uVar3].item_info.random_option_.option_[2].first_value_ =
             *(undefined4 *)&(local_14->item_info).random_option_.option_[2].first_value_;
        *(undefined4 *)
         &pOutMyRegistedItemInfoArray[uVar3].item_info.random_option_.modify_option_.first_value_ =
             *(undefined4 *)&(local_14->item_info).random_option_.modify_option_.first_value_;
        pOutMyRegistedItemInfoArray[uVar3].item_info.reserved_capacity.reserved_1[0] =
             (local_14->item_info).reserved_capacity.reserved_1[0];
        pOutMyRegistedItemInfoArray[uVar3].item_info.reserved_capacity.reserved_1[1] =
             (local_14->item_info).reserved_capacity.reserved_1[1];
        pOutMyRegistedItemInfoArray[uVar3].item_info.reserved_capacity.reserved_2 =
             (local_14->item_info).reserved_capacity.reserved_2;
        uVar3 = GetRegistedItemInfo::lexical_block_0::index_cnt;
        uVar4 = _ZN17AuctionDictionary15getExpiringTimeEll(this,local_14->expire_time,0);
        pOutMyRegistedItemInfoArray[uVar3].expire_time = uVar4;
        pSVar9 = Auction::GetItemInfo
                           (this->mpAuction,
                            pOutMyRegistedItemInfoArray
                            [GetRegistedItemInfo::lexical_block_0::index_cnt].item_info.item_id);
        uVar3 = GetRegistedItemInfo::lexical_block_0::index_cnt;
        local_10 = (_Base_ptr)(uint)pSVar9->category_;
        uVar4 = DnfItemInfo::getAbilityType(&local_14->item_info);
        pOutMyRegistedItemInfoArray[uVar3].item_info.abilityType_ = uVar4;
        uVar3 = GetRegistedItemInfo::lexical_block_0::index_cnt;
        uVar6 = DnfItemInfo::getAbilityValue(&local_14->item_info);
        pOutMyRegistedItemInfoArray[uVar3].item_info.abilityValue_ = uVar6;
        GetRegistedItemInfo::lexical_block_0::index_cnt =
             GetRegistedItemInfo::lexical_block_0::index_cnt + 1;
        __gnu_cxx::
        __normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
        ::operator++((__normal_iterator<long_long_unsigned_int*,_std::vector<long_long_unsigned_int,_std::allocator<long_long_unsigned_int>_>_>
                      *)(local_30 + 8));
      }
      *pInOutItemNum = GetRegistedItemInfo::lexical_block_0::index_cnt;
    }
  }
  return local_18;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/CharacterDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/ExpireTimeDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h 等 590 个文件*
