# _ZN13CGuildManager13GuildMemLoginEjP5CUser

`CGuildManager::GuildMemLogin(unsigned int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80955e4` | `0x43d` | `0x805b44e` | `0x41b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,331 +1,320 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 cmpl   $0x0,0x10(%ebp)
 je     <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x1c>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0xf8>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildMemLogin() : m_pclApp , pclUser == NULL\n",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x9b>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x95>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0xba>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0xba>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0xd5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0xba>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x1de>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildMemLogin() : dwGuildKey == 0\n",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x181>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x17b>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x1a0>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x1a0>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x1bb>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x1a0>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x2d9>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildMemLogin() pclServerHandler == NULL\n",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x27c>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x276>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x29b>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x29b>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x2b6>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x29b>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x326>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x321>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0xc(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11CreateGuildEjP14CServerHandlerj>
-mov    %eax,-0x24(%ebp)
-jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x391>
+mov    %eax,-0x20(%ebp)
+jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x380>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x8(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild10QueryGuildEP14CServerHandlerj>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15CheckGuildSkillEv>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_GuildManagerEv>
-mov    %ebx,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,0x8(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11AttendGuildEjj>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_GuildManagerEv>
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager14GetTodayMemberEj>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x3d4>
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,0x4(%esp)
+jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x3af>
 mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild21QueryTodayGuildMemberEP14CServerHandler>
-jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x3f8>
+jmp    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x3d3>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22NotifyTodayGuildMemberEP5CUser>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
+cmp    $0x1,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x410>
 mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x432>
-mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GuildMemLogin(unsigned int, CUser*) */

CGuild * __thiscall
CGuildManager::_ZN13CGuildManager13GuildMemLoginEjP5CUser
          (CGuildManager *this,uint param_1,CUser *param_2)

{
  char cVar1;
  CDNFException *pCVar2;
  uint uVar3;
  CGuildManager *this_00;
  CServerHandler *pCVar4;
  string local_40 [7];
  allocator local_39;
  string local_38 [7];
  allocator local_31;
  string local_30 [7];
  allocator local_29;
  CGuild *local_28;
  CServerHandler *local_24;
  STTodayGuildMember *local_20;
  
  if ((param_2 == (CUser *)0x0) || (*(int *)this == 0)) {
    std::allocator<char>::allocator();
                    /* try { // try from 08095620 to 08095624 has its CatchHandler @ 0809569a */
    std::string::string(local_40,"CGuildManager::GuildMemLogin() : m_pclApp , pclUser == NULL\n",
                        &local_39);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809563f to 08095643 has its CatchHandler @ 08095646 */
    CDNFException::CDNFException(pCVar2,local_40);
                    /* try { // try from 08095685 to 08095689 has its CatchHandler @ 0809568c */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  if (param_1 == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08095706 to 0809570a has its CatchHandler @ 08095780 */
    std::string::string(local_38,"CGuildManager::GuildMemLogin() : dwGuildKey == 0\n",&local_31);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08095725 to 08095729 has its CatchHandler @ 0809572c */
    CDNFException::CDNFException(pCVar2,local_38);
                    /* try { // try from 0809576b to 0809576f has its CatchHandler @ 08095772 */
    std::string::~string(local_38);
    std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  if (local_24 == (CServerHandler *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08095801 to 08095805 has its CatchHandler @ 0809587b */
    std::string::string(local_30,"CGuildManager::GuildMemLogin() pclServerHandler == NULL\n",
                        &local_29);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08095820 to 08095824 has its CatchHandler @ 08095827 */
    CDNFException::CDNFException(pCVar2,local_30);
                    /* try { // try from 08095866 to 0809586a has its CatchHandler @ 0809586d */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = (CGuild *)FindGuild((uint)this);
  if (local_28 == (CGuild *)0x0) {
    uVar3 = CUser::GetUniqCharNo(param_2);
    local_28 = (CGuild *)CreateGuild(this,param_1,local_24,uVar3);
  }
  else {
    uVar3 = CUser::GetUniqCharNo(param_2);
    CGuild::QueryGuild(local_28,local_24,uVar3);
    CGuild::SendGuildInfoToMemberOnly(local_28,param_2);
    CGuild::CheckGuildSkill(local_28);
    uVar3 = CUser::GetUniqCharNo(param_2);
    this_00 = (CGuildManager *)CApplication::Get_GuildManager(*(CApplication **)this);
    _ZN13CGuildManager11AttendGuildEjj(this_00,param_1,uVar3);
  }
  uVar3 = CApplication::Get_GuildManager(*(CApplication **)this);
  local_20 = (STTodayGuildMember *)GetTodayMember(uVar3);
  if (local_20 == (STTodayGuildMember *)0x0) {
    pCVar4 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
    CGuild::QueryTodayGuildMember(local_28,pCVar4);
  }
  else {
    CGuild::SetTodayGuildMember(local_28,local_20);
    CGuild::NotifyTodayGuildMember(local_28,param_2);
  }
  uVar3 = CUser::GetUniqCharNo(param_2);
  cVar1 = CGuild::InsertGuildMember(local_28,uVar3,param_2);
  if (cVar1 == '\x01') {
    CUser::QueryGuildMember(param_2,local_24);
  }
  return local_28;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 313 行）：

```cpp
CGuild* CGuildManager::GuildMemLogin(unsigned int guildKey, CUser* user)
{
    if (user == 0 || m_app == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() : m_pclApp , pclUser == NULL\n");
    }
    if (guildKey == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() : dwGuildKey == 0\n");
    }
    CServerHandler* handler;
    if (!(handler = m_app->Get_ServerHandler()))
    {
        throw CDNFException("CGuildManager::GuildMemLogin() pclServerHandler == NULL\n");
    }
    CGuild* guild = FindGuild(guildKey);
    if (guild == 0)
    {
        guild = CreateGuild(guildKey, handler, user->GetUniqCharNo());
    }
    else
    {
        guild->QueryGuild(handler, user->GetUniqCharNo());
        guild->SendGuildInfoToMemberOnly(user);
        guild->CheckGuildSkill();
        AttendGuild(guildKey, user->GetUniqCharNo());
    }
    STTodayGuildMember* today = (STTodayGuildMember*)GetTodayMember(guildKey);
    if (today == 0)
    {
        guild->QueryTodayGuildMember(handler);
    }
    else
    {
        guild->SetTodayGuildMember(*today);
        guild->NotifyTodayGuildMember(user);
    }
    if (guild->InsertGuildMember(user->GetUniqCharNo(), user) == 1)
    {
        user->QueryGuildMember(handler);
    }
    return guild;
}
```
