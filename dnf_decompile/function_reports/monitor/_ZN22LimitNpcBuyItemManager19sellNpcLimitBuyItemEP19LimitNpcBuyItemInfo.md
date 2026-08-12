# _ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo

`LimitNpcBuyItemManager::sellNpcLimitBuyItem(LimitNpcBuyItemInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805ae40` | `0x15a` | `0x8095508` | `0x134` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x5c,%esp
 mov    0xc(%ebp),%eax
-lea    0x16(%eax),%ecx
+lea    0x18(%eax),%ecx
 mov    0x8(%ebp),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEeqERKS4_>
 test   %al,%al
 je     <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x5d>
 mov    $0x11,%eax
-jmp    <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x14f>
+jmp    <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x129>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
+add    $0x4,%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x81>
+mov    $0x11,%eax
+jmp    <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x129>
+mov    -0x20(%ebp),%eax
+mov    0x8(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    0x4(%eax),%eax
+cmp    %eax,%edx
+jae    <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x124>
+mov    -0x20(%ebp),%eax
+mov    0x8(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0x1c(%eax),%eax
+add    %eax,%edx
+mov    -0x20(%ebp),%eax
+mov    %edx,0x8(%eax)
+mov    -0x20(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    0xc(%ebp),%eax
+mov    0x1c(%eax),%edi
+mov    0xc(%ebp),%eax
+mov    0x18(%eax),%esi
+mov    0xc(%ebp),%eax
+mov    0x14(%eax),%ebx
+movl   $0x23,0x8(%esp)
+movl   $&_ZZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfoE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    (%eax),%eax
-test   %eax,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x7d>
-mov    $0x11,%eax
-jmp    <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x14f>
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0xc(%eax),%ebx
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0x8(%eax),%eax
-cmp    %eax,%ebx
-setae  %al
-test   %al,%al
-je     <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0xac>
-mov    $0x5f,%eax
-jmp    <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x14f>
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0xc(%eax),%ecx
-mov    0xc(%ebp),%edx
-mov    0x1a(%edx),%edx
-lea    (%ecx,%edx,1),%edx
-mov    %edx,0xc(%eax)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0xc(%eax),%eax
-mov    %eax,-0x30(%ebp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0x8(%eax),%eax
-mov    %eax,-0x2c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0x1a(%eax),%edi
-mov    0xc(%ebp),%eax
-mov    0x16(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x12(%eax),%ebx
-movl   $0x23,0x8(%esp)
-movl   $&_ZZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x30(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Sell-> characNo: %u, itemId: %u, buyCount: %u, maxCount: %u, totalSellCount: %u)",0x8(%esp)
 movl   $"./log/NpcBuyLimitItem",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
+jmp    <T> <_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo+0x129>
+mov    $0x5f,%eax
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

/* LimitNpcBuyItemManager::sellNpcLimitBuyItem(LimitNpcBuyItemInfo*) */

undefined4 __thiscall
LimitNpcBuyItemManager::_ZN22LimitNpcBuyItemManager19sellNpcLimitBuyItemEP19LimitNpcBuyItemInfo
          (LimitNpcBuyItemManager *this,LimitNpcBuyItemInfo *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  _Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> local_2c [4];
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  local_28 [4];
  CMyFileLog local_24 [20];
  
  std::
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  ::find((uint *)local_2c);
  std::
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  ::end(local_28);
  cVar6 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator==
                    (local_2c,(_Rb_tree_iterator *)local_28);
  if (cVar6 == '\0') {
    piVar8 = (int *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::
                    operator->(local_2c);
    if (*piVar8 == 0) {
      uVar7 = 0x11;
    }
    else {
      iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                        (local_2c);
      uVar1 = *(uint *)(iVar9 + 0xc);
      iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                        (local_2c);
      if (uVar1 < *(uint *)(iVar9 + 8)) {
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                          (local_2c);
        *(int *)(iVar9 + 0xc) = *(int *)(iVar9 + 0xc) + *(int *)(param_1 + 0x1a);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                          (local_2c);
        uVar7 = *(undefined4 *)(iVar9 + 0xc);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                          (local_2c);
        uVar2 = *(undefined4 *)(iVar9 + 8);
        uVar3 = *(undefined4 *)(param_1 + 0x1a);
        uVar4 = *(undefined4 *)(param_1 + 0x16);
        uVar5 = *(undefined4 *)(param_1 + 0x12);
        CMyFileLog::CMyFileLog(local_24,"sellNpcLimitBuyItem",0x23);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_24,"./log/NpcBuyLimitItem",
                   "Sell-> characNo: %u, itemId: %u, buyCount: %u, maxCount: %u, totalSellCount: %u)"
                   ,uVar5,uVar4,uVar3,uVar2,uVar7);
        uVar7 = 0;
      }
      else {
        uVar7 = 0x5f;
      }
    }
  }
  else {
    uVar7 = 0x11;
  }
  return uVar7;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp](source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp)（约第 34 行）：

```cpp
int LimitNpcBuyItemManager::sellNpcLimitBuyItem(LimitNpcBuyItemInfo* info)
{
    std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.find(info->m_itemId);
    if (it == m_items.end())
    {
        return 0x11;
    }
    NpcBuyLimitItem* item = &it->second;
    if (item->m_itemId == 0)
    {
        return 0x11;
    }
    if (item->m_sellCount < item->m_maxCount)
    {
        item->m_sellCount += info->m_count;
        unsigned int total = item->m_sellCount;
        DNF_LOG_SCOPE_LINE(0x23,"./log/NpcBuyLimitItem",
            "Sell-> characNo: %u, itemId: %u, buyCount: %u, maxCount: %u, totalSellCount: %u)",
            info->m_charNo, info->m_itemId, info->m_count, item->m_maxCount, total);
        return 0;
    }
    return 0x5f;
}
```
