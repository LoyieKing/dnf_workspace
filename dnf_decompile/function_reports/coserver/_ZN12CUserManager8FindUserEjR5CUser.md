# _ZN12CUserManager8FindUserEjR5CUser

`CUserManager::FindUser(unsigned int, CUser&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | NEAR | `0x805a86a` | `0xe0` | `0x8058ecc` | `0xe0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,77 +1,77 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%ecx
 mov    $0xcccccccd,%edx
 mov    %ecx,%eax
 mul    %edx
 shr    $0x3,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 mov    %eax,%edx
 add    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKj5CUserSt4lessIS0_ESaISt4pairIS0_S1_EEE4findERS0_>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKj5CUserEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 mov    0xc(%ebp),%ecx
 mov    $0xcccccccd,%edx
 mov    %ecx,%eax
 mul    %edx
 shr    $0x3,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 mov    %eax,%edx
 add    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKj5CUserSt4lessIS0_ESaISt4pairIS0_S1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKj5CUserEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj5CUserEEeqERKS4_>
 test   %al,%al
 je     <T> <_ZN12CUserManager8FindUserEjR5CUser+0xc6>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CUserManager8FindUserEjR5CUser+0xde>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj5CUserEEptEv>
-mov    0x10(%ebp),%edx
-mov    0x4(%eax),%eax
-mov    %eax,(%edx)
+mov    0x4(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %edx,(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::FindUser(unsigned int, CUser&) */

bool __thiscall
CUserManager::_ZN12CUserManager8FindUserEjR5CUser(CUserManager *this,uint param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser>> local_1c [4];
  _Rb_tree_iterator local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser>> local_14 [4];
  map<unsigned_int_const,CUser,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser>>>
  local_10 [12];
  
  std::
  map<unsigned_int_const,CUser,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser>>>
  ::find((uint *)local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser>>::_Rb_tree_const_iterator
            (local_1c,local_18);
  std::
  map<unsigned_int_const,CUser,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser>>>
  ::end(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser>>::_Rb_tree_const_iterator
            (local_14,(_Rb_tree_iterator *)local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser>>::operator==
                    (local_1c,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser>>::operator->(local_1c);
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 4);
  }
  return cVar1 == '\0';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUserManager.cpp](source/DNFServer/GameServer/COServer/DNFUserManager.cpp)（约第 52 行）：

```cpp
bool CUserManager::FindUser(unsigned int user_id, CUser& out)
{
    std::map<const unsigned int, CUser>::const_iterator it = m_maps[user_id % 10].find(user_id);
    if (it == m_maps[user_id % 10].end())
    {
        return 0;
    }
    out.m_gs = it->second.m_gs;
    return 1;
}
```
