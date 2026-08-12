# _ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader

`CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808f03e` | `0xa79` | `0x807a6be` | `0x978` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,705 +1,642 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2fc,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xe2>
 lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x69(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink : 0 == m_pclApp",0x4(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x70(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa7>
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x995>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x894>
 lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
 mov    %eax,-0x40(%ebp)
-mov    -0x40(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0x1b(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1b4>
-mov    -0x40(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1aa>
+mov    0x8(%ebp),%eax
 movzbl 0x1b(%eax),%eax
 cmp    $0x1d,%al
-ja     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1b4>
+ja     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1aa>
 lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x40(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 lea    -0x61(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
 lea    -0x68(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-setne  %bl
+mov    %eax,-0x30(%ebp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x181>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x170>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x169>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x995>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x894>
 lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1aa>
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x40(%ebp),%edx
-mov    %eax,0x17(%edx)
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1b4>
-mov    -0x40(%ebp),%eax
-movl   $0xffffffff,0x17(%eax)
-mov    -0x40(%ebp),%eax
+mov    0x8(%ebp),%ebx
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1a2>
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1a7>
+mov    $0xffffffff,%eax
+mov    %eax,0x17(%ebx)
+mov    0x8(%ebp),%eax
 mov    0x13(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x874>
-mov    -0x40(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1d0>
+mov    0x8(%ebp),%eax
 mov    0x17(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x874>
-mov    -0x40(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x1d0>
+mov    0x8(%ebp),%eax
 movzbl 0x173(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x874>
-lea    -0x2e0(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN51Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_LinkC1Ev>
-mov    -0x40(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x2d6(%ebp)
-mov    -0x40(%ebp),%eax
-mov    0x13(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa6d>
-mov    -0x40(%ebp),%eax
-mov    0x17(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x338>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2d1(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2cd(%ebp)
-mov    -0x40(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x2e0(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-mov    %al,-0x2aa(%ebp)
-movl   $0x0,-0x30(%ebp)
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x2ec>
-mov    -0x30(%ebp),%eax
-imul   $0x68,%eax,%eax
-add    $0x30,%eax
-add    -0x40(%ebp),%eax
-lea    0xb(%eax),%edx
-mov    -0x30(%ebp),%ecx
-lea    -0x2e0(%ebp),%eax
-imul   $0x68,%ecx,%ecx
-add    $0x30,%ecx
-add    %ecx,%eax
-add    $0x7,%eax
-movl   $0x68,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-addl   $0x1,-0x30(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-movzbl %al,%eax
-cmp    -0x30(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x2b1>
-movb   $0x1,-0x2ab(%ebp)
-movw   $0x170,-0x2de(%ebp)
-movzwl -0x2de(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x2e0(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa6e>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x381>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x381>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x386>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x470>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2d1(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2cd(%ebp)
-movb   $0x2,-0x2ab(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-mov    %al,-0x2aa(%ebp)
-movl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x408>
-mov    -0x2c(%ebp),%eax
-imul   $0x68,%eax,%eax
-add    $0x30,%eax
-add    -0x40(%ebp),%eax
-lea    0xb(%eax),%edx
-mov    -0x2c(%ebp),%ecx
-lea    -0x2e0(%ebp),%eax
-imul   $0x68,%ecx,%ecx
-add    $0x30,%ecx
-add    %ecx,%eax
-add    $0x7,%eax
-movl   $0x68,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-addl   $0x1,-0x2c(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-movzbl %al,%eax
-cmp    -0x2c(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x3cd>
-mov    -0x40(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x2e0(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movw   $0x170,-0x2de(%ebp)
-movzwl -0x2de(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x2e0(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa6e>
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x4b9>
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x4b9>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x4be>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x5a8>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2d1(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2cd(%ebp)
-movb   $0x2,-0x2ab(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-mov    %al,-0x2aa(%ebp)
-movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x540>
-mov    -0x28(%ebp),%eax
-imul   $0x68,%eax,%eax
-add    $0x30,%eax
-add    -0x40(%ebp),%eax
-lea    0xb(%eax),%edx
-mov    -0x28(%ebp),%ecx
-lea    -0x2e0(%ebp),%eax
-imul   $0x68,%ecx,%ecx
-add    $0x30,%ecx
-add    %ecx,%eax
-add    $0x7,%eax
-movl   $0x68,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-addl   $0x1,-0x28(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-movzbl %al,%eax
-cmp    -0x28(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x505>
-mov    -0x40(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x2e0(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movw   $0x170,-0x2de(%ebp)
-movzwl -0x2de(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x2e0(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa6e>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x5f7>
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication22AddChattableUserWithGMEjj>
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x654>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN12CApplication20isAbleUserChatWithGMEjj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x654>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x659>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x743>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2d1(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2cd(%ebp)
-movb   $0x3,-0x2ab(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-mov    %al,-0x2aa(%ebp)
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x6db>
-mov    -0x24(%ebp),%eax
-imul   $0x68,%eax,%eax
-add    $0x30,%eax
-add    -0x40(%ebp),%eax
-lea    0xb(%eax),%edx
-mov    -0x24(%ebp),%ecx
-lea    -0x2e0(%ebp),%eax
-imul   $0x68,%ecx,%ecx
-add    $0x30,%ecx
-add    %ecx,%eax
-add    $0x7,%eax
-movl   $0x68,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-addl   $0x1,-0x24(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-movzbl %al,%eax
-cmp    -0x24(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x6a0>
-mov    -0x40(%ebp),%eax
-add    $0x1c,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x2e0(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movw   $0x170,-0x2de(%ebp)
-movzwl -0x2de(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x2e0(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa6e>
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x2e0(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2d1(%ebp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2cd(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-mov    %al,-0x2aa(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x7de>
-mov    -0x20(%ebp),%eax
-imul   $0x68,%eax,%eax
-add    $0x30,%eax
-add    -0x40(%ebp),%eax
-lea    0xb(%eax),%edx
-mov    -0x20(%ebp),%ecx
-lea    -0x2e0(%ebp),%eax
-imul   $0x68,%ecx,%ecx
-add    $0x30,%ecx
-add    %ecx,%eax
-add    $0x7,%eax
-movl   $0x68,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-addl   $0x1,-0x20(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x3a(%eax),%eax
-movzbl %al,%eax
-cmp    -0x20(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x7a3>
-mov    -0x40(%ebp),%eax
-movzbl 0x173(%eax),%eax
-mov    %al,-0x171(%ebp)
-mov    -0x40(%ebp),%eax
-movzbl 0x173(%eax),%eax
-movzbl %al,%eax
-mov    -0x40(%ebp),%edx
-add    $0x174,%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x2e0(%ebp),%eax
-add    $0x170,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x40(%ebp),%eax
-movzbl 0x173(%eax),%eax
-movzbl %al,%eax
-add    $0x170,%ax
-mov    %ax,-0x2de(%ebp)
-movzwl -0x2de(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x2e0(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-nop
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa6e>
-mov    -0x40(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x2f4>
+mov    0x8(%ebp),%eax
 movzbl 0x173(%eax),%eax
 movzbl %al,%edi
-mov    -0x40(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x17(%eax),%esi
-mov    -0x40(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x13(%eax),%ebx
 movl   $0x1d71,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink, sender(%d), receiver(%d), msglen(%d)",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink : packet->m_uSenderCharID &&  packet->m_uRecverCharID && packet->m_msgLen",0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x58(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x946>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x2a2>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x940>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x29c>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x95d>
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x2b9>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x95d>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x2b9>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x972>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x2d1>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x95d>
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x2b9>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x995>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x894>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+lea    -0x2e0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN51Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_LinkC1Ev>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x2d6(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x13(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x3c(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x96c>
+mov    0x8(%ebp),%eax
+mov    0x17(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x42c>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x2d1(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x2cd(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x2e0(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+movb   $0x1,-0x2ab(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+mov    %al,-0x2aa(%ebp)
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x3ea>
+mov    -0x2c(%ebp),%eax
+imul   $0x68,%eax,%eax
+add    $0x3b,%eax
+add    0x8(%ebp),%eax
+lea    -0x2e0(%ebp),%edx
+lea    0x37(%edx),%ecx
+mov    -0x2c(%ebp),%edx
+imul   $0x68,%edx,%edx
+lea    (%ecx,%edx,1),%edx
+movl   $0x68,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+addl   $0x1,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+movzbl %al,%eax
+cmp    -0x2c(%ebp),%eax
+setg   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x3b4>
+lea    -0x2e0(%ebp),%eax
+movw   $0x170,0x2(%eax)
+lea    -0x2e0(%ebp),%eax
+movl   $0x170,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x96d>
+movb   $0x0,-0x32(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x476>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
+cmp    $0x1,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x476>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x47b>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x483>
+movb   $0x1,-0x32(%ebp)
+movzbl -0x32(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x4d4>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x4d4>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
+cmp    $0x1,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x4d4>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x4d9>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x4e1>
+movb   $0x1,-0x32(%ebp)
+cmpb   $0x0,-0x32(%ebp)
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x5c5>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x2d1(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x2cd(%ebp)
+movb   $0x2,-0x2ab(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+mov    %al,-0x2aa(%ebp)
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x560>
+mov    -0x28(%ebp),%eax
+imul   $0x68,%eax,%eax
+add    $0x3b,%eax
+add    0x8(%ebp),%eax
+lea    -0x2e0(%ebp),%edx
+lea    0x37(%edx),%ecx
+mov    -0x28(%ebp),%edx
+imul   $0x68,%edx,%edx
+lea    (%ecx,%edx,1),%edx
+movl   $0x68,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+addl   $0x1,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+movzbl %al,%eax
+cmp    -0x28(%ebp),%eax
+setg   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x52a>
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x2e0(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x2e0(%ebp),%eax
+movw   $0x170,0x2(%eax)
+lea    -0x2e0(%ebp),%eax
+movl   $0x170,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x96d>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x619>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %ebx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication22AddChattableUserWithGMEjj>
+movb   $0x0,-0x31(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x67e>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,%ebx
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+mov    %ebx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CApplication20isAbleUserChatWithGMEjj>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x67e>
+movb   $0x1,-0x31(%ebp)
+cmpb   $0x0,-0x31(%ebp)
+je     <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x762>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x2d1(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x2cd(%ebp)
+movb   $0x3,-0x2ab(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+mov    %al,-0x2aa(%ebp)
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x6fd>
+mov    -0x24(%ebp),%eax
+imul   $0x68,%eax,%eax
+add    $0x3b,%eax
+add    0x8(%ebp),%eax
+lea    -0x2e0(%ebp),%edx
+lea    0x37(%edx),%ecx
+mov    -0x24(%ebp),%edx
+imul   $0x68,%edx,%edx
+lea    (%ecx,%edx,1),%edx
+movl   $0x68,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+addl   $0x1,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+movzbl %al,%eax
+cmp    -0x24(%ebp),%eax
+setg   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x6c7>
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x2e0(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x2e0(%ebp),%eax
+movw   $0x170,0x2(%eax)
+lea    -0x2e0(%ebp),%eax
+movl   $0x170,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x96d>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x2e0(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x2d1(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x2cd(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+mov    %al,-0x2aa(%ebp)
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x7f8>
+mov    -0x20(%ebp),%eax
+imul   $0x68,%eax,%eax
+add    $0x3b,%eax
+add    0x8(%ebp),%eax
+lea    -0x2e0(%ebp),%edx
+lea    0x37(%edx),%ecx
+mov    -0x20(%ebp),%edx
+imul   $0x68,%edx,%edx
+lea    (%ecx,%edx,1),%edx
+movl   $0x68,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memcpy>
+addl   $0x1,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x3a(%eax),%eax
+movzbl %al,%eax
+cmp    -0x20(%ebp),%eax
+setg   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x7c2>
+mov    0x8(%ebp),%eax
+movzbl 0x173(%eax),%eax
+mov    %al,-0x171(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x173(%eax),%eax
+movzbl %al,%eax
+mov    0x8(%ebp),%edx
+add    $0x174,%edx
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+lea    -0x2e0(%ebp),%eax
+add    $0x170,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x2e0(%ebp),%eax
+mov    0x8(%ebp),%edx
+movzbl 0x173(%edx),%edx
+movzbl %dl,%edx
+add    $0x170,%dx
+mov    %dx,0x2(%eax)
+lea    -0x2e0(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+lea    -0x2e0(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x96d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa11>
+jne    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x910>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1d77,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa0a>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x909>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa6e>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x96d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1d7c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa66>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x965>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0xa6e>
+jmp    <T> <_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader+0x96d>
 nop
 add    $0x2fc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  char cVar3;
  CDNFException *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  void *__src;
  bool bVar7;
  Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link local_2e4 [2];
  ushort local_2e2;
  undefined4 local_2da;
  undefined4 local_2d5;
  undefined4 local_2d1;
  undefined1 auStack_2cd [30];
  undefined1 local_2af;
  PacketHeader local_2ae;
  undefined1 auStack_2ad [312];
  PacketHeader local_175;
  undefined1 auStack_174 [256];
  string local_74 [7];
  allocator local_6d;
  string local_6c [7];
  allocator local_65;
  CMyFileLog local_64 [8];
  string local_5c [7];
  allocator local_55 [17];
  PacketHeader *local_44;
  CUser *local_40;
  CUser *local_3c;
  CUser *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808f077 to 0808f07b has its CatchHandler @ 0808f0e5 */
    std::string::string(local_74,
                        "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink : 0 == m_pclApp",
                        &local_6d);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808f096 to 0808f09a has its CatchHandler @ 0808f09d */
    CDNFException::CDNFException(pCVar4,local_74);
                    /* try { // try from 0808f0d4 to 0808f0d8 has its CatchHandler @ 0808f0db */
    std::string::~string(local_74);
    std::allocator<char>::~allocator((allocator<char> *)&local_6d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808f11b to 0808f11f has its CatchHandler @ 0808f9d3 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_44 = param_1;
  if ((param_1[0x1b] != (PacketHeader)0x0) && ((byte)param_1[0x1b] < 0x1e)) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808f166 to 0808f16a has its CatchHandler @ 0808f1ae */
    std::string::string(local_6c,(char *)(local_44 + 0x1c),&local_65);
                    /* try { // try from 0808f17d to 0808f181 has its CatchHandler @ 0808f199 */
    local_40 = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_6c);
    bVar7 = local_40 == (CUser *)0x0;
                    /* try { // try from 0808f192 to 0808f196 has its CatchHandler @ 0808f1ae */
    std::string::~string(local_6c);
    std::allocator<char>::~allocator((allocator<char> *)&local_65);
    if (bVar7) {
      *(undefined4 *)(local_44 + 0x17) = 0xffffffff;
    }
    else {
      uVar5 = CUser::GetUniqCharNo(local_40);
      *(undefined4 *)(local_44 + 0x17) = uVar5;
    }
  }
  if (((*(int *)(local_44 + 0x13) == 0) || (*(int *)(local_44 + 0x17) == 0)) ||
     (local_44[0x173] == (PacketHeader)0x0)) {
    PVar1 = local_44[0x173];
    uVar5 = *(undefined4 *)(local_44 + 0x17);
    uVar2 = *(undefined4 *)(local_44 + 0x13);
    CMyFileLog::CMyFileLog(local_64,"OnNoticeOtherChannelChatMsgHyperLink",0x1d71);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_64,"./log/Except",
               "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink, sender(%d), receiver(%d), msglen(%d)"
               ,uVar2,uVar5,(uint)(byte)PVar1);
    std::allocator<char>::allocator();
                    /* try { // try from 0808f92d to 0808f931 has its CatchHandler @ 0808f99b */
    std::string::string(local_5c,
                        "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink : packet->m_uSenderCharID &&  packet->m_uRecverCharID && packet->m_msgLen"
                        ,local_55);
    pCVar4 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808f94c to 0808f950 has its CatchHandler @ 0808f953 */
    CDNFException::CDNFException(pCVar4,local_5c);
                    /* try { // try from 0808f98a to 0808f98e has its CatchHandler @ 0808f991 */
    std::string::~string(local_5c);
    std::allocator<char>::~allocator((allocator<char> *)local_55);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808f9ce to 0808f9d2 has its CatchHandler @ 0808f9d3 */
    __cxa_throw(pCVar4,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link::
  Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link(local_2e4);
  local_2da = *(undefined4 *)(local_44 + 10);
                    /* try { // try from 0808f250 to 0808f90c has its CatchHandler @ 0808f9d3 */
  local_38 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  if (local_38 == (CUser *)0x0) {
    return;
  }
  local_3c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  if (local_3c == (CUser *)0x0) {
    local_2d5 = CUser::GetIdByChannel(local_38);
    local_2d1 = CUser::GetUniqCharNo(local_38);
    memcpy(auStack_2cd,local_44 + 0x1c,0x1d);
    local_2ae = local_44[0x3a];
    for (local_34 = 0; local_34 < (int)(uint)(byte)local_44[0x3a]; local_34 = local_34 + 1) {
      memcpy(auStack_2ad + local_34 * 0x68,local_44 + local_34 * 0x68 + 0x3b,0x68);
    }
    local_2af = 1;
    local_2e2 = 0x170;
    CUser::SendToGameserver(local_38,(char *)local_2e4,0x170);
    return;
  }
  CUser::GetUniqCharNo(local_38);
  cVar3 = CUser::IsBlackUser((uint)local_3c);
  if (cVar3 == '\0') {
LAB_0808f3bf:
    bVar7 = false;
  }
  else {
    CUser::GetUniqCharNo(local_38);
    cVar3 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
    if (cVar3 == '\x01') goto LAB_0808f3bf;
    bVar7 = true;
  }
  if (bVar7) {
    local_2d5 = CUser::GetIdByChannel(local_38);
    local_2d1 = CUser::GetUniqCharNo(local_38);
    local_2af = 2;
    local_2ae = local_44[0x3a];
    for (local_30 = 0; local_30 < (int)(uint)(byte)local_44[0x3a]; local_30 = local_30 + 1) {
      memcpy(auStack_2ad + local_30 * 0x68,local_44 + local_30 * 0x68 + 0x3b,0x68);
    }
    memcpy(auStack_2cd,local_44 + 0x1c,0x1d);
    local_2e2 = 0x170;
    CUser::SendToGameserver(local_38,(char *)local_2e4,0x170);
    return;
  }
  CUser::GetUniqCharNo(local_3c);
  cVar3 = CUser::IsBlackUser((uint)local_38);
  if (cVar3 == '\0') {
LAB_0808f4f7:
    bVar7 = false;
  }
  else {
    CUser::GetUniqCharNo(local_3c);
    cVar3 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
    if (cVar3 == '\x01') goto LAB_0808f4f7;
    bVar7 = true;
  }
  if (bVar7) {
    local_2d5 = CUser::GetIdByChannel(local_38);
    local_2d1 = CUser::GetUniqCharNo(local_38);
    local_2af = 2;
    local_2ae = local_44[0x3a];
    for (local_2c = 0; local_2c < (int)(uint)(byte)local_44[0x3a]; local_2c = local_2c + 1) {
      memcpy(auStack_2ad + local_2c * 0x68,local_44 + local_2c * 0x68 + 0x3b,0x68);
    }
    memcpy(auStack_2cd,local_44 + 0x1c,0x1d);
    local_2e2 = 0x170;
    CUser::SendToGameserver(local_38,(char *)local_2e4,0x170);
    return;
  }
  CUser::GetUniqCharNo(local_38);
  cVar3 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
  if (cVar3 != '\0') {
    CUser::GetUniqCharNo(local_3c);
    uVar6 = CUser::GetUniqCharNo(local_38);
    CApplication::_ZN12CApplication22AddChattableUserWithGMEjj(m_pclApp,uVar6);
  }
  CUser::GetUniqCharNo(local_3c);
  cVar3 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
  if (cVar3 != '\0') {
    CUser::GetUniqCharNo(local_38);
    uVar6 = CUser::GetUniqCharNo(local_3c);
    cVar3 = CApplication::_ZN12CApplication20isAbleUserChatWithGMEjj(m_pclApp,uVar6);
    if (cVar3 != '\x01') {
      bVar7 = true;
      goto LAB_0808f697;
    }
  }
  bVar7 = false;
LAB_0808f697:
  if (bVar7) {
    local_2d5 = CUser::GetIdByChannel(local_38);
    local_2d1 = CUser::GetUniqCharNo(local_38);
    local_2af = 3;
    local_2ae = local_44[0x3a];
    for (local_28 = 0; local_28 < (int)(uint)(byte)local_44[0x3a]; local_28 = local_28 + 1) {
      memcpy(auStack_2ad + local_28 * 0x68,local_44 + local_28 * 0x68 + 0x3b,0x68);
    }
    memcpy(auStack_2cd,local_44 + 0x1c,0x1d);
    local_2e2 = 0x170;
    CUser::SendToGameserver(local_38,(char *)local_2e4,0x170);
  }
  else {
    __src = (void *)CUser::GetCharName(local_38);
    memcpy(auStack_2cd,__src,0x1d);
    local_2d5 = CUser::GetIdByChannel(local_3c);
    local_2d1 = CUser::GetUniqCharNo(local_3c);
    local_2ae = local_44[0x3a];
    for (local_24 = 0; local_24 < (int)(uint)(byte)local_44[0x3a]; local_24 = local_24 + 1) {
      memcpy(auStack_2ad + local_24 * 0x68,local_44 + local_24 * 0x68 + 0x3b,0x68);
    }
    local_175 = local_44[0x173];
    memcpy(auStack_174,local_44 + 0x174,(uint)(byte)local_44[0x173]);
    local_2e2 = (byte)local_44[0x173] + 0x170;
    CUser::SendToGameserver(local_3c,(char *)local_2e4,(uint)local_2e2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4813 行）：

```cpp
void CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink : 0 == m_pclApp");
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    if (((RA_S8<27>*)pkt)->v != 0 &&
        (unsigned char)((RA_S8<27>*)pkt)->v < 0x1e)
    {
        CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x1c);
        ((RA_UINT<23>*)pkt)->v =
            target != 0 ? target->GetUniqCharNo() : 0xffffffff;
    }
    if (((RA_UINT<19>*)pkt)->v == 0 ||
        ((RA_UINT<23>*)pkt)->v == 0 ||
        ((RA_S8<371>*)pkt)->v == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d71,"./log/Except",
            "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink, sender(%d), "
            "receiver(%d), msglen(%d)",
            ((RA_UINT<19>*)pkt)->v, ((RA_UINT<23>*)pkt)->v,
            (unsigned int)(unsigned char)((RA_S8<371>*)pkt)->v);
        throw CDNFException(
            "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink : packet->m_uSenderCharID "
            "&&  packet->m_uRecverCharID && packet->m_msgLen");
    }
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link reply;
    reply.m_senderCharId = ((RA_UINT<10>*)pkt)->v;
    CUser* sender = userMgr->FindUser_CharNo(((RA_UINT<19>*)pkt)->v);
    if (sender == 0)
    {
        return;
    }
    CUser* receiver = userMgr->FindUser_CharNo(((RA_UINT<23>*)pkt)->v);
    if (receiver == 0)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        reply.m_type = 1;
        reply.m_itemCount = ((RA_U8<58>*)pkt)->v;
        for (int i = 0; i < (int)(unsigned int)(unsigned char)((RA_S8<58>*)pkt)->v; i++)
        {
            memcpy((char*)reply.m_items + i * 0x68, (char*)pkt + i * 0x68 + 0x3b, 0x68);
        }
        ((RA_U16<2>*)&reply)->v = 0x170;
        sender->SendToGameserver((char*)&reply, 0x170);
        return;
    }
    bool blocked = false;
    if (receiver->IsBlackUser(sender->GetUniqCharNo()) != 0 &&
        m_pclApp->isGM_regFromChannel(sender->GetUniqCharNo()) != 1)
    {
        blocked = true;
    }
    if (!blocked && sender->IsBlackUser(receiver->GetUniqCharNo()) != 0 &&
        m_pclApp->isGM_regFromChannel(receiver->GetUniqCharNo()) != 1)
    {
        blocked = true;
    }
    if (blocked)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        reply.m_type = 2;
        reply.m_itemCount = ((RA_U8<58>*)pkt)->v;
        for (int i = 0; i < (int)(unsigned int)(unsigned char)((RA_S8<58>*)pkt)->v; i++)
        {
            memcpy((char*)reply.m_items + i * 0x68, (char*)pkt + i * 0x68 + 0x3b, 0x68);
        }
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        ((RA_U16<2>*)&reply)->v = 0x170;
        sender->SendToGameserver((char*)&reply, 0x170);
        return;
    }
    if (m_pclApp->isGM_regFromChannel(sender->GetUniqCharNo()) != 0)
    {
        m_pclApp->AddChattableUserWithGM(sender->GetUniqCharNo(), receiver->GetUniqCharNo());
    }
    bool gmBlocked = false;
    if (m_pclApp->isGM_regFromChannel(receiver->GetUniqCharNo()) != 0)
    {
        if (m_pclApp->isAbleUserChatWithGM(receiver->GetUniqCharNo(),
                                           sender->GetUniqCharNo()) != 1)
        {
            gmBlocked = true;
        }
    }
    if (gmBlocked)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        reply.m_type = 3;
        reply.m_itemCount = ((RA_U8<58>*)pkt)->v;
        for (int i = 0; i < (int)(unsigned int)(unsigned char)((RA_S8<58>*)pkt)->v; i++)
        {
            memcpy((char*)reply.m_items + i * 0x68, (char*)pkt + i * 0x68 + 0x3b, 0x68);
        }
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        ((RA_U16<2>*)&reply)->v = 0x170;
        sender->SendToGameserver((char*)&reply, 0x170);
    }
    else
    {
        memcpy(reply.m_name, sender->GetCharName(), 0x1d);
        reply.m_idByChannel = receiver->GetIdByChannel();
        reply.m_uniqCharNo = receiver->GetUniqCharNo();
        reply.m_itemCount = ((RA_U8<58>*)pkt)->v;
        for (int i = 0; i < (int)(unsigned int)(unsigned char)((RA_S8<58>*)pkt)->v; i++)
        {
            memcpy((char*)reply.m_items + i * 0x68, (char*)pkt + i * 0x68 + 0x3b, 0x68);
        }
        reply.m_msgLen = ((RA_U8<371>*)pkt)->v;
        memcpy(reply.m_msg, (char*)pkt + 0x174,
               (unsigned int)(unsigned char)((RA_S8<371>*)pkt)->v);
        ((RA_U16<2>*)&reply)->v =
            (unsigned short)((unsigned char)((RA_S8<371>*)pkt)->v + 0x170);
        receiver->SendToGameserver((char*)&reply, ((RA_U16<2>*)&reply)->v);
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1d77, "./log/Except", "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1d7c, "./log/Except", "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink() Exception Break\n");
    }
}
```
