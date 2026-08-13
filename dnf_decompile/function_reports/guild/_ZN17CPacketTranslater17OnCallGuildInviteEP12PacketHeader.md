# _ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader

`CPacketTranslater::OnCallGuildInvite(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8077fde` | `0x92a` | `0x806e80e` | `0x975` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,572 +1,609 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x10c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xfa>
-lea    -0x91(%ebp),%eax
+lea    -0x81(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x91(%ebp),%eax
+lea    -0x81(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp",0x4(%esp)
-lea    -0x98(%ebp),%eax
+movl   $"CPacketTranslater::OnCallGuildInvite : 0 == m_pclApp",0x4(%esp)
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x98(%ebp),%esi
+lea    -0x88(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x9f>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x98(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x99>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
-lea    -0x98(%ebp),%eax
+lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xd4>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x91(%ebp),%eax
+lea    -0x81(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x849>
-lea    -0x91(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x88a>
+lea    -0x81(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0xae(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x9e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_Guild_Call_Guild_Invite_To_CallerC1Ev>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    -0x30(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1fd>
-lea    -0x89(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1e7>
+lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x89(%ebp),%eax
+lea    -0x79(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x90(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x90(%ebp),%esi
+lea    -0x80(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1a2>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x195>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x90(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x19c>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x18f>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1bc>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1ac>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1bc>
-lea    -0x90(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1ac>
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1d7>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1c4>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1bc>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1ac>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x89(%ebp),%eax
+lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x849>
-lea    -0x89(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x88a>
+lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x276>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x8db,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnCallGuildInvite : 0 == pclCaller, Char Key = %d",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xa4(%ebp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xa0(%ebp)
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
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x32b>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x25e>
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+movl   $0x8db,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnCallGuildInvite : 0 == pclCaller, Char Key = %d",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
+lea    -0x9e(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x9e(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+mov    -0x30(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x290,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x328>
+mov    -0x30(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x8e4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x80(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite : 0 == pclGuild, Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9e(%ebp),%eax
+add    $0x12,%eax
+movl   $0x22,(%eax)
+lea    -0x9e(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
 movl   $0x4,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x3b1>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x3b5>
+mov    -0x30(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x8eb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9e(%ebp),%eax
+add    $0x12,%eax
+movl   $0x22,(%eax)
+lea    -0x9e(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x403>
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x40d>
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x403>
-mov    -0x30(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x40d>
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
-movzbl 0x15(%eax),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
 cmp    $0x3,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x403>
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x40d>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x408>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x412>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x482>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x495>
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%esi
+mov    -0x30(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
 movl   $0x8f4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x24,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x28(%ebp),%eax
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9e(%ebp),%eax
+add    $0x12,%eax
+movl   $0x24,(%eax)
+lea    -0x9e(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
 movzwl %ax,%eax
 add    $0x1,%eax
 cmp    $0x12c,%eax
 setg   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x51d>
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x53b>
+mov    -0x30(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%esi
 mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
 movzwl %ax,%ebx
 movl   $0x8fd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite : cnt(%d), Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x26,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-lea    -0x59(%ebp),%eax
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9e(%ebp),%eax
+add    $0x12,%eax
+movl   $0x26,(%eax)
+lea    -0x9e(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
 lea    0x12(%eax),%edx
-lea    -0x59(%ebp),%eax
+lea    -0x49(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x60(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %bl
-lea    -0x60(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x59a>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x60(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x5b1>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x582>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x59(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x599>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x849>
-lea    -0x59(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x88a>
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x615>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x635>
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
 movl   $0x905,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite : 0 == pclInvitedUser, Char Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x3,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9e(%ebp),%eax
+add    $0x12,%eax
+movl   $0x3,(%eax)
+lea    -0x9e(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x651>
-mov    -0x30(%ebp),%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x671>
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x658>
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x678>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x65d>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x67d>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x6cd>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x6f4>
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
 movl   $0x90d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite : 0 == pclInvitedUser, Char Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x4d,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9e(%ebp),%eax
+add    $0x12,%eax
+movl   $0x4d,(%eax)
+lea    -0x9e(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x74d>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x916,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnCallGuildInvite : 0 != pclInvitedUser.GetGuildKey(), Char Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x27,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-movl   $0x0,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    -0x30(%ebp),%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x817>
+lea    -0x9e(%ebp),%eax
+add    $0x12,%eax
+movl   $0x0,(%eax)
+lea    -0x9e(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 movl   $0x1,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetGuildInviteFactEjjh>
-lea    -0xf5(%ebp),%eax
+lea    -0xf7(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN41Packet_Guild_Call_Guild_Invite_To_InvitedC1Ev>
-mov    -0x2c(%ebp),%eax
+lea    -0xf7(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xeb(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0xf7(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xe7(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xf5(%ebp),%eax
+lea    -0xf7(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xf5(%ebp),%eax
-add    $0x30,%eax
+lea    -0xf7(%ebp),%eax
+add    $0x2f,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0xf5(%ebp),%eax
+lea    -0xf7(%ebp),%eax
 movl   $0x47,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
+mov    -0x30(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+movl   $0x916,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnCallGuildInvite : 0 != pclInvitedUser.GetGuildKey(), Char Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+lea    -0x9e(%ebp),%eax
+add    $0x12,%eax
+movl   $0x27,(%eax)
+lea    -0x9e(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8c5>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x90a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x92d,0x8(%esp)
+movl   $"OnCallGuildInvite",0x4(%esp)
+lea    -0xa8(%ebp),%eax
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
-movl   $0x92d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildInvite() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8be>
+lea    -0xa8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x903>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x96a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x932,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCallGuildInvite() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91a>
+lea    -0xb0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x965>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x10c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCallGuildInvite(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  CDNFException *pCVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  bool bVar9;
  Packet_Guild_Call_Guild_Invite_To_Invited local_f9 [10];
  undefined4 local_ef;
  undefined4 local_eb;
  undefined1 auStack_e7 [30];
  undefined1 auStack_c9 [23];
  Packet_Guild_Call_Guild_Invite_To_Caller local_b2 [10];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  string local_9c [7];
  allocator local_95;
  string local_94 [7];
  allocator local_8d;
  CMyFileLog local_8c [8];
  CMyFileLog local_84 [8];
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  string local_64 [7];
  allocator local_5d;
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  CUser *local_34;
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08078020 to 08078024 has its CatchHandler @ 08078097 */
    std::string::string(local_9c,"CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp",
                        &local_95);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08078042 to 08078046 has its CatchHandler @ 08078049 */
    CDNFException::CDNFException(pCVar4,local_9c);
                    /* try { // try from 08078086 to 0807808a has its CatchHandler @ 0807808d */
    std::string::~string(local_9c);
    std::allocator<char>::~allocator((allocator<char> *)&local_95);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080780d3 to 080780d7 has its CatchHandler @ 08078827 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_Guild_Call_Guild_Invite_To_Caller::Packet_Guild_Call_Guild_Invite_To_Caller(local_b2);
  if (*(int *)(local_28 + 0xe) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08078123 to 08078127 has its CatchHandler @ 0807819a */
    std::string::string(local_94,"CPacketTranslater::OnCallGuildInvite : packet->m_uGuildKey == 0",
                        &local_8d);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08078145 to 08078149 has its CatchHandler @ 0807814c */
    CDNFException::CDNFException(pCVar4,local_94);
                    /* try { // try from 08078189 to 0807818d has its CatchHandler @ 08078190 */
    std::string::~string(local_94);
    std::allocator<char>::~allocator((allocator<char> *)&local_8d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080781d6 to 080784f5 has its CatchHandler @ 08078827 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = m_pclApp + 0x10;
  local_34 = (CUser *)CUserManager::FindUser_CharNo(local_24);
  if (local_34 == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_8c,"OnCallGuildInvite",0x8db);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_8c,"./log/Except",
               "CPacketTranslater::OnCallGuildInvite : 0 == pclCaller, Char Key = %d",uVar1);
    return;
  }
  local_a8 = *(undefined4 *)(local_28 + 10);
  local_a4 = CUser::GetIdByChannel(local_34);
  local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_2c == (CGuild *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 0xe);
    CMyFileLog::CMyFileLog(local_84,"OnCallGuildInvite",0x8e4);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_84,"./log/GuildModify",
               "CPacketTranslater::OnCallGuildInvite : 0 == pclGuild, Guild Key = %d",uVar1);
    local_a0 = 0x22;
    CUser::SendToGameserver(local_34,(char *)local_b2,0x16);
    return;
  }
  cVar3 = CGuild::IsSetGuildDBFlag(local_2c,4);
  if (cVar3 != '\x01') {
    uVar1 = *(undefined4 *)(local_28 + 0xe);
    CMyFileLog::CMyFileLog(local_7c,"OnCallGuildInvite",0x8eb);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_7c,"./log/GuildModify",
               "CPacketTranslater::OnCallGuildInvite : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d"
               ,uVar1);
    local_a0 = 0x22;
    CUser::SendToGameserver(local_34,(char *)local_b2,0x16);
    return;
  }
  cVar3 = CGuild::IsGuildMaster(local_2c,*(uint *)(local_28 + 10));
  if (((cVar3 == '\x01') ||
      (cVar3 = CGuild::IsSubGuildMaster(local_2c,*(uint *)(local_28 + 10)), cVar3 == '\x01')) ||
     (iVar5 = CUser::GetGuildMemDBInfo(local_34), *(char *)(iVar5 + 0x15) == '\x03')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (bVar9) {
    uVar1 = *(undefined4 *)(local_28 + 10);
    uVar2 = *(undefined4 *)(local_28 + 0xe);
    CMyFileLog::CMyFileLog(local_74,"OnCallGuildInvite",0x8f4);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_74,"./log/GuildModify",
               "CPacketTranslater::OnCallGuildInvite : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)"
               ,uVar2,uVar1);
    local_a0 = 0x24;
    CUser::SendToGameserver(local_34,(char *)local_b2,0x16);
    return;
  }
  uVar6 = CGuild::GetTotalCnt_Of_GuildDBInfo(local_2c);
  if (300 < (uVar6 & 0xffff) + 1) {
    uVar1 = *(undefined4 *)(local_28 + 0xe);
    uVar6 = CGuild::GetTotalCnt_Of_GuildDBInfo(local_2c);
    CMyFileLog::CMyFileLog(local_6c,"OnCallGuildInvite",0x8fd);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_6c,"./log/GuildModify",
               "CPacketTranslater::OnCallGuildInvite : cnt(%d), Guild Key = %d",uVar6 & 0xffff,uVar1
              );
    local_a0 = 0x26;
    CUser::SendToGameserver(local_34,(char *)local_b2,0x16);
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0807851d to 08078521 has its CatchHandler @ 08078560 */
  std::string::string(local_64,(char *)(local_28 + 0x12),&local_5d);
                    /* try { // try from 0807852f to 08078533 has its CatchHandler @ 0807854b */
  local_30 = (CUser *)CUserManager::FindUser_CharName(local_24,local_64);
  bVar9 = local_30 == (CUser *)0x0;
                    /* try { // try from 08078544 to 08078548 has its CatchHandler @ 08078560 */
  std::string::~string(local_64);
  std::allocator<char>::~allocator((allocator<char> *)&local_5d);
  if (bVar9) {
    uVar1 = *(undefined4 *)(local_28 + 10);
                    /* try { // try from 080785a3 to 08078821 has its CatchHandler @ 08078827 */
    CMyFileLog::CMyFileLog(local_5c,"OnCallGuildInvite",0x905);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_5c,"./log/GuildModify",
               "CPacketTranslater::OnCallGuildInvite : 0 == pclInvitedUser, Char Key = %d",uVar1);
    local_a0 = 3;
    CUser::SendToGameserver(local_34,(char *)local_b2,0x16);
    return;
  }
  CUser::GetUniqCharNo(local_30);
  cVar3 = CUser::IsBlackUser((uint)local_34);
  if (cVar3 == '\0') {
    CUser::GetUniqCharNo(local_34);
    cVar3 = CUser::IsBlackUser((uint)local_30);
    if (cVar3 == '\0') {
      bVar9 = false;
      goto LAB_0807863b;
    }
  }
  bVar9 = true;
LAB_0807863b:
  if (bVar9) {
    uVar1 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_54,"OnCallGuildInvite",0x90d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/GuildModify",
               "CPacketTranslater::OnCallGuildInvite : 0 == pclInvitedUser, Char Key = %d",uVar1);
    local_a0 = 0x4d;
    CUser::SendToGameserver(local_34,(char *)local_b2,0x16);
  }
  else {
    iVar5 = CUser::GetGuildKey(local_30);
    if (iVar5 == 0) {
      local_a0 = 0;
      CUser::SendToGameserver(local_34,(char *)local_b2,0x16);
      uVar6 = CUser::GetUniqCharNo(local_34);
      uVar7 = CGuild::GetGuildKey(local_2c);
      CUser::SetGuildInviteFact(local_30,uVar7,uVar6,'\x01');
      Packet_Guild_Call_Guild_Invite_To_Invited::Packet_Guild_Call_Guild_Invite_To_Invited(local_f9)
      ;
      local_ef = CUser::GetUniqCharNo(local_30);
      local_eb = CUser::GetIdByChannel(local_30);
      pvVar8 = (void *)CUser::GetCharName(local_34);
      memcpy(auStack_e7,pvVar8,0x1d);
      pvVar8 = (void *)CGuild::GetGuildName(local_2c);
      memcpy(auStack_c9,pvVar8,0x16);
      CUser::SendToGameserver(local_30,(char *)local_f9,0x47);
    }
    else {
      uVar1 = *(undefined4 *)(local_28 + 10);
      CMyFileLog::CMyFileLog(local_4c,"OnCallGuildInvite",0x916);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_4c,"./log/GuildModify",
                 "CPacketTranslater::OnCallGuildInvite : 0 != pclInvitedUser.GetGuildKey(), Char Key = %d"
                 ,uVar1);
      local_a0 = 0x27;
      CUser::SendToGameserver(local_34,(char *)local_b2,0x16);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1666 行）：

```cpp
void CPacketTranslater::OnCallGuildInvite(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnCallGuildInvite : 0 == m_pclApp");
        char* pb = (char*)pkt;
        Packet_Guild_Call_Guild_Invite_To_Caller callerPkt;
        if (*(unsigned int*)(pb + 0xe) == 0)
        {
            throw CDNFException("CPacketTranslater::OnCallGuildInvite : packet->m_uGuildKey == 0");
        }
        CUserManager* um = &m_pclApp->m_userManager;
        CUser* caller;
        if ((caller = um->FindUser_CharNo(*(unsigned int*)(pb + 0xa))) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x8db,"./log/Except",
                "CPacketTranslater::OnCallGuildInvite : 0 == pclCaller, Char Key = %d",
                *(unsigned int*)(pb + 0xa));
            return;
        }
        *(unsigned int*)((char*)&callerPkt + 0xa) = *(unsigned int*)(pb + 0xa);
        *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
        CGuild* guild;
        if ((guild = (&m_pclApp->m_guildManager)->FindGuild(*(unsigned int*)(pb + 0xe))) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x8e4,"./log/GuildModify",
                "CPacketTranslater::OnCallGuildInvite : 0 == pclGuild, Guild Key = %d",
                *(unsigned int*)(pb + 0xe));
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x22;
            caller->SendToGameserver((char*)&callerPkt, 0x16);
            return;
        }
        if (guild->IsSetGuildDBFlag(4) != 1)
        {
            DNF_LOG_SCOPE_LINE(0x8eb,"./log/GuildModify",
                "CPacketTranslater::OnCallGuildInvite : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",
                *(unsigned int*)(pb + 0xe));
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x22;
            caller->SendToGameserver((char*)&callerPkt, 0x16);
            return;
        }
        if (!guild->IsGuildMaster(*(unsigned int*)(pb + 0xa)) &&
            !guild->IsSubGuildMaster(*(unsigned int*)(pb + 0xa)) &&
            *(char*)((char*)caller->GetGuildMemDBInfo() + 0x15) != 0x03)
        {
            DNF_LOG_SCOPE_LINE(0x8f4,"./log/GuildModify",
                "CPacketTranslater::OnCallGuildInvite : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",
                *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa));
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x24;
            caller->SendToGameserver((char*)&callerPkt, 0x16);
            return;
        }
        if (300 < (guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff) + 1)
        {
            DNF_LOG_SCOPE_LINE(0x8fd,"./log/GuildModify",
                "CPacketTranslater::OnCallGuildInvite : cnt(%d), Guild Key = %d",
                guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff, *(unsigned int*)(pb + 0xe));
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x26;
            caller->SendToGameserver((char*)&callerPkt, 0x16);
            return;
        }
        CUser* invited =
            um->FindUser_CharName(std::string(pb + 0x12));
        if (invited == 0)
        {
            DNF_LOG_SCOPE_LINE(0x905,"./log/GuildModify",
                "CPacketTranslater::OnCallGuildInvite : 0 == pclInvitedUser, Char Key = %d",
                *(unsigned int*)(pb + 0xa));
            *(unsigned int*)((char*)&callerPkt + 0x12) = 3;
            caller->SendToGameserver((char*)&callerPkt, 0x16);
            return;
        }
        if (caller->IsBlackUser(invited->GetUniqCharNo()) != 0 ||
            invited->IsBlackUser(caller->GetUniqCharNo()) != 0)
        {
            DNF_LOG_SCOPE_LINE(0x90d,"./log/GuildModify",
                "CPacketTranslater::OnCallGuildInvite : 0 == pclInvitedUser, Char Key = %d",
                *(unsigned int*)(pb + 0xa));
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x4d;
            caller->SendToGameserver((char*)&callerPkt, 0x16);
            return;
        }
        if (invited->GetGuildKey() == 0)
        {
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0;
            caller->SendToGameserver((char*)&callerPkt, 0x16);
            invited->SetGuildInviteFact(guild->GetGuildKey(), caller->GetUniqCharNo(), 1);
            Packet_Guild_Call_Guild_Invite_To_Invited invitedPkt;
            *(unsigned int*)((char*)&invitedPkt + 0xa) = invited->GetUniqCharNo();
            *(unsigned int*)((char*)&invitedPkt + 0xe) = invited->GetIdByChannel();
            memcpy((char*)&invitedPkt + 0x12, caller->GetCharName(), 0x1d);
            memcpy((char*)&invitedPkt + 0x2f, guild->GetGuildName(), 0x16);
            invited->SendToGameserver((char*)&invitedPkt, 0x47);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x916,"./log/GuildModify",
                "CPacketTranslater::OnCallGuildInvite : 0 != pclInvitedUser.GetGuildKey(), Char Key = %d",
                *(unsigned int*)(pb + 0xa));
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x27;
            caller->SendToGameserver((char*)&callerPkt, 0x16);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnCallGuildInvite", 0x92d);
        log("./log/Except", "CPacketTranslater::OnCallGuildInvite() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x932);
        log("./log/Except", "CPacketTranslater::OnCallGuildInvite() Exception Break\n");
    }
}
```
