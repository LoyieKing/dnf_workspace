# _ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader

`CPacketTranslater::OnDBReplyGuildMasterDelegate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807b608` | `0x63c` | `0x8071ed2` | `0x647` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,427 +1,423 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xbc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0xf2>
-lea    -0x71(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x71(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == m_pclApp",0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x78(%ebp),%esi
+lea    -0x70(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x98>
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
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0xb7>
-lea    -0x78(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x71(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x550>
-lea    -0x71(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x554>
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+lea    -0x86(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN40Packet_Guild_Reply_Guild_Master_DelegateC1Ev>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x8e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN40Packet_Guild_Reply_Guild_Master_DelegateC1Ev>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1ed>
-lea    -0x69(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x34,%eax
+mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x20f>
+lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x69(%ebp),%eax
+lea    -0x61(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x70(%ebp),%esi
+lea    -0x68(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x193>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1b5>
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
-lea    -0x70(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x18d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1af>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1b2>
+jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1d4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1b2>
-lea    -0x70(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1d4>
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1ca>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1ec>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1b2>
+jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x1d4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x69(%ebp),%eax
+lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x550>
-lea    -0x69(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x554>
+lea    -0x61(%ebp),%eax
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
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x260>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0xc82,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x631>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x2d1>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x276>
+movl   $0xc82,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x63c>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x2db>
 movl   $0xc89,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x38(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate : 0 == pclGuild, Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x631>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x63c>
 movl   $0x4,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x50e>
+cmpl   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x43c>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x330>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xc8e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x631>
-mov    -0x24(%ebp),%eax
-mov    0x34(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x492>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x376>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-movl   $0x0,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x3c0>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x35f>
 movl   $0xc9b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate : Delegatee(%d) is not sub guild master, Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%ebx
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x379>
+movl   $0x0,0x8(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0xc(%esp)
 mov    -0x30(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x434>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x3e7>
 movl   $0xca5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate : ERR Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
 movl   $0x3,0x8(%esp)
-mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
+movl   $0x3,0x4(%esp)
 mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
-cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x46a>
-movl   $0x3,0x4(%esp)
-mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
 movl   $0x0,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc>
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x491>
+lea    -0x86(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x86(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-mov    -0x24(%ebp),%eax
-add    $0x16,%eax
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+lea    -0x86(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x86(%ebp),%eax
+movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc>
-cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x4d8>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x84(%ebp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
 mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x80(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x34(%eax),%eax
-mov    %eax,-0x7c(%ebp)
-lea    -0x8e(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x630>
-lea    -0xa0(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x63c>
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Notice_Has_Been_Guild_MasterC1Ev>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x96(%ebp)
-mov    -0x2c(%ebp),%eax
+lea    -0x98(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x98(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x92(%ebp)
-lea    -0xa0(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x98(%ebp),%eax
 movl   $0x12,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x631>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x63c>
+movl   $0xc8e,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x38(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x63c>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x5d0>
+jne    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x5d8>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xccc,0x8(%esp)
+movl   $"OnDBReplyGuildMasterDelegate",0x4(%esp)
+lea    -0xa0(%ebp),%eax
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
-movl   $0xccc,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x5c9>
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x5d1>
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
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x631>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x63c>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xcd1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0xa8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x629>
+lea    -0xa8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x637>
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
-jmp    <T> <_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader+0x631>
-nop
 add    $0xbc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBReplyGuildMasterDelegate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  CDNFException *pCVar5;
  CServerHandler *pCVar6;
  Packet_Notice_Has_Been_Guild_Master local_a4 [10];
  undefined4 local_9a;
  undefined4 local_96;
  Packet_Guild_Reply_Guild_Master_Delegate local_92 [10];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  string local_7c [7];
  allocator local_75;
  string local_74 [7];
  allocator local_6d;
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
                    /* try { // try from 0807b641 to 0807b645 has its CatchHandler @ 0807b6bb */
    std::string::string(local_7c,"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == m_pclApp",
                        &local_75);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807b660 to 0807b664 has its CatchHandler @ 0807b667 */
    CDNFException::CDNFException(pCVar5,local_7c);
                    /* try { // try from 0807b6a6 to 0807b6aa has its CatchHandler @ 0807b6ad */
    std::string::~string(local_7c);
    std::allocator<char>::~allocator((allocator<char> *)&local_75);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807b6f5 to 0807b6f9 has its CatchHandler @ 0807bb54 */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_Guild_Reply_Guild_Master_Delegate::Packet_Guild_Reply_Guild_Master_Delegate(local_92);
  if (*(int *)(local_28 + 10) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807b73c to 0807b740 has its CatchHandler @ 0807b7b6 */
    std::string::string(local_74,
                        "CPacketTranslater::OnDBReplyGuildMasterDelegate : packet->m_uGuildKey == 0"
                        ,&local_6d);
    pCVar5 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807b75b to 0807b75f has its CatchHandler @ 0807b762 */
    CDNFException::CDNFException(pCVar5,local_74);
                    /* try { // try from 0807b7a1 to 0807b7a5 has its CatchHandler @ 0807b7a8 */
    std::string::~string(local_74);
    std::allocator<char>::~allocator((allocator<char> *)&local_6d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807b7f0 to 0807bb4e has its CatchHandler @ 0807bb54 */
    __cxa_throw(pCVar5,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = m_pclApp + 0x10;
  local_34 = (CUser *)CUserManager::FindUser_CharNo((uint)local_24);
  if (local_34 == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 0xe);
    CMyFileLog::CMyFileLog(local_6c,"OnDBReplyGuildMasterDelegate",0xc82);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_6c,"./log/GuildModify",
               "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",
               uVar1);
  }
  else {
    local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
    if (local_2c == (CGuild *)0x0) {
      uVar1 = *(undefined4 *)(local_28 + 10);
      CMyFileLog::CMyFileLog(local_64,"OnDBReplyGuildMasterDelegate",0xc89);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_64,"./log/GuildModify",
                 "CPacketTranslater::OnDBReplyGuildMasterDelegate : 0 == pclGuild, Guild Key = %d",
                 uVar1);
    }
    else {
      cVar4 = CGuild::IsSetGuildDBFlag(local_2c,4);
      if (cVar4 == '\x01') {
        if (*(int *)(local_28 + 0x34) == 0) {
          cVar4 = CGuild::IsSubGuildMaster(local_2c,*(uint *)(local_28 + 0x12));
          if (cVar4 == '\0') {
            uVar1 = *(undefined4 *)(local_28 + 10);
            uVar2 = *(undefined4 *)(local_28 + 0x12);
            CMyFileLog::CMyFileLog(local_54,"OnDBReplyGuildMasterDelegate",0xc9b);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_54,"./log/GuildModify",
                       "CPacketTranslater::OnDBReplyGuildMasterDelegate : Delegatee(%d) is not sub guild master, Guild Key = %d"
                       ,uVar2,uVar1);
          }
          else {
            CGuild::SetSubGuildMaster(local_2c,*(uint *)(local_28 + 0x12),false);
          }
          uVar3 = *(uint *)(local_28 + 0x12);
          pCVar6 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
          cVar4 = CGuild::ChangeGuildMaster(local_2c,pCVar6,local_34,uVar3);
          if (cVar4 != '\x01') {
            uVar1 = *(undefined4 *)(local_28 + 10);
            CMyFileLog::CMyFileLog(local_4c,"OnDBReplyGuildMasterDelegate",0xca5);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_4c,"./log/GuildModify",
                       "CPacketTranslater::OnDBReplyGuildMasterDelegate : ERR Guild\'state is not GUILD_DB_LOAD_STATE, Guild Key = %d"
                       ,uVar1);
          }
          CGuild::ChangeUnconnectedGuildMemberGrade(local_2c,*(uint *)(local_28 + 0xe),3);
          if (local_34 != (CUser *)0x0) {
            CUser::ChangeGuildMemberGrade(local_34,'\x03');
          }
          CGuild::SendGuildInfoToMembers(local_2c,false);
          CGuild::NoticeGuildMasterDelegateToMembers(local_2c,(char *)(local_28 + 0x16));
        }
        if (local_34 != (CUser *)0x0) {
          local_88 = *(undefined4 *)(local_28 + 0xe);
          local_84 = CUser::GetIdByChannel(local_34);
          local_80 = *(undefined4 *)(local_28 + 0x34);
          CUser::SendToGameserver(local_34,(char *)local_92,0x16);
        }
        local_30 = (CUser *)CUserManager::FindUser_CharNo((uint)local_24);
        if (local_30 != (CUser *)0x0) {
          Packet_Notice_Has_Been_Guild_Master::Packet_Notice_Has_Been_Guild_Master(local_a4);
          local_9a = *(undefined4 *)(local_28 + 0x12);
          local_96 = CUser::GetIdByChannel(local_30);
          CUser::SendToGameserver(local_30,(char *)local_a4,0x12);
        }
      }
      else {
        uVar1 = *(undefined4 *)(local_28 + 10);
        CMyFileLog::CMyFileLog(local_5c,"OnDBReplyGuildMasterDelegate",0xc8e);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_5c,"./log/GuildModify",
                   "CPacketTranslater::OnDBReplyGuildMasterDelegate : Guild\'state is not GUILD_DB_LOAD_STATE, Guild Key = %d"
                   ,uVar1);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2576 行）：

```cpp
void CPacketTranslater::OnDBReplyGuildMasterDelegate(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildMasterDelegate : 0 == m_pclApp");
    Packet_Guild_Reply_Guild_Master_Delegate resp;
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int requesterCharNo = *(unsigned int*)((char*)pkt + 0xe);
    unsigned int delegateeCharNo = *(unsigned int*)((char*)pkt + 0x12);
    int result = *(int*)((char*)pkt + 0x34);
    if (guildKey == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnDBReplyGuildMasterDelegate : packet->m_uGuildKey == 0");
    }
    CUser* requester;
    if ((requester = (&m_pclApp->m_userManager)->FindUser_CharNo(requesterCharNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xc82,"./log/GuildModify",
            "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",
            requesterCharNo);
        return;
    }
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0xc89,"./log/GuildModify",
            "CPacketTranslater::OnDBReplyGuildMasterDelegate : 0 == pclGuild, Guild Key = %d",
            guildKey);
        return;
    }
    if (guild->IsSetGuildDBFlag(4) == 1)
    {
        if (result == 0)
        {
            if (guild->IsSubGuildMaster(delegateeCharNo) == 0)
            {
                DNF_LOG_SCOPE_LINE(0xc9b,"./log/GuildModify",
                    "CPacketTranslater::OnDBReplyGuildMasterDelegate : Delegatee(%d) is not sub guild master, Guild Key = %d",
                    delegateeCharNo, guildKey);
            }
            else
            {
                guild->SetSubGuildMaster(delegateeCharNo, false);
            }
            if (guild->ChangeGuildMaster(m_pclApp->Get_ServerHandler(), requester,
                                         delegateeCharNo) != 1)
            {
                DNF_LOG_SCOPE_LINE(0xca5,"./log/GuildModify",
                    "CPacketTranslater::OnDBReplyGuildMasterDelegate : ERR Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",
                    guildKey);
            }
            guild->ChangeUnconnectedGuildMemberGrade(requesterCharNo, 3);
            requester->ChangeGuildMemberGrade(3);
            guild->SendGuildInfoToMembers(false);
            guild->NoticeGuildMasterDelegateToMembers((char*)pkt + 0x16);
        }
        if (requester != 0)
        {
            *(unsigned int*)((char*)&resp + 0xa) = requesterCharNo;
            *(unsigned int*)((char*)&resp + 0xe) = requester->GetIdByChannel();
            *(int*)((char*)&resp + 0x12) = result;
            requester->SendToGameserver((char*)&resp, 0x16);
        }
        CUser* delegatee;
        if ((delegatee = (&m_pclApp->m_userManager)->FindUser_CharNo(delegateeCharNo)) != 0)
        {
            Packet_Notice_Has_Been_Guild_Master notice;
            *(unsigned int*)((char*)&notice + 0xa) = delegateeCharNo;
            *(unsigned int*)((char*)&notice + 0xe) = delegatee->GetIdByChannel();
            delegatee->SendToGameserver((char*)&notice, 0x12);
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0xc8e,"./log/GuildModify",
            "CPacketTranslater::OnDBReplyGuildMasterDelegate : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",
            guildKey);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBReplyGuildMasterDelegate", 0xccc);
        log("./log/Except", "CPacketTranslater::OnDBReplyGuildMasterDelegate() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xcd1);
        log("./log/Except", "CPacketTranslater::OnDBReplyGuildMasterDelegate() Exception Break\n");
    }
}
```
