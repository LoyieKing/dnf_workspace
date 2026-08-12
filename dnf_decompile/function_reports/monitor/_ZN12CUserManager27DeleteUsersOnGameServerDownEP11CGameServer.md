# _ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer

`CUserManager::DeleteUsersOnGameServerDown(CGameServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8070c7c` | `0x2f9` | `0x808b4bc` | `0x305` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,222 +1,225 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x23>
 mov    $0x0,%eax
-jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2f4>
+jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x300>
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0xb3>
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0xb3>
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 cmp    0xc(%ebp),%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0xa8>
 lea    -0x24(%ebp),%eax
 movl   $0x0,0x8(%esp)
-lea    -0x2c(%ebp),%edx
+lea    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0xb3>
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x3d>
 mov    0x8(%ebp),%eax
 lea    0x48(%eax),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x175>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x175>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 cmp    0xc(%ebp),%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x16a>
-lea    -0x1c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 movl   $0x0,0x8(%esp)
-lea    -0x30(%ebp),%edx
+lea    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x48(%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x175>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x48(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0xff>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2bd>
-lea    -0x34(%ebp),%eax
+jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2c9>
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2bd>
+je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2c9>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 cmp    0xc(%ebp),%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2b2>
+je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2be>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x22d>
+je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x228>
 mov    0x8(%ebp),%eax
 mov    0x78(%eax),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Call_DeleteMemberEjP5CUser>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
-mov    0x8(%ebp),%edx
-mov    0x78(%edx),%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19Call_ResetBlackListEj>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    0x8(%ebp),%edx
 mov    0x78(%edx),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19Call_ResetBlackListEj>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    0x8(%ebp),%edx
+mov    0x78(%edx),%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN12CApplication19Call_ResetBuddyListEj>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x28a>
 mov    -0x10(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x27e>
+je     <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x28a>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserdlEPv>
+lea    -0x34(%ebp),%eax
+movl   $0x0,0x8(%esp)
+lea    -0x30(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEi>
+sub    $0x4,%esp
+mov    0x8(%ebp),%eax
+lea    0x18(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
+jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2c9>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
+mov    0x8(%ebp),%eax
+lea    0x18(%eax),%edx
 lea    -0x14(%ebp),%eax
-movl   $0x0,0x8(%esp)
-lea    -0x34(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEi>
-sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0x18(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
-jmp    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x2bd>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x18(%eax),%edx
-lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer+0x1c4>
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DeleteUsersOnGameServerDown(CGameServer*) */

undefined4 __thiscall
CUserManager::_ZN12CUserManager27DeleteUsersOnGameServerDownEP11CGameServer
          (CUserManager *this,CGameServer *param_1)

{
  CUser *this_00;
  char cVar1;
  int iVar2;
  CGameServer *pCVar3;
  void *pvVar4;
  undefined4 uVar5;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_38 [4];
  map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
  local_34 [4];
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_30 [4];
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_2c [4];
  undefined4 local_28;
  map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
  local_24 [4];
  undefined4 local_20;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  undefined4 local_18;
  CUser *local_14;
  uint local_10;
  
  cVar1 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x18));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_30);
    while( true ) {
      std::
      map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_2c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_30,
                         (_Rb_tree_iterator *)local_2c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_30);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_30);
        pCVar3 = (CGameServer *)CUser::GetGameServer(*(CUser **)(iVar2 + 4));
        if (pCVar3 == param_1) {
          uVar5 = 0;
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_28,
                     (int)local_30);
          std::
          map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::erase((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x30),local_28,uVar5);
        }
        else {
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_30);
        }
      }
    }
    std::
    map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
    ::begin(local_34);
    while( true ) {
      std::
      map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
      ::end(local_24);
      cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<std::string_const,CUser*>> *)local_34,
                         (_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,CUser*>> *)local_34);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<std::string_const,CUser*>> *)local_34);
        pCVar3 = (CGameServer *)CUser::GetGameServer(*(CUser **)(iVar2 + 4));
        if (pCVar3 == param_1) {
          uVar5 = 0;
          std::_Rb_tree_iterator<std::pair<std::string_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<std::string_const,CUser*>> *)&local_20,
                     (int)local_34);
          std::
          map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
          ::erase((map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
                   *)(this + 0x48),local_20,uVar5);
        }
        else {
          std::_Rb_tree_iterator<std::pair<std::string_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<std::string_const,CUser*>> *)local_34);
        }
      }
    }
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_38);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_38,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_38);
      local_14 = *(CUser **)(iVar2 + 4);
      if (local_14 != (CUser *)0x0) {
        pCVar3 = (CGameServer *)CUser::GetGameServer(local_14);
        if (pCVar3 == param_1) {
          local_10 = CUser::GetUniqCharNo(local_14);
          if (local_10 != 0) {
            CApplication::Call_DeleteMember(*(CApplication **)(this + 0x78),local_10,local_14);
          }
          CUser::GetDBID(local_14);
          CApplication::Call_ResetBlackList(*(uint *)(this + 0x78));
          pvVar4 = (void *)CUser::GetUniqCharNo(local_14);
          CApplication::Call_ResetBuddyList(*(uint *)(this + 0x78));
          this_00 = local_14;
          if (local_14 != (CUser *)0x0) {
            CUser::~CUser(local_14);
            CUser::operator_delete(this_00,pvVar4);
          }
          uVar5 = 0;
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18,
                     (int)local_38);
          std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::erase((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x18),local_18,uVar5);
        }
        else {
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_38);
        }
      }
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 174 行）：

```cpp
int CUserManager::DeleteUsersOnGameServerDown(CGameServer* gameServer)
{
    if (m_users.empty())
    {
        return 0;
    }
    for (std::map<const unsigned int, CUser*>::iterator it = m_charNoUsers.begin();
         it != m_charNoUsers.end(); )
    {
        if (it->second != 0)
        {
            if (it->second->GetGameServer() == gameServer)
            {
                std::map<const unsigned int, CUser*>::iterator cur = it++;
                m_charNoUsers.erase(cur);
                continue;
            }
            ++it;
        }
    }
    for (std::map<const std::string, CUser*>::iterator it = m_charNameUsers.begin();
         it != m_charNameUsers.end(); )
    {
        if (it->second != 0)
        {
            if (it->second->GetGameServer() == gameServer)
            {
                std::map<const std::string, CUser*>::iterator cur = it++;
                m_charNameUsers.erase(cur);
                continue;
            }
            ++it;
        }
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_users.begin();
         it != m_users.end(); )
    {
        CUser* user = it->second;
        if (user != 0)
        {
            if (user->GetGameServer() == gameServer)
            {
                unsigned int key = user->GetUniqCharNo();
                if (key != 0)
                {
                    m_app->Call_DeleteMember(key, user);
                }
                user->GetDBID();
                m_app->Call_ResetBlackList(user->GetUniqCharNo());
                m_app->Call_ResetBuddyList(user->GetUniqCharNo());
                if (user != 0)
                {
                    delete user;
                }
                std::map<unsigned int, CUser*>::iterator cur = it++;
                m_users.erase(cur);
                continue;
            }
            ++it;
        }
    }
    return 0;
}
```
