# _ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader

`CPacketTranslater::OnReplyUserInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8057fb4` | `0x3c0` | `0x8053a26` | `0x3c1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,272 +1,273 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0xc(%eax),%eax
-movzbl %al,%esi
-mov    -0x28(%ebp),%eax
-movzbl 0xd(%eax),%eax
-movzbl %al,%ebx
+sub    $0x7c,%esp
+mov    0x8(%ebp),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
+mov    %al,-0x32(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xd,%eax
+movzbl (%eax),%eax
+mov    %al,-0x31(%ebp)
 movl   $0x102,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl -0x32(%ebp),%edx
+movzbl -0x31(%ebp),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"[GAME SERVER] Group(%d) Channel(%d)",0x8(%esp)
 movl   $"./log/Reboot",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x21c>
-mov    -0x28(%ebp),%eax
-movzbl 0xc(%eax),%eax
-movzbl %al,%ecx
-mov    -0x28(%ebp),%eax
-movzbl 0xd(%eax),%eax
-movzbl %al,%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication14FindGameServerEii>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x172>
-lea    -0x45(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x13d>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnReplyUserInfo : pclGameServer == 0",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x39(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnReplyUserInfo : m_pclApp == 0",0x4(%esp)
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x120>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0xeb>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0xe5>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x102>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x102>
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x11a>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x137>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x137>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
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
-lea    -0x45(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x102>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2e3>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+movzbl -0x32(%ebp),%ecx
+movzbl -0x31(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x63c,%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUserC1Ev>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1de>
-mov    -0x20(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax,%edx,4),%eax
-lea    -0x58(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager8FindUserEjR5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1da>
-mov    -0x20(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax,%edx,4),%eax
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager10CreateUserEjP11CGameServer>
-addl   $0x1,-0x20(%ebp)
-mov    -0x28(%ebp),%eax
-movzwl 0xa(%eax),%eax
-movzwl %ax,%eax
-cmp    -0x20(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x193>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x20c>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUserD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2e2>
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUserD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b8>
-lea    -0x3d(%ebp),%eax
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication14FindGameServerEii>
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x230>
+lea    -0x33(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnReplyUserInfo : m_pclApp == 0",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x33(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnReplyUserInfo : pclGameServer == 0",0x4(%esp)
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x293>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1de>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x28d>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2aa>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2aa>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
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
-lea    -0x3d(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1d8>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1f5>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1f5>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x20d>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1f5>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x33(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2e3>
+lea    -0x33(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x63c,%eax
+mov    %eax,-0x2c(%ebp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUserC1Ev>
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+movzwl (%eax),%eax
+mov    %ax,-0x26(%ebp)
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2ae>
+mov    0x8(%ebp),%eax
+mov    -0x24(%ebp),%edx
+shl    $0x2,%edx
+add    $0xe,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager8FindUserEjR5CUser>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2aa>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager10CreateUserEjP11CGameServer>
+addl   $0x1,-0x24(%ebp)
+movzwl -0x26(%ebp),%eax
+cmp    -0x24(%ebp),%eax
+setg   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x25e>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2d3>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUserD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x2e3>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUserD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b9>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x35e>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x35f>
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
-lea    -0x3c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x357>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x358>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b8>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b9>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x120,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyUserInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b3>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3b4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x6c,%esp
+add    $0x7c,%esp
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

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp](source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp)（约第 159 行）：

```cpp
void CPacketTranslater::OnReplyUserInfo(PacketHeader* pkt)
{
    unsigned char channel = *(unsigned char*)((char*)pkt + 0xc);
    unsigned char group = *(unsigned char*)((char*)pkt + 0xd);
    DNF_LOG_SCOPE_LINE(0x102, "./log/Reboot", "[GAME SERVER] Group(%d) Channel(%d)", group, channel);
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnReplyUserInfo : m_pclApp == 0");
        }
        CGameServer* gs = m_pclApp->FindGameServer(group, channel);
        if (gs == 0)
        {
            throw CDNFException("CPacketTranslater::OnReplyUserInfo : pclGameServer == 0");
        }
        CUserManager* um = &m_pclApp->m_userManager;
        CUser user;
        unsigned short count = *(unsigned short*)((char*)pkt + 0xa);
        for (int i = 0; i < count; i++)
        {
            unsigned int user_id = *(unsigned int*)((char*)pkt + 0xe + i * 4);
            if (!um->FindUser(user_id, user))
            {
                um->CreateUser(user_id, gs);
            }
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
