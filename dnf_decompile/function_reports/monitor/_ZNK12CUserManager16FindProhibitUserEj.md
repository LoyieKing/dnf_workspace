# _ZNK12CUserManager16FindProhibitUserEj

`CUserManager::FindProhibitUser(unsigned int) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8071b0a` | `0x6a` | `0x808be14` | `0x7f` |

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
+add    $0x60,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZNK12CUserManager16FindProhibitUserEj+0x78>
 mov    0x8(%ebp),%eax
 lea    0x60(%eax),%ecx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE4findERS0_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x60(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEeqERKS5_>
+call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEneERKS5_>
 test   %al,%al
-je     <T> <_ZNK12CUserManager16FindProhibitUserEj+0x5a>
-mov    $0x0,%eax
-jmp    <T> <_ZNK12CUserManager16FindProhibitUserEj+0x68>
+je     <T> <_ZNK12CUserManager16FindProhibitUserEj+0x78>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEptEv>
 mov    0x4(%eax),%eax
+jmp    <T> <_ZNK12CUserManager16FindProhibitUserEj+0x7d>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::FindProhibitUser(unsigned int) const */

undefined4 CUserManager::_ZNK12CUserManager16FindProhibitUserEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>> local_14 [4];
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  local_10 [12];
  
  std::
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::
            operator->(local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFUserManager.cpp](source/DNFServer/GameServer/DBMW/DNFUserManager.cpp)（约第 53 行）：

```cpp
CDNFProhibitUser* CUserManager::FindProhibitUser(unsigned int dbid) const
{
    std::map<unsigned int, CDNFProhibitUser*>::const_iterator it = m_prohibitUsers.find(dbid);
    if (it == m_prohibitUsers.end())
        return 0;
    return it->second;
}
```
