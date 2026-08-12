# _ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader

`CPacketTranslater::OnReplyGuildInvite(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8078908` | `0x71d` | `0x806edf6` | `0x826` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,442 +1,525 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0xdc,%esp
+sub    $0xec,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0xe2>
-lea    -0x61(%ebp),%eax
+lea    -0x5d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x61(%ebp),%eax
+lea    -0x5d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnReplyGuildInvite : 0 == m_pclApp",0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x68(%ebp),%esi
+lea    -0x64(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x68(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0xa7>
-lea    -0x68(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x61(%ebp),%eax
+lea    -0x5d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x636>
-lea    -0x61(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x738>
+lea    -0x5d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x44(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
+lea    0x10(%eax),%edx
+mov    -0x44(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
+mov    %eax,-0x40(%ebp)
+cmpl   $0x0,-0x40(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x15b>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x154>
 movl   $0x94d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x44(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyGuildInvite : 0 == pclInvitedUser, Char Key = %d",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x712>
-lea    -0x7e(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81b>
+lea    -0x7a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN42Packet_Guild_Reply_Guild_Invite_To_InvitedC1Ev>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x74(%ebp)
-mov    -0x34(%ebp),%eax
+lea    -0x7a(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x44(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x7a(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x70(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetGuildInviteCallerIdEv>
-mov    %eax,-0x24(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21GetGuildInviteGuildIdEv>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
 je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x1a5>
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x1ee>
-movl   $0x67,-0x6c(%ebp)
-lea    -0x7e(%ebp),%eax
+cmpl   $0x0,-0x38(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x1f3>
+lea    -0x7a(%ebp),%eax
+add    $0x12,%eax
+movl   $0x67,(%eax)
+lea    -0x7a(%ebp),%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 movl   $0xff,0xc(%esp)
 movl   $0x0,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetGuildInviteFactEjjh>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x712>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x290(%eax),%edx
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81b>
+mov    -0x38(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
+mov    %eax,-0x34(%ebp)
+cmpl   $0x0,-0x34(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x313>
+je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x333>
 movl   $0x962,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x20(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyGuildInvite : 0 == pclGuild, Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0x6c(%ebp)
-lea    -0x7e(%ebp),%eax
+lea    -0x7a(%ebp),%eax
+add    $0x12,%eax
+movl   $0x22,(%eax)
+lea    -0x7a(%ebp),%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 movl   $0xff,0xc(%esp)
 movl   $0x0,0x8(%esp)
 movl   $0x0,0x4(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser18SetGuildInviteFactEjjh>
+mov    -0x3c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81a>
+lea    -0xcc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN41Packet_Guild_Reply_Guild_Invite_To_CallerC1Ev>
+lea    -0xcc(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0xcc(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+lea    -0xcc(%ebp),%eax
+add    $0x12,%eax
+movl   $0x22,(%eax)
+lea    -0xcc(%ebp),%eax
+movl   $0x34,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81b>
 mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser18SetGuildInviteFactEjjh>
-mov    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x70e>
-lea    -0xbe(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN41Packet_Guild_Reply_Guild_Invite_To_CallerC1Ev>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0xb4(%ebp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xb0(%ebp)
-movl   $0x22,-0xac(%ebp)
-lea    -0xbe(%ebp),%eax
-movl   $0x34,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x712>
-mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
 movzwl %ax,%eax
 add    $0x1,%eax
 cmp    $0x12c,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x43f>
-mov    -0x30(%ebp),%eax
+setle  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x613>
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
+cmp    $0x1,%al
+jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x533>
+lea    -0xcc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN27Packet_DBMW_Save_Guild_JoinC1Ev>
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
+mov    %eax,-0x2c(%ebp)
+movb   $0x0,-0x25(%ebp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x3af>
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface10GetGroupNoEv>
+mov    %al,-0x25(%ebp)
+lea    -0xcc(%ebp),%eax
+add    $0xa,%eax
+movzbl -0x25(%ebp),%edx
+mov    %edx,%ecx
+shl    $0x18,%ecx
+mov    -0x38(%ebp),%edx
+and    $0xffffff,%edx
+or     %ecx,%edx
+mov    %edx,(%eax)
+lea    -0xcc(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x38(%ebp),%eax
+shr    $0x18,%eax
+mov    %al,(%edx)
+lea    -0xcc(%ebp),%eax
+lea    0xf(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %al,(%edx)
+lea    -0xcc(%ebp),%eax
+add    $0x10,%eax
+mov    -0x2c(%ebp),%edx
+shr    $0x8,%edx
+mov    %dx,(%eax)
+lea    -0xcc(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x2c(%ebp),%eax
+shr    $0x18,%eax
+mov    %al,(%edx)
+lea    -0xcc(%ebp),%eax
+lea    0x13(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %al,(%edx)
+lea    -0xcc(%ebp),%eax
+add    $0x14,%eax
+mov    -0x3c(%ebp),%edx
+shr    $0x8,%edx
+mov    %dx,(%eax)
+lea    -0xcc(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x3c(%ebp),%eax
+shr    $0x18,%eax
+mov    %al,(%edx)
+lea    -0xcc(%ebp),%eax
+lea    0x17(%eax),%ebx
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xcc(%ebp),%eax
+add    $0x1b,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0xcc(%ebp),%eax
+lea    0x38(%eax),%ebx
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6GetJobEv>
+mov    %al,(%ebx)
+lea    -0xcc(%ebp),%eax
+lea    0x39(%eax),%ebx
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGrowthTypeEv>
+mov    %al,(%ebx)
+lea    -0xcc(%ebp),%eax
+lea    0x3a(%eax),%ebx
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8GetLevelEv>
+mov    %al,(%ebx)
+lea    -0xcc(%ebp),%eax
+lea    0x3b(%eax),%ebx
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6GetSexEv>
+mov    %al,(%ebx)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser6GetSsnEv>
+movl   $0x2,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xcc(%ebp),%eax
+add    $0x3c,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0xcc(%ebp),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler11GetDBServerEv>
+movl   $0x40,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12SendToServerEPci>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x5eb>
+mov    -0x3c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x5eb>
+lea    -0xcc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN41Packet_Guild_Reply_Guild_Invite_To_CallerC1Ev>
+lea    -0xcc(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0xcc(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+lea    -0xcc(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %eax,(%edx)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xcc(%ebp),%eax
+add    $0x16,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0xcc(%ebp),%eax
+movl   $0x34,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+movl   $0xff,0xc(%esp)
+movl   $0x0,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser18SetGuildInviteFactEjjh>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81b>
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
 movzwl %ax,%ebx
 movl   $0x977,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x20(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyGuildInvite : cnt(%d), Guild Key = %d",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x26,-0x6c(%ebp)
-lea    -0x7e(%ebp),%eax
+lea    -0x7a(%ebp),%eax
+add    $0x12,%eax
+movl   $0x26,(%eax)
+lea    -0x7a(%ebp),%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 movl   $0xff,0xc(%esp)
 movl   $0x0,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetGuildInviteFactEjjh>
-mov    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
+mov    -0x3c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x711>
-lea    -0xbe(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81b>
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN41Packet_Guild_Reply_Guild_Invite_To_CallerC1Ev>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0xb4(%ebp)
-mov    -0x38(%ebp),%eax
+lea    -0xcc(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0xcc(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xb0(%ebp)
-movl   $0x26,-0xac(%ebp)
-lea    -0xbe(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0xcc(%ebp),%eax
+add    $0x12,%eax
+movl   $0x26,(%eax)
+lea    -0xcc(%ebp),%eax
 movl   $0x34,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x712>
-mov    -0x2c(%ebp),%eax
-movzbl 0xe(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x571>
-lea    -0xbe(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN27Packet_DBMW_Save_Guild_JoinC1Ev>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface10GetGroupNoEv>
-mov    %al,-0xb4(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,-0xb3(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0xaf(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,-0xab(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xa7(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xbe(%ebp),%eax
-add    $0x1b,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6GetJobEv>
-mov    %al,-0x85(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGrowthTypeEv>
-mov    %al,-0x84(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8GetLevelEv>
-mov    %al,-0x83(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6GetSexEv>
-mov    %al,-0x82(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser6GetSsnEv>
-movl   $0x2,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xbe(%ebp),%eax
-add    $0x3d,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-lea    -0xbe(%ebp),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler11GetDBServerEv>
-movl   $0x40,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x60e>
-mov    -0x24(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x60e>
-lea    -0xbe(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN41Packet_Guild_Reply_Guild_Invite_To_CallerC1Ev>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0xb4(%ebp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xb0(%ebp)
-mov    -0x2c(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0xac(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xbe(%ebp),%eax
-add    $0x16,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-lea    -0xbe(%ebp),%eax
-movl   $0x34,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-movl   $0xff,0xc(%esp)
-movl   $0x0,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser18SetGuildInviteFactEjjh>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x712>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81b>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x6b2>
+jne    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x7b8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x9b8,0x8(%esp)
+movl   $"OnReplyGuildInvite",0x4(%esp)
+lea    -0x84(%ebp),%eax
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
-movl   $0x9b8,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyGuildInvite() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x6ab>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x7b1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x712>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81b>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x9bd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyGuildInvite() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x707>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x813>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x712>
+jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x81b>
 nop
-jmp    <T> <_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader+0x712>
-nop
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

/* CPacketTranslater::OnReplyGuildInvite(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined1 uVar1;
  CDNFException *this;
  uint uVar2;
  CServerInterface *pCVar3;
  undefined4 uVar4;
  void *pvVar5;
  CServerHandler *this_00;
  Packet_Guild_Reply_Guild_Invite_To_Caller local_c2 [10];
  int local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined1 uStack_ac;
  undefined4 local_ab;
  undefined1 auStack_a7 [30];
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 auStack_85 [3];
  Packet_Guild_Reply_Guild_Invite_To_Invited local_82 [10];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  string local_6c [7];
  allocator local_65;
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [24];
  CUser *local_3c;
  CUser *local_38;
  CGuild *local_34;
  PacketHeader *local_30;
  CApplication *local_2c;
  int local_28;
  int local_24;
  
  if (m_pclApp != (CApplication *)0x0) {
    local_30 = param_1;
    local_2c = m_pclApp + 0x10;
    local_38 = (CUser *)CUserManager::FindUser_CharNo((uint)local_2c);
    if (local_38 == (CUser *)0x0) {
      uVar4 = *(undefined4 *)(local_30 + 10);
      CMyFileLog::CMyFileLog(local_64,"OnReplyGuildInvite",0x94d);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_64,"./log/Except",
                 "CPacketTranslater::OnReplyGuildInvite : 0 == pclInvitedUser, Char Key = %d",uVar4)
      ;
    }
    else {
      Packet_Guild_Reply_Guild_Invite_To_Invited::Packet_Guild_Reply_Guild_Invite_To_Invited
                (local_82);
      local_78 = *(undefined4 *)(local_30 + 10);
      local_74 = CUser::GetIdByChannel(local_38);
      local_28 = CUser::GetGuildInviteCallerId(local_38);
      local_24 = CUser::GetGuildInviteGuildId(local_38);
      if ((local_28 == 0) || (local_24 == 0)) {
        local_70 = 0x67;
        CUser::SendToGameserver(local_38,(char *)local_82,0x16);
        CUser::SetGuildInviteFact(local_38,0,0,0xff);
      }
      else {
        local_34 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290))
        ;
        if (local_34 == (CGuild *)0x0) {
          CMyFileLog::CMyFileLog(local_5c,"OnReplyGuildInvite",0x962);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_5c,"./log/GuildModify",
                     "CPacketTranslater::OnReplyGuildInvite : 0 == pclGuild, Guild Key = %d",
                     local_24);
          local_70 = 0x22;
          CUser::SendToGameserver(local_38,(char *)local_82,0x16);
          CUser::SetGuildInviteFact(local_38,0,0,0xff);
          local_3c = (CUser *)CUserManager::FindUser_CharNo((uint)local_2c);
          if (local_3c != (CUser *)0x0) {
            Packet_Guild_Reply_Guild_Invite_To_Caller::Packet_Guild_Reply_Guild_Invite_To_Caller
                      (local_c2);
            local_b8 = local_28;
            local_b4 = CUser::GetIdByChannel(local_3c);
            local_b0 = 0x22;
            CUser::SendToGameserver(local_3c,(char *)local_c2,0x34);
          }
        }
        else {
          uVar2 = CGuild::GetTotalCnt_Of_GuildDBInfo(local_34);
          if ((uVar2 & 0xffff) + 1 < 0x12d) {
            if (local_30[0xe] == (PacketHeader)0x1) {
              Packet_DBMW_Save_Guild_Join::Packet_DBMW_Save_Guild_Join
                        ((Packet_DBMW_Save_Guild_Join *)local_c2);
              pCVar3 = (CServerInterface *)CUser::GetGameServer(local_38);
              uVar1 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar3);
              local_b8 = CONCAT31((int3)local_24,uVar1);
              local_b4._0_1_ = (undefined1)((uint)local_24 >> 0x18);
              uVar4 = CUser::GetDBID(local_38);
              local_b4._1_3_ = (undefined3)uVar4;
              local_b0._1_3_ = (undefined3)local_28;
              local_b0 = CONCAT31(local_b0._1_3_,(char)((uint)uVar4 >> 0x18));
              uStack_ac = (undefined1)((uint)local_28 >> 0x18);
              local_ab = CUser::GetUniqCharNo(local_38);
              pvVar5 = (void *)CUser::GetCharName(local_38);
              memcpy(auStack_a7,pvVar5,0x1d);
              local_89 = CUser::GetJob(local_38);
              local_88 = CUser::GetGrowthType(local_38);
              local_87 = CUser::GetLevel(local_38);
              local_86 = CUser::GetSex(local_38);
              pvVar5 = (void *)CUser::GetSsn(local_38);
              memcpy(auStack_85,pvVar5,2);
              this_00 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
              pCVar3 = (CServerInterface *)CServerHandler::GetDBServer(this_00);
              CServerInterface::_ZN16CServerInterface12SendToServerEPci
                        (pCVar3,(char *)local_c2,0x40);
            }
            else {
              local_3c = (CUser *)CUserManager::FindUser_CharNo((uint)local_2c);
              if (local_3c != (CUser *)0x0) {
                Packet_Guild_Reply_Guild_Invite_To_Caller::Packet_Guild_Reply_Guild_Invite_To_Caller
                          (local_c2);
                local_b8 = local_28;
                local_b4 = CUser::GetIdByChannel(local_3c);
                local_b0 = (uint)(byte)local_30[0xe];
                pvVar5 = (void *)CUser::GetCharName(local_38);
                memcpy(&uStack_ac,pvVar5,0x1d);
                CUser::SendToGameserver(local_3c,(char *)local_c2,0x34);
              }
            }
            CUser::SetGuildInviteFact(local_38,0,0,0xff);
          }
          else {
            uVar2 = CGuild::GetTotalCnt_Of_GuildDBInfo(local_34);
            CMyFileLog::CMyFileLog(local_54,"OnReplyGuildInvite",0x977);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_54,"./log/GuildModify",
                       "CPacketTranslater::OnReplyGuildInvite : cnt(%d), Guild Key = %d",
                       uVar2 & 0xffff,local_24);
            local_70 = 0x26;
            CUser::SendToGameserver(local_38,(char *)local_82,0x16);
            CUser::SetGuildInviteFact(local_38,0,0,0xff);
            local_3c = (CUser *)CUserManager::FindUser_CharNo((uint)local_2c);
            if (local_3c != (CUser *)0x0) {
              Packet_Guild_Reply_Guild_Invite_To_Caller::Packet_Guild_Reply_Guild_Invite_To_Caller
                        (local_c2);
              local_b8 = local_28;
              local_b4 = CUser::GetIdByChannel(local_3c);
              local_b0 = 0x26;
              CUser::SendToGameserver(local_3c,(char *)local_c2,0x34);
            }
          }
        }
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08078941 to 08078945 has its CatchHandler @ 080789af */
  std::string::string(local_6c,"CPacketTranslater::OnReplyGuildInvite : 0 == m_pclApp",&local_65);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08078960 to 08078964 has its CatchHandler @ 08078967 */
  CDNFException::CDNFException(this,local_6c);
                    /* try { // try from 0807899e to 080789a2 has its CatchHandler @ 080789a5 */
  std::string::~string(local_6c);
  std::allocator<char>::~allocator((allocator<char> *)&local_65);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080789e5 to 08078f15 has its CatchHandler @ 08078f3e */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1750 行）：

```cpp
void CPacketTranslater::OnReplyGuildInvite(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnReplyGuildInvite : 0 == m_pclApp");
    unsigned int charNo = *(unsigned int*)((char*)pkt + 0xa);
    CUser* invited;
    if ((invited = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x94d,"./log/Except",
            "CPacketTranslater::OnReplyGuildInvite : 0 == pclInvitedUser, Char Key = %d", charNo);
        return;
    }
    Packet_Guild_Reply_Guild_Invite_To_Invited invitedPkt;
    *(unsigned int*)((char*)&invitedPkt + 0xa) = charNo;
    *(unsigned int*)((char*)&invitedPkt + 0xe) = invited->GetIdByChannel();
    int callerId = (int)invited->GetGuildInviteCallerId();
    int guildId = (int)invited->GetGuildInviteGuildId();
    if (callerId == 0 || guildId == 0)
    {
        *(unsigned int*)((char*)&invitedPkt + 0x12) = 0x67;
        invited->SendToGameserver((char*)&invitedPkt, 0x16);
        invited->SetGuildInviteFact(0, 0, 0xff);
        return;
    }
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild((unsigned int)guildId)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x962,"./log/GuildModify",
            "CPacketTranslater::OnReplyGuildInvite : 0 == pclGuild, Guild Key = %d", guildId);
        *(unsigned int*)((char*)&invitedPkt + 0x12) = 0x22;
        invited->SendToGameserver((char*)&invitedPkt, 0x16);
        invited->SetGuildInviteFact(0, 0, 0xff);
        CUser* caller;
        if ((caller = (&m_pclApp->m_userManager)->FindUser_CharNo((unsigned int)callerId)) != 0)
        {
            Packet_Guild_Reply_Guild_Invite_To_Caller callerPkt;
            *(int*)((char*)&callerPkt + 0xa) = callerId;
            *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x22;
            caller->SendToGameserver((char*)&callerPkt, 0x34);
        }
        return;
    }
    if ((guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff) + 1 < 0x12d)
    {
        if (*(char*)((char*)pkt + 0xe) == 1)
        {
            Packet_DBMW_Save_Guild_Join joinPkt;
            unsigned int dbid = invited->GetDBID();
            unsigned char group = 0;
            if (invited->GetGameServer() != 0)
            {
                group = invited->GetGameServer()->GetGroupNo();
            }
            *(unsigned int*)((char*)&joinPkt + 0xa) =
                ((unsigned int)group << 24) | ((unsigned int)guildId & 0xffffff);
            *(unsigned char*)((char*)&joinPkt + 0xe) = (unsigned char)((unsigned int)guildId >> 24);
            *(unsigned char*)((char*)&joinPkt + 0xf) = (unsigned char)(dbid & 0xff);
            *(unsigned short*)((char*)&joinPkt + 0x10) = (unsigned short)((dbid >> 8) & 0xffff);
            *(unsigned char*)((char*)&joinPkt + 0x12) = (unsigned char)(dbid >> 24);
            *(unsigned char*)((char*)&joinPkt + 0x13) = (unsigned char)((unsigned int)callerId & 0xff);
            *(unsigned short*)((char*)&joinPkt + 0x14) =
                (unsigned short)(((unsigned int)callerId >> 8) & 0xffff);
            *(unsigned char*)((char*)&joinPkt + 0x16) = (unsigned char)((unsigned int)callerId >> 24);
            *(unsigned int*)((char*)&joinPkt + 0x17) = invited->GetUniqCharNo();
            memcpy((char*)&joinPkt + 0x1b, invited->GetCharName(), 0x1d);
            *(unsigned char*)((char*)&joinPkt + 0x38) = invited->GetJob();
            *(unsigned char*)((char*)&joinPkt + 0x39) = invited->GetGrowthType();
            *(unsigned char*)((char*)&joinPkt + 0x3a) = invited->GetLevel();
            *(unsigned char*)((char*)&joinPkt + 0x3b) = invited->GetSex();
            memcpy((char*)&joinPkt + 0x3c, invited->GetSsn(), 2);
            m_pclApp->Get_ServerHandler()->GetDBServer()->SendToServer((char*)&joinPkt, 0x40);
        }
        else
        {
            CUser* caller;
            if ((caller = (&m_pclApp->m_userManager)->FindUser_CharNo((unsigned int)callerId)) != 0)
            {
                Packet_Guild_Reply_Guild_Invite_To_Caller callerPkt;
                *(int*)((char*)&callerPkt + 0xa) = callerId;
                *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
                *(unsigned int*)((char*)&callerPkt + 0x12) =
                    (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe);
                memcpy((char*)&callerPkt + 0x16, invited->GetCharName(), 0x1d);
                caller->SendToGameserver((char*)&callerPkt, 0x34);
            }
        }
        invited->SetGuildInviteFact(0, 0, 0xff);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x977,"./log/GuildModify",
            "CPacketTranslater::OnReplyGuildInvite : cnt(%d), Guild Key = %d",
            guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff, guildId);
        *(unsigned int*)((char*)&invitedPkt + 0x12) = 0x26;
        invited->SendToGameserver((char*)&invitedPkt, 0x16);
        invited->SetGuildInviteFact(0, 0, 0xff);
        CUser* caller;
        if ((caller = (&m_pclApp->m_userManager)->FindUser_CharNo((unsigned int)callerId)) != 0)
        {
            Packet_Guild_Reply_Guild_Invite_To_Caller callerPkt;
            *(int*)((char*)&callerPkt + 0xa) = callerId;
            *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x26;
            caller->SendToGameserver((char*)&callerPkt, 0x34);
        }
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnReplyGuildInvite", 0x9b8);
        log("./log/Except", "CPacketTranslater::OnReplyGuildInvite() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x9bd);
        log("./log/Except", "CPacketTranslater::OnReplyGuildInvite() Exception Break\n");
    }
}
```
