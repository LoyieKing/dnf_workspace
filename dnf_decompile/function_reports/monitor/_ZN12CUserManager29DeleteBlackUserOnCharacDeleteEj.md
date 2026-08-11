# _ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj

`CUserManager::DeleteBlackUserOnCharacDelete(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8071d8a` | `0xbb` | `0x808cba2` | `0xa8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj+0xb8>
-mov    0x8(%ebp),%eax
-lea    0x18(%eax),%edx
-lea    -0x18(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
-sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-jmp    <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj+0x76>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17DeleteToBlackListEj>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEppEv>
+je     <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj+0xa6>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj+0x78>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj+0x6d>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17DeleteToBlackListEj>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
+mov    0x8(%ebp),%eax
+lea    0x18(%eax),%edx
+lea    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEneERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj+0x48>
-jmp    <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj+0xb9>
-nop
+jne    <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj+0x39>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DeleteBlackUserOnCharacDelete(unsigned int) */

void CUserManager::_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_20 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  uint local_10;
  
  cVar1 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(param_1 + 0x18));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_1c);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
              (local_20,(_Rb_tree_iterator *)local_1c);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
                (local_18,(_Rb_tree_iterator *)local_14);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        (local_20,(_Rb_tree_const_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        (local_20);
      local_10 = *(uint *)(iVar2 + 4);
      CUser::DeleteToBlackList(local_10);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator++(local_20);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 385 行）：

```cpp
void CUserManager::DeleteBlackUserOnCharacDelete(unsigned int charNo)
{
    if (m_charNoUsers.empty())
    {
        return;
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_charNoUsers.begin();
         it != m_charNoUsers.end(); ++it)
    {
        it->second->DeleteToBlackList(charNo);
    }
}
```
