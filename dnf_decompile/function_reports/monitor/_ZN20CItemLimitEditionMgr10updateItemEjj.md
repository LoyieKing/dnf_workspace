# _ZN20CItemLimitEditionMgr10updateItemEjj

`CItemLimitEditionMgr::updateItem(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093664` | `0x78` | `0x80940ea` | `0x78` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEeqERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN20CItemLimitEditionMgr10updateItemEjj+0x54>
-mov    $0x0,%eax
-jmp    <T> <_ZN20CItemLimitEditionMgr10updateItemEjj+0x76>
+je     <T> <_ZN20CItemLimitEditionMgr10updateItemEjj+0x71>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
 mov    0x4(%eax),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CItemLimitEdition13updateSellNumEj>
 mov    $0x1,%eax
+jmp    <T> <_ZN20CItemLimitEditionMgr10updateItemEjj+0x76>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEditionMgr::updateItem(unsigned int, unsigned int) */

bool __thiscall
CItemLimitEditionMgr::_ZN20CItemLimitEditionMgr10updateItemEjj
          (CItemLimitEditionMgr *this,uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> local_14 [4];
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator==
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator->
                      (local_14);
    CItemLimitEdition::updateSellNum(*(CItemLimitEdition **)(iVar2 + 4),param_2);
  }
  return cVar1 == '\0';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 105 行）：

```cpp
bool CItemLimitEditionMgr::updateItem(unsigned int ipgno, unsigned int sellNum)
{
    std::map<unsigned int, CItemLimitEdition*>::iterator it = m_items.find(ipgno);
    if (it != m_items.end())
    {
        it->second->updateSellNum(sellNum);
        return true;
    }
    return false;
}
```
