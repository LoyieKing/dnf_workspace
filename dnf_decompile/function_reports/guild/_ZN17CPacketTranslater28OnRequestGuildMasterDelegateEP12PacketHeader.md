# _ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader

`CPacketTranslater::OnRequestGuildMasterDelegate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807af52` | `0x6b5` | `0x8071552` | `0x6d3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,441 +1,448 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xdc,%esp
+sub    $0xec,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0xe2>
-lea    -0x79(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x79(%ebp),%eax
+lea    -0x69(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == m_pclApp",0x4(%esp)
-lea    -0x80(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x80(%ebp),%esi
+lea    -0x70(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x80(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0xa7>
-lea    -0x80(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x79(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5d4>
-lea    -0x79(%ebp),%eax
+lea    -0x69(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5e8>
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
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x522>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x28(%ebp)
-lea    -0x96(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN40Packet_Guild_Reply_Guild_Master_DelegateC1Ev>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
+cmpl   $0x0,-0x28(%ebp)
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x177>
+movl   $0xc23,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x2c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c8>
+lea    -0x86(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x86(%ebp),%eax
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
+jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x22c>
+movl   $0xc2c,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclGuild, Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x86(%ebp),%eax
+add    $0x12,%eax
+movl   $0x22,(%eax)
+lea    -0x86(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c8>
+movl   $0x4,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x4b4>
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x43f>
+lea    -0x51(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+mov    0x8(%ebp),%eax
+lea    0x12(%eax),%edx
+lea    -0x51(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+lea    -0x58(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
+mov    %eax,-0x20(%ebp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x2dc>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x2c4>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x51(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5e8>
+lea    -0x51(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x315>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x315>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x31a>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x39d>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+movl   $0xc49,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : Delegatee is Not Sub Guild Master(%d)(%d)",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x86(%ebp),%eax
+add    $0x12,%eax
+movl   $0x56,(%eax)
+lea    -0x86(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c8>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x1cd>
-lea    -0x71(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c8>
+lea    -0xc9(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN39Packet_DB_Request_Guild_Master_DelegateC1Ev>
+lea    -0xc9(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0xc9(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0xc9(%ebp),%eax
+lea    0x12(%eax),%ebx
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface10GetGroupNoEv>
+mov    %al,(%ebx)
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xc9(%ebp),%eax
+add    $0x13,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x68(%eax),%eax
+lea    -0xc9(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c8>
+movl   $0xc3d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : Requester is Not Guild Master(%d)(%d)",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x86(%ebp),%eax
+add    $0x12,%eax
+movl   $0x24,(%eax)
+lea    -0x86(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c8>
+movl   $0xc34,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x86(%ebp),%eax
+add    $0x12,%eax
+movl   $0x22,(%eax)
+lea    -0x86(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c8>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x71(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildMasterDelegate : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x78(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x17b>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x599>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x175>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x593>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x192>
+jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5b0>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x192>
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x1aa>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5b0>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5c5>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x192>
+jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5b0>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x71(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5d4>
-lea    -0x71(%ebp),%eax
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5e8>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x240>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0xc23,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6aa>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x88(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x2f5>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xc2c,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclGuild, Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0x84(%ebp)
-lea    -0x96(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6aa>
-movl   $0x4,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x37b>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xc34,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0x84(%ebp)
-lea    -0x96(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6aa>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x40d>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xc3d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : Requester is Not Guild Master(%d)(%d)",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x24,-0x84(%ebp)
-lea    -0x96(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6aa>
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-mov    -0x28(%ebp),%eax
-lea    0x12(%eax),%edx
-lea    -0x49(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x50(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-setne  %bl
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x48a>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x472>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x5d4>
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x53b>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x53b>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%esi
-movl   $0xc49,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
-movl   $"CPacketTranslater::OnRequestGuildMasterDelegate : Delegatee is Not Sub Guild Master(%d)(%d)",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x56,-0x84(%ebp)
-lea    -0x96(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6aa>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6aa>
-lea    -0xc7(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN39Packet_DB_Request_Guild_Master_DelegateC1Ev>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xbd(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xb9(%ebp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface10GetGroupNoEv>
-mov    %al,-0xb5(%ebp)
-mov    -0x28(%ebp),%eax
-add    $0x12,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xc7(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%eax
-lea    -0xc7(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6aa>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x650>
+jne    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x668>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xc5d,0x8(%esp)
+movl   $"OnRequestGuildMasterDelegate",0x4(%esp)
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
-movl   $0xc5d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x649>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x661>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6aa>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xc62,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildSecede() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6a5>
+lea    -0x98(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader+0x6c3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0xdc,%esp
+add    $0xec,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestGuildMasterDelegate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  CDNFException *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  CServerInterface *this;
  bool bVar7;
  Packet_DB_Request_Guild_Master_Delegate local_cb [10];
  undefined4 local_c1;
  undefined4 local_bd;
  undefined1 local_b9;
  undefined1 auStack_b8 [30];
  Packet_Guild_Reply_Guild_Master_Delegate local_9a [10];
  undefined4 local_90;
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
  string local_54 [7];
  allocator local_4d;
  CMyFileLog local_4c [24];
  CUser *local_34;
  CGuild *local_30;
  PacketHeader *local_2c;
  uint local_28;
  CUser *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807af8b to 0807af8f has its CatchHandler @ 0807aff9 */
    std::string::string(local_84,"CPacketTranslater::OnRequestGuildMasterDelegate : 0 == m_pclApp",
                        &local_7d);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807afaa to 0807afae has its CatchHandler @ 0807afb1 */
    CDNFException::CDNFException(pCVar3,local_84);
                    /* try { // try from 0807afe8 to 0807afec has its CatchHandler @ 0807afef */
    std::string::~string(local_84);
    std::allocator<char>::~allocator((allocator<char> *)&local_7d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807b02f to 0807b033 has its CatchHandler @ 0807b526 */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  Packet_Guild_Reply_Guild_Master_Delegate::Packet_Guild_Reply_Guild_Master_Delegate(local_9a);
  if (*(int *)(local_2c + 10) != 0) {
    local_28 = m_pclApp + 0x10;
    local_34 = (CUser *)CUserManager::FindUser_CharNo(local_28);
    if (local_34 == (CUser *)0x0) {
      uVar1 = *(undefined4 *)(local_2c + 0xe);
      CMyFileLog::CMyFileLog(local_74,"OnRequestGuildMasterDelegate",0xc23);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_74,"./log/Except",
                 "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d"
                 ,uVar1);
    }
    else {
      local_90 = *(undefined4 *)(local_2c + 0xe);
      local_8c = CUser::GetIdByChannel(local_34);
      local_30 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_30 == (CGuild *)0x0) {
        uVar1 = *(undefined4 *)(local_2c + 10);
        CMyFileLog::CMyFileLog(local_6c,"OnRequestGuildMasterDelegate",0xc2c);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_6c,"./log/GuildModify",
                   "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclGuild, Guild Key = %d"
                   ,uVar1);
        local_88 = 0x22;
        CUser::SendToGameserver(local_34,(char *)local_9a,0x16);
      }
      else {
        cVar2 = CGuild::IsSetGuildDBFlag(local_30,4);
        if (cVar2 == '\x01') {
          cVar2 = CGuild::IsGuildMaster(local_30,*(uint *)(local_2c + 0xe));
          if (cVar2 == '\x01') {
            std::allocator<char>::allocator();
                    /* try { // try from 0807b381 to 0807b385 has its CatchHandler @ 0807b3c4 */
            std::string::string(local_54,(char *)(local_2c + 0x12),&local_4d);
                    /* try { // try from 0807b393 to 0807b397 has its CatchHandler @ 0807b3af */
            local_24 = (CUser *)CUserManager::FindUser_CharName(local_28,local_54);
            bVar7 = local_24 != (CUser *)0x0;
                    /* try { // try from 0807b3a8 to 0807b3ac has its CatchHandler @ 0807b3c4 */
            std::string::~string(local_54);
            std::allocator<char>::~allocator((allocator<char> *)&local_4d);
            if (bVar7) {
              uVar4 = CUser::GetUniqCharNo(local_24);
                    /* try { // try from 0807b404 to 0807b520 has its CatchHandler @ 0807b526 */
              cVar2 = CGuild::IsSubGuildMaster(local_30,uVar4);
              if (cVar2 != '\x01') {
                uVar5 = CUser::GetUniqCharNo(local_24);
                uVar1 = *(undefined4 *)(local_2c + 10);
                CMyFileLog::CMyFileLog(local_4c,"OnRequestGuildMasterDelegate",0xc49);
                CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                          (local_4c,"./log/GuildModify",
                           "CPacketTranslater::OnRequestGuildMasterDelegate : Delegatee is Not Sub Guild Master(%d)(%d)"
                           ,uVar1,uVar5);
                local_88 = 0x56;
                CUser::SendToGameserver(local_34,(char *)local_9a,0x16);
                return;
              }
            }
            iVar6 = CUser::GetGameServer(local_34);
            if (iVar6 != 0) {
              Packet_DB_Request_Guild_Master_Delegate::Packet_DB_Request_Guild_Master_Delegate
                        (local_cb);
              local_c1 = *(undefined4 *)(local_2c + 10);
              local_bd = *(undefined4 *)(local_2c + 0xe);
              this = (CServerInterface *)CUser::GetGameServer(local_34);
              local_b9 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(this);
              memcpy(auStack_b8,local_2c + 0x12,0x1d);
              CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
                        (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_cb);
            }
          }
          else {
            uVar1 = *(undefined4 *)(local_2c + 0xe);
            uVar5 = *(undefined4 *)(local_2c + 10);
            CMyFileLog::CMyFileLog(local_5c,"OnRequestGuildMasterDelegate",0xc3d);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_5c,"./log/GuildModify",
                       "CPacketTranslater::OnRequestGuildMasterDelegate : Requester is Not Guild Master(%d)(%d)"
                       ,uVar5,uVar1);
            local_88 = 0x24;
            CUser::SendToGameserver(local_34,(char *)local_9a,0x16);
          }
        }
        else {
          uVar1 = *(undefined4 *)(local_2c + 10);
          CMyFileLog::CMyFileLog(local_64,"OnRequestGuildMasterDelegate",0xc34);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_64,"./log/GuildModify",
                     "CPacketTranslater::OnRequestGuildMasterDelegate : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d"
                     ,uVar1);
          local_88 = 0x22;
          CUser::SendToGameserver(local_34,(char *)local_9a,0x16);
        }
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0807b076 to 0807b07a has its CatchHandler @ 0807b0e4 */
  std::string::string(local_7c,
                      "CPacketTranslater::OnDBReplyGuildMasterDelegate : packet->m_uGuildKey == 0",
                      &local_75);
  pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807b095 to 0807b099 has its CatchHandler @ 0807b09c */
  CDNFException::CDNFException(pCVar3,local_7c);
                    /* try { // try from 0807b0d3 to 0807b0d7 has its CatchHandler @ 0807b0da */
  std::string::~string(local_7c);
  std::allocator<char>::~allocator((allocator<char> *)&local_75);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807b11a to 0807b359 has its CatchHandler @ 0807b526 */
  __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2316 行）：

```cpp
void CPacketTranslater::OnRequestGuildMasterDelegate(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildMasterDelegate : 0 == m_pclApp");
    Packet_Guild_Reply_Guild_Master_Delegate resp;
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int requesterCharNo = *(unsigned int*)((char*)pkt + 0xe);
    if (guildKey != 0)
    {
        CUser* requester;
        if ((requester = (&m_pclApp->m_userManager)->FindUser_CharNo(requesterCharNo)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0xc23,"./log/Except",
                "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",
                requesterCharNo);
            return;
        }
        *(unsigned int*)((char*)&resp + 0xa) = requesterCharNo;
        *(unsigned int*)((char*)&resp + 0xe) = requester->GetIdByChannel();
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0xc2c,"./log/GuildModify",
                "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclGuild, Guild Key = %d",
                guildKey);
            *(unsigned int*)((char*)&resp + 0x12) = 0x22;
            requester->SendToGameserver((char*)&resp, 0x16);
            return;
        }
        if (guild->IsSetGuildDBFlag(4) == 1)
        {
            if (guild->IsGuildMaster(requesterCharNo))
            {
                CUser* delegatee = (&m_pclApp->m_userManager)->FindUser_CharName(
                    std::string((char*)pkt + 0x12));
                if (delegatee != 0 && !guild->IsSubGuildMaster(delegatee->GetUniqCharNo()))
                {
                    DNF_LOG_SCOPE_LINE(0xc49,"./log/GuildModify",
                        "CPacketTranslater::OnRequestGuildMasterDelegate : Delegatee is Not Sub Guild Master(%d)(%d)",
                        guildKey, delegatee->GetUniqCharNo());
                    *(unsigned int*)((char*)&resp + 0x12) = 0x56;
                    requester->SendToGameserver((char*)&resp, 0x16);
                    return;
                }
                if (requester->GetGameServer() != 0)
                {
                    Packet_DB_Request_Guild_Master_Delegate dbPkt;
                    *(unsigned int*)((char*)&dbPkt + 0xa) = guildKey;
                    *(unsigned int*)((char*)&dbPkt + 0xe) = requesterCharNo;
                    *(unsigned char*)((char*)&dbPkt + 0x12) =
                        requester->GetGameServer()->GetGroupNo();
                    memcpy((char*)&dbPkt + 0x13, (char*)pkt + 0x12, 0x1d);
                    m_pclApp->m_serverHandler->SendToDB(&dbPkt);
                }
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0xc3d,"./log/GuildModify",
                    "CPacketTranslater::OnRequestGuildMasterDelegate : Requester is Not Guild Master(%d)(%d)",
                    guildKey, requesterCharNo);
                *(unsigned int*)((char*)&resp + 0x12) = 0x24;
                requester->SendToGameserver((char*)&resp, 0x16);
            }
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0xc34,"./log/GuildModify",
                "CPacketTranslater::OnRequestGuildMasterDelegate : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",
                guildKey);
            *(unsigned int*)((char*)&resp + 0x12) = 0x22;
            requester->SendToGameserver((char*)&resp, 0x16);
        }
    }
    else
    {
        throw CDNFException(
            "CPacketTranslater::OnDBReplyGuildMasterDelegate : packet->m_uGuildKey == 0");
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRequestGuildMasterDelegate", 0xc5d);
        log("./log/Except", "CPacketTranslater::OnRequestGuildSecede() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xc62);
        log("./log/Except", "CPacketTranslater::OnRequestGuildSecede() Exception Break\n");
    }
}
```
