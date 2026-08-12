# _ZN12CBuddyHandle17findBuddyByCharNoEj

`CBuddyHandle::findBuddyByCharNo(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809ed88` | `0xaf` | `0x8058418` | `0x9b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
+mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEC1Ev>
-mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x7d>
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x69>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x59>
+je     <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x50>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-mov    0x22(%eax),%eax
+add    $0x22,%eax
+mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x59>
+jne    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x50>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x5e>
+jmp    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x55>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x72>
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEptEv>
-mov    0x4(%eax),%eax
-jmp    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0xad>
-lea    -0x18(%ebp),%eax
+je     <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x5e>
+mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x99>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x28>
+jne    <T> <_ZN12CBuddyHandle17findBuddyByCharNoEj+0x1d>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::findBuddyByCharNo(unsigned int) */

undefined4 __thiscall
CBuddyHandle::_ZN12CBuddyHandle17findBuddyByCharNoEj(CBuddyHandle *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> local_18 [4];
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_14 [4];
  CBuddy *local_10;
  
  std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::_Rb_tree_iterator(local_18);
  std::
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::end(local_14);
    cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_1c,
                       (_Rb_tree_iterator *)local_14);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_1c);
    local_10 = *(CBuddy **)(iVar3 + 4);
    if ((local_10 == (CBuddy *)0x0) ||
       (iVar3 = CBuddy::getBuddyDBInfo(local_10), *(uint *)(iVar3 + 0x22) != param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator++
              ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_1c);
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator->
                    ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_1c);
  return *(undefined4 *)(iVar3 + 4);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 232 行）：

```cpp
CBuddy* CBuddyHandle::findBuddyByCharNo(unsigned int charNo)
{
    for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
         it != m_buddies.end(); ++it)
    {
        CBuddy* buddy = it->second;
        if (buddy != 0 &&
            *(unsigned int*)((char*)buddy->getBuddyDBInfo() + 0x22) == charNo)
        {
            return buddy;
        }
    }
    return 0;
}
```
