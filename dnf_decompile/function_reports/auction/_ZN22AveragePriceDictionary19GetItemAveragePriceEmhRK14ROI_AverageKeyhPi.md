# _ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi

`AveragePriceDictionary::GetItemAveragePrice(unsigned long, unsigned char, ROI_AverageKey const&, unsigned char, int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x80645d0` | `0x1de` | `0x805ff48` | `0x1de` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,149 +1,149 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x10(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %dl,-0x2c(%ebp)
 mov    %al,-0x30(%ebp)
 movzbl -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22AveragePriceDictionary19isValidUpgradeValueEh>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi+0x36>
 mov    $0x20,%eax
 jmp    <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi+0x1dc>
 mov    0x14(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12ROI_Category7isEmptyEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi+0x117>
 movzbl -0x2c(%ebp),%ecx
 movzbl -0x30(%ebp),%eax
 mov    %eax,%edx
 add    %edx,%edx
 add    %eax,%edx
 lea    0x0(,%edx,8),%eax
 mov    %eax,%edx
 mov    %ecx,%eax
 add    %eax,%eax
 add    %ecx,%eax
 shl    $0x6,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x1830,%eax
 add    0x8(%ebp),%eax
 lea    0xc(%eax),%ecx
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI14ROI_AverageKeyPN22AveragePriceDictionary26AveragePriceDictionaryDataESt4lessIS0_ESaISt4pairIKS0_S3_EEE4findERS7_>
 sub    $0x4,%esp
 movzbl -0x2c(%ebp),%ecx
 movzbl -0x30(%ebp),%eax
 mov    %eax,%edx
 add    %edx,%edx
 add    %eax,%edx
 lea    0x0(,%edx,8),%eax
 mov    %eax,%edx
 mov    %ecx,%eax
 add    %eax,%eax
 add    %ecx,%eax
 shl    $0x6,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x1830,%eax
 add    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI14ROI_AverageKeyPN22AveragePriceDictionary26AveragePriceDictionaryDataESt4lessIS0_ESaISt4pairIKS0_S3_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK14ROI_AverageKeyPN22AveragePriceDictionary26AveragePriceDictionaryDataEEEneERKS7_>
 test   %al,%al
 je     <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi+0x104>
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK14ROI_AverageKeyPN22AveragePriceDictionary26AveragePriceDictionaryDataEEEptEv>
 mov    0x18(%eax),%eax
 mov    0x8(%eax),%edx
 mov    0x1c(%ebp),%eax
 mov    %edx,(%eax)
 jmp    <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi+0x10d>
 mov    0x1c(%ebp),%eax
 movl   $0xffffffff,(%eax)
 mov    $0x0,%eax
 jmp    <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi+0x1dc>
 movzbl -0x2c(%ebp),%ecx
 movzbl -0x30(%ebp),%eax
 mov    %eax,%edx
 add    %edx,%edx
 add    %eax,%edx
 lea    0x0(,%edx,8),%eax
 mov    %eax,%edx
 mov    %ecx,%eax
 add    %eax,%eax
 add    %ecx,%eax
 shl    $0x6,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x20,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapImPN22AveragePriceDictionary26AveragePriceDictionaryDataESt4lessImESaISt4pairIKmS2_EEE4findERS6_>
 sub    $0x4,%esp
 movzbl -0x2c(%ebp),%ecx
 movzbl -0x30(%ebp),%eax
 mov    %eax,%edx
 add    %edx,%edx
 add    %eax,%edx
 lea    0x0(,%edx,8),%eax
 mov    %eax,%edx
 mov    %ecx,%eax
 add    %eax,%eax
 add    %ecx,%eax
 shl    $0x6,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x20,%eax
 add    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapImPN22AveragePriceDictionary26AveragePriceDictionaryDataESt4lessImESaISt4pairIKmS2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKmPN22AveragePriceDictionary26AveragePriceDictionaryDataEEEeqERKS6_>
 test   %al,%al
 je     <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi+0x1bb>
 mov    0x1c(%ebp),%eax
 movl   $0xffffffff,(%eax)
 jmp    <T> <_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi+0x1d7>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKmPN22AveragePriceDictionary26AveragePriceDictionaryDataEEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0x8(%eax),%edx
 mov    0x1c(%ebp),%eax
 mov    %edx,(%eax)
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: int GetItemAveragePrice(AveragePriceDictionary * this, ulong itemId,
   uchar itemUpgradeValue, ROI_AverageKey * roi_average_key, uchar itemRefineValue, int *
   pOutAveragePrice) */

int __thiscall
AveragePriceDictionary::_ZN22AveragePriceDictionary19GetItemAveragePriceEmhRK14ROI_AverageKeyhPi
          (AveragePriceDictionary *this,ulong itemId,uchar itemUpgradeValue,
          ROI_AverageKey *roi_average_key,uchar itemRefineValue,int *pOutAveragePrice)

{
  bool bVar1;
  int iVar2;
  pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*> *ppVar3;
  pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*> *ppVar4;
  undefined1 local_20 [8];
  _Rb_tree_iterator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
  local_18;
  _Rb_tree_iterator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
  local_14 [4];
  
                    /* Unresolved local var: AveragePriceDictionaryData * ptr_data@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
                       find_iter@[???] */
  bVar1 = isValidUpgradeValue(this,itemUpgradeValue);
  if (bVar1) {
    bVar1 = ROI_Category::isEmpty(&roi_average_key->option_category);
    if (bVar1) {
      std::
      map<long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*,_std::less<long_unsigned_int>,_std::allocator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>_>
      ::find((map<long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*,_std::less<long_unsigned_int>,_std::allocator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>_>
              *)(local_20 + 4),
             (ulong *)(this->mAvrgPriceDicTable[itemUpgradeValue] + itemRefineValue));
      std::
      map<long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*,_std::less<long_unsigned_int>,_std::allocator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>_>
      ::end((map<long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*,_std::less<long_unsigned_int>,_std::allocator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>_>
             *)local_14);
      bVar1 = std::
              _Rb_tree_iterator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
              ::operator==((_Rb_tree_iterator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
                            *)(local_20 + 4),local_14);
      if (bVar1) {
        *pOutAveragePrice = -1;
      }
      else {
        ppVar4 = std::
                 _Rb_tree_iterator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
                 ::operator->((_Rb_tree_iterator<std::pair<const_long_unsigned_int,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
                               *)(local_20 + 4));
        *pOutAveragePrice = ppVar4->second->average_price_notice;
      }
      iVar2 = 0;
    }
    else {
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
                       find_iter@[???] */
      std::
      map<ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*,_std::less<ROI_AverageKey>,_std::allocator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>_>
      ::find((map<ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*,_std::less<ROI_AverageKey>,_std::allocator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>_>
              *)local_20,
             (ROI_AverageKey *)(this->mAvrgPrice_ROI_DicTable[itemUpgradeValue] + itemRefineValue));
      std::
      map<ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*,_std::less<ROI_AverageKey>,_std::allocator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>_>
      ::end((map<ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*,_std::less<ROI_AverageKey>,_std::allocator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>_>
             *)&local_18);
      bVar1 = std::
              _Rb_tree_iterator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
              ::operator!=((_Rb_tree_iterator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
                            *)local_20,&local_18);
      if (bVar1) {
        ppVar3 = std::
                 _Rb_tree_iterator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
                 ::operator->((_Rb_tree_iterator<std::pair<const_ROI_AverageKey,_AveragePriceDictionary::AveragePriceDictionaryData*>_>
                               *)local_20);
        *pOutAveragePrice = ppVar3->second->average_price_notice;
      }
      else {
        *pOutAveragePrice = -1;
      }
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x20;
  }
  return iVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/GlobalInstance.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Thread.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/ThreadLock.h 等 556 个文件*
