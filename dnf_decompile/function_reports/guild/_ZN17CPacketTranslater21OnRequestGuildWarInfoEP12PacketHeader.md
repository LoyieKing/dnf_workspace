# _ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader

`CPacketTranslater::OnRequestGuildWarInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8076700` | `0x27a` | `0x806cd2e` | `0x1b3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,174 +1,129 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x3c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xdf>
-lea    -0x41(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xf2>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnRequestGuildWarInfo : 0 == m_pclApp",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
+lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x8d>
-mov    %edx,%esi
-mov    %eax,%edi
+jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x95>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x48(%ebp),%eax
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x87>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xa4>
+jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x8f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xa4>
-lea    -0x48(%ebp),%eax
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xb4>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xbc>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xa4>
+jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xcf>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x41(%ebp),%eax
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x19c>
-lea    -0x41(%ebp),%eax
+mov    %esi,%ecx
+mov    %ebx,%eax
+mov    %ecx,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11GetGuildWarEv>
 mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x168>
+je     <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x17c>
 mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%ebx
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x78d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[USER] CPacketTranslater::OnRequestGuildWarInfo : pclUser == 0!\tchar id(%d)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x272>
+jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x1ab>
 mov    -0x20(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info>
+movl   $0x15c,0x8(%esp)
 mov    -0x20(%ebp),%eax
-movl   $0x15c,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x272>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x218>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x796,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnRequestGuildWarInfo Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x211>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x272>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x79b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnRequestGuildWarInfo Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader+0x26d>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x4c,%esp
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestGuildWarInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *this;
  string local_4c [7];
  allocator local_45;
  CMyFileLog local_44 [24];
  CUser *local_2c;
  CGuildWar *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08076736 to 0807673a has its CatchHandler @ 080767a4 */
    std::string::string(local_4c,"CPacketTranslater::OnRequestGuildWarInfo : 0 == m_pclApp",
                        &local_45);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08076755 to 08076759 has its CatchHandler @ 0807675c */
    CDNFException::CDNFException(this,local_4c);
                    /* try { // try from 08076793 to 08076797 has its CatchHandler @ 0807679a */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080767da to 08076896 has its CatchHandler @ 0807689c */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = (CGuildWar *)CGuildManager::GetGuildWar((CGuildManager *)(m_pclApp + 0x290));
  local_24 = param_1;
  local_2c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  if (local_2c == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_24 + 0xe);
    CMyFileLog::CMyFileLog(local_44,"OnRequestGuildWarInfo",0x78d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/Except",
               "[USER] CPacketTranslater::OnRequestGuildWarInfo : pclUser == 0!\tchar id(%d)",uVar1)
    ;
  }
  else {
    CGuildWar::GetGuildWarInfo(local_28,(ST_Guild_War_Rank_Info *)(local_24 + 0x12));
    CUser::SendToGameserver(local_2c,(char *)local_24,0x15c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1423 行）：

```cpp
void CPacketTranslater::OnRequestGuildWarInfo(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildWarInfo : 0 == m_pclApp");
    CGuildWar* war = (&m_pclApp->m_guildManager)->GetGuildWar();
    char* pb = (char*)pkt;
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xe))) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x78d,"./log/Except",
            "[USER] CPacketTranslater::OnRequestGuildWarInfo : pclUser == 0!\tchar id(%d)",
            *(unsigned int*)(pb + 0xe));
    }
    else
    {
        war->GetGuildWarInfo((ST_Guild_War_Rank_Info*)(pb + 0x12));
        user->SendToGameserver((char*)pb, 0x15c);
    }
}
```
