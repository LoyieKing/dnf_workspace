# _ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader

`CPacketTranslater::OnReplyUserInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8071c7a` | `0x554` | `0x8068208` | `0x563` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,387 +1,391 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x7c,%esp
+sub    $0x8c,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x30(%ebp),%eax
-movzbl 0xb(%eax),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x44(%ebp),%eax
+add    $0xb,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
 movl   $0x150,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[GAME SERVER] Channel No : %d\n",0x8(%esp)
 movl   $"./log/Reboot",0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x35f>
-mov    -0x30(%ebp),%eax
-movzbl 0xb(%eax),%eax
-movzbl %al,%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication14FindGameServerEi>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x166>
-lea    -0x59(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x13e>
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x59(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnReplyUserInfo : pclGameServer == 0",0x4(%esp)
-lea    -0x60(%ebp),%eax
+movl   $"CPacketTranslater::OnReplyUserInfo : m_pclApp == 0",0x4(%esp)
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x60(%ebp),%esi
+lea    -0x5c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x10c>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0xe4>
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
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x106>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0xde>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x12b>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x103>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x12b>
-lea    -0x60(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x103>
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x143>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x11b>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x12b>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x103>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x59(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x439>
-lea    -0x59(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x44a>
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x30(%ebp),%eax
-mov    0x6(%eax),%edx
+mov    -0x44(%ebp),%eax
+add    $0xb,%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17FindTcpGameServerEj>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
+call   <T> <_ZN12CApplication14FindGameServerEi>
+mov    %eax,-0x40(%ebp)
+cmpl   $0x0,-0x40(%ebp)
 sete   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x54b>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x2c(%ebp)
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x342>
-mov    -0x24(%ebp),%edx
-mov    -0x30(%ebp),%eax
-imul   $0x4e,%edx,%edx
-mov    0xc(%edx,%eax,1),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x22e>
-mov    -0x24(%ebp),%edx
-mov    -0x30(%ebp),%eax
-imul   $0x4e,%edx,%edx
-mov    0xc(%edx,%eax,1),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x166,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnReplyUserInfo() : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x33e>
-mov    -0x24(%ebp),%eax
-imul   $0x4e,%eax,%eax
-add    -0x30(%ebp),%eax
-add    $0xc,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x8(%eax),%ecx
-mov    -0x20(%ebp),%eax
-lea    0x14(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0x4(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-mov    -0x38(%ebp),%ebx
-mov    %ebx,0x14(%esp)
-mov    %ecx,0x10(%esp)
-mov    %esi,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer>
-mov    %eax,-0x28(%ebp)
-mov    -0x20(%ebp),%eax
-lea    0x14(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0x4(%eax),%ebx
-mov    -0x20(%ebp),%eax
-movzwl 0x12(%eax),%eax
-movswl %ax,%ecx
-mov    -0x20(%ebp),%eax
-movzbl 0x11(%eax),%eax
-movsbl %al,%edx
-mov    -0x20(%ebp),%eax
-movzbl 0x10(%eax),%eax
-movsbl %al,%eax
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %ecx,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser18SetUserInfo_CharNoEccsjPc>
-mov    -0x20(%ebp),%eax
-movzbl 0x46(%eax),%eax
-movzbl %al,%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6SetSexEh>
-mov    -0x20(%ebp),%eax
-add    $0x47,%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6SetSsnEPc>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SetTcpGameServerEP14CTcpGameServer>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj>
-mov    -0x20(%ebp),%eax
-mov    0xc(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x33e>
-mov    -0x20(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-lea    0x290(%edx),%ecx
-mov    -0x28(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser>
-addl   $0x1,-0x24(%ebp)
-mov    -0x30(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
-cmp    -0x24(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1a6>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x54c>
-lea    -0x49(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x246>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x49(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnReplyUserInfo : m_pclApp == 0",0x4(%esp)
-lea    -0x50(%ebp),%eax
+movl   $"CPacketTranslater::OnReplyUserInfo : pclGameServer == 0",0x4(%esp)
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x50(%ebp),%esi
+lea    -0x54(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3de>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1ec>
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
-lea    -0x50(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3d8>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x1e6>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3fd>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x20b>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3fd>
-lea    -0x50(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x20b>
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x412>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x223>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3fd>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x20b>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x49(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x439>
-lea    -0x49(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x44a>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    -0x44(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17FindTcpGameServerEj>
+mov    %eax,-0x3c(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x558>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x44(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x430>
+mov    -0x30(%ebp),%eax
+imul   $0x4e,%eax,%eax
+add    $0xc,%eax
+add    -0x44(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager8FindUserEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x3d9>
+mov    -0x2c(%ebp),%eax
+add    $0x8,%eax
+mov    (%eax),%edx
+mov    -0x2c(%ebp),%eax
+lea    0x14(%eax),%ebx
+mov    -0x2c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    -0x40(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %ebx,0xc(%esp)
+mov    %eax,0x8(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer>
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
+lea    0x14(%eax),%esi
+mov    -0x2c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%ebx
+mov    -0x2c(%ebp),%eax
+add    $0x12,%eax
+movzwl (%eax),%eax
+movswl %ax,%ecx
+mov    -0x2c(%ebp),%eax
+add    $0x11,%eax
+movzbl (%eax),%eax
+movsbl %al,%edx
+mov    -0x2c(%ebp),%eax
+add    $0x10,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %ecx,0xc(%esp)
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser18SetUserInfo_CharNoEccsjPc>
+mov    -0x2c(%ebp),%eax
+add    $0x46,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6SetSexEh>
+mov    -0x2c(%ebp),%eax
+add    $0x47,%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6SetSsnEPc>
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SetTcpGameServerEP14CTcpGameServer>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj>
+mov    -0x2c(%ebp),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x42c>
+mov    -0x2c(%ebp),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x290(%edx),%ecx
+mov    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x42c>
+movl   $0x0,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x20(%ebp)
+movl   $0x166,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnReplyUserInfo() : %s\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+addl   $0x1,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+cmp    -0x34(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x292>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x558>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x4df>
+jne    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x4ee>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x187,0x8(%esp)
+movl   $"OnReplyUserInfo",0x4(%esp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x187,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x4d8>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x4e7>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x54c>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x558>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnReplyUserInfo() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x18d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyUserInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x544>
+jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x553>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader+0x54c>
-nop
-add    $0x7c,%esp
+add    $0x8c,%esp
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
  CDNFException *pCVar2;
  undefined4 uVar3;
  CMyFileLog local_6c [8];
  string local_64 [7];
  allocator local_5d;
  CMyFileLog local_5c [8];
  string local_54 [7];
  allocator local_4d [17];
  CGameServer *local_3c;
  CTcpGameServer *local_38;
  PacketHeader *local_34;
  CUserManager *local_30;
  CUser *local_2c;
  int local_28;
  PacketHeader *local_24;
  
  local_34 = param_1;
  PVar1 = param_1[0xb];
                    /* try { // try from 08071ca9 to 08071cf4 has its CatchHandler @ 080720af */
  CMyFileLog::CMyFileLog(local_6c,"OnReplyUserInfo",0x150);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_6c,"./log/Reboot","[GAME SERVER] Channel No : %d\n",(uint)(byte)PVar1);
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08071ff9 to 08071ffd has its CatchHandler @ 08072073 */
    std::string::string(local_54,"CPacketTranslater::OnReplyUserInfo : m_pclApp == 0",local_4d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08072018 to 0807201c has its CatchHandler @ 0807201f */
    CDNFException::CDNFException(pCVar2,local_54);
                    /* try { // try from 0807205e to 08072062 has its CatchHandler @ 08072065 */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)local_4d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080720aa to 080720ae has its CatchHandler @ 080720af */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_3c = (CGameServer *)CApplication::FindGameServer(m_pclApp);
  if (local_3c != (CGameServer *)0x0) {
    local_38 = (CTcpGameServer *)CApplication::_ZN12CApplication17FindTcpGameServerEj(m_pclApp);
    if (local_38 != (CTcpGameServer *)0x0) {
      local_30 = (CUserManager *)(m_pclApp + 0x10);
      for (local_28 = 0; local_28 < (int)(uint)(byte)local_34[10]; local_28 = local_28 + 1) {
        local_2c = (CUser *)CUserManager::FindUser((uint)local_30);
        if (local_2c == (CUser *)0x0) {
          local_24 = local_34 + local_28 * 0x4e + 0xc;
          local_2c = (CUser *)CUserManager::_ZN12CUserManager10CreateUserEjjPciP11CGameServer
                                        (local_30,*(uint *)local_24,
                                         *(uint *)(local_34 + local_28 * 0x4e + 0x10),
                                         (char *)(local_34 + local_28 * 0x4e + 0x20),
                                         *(int *)(local_34 + local_28 * 0x4e + 0x14),local_3c);
          CUser::SetUserInfo_CharNo
                    (local_2c,(char)local_24[0x10],(char)local_24[0x11],*(short *)(local_24 + 0x12),
                     *(uint *)(local_24 + 4),(char *)(local_24 + 0x14));
          CUser::SetSex(local_2c,(uchar)local_24[0x46]);
          CUser::SetSsn(local_2c,(char *)(local_24 + 0x47));
          CUser::SetTcpGameServer(local_2c,local_38);
          RequestBlackListToDBMW(*(uint *)local_24);
          if (*(uint *)(local_24 + 0xc) != 0) {
            CGuildManager::_ZN13CGuildManager13GuildMemLoginEjP5CUser
                      ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_24 + 0xc),local_2c);
          }
        }
        else {
          uVar3 = NumberToString(*(uint *)(local_34 + local_28 * 0x4e + 0xc),0);
          CMyFileLog::CMyFileLog(local_5c,"OnReplyUserInfo",0x166);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_5c,"./log/Except","CPacketTranslater::OnReplyUserInfo() : %s\n",uVar3);
        }
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08071d27 to 08071d2b has its CatchHandler @ 08071da1 */
  std::string::string(local_64,"CPacketTranslater::OnReplyUserInfo : pclGameServer == 0",&local_5d);
  pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08071d46 to 08071d4a has its CatchHandler @ 08071d4d */
  CDNFException::CDNFException(pCVar2,local_64);
                    /* try { // try from 08071d8c to 08071d90 has its CatchHandler @ 08071d93 */
  std::string::~string(local_64);
  std::allocator<char>::~allocator((allocator<char> *)&local_5d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08071ddb to 08071fb7 has its CatchHandler @ 080720af */
  __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 415 行）：

```cpp
void CPacketTranslater::OnReplyUserInfo(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    {
        DNF_LOG_SCOPE_LINE(0x150,"./log/Reboot", "[GAME SERVER] Channel No : %d\n",
            (unsigned int)(unsigned char)pb[0xb]);
    }
    THROW_IF_NO_APP("CPacketTranslater::OnReplyUserInfo : m_pclApp == 0");
    CGameServer* gs;
    if ((gs = m_pclApp->FindGameServer((int)(unsigned char)pb[0xb])) == 0)
    {
        throw CDNFException("CPacketTranslater::OnReplyUserInfo : pclGameServer == 0");
    }
    CTcpGameServer* tgs = m_pclApp->FindTcpGameServer(*(unsigned int*)(pb + 6));
    if (tgs != 0)
    {
        CUserManager* um = &m_pclApp->m_userManager;
        int count = (int)(unsigned char)pb[10];
        for (int i = 0; i < count; i++)
        {
            char* rec = pb + i * 0x4e + 0xc;
            unsigned int dbid = *(unsigned int*)(rec + 0);
            CUser* user = um->FindUser(dbid);
            if (user == 0)
            {
                user = um->CreateUser(dbid, *(unsigned int*)(rec + 4), rec + 0x14,
                                      *(int*)(rec + 8), gs);
                user->SetUserInfo_CharNo((char)rec[0x10], (char)rec[0x11],
                                         *(short*)(rec + 0x12), *(unsigned int*)(rec + 4),
                                         rec + 0x14);
                user->SetSex((unsigned char)rec[0x46]);
                user->SetSsn(rec + 0x47);
                user->SetTcpGameServer(tgs);
                RequestBlackListToDBMW(dbid);
                if (*(unsigned int*)(rec + 0xc) != 0)
                {
                    (&m_pclApp->m_guildManager)->GuildMemLogin(*(unsigned int*)(rec + 0xc),
                                                                user);
                }
            }
            else
            {
                char* mid = NumberToString(dbid, 0);
                DNF_LOG_SCOPE_LINE(0x166, "./log/Except", "CPacketTranslater::OnReplyUserInfo() : %s\n", mid);
            }
        }
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n", e.what());
        CMyFileLog log("OnReplyUserInfo", 0x187);
        log("./log/Except", "CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnReplyUserInfo() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x18d);
        log("./log/Except", "CPacketTranslater::OnReplyUserInfo() Exception Break\n");
    }
}
```
