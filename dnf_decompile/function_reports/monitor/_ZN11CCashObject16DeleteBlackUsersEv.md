# _ZN11CCashObject16DeleteBlackUsersEv

`CCashObject::DeleteBlackUsers()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a04f8` | `0xb9` | `0x804d56c` | `0xb9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x8c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN11CCashObject16DeleteBlackUsersEv+0xb6>
+je     <T> <_ZN11CCashObject16DeleteBlackUsersEv+0xb7>
 mov    0x8(%ebp),%eax
 lea    0x8c(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN11CCashObject16DeleteBlackUsersEv+0x73>
+jmp    <T> <_ZN11CCashObject16DeleteBlackUsersEv+0x76>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN11CCashObject16DeleteBlackUsersEv+0x68>
+je     <T> <_ZN11CCashObject16DeleteBlackUsersEv+0x6b>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CBlackUserdlEPv>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x8c(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CBlackUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN11CCashObject16DeleteBlackUsersEv+0x3b>
+jne    <T> <_ZN11CCashObject16DeleteBlackUsersEv+0x3e>
 mov    0x8(%ebp),%eax
 add    $0x8c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
-jmp    <T> <_ZN11CCashObject16DeleteBlackUsersEv+0xb7>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CCashObject::DeleteBlackUsers() */

void __thiscall CCashObject::_ZN11CCashObject16DeleteBlackUsersEv(CCashObject *this)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator *p_Var3;
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_14 [4];
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  local_10 [12];
  
  cVar1 = std::
          map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          ::empty((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
                   *)(this + 0x8c));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
      ::end(local_10);
      p_Var3 = (_Rb_tree_iterator *)local_10;
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14,
                         p_Var3);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14)
        ;
        CBlackUser::operator_delete(*(CBlackUser **)(iVar2 + 4),p_Var3);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CBlackUser*>> *)local_14);
    }
    std::
    map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
    ::clear((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
             *)(this + 0x8c));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/CashObject.cpp](source/DNFServer/GameServer/Monitor/CashObject.cpp)（约第 138 行）：

```cpp
void CCashObject::DeleteBlackUsers()
{
    if (!m_blackUsers.empty())
    {
        for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackUsers.begin();
             it != m_blackUsers.end(); ++it)
        {
            if (it->second != 0)
            {
                CBlackUser::operator delete(it->second);
            }
        }
        m_blackUsers.clear();
    }
}
```
