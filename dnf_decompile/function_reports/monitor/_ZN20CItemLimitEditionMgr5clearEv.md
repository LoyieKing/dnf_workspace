# _ZN20CItemLimitEditionMgr5clearEv

`CItemLimitEditionMgr::clear()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8066674` | `0xaa` | `0x8094226` | `0xc5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEC1ERKSt17_Rb_tree_iteratorIS4_E>
+jmp    <T> <_ZN20CItemLimitEditionMgr5clearEv+0x74>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
+mov    0x4(%eax),%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN20CItemLimitEditionMgr5clearEv+0x69>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
+mov    0x4(%eax),%ebx
+test   %ebx,%ebx
+je     <T> <_ZN20CItemLimitEditionMgr5clearEv+0x69>
+mov    %ebx,(%esp)
+call   <T> <_ZN17CItemLimitEditionD1Ev>
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-jmp    <T> <_ZN20CItemLimitEditionMgr5clearEv+0x84>
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEptEv>
-mov    0x4(%eax),%ebx
-test   %ebx,%ebx
-je     <T> <_ZN20CItemLimitEditionMgr5clearEv+0x79>
-mov    %ebx,(%esp)
-call   <T> <_ZN17CItemLimitEditionD1Ev>
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEppEv>
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP17CItemLimitEditionEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN20CItemLimitEditionMgr5clearEv+0x57>
+jne    <T> <_ZN20CItemLimitEditionMgr5clearEv+0x30>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP17CItemLimitEditionSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEditionMgr::clear() */

void __thiscall CItemLimitEditionMgr::_ZN20CItemLimitEditionMgr5clearEv(CItemLimitEditionMgr *this)

{
  CItemLimitEdition *this_00;
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>> local_18 [4];
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_14 [4];
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  local_10 [8];
  
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::begin(local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
  _Rb_tree_const_iterator(local_18,(_Rb_tree_iterator *)local_14);
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::end(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
  _Rb_tree_const_iterator(local_1c,(_Rb_tree_iterator *)local_10);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
            operator!=(local_18,(_Rb_tree_const_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::
            operator->(local_18);
    this_00 = *(CItemLimitEdition **)(iVar2 + 4);
    if (this_00 != (CItemLimitEdition *)0x0) {
      CItemLimitEdition::~CItemLimitEdition(this_00);
      ::operator_delete(this_00);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>>::operator++
              (local_18);
  }
  std::
  map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
  ::clear((map<unsigned_int,CItemLimitEdition*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CItemLimitEdition*>>>
           *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 131 行）：

```cpp
void CItemLimitEditionMgr::clear()
{
    for (std::map<unsigned int, CItemLimitEdition*>::const_iterator it = m_items.begin();
         it != m_items.end(); ++it)
    {
        if (it->second != 0)
        {
            delete it->second;
        }
    }
    m_items.clear();
}
```
