# _ZN12CApplication20isAbleUserChatWithGMEjj

`CApplication::isAbleUserChatWithGM(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806588c` | `0x104` | `0x80529d2` | `0x104` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,75 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 lea    0x368(%eax),%ecx
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x368(%eax),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEneERKS6_>
 test   %al,%al
 je     <T> <_ZN12CApplication20isAbleUserChatWithGMEjj+0xfd>
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEptEv>
 lea    0x4(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listIjSaIjEE3endEv>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEptEv>
 lea    0x4(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt4listIjSaIjEE5beginEv>
+call   <T> <_ZNSt4listIjSaIjEE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
-lea    0x10(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    -0x14(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZSt4findISt14_List_iteratorIjEjET_S2_S2_RKT0_>
-sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEptEv>
 lea    0x4(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZNSt4listIjSaIjEE3endEv>
+call   <T> <_ZNSt4listIjSaIjEE5beginEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
+lea    0x10(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZSt4findISt14_List_iteratorIjEjET_S2_S2_RKT0_>
+sub    $0x4,%esp
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14_List_iteratorIjEneERKS0_>
 test   %al,%al
 je     <T> <_ZN12CApplication20isAbleUserChatWithGMEjj+0xfd>
 mov    $0x1,%eax
 jmp    <T> <_ZN12CApplication20isAbleUserChatWithGMEjj+0x102>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::isAbleUserChatWithGM(unsigned int, unsigned int) */

undefined4 CApplication::_ZN12CApplication20isAbleUserChatWithGMEjj(uint param_1,uint param_2)

{
  char cVar1;
  undefined1 local_24 [4];
  _Rb_tree_iterator local_20 [4];
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  _List_iterator<unsigned_int> local_10 [12];
  
  std::
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  ::find((uint *)local_20);
  std::
  map<unsigned_int,std::list<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
          ::operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
                        *)local_1c,local_20);
  if (cVar1 != '\0') {
    std::
    _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
    ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
                  *)local_20);
    std::list<unsigned_int,std::allocator<unsigned_int>>::end();
    std::
    _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
    ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
                  *)local_20);
    std::list<unsigned_int,std::allocator<unsigned_int>>::begin();
    std::find<std::_List_iterator<unsigned_int>,unsigned_int>
              (local_24,local_14,local_18,&stack0x0000000c);
    std::
    _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
    ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
                  *)local_20);
    std::list<unsigned_int,std::allocator<unsigned_int>>::end();
    cVar1 = std::_List_iterator<unsigned_int>::operator!=(local_10,local_24);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 798 行）：

```cpp
char CApplication::isAbleUserChatWithGM(unsigned int channel, unsigned int charNo)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(channel);
    if (it != m_map368.end())
    {
        if (std::find(it->second.begin(), it->second.end(), charNo) != it->second.end())
        {
            return 1;
        }
    }
    return 0;
}
```
