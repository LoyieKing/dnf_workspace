# _ZN22LimitNpcBuyItemManager10registItemER15NpcBuyLimitItem

`LimitNpcBuyItemManager::registItem(NpcBuyLimitItem&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805ada4` | `0x9c` | `0x809579c` | `0x99` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0xc(%ebp),%ecx
 mov    0x8(%ebp),%edx
 lea    -0x38(%ebp),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x34(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15NpcBuyLimitItemEEeqERKS4_>
 test   %al,%al
-je     <T> <_ZN22LimitNpcBuyItemManager10registItemER15NpcBuyLimitItem+0x99>
+je     <T> <_ZN22LimitNpcBuyItemManager10registItemER15NpcBuyLimitItem+0x97>
 mov    0xc(%ebp),%edx
 lea    -0x18(%ebp),%eax
 mov    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjR15NpcBuyLimitItemESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj15NpcBuyLimitItemEC1IjS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%edx
 lea    -0x30(%ebp),%eax
 lea    -0x28(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15NpcBuyLimitItemSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 sub    $0x4,%esp
-jmp    <T> <_ZN22LimitNpcBuyItemManager10registItemER15NpcBuyLimitItem+0x9a>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LimitNpcBuyItemManager::registItem(NpcBuyLimitItem&) */

void __thiscall
LimitNpcBuyItemManager::_ZN22LimitNpcBuyItemManager10registItemER15NpcBuyLimitItem
          (LimitNpcBuyItemManager *this,NpcBuyLimitItem *param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>> local_3c [4];
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  local_38 [4];
  pair local_34 [8];
  pair<unsigned_int_const,NpcBuyLimitItem> local_2c [16];
  uint local_1c [6];
  
  std::
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  ::find((uint *)local_3c);
  std::
  map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
  ::end(local_38);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,NpcBuyLimitItem>>::operator==
                    (local_3c,(_Rb_tree_iterator *)local_38);
  if (cVar1 != '\0') {
    std::make_pair<unsigned_int&,NpcBuyLimitItem&>(local_1c,param_1);
    std::pair<unsigned_int_const,NpcBuyLimitItem>::pair<unsigned_int,NpcBuyLimitItem>
              (local_2c,(pair *)local_1c);
    std::
    map<unsigned_int,NpcBuyLimitItem,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,NpcBuyLimitItem>>>
    ::insert(local_34);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp](source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp)（约第 78 行）：

```cpp
void LimitNpcBuyItemManager::registItem(NpcBuyLimitItem& item)
{
    std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.find(item.m_itemId);
    if (it == m_items.end())
    {
        m_items.insert(std::make_pair(item.m_itemId, item));
    }
}
```
