# _ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader

`CPacketTranslater::OnReplyUserInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8057fb4` | `0x3c0` | `0x8053a36` | `0x3bb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,272 +1,270 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 mov    -0x28(%ebp),%eax
 movzbl 0xc(%eax),%eax
 movzbl %al,%esi
 mov    -0x28(%ebp),%eax
 movzbl 0xd(%eax),%eax
 movzbl %al,%ebx
 movl   $0x102,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[GAME SERVER] Group(%d) Channel(%d)",0x8(%esp)
 movl   $"./log/Reboot",0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x21c>
+je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x217>
 mov    -0x28(%ebp),%eax
 movzbl 0xc(%eax),%eax
 movzbl %al,%ecx
 mov    -0x28(%ebp),%eax
 movzbl 0xd(%eax),%eax
 movzbl %al,%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14FindGameServerEii>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x172>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x16d>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x45(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnReplyUserInfo : pclGameServer == 0",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x4c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x120>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x11b>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x11a>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x137>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x137>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x115>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x132>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x132>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x14f>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x137>
-call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x14a>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x132>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2dd>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x63c,%eax
 mov    %eax,-0x24(%ebp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserC1Ev>
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1de>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1d9>
 mov    -0x20(%ebp),%edx
 mov    -0x28(%ebp),%eax
 mov    0xe(%eax,%edx,4),%eax
 lea    -0x58(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager8FindUserEjR5CUser>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1da>
+je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1d5>
 mov    -0x20(%ebp),%edx
 mov    -0x28(%ebp),%eax
 mov    0xe(%eax,%edx,4),%eax
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager10CreateUserEjP11CGameServer>
 addl   $0x1,-0x20(%ebp)
 mov    -0x28(%ebp),%eax
 movzwl 0xa(%eax),%eax
 movzwl %ax,%eax
 cmp    -0x20(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x193>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x20c>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x18e>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x207>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2dd>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b8>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b3>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnReplyUserInfo : m_pclApp == 0",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x293>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x28e>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x28d>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2aa>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2aa>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x288>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2a5>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2a5>
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2bf>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2aa>
-call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2ba>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2a5>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2dd>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x35e>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x359>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x11b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x357>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x352>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b8>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x120,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyUserInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b3>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3ae>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnReplyUserInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  char cVar3;
  CDNFException *pCVar4;
  CUser local_5c [4];
  CMyFileLog local_58 [8];
  string local_50 [7];
  allocator local_49;
  string local_48 [7];
  allocator local_41 [17];
  CGameServer *local_30;
  PacketHeader *local_2c;
  CApplication *local_28;
  int local_24;
  
  local_2c = param_1;
  PVar1 = param_1[0xc];
  PVar2 = param_1[0xd];
                    /* try { // try from 08057fed to 0805804a has its CatchHandler @ 08058296 */
  CMyFileLog::CMyFileLog(local_58,"OnReplyUserInfo",0x102);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_58,"./log/Reboot","[GAME SERVER] Group(%d) Channel(%d)",(uint)(byte)PVar2,
             (uint)(byte)PVar1);
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080581f0 to 080581f4 has its CatchHandler @ 0805825e */
    std::string::string(local_48,"CPacketTranslater::OnReplyUserInfo : m_pclApp == 0",local_41);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805820f to 08058213 has its CatchHandler @ 08058216 */
    CDNFException::CDNFException(pCVar4,local_48);
                    /* try { // try from 0805824d to 08058251 has its CatchHandler @ 08058254 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08058291 to 08058295 has its CatchHandler @ 08058296 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_30 = (CGameServer *)
             CApplication::FindGameServer
                       (m_pclApp,(uint)(byte)local_2c[0xd],(uint)(byte)local_2c[0xc]);
  if (local_30 == (CGameServer *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0805807d to 08058081 has its CatchHandler @ 080580eb */
    std::string::string(local_50,"CPacketTranslater::OnReplyUserInfo : pclGameServer == 0",&local_49
                       );
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805809c to 080580a0 has its CatchHandler @ 080580a3 */
    CDNFException::CDNFException(pCVar4,local_50);
                    /* try { // try from 080580da to 080580de has its CatchHandler @ 080580e1 */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08058121 to 0805813d has its CatchHandler @ 08058296 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = m_pclApp + 0x63c;
  CUser::CUser(local_5c);
  for (local_24 = 0; local_24 < (int)(uint)*(ushort *)(local_2c + 10); local_24 = local_24 + 1) {
                    /* try { // try from 08058162 to 0805818d has its CatchHandler @ 080581a8 */
    cVar3 = CUserManager::_ZN12CUserManager8FindUserEjR5CUser
                      ((CUserManager *)local_28,*(uint *)(local_2c + local_24 * 4 + 0xe),local_5c);
    if (cVar3 != '\x01') {
      CUserManager::_ZN12CUserManager10CreateUserEjP11CGameServer
                ((CUserManager *)local_28,*(uint *)(local_2c + local_24 * 4 + 0xe),local_30);
    }
  }
                    /* try { // try from 080581c6 to 080581ca has its CatchHandler @ 08058296 */
  CUser::~CUser(local_5c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp](source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp)（约第 205 行）：

```cpp
void CPacketTranslater::OnReplyUserInfo(PacketHeader* pkt)
{
    CGameServer* gs;
    Packet_ReplyUserInfo* p = (Packet_ReplyUserInfo*)pkt;
    register int channel = p->m_channel;
    register int group = p->m_group;
    DNF_LOG_SCOPE_LINE(0x102, "./log/Reboot", "[GAME SERVER] Group(%d) Channel(%d)", group, channel);
    try
    {
        if (m_pclApp != 0)
        {
            gs = m_pclApp->FindGameServer(p->m_group, p->m_channel);
            if (gs == 0)
            {
                throw CDNFException("CPacketTranslater::OnReplyUserInfo : pclGameServer == 0");
            }
            else
            {
                CUserManager* um = &m_pclApp->m_userManager;
                CUser user;
                for (int i = 0; i < p->m_count; i++)
                {
                    if (!um->FindUser(p->m_userIDs[i], user))
                    {
                        um->CreateUser(p->m_userIDs[i], gs);
                    }
                }
            }
        }
        else
        {
            throw CDNFException("CPacketTranslater::OnReplyUserInfo : m_pclApp == 0");
        }
    }
    catch (CDNFException& e)
    {
        register const char* s = e.what();
        DNF_LOG_SCOPE_LINE(0x11b,"./log/Except", "CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n",
            s);
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x120, "./log/Except", "CPacketTranslater::OnReplyUserInfo() Exception Break\n");
    }
}
```
