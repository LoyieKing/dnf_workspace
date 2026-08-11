# _ZN12CUserManager10CreateUserEjP11CGameServer

`CUserManager::CreateUser(unsigned int, CGameServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x805a706` | `0x163` | `0x8058d6c` | `0x160` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,113 +1,111 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserC1EP11CGameServer>
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x14(%ebp),%eax
+lea    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRKj5CUserESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj5CUserEC1IjS1_EEOS_IT_T0_E>
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
-lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%ecx
+lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKj5CUserSt4lessIS0_ESaISt4pairIS0_S1_EEE6insertERKS5_>
 sub    $0x4,%esp
-movzbl -0x2c(%ebp),%eax
+movzbl -0x20(%ebp),%eax
 mov    %al,-0x9(%ebp)
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj5CUserED1Ev>
 jmp    <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0xc9>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj5CUserED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0xb4>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIj5CUserED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0xd6>
-lea    -0x20(%ebp),%eax
+jmp    <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0x130>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIj5CUserED1Ev>
-jmp    <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0xf1>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUserD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUserD1Ev>
 movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0x158>
+je     <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0x14b>
 mov    0xc(%ebp),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x5f,0x8(%esp)
 movl   $&_ZZN12CUserManager10CreateUserEjP11CGameServerE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CreateUser() uDBID(%s) is already exist at m_mapUsers!",0x8(%esp)
 movl   $"./log/LoginErr",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0x159>
-nop
+jmp    <T> <_ZN12CUserManager10CreateUserEjP11CGameServer+0x14b>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUserD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUserD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::CreateUser(unsigned int, CGameServer*) */

void __thiscall
CUserManager::_ZN12CUserManager10CreateUserEjP11CGameServer
          (CUserManager *this,uint param_1,CGameServer *param_2)

{
  undefined4 uVar1;
  pair local_34 [4];
  char local_30;
  pair<unsigned_int_const,CUser> local_2c [8];
  pair<unsigned_int,CUser> local_24 [8];
  CUser local_1c [4];
  CMyFileLog local_18 [11];
  char local_d;
  
  CUser::CUser(local_1c,param_2);
                    /* try { // try from 0805a734 to 0805a738 has its CatchHandler @ 0805a7dc */
  std::make_pair<unsigned_int_const&,CUser>((uint *)local_24,(CUser *)&param_1);
                    /* try { // try from 0805a749 to 0805a74d has its CatchHandler @ 0805a7ba */
  std::pair<unsigned_int_const,CUser>::pair<unsigned_int,CUser>(local_2c,local_24);
                    /* try { // try from 0805a789 to 0805a78d has its CatchHandler @ 0805a7a5 */
  std::
  map<unsigned_int_const,CUser,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CUser>>>
  ::insert(local_34);
  local_d = local_30;
                    /* try { // try from 0805a79e to 0805a7a2 has its CatchHandler @ 0805a7ba */
  std::pair<unsigned_int_const,CUser>::~pair(local_2c);
                    /* try { // try from 0805a7d5 to 0805a7d9 has its CatchHandler @ 0805a7dc */
  std::pair<unsigned_int,CUser>::~pair(local_24);
  CUser::~CUser(local_1c);
  if (local_d != '\x01') {
    uVar1 = NumberToString(param_1,0);
    CMyFileLog::CMyFileLog(local_18,"CreateUser",0x5f);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_18,"./log/LoginErr","CreateUser() uDBID(%s) is already exist at m_mapUsers!",
               uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUserManager.cpp](source/DNFServer/GameServer/COServer/DNFUserManager.cpp)（约第 39 行）：

```cpp
void CUserManager::CreateUser(unsigned int user_id, CGameServer* gs)
{
    CUser user(gs);
    bool eq = m_maps[user_id % 10].insert(
        std::make_pair<const unsigned int&, CUser>(user_id, user)).second;
    if (!eq)
    {
        register char* num = NumberToString(user_id, 0);
        DNF_LOG_SCOPE_LINE(0x5f, "./log/LoginErr",
            "CreateUser() uDBID(%s) is already exist at m_mapUsers!", num);
    }
}
```
