# _ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader

`CPacketTranslater::OnDBReplyGuildSecede(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807a888` | `0x6c9` | `0x8070e40` | `0x6dd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,434 +1,444 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x114c,%esp
+sub    $0x216c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0xe2>
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x59(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede : 0 == m_pclApp",0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x60(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0xa7>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5e8>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5f2>
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
+lea    -0x135(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN31Packet_Guild_Reply_Guild_SecedeC1Ev>
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x1a,%eax
+movzbl (%eax),%eax
+mov    %al,-0x2d(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x3d,%eax
+mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x28(%ebp)
-lea    -0x125(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN31Packet_Guild_Reply_Guild_SecedeC1Ev>
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
+cmpl   $0x0,-0x28(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x169>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x19a>
 movl   $0xb9e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede : 0 == pclCaller, Char Key = %d",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6d2>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x1da>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x1ff>
 movl   $0xba3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Char Key = %d (Maybe Requester was logout)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6d2>
+lea    -0x135(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x40(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x135(%ebp),%ebx
+add    $0xe,%ebx
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
+mov    %ax,(%ebx)
+lea    -0x135(%ebp),%eax
+lea    0x10(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x135(%ebp),%eax
+lea    0x14(%eax),%ebx
 mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x11b(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
-mov    %ax,-0x117(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x115(%ebp)
-mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x111(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-mov    %al,-0x109(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x1b(%eax),%eax
-mov    -0x28(%ebp),%edx
-add    $0x1f,%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x125(%ebp),%eax
-add    $0x1d,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild12GetGuildNameEv>
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x125(%ebp),%eax
-add    $0x3b,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x2b2>
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-cmp    $0x1,%eax
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x2b2>
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x10d(%ebp)
-lea    -0x125(%ebp),%eax
-movl   $0x52,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
-cmp    %eax,%edx
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x44a>
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
+mov    %eax,(%ebx)
+lea    -0x135(%ebp),%eax
+lea    0x18(%eax),%edx
+movzbl -0x2d(%ebp),%eax
+mov    %al,(%edx)
+cmpl   $0x0,-0x34(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x267>
+cmpl   $0x1,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5c2>
+mov    -0x3c(%ebp),%eax
+cmp    -0x38(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x407>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-setne  %al
+sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x348>
-lea    -0x7a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN28Packet_Guild_Exp_Book_DeleteC1Ev>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x70(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x6c(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x387>
+lea    -0x76(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15Packet_No_CacheC1Ev>
+lea    -0x76(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x76(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-mov    %eax,-0x64(%ebp)
+mov    %eax,(%ebx)
+lea    -0x76(%ebp),%eax
+add    $0x12,%eax
+movl   $0x1,(%eax)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x76(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
+lea    -0x76(%ebp),%eax
+add    $0x12,%eax
+movl   $0x2,(%eax)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x76(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader>
+lea    -0x2149(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN21Packet_DBMW_Query_MsgC1Ev>
+lea    -0x2149(%ebp),%eax
+add    $0xa,%eax
+movl   $0x2,(%eax)
+lea    -0x2149(%ebp),%eax
+add    $0xe,%eax
+movl   $0x4f00,(%eax)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"upDate charac_info set guild_secede = 1 where charac_no = %u",0x4(%esp)
+lea    -0x1136(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <sprintf>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x2149(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x407>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN28Packet_Guild_Exp_Book_DeleteC1Ev>
+lea    -0x90(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x68(%ebp)
-lea    -0x7a(%ebp),%eax
-mov    %eax,0x4(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+lea    -0x90(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x44a>
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15Packet_No_CacheC1Ev>
-mov    -0x28(%ebp),%eax
-mov    0x3d(%eax),%eax
-mov    %eax,-0x86(%ebp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+lea    -0x90(%ebp),%eax
+lea    0x12(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-mov    %eax,-0x82(%ebp)
-movl   $0x1,-0x7e(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x90(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x28(%ebp),%eax
-mov    0x3d(%eax),%eax
-mov    %eax,-0x86(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-movzbl %al,%eax
-mov    %eax,-0x82(%ebp)
-movl   $0x2,-0x7e(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x90(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader>
-lea    -0x1138(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN21Packet_DBMW_Query_MsgC1Ev>
-movl   $0x2,-0x112a(%ebp)
-movl   $0x4f00,-0x112e(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x8(%esp)
-movl   $"upDate charac_info set guild_secede = 1 where charac_no = %u",0x4(%esp)
-lea    -0x1138(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <sprintf>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x1138(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-lea    -0xd3(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x90(%ebp),%eax
+lea    0x16(%eax),%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
+mov    %eax,(%ebx)
+lea    -0x90(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+lea    -0xe3(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22ST_Notice_Guild_SecedeC1Ev>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xd3(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0xcb(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0x1a(%eax),%eax
+movl   $0x43,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0xe3(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0xe3(%ebp),%eax
+mov    -0x40(%ebp),%edx
+mov    %edx,(%eax)
+lea    -0xe3(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0xe3(%ebp),%eax
+lea    0x8(%eax),%edx
+movzbl -0x2d(%ebp),%eax
 cbtw
-mov    %ax,-0xc7(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %ax,(%edx)
+mov    0x8(%ebp),%eax
 add    $0x1f,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xd3(%ebp),%eax
-add    $0x25,%eax
+lea    -0xe3(%ebp),%eax
+add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xd3(%ebp),%eax
-add    $0xe,%eax
+lea    -0xe3(%ebp),%eax
+add    $0x2b,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0xd3(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+lea    -0xe3(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-lea    0x290(%edx),%ecx
-lea    -0xd3(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+lea    -0xe3(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede>
 movl   $0x0,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5bc>
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-cmp    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5bc>
-mov    -0x2c(%ebp),%eax
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x591>
+cmpl   $0x1,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x591>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
 test   %ax,%ax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5a2>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x577>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
 movzwl %ax,%esi
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0xbf3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyGuildSecede : Guild(%d) Deleted, rest member count(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x290(%eax),%edx
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager12GuildDismissEP6CGuild>
-movl   $0x0,-0x10d(%ebp)
-lea    -0x125(%ebp),%eax
+lea    -0x135(%ebp),%eax
+add    $0x1a,%eax
+movl   $0x0,(%eax)
+lea    -0x135(%ebp),%eax
 movl   $0x52,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6d2>
+lea    -0x135(%ebp),%eax
+lea    0x1a(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x135(%ebp),%eax
+movl   $0x52,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6d2>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x664>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x672>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xbff,0x8(%esp)
+movl   $"OnDBReplyGuildSecede",0x4(%esp)
+lea    -0x98(%ebp),%eax
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
-movl   $0xbff,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildSecede() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x65d>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x66b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6d2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xc04,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildSecede() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0xa0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6b9>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6cd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x114c,%esp
+add    $0x216c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBReplyGuildSecede(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader
               (PacketHeader *param_1)

{
  short sVar1;
  CDNFException *this;
  void *pvVar2;
  CServerHandler *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  Packet_DBMW_Query_Msg local_113c [10];
  undefined4 local_1132;
  undefined4 local_112e;
  char acStack_112a [4097];
  Packet_Guild_Reply_Guild_Secede local_129 [10];
  undefined4 local_11f;
  undefined2 local_11b;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  PacketHeader local_10d;
  undefined1 auStack_10c [30];
  undefined1 auStack_ee [23];
  undefined4 local_d7 [2];
  undefined4 local_cf;
  short local_cb;
  undefined1 auStack_c9 [23];
  undefined1 auStack_b2 [30];
  Packet_No_Cache local_94 [10];
  undefined4 local_8a;
  uint local_86;
  undefined4 local_82;
  Packet_Guild_Exp_Book_Delete local_7e [10];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  string local_64 [7];
  allocator local_5d;
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  CUser *local_34;
  CGuild *local_30;
  PacketHeader *local_2c;
  CApplication *local_28;
  CUser *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807a8c1 to 0807a8c5 has its CatchHandler @ 0807a92f */
    std::string::string(local_64,"CPacketTranslater::OnRequestGuildSecede : 0 == m_pclApp",&local_5d
                       );
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807a8e0 to 0807a8e4 has its CatchHandler @ 0807a8e7 */
    CDNFException::CDNFException(this,local_64);
                    /* try { // try from 0807a91e to 0807a922 has its CatchHandler @ 0807a925 */
    std::string::~string(local_64);
    std::allocator<char>::~allocator((allocator<char> *)&local_5d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807a965 to 0807ae6a has its CatchHandler @ 0807ae70 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  Packet_Guild_Reply_Guild_Secede::Packet_Guild_Reply_Guild_Secede(local_129);
  local_28 = m_pclApp + 0x10;
  local_34 = (CUser *)CUserManager::FindUser_CharNo((uint)local_28);
  if (local_34 == (CUser *)0x0) {
    uVar5 = *(undefined4 *)(local_2c + 0xe);
    CMyFileLog::CMyFileLog(local_5c,"OnDBReplyGuildSecede",0xb9e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_5c,"./log/Except",
               "CPacketTranslater::OnRequestGuildSecede : 0 == pclCaller, Char Key = %d",uVar5);
  }
  else {
    local_30 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
    if (local_30 == (CGuild *)0x0) {
      uVar5 = *(undefined4 *)(local_2c + 0xe);
      CMyFileLog::CMyFileLog(local_54,"OnDBReplyGuildSecede",0xba3);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_54,"./log/GuildModify",
                 "CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Char Key = %d (Maybe Requester was logout)"
                 ,uVar5);
    }
    else {
      local_11f = *(undefined4 *)(local_2c + 10);
      local_11b = CGuild::GetTotalCnt_Of_GuildDBInfo(local_30);
      local_119 = *(undefined4 *)(local_2c + 0xe);
      local_115 = CUser::GetIdByChannel(local_34);
      local_10d = local_2c[0x1a];
      memcpy(auStack_10c,local_2c + 0x1f,*(size_t *)(local_2c + 0x1b));
      pvVar2 = (void *)CGuild::GetGuildName(local_30);
      memcpy(auStack_ee,pvVar2,0x16);
      if ((*(int *)(local_2c + 0x16) == 0) || (*(int *)(local_2c + 0x16) == 1)) {
        if (*(int *)(local_2c + 0xe) != *(int *)(local_2c + 0x12)) {
          local_24 = (CUser *)CUserManager::FindUser_CharNo((uint)local_28);
          if (local_24 == (CUser *)0x0) {
            Packet_No_Cache::_ZN15Packet_No_CacheC2Ev(local_94);
            local_8a = *(undefined4 *)(local_2c + 0x3d);
            local_86 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
            local_86 = local_86 & 0xff;
            local_82 = 1;
            pCVar3 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
            CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
                      (pCVar3,(PacketHeader *)local_94);
            local_8a = *(undefined4 *)(local_2c + 0x3d);
            local_86 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
            local_86 = local_86 & 0xff;
            local_82 = 2;
            pCVar3 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
            CServerHandler::_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader
                      (pCVar3,(PacketHeader *)local_94);
            Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg(local_113c);
            local_112e = 2;
            local_1132 = 0x4f00;
            sprintf(acStack_112a,"upDate charac_info set guild_secede = 1 where charac_no = %u",
                    *(undefined4 *)(local_2c + 0x12));
            pCVar3 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
            CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
                      (pCVar3,(PacketHeader *)local_113c);
          }
          else {
            Packet_Guild_Exp_Book_Delete::Packet_Guild_Exp_Book_Delete(local_7e);
            local_74 = CUser::GetIdByChannel(local_24);
            local_70 = CUser::GetUniqCharNo(local_24);
            local_68 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
            local_68 = local_68 & 0xff;
            local_6c = CUser::GetDBID(local_24);
            CUser::SendTcpGameserver(local_24,(PacketHeader *)local_7e);
          }
        }
        ST_Notice_Guild_Secede::ST_Notice_Guild_Secede((ST_Notice_Guild_Secede *)local_d7);
        local_d7[0] = *(undefined4 *)(local_2c + 10);
        local_cf = *(undefined4 *)(local_2c + 0x12);
        local_cb = (short)(char)local_2c[0x1a];
        memcpy(auStack_b2,local_2c + 0x1f,0x1d);
        pvVar2 = (void *)CGuild::GetGuildName(local_30);
        memcpy(auStack_c9,pvVar2,0x16);
        CGuild::NoticeSecedeToGuildMember(local_30,(char *)local_d7);
        CGuildManager::_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede
                  ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_2c + 10),
                   (ST_Notice_Guild_Secede *)local_d7);
        CGuild::SendGuildInfoToMembers(local_30,false);
        if ((local_30 != (CGuild *)0x0) && (*(int *)(local_2c + 0x16) == 1)) {
          sVar1 = CGuild::GetTotalCnt_Of_GuildDBInfo(local_30);
          if (sVar1 != 0) {
            uVar4 = CGuild::GetTotalCnt_Of_GuildDBInfo(local_30);
            uVar5 = CGuild::GetGuildKey(local_30);
            CMyFileLog::CMyFileLog(local_4c,"OnDBReplyGuildSecede",0xbf3);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_4c,"./log/GuildModify",
                       "CPacketTranslater::OnDBReplyGuildSecede : Guild(%d) Deleted, rest member count(%d)"
                       ,uVar5,uVar4 & 0xffff);
          }
          CGuildManager::_ZN13CGuildManager12GuildDismissEP6CGuild
                    ((CGuildManager *)(m_pclApp + 0x290),local_30);
        }
        local_111 = 0;
        CUser::SendToGameserver(local_34,(char *)local_129,0x52);
      }
      else {
        local_111 = *(undefined4 *)(local_2c + 0x16);
        CUser::SendToGameserver(local_34,(char *)local_129,0x52);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2202 行）：

```cpp
void CPacketTranslater::OnDBReplyGuildSecede(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildSecede : 0 == m_pclApp");
    Packet_Guild_Reply_Guild_Secede resp;
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int requesterCharNo = *(unsigned int*)((char*)pkt + 0xe);
    unsigned int targetCharNo = *(unsigned int*)((char*)pkt + 0x12);
    int secedeType = *(int*)((char*)pkt + 0x16);
    unsigned char secedeFlag = *(unsigned char*)((char*)pkt + 0x1a);
    unsigned int dbid = *(unsigned int*)((char*)pkt + 0x3d);
    CUser* requester;
    if ((requester = (&m_pclApp->m_userManager)->FindUser_CharNo(requesterCharNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xb9e,"./log/Except",
            "CPacketTranslater::OnRequestGuildSecede : 0 == pclCaller, Char Key = %d",
            requesterCharNo);
        return;
    }
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0xba3,"./log/GuildModify",
            "CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Char Key = %d (Maybe Requester was logout)",
            requesterCharNo);
        return;
    }
    *(unsigned int*)((char*)&resp + 0xa) = guildKey;
    *(unsigned short*)((char*)&resp + 0xe) = guild->GetTotalCnt_Of_GuildDBInfo();
    *(unsigned int*)((char*)&resp + 0x10) = requesterCharNo;
    *(unsigned int*)((char*)&resp + 0x14) = requester->GetIdByChannel();
    *(unsigned char*)((char*)&resp + 0x18) = secedeFlag;
    if (secedeType == 0 || secedeType == 1)
    {
        if (requesterCharNo != targetCharNo)
        {
            CUser* target;
            if ((target = (&m_pclApp->m_userManager)->FindUser_CharNo(targetCharNo)) == 0)
            {
                Packet_No_Cache noCache;
                *(unsigned int*)((char*)&noCache + 0xa) = dbid;
                *(unsigned int*)((char*)&noCache + 0xe) =
                    (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
                *(unsigned int*)((char*)&noCache + 0x12) = 1;
                m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&noCache);
                *(unsigned int*)((char*)&noCache + 0x12) = 2;
                m_pclApp->Get_ServerHandler()->SendTcpGameServerFirst(&noCache);
                Packet_DBMW_Query_Msg query;
                *(unsigned int*)((char*)&query + 0xa) = 2;
                *(unsigned int*)((char*)&query + 0xe) = 0x4f00;
                char sql[4097];
                sprintf(sql, "upDate charac_info set guild_secede = 1 where charac_no = %u",
                        targetCharNo);
                m_pclApp->Get_ServerHandler()->SendToDB(&query);
            }
            else
            {
                Packet_Guild_Exp_Book_Delete expDel;
                *(unsigned int*)((char*)&expDel + 0xa) = target->GetIdByChannel();
                *(unsigned int*)((char*)&expDel + 0xe) = target->GetUniqCharNo();
                *(unsigned int*)((char*)&expDel + 0x12) =
                    (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
                *(unsigned int*)((char*)&expDel + 0x16) = target->GetDBID();
                target->SendTcpGameserver((PacketHeader*)&expDel);
            }
        }
        ST_Notice_Guild_Secede notice;
        memset(&notice, 0, sizeof(notice));
        *(unsigned int*)((char*)&notice + 0) = guildKey;
        *(unsigned int*)((char*)&notice + 4) = targetCharNo;
        *(unsigned short*)((char*)&notice + 8) = (unsigned short)(signed char)secedeFlag;
        memcpy((char*)&notice + 0xe, (char*)pkt + 0x1f, 0x1d);
        memcpy((char*)&notice + 0x2b, guild->GetGuildName(), 0x16);
        guild->NoticeSecedeToGuildMember((char*)&notice);
        (&m_pclApp->m_guildManager)->GuildSecede(guildKey, notice);
        guild->SendGuildInfoToMembers(false);
        if (guild != 0 && secedeType == 1)
        {
            if (guild->GetTotalCnt_Of_GuildDBInfo() != 0)
            {
                DNF_LOG_SCOPE_LINE(0xbf3,"./log/GuildModify",
                    "CPacketTranslater::OnDBReplyGuildSecede : Guild(%d) Deleted, rest member count(%d)",
                    guild->GetGuildKey(), guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff);
            }
            (&m_pclApp->m_guildManager)->GuildDismiss(guild);
        }
        *(unsigned int*)((char*)&resp + 0x1a) = 0;
        requester->SendToGameserver((char*)&resp, 0x52);
    }
    else
    {
        *(unsigned int*)((char*)&resp + 0x1a) = (unsigned int)secedeType;
        requester->SendToGameserver((char*)&resp, 0x52);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBReplyGuildSecede", 0xbff);
        log("./log/Except", "CPacketTranslater::OnRequestGuildSecede() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xc04);
        log("./log/Except", "CPacketTranslater::OnRequestGuildSecede() Exception Break\n");
    }
}
```
