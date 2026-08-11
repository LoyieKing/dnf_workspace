# _ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer

`CUserManager::DeleteUsersOnTcpGameServerDown(CTcpGameServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8068cc2` | `0x2af` | `0x808b24e` | `0x2b5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,202 +1,204 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x20>
-mov    $0x0,%eax
-jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x2aa>
+jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x2af>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0xb0>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0xb0>
+je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x68>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16GetTcpGameServerEv>
 cmp    0xc(%ebp),%eax
-sete   %al
+jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x68>
+mov    $0x1,%eax
+jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x6d>
+mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0xa5>
 lea    -0x24(%ebp),%eax
 movl   $0x0,0x8(%esp)
 lea    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0xb0>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x3a>
+jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x34>
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%edx
 lea    -0x30(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x172>
+jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x178>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x172>
+je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x130>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16GetTcpGameServerEv>
 cmp    0xc(%ebp),%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x167>
+jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x130>
+mov    $0x1,%eax
+jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x135>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x16d>
 lea    -0x1c(%ebp),%eax
 movl   $0x0,0x8(%esp)
 lea    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
-jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x172>
+jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x178>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKSsP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CUserEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0xfc>
 mov    0x8(%ebp),%edx
 lea    -0x34(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x276>
+jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x27e>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x276>
+je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x1f2>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16GetTcpGameServerEv>
 cmp    0xc(%ebp),%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x26b>
+jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x1f2>
+mov    $0x1,%eax
+jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x1f7>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x273>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x223>
+je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x22b>
 mov    0x8(%ebp),%eax
 mov    0x48(%eax),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication22Call_DeleteGuildMemberEjP5CUser>
 mov    -0x10(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x23a>
+je     <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x242>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN5CUserdlEPv>
 lea    -0x14(%ebp),%eax
 movl   $0x0,0x8(%esp)
 lea    -0x34(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
-jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x276>
+jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x27e>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP5CUserSt4lessIS0_ESaISt4pairIS0_S2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x1be>
-mov    $0x0,%eax
+jne    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x1c4>
+jmp    <T> <_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer+0x2b0>
+nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DeleteUsersOnTcpGameServerDown(CTcpGameServer*) */

undefined4 __thiscall
CUserManager::_ZN12CUserManager30DeleteUsersOnTcpGameServerDownEP14CTcpGameServer
          (CUserManager *this,CTcpGameServer *param_1)

{
  CUser *this_00;
  char cVar1;
  int iVar2;
  CTcpGameServer *pCVar3;
  _Rb_tree_iterator *p_Var4;
  _Rb_tree_iterator *p_Var5;
  undefined4 uVar6;
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
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
  map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  undefined4 local_18;
  CUser *local_14;
  _Rb_tree_iterator *local_10;
  
  cVar1 = std::
          map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)this);
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
        pCVar3 = (CTcpGameServer *)CUser::GetTcpGameServer(*(CUser **)(iVar2 + 4));
        if (pCVar3 == param_1) {
          uVar6 = 0;
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_28,
                     (int)local_30);
          std::
          map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::erase((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x18),local_28,uVar6);
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
        pCVar3 = (CTcpGameServer *)CUser::GetTcpGameServer(*(CUser **)(iVar2 + 4));
        if (pCVar3 == param_1) {
          uVar6 = 0;
          std::_Rb_tree_iterator<std::pair<std::string_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<std::string_const,CUser*>> *)&local_20,
                     (int)local_34);
          std::
          map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
          ::erase((map<std::string_const,CUser*,std::less<std::string_const>,std::allocator<std::pair<std::string_const,CUser*>>>
                   *)(this + 0x30),local_20,uVar6);
        }
        else {
          std::_Rb_tree_iterator<std::pair<std::string_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<std::string_const,CUser*>> *)local_34);
        }
      }
    }
    std::
    map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_38);
    while( true ) {
      std::
      map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_1c);
      p_Var5 = (_Rb_tree_iterator *)local_1c;
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_38,p_Var5)
      ;
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_38);
      local_14 = *(CUser **)(iVar2 + 4);
      if (local_14 != (CUser *)0x0) {
        pCVar3 = (CTcpGameServer *)CUser::GetTcpGameServer(local_14);
        if (pCVar3 == param_1) {
          p_Var4 = (_Rb_tree_iterator *)CUser::GetGuildKey(local_14);
          local_10 = p_Var4;
          if (p_Var4 != (_Rb_tree_iterator *)0x0) {
            CApplication::Call_DeleteGuildMember
                      (*(CApplication **)(this + 0x48),(uint)p_Var4,local_14);
            p_Var5 = p_Var4;
          }
          this_00 = local_14;
          if (local_14 != (CUser *)0x0) {
            CUser::~CUser(local_14);
            CUser::operator_delete(this_00,p_Var5);
          }
          uVar6 = 0;
          std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18,
                     (int)local_38);
          std::
          map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::erase((map<unsigned_int_const,CUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)this,local_18,uVar6);
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

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 165 行）：

```cpp
void CUserManager::DeleteUsersOnTcpGameServerDown(CTcpGameServer* server)
{
    if (m_users.empty())
    {
        return;
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_charNoUsers.begin();
         it != m_charNoUsers.end();)
    {
        if (it->second != 0 && it->second->GetTcpGameServer() == server)
        {
            m_charNoUsers.erase(it++);
        }
        else
        {
            ++it;
        }
    }
    for (std::map<std::string, CUser*>::iterator it = m_charNameUsers.begin();
         it != m_charNameUsers.end();)
    {
        if (it->second != 0 && it->second->GetTcpGameServer() == server)
        {
            m_charNameUsers.erase(it++);
        }
        else
        {
            ++it;
        }
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_users.begin();
         it != m_users.end();)
    {
        CUser* user = it->second;
        if (user != 0 && user->GetTcpGameServer() == server)
        {
            unsigned int guildKey = user->GetGuildKey();
            if (guildKey != 0)
            {
                m_app->Call_DeleteGuildMember(guildKey, user);
            }
            delete user;
            m_users.erase(it++);
        }
        else
        {
            ++it;
        }
    }
}
```
