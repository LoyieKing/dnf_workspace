# _ZN12CApplication21DisableChatUserWithGMEjj

`CApplication::DisableChatUserWithGM(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8065776` | `0x115` | `0x8052be0` | `0x78` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 lea    0x368(%eax),%ecx
-lea    -0x1c(%ebp),%eax
+lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x368(%eax),%edx
-lea    -0x18(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt4listIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEneERKS6_>
 test   %al,%al
-je     <T> <_ZN12CApplication21DisableChatUserWithGMEjj+0x113>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEptEv>
-lea    0x4(%eax),%edx
-lea    -0x14(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt4listIjSaIjEE3endEv>
-sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEptEv>
-lea    0x4(%eax),%edx
+je     <T> <_ZN12CApplication21DisableChatUserWithGMEjj+0x76>
 lea    -0x10(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt4listIjSaIjEE5beginEv>
-sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
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
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEptEv>
-lea    0x4(%eax),%edx
-lea    -0xc(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt4listIjSaIjEE3endEv>
-sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt14_List_iteratorIjEneERKS0_>
-test   %al,%al
-je     <T> <_ZN12CApplication21DisableChatUserWithGMEjj+0x113>
-lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt4listIjSaIjEEEEptEv>
 lea    0x4(%eax),%edx
 lea    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt4listIjSaIjEE6removeERKj>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::DisableChatUserWithGM(unsigned int, unsigned int) */

void CApplication::_ZN12CApplication21DisableChatUserWithGMEjj(uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
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
      iVar2 = std::
              _Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
              ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,std::list<unsigned_int,std::allocator<unsigned_int>>>>
                            *)local_20);
      std::list<unsigned_int,std::allocator<unsigned_int>>::remove
                ((list<unsigned_int,std::allocator<unsigned_int>> *)(iVar2 + 4),
                 (uint *)&stack0x0000000c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 850 行）：

```cpp
void CApplication::DisableChatUserWithGM(unsigned int channel, unsigned int charNo)
{
    std::map<unsigned int, std::list<unsigned int> >::iterator it = m_map368.find(channel);
    if (it != m_map368.end())
    {
        it->second.remove(charNo);
    }
}
```
