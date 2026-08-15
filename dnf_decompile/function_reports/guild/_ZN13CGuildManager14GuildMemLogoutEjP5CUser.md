# _ZN13CGuildManager14GuildMemLogoutEjP5CUser

`CGuildManager::GuildMemLogout(unsigned int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8095a22` | `0x349` | `0x805b5cc` | `0x33e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,256 +1,250 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 cmpl   $0x0,0x10(%ebp)
 je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x1c>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0xf8>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildMemLogout()\t0 == pclUser || 0 == m_pclApp\n",0x4(%esp)
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
 jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x9b>
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
 jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x95>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0xba>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0xba>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0xd5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0xba>
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
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x1de>
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildMemLogout()\t0 == dwGuildKey\n",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x24(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x181>
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
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x17b>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x1a0>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x1a0>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x1bb>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x1a0>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x1d(%ebp),%eax
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
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x33d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x25d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x258>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,%ebx
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0x1,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17DBGuildMemberSaveEP5CUserhP14CServerHandlerh>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x340>
+test   %al,%al
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild31InsertGuildMemberChanglableInfoEj>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager12IsEmptyGuildEj>
-test   %al,%al
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x321>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x2d0>
+movl   $0x0,0x8(%esp)
+mov    0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc>
+jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x30d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x324>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,%ebx
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0x0,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11DeleteGuildEj>
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-movl   $0x0,0x8(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc>
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-nop
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-nop
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GuildMemLogout(unsigned int, CUser*) */

void __thiscall
CGuildManager::_ZN13CGuildManager14GuildMemLogoutEjP5CUser
          (CGuildManager *this,uint param_1,CUser *param_2)

{
  uchar uVar1;
  char cVar2;
  CDNFException *pCVar3;
  int iVar4;
  CServerHandler *pCVar5;
  CServerInterface *pCVar6;
  uint uVar7;
  string local_30 [7];
  allocator local_29;
  string local_28 [7];
  allocator local_21;
  CGuild *local_20;
  
  if ((param_2 != (CUser *)0x0) && (*(int *)this != 0)) {
    if (param_1 != 0) {
      local_20 = (CGuild *)FindGuild((uint)this);
      if (local_20 != (CGuild *)0x0) {
        iVar4 = CUser::GetGameServer(param_2);
        if (iVar4 != 0) {
          pCVar5 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
          pCVar6 = (CServerInterface *)CUser::GetGameServer(param_2);
          uVar1 = CServerInterface::GetGroupNo(pCVar6);
          CGuild::DBGuildMemberSave(local_20,param_2,uVar1,pCVar5,'\x01');
        }
        uVar7 = CUser::GetUniqCharNo(param_2);
        cVar2 = CGuild::DeleteGuildMember(local_20,uVar7,param_2);
        if (cVar2 == '\x01') {
          CUser::GetUniqCharNo(param_2);
          CGuild::InsertGuildMemberChanglableInfo((uint)local_20);
          cVar2 = _ZN13CGuildManager12IsEmptyGuildEj((uint)this);
          if (cVar2 == '\0') {
            CGuild::NoticeGuildMemberLogin_Out(local_20,param_2,'\0');
          }
          else {
            iVar4 = CUser::GetGameServer(param_2);
            if (iVar4 != 0) {
              pCVar5 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
              pCVar6 = (CServerInterface *)CUser::GetGameServer(param_2);
              uVar1 = CServerInterface::GetGroupNo(pCVar6);
              CGuild::DBGuildSave(local_20,uVar1,pCVar5,0);
            }
            _ZN13CGuildManager11DeleteGuildEj(this,param_1);
          }
        }
      }
      return;
    }
    std::allocator<char>::allocator();
                    /* try { // try from 08095b44 to 08095b48 has its CatchHandler @ 08095bbe */
    std::string::string(local_28,"CGuildManager::GuildMemLogout()\t0 == dwGuildKey\n",&local_21);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08095b63 to 08095b67 has its CatchHandler @ 08095b6a */
    CDNFException::CDNFException(pCVar3,local_28);
                    /* try { // try from 08095ba9 to 08095bad has its CatchHandler @ 08095bb0 */
    std::string::~string(local_28);
    std::allocator<char>::~allocator((allocator<char> *)&local_21);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08095a5e to 08095a62 has its CatchHandler @ 08095ad8 */
  std::string::string(local_30,"CGuildManager::GuildMemLogout()\t0 == pclUser || 0 == m_pclApp\n",
                      &local_29);
  pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08095a7d to 08095a81 has its CatchHandler @ 08095a84 */
  CDNFException::CDNFException(pCVar3,local_30);
                    /* try { // try from 08095ac3 to 08095ac7 has its CatchHandler @ 08095aca */
  std::string::~string(local_30);
  std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 343 行）：

```cpp
void CGuildManager::GuildMemLogout(unsigned int guildKey, CUser* user)
{
    if (user == 0 || m_app == 0)
    {
        throw CDNFException(
            "CGuildManager::GuildMemLogout()\t0 == pclUser || 0 == m_pclApp\n");
    }
    if (guildKey == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogout()\t0 == dwGuildKey\n");
    }
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        if (user->GetGameServer() != 0)
        {
            guild->DBGuildMemberSave(user, user->GetGameServer()->GetGroupNo(),
                                     m_app->Get_ServerHandler(), 1);
        }
        if (guild->DeleteGuildMember(user->GetUniqCharNo(), user) == 1)
        {
            guild->InsertGuildMemberChanglableInfo(user->GetUniqCharNo());
            if (IsEmptyGuild(guildKey) == 0)
            {
                guild->NoticeGuildMemberLogin_Out(user, 0);
            }
            else
            {
                if (user->GetGameServer() != 0)
                {
                    guild->DBGuildSave(user->GetGameServer()->GetGroupNo(),
                                       m_app->Get_ServerHandler(), 0);
                }
                DeleteGuild(guildKey);
            }
        }
    }
}
```
