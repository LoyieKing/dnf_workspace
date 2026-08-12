# _ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader

`CPacketTranslater::OnDBReplyGuildAllMembers(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80776e4` | `0x4e6` | `0x806db64` | `0x4e7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,363 +1,361 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x7c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0xef>
-lea    -0x51(%ebp),%eax
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x51(%ebp),%eax
+lea    -0x45(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildAllMembers : 0 == m_pclApp",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x58(%ebp),%esi
+lea    -0x4c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x95>
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
-lea    -0x58(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0xb4>
-lea    -0x58(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x51(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x3ce>
-lea    -0x51(%ebp),%eax
+lea    -0x45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x3d1>
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1dc>
-lea    -0x49(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1e3>
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x49(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildAllMembers : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x50(%ebp),%esi
+lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x182>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x189>
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
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x17c>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1a1>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1a1>
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1b9>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1a1>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x3ce>
-lea    -0x49(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x183>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1a8>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1a8>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1c0>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x1a8>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x3d1>
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x2f4>
-mov    -0x20(%ebp),%eax
-movzbl 0x13(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x2e3>
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x35(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnDBReplyGuildAllMembers : 0 == pclGuild ,the guild is out",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x3c(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x289>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x283>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x2a8>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x2a8>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x2c0>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x2a8>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x3d1>
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+mov    -0x2c(%ebp),%eax
+add    $0x13,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
+mov    -0x2c(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
-mov    -0x20(%ebp),%ecx
+mov    -0x2c(%ebp),%ecx
 add    $0x14,%ecx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh>
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
+movl   $0x0,-0x20(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
 cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x273>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4df>
+mov    -0x2c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x273>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x278>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4de>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4df>
 movl   $0x10,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild14SetGuildDBFlagEt>
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    -0x2c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x87b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"OnDBReplyGuildAllMembers gKey(%d), cKey(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4de>
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnDBReplyGuildAllMembers : 0 == pclGuild ,the guild is out",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x373>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x36d>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x392>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x392>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x3a7>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x392>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x3ce>
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4df>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x474>
+jne    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x475>
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
 movl   $"CPacketTranslater::OnCallGuildMembers() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x886,0x8(%esp)
+movl   $"OnDBReplyGuildAllMembers",0x4(%esp)
+lea    -0x54(%ebp),%eax
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
-movl   $0x886,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildAllMembers() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x46d>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x46e>
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
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4de>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4df>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCallGuildMembers() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x88c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBReplyGuildAllMembers() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4d9>
+jmp    <T> <_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader+0x4da>
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

/* CPacketTranslater::OnDBReplyGuildAllMembers(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  CDNFException *pCVar4;
  string local_5c [7];
  allocator local_55;
  string local_54 [7];
  allocator local_4d;
  CMyFileLog local_4c [8];
  string local_44 [7];
  allocator local_3d [17];
  CUser *local_2c;
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807771a to 0807771e has its CatchHandler @ 08077794 */
    std::string::string(local_5c,"CPacketTranslater::OnDBReplyGuildAllMembers : 0 == m_pclApp",
                        &local_55);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08077739 to 0807773d has its CatchHandler @ 08077740 */
    CDNFException::CDNFException(pCVar4,local_5c);
                    /* try { // try from 0807777f to 08077783 has its CatchHandler @ 08077786 */
    std::string::~string(local_5c);
    std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080777ce to 080777d2 has its CatchHandler @ 08077aae */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if (*(int *)(param_1 + 10) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08077807 to 0807780b has its CatchHandler @ 08077881 */
    std::string::string(local_54,
                        "CPacketTranslater::OnDBReplyGuildAllMembers : packet->m_uGuildKey == 0",
                        &local_4d);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08077826 to 0807782a has its CatchHandler @ 0807782d */
    CDNFException::CDNFException(pCVar4,local_54);
                    /* try { // try from 0807786c to 08077870 has its CatchHandler @ 08077873 */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080778bb to 080779d2 has its CatchHandler @ 08077aae */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_28 == (CGuild *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080779f8 to 080779fc has its CatchHandler @ 08077a72 */
    std::string::string(local_44,
                        "CPacketTranslater::OnDBReplyGuildAllMembers : 0 == pclGuild ,the guild is out"
                        ,local_3d);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08077a17 to 08077a1b has its CatchHandler @ 08077a1e */
    CDNFException::CDNFException(pCVar4,local_44);
                    /* try { // try from 08077a5d to 08077a61 has its CatchHandler @ 08077a64 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08077aa9 to 08077aad has its CatchHandler @ 08077aae */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  CGuild::LoadGuildAllMembersProxy
            (local_28,(STGuildMemberProxy *)(local_24 + 0x14),(uchar)local_24[0x12],
             (uchar)local_24[0x13]);
  if (local_24[0x12] == (PacketHeader)0x2) {
    local_2c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (local_2c != (CUser *)0x0) {
      bVar3 = true;
      goto LAB_0807795c;
    }
  }
  bVar3 = false;
LAB_0807795c:
  if (bVar3) {
    CGuild::SetGuildDBFlag(local_28,0x10);
    CGuild::ReplyGuildAllMembers(local_28,local_2c);
    uVar1 = *(undefined4 *)(local_24 + 0xe);
    uVar2 = *(undefined4 *)(local_24 + 10);
    CMyFileLog::CMyFileLog(local_4c,"OnDBReplyGuildAllMembers",0x87b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_4c,"./log/GuildModify","OnDBReplyGuildAllMembers gKey(%d), cKey(%d)",uVar2,
               uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1551 行）：

```cpp
void CPacketTranslater::OnDBReplyGuildAllMembers(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDBReplyGuildAllMembers : 0 == m_pclApp");
        char* pb = (char*)pkt;
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        if (guildKey == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnDBReplyGuildAllMembers : packet->m_uGuildKey == 0");
        }
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guild == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnDBReplyGuildAllMembers : 0 == pclGuild ,the guild is out");
        }
        guild->LoadGuildAllMembersProxy((STGuildMemberProxy*)(pb + 0x14),
                                        (unsigned char)pb[0x12], (unsigned char)pb[0x13]);
        CUser* user = 0;
        if ((unsigned char)pb[0x12] == 2)
        {
            user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
            if (user != 0)
            {
                guild->SetGuildDBFlag(0x10);
                guild->ReplyGuildAllMembers(user);
                DNF_LOG_SCOPE_LINE(0x87b,"./log/GuildModify", "OnDBReplyGuildAllMembers gKey(%d), cKey(%d)", guildKey,
                    *(unsigned int*)(pb + 0xe));
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnCallGuildMembers() Exception Break : %s\n", e.what());
        CMyFileLog log("OnDBReplyGuildAllMembers", 0x886);
        log("./log/Except",
            "CPacketTranslater::OnDBReplyGuildAllMembers() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnCallGuildMembers() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x88c);
        log("./log/Except", "CPacketTranslater::OnDBReplyGuildAllMembers() Exception Break\n");
    }
}
```
