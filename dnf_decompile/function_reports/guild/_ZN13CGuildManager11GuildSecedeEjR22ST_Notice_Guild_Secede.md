# _ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede

`CGuildManager::GuildSecede(unsigned int, ST_Notice_Guild_Secede&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809633e` | `0x33b` | `0x805c0be` | `0x33e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,242 +1,243 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0xf2>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildSecede()\t0 == m_pclApp\n",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x95>
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
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0xb4>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x1d8>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildSecede()\t0 == dwGuildKey\n",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x17b>
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
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x175>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x19a>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x19a>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x1b5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x19a>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x20(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x2c7>
+je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x2ca>
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x279>
+je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x27c>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17DeleteGuildMemberEjP5CUser>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x251>
+je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x254>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x333>
+jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x336>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21SendSetGuildKeyToUserEjj>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser10ResetGuildEv>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17SecedeProxyMemberER22ST_Notice_Guild_Secede>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 test   %al,%al
-je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x330>
+je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x333>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%eax
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
-jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x330>
+jmp    <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x333>
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x330>
+je     <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede+0x333>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%esi
 mov    0x10(%ebp),%eax
 mov    0x4(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x2a1,0x8(%esp)
 movl   $&_ZZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_SecedeE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"GUILD : CGuildManager::GuildSecede() pclGuild == NULL But pclUser != NULL( Guild Key : %d, Acc Id : %s, Char Id : %d )\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x1c(%ebp),%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GuildSecede(unsigned int, ST_Notice_Guild_Secede&) */

CGuild * __thiscall
CGuildManager::_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede
          (CGuildManager *this,uint param_1,ST_Notice_Guild_Secede *param_2)

{
  undefined4 uVar1;
  char cVar2;
  CDNFException *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  string local_3c [7];
  allocator local_35;
  string local_34 [7];
  allocator local_2d;
  CMyFileLog local_2c [8];
  CUser *local_24;
  CGuild *local_20;
  
  if (*(int *)this == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08096374 to 08096378 has its CatchHandler @ 080963ee */
    std::string::string(local_3c,"CGuildManager::GuildSecede()\t0 == m_pclApp\n",&local_35);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08096393 to 08096397 has its CatchHandler @ 0809639a */
    CDNFException::CDNFException(pCVar3,local_3c);
                    /* try { // try from 080963d9 to 080963dd has its CatchHandler @ 080963e0 */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)&local_35);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  if (param_1 != 0) {
    uVar4 = CApplication::Get_UserManager(*(CApplication **)this);
    local_24 = (CUser *)CUserManager::FindUser_CharNo(uVar4);
    local_20 = (CGuild *)FindGuild((uint)this);
    if (local_20 == (CGuild *)0x0) {
      if (local_24 != (CUser *)0x0) {
        uVar1 = *(undefined4 *)(param_2 + 8);
        uVar5 = NumberToString(*(uint *)(param_2 + 4),0);
        CMyFileLog::CMyFileLog(local_2c,"GuildSecede",0x2a1);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_2c,"./log/Except",
                   "GUILD : CGuildManager::GuildSecede() pclGuild == NULL But pclUser != NULL( Guild Key : %d, Acc Id : %s, Char Id : %d )\n"
                   ,param_1,uVar5,uVar1);
      }
    }
    else {
      if (local_24 != (CUser *)0x0) {
        uVar4 = CUser::GetUniqCharNo(local_24);
        cVar2 = CGuild::DeleteGuildMember(local_20,uVar4,local_24);
        if (cVar2 != '\x01') {
          return (CGuild *)0x0;
        }
        CUser::SendSetGuildKeyToUser(local_24,0,*(uint *)(param_2 + 8));
        CUser::ResetGuild(local_24);
      }
      CGuild::SecedeProxyMember(local_20,param_2);
      cVar2 = CGuild::IsSubGuildMaster(local_20,*(uint *)(param_2 + 8));
      if (cVar2 != '\0') {
        CGuild::SetSubGuildMaster(local_20,*(uint *)(param_2 + 8),false);
      }
    }
    return local_20;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0809645a to 0809645e has its CatchHandler @ 080964d4 */
  std::string::string(local_34,"CGuildManager::GuildSecede()\t0 == dwGuildKey\n",&local_2d);
  pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08096479 to 0809647d has its CatchHandler @ 08096480 */
  CDNFException::CDNFException(pCVar3,local_34);
                    /* try { // try from 080964bf to 080964c3 has its CatchHandler @ 080964c6 */
  std::string::~string(local_34);
  std::allocator<char>::~allocator((allocator<char> *)&local_2d);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 468 行）：

```cpp
CGuild* CGuildManager::GuildSecede(unsigned int guildKey, ST_Notice_Guild_Secede& info)
{
    if (m_app == 0)
    {
        throw CDNFException("CGuildManager::GuildSecede()\t0 == m_pclApp\n");
    }
    if (guildKey == 0)
    {
        throw CDNFException("CGuildManager::GuildSecede()\t0 == dwGuildKey\n");
    }
    CUser* user = m_app->Get_UserManager()->FindUser_CharNo(((ST_Notice_Guild_Secede_Layout*)&info)->m8);
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        if (user != 0)
        {
            if (guild->DeleteGuildMember(user->GetUniqCharNo(), user) != 1)
            {
                return 0;
            }
            user->SendSetGuildKeyToUser(0, ((ST_Notice_Guild_Secede_Layout*)&info)->m8);
            user->ResetGuild();
        }
        guild->SecedeProxyMember(info);
        if (guild->IsSubGuildMaster(((ST_Notice_Guild_Secede_Layout*)&info)->m8) != 0)
        {
            guild->SetSubGuildMaster(((ST_Notice_Guild_Secede_Layout*)&info)->m8, false);
        }
    }
    else if (user != 0)
    {
        register unsigned int charId = ((ST_Notice_Guild_Secede_Layout*)&info)->m8;
        register char* accId = NumberToString(((ST_Notice_Guild_Secede_Layout*)&info)->m4, 0);
        DNF_LOG_SCOPE_LINE(0x2a1,"./log/Except",
            "GUILD : CGuildManager::GuildSecede() pclGuild == NULL But pclUser != NULL( Guild Key : %d, Acc Id : %s, Char Id : %d )\n",
            guildKey, accId, charId);
    }
    return guild;
}
```
