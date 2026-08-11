# _ZN12CUserManagerD1Ev

`CUserManager::~CUserManager()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806c552` | `0xf3` | `0x806a102` | `0xe4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,78 +1,74 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x20,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-jmp    <T> <_ZN12CUserManagerD1Ev+0x75>
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZN12CUserManagerD1Ev+0x6a>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEptEv>
 mov    0x4(%eax),%eax
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManagerD1Ev+0x6a>
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEptEv>
-mov    0x4(%eax),%ebx
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN12CUserManagerD1Ev+0x5f>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CUserManagerD1Ev+0x6a>
+je     <T> <_ZN12CUserManagerD1Ev+0x5f>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP16CDNFProhibitUserEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN12CUserManagerD1Ev+0x31>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5clearEv>
-jmp    <T> <_ZN12CUserManagerD1Ev+0xde>
+jmp    <T> <_ZN12CUserManagerD1Ev+0xcf>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEED1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::~CUserManager() */

void __thiscall CUserManager::_ZN12CUserManagerD1Ev(CUserManager *this)

{
  CDNFProhibitUser *this_00;
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator *p_Var3;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>> local_1c [4];
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>> local_14 [4];
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  local_10 [4];
  
                    /* try { // try from 0806c567 to 0806c612 has its CatchHandler @ 0806c615 */
  std::
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  ::begin(local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::
  _Rb_tree_const_iterator(local_1c,(_Rb_tree_iterator *)local_18);
  while( true ) {
    std::
    map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
    ::end(local_10);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::
    _Rb_tree_const_iterator(local_14,(_Rb_tree_iterator *)local_10);
    p_Var3 = (_Rb_tree_const_iterator *)local_14;
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::
            operator!=(local_1c,p_Var3);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::
            operator->(local_1c);
    if (*(int *)(iVar2 + 4) != 0) {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::
              operator->(local_1c);
      this_00 = *(CDNFProhibitUser **)(iVar2 + 4);
      if (this_00 != (CDNFProhibitUser *)0x0) {
        CDNFProhibitUser::~CDNFProhibitUser(this_00);
        CDNFProhibitUser::operator_delete(this_00,p_Var3);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CDNFProhibitUser*>>::operator++
              (local_1c);
  }
  std::
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  ::clear((map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
           *)this);
  std::
  map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
  ::~map((map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
          *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/UserManager.cpp](source/DNFServer/GameServer/Manager/UserManager.cpp)（约第 14 行）：

```cpp
CUserManager::~CUserManager()
{
    for (std::map<const unsigned int, CDNFProhibitUser*>::const_iterator it = m_prohibitUsers.begin();
         it != m_prohibitUsers.end(); ++it)
    {
        CDNFProhibitUser* pu = it->second;
        if (pu)
        {
            delete pu;
        }
    }
    m_prohibitUsers.clear();
}
```
