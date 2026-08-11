# _ZN12CUserManager23ChangeBlackListCharNameEjPc

`CUserManager::ChangeBlackListCharName(unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8071e46` | `0xc2` | `0x808b22c` | `0xbc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,60 +1,57 @@
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
-jne    <T> <_ZN12CUserManager23ChangeBlackListCharNameEjPc+0xbf>
+je     <T> <_ZN12CUserManager23ChangeBlackListCharNameEjPc+0xba>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
+lea    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-jmp    <T> <_ZN12CUserManager23ChangeBlackListCharNameEjPc+0x7d>
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN12CUserManager23ChangeBlackListCharNameEjPc+0x7a>
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser25ChangeCharNameToBlackListEjPc>
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CUserManager23ChangeBlackListCharNameEjPc+0x48>
-jmp    <T> <_ZN12CUserManager23ChangeBlackListCharNameEjPc+0xc0>
-nop
+jne    <T> <_ZN12CUserManager23ChangeBlackListCharNameEjPc+0x4b>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::ChangeBlackListCharName(unsigned int, char*) */

void __thiscall
CUserManager::_ZN12CUserManager23ChangeBlackListCharNameEjPc
          (CUserManager *this,uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_20 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  cVar1 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x18));
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
      local_10 = *(CUser **)(iVar2 + 4);
      CUser::ChangeCharNameToBlackList(local_10,param_1,param_2);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator++(local_20);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 133 行）：

```cpp
void CUserManager::ChangeBlackListCharName(unsigned int dbid, char* name)
{
    if (!m_users.empty())
    {
        for (std::map<unsigned int, CUser*>::const_iterator it = m_users.begin();
             it != m_users.end(); ++it)
        {
            it->second->ChangeCharNameToBlackList(dbid, name);
        }
    }
}
```
