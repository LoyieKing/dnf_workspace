# _ZN20CItemLimitEditionMgr10removeItemEj

`CItemLimitEditionMgr::removeItem(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80935dc` | `0x87` | `0x8093dfc` | `0x93` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN20CItemLimitEditionMgr10removeItemEj+0x82>
-lea    -0x10(%ebp),%eax
+je     <T> <_ZN20CItemLimitEditionMgr10removeItemEj+0x8e>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
-mov    0x4(%eax),%ebx
+mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN20CItemLimitEditionMgr10removeItemEj+0x7c>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN20CItemLimitEditionMgr10removeItemEj+0x70>
+je     <T> <_ZN20CItemLimitEditionMgr10removeItemEj+0x7c>
 mov    %ebx,(%esp)
 call   <T> <_ZN17CItemLimitEditionD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEditionMgr::removeItem(unsigned int) */

void CItemLimitEditionMgr::_ZN20CItemLimitEditionMgr10removeItemEj(uint param_1)

{
  CItemLimitEdition *this;
  char cVar1;
  int iVar2;
  uint local_14;
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_10 [8];
  
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::find(&local_14);
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                     &local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> *)
                       &local_14);
    this = *(CItemLimitEdition **)(iVar2 + 4);
    if (this != (CItemLimitEdition *)0x0) {
      CItemLimitEdition::~CItemLimitEdition(this);
      ::operator_delete(this);
    }
    std::
    map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
    ::erase((map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
             *)param_1,local_14);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 91 行）：

```cpp
void CItemLimitEditionMgr::removeItem(unsigned int ipgno)
{
    std::map<unsigned int, CItemLimitEdition*>::iterator it = m_items.find(ipgno);
    if (it != m_items.end())
    {
        CItemLimitEdition* item = it->second;
        if (item != 0)
        {
            delete item;
        }
        m_items.erase(it);
    }
}
```
