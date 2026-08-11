# _ZN12CUserManager26RefreshGuildAttendanceInfoEv

`CUserManager::RefreshGuildAttendanceInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8069a28` | `0x103` | `0x808bf4c` | `0xdf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,82 +1,72 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0xf8>
+jne    <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0xd4>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0xa0>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-jmp    <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0xb2>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEptEv>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0xa7>
+je     <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0x95>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%esi
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    0x48(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11AttendGuildEjj>
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEppEv>
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEneERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0x4a>
-jmp    <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0xf9>
+jne    <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0x38>
+jmp    <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv+0xd5>
 nop
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::RefreshGuildAttendanceInfo() */

void __thiscall CUserManager::_ZN12CUserManager26RefreshGuildAttendanceInfoEv(CUserManager *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CGuildManager *this_00;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_20 [4];
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_18 [4];
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  cVar1 = std::
          map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x18));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_1c);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
              (local_20,(_Rb_tree_iterator *)local_1c);
    while( true ) {
      std::
      map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
                (local_18,(_Rb_tree_iterator *)local_14);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        (local_20,(_Rb_tree_const_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        (local_20);
      local_10 = *(CUser **)(iVar2 + 4);
      iVar2 = CUser::GetGuildKey(local_10);
      if (iVar2 != 0) {
        uVar3 = CUser::GetUniqCharNo(local_10);
        uVar4 = CUser::GetGuildKey(local_10);
        this_00 = (CGuildManager *)CApplication::Get_GuildManager(*(CApplication **)(this + 0x48));
        CGuildManager::AttendGuild(this_00,uVar4,uVar3);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator++(local_20);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 398 行）：

```cpp
void CUserManager::RefreshGuildAttendanceInfo()
{
    if (m_charNoUsers.empty())
    {
        return;
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_charNoUsers.begin();
         it != m_charNoUsers.end(); ++it)
    {
        CUser* user = it->second;
        if (user->GetGuildKey() != 0)
        {
            m_app->Get_GuildManager()->AttendGuild(user->GetGuildKey(),
                                                   user->GetUniqCharNo());
        }
    }
}
```
