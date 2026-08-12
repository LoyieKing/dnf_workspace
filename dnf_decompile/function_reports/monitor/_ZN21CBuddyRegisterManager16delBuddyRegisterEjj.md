# _ZN21CBuddyRegisterManager16delBuddyRegisterEjj

`CBuddyRegisterManager::delBuddyRegister(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809d3da` | `0x99` | `0x804b90c` | `0x99` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
+mov    0x8(%ebp),%edx
+lea    -0xc(%ebp),%eax
+lea    0xc(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11lower_boundERS3_>
+sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11lower_boundERS3_>
+call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11upper_boundERS3_>
 sub    $0x4,%esp
-jmp    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj+0x60>
-lea    -0x10(%ebp),%eax
+jmp    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj+0x7c>
+lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 mov    0x4(%eax),%eax
 cmp    0x10(%ebp),%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj+0x55>
+je     <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj+0x71>
 mov    0x8(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE5eraseESt17_Rb_tree_iteratorIS4_E>
 mov    $0x1,%eax
 jmp    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj+0x97>
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjjEEppEv>
-mov    0x8(%ebp),%edx
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0xc(%ebp),%eax
-lea    0xc(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt8multimapIjjSt4lessIjESaISt4pairIKjjEEE11upper_boundERS3_>
-sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEneERKS3_>
 test   %al,%al
-jne    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj+0x24>
+jne    <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj+0x40>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyRegisterManager::delBuddyRegister(unsigned int, unsigned int) */

undefined4 __thiscall
CBuddyRegisterManager::_ZN21CBuddyRegisterManager16delBuddyRegisterEjj
          (CBuddyRegisterManager *this,uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 local_14;
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_10 [12];
  
  std::
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::lower_bound((multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 *)&local_14,(uint *)this);
  while( true ) {
    puVar3 = &param_1;
    std::
    multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::upper_bound(local_10,(uint *)this);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_14);
    if (*(uint *)(iVar2 + 4) == param_2) break;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_14);
  }
  std::
  multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::erase((multimap<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *)this,local_14,puVar3);
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/BuddyRegisterManager.cpp](source/DNFServer/GameServer/Monitor/BuddyRegisterManager.cpp)（约第 45 行）：

```cpp
int CBuddyRegisterManager::delBuddyRegister(unsigned int key, unsigned int value)
{
    std::multimap<unsigned int, unsigned int>::iterator it = m_map.lower_bound(key);
    std::multimap<unsigned int, unsigned int>::iterator end = m_map.upper_bound(key);
    for (; it != end; ++it)
    {
        if (it->second == value)
        {
            m_map.erase(it);
            return 1;
        }
    }
    return 0;
}
```
