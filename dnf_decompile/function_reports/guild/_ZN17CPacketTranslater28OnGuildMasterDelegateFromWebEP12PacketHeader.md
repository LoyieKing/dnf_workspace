# _ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader

`CPacketTranslater::OnGuildMasterDelegateFromWeb(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807bc44` | `0x645` | `0x80720e6` | `0x620` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,428 +1,408 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xac,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0xf2>
-lea    -0x79(%ebp),%eax
+lea    -0x6d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x79(%ebp),%eax
+lea    -0x6d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == m_pclApp",0x4(%esp)
-lea    -0x80(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x80(%ebp),%esi
+lea    -0x74(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x98>
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
-lea    -0x80(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0xb7>
-lea    -0x80(%ebp),%eax
+lea    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x79(%ebp),%eax
+lea    -0x6d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x559>
-lea    -0x79(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x52d>
+lea    -0x6d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1df>
-lea    -0x71(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1f0>
+lea    -0x65(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x71(%ebp),%eax
+lea    -0x65(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x78(%ebp),%esi
+lea    -0x6c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x185>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x196>
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
-lea    -0x78(%ebp),%eax
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x17f>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x190>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1a4>
+jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1b5>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1a4>
-lea    -0x78(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1b5>
+lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1bc>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1cd>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1a4>
+jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x1b5>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x71(%ebp),%eax
+lea    -0x65(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x559>
-lea    -0x71(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x52d>
+lea    -0x65(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x255>
+movl   $0xcf0,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclGuild, Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x615>
+movl   $0x4,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x4e7>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x49e>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x250>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xcf0,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclGuild, Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x63a>
-movl   $0x4,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
+je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x2ec>
+movl   $0xd04,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclRequester, Char Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x2af>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xcf6,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x63a>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x31a>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xcfd,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : Requester is Not Guild Master(%d)(%d)",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x63a>
+je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x34e>
+movl   $0xd10,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : Delegatee(%d) is not sub guild master, Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x615>
+movl   $0x0,0x8(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x388>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0xd04,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclRequester, Char Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x3c0>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-movl   $0x0,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x40f>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%ebx
-movl   $0xd10,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : Delegatee(%d) is not sub guild master, Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x63a>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0xc(%esp)
-mov    -0x30(%ebp),%edx
+mov    -0x2c(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x24(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x483>
+je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x3d6>
+movl   $0xd1b,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : ERR : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x3,0x8(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x409>
+movl   $0x3,0x4(%esp)
 mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xd1b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : ERR : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x3,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
-cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x4b9>
-movl   $0x3,0x4(%esp)
-mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
 movl   $0x0,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x4(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x615>
+lea    -0x86(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN35Packet_Notice_Has_Been_Guild_MasterC1Ev>
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x7c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x639>
-lea    -0x92(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN35Packet_Notice_Has_Been_Guild_MasterC1Ev>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x84(%ebp)
-lea    -0x92(%ebp),%eax
+mov    %eax,-0x78(%ebp)
+lea    -0x86(%ebp),%eax
 movl   $0x12,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x63a>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x615>
+movl   $0xcfd,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : Requester is Not Guild Master(%d)(%d)",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x615>
+movl   $0xcf6,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x615>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x5d9>
+jne    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x5b1>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xd39,0x8(%esp)
+movl   $"OnGuildMasterDelegateFromWeb",0x4(%esp)
+lea    -0x90(%ebp),%eax
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
-movl   $0xd39,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x5d2>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x5aa>
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
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x63a>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x615>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xd3e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildMasterDelegateFromWeb() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x632>
+lea    -0x98(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x610>
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
-jmp    <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader+0x63a>
-nop
 add    $0xac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildMasterDelegateFromWeb(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  CDNFException *pCVar5;
  CServerHandler *pCVar6;
  Packet_Notice_Has_Been_Guild_Master local_96 [10];
  undefined4 local_8c;
  undefined4 local_88;
  string local_84 [7];
  allocator local_7d;
  string local_7c [7];
  allocator local_75;
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  CUser *local_34;
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  CApplication *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807bc7d to 0807bc81 has its CatchHandler @ 0807bcf7 */
    std::string::string(local_84,"CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == m_pclApp",
                        &local_7d);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807bc9c to 0807bca0 has its CatchHandler @ 0807bca3 */
    CDNFException::CDNFException(pCVar5,local_84);
                    /* try { // try from 0807bce2 to 0807bce6 has its CatchHandler @ 0807bce9 */
    std::string::~string(local_84);
    std::allocator<char>::~allocator((allocator<char> *)&local_7d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807bd31 to 0807bd35 has its CatchHandler @ 0807c199 */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  if (*(int *)(param_1 + 10) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807bd6a to 0807bd6e has its CatchHandler @ 0807bde4 */
    std::string::string(local_7c,
                        "CPacketTranslater::OnGuildMasterDelegateFromWeb : packet->m_uGuildKey == 0"
                        ,&local_75);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807bd89 to 0807bd8d has its CatchHandler @ 0807bd90 */
    CDNFException::CDNFException(pCVar5,local_7c);
                    /* try { // try from 0807bdcf to 0807bdd3 has its CatchHandler @ 0807bdd6 */
    std::string::~string(local_7c);
    std::allocator<char>::~allocator((allocator<char> *)&local_75);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807be1e to 0807c193 has its CatchHandler @ 0807c199 */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
  if (local_2c == (CGuild *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_74,"OnGuildMasterDelegateFromWeb",0xcf0);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_74,"./log/GuildModify",
               "CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclGuild, Guild Key = %d",
               uVar1);
  }
  else {
    cVar4 = CGuild::IsSetGuildDBFlag(local_2c,4);
    if (cVar4 == '\x01') {
      cVar4 = CGuild::IsGuildMaster(local_2c,*(uint *)(local_28 + 0xe));
      if (cVar4 == '\x01') {
        local_24 = m_pclApp + 0x10;
        local_34 = (CUser *)CUserManager::FindUser_CharNo((uint)local_24);
        if (local_34 == (CUser *)0x0) {
          uVar1 = *(undefined4 *)(local_28 + 0xe);
          CMyFileLog::CMyFileLog(local_5c,"OnGuildMasterDelegateFromWeb",0xd04);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_5c,"./log/GuildModify",
                     "CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclRequester, Char Key = %d"
                     ,uVar1);
        }
        cVar4 = CGuild::IsSubGuildMaster(local_2c,*(uint *)(local_28 + 0x12));
        if (cVar4 == '\0') {
          uVar1 = *(undefined4 *)(local_28 + 10);
          uVar2 = *(undefined4 *)(local_28 + 0x12);
          CMyFileLog::CMyFileLog(local_54,"OnGuildMasterDelegateFromWeb",0xd10);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_54,"./log/GuildModify",
                     "CPacketTranslater::OnGuildMasterDelegateFromWeb : Delegatee(%d) is not sub guild master, Guild Key = %d"
                     ,uVar2,uVar1);
        }
        else {
          CGuild::SetSubGuildMaster(local_2c,*(uint *)(local_28 + 0x12),false);
          uVar3 = *(uint *)(local_28 + 0x12);
          pCVar6 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
          cVar4 = CGuild::ChangeGuildMaster(local_2c,pCVar6,local_34,uVar3);
          if (cVar4 != '\x01') {
            uVar1 = *(undefined4 *)(local_28 + 10);
            CMyFileLog::CMyFileLog(local_4c,"OnGuildMasterDelegateFromWeb",0xd1b);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_4c,"./log/GuildModify",
                       "CPacketTranslater::OnGuildMasterDelegateFromWeb : ERR : Guild\'state is not GUILD_DB_LOAD_STATE, Guild Key = %d"
                       ,uVar1);
          }
          CGuild::ChangeUnconnectedGuildMemberGrade(local_2c,*(uint *)(local_28 + 0xe),3);
          if (local_34 != (CUser *)0x0) {
            CUser::ChangeGuildMemberGrade(local_34,'\x03');
          }
          CGuild::SendGuildInfoToMembers(local_2c,false);
          CGuild::NoticeGuildMasterDelegateToMembers(local_2c,(char *)(local_28 + 0x16));
          local_30 = (CUser *)CUserManager::FindUser_CharNo((uint)local_24);
          if (local_30 != (CUser *)0x0) {
            Packet_Notice_Has_Been_Guild_Master::Packet_Notice_Has_Been_Guild_Master(local_96);
            local_8c = *(undefined4 *)(local_28 + 0x12);
            local_88 = CUser::GetIdByChannel(local_30);
            CUser::SendToGameserver(local_30,(char *)local_96,0x12);
          }
        }
      }
      else {
        uVar1 = *(undefined4 *)(local_28 + 0xe);
        uVar2 = *(undefined4 *)(local_28 + 10);
        CMyFileLog::CMyFileLog(local_64,"OnGuildMasterDelegateFromWeb",0xcfd);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_64,"./log/GuildModify",
                   "CPacketTranslater::OnGuildMasterDelegateFromWeb : Requester is Not Guild Master(%d)(%d)"
                   ,uVar2,uVar1);
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_28 + 10);
      CMyFileLog::CMyFileLog(local_6c,"OnGuildMasterDelegateFromWeb",0xcf6);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_6c,"./log/GuildModify",
                 "CPacketTranslater::OnGuildMasterDelegateFromWeb : Guild\'state is not GUILD_DB_LOAD_STATE, Guild Key = %d"
                 ,uVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3174 行）：

```cpp
void CPacketTranslater::OnGuildMasterDelegateFromWeb(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == m_pclApp");
    unsigned int guildKey = ((PTL_GuildMasterDelegateFromWebPkt*)pkt)->m_guildKey;
    unsigned int requesterCharNo = ((PTL_GuildMasterDelegateFromWebPkt*)pkt)->m_requesterCharNo;
    unsigned int delegateeCharNo = ((PTL_GuildMasterDelegateFromWebPkt*)pkt)->m_delegateeCharNo;
    if (guildKey == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnGuildMasterDelegateFromWeb : packet->m_uGuildKey == 0");
    }
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0xcf0,"./log/GuildModify",
            "CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclGuild, Guild Key = %d",
            guildKey);
        return;
    }
    if (guild->IsSetGuildDBFlag(4) == 1)
    {
        if (guild->IsGuildMaster(requesterCharNo))
        {
            CUser* requester;
            if ((requester = (&m_pclApp->m_userManager)->FindUser_CharNo(requesterCharNo)) == 0)
            {
                DNF_LOG_SCOPE_LINE(0xd04,"./log/GuildModify",
                    "CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclRequester, Char Key = %d",
                    requesterCharNo);
            }
            if (guild->IsSubGuildMaster(delegateeCharNo) == 0)
            {
                DNF_LOG_SCOPE_LINE(0xd10,"./log/GuildModify",
                    "CPacketTranslater::OnGuildMasterDelegateFromWeb : Delegatee(%d) is not sub guild master, Guild Key = %d",
                    delegateeCharNo, guildKey);
            }
            else
            {
                guild->SetSubGuildMaster(delegateeCharNo, false);
                if (guild->ChangeGuildMaster(m_pclApp->Get_ServerHandler(), requester,
                                             delegateeCharNo) != 1)
                {
                    DNF_LOG_SCOPE_LINE(0xd1b,"./log/GuildModify",
                        "CPacketTranslater::OnGuildMasterDelegateFromWeb : ERR : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",
                        guildKey);
                }
                guild->ChangeUnconnectedGuildMemberGrade(requesterCharNo, 3);
                if (requester != 0)
                {
                    requester->ChangeGuildMemberGrade(3);
                }
                guild->SendGuildInfoToMembers(false);
                guild->NoticeGuildMasterDelegateToMembers(
                    ((PTL_GuildMasterDelegateFromWebPkt*)pkt)->m_msg);
                CUser* delegatee;
                if ((delegatee = (&m_pclApp->m_userManager)->FindUser_CharNo(delegateeCharNo)) != 0)
                {
                    Packet_Notice_Has_Been_Guild_Master notice;
                    notice.m_charNo = delegateeCharNo;
                    notice.m_channel = delegatee->GetIdByChannel();
                    delegatee->SendToGameserver((char*)&notice, 0x12);
                }
            }
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0xcfd,"./log/GuildModify",
                "CPacketTranslater::OnGuildMasterDelegateFromWeb : Requester is Not Guild Master(%d)(%d)",
                guildKey, requesterCharNo);
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0xcf6,"./log/GuildModify",
            "CPacketTranslater::OnGuildMasterDelegateFromWeb : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",
            guildKey);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildMasterDelegateFromWeb", 0xd39);
        log("./log/Except", "CPacketTranslater::OnGuildMasterDelegateFromWeb() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xd3e);
        log("./log/Except", "CPacketTranslater::OnGuildMasterDelegateFromWeb() Exception Break\n");
    }
}
```
