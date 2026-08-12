# _ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader

`CPacketTranslater::OnIncreaseGuildExp(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80743e8` | `0x589` | `0x806a9ae` | `0x566` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,398 +1,391 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x9c,%esp
+sub    $0x8c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0xf2>
-lea    -0x6d(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x6d(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnIncreaseGuildExp : 0 == m_pclApp",0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x74(%ebp),%esi
+lea    -0x5c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x98>
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
-lea    -0x74(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0xb7>
-lea    -0x74(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x6d(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x46e>
-lea    -0x6d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x44d>
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x394>
-mov    -0x3c(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x40(%ebp)
-cmpl   $0x0,-0x40(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x57e>
-mov    -0x3c(%ebp),%eax
-movzbl 0x17(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x80(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildExpEv>
-mov    %eax,%ebx
-mov    -0x3c(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x7c(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    0xe(%eax),%edi
-mov    -0x3c(%ebp),%eax
-mov    0xa(%eax),%esi
-movl   $0x453,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x80(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    -0x7c(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %esi,0xc(%esp)
-movl   $"GUILD EXP : char no(%d) guild key(%d), add exp(%d), guild exp(%d), book(%d)",0x8(%esp)
-movl   $"./log/Guild",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x290,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CGuildManager15GetMaxGuildExp1Ev>
-mov    %eax,-0x38(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x290,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CGuildManager15GetMaxGuildExp2Ev>
-mov    %eax,-0x34(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildExpEv>
-mov    %eax,-0x30(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    0x12(%eax),%eax
-add    -0x30(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildLevelEv>
-mov    %al,-0x26(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x290(%eax),%edx
-mov    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj>
-mov    %al,-0x25(%ebp)
-movzbl -0x26(%ebp),%eax
-cmp    -0x25(%ebp),%al
-je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x290>
-movzbl -0x25(%ebp),%edi
-movzbl -0x26(%ebp),%esi
-mov    -0x3c(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x462,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x1c(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"OnIncreaseGuildExp : guild key(%d), curr guild exp(%d),lev(%d), next guild exp(%d), exp lev(%d)",0x8(%esp)
-movl   $"./log/Guild",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x57e>
-mov    -0x3c(%ebp),%eax
-movzbl 0x17(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x2f1>
-movzbl -0x26(%ebp),%eax
-add    $0x1,%eax
-movzbl %al,%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager20GetGuildExpWithLevelEh>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-cmp    -0x38(%ebp),%eax
-jae    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x2cd>
-mov    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x2d0>
-mov    -0x38(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    -0x20(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x341>
-mov    -0x3c(%ebp),%eax
-movzbl 0x17(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x31a>
-mov    -0x3c(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    -0x34(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x341>
-mov    -0x3c(%ebp),%eax
-movzbl 0x17(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x341>
-mov    -0x3c(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    -0x34(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj>
-mov    -0x3c(%ebp),%eax
-movzbl 0x16(%eax),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x57e>
-mov    -0x3c(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_UserManagerEv>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x44(%ebp)
-cmpl   $0x0,-0x44(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x57e>
-movl   $0x0,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x57e>
-lea    -0x55(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x1e1>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x55(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnIncreaseGuildExp : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen",0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x5c(%ebp),%esi
+lea    -0x54(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x413>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x187>
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
-lea    -0x5c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x40d>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x181>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x432>
+jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x1a6>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x432>
-lea    -0x5c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x1a6>
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x447>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x1be>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x432>
+jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x1a6>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x55(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x46e>
-lea    -0x55(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x44d>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x290,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x40(%ebp)
+cmpl   $0x0,-0x40(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x55b>
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11GetGuildExpEv>
+mov    %eax,-0x3c(%ebp)
+mov    -0x44(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x44(%ebp),%eax
+add    $0x17,%eax
+movzbl (%eax),%eax
+movsbl %al,%edi
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%esi
+mov    -0x44(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+movl   $0x453,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %edi,0x1c(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"GUILD EXP : char no(%d) guild key(%d), add exp(%d), guild exp(%d), book(%d)",0x8(%esp)
+movl   $"./log/Guild",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x290,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager15GetMaxGuildExp1Ev>
+mov    %eax,-0x34(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x290,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager15GetMaxGuildExp2Ev>
+mov    %eax,-0x30(%ebp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildLevelEv>
+movzbl %al,%eax
+mov    %eax,-0x2c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+cmp    -0x2c(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x3e0>
+mov    -0x44(%ebp),%eax
+add    $0x17,%eax
+movzbl (%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x356>
+mov    -0x2c(%ebp),%eax
+add    $0x1,%eax
+movzbl %al,%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x290,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager20GetGuildExpWithLevelEh>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+cmp    -0x34(%ebp),%eax
+jae    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x335>
+mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x338>
+mov    -0x34(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x389>
+mov    -0x44(%ebp),%eax
+add    $0x17,%eax
+movzbl (%eax),%eax
+cmp    $0x1,%al
+je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x370>
+mov    -0x44(%ebp),%eax
+add    $0x17,%eax
+movzbl (%eax),%eax
+cmp    $0x2,%al
+jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x389>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj>
+mov    -0x44(%ebp),%eax
+add    $0x16,%eax
+movzbl (%eax),%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x55b>
+mov    -0x44(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_UserManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x55b>
+movl   $0x0,0x4(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x55b>
+movl   $0x462,0x8(%esp)
+movl   $"OnIncreaseGuildExp",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x38(%ebp),%eax
+mov    -0x3c(%ebp),%edx
+lea    (%edx,%eax,1),%ecx
+mov    -0x44(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    -0x28(%ebp),%edx
+mov    %edx,0x1c(%esp)
+mov    %ecx,0x18(%esp)
+mov    -0x2c(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    -0x3c(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"OnIncreaseGuildExp : guild key(%d), curr guild exp(%d),lev(%d), next guild exp(%d), exp lev(%d)",0x8(%esp)
+movl   $"./log/Guild",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x55b>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x514>
+jne    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x4f1>
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
 movl   $"CPacketTranslater::OnIncreaseGuildExp() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x498,0x8(%esp)
+movl   $"OnIncreaseGuildExp",0x4(%esp)
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
-movl   $0x498,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnIncreaseGuildExp() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x50d>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x4ea>
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
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x57e>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x55b>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnIncreaseGuildExp() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x49e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnIncreaseGuildExp() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x579>
+jmp    <T> <_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader+0x556>
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
-add    $0x9c,%esp
+add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnIncreaseGuildExp(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CDNFException *pCVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  string local_78 [7];
  allocator local_71;
  CMyFileLog local_70 [8];
  CMyFileLog local_68 [8];
  string local_60 [7];
  allocator local_59 [17];
  int local_48;
  CGuild *local_44;
  PacketHeader *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  byte local_2a;
  byte local_29;
  uint local_28;
  uint local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08074421 to 08074425 has its CatchHandler @ 0807449b */
    std::string::string(local_78,"CPacketTranslater::OnIncreaseGuildExp : 0 == m_pclApp",&local_71);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08074440 to 08074444 has its CatchHandler @ 08074447 */
    CDNFException::CDNFException(pCVar5,local_78);
                    /* try { // try from 08074486 to 0807448a has its CatchHandler @ 0807448d */
    std::string::~string(local_78);
    std::allocator<char>::~allocator((allocator<char> *)&local_71);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080744d5 to 08074776 has its CatchHandler @ 08074852 */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_40 = param_1;
  if (*(int *)(param_1 + 0xe) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807479c to 080747a0 has its CatchHandler @ 08074816 */
    std::string::string(local_60,
                        "CPacketTranslater::OnIncreaseGuildExp : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen"
                        ,local_59);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080747bb to 080747bf has its CatchHandler @ 080747c2 */
    CDNFException::CDNFException(pCVar5,local_60);
                    /* try { // try from 08074801 to 08074805 has its CatchHandler @ 08074808 */
    std::string::~string(local_60);
    std::allocator<char>::~allocator((allocator<char> *)local_59);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807484d to 08074851 has its CatchHandler @ 08074852 */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_44 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
  if (local_44 != (CGuild *)0x0) {
    PVar1 = local_40[0x17];
    uVar6 = CGuild::GetGuildExp(local_44);
    uVar2 = *(undefined4 *)(local_40 + 0x12);
    uVar3 = *(undefined4 *)(local_40 + 0xe);
    uVar4 = *(undefined4 *)(local_40 + 10);
    CMyFileLog::CMyFileLog(local_70,"OnIncreaseGuildExp",0x453);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_70,"./log/Guild",
               "GUILD EXP : char no(%d) guild key(%d), add exp(%d), guild exp(%d), book(%d)",uVar4,
               uVar3,uVar2,uVar6,(int)(char)PVar1);
    local_3c = CGuildManager::_ZN13CGuildManager15GetMaxGuildExp1Ev();
    local_38 = CGuildManager::_ZN13CGuildManager15GetMaxGuildExp2Ev();
    local_34 = CGuild::GetGuildExp(local_44);
    local_30 = *(int *)(local_40 + 0x12) + local_34;
    local_2a = CGuild::GetGuildLevel(local_44);
    local_29 = CGuildManager::_ZN13CGuildManager20GetGuildLevelWithExpEj
                         ((CGuildManager *)(m_pclApp + 0x290),local_34);
    if (local_2a == local_29) {
      if (local_40[0x17] == (PacketHeader)0x0) {
        local_28 = CGuildManager::_ZN13CGuildManager20GetGuildExpWithLevelEh
                             ((CGuildManager *)(m_pclApp + 0x290),local_2a + 1);
        local_24 = local_3c;
        if (local_28 < local_3c) {
          local_24 = local_28;
        }
        CGuild::AddGuildExpUntilLimit(local_44,*(uint *)(local_40 + 0x12),local_24);
      }
      else if (local_40[0x17] == (PacketHeader)0x1) {
        CGuild::AddGuildExpUntilLimit(local_44,*(uint *)(local_40 + 0x12),local_38);
      }
      else if (local_40[0x17] == (PacketHeader)0x2) {
        CGuild::AddGuildExpUntilLimit(local_44,*(uint *)(local_40 + 0x12),local_38);
      }
      if (local_40[0x16] != (PacketHeader)0x0) {
        uVar7 = CApplication::Get_UserManager(m_pclApp);
        local_48 = CUserManager::FindUser_CharNo(uVar7);
        if (local_48 != 0) {
          CGuild::SendGuildInfoToMembers(local_44,false);
        }
      }
    }
    else {
      uVar8 = (uint)local_29;
      uVar7 = (uint)local_2a;
      uVar2 = *(undefined4 *)(local_40 + 0xe);
      CMyFileLog::CMyFileLog(local_68,"OnIncreaseGuildExp",0x462);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_68,"./log/Guild",
                 "OnIncreaseGuildExp : guild key(%d), curr guild exp(%d),lev(%d), next guild exp(%d), exp lev(%d)"
                 ,uVar2,local_34,uVar7,local_30,uVar8);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 906 行）：

```cpp
void CPacketTranslater::OnIncreaseGuildExp(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnIncreaseGuildExp : 0 == m_pclApp")
    char* pb = (char*)pkt;
    if (*(unsigned int*)(pb + 0xe) == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnIncreaseGuildExp : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen");
    }
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(*(unsigned int*)(pb + 0xe));
    if (guild != 0)
    {
        unsigned int oldExp = guild->GetGuildExp();
        unsigned int addExp = *(unsigned int*)(pb + 0x12);
        DNF_LOG_SCOPE_LINE(0x453,"./log/Guild",
            "GUILD EXP : char no(%d) guild key(%d), add exp(%d), guild exp(%d), book(%d)",
            *(unsigned int*)(pb + 10), *(unsigned int*)(pb + 0xe), addExp, oldExp,
            (int)(char)pb[0x17]);
        unsigned int max1 = (&m_pclApp->m_guildManager)->GetMaxGuildExp1();
        unsigned int max2 = (&m_pclApp->m_guildManager)->GetMaxGuildExp2();
        unsigned int level = guild->GetGuildLevel();
        int expLevel = (&m_pclApp->m_guildManager)->GetGuildLevelWithExp(oldExp);
        if (level == (unsigned int)expLevel)
        {
            if (pb[0x17] == 0)
            {
                unsigned int next = (&m_pclApp->m_guildManager)->GetGuildExpWithLevel(level + 1);
                unsigned int limit = next < max1 ? next : max1;
                guild->AddGuildExpUntilLimit(addExp, limit);
            }
            else if (pb[0x17] == 1 || pb[0x17] == 2)
            {
                guild->AddGuildExpUntilLimit(addExp, max2);
            }
            if (pb[0x16] != 0)
            {
                if (m_pclApp->Get_UserManager()->FindUser_CharNo(
                        *(unsigned int*)(pb + 0xa)) != 0)
                {
                    guild->SendGuildInfoToMembers(false);
                }
            }
        }
        else
        {
            CMyFileLog log2("OnIncreaseGuildExp", 0x462);
            log2("./log/Guild",
                 "OnIncreaseGuildExp : guild key(%d), curr guild exp(%d),lev(%d), next guild exp(%d), exp lev(%d)",
                 *(unsigned int*)(pb + 0xe), oldExp, level, oldExp + addExp, expLevel);
        }
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnIncreaseGuildExp() Exception Break : %s\n", e.what());
        CMyFileLog log("OnIncreaseGuildExp", 0x498);
        log("./log/Except", "CPacketTranslater::OnIncreaseGuildExp() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnIncreaseGuildExp() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x49e);
        log("./log/Except", "CPacketTranslater::OnIncreaseGuildExp() Exception Break\n");
    }
}
```
