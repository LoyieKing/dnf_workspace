# _ZNK12CUserManager8FindUserEj

`CUserManager::FindUser(unsigned int) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8070f76` | `0x6a` | `0x808c02e` | `0x7f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
+mov    0x8(%ebp),%eax
+add    $0x18,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZNK12CUserManager8FindUserEj+0x78>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEeqERKS5_>
+call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-je     <T> <_ZNK12CUserManager8FindUserEj+0x5a>
-mov    $0x0,%eax
-jmp    <T> <_ZNK12CUserManager8FindUserEj+0x68>
+je     <T> <_ZNK12CUserManager8FindUserEj+0x78>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
+jmp    <T> <_ZNK12CUserManager8FindUserEj+0x7d>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::FindUser(unsigned int) const */

undefined4 CUserManager::_ZNK12CUserManager8FindUserEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_14 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator->(local_14)
    ;
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 267 行）：

```cpp
CUser* CUserManager::FindUser(unsigned int dbid) const
{
    std::map<unsigned int, CUser*>::const_iterator it = m_users.find(dbid);
    return it == m_users.end() ? 0 : it->second;
}
```
