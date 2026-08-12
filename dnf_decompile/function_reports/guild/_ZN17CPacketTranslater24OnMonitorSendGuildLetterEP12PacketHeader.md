# _ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader

`CPacketTranslater::OnMonitorSendGuildLetter(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80797ec` | `0x5d7` | `0x806fefc` | `0x5e1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,402 +1,396 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x9c,%esp
+sub    $0xac,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0xf2>
-lea    -0x6d(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x6d(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp",0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x74(%ebp),%esi
+lea    -0x70(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x98>
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
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0xb7>
-lea    -0x74(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x6d(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x4ee>
-lea    -0x6d(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x87(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x38(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x38(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,-0x2c(%ebp)
+lea    -0x83(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Monitor_Reply_Guild_MailC1Ev>
-mov    -0x24(%ebp),%eax
-lea    0x12(%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
 movl   $0xa98,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"charNo(%d),guildId(%d),msg(%s)",0x8(%esp)
 movl   $"./log/GuildLetter",0x4(%esp)
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x241>
-lea    -0x5d(%ebp),%eax
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+cmpl   $0x0,-0x30(%ebp)
+jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x253>
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x5d(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMonitorSendGuildLetter : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x64(%ebp),%esi
+lea    -0x60(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x1e7>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x1f9>
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
-lea    -0x64(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x1e1>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x1f3>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x206>
+jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x218>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x206>
-lea    -0x64(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x218>
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x21e>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x230>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x206>
+jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x218>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x5d(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x4ee>
-lea    -0x5d(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+lea    0x10(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x2b4>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xaa0,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser, Char Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5cc>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x7d(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x79(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x35d>
+je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x2ba>
+movl   $0xaa0,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser, Char Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5d6>
+lea    -0x83(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x83(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x47f>
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0xaa8,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclGuild, Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x22,-0x75(%ebp)
-lea    -0x87(%ebp),%eax
-movl   $0x13,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5cc>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x39c>
+je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x33e>
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x39c>
+je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x33e>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x3a1>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x343>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x415>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x3b9>
 movl   $0xab0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorSendGuildLetter : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x24,-0x75(%ebp)
-lea    -0x87(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x83(%ebp),%eax
+add    $0x12,%eax
+movb   $0x24,(%eax)
+lea    -0x83(%ebp),%eax
 movl   $0x13,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5cc>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5d6>
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
-test   %eax,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x499>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x43f>
 movl   $0xab8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser->GetGameServer(), g(%d), c(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x1,-0x75(%ebp)
-lea    -0x87(%ebp),%eax
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x83(%ebp),%eax
+add    $0x12,%eax
+movb   $0x1,(%eax)
+lea    -0x83(%ebp),%eax
 movl   $0x13,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5cc>
-mov    -0x24(%ebp),%eax
-lea    0x12(%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5d6>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 movl   $0xffffffff,0x14(%esp)
-mov    %edi,0x10(%esp)
+mov    -0x2c(%ebp),%edx
+mov    %edx,0x10(%esp)
 movl   $"",0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x30(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x34(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5cc>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5d6>
+movl   $0xaa8,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclGuild, Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x83(%ebp),%eax
+add    $0x12,%eax
+movb   $0x22,(%eax)
+lea    -0x83(%ebp),%eax
+movl   $0x13,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5d6>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x56e>
+jne    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x572>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xac2,0x8(%esp)
+movl   $"OnMonitorSendGuildLetter",0x4(%esp)
+lea    -0x8c(%ebp),%eax
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
-movl   $0xac2,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnMonitorSendGuildLetter() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x567>
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x56b>
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
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5cc>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5d6>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xac7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnMonitorSendGuildLetter() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5c7>
+lea    -0x94(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader+0x5d1>
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
+add    $0xac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMonitorSendGuildLetter(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uchar uVar6;
  CDNFException *pCVar7;
  int iVar8;
  CServerInterface *this;
  undefined4 uVar9;
  PacketHeader *pPVar10;
  Packet_Monitor_Reply_Guild_Mail local_8b [10];
  undefined4 local_81;
  undefined4 local_7d;
  undefined1 local_79;
  string local_78 [7];
  allocator local_71;
  CMyFileLog local_70 [8];
  string local_68 [7];
  allocator local_61;
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [24];
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08079825 to 08079829 has its CatchHandler @ 0807989f */
    std::string::string(local_78,"CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp",
                        &local_71);
    pCVar7 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08079844 to 08079848 has its CatchHandler @ 0807984b */
    CDNFException::CDNFException(pCVar7,local_78);
                    /* try { // try from 0807988a to 0807988e has its CatchHandler @ 08079891 */
    std::string::~string(local_78);
    std::allocator<char>::~allocator((allocator<char> *)&local_71);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080798d9 to 08079945 has its CatchHandler @ 08079cd6 */
    __cxa_throw(pCVar7,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_Monitor_Reply_Guild_Mail::Packet_Monitor_Reply_Guild_Mail(local_8b);
  pPVar10 = local_28 + 0x12;
  uVar9 = *(undefined4 *)(local_28 + 0xe);
  uVar1 = *(undefined4 *)(local_28 + 10);
  CMyFileLog::CMyFileLog(local_70,"OnMonitorSendGuildLetter",0xa98);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_70,"./log/GuildLetter","charNo(%d),guildId(%d),msg(%s)",uVar1,uVar9,pPVar10);
  if (*(int *)(local_28 + 0xe) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08079974 to 08079978 has its CatchHandler @ 080799ee */
    std::string::string(local_68,
                        "CPacketTranslater::OnMonitorSendGuildLetter : packet->m_uGuildKey == 0",
                        &local_61);
    pCVar7 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08079993 to 08079997 has its CatchHandler @ 0807999a */
    CDNFException::CDNFException(pCVar7,local_68);
                    /* try { // try from 080799d9 to 080799dd has its CatchHandler @ 080799e0 */
    std::string::~string(local_68);
    std::allocator<char>::~allocator((allocator<char> *)&local_61);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08079a28 to 08079cd0 has its CatchHandler @ 08079cd6 */
    __cxa_throw(pCVar7,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = m_pclApp + 0x10;
  local_30 = (CUser *)CUserManager::FindUser_CharNo(local_24);
  if (local_30 == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_60,"OnMonitorSendGuildLetter",0xaa0);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_60,"./log/GuildModify",
               "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser, Char Key = %d",uVar1,
               uVar9,pPVar10);
    return;
  }
  local_81 = *(undefined4 *)(local_28 + 10);
  local_7d = CUser::GetIdByChannel(local_30);
  local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_2c != (CGuild *)0x0) {
    cVar5 = CGuild::IsGuildMaster(local_2c,*(uint *)(local_28 + 10));
    if ((cVar5 == '\x01') ||
       (cVar5 = CGuild::IsSubGuildMaster(local_2c,*(uint *)(local_28 + 10)), cVar5 == '\x01')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar9 = *(undefined4 *)(local_28 + 10);
      uVar1 = *(undefined4 *)(local_28 + 0xe);
      CMyFileLog::CMyFileLog(local_50,"OnMonitorSendGuildLetter",0xab0);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/GuildModify",
                 "CPacketTranslater::OnMonitorSendGuildLetter : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)"
                 ,uVar1,uVar9);
      local_79 = 0x24;
      CUser::SendToGameserver(local_30,(char *)local_8b,0x13);
    }
    else {
      iVar8 = CUser::GetGameServer(local_30);
      if (iVar8 == 0) {
        uVar9 = *(undefined4 *)(local_28 + 10);
        uVar1 = *(undefined4 *)(local_28 + 0xe);
        CMyFileLog::CMyFileLog(local_48,"OnMonitorSendGuildLetter",0xab8);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_48,"./log/GuildModify",
                   "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser->GetGameServer(), g(%d), c(%d)"
                   ,uVar1,uVar9);
        local_79 = 1;
        CUser::SendToGameserver(local_30,(char *)local_8b,0x13);
      }
      else {
        pPVar10 = local_28 + 0x12;
        uVar2 = *(uint *)(local_28 + 0xe);
        uVar3 = *(uint *)(local_28 + 10);
        this = (CServerInterface *)CUser::GetGameServer(local_30);
        uVar6 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(this);
        _ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j
                  (uVar6,uVar3,uVar2,"",(char *)pPVar10,0xffffffff);
      }
    }
    return;
  }
  uVar9 = *(undefined4 *)(local_28 + 0xe);
  CMyFileLog::CMyFileLog(local_58,"OnMonitorSendGuildLetter",0xaa8);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_58,"./log/GuildModify",
             "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclGuild, Guild Key = %d",uVar9);
  local_79 = 0x22;
  CUser::SendToGameserver(local_30,(char *)local_8b,0x13);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2000 行）：

```cpp
void CPacketTranslater::OnMonitorSendGuildLetter(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    unsigned int guildId = *(unsigned int*)(pb + 0xe);
    const char* msg = pb + 0x12;
    Packet_Monitor_Reply_Guild_Mail reply;
    {
        DNF_LOG_SCOPE_LINE(0xa98, "./log/GuildLetter", "charNo(%d),guildId(%d),msg(%s)", charNo, guildId, msg);
    }
    if (guildId == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnMonitorSendGuildLetter : packet->m_uGuildKey == 0");
    }
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xaa0,"./log/GuildModify",
            "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser, Char Key = %d", charNo);
        return;
    }
    *(unsigned int*)((char*)&reply + 0xa) = charNo;
    *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildId);
    if (guild != 0)
    {
        if (!(guild->IsGuildMaster(charNo) || guild->IsSubGuildMaster(charNo)))
        {
            DNF_LOG_SCOPE_LINE(0xab0,"./log/GuildModify",
                "CPacketTranslater::OnMonitorSendGuildLetter : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",
                guildId, charNo);
            *(unsigned char*)((char*)&reply + 0x12) = 0x24;
            user->SendToGameserver((char*)&reply, 0x13);
        }
        else
        {
            CServerInterface* gs = user->GetGameServer();
            if (gs == 0)
            {
                DNF_LOG_SCOPE_LINE(0xab8,"./log/GuildModify",
                    "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser->GetGameServer(), g(%d), c(%d)",
                    guildId, charNo);
                *(unsigned char*)((char*)&reply + 0x12) = 1;
                user->SendToGameserver((char*)&reply, 0x13);
            }
            else
            {
                SendPacketGuildMail(gs->GetGroupNo(), charNo, guildId, "", msg, 0xffffffff);
            }
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0xaa8,"./log/GuildModify",
            "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclGuild, Guild Key = %d", guildId);
        *(unsigned char*)((char*)&reply + 0x12) = 0x22;
        user->SendToGameserver((char*)&reply, 0x13);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnMonitorSendGuildLetter", 0xac2);
        log("./log/Except", "CPacketTranslater::OnMonitorSendGuildLetter() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xac7);
        log("./log/Except", "CPacketTranslater::OnMonitorSendGuildLetter() Exception Break\n");
    }
}
```
