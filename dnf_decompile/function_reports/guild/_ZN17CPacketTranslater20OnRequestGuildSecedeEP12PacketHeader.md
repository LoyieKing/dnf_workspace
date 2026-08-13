# _ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader

`CPacketTranslater::OnRequestGuildSecede(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807a25a` | `0x62d` | `0x8070584` | `0x5f6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,417 +1,399 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x10c,%esp
+sub    $0x11c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0xf2>
-lea    -0x65(%ebp),%eax
+lea    -0x5d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x65(%ebp),%eax
+lea    -0x5d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede : 0 == m_pclApp",0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x6c(%ebp),%esi
+lea    -0x64(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x98>
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
-lea    -0x6c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0xb7>
-lea    -0x6c(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x65(%ebp),%eax
+lea    -0x5d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x544>
-lea    -0x65(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x50f>
+lea    -0x5d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0xf7(%ebp),%eax
+lea    -0xff(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Guild_Reply_Guild_SecedeC1Ev>
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1ed>
-lea    -0x5d(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1f5>
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x5d(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x64(%ebp),%esi
+lea    -0x5c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x193>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x19b>
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
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x18d>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x195>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1b2>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1ba>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1b2>
-lea    -0x64(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1ba>
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1ca>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1d2>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1b2>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x1ba>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x5d(%ebp),%eax
+lea    -0x55(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x544>
-lea    -0x5d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x50f>
+lea    -0x55(%ebp),%eax
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
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+lea    0x10(%eax),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x2c(%ebp)
 cmpl   $0x0,-0x2c(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x260>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x25c>
 movl   $0xb3d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede : 0 == pclRequester, Char Key = %d",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x622>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xe7(%ebp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5eb>
+mov    -0x30(%ebp),%eax
+mov    %eax,-0xef(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xe3(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0xeb(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x315>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xb46,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0xdf(%ebp)
-lea    -0xf7(%ebp),%eax
-movl   $0x52,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x622>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x4a2>
 movl   $0x4,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x39b>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x320>
 movl   $0xb4e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0xdf(%ebp)
-lea    -0xf7(%ebp),%eax
+movl   $0x22,-0xe7(%ebp)
+lea    -0xff(%ebp),%eax
 movl   $0x52,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x622>
-lea    -0xa5(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5eb>
+lea    -0xad(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_DB_Request_Guild_SecedeC1Ev>
+mov    -0x34(%ebp),%eax
+mov    %eax,-0xa3(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,-0x9f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x9b(%ebp)
+mov    %eax,-0x9a(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x16(%eax),%edx
 mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x97(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x92(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    -0x24(%ebp),%edx
-add    $0x16,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0xa5(%ebp),%eax
+lea    -0xad(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetMasterIdEv>
-mov    %eax,-0x70(%ebp)
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x12(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x4d5>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x3ca>
+movb   $0x1,-0x9b(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strlen>
+mov    %eax,0x8(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xad(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x483>
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x44d>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x403>
+mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x44d>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x403>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x452>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x408>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x4cc>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x47c>
 movl   $0xb60,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x24,-0xdf(%ebp)
-lea    -0xf7(%ebp),%eax
+movl   $0x24,-0xe7(%ebp)
+lea    -0xff(%ebp),%eax
 movl   $0x52,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x622>
-movb   $0x2,-0x93(%ebp)
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x521>
-movb   $0x1,-0x93(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,(%esp)
-call   <T> <strlen>
-mov    %eax,-0x92(%ebp)
-mov    -0x92(%ebp),%eax
-mov    %eax,%ebx
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xa5(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5eb>
+movb   $0x2,-0x9b(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x68(%eax),%eax
-lea    -0xa5(%ebp),%edx
+lea    -0xad(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x622>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5eb>
+movl   $0xb46,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x22,-0xe7(%ebp)
+lea    -0xff(%ebp),%eax
+movl   $0x52,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5eb>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5c4>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x58d>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xb7e,0x8(%esp)
+movl   $"OnRequestGuildSecede",0x4(%esp)
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
-movl   $0xb7e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5bd>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x586>
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
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x622>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5eb>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xb83,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildSecede() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x61d>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader+0x5e6>
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
-add    $0x10c,%esp
+add    $0x11c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestGuildSecede(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  CDNFException *pCVar5;
  char *__s;
  size_t __n;
  void *__src;
  Packet_Guild_Reply_Guild_Secede local_fb [16];
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  Packet_DB_Request_Guild_Secede local_a9 [10];
  undefined4 local_9f;
  undefined4 local_9b;
  undefined1 local_97;
  size_t local_96;
  undefined1 auStack_92 [30];
  undefined4 local_74;
  string local_70 [7];
  allocator local_69;
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
                    /* try { // try from 0807a293 to 0807a297 has its CatchHandler @ 0807a30d */
    std::string::string(local_70,"CPacketTranslater::OnRequestGuildSecede : 0 == m_pclApp",&local_69
                       );
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807a2b2 to 0807a2b6 has its CatchHandler @ 0807a2b9 */
    CDNFException::CDNFException(pCVar5,local_70);
                    /* try { // try from 0807a2f8 to 0807a2fc has its CatchHandler @ 0807a2ff */
    std::string::~string(local_70);
    std::allocator<char>::~allocator((allocator<char> *)&local_69);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807a347 to 0807a34b has its CatchHandler @ 0807a79a */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_Guild_Reply_Guild_Secede::Packet_Guild_Reply_Guild_Secede(local_fb);
  if (*(int *)(local_28 + 10) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807a38e to 0807a392 has its CatchHandler @ 0807a408 */
    std::string::string(local_68,"CPacketTranslater::OnCallGuildInvite : packet->m_uGuildKey == 0",
                        &local_61);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807a3ad to 0807a3b1 has its CatchHandler @ 0807a3b4 */
    CDNFException::CDNFException(pCVar5,local_68);
                    /* try { // try from 0807a3f3 to 0807a3f7 has its CatchHandler @ 0807a3fa */
    std::string::~string(local_68);
    std::allocator<char>::~allocator((allocator<char> *)&local_61);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807a442 to 0807a794 has its CatchHandler @ 0807a79a */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = m_pclApp + 0x10;
  local_30 = (CUser *)CUserManager::FindUser_CharNo(local_24);
  if (local_30 == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 0xe);
    CMyFileLog::CMyFileLog(local_60,"OnRequestGuildSecede",0xb3d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_60,"./log/Except",
               "CPacketTranslater::OnRequestGuildSecede : 0 == pclRequester, Char Key = %d",uVar1);
    return;
  }
  local_eb = *(undefined4 *)(local_28 + 0xe);
  local_e7 = CUser::GetIdByChannel(local_30);
  local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_2c != (CGuild *)0x0) {
    cVar4 = CGuild::IsSetGuildDBFlag(local_2c,4);
    if (cVar4 != '\x01') {
      uVar1 = *(undefined4 *)(local_28 + 10);
      CMyFileLog::CMyFileLog(local_50,"OnRequestGuildSecede",0xb4e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/GuildModify",
                 "CPacketTranslater::OnRequestGuildSecede : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d"
                 ,uVar1);
      local_e3 = 0x22;
      CUser::SendToGameserver(local_30,(char *)local_fb,0x52);
      return;
    }
    Packet_DB_Request_Guild_Secede::Packet_DB_Request_Guild_Secede(local_a9);
    local_9f = *(undefined4 *)(local_28 + 10);
    local_9b = *(undefined4 *)(local_28 + 0xe);
    local_96 = *(size_t *)(local_28 + 0x12);
    memcpy(auStack_92,local_28 + 0x16,*(size_t *)(local_28 + 0x12));
    local_74 = CGuild::GetMasterId(local_2c);
    if (*(int *)(local_28 + 0x12) == 0) {
      local_97 = 1;
      __s = (char *)CUser::GetCharName(local_30);
      __n = strlen(__s);
      local_96 = __n;
      __src = (void *)CUser::GetCharName(local_30);
      memcpy(auStack_92,__src,__n);
    }
    else {
      cVar4 = CGuild::IsGuildMaster(local_2c,*(uint *)(local_28 + 0xe));
      if ((cVar4 == '\x01') ||
         (cVar4 = CGuild::IsSubGuildMaster(local_2c,*(uint *)(local_28 + 0xe)), cVar4 == '\x01')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar1 = *(undefined4 *)(local_28 + 0xe);
        uVar2 = *(undefined4 *)(local_28 + 10);
        CMyFileLog::CMyFileLog(local_48,"OnRequestGuildSecede",0xb60);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_48,"./log/GuildModify",
                   "CPacketTranslater::OnRequestGuildSecede : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)"
                   ,uVar2,uVar1);
        local_e3 = 0x24;
        CUser::SendToGameserver(local_30,(char *)local_fb,0x52);
        return;
      }
      local_97 = 2;
    }
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
              (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_a9);
    return;
  }
  uVar1 = *(undefined4 *)(local_28 + 10);
  CMyFileLog::CMyFileLog(local_58,"OnRequestGuildSecede",0xb46);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_58,"./log/GuildModify",
             "CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Guild Key = %d",uVar1);
  local_e3 = 0x22;
  CUser::SendToGameserver(local_30,(char *)local_fb,0x52);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2789 行）：

```cpp
void CPacketTranslater::OnRequestGuildSecede(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildSecede : 0 == m_pclApp");
    Packet_Guild_Reply_Guild_Secede resp;
    unsigned int guildKey = ((PTL_RequestGuildSecedePkt*)pkt)->m_guildKey;
    unsigned int requesterCharNo = ((PTL_RequestGuildSecedePkt*)pkt)->m_requesterCharNo;
    if (guildKey == 0)
    {
        throw CDNFException("CPacketTranslater::OnCallGuildInvite : packet->m_uGuildKey == 0");
    }
    CUser* requester;
    if ((requester = (&m_pclApp->m_userManager)->FindUser_CharNo(requesterCharNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xb3d,"./log/Except",
            "CPacketTranslater::OnRequestGuildSecede : 0 == pclRequester, Char Key = %d",
            requesterCharNo);
        return;
    }
    resp.m_requester = requesterCharNo;
    resp.m_channel = requester->GetIdByChannel();
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
    if (guild != 0)
    {
        if (guild->IsSetGuildDBFlag(4) != 1)
        {
            DNF_LOG_SCOPE_LINE(0xb4e,"./log/GuildModify",
                "CPacketTranslater::OnRequestGuildSecede : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",
                guildKey);
            resp.m_secedeType = 0x22;
            requester->SendToGameserver((char*)&resp, 0x52);
            return;
        }
        Packet_DB_Request_Guild_Secede dbPkt;
        dbPkt.m_guildKey = guildKey;
        dbPkt.m_charNo = requesterCharNo;
        size_t nameLen = ((PTL_RequestGuildSecedePkt*)pkt)->m_nameLen;
        dbPkt.m_nameLen = nameLen;
        memcpy(dbPkt.m_name, ((PTL_RequestGuildSecedePkt*)pkt)->m_name, nameLen);
        (void)guild->GetMasterId();
        if (((PTL_RequestGuildSecedePkt*)pkt)->m_nameLen == 0)
        {
            dbPkt.m_flag = 1;
            const char* name = requester->GetCharName();
            memcpy(dbPkt.m_name, name, strlen(name));
        }
        else
        {
            if (!guild->IsGuildMaster(requesterCharNo) &&
                !guild->IsSubGuildMaster(requesterCharNo))
            {
                DNF_LOG_SCOPE_LINE(0xb60,"./log/GuildModify",
                    "CPacketTranslater::OnRequestGuildSecede : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",
                    guildKey, requesterCharNo);
            resp.m_secedeType = 0x24;
                requester->SendToGameserver((char*)&resp, 0x52);
                return;
            }
            dbPkt.m_flag = 2;
        }
        m_pclApp->m_serverHandler->SendToDB(&dbPkt);
        return;
    }
    DNF_LOG_SCOPE_LINE(0xb46,"./log/GuildModify",
        "CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Guild Key = %d", guildKey);
    resp.m_secedeType = 0x22;
    requester->SendToGameserver((char*)&resp, 0x52);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRequestGuildSecede", 0xb7e);
        log("./log/Except", "CPacketTranslater::OnRequestGuildSecede() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xb83);
        log("./log/Except", "CPacketTranslater::OnRequestGuildSecede() Exception Break\n");
    }
}
```
