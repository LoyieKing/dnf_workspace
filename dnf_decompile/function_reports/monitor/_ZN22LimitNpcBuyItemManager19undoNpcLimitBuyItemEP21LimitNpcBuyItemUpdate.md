# _ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate

`LimitNpcBuyItemManager::undoNpcLimitBuyItem(LimitNpcBuyItemUpdate*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805af9a` | `0x13a` | `0x80955f0` | `0x13b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0xc(%ebp),%eax
-lea    0xa(%eax),%ecx
+lea    0xc(%eax),%ecx
 mov    0x8(%ebp),%edx
 lea    -0x28(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEeqERKS4_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate+0x12b>
+je     <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate+0x72>
+mov    0xc(%ebp),%eax
+mov    0x14(%eax),%ebx
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
-mov    0xc(%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0x12(%eax),%eax
-cmp    %eax,%edx
-setb   %al
+mov    0xc(%eax),%eax
+cmp    %eax,%ebx
+ja     <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate+0x72>
+mov    $0x1,%eax
+jmp    <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate+0x77>
+mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate+0x12e>
+je     <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate+0x130>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
 mov    0xc(%eax),%ecx
 mov    0xc(%ebp),%edx
-mov    0x12(%edx),%edx
+mov    0x14(%edx),%edx
 mov    %ecx,%ebx
 sub    %edx,%ebx
 mov    %ebx,%edx
 mov    %edx,0xc(%eax)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
 mov    0xc(%eax),%eax
 mov    %eax,-0x34(%ebp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEptEv>
 mov    0x8(%eax),%eax
 mov    %eax,-0x30(%ebp)
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    0x14(%eax),%eax
 mov    %eax,-0x2c(%ebp)
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%edi
+mov    0xc(%eax),%edi
 mov    0xc(%ebp),%eax
-mov    0x16(%eax),%esi
+mov    0x18(%eax),%esi
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%ebx
+mov    0x10(%eax),%ebx
 movl   $0x34,0x8(%esp)
 movl   $&_ZZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdateE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x34(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Undo-> characNo: %u, errorNo: %u, itemId: %u, cancelCount: %u, maxCount: %u, totalSellCount: %u)",0x8(%esp)
 movl   $"./log/NpcBuyLimitItem",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate+0x12f>
-nop
-jmp    <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate+0x12f>
-nop
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

/* LimitNpcBuyItemManager::undoNpcLimitBuyItem(LimitNpcBuyItemUpdate*) */

void __thiscall
LimitNpcBuyItemManager::_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate
          (LimitNpcBuyItemManager *this,LimitNpcBuyItemUpdate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
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
  cVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator==
                    (local_2c,(_Rb_tree_iterator *)local_28);
  if ((cVar7 == '\0') &&
     (iVar8 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                        (local_2c), *(uint *)(param_1 + 0x12) <= *(uint *)(iVar8 + 0xc))) {
    iVar8 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                      (local_2c);
    *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) - *(int *)(param_1 + 0x12);
    iVar8 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                      (local_2c);
    uVar1 = *(undefined4 *)(iVar8 + 0xc);
    iVar8 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator->
                      (local_2c);
    uVar2 = *(undefined4 *)(iVar8 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0x12);
    uVar4 = *(undefined4 *)(param_1 + 10);
    uVar5 = *(undefined4 *)(param_1 + 0x16);
    uVar6 = *(undefined4 *)(param_1 + 0xe);
    CMyFileLog::CMyFileLog(local_24,"undoNpcLimitBuyItem",0x34);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/NpcBuyLimitItem",
               "Undo-> characNo: %u, errorNo: %u, itemId: %u, cancelCount: %u, maxCount: %u, totalSellCount: %u)"
               ,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp](source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp)（约第 58 行）：

```cpp
void LimitNpcBuyItemManager::undoNpcLimitBuyItem(LimitNpcBuyItemUpdate* info)
{
    std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.find(info->m_itemId);
    if (it == m_items.end())
    {
        return;
    }
    if (it->second.m_sellCount < info->m_cancelCount)
    {
        return;
    }
    it->second.m_sellCount -= info->m_cancelCount;
    DNF_LOG_SCOPE_LINE(0x34, "./log/NpcBuyLimitItem",
        "Undo-> characNo: %u, errorNo: %u, itemId: %u, cancelCount: %u, maxCount: %u, totalSellCount: %u)",
        info->m_charNo, info->m_errorNo, info->m_itemId, info->m_cancelCount,
        it->second.m_maxCount, it->second.m_sellCount);
}
```
